#include "protos.h"

void f_0069e01a(void)
{
    FN_ENTER(0x0069e01a);
    /* 0069e01a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e01c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e01e: call 0x69bdf0 */ r_esp -= 4; W32(r_esp, 0x69e023u); f_0069bdf0();
    /* 0069e023: jmp 0x69e136 */ goto L_0069e136;
L_0069e136:; BB(0x0069e136);
    /* 0069e136: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e138: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e13a: movzx eax, word ptr [edi + 0x6d0] */ r_eax = (u32)R16((u32)(r_edi+0x6d0u));
    /* 0069e141: mov edx, dword ptr [edi + 0x6cc] */ r_edx = R32((u32)(r_edi+0x6ccu));
    /* 0069e147: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0069e14e: mov dword ptr [edi + 0x60], edx */ W32((u32)(r_edi+0x60u), r_edx);
    /* 0069e151: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e153: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e158u); f_00694390();
    /* 0069e158: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e159: ret  */ FN_RET(0x0069e01a); r_esp += 4; return;
}

void f_0069e028(void)
{
    FN_ENTER(0x0069e028);
    /* 0069e028: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e02a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e02c: call 0x69c6c0 */ r_esp -= 4; W32(r_esp, 0x69e031u); f_0069c6c0();
    /* 0069e031: jmp 0x69e136 */ goto L_0069e136;
L_0069e136:; BB(0x0069e136);
    /* 0069e136: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e138: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e13a: movzx eax, word ptr [edi + 0x6d0] */ r_eax = (u32)R16((u32)(r_edi+0x6d0u));
    /* 0069e141: mov edx, dword ptr [edi + 0x6cc] */ r_edx = R32((u32)(r_edi+0x6ccu));
    /* 0069e147: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0069e14e: mov dword ptr [edi + 0x60], edx */ W32((u32)(r_edi+0x60u), r_edx);
    /* 0069e151: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e153: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e158u); f_00694390();
    /* 0069e158: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e159: ret  */ FN_RET(0x0069e028); r_esp += 4; return;
}

void f_0069e036(void)
{
    FN_ENTER(0x0069e036);
    /* 0069e036: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e038: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e03a: call 0x69c988 */ r_esp -= 4; W32(r_esp, 0x69e03fu); f_0069c988();
    /* 0069e03f: jmp 0x69e136 */ goto L_0069e136;
L_0069e136:; BB(0x0069e136);
    /* 0069e136: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e138: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e13a: movzx eax, word ptr [edi + 0x6d0] */ r_eax = (u32)R16((u32)(r_edi+0x6d0u));
    /* 0069e141: mov edx, dword ptr [edi + 0x6cc] */ r_edx = R32((u32)(r_edi+0x6ccu));
    /* 0069e147: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0069e14e: mov dword ptr [edi + 0x60], edx */ W32((u32)(r_edi+0x60u), r_edx);
    /* 0069e151: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e153: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e158u); f_00694390();
    /* 0069e158: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e159: ret  */ FN_RET(0x0069e036); r_esp += 4; return;
}

void f_0069e044(void)
{
    FN_ENTER(0x0069e044);
    /* 0069e044: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e046: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e048: call 0x69cd20 */ r_esp -= 4; W32(r_esp, 0x69e04du); f_0069cd20();
    /* 0069e04d: jmp 0x69e136 */ goto L_0069e136;
L_0069e136:; BB(0x0069e136);
    /* 0069e136: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e138: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e13a: movzx eax, word ptr [edi + 0x6d0] */ r_eax = (u32)R16((u32)(r_edi+0x6d0u));
    /* 0069e141: mov edx, dword ptr [edi + 0x6cc] */ r_edx = R32((u32)(r_edi+0x6ccu));
    /* 0069e147: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0069e14e: mov dword ptr [edi + 0x60], edx */ W32((u32)(r_edi+0x60u), r_edx);
    /* 0069e151: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e153: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e158u); f_00694390();
    /* 0069e158: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e159: ret  */ FN_RET(0x0069e044); r_esp += 4; return;
}

void f_0069e052(void)
{
    FN_ENTER(0x0069e052);
    /* 0069e052: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e054: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e056: call 0x69d1e4 */ r_esp -= 4; W32(r_esp, 0x69e05bu); f_0069d1e4();
    /* 0069e05b: jmp 0x69e136 */ goto L_0069e136;
L_0069e136:; BB(0x0069e136);
    /* 0069e136: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e138: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e13a: movzx eax, word ptr [edi + 0x6d0] */ r_eax = (u32)R16((u32)(r_edi+0x6d0u));
    /* 0069e141: mov edx, dword ptr [edi + 0x6cc] */ r_edx = R32((u32)(r_edi+0x6ccu));
    /* 0069e147: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0069e14e: mov dword ptr [edi + 0x60], edx */ W32((u32)(r_edi+0x60u), r_edx);
    /* 0069e151: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e153: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e158u); f_00694390();
    /* 0069e158: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e159: ret  */ FN_RET(0x0069e052); r_esp += 4; return;
}

void f_0069e060(void)
{
    FN_ENTER(0x0069e060);
    /* 0069e060: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e062: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e064: call 0x69d43c */ r_esp -= 4; W32(r_esp, 0x69e069u); f_0069d43c();
    /* 0069e069: jmp 0x69e136 */ goto L_0069e136;
L_0069e136:; BB(0x0069e136);
    /* 0069e136: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e138: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e13a: movzx eax, word ptr [edi + 0x6d0] */ r_eax = (u32)R16((u32)(r_edi+0x6d0u));
    /* 0069e141: mov edx, dword ptr [edi + 0x6cc] */ r_edx = R32((u32)(r_edi+0x6ccu));
    /* 0069e147: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0069e14e: mov dword ptr [edi + 0x60], edx */ W32((u32)(r_edi+0x60u), r_edx);
    /* 0069e151: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e153: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e158u); f_00694390();
    /* 0069e158: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e159: ret  */ FN_RET(0x0069e060); r_esp += 4; return;
}

void f_0069e06e(void)
{
    FN_ENTER(0x0069e06e);
    /* 0069e06e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e070: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e072: call 0x69d8f4 */ r_esp -= 4; W32(r_esp, 0x69e077u); f_0069d8f4();
    /* 0069e077: jmp 0x69e136 */ goto L_0069e136;
L_0069e136:; BB(0x0069e136);
    /* 0069e136: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e138: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e13a: movzx eax, word ptr [edi + 0x6d0] */ r_eax = (u32)R16((u32)(r_edi+0x6d0u));
    /* 0069e141: mov edx, dword ptr [edi + 0x6cc] */ r_edx = R32((u32)(r_edi+0x6ccu));
    /* 0069e147: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0069e14e: mov dword ptr [edi + 0x60], edx */ W32((u32)(r_edi+0x60u), r_edx);
    /* 0069e151: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e153: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e158u); f_00694390();
    /* 0069e158: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e159: ret  */ FN_RET(0x0069e06e); r_esp += 4; return;
}

void f_0069e07c(void)
{
    FN_ENTER(0x0069e07c);
    /* 0069e07c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e07e: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e080: call 0x69dd60 */ r_esp -= 4; W32(r_esp, 0x69e085u); f_0069dd60();
    /* 0069e085: jmp 0x69e136 */ goto L_0069e136;
L_0069e136:; BB(0x0069e136);
    /* 0069e136: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e138: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e13a: movzx eax, word ptr [edi + 0x6d0] */ r_eax = (u32)R16((u32)(r_edi+0x6d0u));
    /* 0069e141: mov edx, dword ptr [edi + 0x6cc] */ r_edx = R32((u32)(r_edi+0x6ccu));
    /* 0069e147: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0069e14e: mov dword ptr [edi + 0x60], edx */ W32((u32)(r_edi+0x60u), r_edx);
    /* 0069e151: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e153: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e158u); f_00694390();
    /* 0069e158: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e159: ret  */ FN_RET(0x0069e07c); r_esp += 4; return;
}

void f_0069e08a(void)
{
    FN_ENTER(0x0069e08a);
    /* 0069e08a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e08c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e08e: call 0x69e15c */ r_esp -= 4; W32(r_esp, 0x69e093u); f_0069e15c();
    /* 0069e093: jmp 0x69e136 */ goto L_0069e136;
L_0069e136:; BB(0x0069e136);
    /* 0069e136: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e138: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e13a: movzx eax, word ptr [edi + 0x6d0] */ r_eax = (u32)R16((u32)(r_edi+0x6d0u));
    /* 0069e141: mov edx, dword ptr [edi + 0x6cc] */ r_edx = R32((u32)(r_edi+0x6ccu));
    /* 0069e147: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0069e14e: mov dword ptr [edi + 0x60], edx */ W32((u32)(r_edi+0x60u), r_edx);
    /* 0069e151: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e153: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e158u); f_00694390();
    /* 0069e158: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e159: ret  */ FN_RET(0x0069e08a); r_esp += 4; return;
}

void f_0069e098(void)
{
    FN_ENTER(0x0069e098);
    /* 0069e098: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e09a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e09c: call 0x69e718 */ r_esp -= 4; W32(r_esp, 0x69e0a1u); f_0069e718();
    /* 0069e0a1: jmp 0x69e136 */ goto L_0069e136;
L_0069e136:; BB(0x0069e136);
    /* 0069e136: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e138: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e13a: movzx eax, word ptr [edi + 0x6d0] */ r_eax = (u32)R16((u32)(r_edi+0x6d0u));
    /* 0069e141: mov edx, dword ptr [edi + 0x6cc] */ r_edx = R32((u32)(r_edi+0x6ccu));
    /* 0069e147: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0069e14e: mov dword ptr [edi + 0x60], edx */ W32((u32)(r_edi+0x60u), r_edx);
    /* 0069e151: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e153: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e158u); f_00694390();
    /* 0069e158: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e159: ret  */ FN_RET(0x0069e098); r_esp += 4; return;
}

void f_0069e0a6(void)
{
    FN_ENTER(0x0069e0a6);
    /* 0069e0a6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e0a8: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e0aa: call 0x69ebc8 */ r_esp -= 4; W32(r_esp, 0x69e0afu); f_0069ebc8();
    /* 0069e0af: jmp 0x69e136 */ goto L_0069e136;
L_0069e136:; BB(0x0069e136);
    /* 0069e136: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e138: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e13a: movzx eax, word ptr [edi + 0x6d0] */ r_eax = (u32)R16((u32)(r_edi+0x6d0u));
    /* 0069e141: mov edx, dword ptr [edi + 0x6cc] */ r_edx = R32((u32)(r_edi+0x6ccu));
    /* 0069e147: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0069e14e: mov dword ptr [edi + 0x60], edx */ W32((u32)(r_edi+0x60u), r_edx);
    /* 0069e151: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e153: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e158u); f_00694390();
    /* 0069e158: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e159: ret  */ FN_RET(0x0069e0a6); r_esp += 4; return;
}

void f_0069e0b4(void)
{
    FN_ENTER(0x0069e0b4);
    /* 0069e0b4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e0b6: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e0b8: call 0x69ef04 */ r_esp -= 4; W32(r_esp, 0x69e0bdu); f_0069ef04();
    /* 0069e0bd: jmp 0x69e136 */ goto L_0069e136;
L_0069e136:; BB(0x0069e136);
    /* 0069e136: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e138: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e13a: movzx eax, word ptr [edi + 0x6d0] */ r_eax = (u32)R16((u32)(r_edi+0x6d0u));
    /* 0069e141: mov edx, dword ptr [edi + 0x6cc] */ r_edx = R32((u32)(r_edi+0x6ccu));
    /* 0069e147: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0069e14e: mov dword ptr [edi + 0x60], edx */ W32((u32)(r_edi+0x60u), r_edx);
    /* 0069e151: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e153: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e158u); f_00694390();
    /* 0069e158: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e159: ret  */ FN_RET(0x0069e0b4); r_esp += 4; return;
}

void f_0069e0bf(void)
{
    FN_ENTER(0x0069e0bf);
    /* 0069e0bf: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e0c1: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e0c3: call 0x69f148 */ r_esp -= 4; W32(r_esp, 0x69e0c8u); f_0069f148();
    /* 0069e0c8: jmp 0x69e136 */ goto L_0069e136;
L_0069e136:; BB(0x0069e136);
    /* 0069e136: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e138: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e13a: movzx eax, word ptr [edi + 0x6d0] */ r_eax = (u32)R16((u32)(r_edi+0x6d0u));
    /* 0069e141: mov edx, dword ptr [edi + 0x6cc] */ r_edx = R32((u32)(r_edi+0x6ccu));
    /* 0069e147: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0069e14e: mov dword ptr [edi + 0x60], edx */ W32((u32)(r_edi+0x60u), r_edx);
    /* 0069e151: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e153: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e158u); f_00694390();
    /* 0069e158: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e159: ret  */ FN_RET(0x0069e0bf); r_esp += 4; return;
}

void f_0069e0ca(void)
{
    FN_ENTER(0x0069e0ca);
    /* 0069e0ca: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e0cc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e0ce: call 0x69f384 */ r_esp -= 4; W32(r_esp, 0x69e0d3u); f_0069f384();
    /* 0069e0d3: jmp 0x69e136 */ goto L_0069e136;
L_0069e136:; BB(0x0069e136);
    /* 0069e136: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e138: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e13a: movzx eax, word ptr [edi + 0x6d0] */ r_eax = (u32)R16((u32)(r_edi+0x6d0u));
    /* 0069e141: mov edx, dword ptr [edi + 0x6cc] */ r_edx = R32((u32)(r_edi+0x6ccu));
    /* 0069e147: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0069e14e: mov dword ptr [edi + 0x60], edx */ W32((u32)(r_edi+0x60u), r_edx);
    /* 0069e151: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e153: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e158u); f_00694390();
    /* 0069e158: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e159: ret  */ FN_RET(0x0069e0ca); r_esp += 4; return;
}

void f_0069e0d5(void)
{
    FN_ENTER(0x0069e0d5);
    /* 0069e0d5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e0d7: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e0d9: call 0x69f648 */ r_esp -= 4; W32(r_esp, 0x69e0deu); f_0069f648();
    /* 0069e0de: jmp 0x69e136 */ goto L_0069e136;
L_0069e136:; BB(0x0069e136);
    /* 0069e136: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e138: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e13a: movzx eax, word ptr [edi + 0x6d0] */ r_eax = (u32)R16((u32)(r_edi+0x6d0u));
    /* 0069e141: mov edx, dword ptr [edi + 0x6cc] */ r_edx = R32((u32)(r_edi+0x6ccu));
    /* 0069e147: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0069e14e: mov dword ptr [edi + 0x60], edx */ W32((u32)(r_edi+0x60u), r_edx);
    /* 0069e151: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e153: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e158u); f_00694390();
    /* 0069e158: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e159: ret  */ FN_RET(0x0069e0d5); r_esp += 4; return;
}

void f_0069e0e0(void)
{
    FN_ENTER(0x0069e0e0);
    /* 0069e0e0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e0e2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e0e4: call 0x69fe2c */ r_esp -= 4; W32(r_esp, 0x69e0e9u); f_0069fe2c();
    /* 0069e0e9: jmp 0x69e136 */ goto L_0069e136;
L_0069e136:; BB(0x0069e136);
    /* 0069e136: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e138: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e13a: movzx eax, word ptr [edi + 0x6d0] */ r_eax = (u32)R16((u32)(r_edi+0x6d0u));
    /* 0069e141: mov edx, dword ptr [edi + 0x6cc] */ r_edx = R32((u32)(r_edi+0x6ccu));
    /* 0069e147: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0069e14e: mov dword ptr [edi + 0x60], edx */ W32((u32)(r_edi+0x60u), r_edx);
    /* 0069e151: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e153: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e158u); f_00694390();
    /* 0069e158: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e159: ret  */ FN_RET(0x0069e0e0); r_esp += 4; return;
}

void f_0069e0eb(void)
{
    FN_ENTER(0x0069e0eb);
    /* 0069e0eb: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e0ed: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e0ef: call 0x6a0624 */ r_esp -= 4; W32(r_esp, 0x69e0f4u); f_006a0624();
    /* 0069e0f4: jmp 0x69e136 */ goto L_0069e136;
L_0069e136:; BB(0x0069e136);
    /* 0069e136: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e138: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e13a: movzx eax, word ptr [edi + 0x6d0] */ r_eax = (u32)R16((u32)(r_edi+0x6d0u));
    /* 0069e141: mov edx, dword ptr [edi + 0x6cc] */ r_edx = R32((u32)(r_edi+0x6ccu));
    /* 0069e147: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0069e14e: mov dword ptr [edi + 0x60], edx */ W32((u32)(r_edi+0x60u), r_edx);
    /* 0069e151: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e153: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e158u); f_00694390();
    /* 0069e158: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e159: ret  */ FN_RET(0x0069e0eb); r_esp += 4; return;
}

void f_0069e0f6(void)
{
    FN_ENTER(0x0069e0f6);
    /* 0069e0f6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e0f8: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e0fa: call 0x6a0994 */ r_esp -= 4; W32(r_esp, 0x69e0ffu); f_006a0994();
    /* 0069e0ff: jmp 0x69e136 */ goto L_0069e136;
L_0069e136:; BB(0x0069e136);
    /* 0069e136: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e138: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e13a: movzx eax, word ptr [edi + 0x6d0] */ r_eax = (u32)R16((u32)(r_edi+0x6d0u));
    /* 0069e141: mov edx, dword ptr [edi + 0x6cc] */ r_edx = R32((u32)(r_edi+0x6ccu));
    /* 0069e147: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0069e14e: mov dword ptr [edi + 0x60], edx */ W32((u32)(r_edi+0x60u), r_edx);
    /* 0069e151: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e153: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e158u); f_00694390();
    /* 0069e158: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e159: ret  */ FN_RET(0x0069e0f6); r_esp += 4; return;
}

void f_0069e101(void)
{
    FN_ENTER(0x0069e101);
    /* 0069e101: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e103: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e105: call 0x6a0eb8 */ r_esp -= 4; W32(r_esp, 0x69e10au); f_006a0eb8();
    /* 0069e10a: jmp 0x69e136 */ goto L_0069e136;
L_0069e136:; BB(0x0069e136);
    /* 0069e136: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e138: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e13a: movzx eax, word ptr [edi + 0x6d0] */ r_eax = (u32)R16((u32)(r_edi+0x6d0u));
    /* 0069e141: mov edx, dword ptr [edi + 0x6cc] */ r_edx = R32((u32)(r_edi+0x6ccu));
    /* 0069e147: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0069e14e: mov dword ptr [edi + 0x60], edx */ W32((u32)(r_edi+0x60u), r_edx);
    /* 0069e151: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e153: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e158u); f_00694390();
    /* 0069e158: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e159: ret  */ FN_RET(0x0069e101); r_esp += 4; return;
}

void f_0069e10c(void)
{
    FN_ENTER(0x0069e10c);
    /* 0069e10c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e10e: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e110: call 0x6a139c */ r_esp -= 4; W32(r_esp, 0x69e115u); f_006a139c();
    /* 0069e115: jmp 0x69e136 */ goto L_0069e136;
L_0069e136:; BB(0x0069e136);
    /* 0069e136: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e138: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e13a: movzx eax, word ptr [edi + 0x6d0] */ r_eax = (u32)R16((u32)(r_edi+0x6d0u));
    /* 0069e141: mov edx, dword ptr [edi + 0x6cc] */ r_edx = R32((u32)(r_edi+0x6ccu));
    /* 0069e147: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0069e14e: mov dword ptr [edi + 0x60], edx */ W32((u32)(r_edi+0x60u), r_edx);
    /* 0069e151: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e153: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e158u); f_00694390();
    /* 0069e158: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e159: ret  */ FN_RET(0x0069e10c); r_esp += 4; return;
}

void f_0069e117(void)
{
    FN_ENTER(0x0069e117);
    /* 0069e117: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e119: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e11b: call 0x6a1a60 */ r_esp -= 4; W32(r_esp, 0x69e120u); f_006a1a60();
    /* 0069e120: jmp 0x69e136 */ goto L_0069e136;
L_0069e136:; BB(0x0069e136);
    /* 0069e136: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e138: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e13a: movzx eax, word ptr [edi + 0x6d0] */ r_eax = (u32)R16((u32)(r_edi+0x6d0u));
    /* 0069e141: mov edx, dword ptr [edi + 0x6cc] */ r_edx = R32((u32)(r_edi+0x6ccu));
    /* 0069e147: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0069e14e: mov dword ptr [edi + 0x60], edx */ W32((u32)(r_edi+0x60u), r_edx);
    /* 0069e151: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e153: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e158u); f_00694390();
    /* 0069e158: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e159: ret  */ FN_RET(0x0069e117); r_esp += 4; return;
}

void f_0069e122(void)
{
    FN_ENTER(0x0069e122);
    /* 0069e122: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e124: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e126: call 0x69b93c */ r_esp -= 4; W32(r_esp, 0x69e12bu); f_0069b93c();
    /* 0069e12b: jmp 0x69e136 */ goto L_0069e136;
L_0069e136:; BB(0x0069e136);
    /* 0069e136: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e138: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e13a: movzx eax, word ptr [edi + 0x6d0] */ r_eax = (u32)R16((u32)(r_edi+0x6d0u));
    /* 0069e141: mov edx, dword ptr [edi + 0x6cc] */ r_edx = R32((u32)(r_edi+0x6ccu));
    /* 0069e147: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0069e14e: mov dword ptr [edi + 0x60], edx */ W32((u32)(r_edi+0x60u), r_edx);
    /* 0069e151: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e153: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e158u); f_00694390();
    /* 0069e158: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e159: ret  */ FN_RET(0x0069e122); r_esp += 4; return;
}

void f_0069e12d(void)
{
    FN_ENTER(0x0069e12d);
    /* 0069e12d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e12f: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e131: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x69e136u); f_006a1ac0();
    /* 0069e136: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e138: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e13a: movzx eax, word ptr [edi + 0x6d0] */ r_eax = (u32)R16((u32)(r_edi+0x6d0u));
    /* 0069e141: mov edx, dword ptr [edi + 0x6cc] */ r_edx = R32((u32)(r_edi+0x6ccu));
    /* 0069e147: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0069e14e: mov dword ptr [edi + 0x60], edx */ W32((u32)(r_edi+0x60u), r_edx);
    /* 0069e151: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e153: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e158u); f_00694390();
    /* 0069e158: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e159: ret  */ FN_RET(0x0069e12d); r_esp += 4; return;
}

void f_0069e136(void)
{
    FN_ENTER(0x0069e136);
    /* 0069e136: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e138: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e13a: movzx eax, word ptr [edi + 0x6d0] */ r_eax = (u32)R16((u32)(r_edi+0x6d0u));
    /* 0069e141: mov edx, dword ptr [edi + 0x6cc] */ r_edx = R32((u32)(r_edi+0x6ccu));
    /* 0069e147: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0069e14e: mov dword ptr [edi + 0x60], edx */ W32((u32)(r_edi+0x60u), r_edx);
    /* 0069e151: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e153: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e158u); f_00694390();
    /* 0069e158: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e159: ret  */ FN_RET(0x0069e136); r_esp += 4; return;
}

void f_0069e15c(void) /* sub_69E15C */
{
    FN_ENTER(0x0069e15c);
    /* 0069e15c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e15d: mov edi, ecx */ r_edi = r_ecx;
    /* 0069e15f: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 0069e164: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069e167: ja 0x69e1f6 */ if ((!fC&&!fZ)) goto L_0069e1f6;
L_0069e16d:; BB(0x0069e16d);
    /* 0069e16d: mov eax, dword ptr [eax*4 + 0x93d064] */ r_eax = R32((u32)(r_eax*4+0x93d064u));
    /* 0069e174: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0069e1f6:; BB(0x0069e1f6);
    /* 0069e1f6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e1f7: ret 4 */ FN_RET(0x0069e15c); r_esp += 8; return;
}

void f_0069e176(void)
{
    FN_ENTER(0x0069e176);
    /* 0069e176: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e178: call 0x69e1fc */ r_esp -= 4; W32(r_esp, 0x69e17du); f_0069e1fc();
    /* 0069e17d: jmp 0x69e1f6 */ goto L_0069e1f6;
L_0069e1f6:; BB(0x0069e1f6);
    /* 0069e1f6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e1f7: ret 4 */ FN_RET(0x0069e176); r_esp += 8; return;
}

void f_0069e17f(void)
{
    FN_ENTER(0x0069e17f);
    /* 0069e17f: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e181: call 0x6a29b0 */ r_esp -= 4; W32(r_esp, 0x69e186u); f_006a29b0();
    /* 0069e186: jmp 0x69e1f6 */ goto L_0069e1f6;
L_0069e1f6:; BB(0x0069e1f6);
    /* 0069e1f6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e1f7: ret 4 */ FN_RET(0x0069e17f); r_esp += 8; return;
}

void f_0069e188(void)
{
    FN_ENTER(0x0069e188);
    /* 0069e188: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e18a: call 0x69e234 */ r_esp -= 4; W32(r_esp, 0x69e18fu); f_0069e234();
    /* 0069e18f: jmp 0x69e1f6 */ goto L_0069e1f6;
L_0069e1f6:; BB(0x0069e1f6);
    /* 0069e1f6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e1f7: ret 4 */ FN_RET(0x0069e188); r_esp += 8; return;
}

void f_0069e191(void)
{
    FN_ENTER(0x0069e191);
    /* 0069e191: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e193: call 0x69e34c */ r_esp -= 4; W32(r_esp, 0x69e198u); f_0069e34c();
    /* 0069e198: jmp 0x69e1f6 */ goto L_0069e1f6;
L_0069e1f6:; BB(0x0069e1f6);
    /* 0069e1f6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e1f7: ret 4 */ FN_RET(0x0069e191); r_esp += 8; return;
}

void f_0069e19a(void)
{
    FN_ENTER(0x0069e19a);
    /* 0069e19a: mov edx, dword ptr [edi + 0x634] */ r_edx = R32((u32)(r_edi+0x634u));
    /* 0069e1a0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069e1a2: mov word ptr [0xa9432c], ax */ W16((u32)(0xa9432cu), (u16)r_eax);
    /* 0069e1a8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e1aa: mov word ptr [0xa94330], ax */ W16((u32)(0xa94330u), (u16)r_eax);
    /* 0069e1b0: je 0x69e1db */ if (fZ) goto L_0069e1db;
L_0069e1b2:; BB(0x0069e1b2);
    /* 0069e1b2: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069e1b8: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069e1ba: je 0x69e1c3 */ if (fZ) goto L_0069e1c3;
L_0069e1bc:; BB(0x0069e1bc);
    /* 0069e1bc: mov eax, 1 */ r_eax = 0x1u;
    /* 0069e1c1: jmp 0x69e1c5 */ goto L_0069e1c5;
L_0069e1c3:; BB(0x0069e1c3);
    /* 0069e1c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0069e1c5:; BB(0x0069e1c5);
    /* 0069e1c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e1c7: jne 0x69e1db */ if (!fZ) goto L_0069e1db;
L_0069e1c9:; BB(0x0069e1c9);
    /* 0069e1c9: push 0xa9432c */ { u32 v = 0xa9432cu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e1ce: push 0xa94330 */ { u32 v = 0xa94330u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e1d3: call 0x70a60c */ r_esp -= 4; W32(r_esp, 0x69e1d8u); f_0070a60c();
    /* 0069e1d8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0069e1db:; BB(0x0069e1db);
    /* 0069e1db: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e1dd: call 0x69e360 */ r_esp -= 4; W32(r_esp, 0x69e1e2u); f_0069e360();
    /* 0069e1e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e1e3: ret 4 */ FN_RET(0x0069e19a); r_esp += 8; return;
}

void f_0069e1e6(void)
{
    FN_ENTER(0x0069e1e6);
    /* 0069e1e6: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e1e8: call 0x69e3f0 */ r_esp -= 4; W32(r_esp, 0x69e1edu); f_0069e3f0();
    /* 0069e1ed: jmp 0x69e1f6 */ goto L_0069e1f6;
L_0069e1f6:; BB(0x0069e1f6);
    /* 0069e1f6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e1f7: ret 4 */ FN_RET(0x0069e1e6); r_esp += 8; return;
}

void f_0069e1ef(void)
{
    FN_ENTER(0x0069e1ef);
    /* 0069e1ef: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e1f1: call 0x69e458 */ r_esp -= 4; W32(r_esp, 0x69e1f6u); f_0069e458();
    /* 0069e1f6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e1f7: ret 4 */ FN_RET(0x0069e1ef); r_esp += 8; return;
}

void f_0069e1f6(void)
{
    FN_ENTER(0x0069e1f6);
    /* 0069e1f6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e1f7: ret 4 */ FN_RET(0x0069e1f6); r_esp += 8; return;
}

void f_0069e1fc(void) /* sub_69E1FC */
{
    FN_ENTER(0x0069e1fc);
    /* 0069e1fc: fld dword ptr [0x93da10] */ FPUSH(R_F32((u32)(0x93da10u)));
    /* 0069e202: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 0069e208: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0069e20b: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 0069e20e: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 0069e211: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 0069e217: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 0069e21a: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 0069e220: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 0069e223: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0069e226: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0069e229: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e22e: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0069e231: ret  */ FN_RET(0x0069e1fc); r_esp += 4; return;
}

void f_0069e234(void) /* sub_69E234 */
{
    FN_ENTER(0x0069e234);
    /* 0069e234: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e235: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069e238: mov edi, ecx */ r_edi = r_ecx;
    /* 0069e23a: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e241: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e244: jne 0x69e285 */ if (!fZ) goto L_0069e285;
L_0069e246:; BB(0x0069e246);
    /* 0069e246: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e24a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e24b: call 0x7181b8 */ r_esp -= 4; W32(r_esp, 0x69e250u); f_007181b8();
    /* 0069e250: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e251: mov edx, dword ptr [edi + 0x92c] */ r_edx = R32((u32)(r_edi+0x92cu));
    /* 0069e257: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069e259: mov dword ptr [edi + 0x378], eax */ W32((u32)(r_edi+0x378u), r_eax);
    /* 0069e25f: mov dword ptr [edi + 0x620], eax */ W32((u32)(r_edi+0x620u), r_eax);
    /* 0069e265: and edx, 0xfffffffb */ {  u32 a = r_edx; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0069e268: mov dword ptr [edi + 0x92c], edx */ W32((u32)(r_edi+0x92cu), r_edx);
    /* 0069e26e: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e270: call 0x69248c */ r_esp -= 4; W32(r_esp, 0x69e275u); f_0069248c();
    /* 0069e275: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e277: je 0x69e336 */ if (fZ) goto L_0069e336;
L_0069e27d:; BB(0x0069e27d);
    /* 0069e27d: mov eax, dword ptr [edi + 0x92c] */ r_eax = R32((u32)(r_edi+0x92cu));
    /* 0069e283: jmp 0x69e28b */ goto L_0069e28b;
L_0069e285:; BB(0x0069e285);
    /* 0069e285: mov eax, dword ptr [edi + 0x92c] */ r_eax = R32((u32)(r_edi+0x92cu));
L_0069e28b:; BB(0x0069e28b);
    /* 0069e28b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069e28d: jne 0x69e296 */ if (!fZ) goto L_0069e296;
L_0069e28f:; BB(0x0069e28f);
    /* 0069e28f: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e291: call 0x68d9c4 */ r_esp -= 4; W32(r_esp, 0x69e296u); f_0068d9c4();
L_0069e296:; BB(0x0069e296);
    /* 0069e296: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e298: call 0x689428 */ r_esp -= 4; W32(r_esp, 0x69e29du); f_00689428();
    /* 0069e29d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e29f: je 0x69e2a8 */ if (fZ) goto L_0069e2a8;
L_0069e2a1:; BB(0x0069e2a1);
    /* 0069e2a1: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e2a3: call 0x688d3c */ r_esp -= 4; W32(r_esp, 0x69e2a8u); f_00688d3c();
L_0069e2a8:; BB(0x0069e2a8);
    /* 0069e2a8: mov edx, dword ptr [edi + 0x45c] */ r_edx = R32((u32)(r_edi+0x45cu));
    /* 0069e2ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e2b0: je 0x69e2bf */ if (fZ) goto L_0069e2bf;
L_0069e2b2:; BB(0x0069e2b2);
    /* 0069e2b2: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0069e2b5: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069e2b7: je 0x69e2bf */ if (fZ) goto L_0069e2bf;
L_0069e2b9:; BB(0x0069e2b9);
    /* 0069e2b9: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069e2bc: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
L_0069e2bf:; BB(0x0069e2bf);
    /* 0069e2bf: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e2c1: je 0x69e2d4 */ if (fZ) goto L_0069e2d4;
L_0069e2c3:; BB(0x0069e2c3);
    /* 0069e2c3: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e2ca: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e2cd: jne 0x69e2d4 */ if (!fZ) goto L_0069e2d4;
L_0069e2cf:; BB(0x0069e2cf);
    /* 0069e2cf: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069e2d2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e2d3: ret  */ FN_RET(0x0069e234); r_esp += 4; return;
L_0069e2d4:; BB(0x0069e2d4);
    /* 0069e2d4: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0069e2d9: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e2db: mov byte ptr [esp], 0x89 */ W8((u32)(r_esp), 0x89u);
    /* 0069e2df: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069e2e1: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 0069e2e6: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 0069e2eb: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e2ef: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 0069e2f4: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0069e2f9: call 0x7778d8 */ r_esp -= 4; W32(r_esp, 0x69e2feu); f_007778d8();
    /* 0069e2fe: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 0069e303: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069e306: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x69e30bu); f_008003e0();
    /* 0069e30b: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e30f: mov edx, dword ptr [edi + 0x92c] */ r_edx = R32((u32)(r_edi+0x92cu));
    /* 0069e315: mov byte ptr [esp + 8], 0x4d */ W8((u32)(r_esp+0x8u), 0x4du);
    /* 0069e31a: mov byte ptr [esp + 9], 2 */ W8((u32)(r_esp+0x9u), 0x2u);
    /* 0069e31f: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 0069e324: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0069e328: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0069e32c: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x69e331u); f_008003e0();
    /* 0069e331: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069e334: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e335: ret  */ FN_RET(0x0069e234); r_esp += 4; return;
L_0069e336:; BB(0x0069e336);
    /* 0069e336: mov eax, dword ptr [edi + 0x92c] */ r_eax = R32((u32)(r_edi+0x92cu));
    /* 0069e33c: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069e33f: mov dword ptr [edi + 0x92c], eax */ W32((u32)(r_edi+0x92cu), r_eax);
    /* 0069e345: jmp 0x69e28b */ goto L_0069e28b;
}

void f_0069e34c(void) /* sub_69E34C */
{
    FN_ENTER(0x0069e34c);
    /* 0069e34c: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0069e34f: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e354: jne 0x69e35d */ if (!fZ) goto L_0069e35d;
L_0069e356:; BB(0x0069e356);
    /* 0069e356: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e358: call 0x69d8f4 */ r_esp -= 4; W32(r_esp, 0x69e35du); f_0069d8f4();
L_0069e35d:; BB(0x0069e35d);
    /* 0069e35d: ret  */ FN_RET(0x0069e34c); r_esp += 4; return;
}

void f_0069e360(void) /* sub_69E360 */
{
    FN_ENTER(0x0069e360);
    /* 0069e360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e361: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0069e363: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0069e367: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e368: call 0x7181b8 */ r_esp -= 4; W32(r_esp, 0x69e36du); f_007181b8();
    /* 0069e36d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e36e: mov ecx, dword ptr [ebp + 0x378] */ r_ecx = R32((u32)(r_ebp+0x378u));
    /* 0069e374: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e376: je 0x69e39c */ if (fZ) goto L_0069e39c;
L_0069e378:; BB(0x0069e378);
    /* 0069e378: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x69e37du); f_008173b4();
    /* 0069e37d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e37f: je 0x69e392 */ if (fZ) goto L_0069e392;
L_0069e381:; BB(0x0069e381);
    /* 0069e381: mov eax, dword ptr [ebp + 0x378] */ r_eax = R32((u32)(r_ebp+0x378u));
    /* 0069e387: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0069e38a: cmp edx, dword ptr [0x9f33e0] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9f33e0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e390: je 0x69e39c */ if (fZ) goto L_0069e39c;
L_0069e392:; BB(0x0069e392);
    /* 0069e392: mov dword ptr [ebp + 0x378], 0 */ W32((u32)(r_ebp+0x378u), 0x0u);
L_0069e39c:; BB(0x0069e39c);
    /* 0069e39c: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069e3a2: lea ecx, [ebp + 0x628] */ r_ecx = (u32)(r_ebp+0x628u);
    /* 0069e3a8: call 0x6a7c24 */ r_esp -= 4; W32(r_esp, 0x69e3adu); f_006a7c24();
    /* 0069e3ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e3af: je 0x69e3eb */ if (fZ) goto L_0069e3eb;
L_0069e3b1:; BB(0x0069e3b1);
    /* 0069e3b1: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x69e3b6u); f_00688b8c();
    /* 0069e3b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e3b8: jne 0x69e3eb */ if (!fZ) goto L_0069e3eb;
L_0069e3ba:; BB(0x0069e3ba);
    /* 0069e3ba: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e3bfu); f_00687c48();
    /* 0069e3bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e3c1: jne 0x69e3eb */ if (!fZ) goto L_0069e3eb;
L_0069e3c3:; BB(0x0069e3c3);
    /* 0069e3c3: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 0069e3c8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069e3cb: jne 0x69e3d9 */ if (!fZ) goto L_0069e3d9;
L_0069e3cd:; BB(0x0069e3cd);
    /* 0069e3cd: jne 0x69e3eb */ if (!fZ) goto L_0069e3eb;
L_0069e3cf:; BB(0x0069e3cf);
    /* 0069e3cf: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x69e3d4u); f_007a61a4();
    /* 0069e3d4: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069e3d7: jne 0x69e3eb */ if (!fZ) goto L_0069e3eb;
L_0069e3d9:; BB(0x0069e3d9);
    /* 0069e3d9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069e3db: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x69e3e0u); f_00689410();
    /* 0069e3e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e3e2: jne 0x69e3eb */ if (!fZ) goto L_0069e3eb;
L_0069e3e4:; BB(0x0069e3e4);
    /* 0069e3e4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069e3e6: call 0x692510 */ r_esp -= 4; W32(r_esp, 0x69e3ebu); f_00692510();
L_0069e3eb:; BB(0x0069e3eb);
    /* 0069e3eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e3ec: ret  */ FN_RET(0x0069e360); r_esp += 4; return;
}

void f_0069e3f0(void) /* sub_69E3F0 */
{
    FN_ENTER(0x0069e3f0);
    /* 0069e3f0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069e3f1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0069e3f3: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 0069e3f9: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069e3fb: je 0x69e414 */ if (fZ) goto L_0069e414;
L_0069e3fd:; BB(0x0069e3fd);
    /* 0069e3fd: movsx eax, word ptr [ebx + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xb8u));
    /* 0069e404: cmp ax, word ptr [ebx + 0xba] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ebx+0xbau)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0069e40b: jne 0x69e414 */ if (!fZ) goto L_0069e414;
L_0069e40d:; BB(0x0069e40d);
    /* 0069e40d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069e40f: call 0x69cb24 */ r_esp -= 4; W32(r_esp, 0x69e414u); f_0069cb24();
L_0069e414:; BB(0x0069e414);
    /* 0069e414: fld dword ptr [0x93da08] */ FPUSH(R_F32((u32)(0x93da08u)));
    /* 0069e41a: fld dword ptr [ebx + 0x6dc] */ FPUSH(R_F32((u32)(r_ebx+0x6dcu)));
    /* 0069e420: fadd dword ptr [0x93da0c] */ ST(0) = ST(0) + R_F32((u32)(0x93da0cu));
    /* 0069e426: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0069e428: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069e42a: lea ecx, [ebx + 0x6d4] */ r_ecx = (u32)(r_ebx+0x6d4u);
    /* 0069e430: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0069e431: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0069e433: jb 0x69e437 */ if (fC) goto L_0069e437;
L_0069e435:; BB(0x0069e435);
    /* 0069e435: fst st(1) */ ST(1) = ST(0);
L_0069e437:; BB(0x0069e437);
    /* 0069e437: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0069e439: fstp dword ptr [ebx + 0x6dc] */ W_F32((u32)(r_ebx+0x6dcu), ST(0)); FPOP();
    /* 0069e43f: call 0x698524 */ r_esp -= 4; W32(r_esp, 0x69e444u); f_00698524();
    /* 0069e444: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069e446: call 0x693844 */ r_esp -= 4; W32(r_esp, 0x69e44bu); f_00693844();
    /* 0069e44b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e44d: jne 0x69e456 */ if (!fZ) goto L_0069e456;
L_0069e44f:; BB(0x0069e44f);
    /* 0069e44f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069e451: call 0x777724 */ r_esp -= 4; W32(r_esp, 0x69e456u); f_00777724();
L_0069e456:; BB(0x0069e456);
    /* 0069e456: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069e457: ret  */ FN_RET(0x0069e3f0); r_esp += 4; return;
}

void f_0069e458(void) /* sub_69E458 */
{
    FN_ENTER(0x0069e458);
    /* 0069e458: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e459: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e45a: mov edi, ecx */ r_edi = r_ecx;
    /* 0069e45c: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0069e463: mov dword ptr [edi + 0x348], 0xf */ W32((u32)(r_edi+0x348u), 0xfu);
    /* 0069e46d: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0069e470: ja 0x69e59b */ if ((!fC&&!fZ)) goto L_0069e59b;
L_0069e476:; BB(0x0069e476);
    /* 0069e476: mov eax, dword ptr [eax*4 + 0x93d0a0] */ r_eax = R32((u32)(r_eax*4+0x93d0a0u));
    /* 0069e47d: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0069e59b:; BB(0x0069e59b);
    /* 0069e59b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e59d: call 0x69ac2c */ r_esp -= 4; W32(r_esp, 0x69e5a2u); f_0069ac2c();
    /* 0069e5a2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5a4: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69e5a9u); f_0077774c();
    /* 0069e5a9: mov edx, dword ptr [edi + 0x92c] */ r_edx = R32((u32)(r_edi+0x92cu));
    /* 0069e5af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5b1: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069e5b8: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069e5bb: je 0x69e5d1 */ if (fZ) goto L_0069e5d1;
L_0069e5bd:; BB(0x0069e5bd);
    /* 0069e5bd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5bf: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5c1: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5c3: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5c8u); f_00694390();
    /* 0069e5c8: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5ca: call 0x69cb24 */ r_esp -= 4; W32(r_esp, 0x69e5cfu); f_0069cb24();
    /* 0069e5cf: jmp 0x69e5e9 */ goto L_0069e5e9;
L_0069e5d1:; BB(0x0069e5d1);
    /* 0069e5d1: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069e5d7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069e5d9: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x69e5dcu); call_ind(t); }
    /* 0069e5dc: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069e5df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e0: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5e4: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5e9u); f_00694390();
L_0069e5e9:; BB(0x0069e5e9);
    /* 0069e5e9: mov eax, dword ptr [edi + 0x524] */ r_eax = R32((u32)(r_edi+0x524u));
    /* 0069e5ef: and eax, 0xffffffc1 */ {  u32 a = r_eax; u32 b = 0xffffffc1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5f2: mov dword ptr [edi + 0x524], eax */ W32((u32)(r_edi+0x524u), r_eax);
    /* 0069e5f8: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e5fdu); f_00687c48();
    /* 0069e5fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e5ff: jne 0x69e60d */ if (!fZ) goto L_0069e60d;
L_0069e601:; BB(0x0069e601);
    /* 0069e601: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e608: jmp 0x69e6be */ goto L_0069e6be;
L_0069e60d:; BB(0x0069e60d);
    /* 0069e60d: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e60f: call 0x7778d8 */ r_esp -= 4; W32(r_esp, 0x69e614u); f_007778d8();
    /* 0069e614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e615: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e61au); f_007b4d18();
    /* 0069e61a: mov ebp, eax */ r_ebp = r_eax;
    /* 0069e61c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e61f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e621: je 0x69e68c */ if (fZ) goto L_0069e68c;
L_0069e623:; BB(0x0069e623);
    /* 0069e623: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0069e626: cmp ecx, dword ptr [0x9cb9a8] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9cb9a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e62c: jne 0x69e647 */ if (!fZ) goto L_0069e647;
L_0069e62e:; BB(0x0069e62e);
    /* 0069e62e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0069e632: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e636: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e638: je 0x69e647 */ if (fZ) goto L_0069e647;
L_0069e63a:; BB(0x0069e63a);
    /* 0069e63a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069e63f: call 0x691728 */ r_esp -= 4; W32(r_esp, 0x69e644u); f_00691728();
    /* 0069e644: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
L_0069e647:; BB(0x0069e647);
    /* 0069e647: cmp ecx, dword ptr [0x9c605c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9c605cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e64d: jne 0x69e675 */ if (!fZ) goto L_0069e675;
L_0069e64f:; BB(0x0069e64f);
    /* 0069e64f: movzx edx, word ptr [ebp + 0x2dc] */ r_edx = (u32)R16((u32)(r_ebp+0x2dcu));
    /* 0069e656: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e65c: je 0x69e708 */ if (fZ) goto L_0069e708;
L_0069e662:; BB(0x0069e662);
    /* 0069e662: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069e663: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e668u); f_007b4d18();
    /* 0069e668: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e669: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e66e: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e673u); f_0069178c();
    /* 0069e673: jmp 0x69e67f */ goto L_0069e67f;
L_0069e675:; BB(0x0069e675);
    /* 0069e675: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e677: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e678: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e67a: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e67fu); f_0069178c();
L_0069e67f:; BB(0x0069e67f);
    /* 0069e67f: push 0x93db00 */ { u32 v = 0x93db00u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e684: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e685: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e687: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e68cu); f_00691578();
L_0069e68c:; BB(0x0069e68c);
    /* 0069e68c: push 0x909a64 */ { u32 v = 0x909a64u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e691: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e692: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e694: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e699u); f_00691578();
    /* 0069e699: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e6a0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6a3: jne 0x69e6be */ if (!fZ) goto L_0069e6be;
L_0069e6a5:; BB(0x0069e6a5);
    /* 0069e6a5: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6aa: push 0x93db08 */ { u32 v = 0x93db08u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6af: call 0x6afb08 */ r_esp -= 4; W32(r_esp, 0x69e6b4u); f_006afb08();
    /* 0069e6b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e6b7: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
L_0069e6be:; BB(0x0069e6be);
    /* 0069e6be: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069e6c1: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6c3:; BB(0x0069e6c3);
    /* 0069e6c3: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x69e6c8u); f_00688b8c();
    /* 0069e6c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6ca: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6cc:; BB(0x0069e6cc);
    /* 0069e6cc: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e6d1u); f_00687c48();
    /* 0069e6d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6d3: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6d5:; BB(0x0069e6d5);
    /* 0069e6d5: call 0x694c8c */ r_esp -= 4; W32(r_esp, 0x69e6dau); f_00694c8c();
    /* 0069e6da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6dc: je 0x69e6f3 */ if (fZ) goto L_0069e6f3;
L_0069e6de:; BB(0x0069e6de);
    /* 0069e6de: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e6e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6e3: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6e8u); f_006c1bd4();
    /* 0069e6e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6e9: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069e6f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e6f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e6f2: ret  */ FN_RET(0x0069e458); r_esp += 4; return;
L_0069e6f3:; BB(0x0069e6f3);
    /* 0069e6f3: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6f8: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6fdu); f_006c1bd4();
    /* 0069e6fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6fe: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0069e705:; BB(0x0069e705);
    /* 0069e705: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e706: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e707: ret  */ FN_RET(0x0069e458); r_esp += 4; return;
L_0069e708:; BB(0x0069e708);
    /* 0069e708: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e70d: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e712u); f_0069178c();
    /* 0069e712: jmp 0x69e67f */ goto L_0069e67f;
}

void f_0069e47f(void)
{
    FN_ENTER(0x0069e47f);
    /* 0069e47f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e481: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e483: call 0x69bdf0 */ r_esp -= 4; W32(r_esp, 0x69e488u); f_0069bdf0();
    /* 0069e488: jmp 0x69e59b */ goto L_0069e59b;
L_0069e59b:; BB(0x0069e59b);
    /* 0069e59b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e59d: call 0x69ac2c */ r_esp -= 4; W32(r_esp, 0x69e5a2u); f_0069ac2c();
    /* 0069e5a2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5a4: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69e5a9u); f_0077774c();
    /* 0069e5a9: mov edx, dword ptr [edi + 0x92c] */ r_edx = R32((u32)(r_edi+0x92cu));
    /* 0069e5af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5b1: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069e5b8: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069e5bb: je 0x69e5d1 */ if (fZ) goto L_0069e5d1;
L_0069e5bd:; BB(0x0069e5bd);
    /* 0069e5bd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5bf: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5c1: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5c3: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5c8u); f_00694390();
    /* 0069e5c8: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5ca: call 0x69cb24 */ r_esp -= 4; W32(r_esp, 0x69e5cfu); f_0069cb24();
    /* 0069e5cf: jmp 0x69e5e9 */ goto L_0069e5e9;
L_0069e5d1:; BB(0x0069e5d1);
    /* 0069e5d1: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069e5d7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069e5d9: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x69e5dcu); call_ind(t); }
    /* 0069e5dc: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069e5df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e0: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5e4: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5e9u); f_00694390();
L_0069e5e9:; BB(0x0069e5e9);
    /* 0069e5e9: mov eax, dword ptr [edi + 0x524] */ r_eax = R32((u32)(r_edi+0x524u));
    /* 0069e5ef: and eax, 0xffffffc1 */ {  u32 a = r_eax; u32 b = 0xffffffc1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5f2: mov dword ptr [edi + 0x524], eax */ W32((u32)(r_edi+0x524u), r_eax);
    /* 0069e5f8: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e5fdu); f_00687c48();
    /* 0069e5fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e5ff: jne 0x69e60d */ if (!fZ) goto L_0069e60d;
L_0069e601:; BB(0x0069e601);
    /* 0069e601: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e608: jmp 0x69e6be */ goto L_0069e6be;
L_0069e60d:; BB(0x0069e60d);
    /* 0069e60d: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e60f: call 0x7778d8 */ r_esp -= 4; W32(r_esp, 0x69e614u); f_007778d8();
    /* 0069e614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e615: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e61au); f_007b4d18();
    /* 0069e61a: mov ebp, eax */ r_ebp = r_eax;
    /* 0069e61c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e61f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e621: je 0x69e68c */ if (fZ) goto L_0069e68c;
L_0069e623:; BB(0x0069e623);
    /* 0069e623: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0069e626: cmp ecx, dword ptr [0x9cb9a8] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9cb9a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e62c: jne 0x69e647 */ if (!fZ) goto L_0069e647;
L_0069e62e:; BB(0x0069e62e);
    /* 0069e62e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0069e632: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e636: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e638: je 0x69e647 */ if (fZ) goto L_0069e647;
L_0069e63a:; BB(0x0069e63a);
    /* 0069e63a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069e63f: call 0x691728 */ r_esp -= 4; W32(r_esp, 0x69e644u); f_00691728();
    /* 0069e644: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
L_0069e647:; BB(0x0069e647);
    /* 0069e647: cmp ecx, dword ptr [0x9c605c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9c605cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e64d: jne 0x69e675 */ if (!fZ) goto L_0069e675;
L_0069e64f:; BB(0x0069e64f);
    /* 0069e64f: movzx edx, word ptr [ebp + 0x2dc] */ r_edx = (u32)R16((u32)(r_ebp+0x2dcu));
    /* 0069e656: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e65c: je 0x69e708 */ if (fZ) goto L_0069e708;
L_0069e662:; BB(0x0069e662);
    /* 0069e662: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069e663: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e668u); f_007b4d18();
    /* 0069e668: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e669: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e66e: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e673u); f_0069178c();
    /* 0069e673: jmp 0x69e67f */ goto L_0069e67f;
L_0069e675:; BB(0x0069e675);
    /* 0069e675: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e677: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e678: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e67a: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e67fu); f_0069178c();
L_0069e67f:; BB(0x0069e67f);
    /* 0069e67f: push 0x93db00 */ { u32 v = 0x93db00u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e684: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e685: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e687: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e68cu); f_00691578();
L_0069e68c:; BB(0x0069e68c);
    /* 0069e68c: push 0x909a64 */ { u32 v = 0x909a64u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e691: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e692: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e694: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e699u); f_00691578();
    /* 0069e699: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e6a0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6a3: jne 0x69e6be */ if (!fZ) goto L_0069e6be;
L_0069e6a5:; BB(0x0069e6a5);
    /* 0069e6a5: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6aa: push 0x93db08 */ { u32 v = 0x93db08u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6af: call 0x6afb08 */ r_esp -= 4; W32(r_esp, 0x69e6b4u); f_006afb08();
    /* 0069e6b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e6b7: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
L_0069e6be:; BB(0x0069e6be);
    /* 0069e6be: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069e6c1: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6c3:; BB(0x0069e6c3);
    /* 0069e6c3: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x69e6c8u); f_00688b8c();
    /* 0069e6c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6ca: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6cc:; BB(0x0069e6cc);
    /* 0069e6cc: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e6d1u); f_00687c48();
    /* 0069e6d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6d3: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6d5:; BB(0x0069e6d5);
    /* 0069e6d5: call 0x694c8c */ r_esp -= 4; W32(r_esp, 0x69e6dau); f_00694c8c();
    /* 0069e6da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6dc: je 0x69e6f3 */ if (fZ) goto L_0069e6f3;
L_0069e6de:; BB(0x0069e6de);
    /* 0069e6de: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e6e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6e3: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6e8u); f_006c1bd4();
    /* 0069e6e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6e9: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069e6f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e6f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e6f2: ret  */ FN_RET(0x0069e47f); r_esp += 4; return;
L_0069e6f3:; BB(0x0069e6f3);
    /* 0069e6f3: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6f8: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6fdu); f_006c1bd4();
    /* 0069e6fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6fe: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0069e705:; BB(0x0069e705);
    /* 0069e705: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e706: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e707: ret  */ FN_RET(0x0069e47f); r_esp += 4; return;
L_0069e708:; BB(0x0069e708);
    /* 0069e708: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e70d: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e712u); f_0069178c();
    /* 0069e712: jmp 0x69e67f */ goto L_0069e67f;
}

void f_0069e48d(void)
{
    FN_ENTER(0x0069e48d);
    /* 0069e48d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e48f: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e491: call 0x69c6c0 */ r_esp -= 4; W32(r_esp, 0x69e496u); f_0069c6c0();
    /* 0069e496: jmp 0x69e59b */ goto L_0069e59b;
L_0069e59b:; BB(0x0069e59b);
    /* 0069e59b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e59d: call 0x69ac2c */ r_esp -= 4; W32(r_esp, 0x69e5a2u); f_0069ac2c();
    /* 0069e5a2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5a4: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69e5a9u); f_0077774c();
    /* 0069e5a9: mov edx, dword ptr [edi + 0x92c] */ r_edx = R32((u32)(r_edi+0x92cu));
    /* 0069e5af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5b1: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069e5b8: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069e5bb: je 0x69e5d1 */ if (fZ) goto L_0069e5d1;
L_0069e5bd:; BB(0x0069e5bd);
    /* 0069e5bd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5bf: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5c1: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5c3: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5c8u); f_00694390();
    /* 0069e5c8: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5ca: call 0x69cb24 */ r_esp -= 4; W32(r_esp, 0x69e5cfu); f_0069cb24();
    /* 0069e5cf: jmp 0x69e5e9 */ goto L_0069e5e9;
L_0069e5d1:; BB(0x0069e5d1);
    /* 0069e5d1: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069e5d7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069e5d9: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x69e5dcu); call_ind(t); }
    /* 0069e5dc: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069e5df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e0: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5e4: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5e9u); f_00694390();
L_0069e5e9:; BB(0x0069e5e9);
    /* 0069e5e9: mov eax, dword ptr [edi + 0x524] */ r_eax = R32((u32)(r_edi+0x524u));
    /* 0069e5ef: and eax, 0xffffffc1 */ {  u32 a = r_eax; u32 b = 0xffffffc1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5f2: mov dword ptr [edi + 0x524], eax */ W32((u32)(r_edi+0x524u), r_eax);
    /* 0069e5f8: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e5fdu); f_00687c48();
    /* 0069e5fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e5ff: jne 0x69e60d */ if (!fZ) goto L_0069e60d;
L_0069e601:; BB(0x0069e601);
    /* 0069e601: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e608: jmp 0x69e6be */ goto L_0069e6be;
L_0069e60d:; BB(0x0069e60d);
    /* 0069e60d: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e60f: call 0x7778d8 */ r_esp -= 4; W32(r_esp, 0x69e614u); f_007778d8();
    /* 0069e614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e615: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e61au); f_007b4d18();
    /* 0069e61a: mov ebp, eax */ r_ebp = r_eax;
    /* 0069e61c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e61f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e621: je 0x69e68c */ if (fZ) goto L_0069e68c;
L_0069e623:; BB(0x0069e623);
    /* 0069e623: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0069e626: cmp ecx, dword ptr [0x9cb9a8] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9cb9a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e62c: jne 0x69e647 */ if (!fZ) goto L_0069e647;
L_0069e62e:; BB(0x0069e62e);
    /* 0069e62e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0069e632: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e636: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e638: je 0x69e647 */ if (fZ) goto L_0069e647;
L_0069e63a:; BB(0x0069e63a);
    /* 0069e63a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069e63f: call 0x691728 */ r_esp -= 4; W32(r_esp, 0x69e644u); f_00691728();
    /* 0069e644: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
L_0069e647:; BB(0x0069e647);
    /* 0069e647: cmp ecx, dword ptr [0x9c605c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9c605cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e64d: jne 0x69e675 */ if (!fZ) goto L_0069e675;
L_0069e64f:; BB(0x0069e64f);
    /* 0069e64f: movzx edx, word ptr [ebp + 0x2dc] */ r_edx = (u32)R16((u32)(r_ebp+0x2dcu));
    /* 0069e656: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e65c: je 0x69e708 */ if (fZ) goto L_0069e708;
L_0069e662:; BB(0x0069e662);
    /* 0069e662: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069e663: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e668u); f_007b4d18();
    /* 0069e668: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e669: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e66e: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e673u); f_0069178c();
    /* 0069e673: jmp 0x69e67f */ goto L_0069e67f;
L_0069e675:; BB(0x0069e675);
    /* 0069e675: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e677: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e678: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e67a: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e67fu); f_0069178c();
L_0069e67f:; BB(0x0069e67f);
    /* 0069e67f: push 0x93db00 */ { u32 v = 0x93db00u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e684: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e685: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e687: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e68cu); f_00691578();
L_0069e68c:; BB(0x0069e68c);
    /* 0069e68c: push 0x909a64 */ { u32 v = 0x909a64u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e691: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e692: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e694: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e699u); f_00691578();
    /* 0069e699: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e6a0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6a3: jne 0x69e6be */ if (!fZ) goto L_0069e6be;
L_0069e6a5:; BB(0x0069e6a5);
    /* 0069e6a5: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6aa: push 0x93db08 */ { u32 v = 0x93db08u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6af: call 0x6afb08 */ r_esp -= 4; W32(r_esp, 0x69e6b4u); f_006afb08();
    /* 0069e6b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e6b7: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
L_0069e6be:; BB(0x0069e6be);
    /* 0069e6be: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069e6c1: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6c3:; BB(0x0069e6c3);
    /* 0069e6c3: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x69e6c8u); f_00688b8c();
    /* 0069e6c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6ca: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6cc:; BB(0x0069e6cc);
    /* 0069e6cc: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e6d1u); f_00687c48();
    /* 0069e6d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6d3: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6d5:; BB(0x0069e6d5);
    /* 0069e6d5: call 0x694c8c */ r_esp -= 4; W32(r_esp, 0x69e6dau); f_00694c8c();
    /* 0069e6da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6dc: je 0x69e6f3 */ if (fZ) goto L_0069e6f3;
L_0069e6de:; BB(0x0069e6de);
    /* 0069e6de: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e6e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6e3: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6e8u); f_006c1bd4();
    /* 0069e6e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6e9: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069e6f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e6f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e6f2: ret  */ FN_RET(0x0069e48d); r_esp += 4; return;
L_0069e6f3:; BB(0x0069e6f3);
    /* 0069e6f3: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6f8: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6fdu); f_006c1bd4();
    /* 0069e6fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6fe: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0069e705:; BB(0x0069e705);
    /* 0069e705: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e706: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e707: ret  */ FN_RET(0x0069e48d); r_esp += 4; return;
L_0069e708:; BB(0x0069e708);
    /* 0069e708: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e70d: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e712u); f_0069178c();
    /* 0069e712: jmp 0x69e67f */ goto L_0069e67f;
}

void f_0069e49b(void)
{
    FN_ENTER(0x0069e49b);
    /* 0069e49b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e49d: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e49f: call 0x69c988 */ r_esp -= 4; W32(r_esp, 0x69e4a4u); f_0069c988();
    /* 0069e4a4: jmp 0x69e59b */ goto L_0069e59b;
L_0069e59b:; BB(0x0069e59b);
    /* 0069e59b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e59d: call 0x69ac2c */ r_esp -= 4; W32(r_esp, 0x69e5a2u); f_0069ac2c();
    /* 0069e5a2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5a4: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69e5a9u); f_0077774c();
    /* 0069e5a9: mov edx, dword ptr [edi + 0x92c] */ r_edx = R32((u32)(r_edi+0x92cu));
    /* 0069e5af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5b1: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069e5b8: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069e5bb: je 0x69e5d1 */ if (fZ) goto L_0069e5d1;
L_0069e5bd:; BB(0x0069e5bd);
    /* 0069e5bd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5bf: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5c1: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5c3: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5c8u); f_00694390();
    /* 0069e5c8: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5ca: call 0x69cb24 */ r_esp -= 4; W32(r_esp, 0x69e5cfu); f_0069cb24();
    /* 0069e5cf: jmp 0x69e5e9 */ goto L_0069e5e9;
L_0069e5d1:; BB(0x0069e5d1);
    /* 0069e5d1: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069e5d7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069e5d9: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x69e5dcu); call_ind(t); }
    /* 0069e5dc: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069e5df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e0: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5e4: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5e9u); f_00694390();
L_0069e5e9:; BB(0x0069e5e9);
    /* 0069e5e9: mov eax, dword ptr [edi + 0x524] */ r_eax = R32((u32)(r_edi+0x524u));
    /* 0069e5ef: and eax, 0xffffffc1 */ {  u32 a = r_eax; u32 b = 0xffffffc1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5f2: mov dword ptr [edi + 0x524], eax */ W32((u32)(r_edi+0x524u), r_eax);
    /* 0069e5f8: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e5fdu); f_00687c48();
    /* 0069e5fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e5ff: jne 0x69e60d */ if (!fZ) goto L_0069e60d;
L_0069e601:; BB(0x0069e601);
    /* 0069e601: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e608: jmp 0x69e6be */ goto L_0069e6be;
L_0069e60d:; BB(0x0069e60d);
    /* 0069e60d: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e60f: call 0x7778d8 */ r_esp -= 4; W32(r_esp, 0x69e614u); f_007778d8();
    /* 0069e614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e615: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e61au); f_007b4d18();
    /* 0069e61a: mov ebp, eax */ r_ebp = r_eax;
    /* 0069e61c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e61f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e621: je 0x69e68c */ if (fZ) goto L_0069e68c;
L_0069e623:; BB(0x0069e623);
    /* 0069e623: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0069e626: cmp ecx, dword ptr [0x9cb9a8] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9cb9a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e62c: jne 0x69e647 */ if (!fZ) goto L_0069e647;
L_0069e62e:; BB(0x0069e62e);
    /* 0069e62e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0069e632: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e636: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e638: je 0x69e647 */ if (fZ) goto L_0069e647;
L_0069e63a:; BB(0x0069e63a);
    /* 0069e63a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069e63f: call 0x691728 */ r_esp -= 4; W32(r_esp, 0x69e644u); f_00691728();
    /* 0069e644: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
L_0069e647:; BB(0x0069e647);
    /* 0069e647: cmp ecx, dword ptr [0x9c605c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9c605cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e64d: jne 0x69e675 */ if (!fZ) goto L_0069e675;
L_0069e64f:; BB(0x0069e64f);
    /* 0069e64f: movzx edx, word ptr [ebp + 0x2dc] */ r_edx = (u32)R16((u32)(r_ebp+0x2dcu));
    /* 0069e656: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e65c: je 0x69e708 */ if (fZ) goto L_0069e708;
L_0069e662:; BB(0x0069e662);
    /* 0069e662: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069e663: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e668u); f_007b4d18();
    /* 0069e668: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e669: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e66e: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e673u); f_0069178c();
    /* 0069e673: jmp 0x69e67f */ goto L_0069e67f;
L_0069e675:; BB(0x0069e675);
    /* 0069e675: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e677: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e678: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e67a: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e67fu); f_0069178c();
L_0069e67f:; BB(0x0069e67f);
    /* 0069e67f: push 0x93db00 */ { u32 v = 0x93db00u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e684: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e685: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e687: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e68cu); f_00691578();
L_0069e68c:; BB(0x0069e68c);
    /* 0069e68c: push 0x909a64 */ { u32 v = 0x909a64u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e691: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e692: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e694: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e699u); f_00691578();
    /* 0069e699: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e6a0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6a3: jne 0x69e6be */ if (!fZ) goto L_0069e6be;
L_0069e6a5:; BB(0x0069e6a5);
    /* 0069e6a5: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6aa: push 0x93db08 */ { u32 v = 0x93db08u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6af: call 0x6afb08 */ r_esp -= 4; W32(r_esp, 0x69e6b4u); f_006afb08();
    /* 0069e6b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e6b7: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
L_0069e6be:; BB(0x0069e6be);
    /* 0069e6be: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069e6c1: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6c3:; BB(0x0069e6c3);
    /* 0069e6c3: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x69e6c8u); f_00688b8c();
    /* 0069e6c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6ca: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6cc:; BB(0x0069e6cc);
    /* 0069e6cc: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e6d1u); f_00687c48();
    /* 0069e6d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6d3: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6d5:; BB(0x0069e6d5);
    /* 0069e6d5: call 0x694c8c */ r_esp -= 4; W32(r_esp, 0x69e6dau); f_00694c8c();
    /* 0069e6da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6dc: je 0x69e6f3 */ if (fZ) goto L_0069e6f3;
L_0069e6de:; BB(0x0069e6de);
    /* 0069e6de: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e6e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6e3: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6e8u); f_006c1bd4();
    /* 0069e6e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6e9: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069e6f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e6f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e6f2: ret  */ FN_RET(0x0069e49b); r_esp += 4; return;
L_0069e6f3:; BB(0x0069e6f3);
    /* 0069e6f3: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6f8: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6fdu); f_006c1bd4();
    /* 0069e6fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6fe: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0069e705:; BB(0x0069e705);
    /* 0069e705: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e706: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e707: ret  */ FN_RET(0x0069e49b); r_esp += 4; return;
L_0069e708:; BB(0x0069e708);
    /* 0069e708: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e70d: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e712u); f_0069178c();
    /* 0069e712: jmp 0x69e67f */ goto L_0069e67f;
}

void f_0069e4a9(void)
{
    FN_ENTER(0x0069e4a9);
    /* 0069e4a9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e4ab: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e4ad: call 0x69cd20 */ r_esp -= 4; W32(r_esp, 0x69e4b2u); f_0069cd20();
    /* 0069e4b2: jmp 0x69e59b */ goto L_0069e59b;
L_0069e59b:; BB(0x0069e59b);
    /* 0069e59b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e59d: call 0x69ac2c */ r_esp -= 4; W32(r_esp, 0x69e5a2u); f_0069ac2c();
    /* 0069e5a2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5a4: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69e5a9u); f_0077774c();
    /* 0069e5a9: mov edx, dword ptr [edi + 0x92c] */ r_edx = R32((u32)(r_edi+0x92cu));
    /* 0069e5af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5b1: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069e5b8: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069e5bb: je 0x69e5d1 */ if (fZ) goto L_0069e5d1;
L_0069e5bd:; BB(0x0069e5bd);
    /* 0069e5bd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5bf: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5c1: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5c3: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5c8u); f_00694390();
    /* 0069e5c8: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5ca: call 0x69cb24 */ r_esp -= 4; W32(r_esp, 0x69e5cfu); f_0069cb24();
    /* 0069e5cf: jmp 0x69e5e9 */ goto L_0069e5e9;
L_0069e5d1:; BB(0x0069e5d1);
    /* 0069e5d1: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069e5d7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069e5d9: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x69e5dcu); call_ind(t); }
    /* 0069e5dc: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069e5df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e0: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5e4: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5e9u); f_00694390();
L_0069e5e9:; BB(0x0069e5e9);
    /* 0069e5e9: mov eax, dword ptr [edi + 0x524] */ r_eax = R32((u32)(r_edi+0x524u));
    /* 0069e5ef: and eax, 0xffffffc1 */ {  u32 a = r_eax; u32 b = 0xffffffc1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5f2: mov dword ptr [edi + 0x524], eax */ W32((u32)(r_edi+0x524u), r_eax);
    /* 0069e5f8: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e5fdu); f_00687c48();
    /* 0069e5fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e5ff: jne 0x69e60d */ if (!fZ) goto L_0069e60d;
L_0069e601:; BB(0x0069e601);
    /* 0069e601: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e608: jmp 0x69e6be */ goto L_0069e6be;
L_0069e60d:; BB(0x0069e60d);
    /* 0069e60d: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e60f: call 0x7778d8 */ r_esp -= 4; W32(r_esp, 0x69e614u); f_007778d8();
    /* 0069e614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e615: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e61au); f_007b4d18();
    /* 0069e61a: mov ebp, eax */ r_ebp = r_eax;
    /* 0069e61c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e61f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e621: je 0x69e68c */ if (fZ) goto L_0069e68c;
L_0069e623:; BB(0x0069e623);
    /* 0069e623: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0069e626: cmp ecx, dword ptr [0x9cb9a8] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9cb9a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e62c: jne 0x69e647 */ if (!fZ) goto L_0069e647;
L_0069e62e:; BB(0x0069e62e);
    /* 0069e62e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0069e632: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e636: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e638: je 0x69e647 */ if (fZ) goto L_0069e647;
L_0069e63a:; BB(0x0069e63a);
    /* 0069e63a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069e63f: call 0x691728 */ r_esp -= 4; W32(r_esp, 0x69e644u); f_00691728();
    /* 0069e644: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
L_0069e647:; BB(0x0069e647);
    /* 0069e647: cmp ecx, dword ptr [0x9c605c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9c605cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e64d: jne 0x69e675 */ if (!fZ) goto L_0069e675;
L_0069e64f:; BB(0x0069e64f);
    /* 0069e64f: movzx edx, word ptr [ebp + 0x2dc] */ r_edx = (u32)R16((u32)(r_ebp+0x2dcu));
    /* 0069e656: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e65c: je 0x69e708 */ if (fZ) goto L_0069e708;
L_0069e662:; BB(0x0069e662);
    /* 0069e662: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069e663: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e668u); f_007b4d18();
    /* 0069e668: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e669: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e66e: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e673u); f_0069178c();
    /* 0069e673: jmp 0x69e67f */ goto L_0069e67f;
L_0069e675:; BB(0x0069e675);
    /* 0069e675: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e677: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e678: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e67a: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e67fu); f_0069178c();
L_0069e67f:; BB(0x0069e67f);
    /* 0069e67f: push 0x93db00 */ { u32 v = 0x93db00u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e684: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e685: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e687: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e68cu); f_00691578();
L_0069e68c:; BB(0x0069e68c);
    /* 0069e68c: push 0x909a64 */ { u32 v = 0x909a64u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e691: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e692: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e694: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e699u); f_00691578();
    /* 0069e699: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e6a0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6a3: jne 0x69e6be */ if (!fZ) goto L_0069e6be;
L_0069e6a5:; BB(0x0069e6a5);
    /* 0069e6a5: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6aa: push 0x93db08 */ { u32 v = 0x93db08u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6af: call 0x6afb08 */ r_esp -= 4; W32(r_esp, 0x69e6b4u); f_006afb08();
    /* 0069e6b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e6b7: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
L_0069e6be:; BB(0x0069e6be);
    /* 0069e6be: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069e6c1: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6c3:; BB(0x0069e6c3);
    /* 0069e6c3: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x69e6c8u); f_00688b8c();
    /* 0069e6c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6ca: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6cc:; BB(0x0069e6cc);
    /* 0069e6cc: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e6d1u); f_00687c48();
    /* 0069e6d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6d3: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6d5:; BB(0x0069e6d5);
    /* 0069e6d5: call 0x694c8c */ r_esp -= 4; W32(r_esp, 0x69e6dau); f_00694c8c();
    /* 0069e6da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6dc: je 0x69e6f3 */ if (fZ) goto L_0069e6f3;
L_0069e6de:; BB(0x0069e6de);
    /* 0069e6de: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e6e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6e3: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6e8u); f_006c1bd4();
    /* 0069e6e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6e9: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069e6f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e6f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e6f2: ret  */ FN_RET(0x0069e4a9); r_esp += 4; return;
L_0069e6f3:; BB(0x0069e6f3);
    /* 0069e6f3: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6f8: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6fdu); f_006c1bd4();
    /* 0069e6fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6fe: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0069e705:; BB(0x0069e705);
    /* 0069e705: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e706: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e707: ret  */ FN_RET(0x0069e4a9); r_esp += 4; return;
L_0069e708:; BB(0x0069e708);
    /* 0069e708: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e70d: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e712u); f_0069178c();
    /* 0069e712: jmp 0x69e67f */ goto L_0069e67f;
}

void f_0069e4b7(void)
{
    FN_ENTER(0x0069e4b7);
    /* 0069e4b7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e4b9: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e4bb: call 0x69d1e4 */ r_esp -= 4; W32(r_esp, 0x69e4c0u); f_0069d1e4();
    /* 0069e4c0: jmp 0x69e59b */ goto L_0069e59b;
L_0069e59b:; BB(0x0069e59b);
    /* 0069e59b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e59d: call 0x69ac2c */ r_esp -= 4; W32(r_esp, 0x69e5a2u); f_0069ac2c();
    /* 0069e5a2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5a4: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69e5a9u); f_0077774c();
    /* 0069e5a9: mov edx, dword ptr [edi + 0x92c] */ r_edx = R32((u32)(r_edi+0x92cu));
    /* 0069e5af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5b1: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069e5b8: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069e5bb: je 0x69e5d1 */ if (fZ) goto L_0069e5d1;
L_0069e5bd:; BB(0x0069e5bd);
    /* 0069e5bd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5bf: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5c1: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5c3: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5c8u); f_00694390();
    /* 0069e5c8: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5ca: call 0x69cb24 */ r_esp -= 4; W32(r_esp, 0x69e5cfu); f_0069cb24();
    /* 0069e5cf: jmp 0x69e5e9 */ goto L_0069e5e9;
L_0069e5d1:; BB(0x0069e5d1);
    /* 0069e5d1: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069e5d7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069e5d9: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x69e5dcu); call_ind(t); }
    /* 0069e5dc: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069e5df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e0: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5e4: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5e9u); f_00694390();
L_0069e5e9:; BB(0x0069e5e9);
    /* 0069e5e9: mov eax, dword ptr [edi + 0x524] */ r_eax = R32((u32)(r_edi+0x524u));
    /* 0069e5ef: and eax, 0xffffffc1 */ {  u32 a = r_eax; u32 b = 0xffffffc1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5f2: mov dword ptr [edi + 0x524], eax */ W32((u32)(r_edi+0x524u), r_eax);
    /* 0069e5f8: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e5fdu); f_00687c48();
    /* 0069e5fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e5ff: jne 0x69e60d */ if (!fZ) goto L_0069e60d;
L_0069e601:; BB(0x0069e601);
    /* 0069e601: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e608: jmp 0x69e6be */ goto L_0069e6be;
L_0069e60d:; BB(0x0069e60d);
    /* 0069e60d: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e60f: call 0x7778d8 */ r_esp -= 4; W32(r_esp, 0x69e614u); f_007778d8();
    /* 0069e614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e615: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e61au); f_007b4d18();
    /* 0069e61a: mov ebp, eax */ r_ebp = r_eax;
    /* 0069e61c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e61f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e621: je 0x69e68c */ if (fZ) goto L_0069e68c;
L_0069e623:; BB(0x0069e623);
    /* 0069e623: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0069e626: cmp ecx, dword ptr [0x9cb9a8] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9cb9a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e62c: jne 0x69e647 */ if (!fZ) goto L_0069e647;
L_0069e62e:; BB(0x0069e62e);
    /* 0069e62e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0069e632: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e636: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e638: je 0x69e647 */ if (fZ) goto L_0069e647;
L_0069e63a:; BB(0x0069e63a);
    /* 0069e63a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069e63f: call 0x691728 */ r_esp -= 4; W32(r_esp, 0x69e644u); f_00691728();
    /* 0069e644: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
L_0069e647:; BB(0x0069e647);
    /* 0069e647: cmp ecx, dword ptr [0x9c605c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9c605cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e64d: jne 0x69e675 */ if (!fZ) goto L_0069e675;
L_0069e64f:; BB(0x0069e64f);
    /* 0069e64f: movzx edx, word ptr [ebp + 0x2dc] */ r_edx = (u32)R16((u32)(r_ebp+0x2dcu));
    /* 0069e656: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e65c: je 0x69e708 */ if (fZ) goto L_0069e708;
L_0069e662:; BB(0x0069e662);
    /* 0069e662: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069e663: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e668u); f_007b4d18();
    /* 0069e668: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e669: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e66e: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e673u); f_0069178c();
    /* 0069e673: jmp 0x69e67f */ goto L_0069e67f;
L_0069e675:; BB(0x0069e675);
    /* 0069e675: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e677: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e678: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e67a: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e67fu); f_0069178c();
L_0069e67f:; BB(0x0069e67f);
    /* 0069e67f: push 0x93db00 */ { u32 v = 0x93db00u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e684: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e685: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e687: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e68cu); f_00691578();
L_0069e68c:; BB(0x0069e68c);
    /* 0069e68c: push 0x909a64 */ { u32 v = 0x909a64u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e691: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e692: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e694: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e699u); f_00691578();
    /* 0069e699: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e6a0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6a3: jne 0x69e6be */ if (!fZ) goto L_0069e6be;
L_0069e6a5:; BB(0x0069e6a5);
    /* 0069e6a5: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6aa: push 0x93db08 */ { u32 v = 0x93db08u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6af: call 0x6afb08 */ r_esp -= 4; W32(r_esp, 0x69e6b4u); f_006afb08();
    /* 0069e6b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e6b7: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
L_0069e6be:; BB(0x0069e6be);
    /* 0069e6be: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069e6c1: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6c3:; BB(0x0069e6c3);
    /* 0069e6c3: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x69e6c8u); f_00688b8c();
    /* 0069e6c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6ca: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6cc:; BB(0x0069e6cc);
    /* 0069e6cc: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e6d1u); f_00687c48();
    /* 0069e6d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6d3: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6d5:; BB(0x0069e6d5);
    /* 0069e6d5: call 0x694c8c */ r_esp -= 4; W32(r_esp, 0x69e6dau); f_00694c8c();
    /* 0069e6da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6dc: je 0x69e6f3 */ if (fZ) goto L_0069e6f3;
L_0069e6de:; BB(0x0069e6de);
    /* 0069e6de: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e6e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6e3: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6e8u); f_006c1bd4();
    /* 0069e6e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6e9: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069e6f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e6f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e6f2: ret  */ FN_RET(0x0069e4b7); r_esp += 4; return;
L_0069e6f3:; BB(0x0069e6f3);
    /* 0069e6f3: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6f8: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6fdu); f_006c1bd4();
    /* 0069e6fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6fe: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0069e705:; BB(0x0069e705);
    /* 0069e705: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e706: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e707: ret  */ FN_RET(0x0069e4b7); r_esp += 4; return;
L_0069e708:; BB(0x0069e708);
    /* 0069e708: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e70d: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e712u); f_0069178c();
    /* 0069e712: jmp 0x69e67f */ goto L_0069e67f;
}

void f_0069e4c5(void)
{
    FN_ENTER(0x0069e4c5);
    /* 0069e4c5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e4c7: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e4c9: call 0x69d43c */ r_esp -= 4; W32(r_esp, 0x69e4ceu); f_0069d43c();
    /* 0069e4ce: jmp 0x69e59b */ goto L_0069e59b;
L_0069e59b:; BB(0x0069e59b);
    /* 0069e59b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e59d: call 0x69ac2c */ r_esp -= 4; W32(r_esp, 0x69e5a2u); f_0069ac2c();
    /* 0069e5a2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5a4: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69e5a9u); f_0077774c();
    /* 0069e5a9: mov edx, dword ptr [edi + 0x92c] */ r_edx = R32((u32)(r_edi+0x92cu));
    /* 0069e5af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5b1: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069e5b8: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069e5bb: je 0x69e5d1 */ if (fZ) goto L_0069e5d1;
L_0069e5bd:; BB(0x0069e5bd);
    /* 0069e5bd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5bf: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5c1: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5c3: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5c8u); f_00694390();
    /* 0069e5c8: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5ca: call 0x69cb24 */ r_esp -= 4; W32(r_esp, 0x69e5cfu); f_0069cb24();
    /* 0069e5cf: jmp 0x69e5e9 */ goto L_0069e5e9;
L_0069e5d1:; BB(0x0069e5d1);
    /* 0069e5d1: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069e5d7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069e5d9: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x69e5dcu); call_ind(t); }
    /* 0069e5dc: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069e5df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e0: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5e4: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5e9u); f_00694390();
L_0069e5e9:; BB(0x0069e5e9);
    /* 0069e5e9: mov eax, dword ptr [edi + 0x524] */ r_eax = R32((u32)(r_edi+0x524u));
    /* 0069e5ef: and eax, 0xffffffc1 */ {  u32 a = r_eax; u32 b = 0xffffffc1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5f2: mov dword ptr [edi + 0x524], eax */ W32((u32)(r_edi+0x524u), r_eax);
    /* 0069e5f8: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e5fdu); f_00687c48();
    /* 0069e5fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e5ff: jne 0x69e60d */ if (!fZ) goto L_0069e60d;
L_0069e601:; BB(0x0069e601);
    /* 0069e601: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e608: jmp 0x69e6be */ goto L_0069e6be;
L_0069e60d:; BB(0x0069e60d);
    /* 0069e60d: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e60f: call 0x7778d8 */ r_esp -= 4; W32(r_esp, 0x69e614u); f_007778d8();
    /* 0069e614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e615: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e61au); f_007b4d18();
    /* 0069e61a: mov ebp, eax */ r_ebp = r_eax;
    /* 0069e61c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e61f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e621: je 0x69e68c */ if (fZ) goto L_0069e68c;
L_0069e623:; BB(0x0069e623);
    /* 0069e623: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0069e626: cmp ecx, dword ptr [0x9cb9a8] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9cb9a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e62c: jne 0x69e647 */ if (!fZ) goto L_0069e647;
L_0069e62e:; BB(0x0069e62e);
    /* 0069e62e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0069e632: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e636: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e638: je 0x69e647 */ if (fZ) goto L_0069e647;
L_0069e63a:; BB(0x0069e63a);
    /* 0069e63a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069e63f: call 0x691728 */ r_esp -= 4; W32(r_esp, 0x69e644u); f_00691728();
    /* 0069e644: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
L_0069e647:; BB(0x0069e647);
    /* 0069e647: cmp ecx, dword ptr [0x9c605c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9c605cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e64d: jne 0x69e675 */ if (!fZ) goto L_0069e675;
L_0069e64f:; BB(0x0069e64f);
    /* 0069e64f: movzx edx, word ptr [ebp + 0x2dc] */ r_edx = (u32)R16((u32)(r_ebp+0x2dcu));
    /* 0069e656: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e65c: je 0x69e708 */ if (fZ) goto L_0069e708;
L_0069e662:; BB(0x0069e662);
    /* 0069e662: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069e663: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e668u); f_007b4d18();
    /* 0069e668: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e669: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e66e: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e673u); f_0069178c();
    /* 0069e673: jmp 0x69e67f */ goto L_0069e67f;
L_0069e675:; BB(0x0069e675);
    /* 0069e675: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e677: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e678: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e67a: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e67fu); f_0069178c();
L_0069e67f:; BB(0x0069e67f);
    /* 0069e67f: push 0x93db00 */ { u32 v = 0x93db00u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e684: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e685: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e687: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e68cu); f_00691578();
L_0069e68c:; BB(0x0069e68c);
    /* 0069e68c: push 0x909a64 */ { u32 v = 0x909a64u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e691: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e692: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e694: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e699u); f_00691578();
    /* 0069e699: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e6a0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6a3: jne 0x69e6be */ if (!fZ) goto L_0069e6be;
L_0069e6a5:; BB(0x0069e6a5);
    /* 0069e6a5: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6aa: push 0x93db08 */ { u32 v = 0x93db08u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6af: call 0x6afb08 */ r_esp -= 4; W32(r_esp, 0x69e6b4u); f_006afb08();
    /* 0069e6b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e6b7: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
L_0069e6be:; BB(0x0069e6be);
    /* 0069e6be: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069e6c1: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6c3:; BB(0x0069e6c3);
    /* 0069e6c3: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x69e6c8u); f_00688b8c();
    /* 0069e6c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6ca: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6cc:; BB(0x0069e6cc);
    /* 0069e6cc: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e6d1u); f_00687c48();
    /* 0069e6d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6d3: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6d5:; BB(0x0069e6d5);
    /* 0069e6d5: call 0x694c8c */ r_esp -= 4; W32(r_esp, 0x69e6dau); f_00694c8c();
    /* 0069e6da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6dc: je 0x69e6f3 */ if (fZ) goto L_0069e6f3;
L_0069e6de:; BB(0x0069e6de);
    /* 0069e6de: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e6e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6e3: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6e8u); f_006c1bd4();
    /* 0069e6e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6e9: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069e6f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e6f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e6f2: ret  */ FN_RET(0x0069e4c5); r_esp += 4; return;
L_0069e6f3:; BB(0x0069e6f3);
    /* 0069e6f3: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6f8: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6fdu); f_006c1bd4();
    /* 0069e6fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6fe: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0069e705:; BB(0x0069e705);
    /* 0069e705: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e706: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e707: ret  */ FN_RET(0x0069e4c5); r_esp += 4; return;
L_0069e708:; BB(0x0069e708);
    /* 0069e708: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e70d: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e712u); f_0069178c();
    /* 0069e712: jmp 0x69e67f */ goto L_0069e67f;
}

void f_0069e4d3(void)
{
    FN_ENTER(0x0069e4d3);
    /* 0069e4d3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e4d5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e4d7: call 0x69d8f4 */ r_esp -= 4; W32(r_esp, 0x69e4dcu); f_0069d8f4();
    /* 0069e4dc: jmp 0x69e59b */ goto L_0069e59b;
L_0069e59b:; BB(0x0069e59b);
    /* 0069e59b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e59d: call 0x69ac2c */ r_esp -= 4; W32(r_esp, 0x69e5a2u); f_0069ac2c();
    /* 0069e5a2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5a4: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69e5a9u); f_0077774c();
    /* 0069e5a9: mov edx, dword ptr [edi + 0x92c] */ r_edx = R32((u32)(r_edi+0x92cu));
    /* 0069e5af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5b1: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069e5b8: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069e5bb: je 0x69e5d1 */ if (fZ) goto L_0069e5d1;
L_0069e5bd:; BB(0x0069e5bd);
    /* 0069e5bd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5bf: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5c1: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5c3: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5c8u); f_00694390();
    /* 0069e5c8: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5ca: call 0x69cb24 */ r_esp -= 4; W32(r_esp, 0x69e5cfu); f_0069cb24();
    /* 0069e5cf: jmp 0x69e5e9 */ goto L_0069e5e9;
L_0069e5d1:; BB(0x0069e5d1);
    /* 0069e5d1: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069e5d7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069e5d9: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x69e5dcu); call_ind(t); }
    /* 0069e5dc: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069e5df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e0: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5e4: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5e9u); f_00694390();
L_0069e5e9:; BB(0x0069e5e9);
    /* 0069e5e9: mov eax, dword ptr [edi + 0x524] */ r_eax = R32((u32)(r_edi+0x524u));
    /* 0069e5ef: and eax, 0xffffffc1 */ {  u32 a = r_eax; u32 b = 0xffffffc1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5f2: mov dword ptr [edi + 0x524], eax */ W32((u32)(r_edi+0x524u), r_eax);
    /* 0069e5f8: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e5fdu); f_00687c48();
    /* 0069e5fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e5ff: jne 0x69e60d */ if (!fZ) goto L_0069e60d;
L_0069e601:; BB(0x0069e601);
    /* 0069e601: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e608: jmp 0x69e6be */ goto L_0069e6be;
L_0069e60d:; BB(0x0069e60d);
    /* 0069e60d: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e60f: call 0x7778d8 */ r_esp -= 4; W32(r_esp, 0x69e614u); f_007778d8();
    /* 0069e614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e615: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e61au); f_007b4d18();
    /* 0069e61a: mov ebp, eax */ r_ebp = r_eax;
    /* 0069e61c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e61f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e621: je 0x69e68c */ if (fZ) goto L_0069e68c;
L_0069e623:; BB(0x0069e623);
    /* 0069e623: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0069e626: cmp ecx, dword ptr [0x9cb9a8] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9cb9a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e62c: jne 0x69e647 */ if (!fZ) goto L_0069e647;
L_0069e62e:; BB(0x0069e62e);
    /* 0069e62e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0069e632: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e636: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e638: je 0x69e647 */ if (fZ) goto L_0069e647;
L_0069e63a:; BB(0x0069e63a);
    /* 0069e63a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069e63f: call 0x691728 */ r_esp -= 4; W32(r_esp, 0x69e644u); f_00691728();
    /* 0069e644: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
L_0069e647:; BB(0x0069e647);
    /* 0069e647: cmp ecx, dword ptr [0x9c605c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9c605cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e64d: jne 0x69e675 */ if (!fZ) goto L_0069e675;
L_0069e64f:; BB(0x0069e64f);
    /* 0069e64f: movzx edx, word ptr [ebp + 0x2dc] */ r_edx = (u32)R16((u32)(r_ebp+0x2dcu));
    /* 0069e656: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e65c: je 0x69e708 */ if (fZ) goto L_0069e708;
L_0069e662:; BB(0x0069e662);
    /* 0069e662: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069e663: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e668u); f_007b4d18();
    /* 0069e668: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e669: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e66e: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e673u); f_0069178c();
    /* 0069e673: jmp 0x69e67f */ goto L_0069e67f;
L_0069e675:; BB(0x0069e675);
    /* 0069e675: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e677: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e678: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e67a: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e67fu); f_0069178c();
L_0069e67f:; BB(0x0069e67f);
    /* 0069e67f: push 0x93db00 */ { u32 v = 0x93db00u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e684: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e685: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e687: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e68cu); f_00691578();
L_0069e68c:; BB(0x0069e68c);
    /* 0069e68c: push 0x909a64 */ { u32 v = 0x909a64u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e691: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e692: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e694: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e699u); f_00691578();
    /* 0069e699: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e6a0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6a3: jne 0x69e6be */ if (!fZ) goto L_0069e6be;
L_0069e6a5:; BB(0x0069e6a5);
    /* 0069e6a5: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6aa: push 0x93db08 */ { u32 v = 0x93db08u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6af: call 0x6afb08 */ r_esp -= 4; W32(r_esp, 0x69e6b4u); f_006afb08();
    /* 0069e6b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e6b7: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
L_0069e6be:; BB(0x0069e6be);
    /* 0069e6be: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069e6c1: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6c3:; BB(0x0069e6c3);
    /* 0069e6c3: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x69e6c8u); f_00688b8c();
    /* 0069e6c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6ca: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6cc:; BB(0x0069e6cc);
    /* 0069e6cc: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e6d1u); f_00687c48();
    /* 0069e6d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6d3: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6d5:; BB(0x0069e6d5);
    /* 0069e6d5: call 0x694c8c */ r_esp -= 4; W32(r_esp, 0x69e6dau); f_00694c8c();
    /* 0069e6da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6dc: je 0x69e6f3 */ if (fZ) goto L_0069e6f3;
L_0069e6de:; BB(0x0069e6de);
    /* 0069e6de: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e6e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6e3: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6e8u); f_006c1bd4();
    /* 0069e6e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6e9: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069e6f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e6f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e6f2: ret  */ FN_RET(0x0069e4d3); r_esp += 4; return;
L_0069e6f3:; BB(0x0069e6f3);
    /* 0069e6f3: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6f8: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6fdu); f_006c1bd4();
    /* 0069e6fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6fe: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0069e705:; BB(0x0069e705);
    /* 0069e705: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e706: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e707: ret  */ FN_RET(0x0069e4d3); r_esp += 4; return;
L_0069e708:; BB(0x0069e708);
    /* 0069e708: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e70d: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e712u); f_0069178c();
    /* 0069e712: jmp 0x69e67f */ goto L_0069e67f;
}

void f_0069e4e1(void)
{
    FN_ENTER(0x0069e4e1);
    /* 0069e4e1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e4e3: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e4e5: call 0x69dd60 */ r_esp -= 4; W32(r_esp, 0x69e4eau); f_0069dd60();
    /* 0069e4ea: jmp 0x69e59b */ goto L_0069e59b;
L_0069e59b:; BB(0x0069e59b);
    /* 0069e59b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e59d: call 0x69ac2c */ r_esp -= 4; W32(r_esp, 0x69e5a2u); f_0069ac2c();
    /* 0069e5a2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5a4: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69e5a9u); f_0077774c();
    /* 0069e5a9: mov edx, dword ptr [edi + 0x92c] */ r_edx = R32((u32)(r_edi+0x92cu));
    /* 0069e5af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5b1: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069e5b8: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069e5bb: je 0x69e5d1 */ if (fZ) goto L_0069e5d1;
L_0069e5bd:; BB(0x0069e5bd);
    /* 0069e5bd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5bf: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5c1: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5c3: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5c8u); f_00694390();
    /* 0069e5c8: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5ca: call 0x69cb24 */ r_esp -= 4; W32(r_esp, 0x69e5cfu); f_0069cb24();
    /* 0069e5cf: jmp 0x69e5e9 */ goto L_0069e5e9;
L_0069e5d1:; BB(0x0069e5d1);
    /* 0069e5d1: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069e5d7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069e5d9: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x69e5dcu); call_ind(t); }
    /* 0069e5dc: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069e5df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e0: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5e4: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5e9u); f_00694390();
L_0069e5e9:; BB(0x0069e5e9);
    /* 0069e5e9: mov eax, dword ptr [edi + 0x524] */ r_eax = R32((u32)(r_edi+0x524u));
    /* 0069e5ef: and eax, 0xffffffc1 */ {  u32 a = r_eax; u32 b = 0xffffffc1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5f2: mov dword ptr [edi + 0x524], eax */ W32((u32)(r_edi+0x524u), r_eax);
    /* 0069e5f8: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e5fdu); f_00687c48();
    /* 0069e5fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e5ff: jne 0x69e60d */ if (!fZ) goto L_0069e60d;
L_0069e601:; BB(0x0069e601);
    /* 0069e601: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e608: jmp 0x69e6be */ goto L_0069e6be;
L_0069e60d:; BB(0x0069e60d);
    /* 0069e60d: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e60f: call 0x7778d8 */ r_esp -= 4; W32(r_esp, 0x69e614u); f_007778d8();
    /* 0069e614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e615: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e61au); f_007b4d18();
    /* 0069e61a: mov ebp, eax */ r_ebp = r_eax;
    /* 0069e61c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e61f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e621: je 0x69e68c */ if (fZ) goto L_0069e68c;
L_0069e623:; BB(0x0069e623);
    /* 0069e623: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0069e626: cmp ecx, dword ptr [0x9cb9a8] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9cb9a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e62c: jne 0x69e647 */ if (!fZ) goto L_0069e647;
L_0069e62e:; BB(0x0069e62e);
    /* 0069e62e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0069e632: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e636: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e638: je 0x69e647 */ if (fZ) goto L_0069e647;
L_0069e63a:; BB(0x0069e63a);
    /* 0069e63a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069e63f: call 0x691728 */ r_esp -= 4; W32(r_esp, 0x69e644u); f_00691728();
    /* 0069e644: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
L_0069e647:; BB(0x0069e647);
    /* 0069e647: cmp ecx, dword ptr [0x9c605c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9c605cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e64d: jne 0x69e675 */ if (!fZ) goto L_0069e675;
L_0069e64f:; BB(0x0069e64f);
    /* 0069e64f: movzx edx, word ptr [ebp + 0x2dc] */ r_edx = (u32)R16((u32)(r_ebp+0x2dcu));
    /* 0069e656: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e65c: je 0x69e708 */ if (fZ) goto L_0069e708;
L_0069e662:; BB(0x0069e662);
    /* 0069e662: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069e663: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e668u); f_007b4d18();
    /* 0069e668: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e669: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e66e: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e673u); f_0069178c();
    /* 0069e673: jmp 0x69e67f */ goto L_0069e67f;
L_0069e675:; BB(0x0069e675);
    /* 0069e675: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e677: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e678: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e67a: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e67fu); f_0069178c();
L_0069e67f:; BB(0x0069e67f);
    /* 0069e67f: push 0x93db00 */ { u32 v = 0x93db00u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e684: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e685: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e687: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e68cu); f_00691578();
L_0069e68c:; BB(0x0069e68c);
    /* 0069e68c: push 0x909a64 */ { u32 v = 0x909a64u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e691: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e692: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e694: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e699u); f_00691578();
    /* 0069e699: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e6a0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6a3: jne 0x69e6be */ if (!fZ) goto L_0069e6be;
L_0069e6a5:; BB(0x0069e6a5);
    /* 0069e6a5: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6aa: push 0x93db08 */ { u32 v = 0x93db08u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6af: call 0x6afb08 */ r_esp -= 4; W32(r_esp, 0x69e6b4u); f_006afb08();
    /* 0069e6b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e6b7: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
L_0069e6be:; BB(0x0069e6be);
    /* 0069e6be: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069e6c1: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6c3:; BB(0x0069e6c3);
    /* 0069e6c3: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x69e6c8u); f_00688b8c();
    /* 0069e6c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6ca: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6cc:; BB(0x0069e6cc);
    /* 0069e6cc: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e6d1u); f_00687c48();
    /* 0069e6d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6d3: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6d5:; BB(0x0069e6d5);
    /* 0069e6d5: call 0x694c8c */ r_esp -= 4; W32(r_esp, 0x69e6dau); f_00694c8c();
    /* 0069e6da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6dc: je 0x69e6f3 */ if (fZ) goto L_0069e6f3;
L_0069e6de:; BB(0x0069e6de);
    /* 0069e6de: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e6e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6e3: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6e8u); f_006c1bd4();
    /* 0069e6e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6e9: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069e6f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e6f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e6f2: ret  */ FN_RET(0x0069e4e1); r_esp += 4; return;
L_0069e6f3:; BB(0x0069e6f3);
    /* 0069e6f3: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6f8: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6fdu); f_006c1bd4();
    /* 0069e6fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6fe: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0069e705:; BB(0x0069e705);
    /* 0069e705: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e706: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e707: ret  */ FN_RET(0x0069e4e1); r_esp += 4; return;
L_0069e708:; BB(0x0069e708);
    /* 0069e708: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e70d: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e712u); f_0069178c();
    /* 0069e712: jmp 0x69e67f */ goto L_0069e67f;
}

void f_0069e4ef(void)
{
    FN_ENTER(0x0069e4ef);
    /* 0069e4ef: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e4f1: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e4f3: call 0x69e15c */ r_esp -= 4; W32(r_esp, 0x69e4f8u); f_0069e15c();
    /* 0069e4f8: jmp 0x69e59b */ goto L_0069e59b;
L_0069e59b:; BB(0x0069e59b);
    /* 0069e59b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e59d: call 0x69ac2c */ r_esp -= 4; W32(r_esp, 0x69e5a2u); f_0069ac2c();
    /* 0069e5a2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5a4: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69e5a9u); f_0077774c();
    /* 0069e5a9: mov edx, dword ptr [edi + 0x92c] */ r_edx = R32((u32)(r_edi+0x92cu));
    /* 0069e5af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5b1: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069e5b8: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069e5bb: je 0x69e5d1 */ if (fZ) goto L_0069e5d1;
L_0069e5bd:; BB(0x0069e5bd);
    /* 0069e5bd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5bf: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5c1: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5c3: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5c8u); f_00694390();
    /* 0069e5c8: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5ca: call 0x69cb24 */ r_esp -= 4; W32(r_esp, 0x69e5cfu); f_0069cb24();
    /* 0069e5cf: jmp 0x69e5e9 */ goto L_0069e5e9;
L_0069e5d1:; BB(0x0069e5d1);
    /* 0069e5d1: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069e5d7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069e5d9: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x69e5dcu); call_ind(t); }
    /* 0069e5dc: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069e5df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e0: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5e4: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5e9u); f_00694390();
L_0069e5e9:; BB(0x0069e5e9);
    /* 0069e5e9: mov eax, dword ptr [edi + 0x524] */ r_eax = R32((u32)(r_edi+0x524u));
    /* 0069e5ef: and eax, 0xffffffc1 */ {  u32 a = r_eax; u32 b = 0xffffffc1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5f2: mov dword ptr [edi + 0x524], eax */ W32((u32)(r_edi+0x524u), r_eax);
    /* 0069e5f8: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e5fdu); f_00687c48();
    /* 0069e5fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e5ff: jne 0x69e60d */ if (!fZ) goto L_0069e60d;
L_0069e601:; BB(0x0069e601);
    /* 0069e601: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e608: jmp 0x69e6be */ goto L_0069e6be;
L_0069e60d:; BB(0x0069e60d);
    /* 0069e60d: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e60f: call 0x7778d8 */ r_esp -= 4; W32(r_esp, 0x69e614u); f_007778d8();
    /* 0069e614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e615: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e61au); f_007b4d18();
    /* 0069e61a: mov ebp, eax */ r_ebp = r_eax;
    /* 0069e61c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e61f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e621: je 0x69e68c */ if (fZ) goto L_0069e68c;
L_0069e623:; BB(0x0069e623);
    /* 0069e623: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0069e626: cmp ecx, dword ptr [0x9cb9a8] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9cb9a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e62c: jne 0x69e647 */ if (!fZ) goto L_0069e647;
L_0069e62e:; BB(0x0069e62e);
    /* 0069e62e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0069e632: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e636: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e638: je 0x69e647 */ if (fZ) goto L_0069e647;
L_0069e63a:; BB(0x0069e63a);
    /* 0069e63a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069e63f: call 0x691728 */ r_esp -= 4; W32(r_esp, 0x69e644u); f_00691728();
    /* 0069e644: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
L_0069e647:; BB(0x0069e647);
    /* 0069e647: cmp ecx, dword ptr [0x9c605c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9c605cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e64d: jne 0x69e675 */ if (!fZ) goto L_0069e675;
L_0069e64f:; BB(0x0069e64f);
    /* 0069e64f: movzx edx, word ptr [ebp + 0x2dc] */ r_edx = (u32)R16((u32)(r_ebp+0x2dcu));
    /* 0069e656: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e65c: je 0x69e708 */ if (fZ) goto L_0069e708;
L_0069e662:; BB(0x0069e662);
    /* 0069e662: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069e663: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e668u); f_007b4d18();
    /* 0069e668: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e669: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e66e: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e673u); f_0069178c();
    /* 0069e673: jmp 0x69e67f */ goto L_0069e67f;
L_0069e675:; BB(0x0069e675);
    /* 0069e675: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e677: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e678: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e67a: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e67fu); f_0069178c();
L_0069e67f:; BB(0x0069e67f);
    /* 0069e67f: push 0x93db00 */ { u32 v = 0x93db00u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e684: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e685: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e687: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e68cu); f_00691578();
L_0069e68c:; BB(0x0069e68c);
    /* 0069e68c: push 0x909a64 */ { u32 v = 0x909a64u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e691: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e692: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e694: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e699u); f_00691578();
    /* 0069e699: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e6a0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6a3: jne 0x69e6be */ if (!fZ) goto L_0069e6be;
L_0069e6a5:; BB(0x0069e6a5);
    /* 0069e6a5: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6aa: push 0x93db08 */ { u32 v = 0x93db08u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6af: call 0x6afb08 */ r_esp -= 4; W32(r_esp, 0x69e6b4u); f_006afb08();
    /* 0069e6b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e6b7: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
L_0069e6be:; BB(0x0069e6be);
    /* 0069e6be: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069e6c1: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6c3:; BB(0x0069e6c3);
    /* 0069e6c3: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x69e6c8u); f_00688b8c();
    /* 0069e6c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6ca: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6cc:; BB(0x0069e6cc);
    /* 0069e6cc: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e6d1u); f_00687c48();
    /* 0069e6d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6d3: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6d5:; BB(0x0069e6d5);
    /* 0069e6d5: call 0x694c8c */ r_esp -= 4; W32(r_esp, 0x69e6dau); f_00694c8c();
    /* 0069e6da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6dc: je 0x69e6f3 */ if (fZ) goto L_0069e6f3;
L_0069e6de:; BB(0x0069e6de);
    /* 0069e6de: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e6e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6e3: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6e8u); f_006c1bd4();
    /* 0069e6e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6e9: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069e6f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e6f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e6f2: ret  */ FN_RET(0x0069e4ef); r_esp += 4; return;
L_0069e6f3:; BB(0x0069e6f3);
    /* 0069e6f3: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6f8: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6fdu); f_006c1bd4();
    /* 0069e6fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6fe: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0069e705:; BB(0x0069e705);
    /* 0069e705: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e706: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e707: ret  */ FN_RET(0x0069e4ef); r_esp += 4; return;
L_0069e708:; BB(0x0069e708);
    /* 0069e708: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e70d: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e712u); f_0069178c();
    /* 0069e712: jmp 0x69e67f */ goto L_0069e67f;
}

void f_0069e4fd(void)
{
    FN_ENTER(0x0069e4fd);
    /* 0069e4fd: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e4ff: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e501: call 0x69e718 */ r_esp -= 4; W32(r_esp, 0x69e506u); f_0069e718();
    /* 0069e506: jmp 0x69e59b */ goto L_0069e59b;
L_0069e59b:; BB(0x0069e59b);
    /* 0069e59b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e59d: call 0x69ac2c */ r_esp -= 4; W32(r_esp, 0x69e5a2u); f_0069ac2c();
    /* 0069e5a2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5a4: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69e5a9u); f_0077774c();
    /* 0069e5a9: mov edx, dword ptr [edi + 0x92c] */ r_edx = R32((u32)(r_edi+0x92cu));
    /* 0069e5af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5b1: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069e5b8: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069e5bb: je 0x69e5d1 */ if (fZ) goto L_0069e5d1;
L_0069e5bd:; BB(0x0069e5bd);
    /* 0069e5bd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5bf: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5c1: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5c3: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5c8u); f_00694390();
    /* 0069e5c8: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5ca: call 0x69cb24 */ r_esp -= 4; W32(r_esp, 0x69e5cfu); f_0069cb24();
    /* 0069e5cf: jmp 0x69e5e9 */ goto L_0069e5e9;
L_0069e5d1:; BB(0x0069e5d1);
    /* 0069e5d1: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069e5d7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069e5d9: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x69e5dcu); call_ind(t); }
    /* 0069e5dc: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069e5df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e0: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5e4: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5e9u); f_00694390();
L_0069e5e9:; BB(0x0069e5e9);
    /* 0069e5e9: mov eax, dword ptr [edi + 0x524] */ r_eax = R32((u32)(r_edi+0x524u));
    /* 0069e5ef: and eax, 0xffffffc1 */ {  u32 a = r_eax; u32 b = 0xffffffc1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5f2: mov dword ptr [edi + 0x524], eax */ W32((u32)(r_edi+0x524u), r_eax);
    /* 0069e5f8: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e5fdu); f_00687c48();
    /* 0069e5fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e5ff: jne 0x69e60d */ if (!fZ) goto L_0069e60d;
L_0069e601:; BB(0x0069e601);
    /* 0069e601: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e608: jmp 0x69e6be */ goto L_0069e6be;
L_0069e60d:; BB(0x0069e60d);
    /* 0069e60d: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e60f: call 0x7778d8 */ r_esp -= 4; W32(r_esp, 0x69e614u); f_007778d8();
    /* 0069e614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e615: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e61au); f_007b4d18();
    /* 0069e61a: mov ebp, eax */ r_ebp = r_eax;
    /* 0069e61c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e61f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e621: je 0x69e68c */ if (fZ) goto L_0069e68c;
L_0069e623:; BB(0x0069e623);
    /* 0069e623: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0069e626: cmp ecx, dword ptr [0x9cb9a8] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9cb9a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e62c: jne 0x69e647 */ if (!fZ) goto L_0069e647;
L_0069e62e:; BB(0x0069e62e);
    /* 0069e62e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0069e632: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e636: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e638: je 0x69e647 */ if (fZ) goto L_0069e647;
L_0069e63a:; BB(0x0069e63a);
    /* 0069e63a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069e63f: call 0x691728 */ r_esp -= 4; W32(r_esp, 0x69e644u); f_00691728();
    /* 0069e644: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
L_0069e647:; BB(0x0069e647);
    /* 0069e647: cmp ecx, dword ptr [0x9c605c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9c605cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e64d: jne 0x69e675 */ if (!fZ) goto L_0069e675;
L_0069e64f:; BB(0x0069e64f);
    /* 0069e64f: movzx edx, word ptr [ebp + 0x2dc] */ r_edx = (u32)R16((u32)(r_ebp+0x2dcu));
    /* 0069e656: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e65c: je 0x69e708 */ if (fZ) goto L_0069e708;
L_0069e662:; BB(0x0069e662);
    /* 0069e662: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069e663: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e668u); f_007b4d18();
    /* 0069e668: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e669: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e66e: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e673u); f_0069178c();
    /* 0069e673: jmp 0x69e67f */ goto L_0069e67f;
L_0069e675:; BB(0x0069e675);
    /* 0069e675: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e677: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e678: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e67a: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e67fu); f_0069178c();
L_0069e67f:; BB(0x0069e67f);
    /* 0069e67f: push 0x93db00 */ { u32 v = 0x93db00u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e684: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e685: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e687: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e68cu); f_00691578();
L_0069e68c:; BB(0x0069e68c);
    /* 0069e68c: push 0x909a64 */ { u32 v = 0x909a64u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e691: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e692: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e694: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e699u); f_00691578();
    /* 0069e699: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e6a0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6a3: jne 0x69e6be */ if (!fZ) goto L_0069e6be;
L_0069e6a5:; BB(0x0069e6a5);
    /* 0069e6a5: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6aa: push 0x93db08 */ { u32 v = 0x93db08u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6af: call 0x6afb08 */ r_esp -= 4; W32(r_esp, 0x69e6b4u); f_006afb08();
    /* 0069e6b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e6b7: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
L_0069e6be:; BB(0x0069e6be);
    /* 0069e6be: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069e6c1: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6c3:; BB(0x0069e6c3);
    /* 0069e6c3: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x69e6c8u); f_00688b8c();
    /* 0069e6c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6ca: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6cc:; BB(0x0069e6cc);
    /* 0069e6cc: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e6d1u); f_00687c48();
    /* 0069e6d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6d3: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6d5:; BB(0x0069e6d5);
    /* 0069e6d5: call 0x694c8c */ r_esp -= 4; W32(r_esp, 0x69e6dau); f_00694c8c();
    /* 0069e6da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6dc: je 0x69e6f3 */ if (fZ) goto L_0069e6f3;
L_0069e6de:; BB(0x0069e6de);
    /* 0069e6de: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e6e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6e3: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6e8u); f_006c1bd4();
    /* 0069e6e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6e9: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069e6f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e6f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e6f2: ret  */ FN_RET(0x0069e4fd); r_esp += 4; return;
L_0069e6f3:; BB(0x0069e6f3);
    /* 0069e6f3: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6f8: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6fdu); f_006c1bd4();
    /* 0069e6fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6fe: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0069e705:; BB(0x0069e705);
    /* 0069e705: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e706: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e707: ret  */ FN_RET(0x0069e4fd); r_esp += 4; return;
L_0069e708:; BB(0x0069e708);
    /* 0069e708: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e70d: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e712u); f_0069178c();
    /* 0069e712: jmp 0x69e67f */ goto L_0069e67f;
}

void f_0069e50b(void)
{
    FN_ENTER(0x0069e50b);
    /* 0069e50b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e50d: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e50f: call 0x69ebc8 */ r_esp -= 4; W32(r_esp, 0x69e514u); f_0069ebc8();
    /* 0069e514: jmp 0x69e59b */ goto L_0069e59b;
L_0069e59b:; BB(0x0069e59b);
    /* 0069e59b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e59d: call 0x69ac2c */ r_esp -= 4; W32(r_esp, 0x69e5a2u); f_0069ac2c();
    /* 0069e5a2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5a4: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69e5a9u); f_0077774c();
    /* 0069e5a9: mov edx, dword ptr [edi + 0x92c] */ r_edx = R32((u32)(r_edi+0x92cu));
    /* 0069e5af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5b1: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069e5b8: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069e5bb: je 0x69e5d1 */ if (fZ) goto L_0069e5d1;
L_0069e5bd:; BB(0x0069e5bd);
    /* 0069e5bd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5bf: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5c1: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5c3: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5c8u); f_00694390();
    /* 0069e5c8: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5ca: call 0x69cb24 */ r_esp -= 4; W32(r_esp, 0x69e5cfu); f_0069cb24();
    /* 0069e5cf: jmp 0x69e5e9 */ goto L_0069e5e9;
L_0069e5d1:; BB(0x0069e5d1);
    /* 0069e5d1: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069e5d7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069e5d9: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x69e5dcu); call_ind(t); }
    /* 0069e5dc: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069e5df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e0: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5e4: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5e9u); f_00694390();
L_0069e5e9:; BB(0x0069e5e9);
    /* 0069e5e9: mov eax, dword ptr [edi + 0x524] */ r_eax = R32((u32)(r_edi+0x524u));
    /* 0069e5ef: and eax, 0xffffffc1 */ {  u32 a = r_eax; u32 b = 0xffffffc1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5f2: mov dword ptr [edi + 0x524], eax */ W32((u32)(r_edi+0x524u), r_eax);
    /* 0069e5f8: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e5fdu); f_00687c48();
    /* 0069e5fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e5ff: jne 0x69e60d */ if (!fZ) goto L_0069e60d;
L_0069e601:; BB(0x0069e601);
    /* 0069e601: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e608: jmp 0x69e6be */ goto L_0069e6be;
L_0069e60d:; BB(0x0069e60d);
    /* 0069e60d: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e60f: call 0x7778d8 */ r_esp -= 4; W32(r_esp, 0x69e614u); f_007778d8();
    /* 0069e614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e615: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e61au); f_007b4d18();
    /* 0069e61a: mov ebp, eax */ r_ebp = r_eax;
    /* 0069e61c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e61f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e621: je 0x69e68c */ if (fZ) goto L_0069e68c;
L_0069e623:; BB(0x0069e623);
    /* 0069e623: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0069e626: cmp ecx, dword ptr [0x9cb9a8] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9cb9a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e62c: jne 0x69e647 */ if (!fZ) goto L_0069e647;
L_0069e62e:; BB(0x0069e62e);
    /* 0069e62e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0069e632: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e636: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e638: je 0x69e647 */ if (fZ) goto L_0069e647;
L_0069e63a:; BB(0x0069e63a);
    /* 0069e63a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069e63f: call 0x691728 */ r_esp -= 4; W32(r_esp, 0x69e644u); f_00691728();
    /* 0069e644: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
L_0069e647:; BB(0x0069e647);
    /* 0069e647: cmp ecx, dword ptr [0x9c605c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9c605cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e64d: jne 0x69e675 */ if (!fZ) goto L_0069e675;
L_0069e64f:; BB(0x0069e64f);
    /* 0069e64f: movzx edx, word ptr [ebp + 0x2dc] */ r_edx = (u32)R16((u32)(r_ebp+0x2dcu));
    /* 0069e656: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e65c: je 0x69e708 */ if (fZ) goto L_0069e708;
L_0069e662:; BB(0x0069e662);
    /* 0069e662: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069e663: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e668u); f_007b4d18();
    /* 0069e668: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e669: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e66e: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e673u); f_0069178c();
    /* 0069e673: jmp 0x69e67f */ goto L_0069e67f;
L_0069e675:; BB(0x0069e675);
    /* 0069e675: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e677: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e678: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e67a: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e67fu); f_0069178c();
L_0069e67f:; BB(0x0069e67f);
    /* 0069e67f: push 0x93db00 */ { u32 v = 0x93db00u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e684: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e685: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e687: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e68cu); f_00691578();
L_0069e68c:; BB(0x0069e68c);
    /* 0069e68c: push 0x909a64 */ { u32 v = 0x909a64u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e691: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e692: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e694: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e699u); f_00691578();
    /* 0069e699: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e6a0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6a3: jne 0x69e6be */ if (!fZ) goto L_0069e6be;
L_0069e6a5:; BB(0x0069e6a5);
    /* 0069e6a5: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6aa: push 0x93db08 */ { u32 v = 0x93db08u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6af: call 0x6afb08 */ r_esp -= 4; W32(r_esp, 0x69e6b4u); f_006afb08();
    /* 0069e6b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e6b7: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
L_0069e6be:; BB(0x0069e6be);
    /* 0069e6be: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069e6c1: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6c3:; BB(0x0069e6c3);
    /* 0069e6c3: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x69e6c8u); f_00688b8c();
    /* 0069e6c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6ca: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6cc:; BB(0x0069e6cc);
    /* 0069e6cc: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e6d1u); f_00687c48();
    /* 0069e6d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6d3: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6d5:; BB(0x0069e6d5);
    /* 0069e6d5: call 0x694c8c */ r_esp -= 4; W32(r_esp, 0x69e6dau); f_00694c8c();
    /* 0069e6da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6dc: je 0x69e6f3 */ if (fZ) goto L_0069e6f3;
L_0069e6de:; BB(0x0069e6de);
    /* 0069e6de: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e6e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6e3: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6e8u); f_006c1bd4();
    /* 0069e6e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6e9: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069e6f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e6f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e6f2: ret  */ FN_RET(0x0069e50b); r_esp += 4; return;
L_0069e6f3:; BB(0x0069e6f3);
    /* 0069e6f3: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6f8: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6fdu); f_006c1bd4();
    /* 0069e6fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6fe: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0069e705:; BB(0x0069e705);
    /* 0069e705: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e706: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e707: ret  */ FN_RET(0x0069e50b); r_esp += 4; return;
L_0069e708:; BB(0x0069e708);
    /* 0069e708: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e70d: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e712u); f_0069178c();
    /* 0069e712: jmp 0x69e67f */ goto L_0069e67f;
}

void f_0069e519(void)
{
    FN_ENTER(0x0069e519);
    /* 0069e519: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e51b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e51d: call 0x69ef04 */ r_esp -= 4; W32(r_esp, 0x69e522u); f_0069ef04();
    /* 0069e522: jmp 0x69e59b */ goto L_0069e59b;
L_0069e59b:; BB(0x0069e59b);
    /* 0069e59b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e59d: call 0x69ac2c */ r_esp -= 4; W32(r_esp, 0x69e5a2u); f_0069ac2c();
    /* 0069e5a2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5a4: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69e5a9u); f_0077774c();
    /* 0069e5a9: mov edx, dword ptr [edi + 0x92c] */ r_edx = R32((u32)(r_edi+0x92cu));
    /* 0069e5af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5b1: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069e5b8: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069e5bb: je 0x69e5d1 */ if (fZ) goto L_0069e5d1;
L_0069e5bd:; BB(0x0069e5bd);
    /* 0069e5bd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5bf: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5c1: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5c3: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5c8u); f_00694390();
    /* 0069e5c8: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5ca: call 0x69cb24 */ r_esp -= 4; W32(r_esp, 0x69e5cfu); f_0069cb24();
    /* 0069e5cf: jmp 0x69e5e9 */ goto L_0069e5e9;
L_0069e5d1:; BB(0x0069e5d1);
    /* 0069e5d1: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069e5d7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069e5d9: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x69e5dcu); call_ind(t); }
    /* 0069e5dc: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069e5df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e0: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5e4: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5e9u); f_00694390();
L_0069e5e9:; BB(0x0069e5e9);
    /* 0069e5e9: mov eax, dword ptr [edi + 0x524] */ r_eax = R32((u32)(r_edi+0x524u));
    /* 0069e5ef: and eax, 0xffffffc1 */ {  u32 a = r_eax; u32 b = 0xffffffc1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5f2: mov dword ptr [edi + 0x524], eax */ W32((u32)(r_edi+0x524u), r_eax);
    /* 0069e5f8: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e5fdu); f_00687c48();
    /* 0069e5fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e5ff: jne 0x69e60d */ if (!fZ) goto L_0069e60d;
L_0069e601:; BB(0x0069e601);
    /* 0069e601: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e608: jmp 0x69e6be */ goto L_0069e6be;
L_0069e60d:; BB(0x0069e60d);
    /* 0069e60d: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e60f: call 0x7778d8 */ r_esp -= 4; W32(r_esp, 0x69e614u); f_007778d8();
    /* 0069e614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e615: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e61au); f_007b4d18();
    /* 0069e61a: mov ebp, eax */ r_ebp = r_eax;
    /* 0069e61c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e61f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e621: je 0x69e68c */ if (fZ) goto L_0069e68c;
L_0069e623:; BB(0x0069e623);
    /* 0069e623: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0069e626: cmp ecx, dword ptr [0x9cb9a8] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9cb9a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e62c: jne 0x69e647 */ if (!fZ) goto L_0069e647;
L_0069e62e:; BB(0x0069e62e);
    /* 0069e62e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0069e632: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e636: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e638: je 0x69e647 */ if (fZ) goto L_0069e647;
L_0069e63a:; BB(0x0069e63a);
    /* 0069e63a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069e63f: call 0x691728 */ r_esp -= 4; W32(r_esp, 0x69e644u); f_00691728();
    /* 0069e644: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
L_0069e647:; BB(0x0069e647);
    /* 0069e647: cmp ecx, dword ptr [0x9c605c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9c605cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e64d: jne 0x69e675 */ if (!fZ) goto L_0069e675;
L_0069e64f:; BB(0x0069e64f);
    /* 0069e64f: movzx edx, word ptr [ebp + 0x2dc] */ r_edx = (u32)R16((u32)(r_ebp+0x2dcu));
    /* 0069e656: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e65c: je 0x69e708 */ if (fZ) goto L_0069e708;
L_0069e662:; BB(0x0069e662);
    /* 0069e662: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069e663: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e668u); f_007b4d18();
    /* 0069e668: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e669: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e66e: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e673u); f_0069178c();
    /* 0069e673: jmp 0x69e67f */ goto L_0069e67f;
L_0069e675:; BB(0x0069e675);
    /* 0069e675: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e677: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e678: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e67a: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e67fu); f_0069178c();
L_0069e67f:; BB(0x0069e67f);
    /* 0069e67f: push 0x93db00 */ { u32 v = 0x93db00u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e684: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e685: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e687: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e68cu); f_00691578();
L_0069e68c:; BB(0x0069e68c);
    /* 0069e68c: push 0x909a64 */ { u32 v = 0x909a64u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e691: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e692: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e694: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e699u); f_00691578();
    /* 0069e699: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e6a0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6a3: jne 0x69e6be */ if (!fZ) goto L_0069e6be;
L_0069e6a5:; BB(0x0069e6a5);
    /* 0069e6a5: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6aa: push 0x93db08 */ { u32 v = 0x93db08u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6af: call 0x6afb08 */ r_esp -= 4; W32(r_esp, 0x69e6b4u); f_006afb08();
    /* 0069e6b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e6b7: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
L_0069e6be:; BB(0x0069e6be);
    /* 0069e6be: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069e6c1: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6c3:; BB(0x0069e6c3);
    /* 0069e6c3: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x69e6c8u); f_00688b8c();
    /* 0069e6c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6ca: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6cc:; BB(0x0069e6cc);
    /* 0069e6cc: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e6d1u); f_00687c48();
    /* 0069e6d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6d3: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6d5:; BB(0x0069e6d5);
    /* 0069e6d5: call 0x694c8c */ r_esp -= 4; W32(r_esp, 0x69e6dau); f_00694c8c();
    /* 0069e6da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6dc: je 0x69e6f3 */ if (fZ) goto L_0069e6f3;
L_0069e6de:; BB(0x0069e6de);
    /* 0069e6de: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e6e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6e3: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6e8u); f_006c1bd4();
    /* 0069e6e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6e9: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069e6f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e6f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e6f2: ret  */ FN_RET(0x0069e519); r_esp += 4; return;
L_0069e6f3:; BB(0x0069e6f3);
    /* 0069e6f3: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6f8: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6fdu); f_006c1bd4();
    /* 0069e6fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6fe: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0069e705:; BB(0x0069e705);
    /* 0069e705: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e706: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e707: ret  */ FN_RET(0x0069e519); r_esp += 4; return;
L_0069e708:; BB(0x0069e708);
    /* 0069e708: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e70d: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e712u); f_0069178c();
    /* 0069e712: jmp 0x69e67f */ goto L_0069e67f;
}

void f_0069e524(void)
{
    FN_ENTER(0x0069e524);
    /* 0069e524: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e526: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e528: call 0x69f148 */ r_esp -= 4; W32(r_esp, 0x69e52du); f_0069f148();
    /* 0069e52d: jmp 0x69e59b */ goto L_0069e59b;
L_0069e59b:; BB(0x0069e59b);
    /* 0069e59b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e59d: call 0x69ac2c */ r_esp -= 4; W32(r_esp, 0x69e5a2u); f_0069ac2c();
    /* 0069e5a2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5a4: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69e5a9u); f_0077774c();
    /* 0069e5a9: mov edx, dword ptr [edi + 0x92c] */ r_edx = R32((u32)(r_edi+0x92cu));
    /* 0069e5af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5b1: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069e5b8: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069e5bb: je 0x69e5d1 */ if (fZ) goto L_0069e5d1;
L_0069e5bd:; BB(0x0069e5bd);
    /* 0069e5bd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5bf: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5c1: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5c3: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5c8u); f_00694390();
    /* 0069e5c8: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5ca: call 0x69cb24 */ r_esp -= 4; W32(r_esp, 0x69e5cfu); f_0069cb24();
    /* 0069e5cf: jmp 0x69e5e9 */ goto L_0069e5e9;
L_0069e5d1:; BB(0x0069e5d1);
    /* 0069e5d1: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069e5d7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069e5d9: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x69e5dcu); call_ind(t); }
    /* 0069e5dc: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069e5df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e0: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5e4: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5e9u); f_00694390();
L_0069e5e9:; BB(0x0069e5e9);
    /* 0069e5e9: mov eax, dword ptr [edi + 0x524] */ r_eax = R32((u32)(r_edi+0x524u));
    /* 0069e5ef: and eax, 0xffffffc1 */ {  u32 a = r_eax; u32 b = 0xffffffc1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5f2: mov dword ptr [edi + 0x524], eax */ W32((u32)(r_edi+0x524u), r_eax);
    /* 0069e5f8: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e5fdu); f_00687c48();
    /* 0069e5fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e5ff: jne 0x69e60d */ if (!fZ) goto L_0069e60d;
L_0069e601:; BB(0x0069e601);
    /* 0069e601: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e608: jmp 0x69e6be */ goto L_0069e6be;
L_0069e60d:; BB(0x0069e60d);
    /* 0069e60d: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e60f: call 0x7778d8 */ r_esp -= 4; W32(r_esp, 0x69e614u); f_007778d8();
    /* 0069e614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e615: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e61au); f_007b4d18();
    /* 0069e61a: mov ebp, eax */ r_ebp = r_eax;
    /* 0069e61c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e61f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e621: je 0x69e68c */ if (fZ) goto L_0069e68c;
L_0069e623:; BB(0x0069e623);
    /* 0069e623: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0069e626: cmp ecx, dword ptr [0x9cb9a8] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9cb9a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e62c: jne 0x69e647 */ if (!fZ) goto L_0069e647;
L_0069e62e:; BB(0x0069e62e);
    /* 0069e62e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0069e632: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e636: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e638: je 0x69e647 */ if (fZ) goto L_0069e647;
L_0069e63a:; BB(0x0069e63a);
    /* 0069e63a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069e63f: call 0x691728 */ r_esp -= 4; W32(r_esp, 0x69e644u); f_00691728();
    /* 0069e644: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
L_0069e647:; BB(0x0069e647);
    /* 0069e647: cmp ecx, dword ptr [0x9c605c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9c605cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e64d: jne 0x69e675 */ if (!fZ) goto L_0069e675;
L_0069e64f:; BB(0x0069e64f);
    /* 0069e64f: movzx edx, word ptr [ebp + 0x2dc] */ r_edx = (u32)R16((u32)(r_ebp+0x2dcu));
    /* 0069e656: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e65c: je 0x69e708 */ if (fZ) goto L_0069e708;
L_0069e662:; BB(0x0069e662);
    /* 0069e662: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069e663: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e668u); f_007b4d18();
    /* 0069e668: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e669: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e66e: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e673u); f_0069178c();
    /* 0069e673: jmp 0x69e67f */ goto L_0069e67f;
L_0069e675:; BB(0x0069e675);
    /* 0069e675: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e677: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e678: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e67a: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e67fu); f_0069178c();
L_0069e67f:; BB(0x0069e67f);
    /* 0069e67f: push 0x93db00 */ { u32 v = 0x93db00u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e684: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e685: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e687: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e68cu); f_00691578();
L_0069e68c:; BB(0x0069e68c);
    /* 0069e68c: push 0x909a64 */ { u32 v = 0x909a64u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e691: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e692: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e694: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e699u); f_00691578();
    /* 0069e699: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e6a0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6a3: jne 0x69e6be */ if (!fZ) goto L_0069e6be;
L_0069e6a5:; BB(0x0069e6a5);
    /* 0069e6a5: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6aa: push 0x93db08 */ { u32 v = 0x93db08u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6af: call 0x6afb08 */ r_esp -= 4; W32(r_esp, 0x69e6b4u); f_006afb08();
    /* 0069e6b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e6b7: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
L_0069e6be:; BB(0x0069e6be);
    /* 0069e6be: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069e6c1: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6c3:; BB(0x0069e6c3);
    /* 0069e6c3: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x69e6c8u); f_00688b8c();
    /* 0069e6c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6ca: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6cc:; BB(0x0069e6cc);
    /* 0069e6cc: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e6d1u); f_00687c48();
    /* 0069e6d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6d3: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6d5:; BB(0x0069e6d5);
    /* 0069e6d5: call 0x694c8c */ r_esp -= 4; W32(r_esp, 0x69e6dau); f_00694c8c();
    /* 0069e6da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6dc: je 0x69e6f3 */ if (fZ) goto L_0069e6f3;
L_0069e6de:; BB(0x0069e6de);
    /* 0069e6de: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e6e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6e3: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6e8u); f_006c1bd4();
    /* 0069e6e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6e9: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069e6f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e6f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e6f2: ret  */ FN_RET(0x0069e524); r_esp += 4; return;
L_0069e6f3:; BB(0x0069e6f3);
    /* 0069e6f3: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6f8: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6fdu); f_006c1bd4();
    /* 0069e6fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6fe: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0069e705:; BB(0x0069e705);
    /* 0069e705: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e706: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e707: ret  */ FN_RET(0x0069e524); r_esp += 4; return;
L_0069e708:; BB(0x0069e708);
    /* 0069e708: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e70d: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e712u); f_0069178c();
    /* 0069e712: jmp 0x69e67f */ goto L_0069e67f;
}

void f_0069e52f(void)
{
    FN_ENTER(0x0069e52f);
    /* 0069e52f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e531: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e533: call 0x69f384 */ r_esp -= 4; W32(r_esp, 0x69e538u); f_0069f384();
    /* 0069e538: jmp 0x69e59b */ goto L_0069e59b;
L_0069e59b:; BB(0x0069e59b);
    /* 0069e59b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e59d: call 0x69ac2c */ r_esp -= 4; W32(r_esp, 0x69e5a2u); f_0069ac2c();
    /* 0069e5a2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5a4: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69e5a9u); f_0077774c();
    /* 0069e5a9: mov edx, dword ptr [edi + 0x92c] */ r_edx = R32((u32)(r_edi+0x92cu));
    /* 0069e5af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5b1: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069e5b8: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069e5bb: je 0x69e5d1 */ if (fZ) goto L_0069e5d1;
L_0069e5bd:; BB(0x0069e5bd);
    /* 0069e5bd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5bf: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5c1: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5c3: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5c8u); f_00694390();
    /* 0069e5c8: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5ca: call 0x69cb24 */ r_esp -= 4; W32(r_esp, 0x69e5cfu); f_0069cb24();
    /* 0069e5cf: jmp 0x69e5e9 */ goto L_0069e5e9;
L_0069e5d1:; BB(0x0069e5d1);
    /* 0069e5d1: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069e5d7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069e5d9: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x69e5dcu); call_ind(t); }
    /* 0069e5dc: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069e5df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e0: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5e4: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5e9u); f_00694390();
L_0069e5e9:; BB(0x0069e5e9);
    /* 0069e5e9: mov eax, dword ptr [edi + 0x524] */ r_eax = R32((u32)(r_edi+0x524u));
    /* 0069e5ef: and eax, 0xffffffc1 */ {  u32 a = r_eax; u32 b = 0xffffffc1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5f2: mov dword ptr [edi + 0x524], eax */ W32((u32)(r_edi+0x524u), r_eax);
    /* 0069e5f8: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e5fdu); f_00687c48();
    /* 0069e5fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e5ff: jne 0x69e60d */ if (!fZ) goto L_0069e60d;
L_0069e601:; BB(0x0069e601);
    /* 0069e601: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e608: jmp 0x69e6be */ goto L_0069e6be;
L_0069e60d:; BB(0x0069e60d);
    /* 0069e60d: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e60f: call 0x7778d8 */ r_esp -= 4; W32(r_esp, 0x69e614u); f_007778d8();
    /* 0069e614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e615: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e61au); f_007b4d18();
    /* 0069e61a: mov ebp, eax */ r_ebp = r_eax;
    /* 0069e61c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e61f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e621: je 0x69e68c */ if (fZ) goto L_0069e68c;
L_0069e623:; BB(0x0069e623);
    /* 0069e623: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0069e626: cmp ecx, dword ptr [0x9cb9a8] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9cb9a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e62c: jne 0x69e647 */ if (!fZ) goto L_0069e647;
L_0069e62e:; BB(0x0069e62e);
    /* 0069e62e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0069e632: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e636: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e638: je 0x69e647 */ if (fZ) goto L_0069e647;
L_0069e63a:; BB(0x0069e63a);
    /* 0069e63a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069e63f: call 0x691728 */ r_esp -= 4; W32(r_esp, 0x69e644u); f_00691728();
    /* 0069e644: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
L_0069e647:; BB(0x0069e647);
    /* 0069e647: cmp ecx, dword ptr [0x9c605c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9c605cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e64d: jne 0x69e675 */ if (!fZ) goto L_0069e675;
L_0069e64f:; BB(0x0069e64f);
    /* 0069e64f: movzx edx, word ptr [ebp + 0x2dc] */ r_edx = (u32)R16((u32)(r_ebp+0x2dcu));
    /* 0069e656: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e65c: je 0x69e708 */ if (fZ) goto L_0069e708;
L_0069e662:; BB(0x0069e662);
    /* 0069e662: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069e663: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e668u); f_007b4d18();
    /* 0069e668: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e669: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e66e: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e673u); f_0069178c();
    /* 0069e673: jmp 0x69e67f */ goto L_0069e67f;
L_0069e675:; BB(0x0069e675);
    /* 0069e675: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e677: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e678: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e67a: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e67fu); f_0069178c();
L_0069e67f:; BB(0x0069e67f);
    /* 0069e67f: push 0x93db00 */ { u32 v = 0x93db00u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e684: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e685: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e687: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e68cu); f_00691578();
L_0069e68c:; BB(0x0069e68c);
    /* 0069e68c: push 0x909a64 */ { u32 v = 0x909a64u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e691: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e692: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e694: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e699u); f_00691578();
    /* 0069e699: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e6a0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6a3: jne 0x69e6be */ if (!fZ) goto L_0069e6be;
L_0069e6a5:; BB(0x0069e6a5);
    /* 0069e6a5: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6aa: push 0x93db08 */ { u32 v = 0x93db08u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6af: call 0x6afb08 */ r_esp -= 4; W32(r_esp, 0x69e6b4u); f_006afb08();
    /* 0069e6b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e6b7: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
L_0069e6be:; BB(0x0069e6be);
    /* 0069e6be: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069e6c1: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6c3:; BB(0x0069e6c3);
    /* 0069e6c3: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x69e6c8u); f_00688b8c();
    /* 0069e6c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6ca: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6cc:; BB(0x0069e6cc);
    /* 0069e6cc: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e6d1u); f_00687c48();
    /* 0069e6d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6d3: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6d5:; BB(0x0069e6d5);
    /* 0069e6d5: call 0x694c8c */ r_esp -= 4; W32(r_esp, 0x69e6dau); f_00694c8c();
    /* 0069e6da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6dc: je 0x69e6f3 */ if (fZ) goto L_0069e6f3;
L_0069e6de:; BB(0x0069e6de);
    /* 0069e6de: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e6e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6e3: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6e8u); f_006c1bd4();
    /* 0069e6e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6e9: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069e6f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e6f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e6f2: ret  */ FN_RET(0x0069e52f); r_esp += 4; return;
L_0069e6f3:; BB(0x0069e6f3);
    /* 0069e6f3: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6f8: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6fdu); f_006c1bd4();
    /* 0069e6fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6fe: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0069e705:; BB(0x0069e705);
    /* 0069e705: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e706: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e707: ret  */ FN_RET(0x0069e52f); r_esp += 4; return;
L_0069e708:; BB(0x0069e708);
    /* 0069e708: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e70d: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e712u); f_0069178c();
    /* 0069e712: jmp 0x69e67f */ goto L_0069e67f;
}

void f_0069e53a(void)
{
    FN_ENTER(0x0069e53a);
    /* 0069e53a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e53c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e53e: call 0x69f648 */ r_esp -= 4; W32(r_esp, 0x69e543u); f_0069f648();
    /* 0069e543: jmp 0x69e59b */ goto L_0069e59b;
L_0069e59b:; BB(0x0069e59b);
    /* 0069e59b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e59d: call 0x69ac2c */ r_esp -= 4; W32(r_esp, 0x69e5a2u); f_0069ac2c();
    /* 0069e5a2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5a4: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69e5a9u); f_0077774c();
    /* 0069e5a9: mov edx, dword ptr [edi + 0x92c] */ r_edx = R32((u32)(r_edi+0x92cu));
    /* 0069e5af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5b1: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069e5b8: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069e5bb: je 0x69e5d1 */ if (fZ) goto L_0069e5d1;
L_0069e5bd:; BB(0x0069e5bd);
    /* 0069e5bd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5bf: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5c1: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5c3: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5c8u); f_00694390();
    /* 0069e5c8: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5ca: call 0x69cb24 */ r_esp -= 4; W32(r_esp, 0x69e5cfu); f_0069cb24();
    /* 0069e5cf: jmp 0x69e5e9 */ goto L_0069e5e9;
L_0069e5d1:; BB(0x0069e5d1);
    /* 0069e5d1: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069e5d7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069e5d9: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x69e5dcu); call_ind(t); }
    /* 0069e5dc: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069e5df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e0: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5e4: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5e9u); f_00694390();
L_0069e5e9:; BB(0x0069e5e9);
    /* 0069e5e9: mov eax, dword ptr [edi + 0x524] */ r_eax = R32((u32)(r_edi+0x524u));
    /* 0069e5ef: and eax, 0xffffffc1 */ {  u32 a = r_eax; u32 b = 0xffffffc1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5f2: mov dword ptr [edi + 0x524], eax */ W32((u32)(r_edi+0x524u), r_eax);
    /* 0069e5f8: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e5fdu); f_00687c48();
    /* 0069e5fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e5ff: jne 0x69e60d */ if (!fZ) goto L_0069e60d;
L_0069e601:; BB(0x0069e601);
    /* 0069e601: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e608: jmp 0x69e6be */ goto L_0069e6be;
L_0069e60d:; BB(0x0069e60d);
    /* 0069e60d: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e60f: call 0x7778d8 */ r_esp -= 4; W32(r_esp, 0x69e614u); f_007778d8();
    /* 0069e614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e615: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e61au); f_007b4d18();
    /* 0069e61a: mov ebp, eax */ r_ebp = r_eax;
    /* 0069e61c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e61f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e621: je 0x69e68c */ if (fZ) goto L_0069e68c;
L_0069e623:; BB(0x0069e623);
    /* 0069e623: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0069e626: cmp ecx, dword ptr [0x9cb9a8] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9cb9a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e62c: jne 0x69e647 */ if (!fZ) goto L_0069e647;
L_0069e62e:; BB(0x0069e62e);
    /* 0069e62e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0069e632: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e636: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e638: je 0x69e647 */ if (fZ) goto L_0069e647;
L_0069e63a:; BB(0x0069e63a);
    /* 0069e63a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069e63f: call 0x691728 */ r_esp -= 4; W32(r_esp, 0x69e644u); f_00691728();
    /* 0069e644: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
L_0069e647:; BB(0x0069e647);
    /* 0069e647: cmp ecx, dword ptr [0x9c605c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9c605cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e64d: jne 0x69e675 */ if (!fZ) goto L_0069e675;
L_0069e64f:; BB(0x0069e64f);
    /* 0069e64f: movzx edx, word ptr [ebp + 0x2dc] */ r_edx = (u32)R16((u32)(r_ebp+0x2dcu));
    /* 0069e656: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e65c: je 0x69e708 */ if (fZ) goto L_0069e708;
L_0069e662:; BB(0x0069e662);
    /* 0069e662: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069e663: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e668u); f_007b4d18();
    /* 0069e668: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e669: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e66e: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e673u); f_0069178c();
    /* 0069e673: jmp 0x69e67f */ goto L_0069e67f;
L_0069e675:; BB(0x0069e675);
    /* 0069e675: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e677: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e678: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e67a: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e67fu); f_0069178c();
L_0069e67f:; BB(0x0069e67f);
    /* 0069e67f: push 0x93db00 */ { u32 v = 0x93db00u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e684: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e685: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e687: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e68cu); f_00691578();
L_0069e68c:; BB(0x0069e68c);
    /* 0069e68c: push 0x909a64 */ { u32 v = 0x909a64u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e691: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e692: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e694: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e699u); f_00691578();
    /* 0069e699: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e6a0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6a3: jne 0x69e6be */ if (!fZ) goto L_0069e6be;
L_0069e6a5:; BB(0x0069e6a5);
    /* 0069e6a5: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6aa: push 0x93db08 */ { u32 v = 0x93db08u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6af: call 0x6afb08 */ r_esp -= 4; W32(r_esp, 0x69e6b4u); f_006afb08();
    /* 0069e6b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e6b7: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
L_0069e6be:; BB(0x0069e6be);
    /* 0069e6be: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069e6c1: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6c3:; BB(0x0069e6c3);
    /* 0069e6c3: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x69e6c8u); f_00688b8c();
    /* 0069e6c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6ca: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6cc:; BB(0x0069e6cc);
    /* 0069e6cc: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e6d1u); f_00687c48();
    /* 0069e6d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6d3: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6d5:; BB(0x0069e6d5);
    /* 0069e6d5: call 0x694c8c */ r_esp -= 4; W32(r_esp, 0x69e6dau); f_00694c8c();
    /* 0069e6da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6dc: je 0x69e6f3 */ if (fZ) goto L_0069e6f3;
L_0069e6de:; BB(0x0069e6de);
    /* 0069e6de: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e6e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6e3: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6e8u); f_006c1bd4();
    /* 0069e6e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6e9: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069e6f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e6f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e6f2: ret  */ FN_RET(0x0069e53a); r_esp += 4; return;
L_0069e6f3:; BB(0x0069e6f3);
    /* 0069e6f3: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6f8: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6fdu); f_006c1bd4();
    /* 0069e6fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6fe: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0069e705:; BB(0x0069e705);
    /* 0069e705: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e706: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e707: ret  */ FN_RET(0x0069e53a); r_esp += 4; return;
L_0069e708:; BB(0x0069e708);
    /* 0069e708: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e70d: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e712u); f_0069178c();
    /* 0069e712: jmp 0x69e67f */ goto L_0069e67f;
}

void f_0069e545(void)
{
    FN_ENTER(0x0069e545);
    /* 0069e545: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e547: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e549: call 0x69fe2c */ r_esp -= 4; W32(r_esp, 0x69e54eu); f_0069fe2c();
    /* 0069e54e: jmp 0x69e59b */ goto L_0069e59b;
L_0069e59b:; BB(0x0069e59b);
    /* 0069e59b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e59d: call 0x69ac2c */ r_esp -= 4; W32(r_esp, 0x69e5a2u); f_0069ac2c();
    /* 0069e5a2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5a4: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69e5a9u); f_0077774c();
    /* 0069e5a9: mov edx, dword ptr [edi + 0x92c] */ r_edx = R32((u32)(r_edi+0x92cu));
    /* 0069e5af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5b1: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069e5b8: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069e5bb: je 0x69e5d1 */ if (fZ) goto L_0069e5d1;
L_0069e5bd:; BB(0x0069e5bd);
    /* 0069e5bd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5bf: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5c1: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5c3: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5c8u); f_00694390();
    /* 0069e5c8: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5ca: call 0x69cb24 */ r_esp -= 4; W32(r_esp, 0x69e5cfu); f_0069cb24();
    /* 0069e5cf: jmp 0x69e5e9 */ goto L_0069e5e9;
L_0069e5d1:; BB(0x0069e5d1);
    /* 0069e5d1: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069e5d7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069e5d9: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x69e5dcu); call_ind(t); }
    /* 0069e5dc: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069e5df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e0: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5e4: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5e9u); f_00694390();
L_0069e5e9:; BB(0x0069e5e9);
    /* 0069e5e9: mov eax, dword ptr [edi + 0x524] */ r_eax = R32((u32)(r_edi+0x524u));
    /* 0069e5ef: and eax, 0xffffffc1 */ {  u32 a = r_eax; u32 b = 0xffffffc1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5f2: mov dword ptr [edi + 0x524], eax */ W32((u32)(r_edi+0x524u), r_eax);
    /* 0069e5f8: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e5fdu); f_00687c48();
    /* 0069e5fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e5ff: jne 0x69e60d */ if (!fZ) goto L_0069e60d;
L_0069e601:; BB(0x0069e601);
    /* 0069e601: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e608: jmp 0x69e6be */ goto L_0069e6be;
L_0069e60d:; BB(0x0069e60d);
    /* 0069e60d: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e60f: call 0x7778d8 */ r_esp -= 4; W32(r_esp, 0x69e614u); f_007778d8();
    /* 0069e614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e615: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e61au); f_007b4d18();
    /* 0069e61a: mov ebp, eax */ r_ebp = r_eax;
    /* 0069e61c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e61f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e621: je 0x69e68c */ if (fZ) goto L_0069e68c;
L_0069e623:; BB(0x0069e623);
    /* 0069e623: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0069e626: cmp ecx, dword ptr [0x9cb9a8] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9cb9a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e62c: jne 0x69e647 */ if (!fZ) goto L_0069e647;
L_0069e62e:; BB(0x0069e62e);
    /* 0069e62e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0069e632: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e636: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e638: je 0x69e647 */ if (fZ) goto L_0069e647;
L_0069e63a:; BB(0x0069e63a);
    /* 0069e63a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069e63f: call 0x691728 */ r_esp -= 4; W32(r_esp, 0x69e644u); f_00691728();
    /* 0069e644: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
L_0069e647:; BB(0x0069e647);
    /* 0069e647: cmp ecx, dword ptr [0x9c605c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9c605cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e64d: jne 0x69e675 */ if (!fZ) goto L_0069e675;
L_0069e64f:; BB(0x0069e64f);
    /* 0069e64f: movzx edx, word ptr [ebp + 0x2dc] */ r_edx = (u32)R16((u32)(r_ebp+0x2dcu));
    /* 0069e656: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e65c: je 0x69e708 */ if (fZ) goto L_0069e708;
L_0069e662:; BB(0x0069e662);
    /* 0069e662: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069e663: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e668u); f_007b4d18();
    /* 0069e668: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e669: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e66e: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e673u); f_0069178c();
    /* 0069e673: jmp 0x69e67f */ goto L_0069e67f;
L_0069e675:; BB(0x0069e675);
    /* 0069e675: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e677: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e678: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e67a: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e67fu); f_0069178c();
L_0069e67f:; BB(0x0069e67f);
    /* 0069e67f: push 0x93db00 */ { u32 v = 0x93db00u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e684: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e685: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e687: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e68cu); f_00691578();
L_0069e68c:; BB(0x0069e68c);
    /* 0069e68c: push 0x909a64 */ { u32 v = 0x909a64u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e691: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e692: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e694: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e699u); f_00691578();
    /* 0069e699: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e6a0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6a3: jne 0x69e6be */ if (!fZ) goto L_0069e6be;
L_0069e6a5:; BB(0x0069e6a5);
    /* 0069e6a5: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6aa: push 0x93db08 */ { u32 v = 0x93db08u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6af: call 0x6afb08 */ r_esp -= 4; W32(r_esp, 0x69e6b4u); f_006afb08();
    /* 0069e6b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e6b7: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
L_0069e6be:; BB(0x0069e6be);
    /* 0069e6be: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069e6c1: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6c3:; BB(0x0069e6c3);
    /* 0069e6c3: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x69e6c8u); f_00688b8c();
    /* 0069e6c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6ca: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6cc:; BB(0x0069e6cc);
    /* 0069e6cc: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e6d1u); f_00687c48();
    /* 0069e6d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6d3: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6d5:; BB(0x0069e6d5);
    /* 0069e6d5: call 0x694c8c */ r_esp -= 4; W32(r_esp, 0x69e6dau); f_00694c8c();
    /* 0069e6da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6dc: je 0x69e6f3 */ if (fZ) goto L_0069e6f3;
L_0069e6de:; BB(0x0069e6de);
    /* 0069e6de: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e6e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6e3: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6e8u); f_006c1bd4();
    /* 0069e6e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6e9: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069e6f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e6f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e6f2: ret  */ FN_RET(0x0069e545); r_esp += 4; return;
L_0069e6f3:; BB(0x0069e6f3);
    /* 0069e6f3: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6f8: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6fdu); f_006c1bd4();
    /* 0069e6fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6fe: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0069e705:; BB(0x0069e705);
    /* 0069e705: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e706: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e707: ret  */ FN_RET(0x0069e545); r_esp += 4; return;
L_0069e708:; BB(0x0069e708);
    /* 0069e708: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e70d: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e712u); f_0069178c();
    /* 0069e712: jmp 0x69e67f */ goto L_0069e67f;
}

void f_0069e550(void)
{
    FN_ENTER(0x0069e550);
    /* 0069e550: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e552: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e554: call 0x6a0624 */ r_esp -= 4; W32(r_esp, 0x69e559u); f_006a0624();
    /* 0069e559: jmp 0x69e59b */ goto L_0069e59b;
L_0069e59b:; BB(0x0069e59b);
    /* 0069e59b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e59d: call 0x69ac2c */ r_esp -= 4; W32(r_esp, 0x69e5a2u); f_0069ac2c();
    /* 0069e5a2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5a4: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69e5a9u); f_0077774c();
    /* 0069e5a9: mov edx, dword ptr [edi + 0x92c] */ r_edx = R32((u32)(r_edi+0x92cu));
    /* 0069e5af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5b1: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069e5b8: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069e5bb: je 0x69e5d1 */ if (fZ) goto L_0069e5d1;
L_0069e5bd:; BB(0x0069e5bd);
    /* 0069e5bd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5bf: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5c1: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5c3: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5c8u); f_00694390();
    /* 0069e5c8: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5ca: call 0x69cb24 */ r_esp -= 4; W32(r_esp, 0x69e5cfu); f_0069cb24();
    /* 0069e5cf: jmp 0x69e5e9 */ goto L_0069e5e9;
L_0069e5d1:; BB(0x0069e5d1);
    /* 0069e5d1: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069e5d7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069e5d9: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x69e5dcu); call_ind(t); }
    /* 0069e5dc: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069e5df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e0: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5e4: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5e9u); f_00694390();
L_0069e5e9:; BB(0x0069e5e9);
    /* 0069e5e9: mov eax, dword ptr [edi + 0x524] */ r_eax = R32((u32)(r_edi+0x524u));
    /* 0069e5ef: and eax, 0xffffffc1 */ {  u32 a = r_eax; u32 b = 0xffffffc1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5f2: mov dword ptr [edi + 0x524], eax */ W32((u32)(r_edi+0x524u), r_eax);
    /* 0069e5f8: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e5fdu); f_00687c48();
    /* 0069e5fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e5ff: jne 0x69e60d */ if (!fZ) goto L_0069e60d;
L_0069e601:; BB(0x0069e601);
    /* 0069e601: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e608: jmp 0x69e6be */ goto L_0069e6be;
L_0069e60d:; BB(0x0069e60d);
    /* 0069e60d: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e60f: call 0x7778d8 */ r_esp -= 4; W32(r_esp, 0x69e614u); f_007778d8();
    /* 0069e614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e615: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e61au); f_007b4d18();
    /* 0069e61a: mov ebp, eax */ r_ebp = r_eax;
    /* 0069e61c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e61f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e621: je 0x69e68c */ if (fZ) goto L_0069e68c;
L_0069e623:; BB(0x0069e623);
    /* 0069e623: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0069e626: cmp ecx, dword ptr [0x9cb9a8] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9cb9a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e62c: jne 0x69e647 */ if (!fZ) goto L_0069e647;
L_0069e62e:; BB(0x0069e62e);
    /* 0069e62e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0069e632: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e636: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e638: je 0x69e647 */ if (fZ) goto L_0069e647;
L_0069e63a:; BB(0x0069e63a);
    /* 0069e63a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069e63f: call 0x691728 */ r_esp -= 4; W32(r_esp, 0x69e644u); f_00691728();
    /* 0069e644: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
L_0069e647:; BB(0x0069e647);
    /* 0069e647: cmp ecx, dword ptr [0x9c605c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9c605cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e64d: jne 0x69e675 */ if (!fZ) goto L_0069e675;
L_0069e64f:; BB(0x0069e64f);
    /* 0069e64f: movzx edx, word ptr [ebp + 0x2dc] */ r_edx = (u32)R16((u32)(r_ebp+0x2dcu));
    /* 0069e656: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e65c: je 0x69e708 */ if (fZ) goto L_0069e708;
L_0069e662:; BB(0x0069e662);
    /* 0069e662: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069e663: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e668u); f_007b4d18();
    /* 0069e668: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e669: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e66e: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e673u); f_0069178c();
    /* 0069e673: jmp 0x69e67f */ goto L_0069e67f;
L_0069e675:; BB(0x0069e675);
    /* 0069e675: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e677: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e678: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e67a: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e67fu); f_0069178c();
L_0069e67f:; BB(0x0069e67f);
    /* 0069e67f: push 0x93db00 */ { u32 v = 0x93db00u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e684: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e685: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e687: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e68cu); f_00691578();
L_0069e68c:; BB(0x0069e68c);
    /* 0069e68c: push 0x909a64 */ { u32 v = 0x909a64u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e691: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e692: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e694: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e699u); f_00691578();
    /* 0069e699: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e6a0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6a3: jne 0x69e6be */ if (!fZ) goto L_0069e6be;
L_0069e6a5:; BB(0x0069e6a5);
    /* 0069e6a5: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6aa: push 0x93db08 */ { u32 v = 0x93db08u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6af: call 0x6afb08 */ r_esp -= 4; W32(r_esp, 0x69e6b4u); f_006afb08();
    /* 0069e6b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e6b7: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
L_0069e6be:; BB(0x0069e6be);
    /* 0069e6be: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069e6c1: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6c3:; BB(0x0069e6c3);
    /* 0069e6c3: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x69e6c8u); f_00688b8c();
    /* 0069e6c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6ca: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6cc:; BB(0x0069e6cc);
    /* 0069e6cc: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e6d1u); f_00687c48();
    /* 0069e6d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6d3: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6d5:; BB(0x0069e6d5);
    /* 0069e6d5: call 0x694c8c */ r_esp -= 4; W32(r_esp, 0x69e6dau); f_00694c8c();
    /* 0069e6da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6dc: je 0x69e6f3 */ if (fZ) goto L_0069e6f3;
L_0069e6de:; BB(0x0069e6de);
    /* 0069e6de: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e6e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6e3: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6e8u); f_006c1bd4();
    /* 0069e6e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6e9: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069e6f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e6f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e6f2: ret  */ FN_RET(0x0069e550); r_esp += 4; return;
L_0069e6f3:; BB(0x0069e6f3);
    /* 0069e6f3: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6f8: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6fdu); f_006c1bd4();
    /* 0069e6fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6fe: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0069e705:; BB(0x0069e705);
    /* 0069e705: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e706: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e707: ret  */ FN_RET(0x0069e550); r_esp += 4; return;
L_0069e708:; BB(0x0069e708);
    /* 0069e708: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e70d: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e712u); f_0069178c();
    /* 0069e712: jmp 0x69e67f */ goto L_0069e67f;
}

void f_0069e55b(void)
{
    FN_ENTER(0x0069e55b);
    /* 0069e55b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e55d: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e55f: call 0x6a0994 */ r_esp -= 4; W32(r_esp, 0x69e564u); f_006a0994();
    /* 0069e564: jmp 0x69e59b */ goto L_0069e59b;
L_0069e59b:; BB(0x0069e59b);
    /* 0069e59b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e59d: call 0x69ac2c */ r_esp -= 4; W32(r_esp, 0x69e5a2u); f_0069ac2c();
    /* 0069e5a2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5a4: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69e5a9u); f_0077774c();
    /* 0069e5a9: mov edx, dword ptr [edi + 0x92c] */ r_edx = R32((u32)(r_edi+0x92cu));
    /* 0069e5af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5b1: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069e5b8: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069e5bb: je 0x69e5d1 */ if (fZ) goto L_0069e5d1;
L_0069e5bd:; BB(0x0069e5bd);
    /* 0069e5bd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5bf: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5c1: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5c3: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5c8u); f_00694390();
    /* 0069e5c8: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5ca: call 0x69cb24 */ r_esp -= 4; W32(r_esp, 0x69e5cfu); f_0069cb24();
    /* 0069e5cf: jmp 0x69e5e9 */ goto L_0069e5e9;
L_0069e5d1:; BB(0x0069e5d1);
    /* 0069e5d1: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069e5d7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069e5d9: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x69e5dcu); call_ind(t); }
    /* 0069e5dc: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069e5df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e0: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5e4: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5e9u); f_00694390();
L_0069e5e9:; BB(0x0069e5e9);
    /* 0069e5e9: mov eax, dword ptr [edi + 0x524] */ r_eax = R32((u32)(r_edi+0x524u));
    /* 0069e5ef: and eax, 0xffffffc1 */ {  u32 a = r_eax; u32 b = 0xffffffc1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5f2: mov dword ptr [edi + 0x524], eax */ W32((u32)(r_edi+0x524u), r_eax);
    /* 0069e5f8: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e5fdu); f_00687c48();
    /* 0069e5fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e5ff: jne 0x69e60d */ if (!fZ) goto L_0069e60d;
L_0069e601:; BB(0x0069e601);
    /* 0069e601: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e608: jmp 0x69e6be */ goto L_0069e6be;
L_0069e60d:; BB(0x0069e60d);
    /* 0069e60d: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e60f: call 0x7778d8 */ r_esp -= 4; W32(r_esp, 0x69e614u); f_007778d8();
    /* 0069e614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e615: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e61au); f_007b4d18();
    /* 0069e61a: mov ebp, eax */ r_ebp = r_eax;
    /* 0069e61c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e61f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e621: je 0x69e68c */ if (fZ) goto L_0069e68c;
L_0069e623:; BB(0x0069e623);
    /* 0069e623: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0069e626: cmp ecx, dword ptr [0x9cb9a8] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9cb9a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e62c: jne 0x69e647 */ if (!fZ) goto L_0069e647;
L_0069e62e:; BB(0x0069e62e);
    /* 0069e62e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0069e632: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e636: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e638: je 0x69e647 */ if (fZ) goto L_0069e647;
L_0069e63a:; BB(0x0069e63a);
    /* 0069e63a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069e63f: call 0x691728 */ r_esp -= 4; W32(r_esp, 0x69e644u); f_00691728();
    /* 0069e644: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
L_0069e647:; BB(0x0069e647);
    /* 0069e647: cmp ecx, dword ptr [0x9c605c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9c605cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e64d: jne 0x69e675 */ if (!fZ) goto L_0069e675;
L_0069e64f:; BB(0x0069e64f);
    /* 0069e64f: movzx edx, word ptr [ebp + 0x2dc] */ r_edx = (u32)R16((u32)(r_ebp+0x2dcu));
    /* 0069e656: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e65c: je 0x69e708 */ if (fZ) goto L_0069e708;
L_0069e662:; BB(0x0069e662);
    /* 0069e662: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069e663: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e668u); f_007b4d18();
    /* 0069e668: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e669: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e66e: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e673u); f_0069178c();
    /* 0069e673: jmp 0x69e67f */ goto L_0069e67f;
L_0069e675:; BB(0x0069e675);
    /* 0069e675: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e677: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e678: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e67a: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e67fu); f_0069178c();
L_0069e67f:; BB(0x0069e67f);
    /* 0069e67f: push 0x93db00 */ { u32 v = 0x93db00u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e684: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e685: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e687: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e68cu); f_00691578();
L_0069e68c:; BB(0x0069e68c);
    /* 0069e68c: push 0x909a64 */ { u32 v = 0x909a64u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e691: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e692: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e694: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e699u); f_00691578();
    /* 0069e699: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e6a0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6a3: jne 0x69e6be */ if (!fZ) goto L_0069e6be;
L_0069e6a5:; BB(0x0069e6a5);
    /* 0069e6a5: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6aa: push 0x93db08 */ { u32 v = 0x93db08u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6af: call 0x6afb08 */ r_esp -= 4; W32(r_esp, 0x69e6b4u); f_006afb08();
    /* 0069e6b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e6b7: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
L_0069e6be:; BB(0x0069e6be);
    /* 0069e6be: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069e6c1: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6c3:; BB(0x0069e6c3);
    /* 0069e6c3: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x69e6c8u); f_00688b8c();
    /* 0069e6c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6ca: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6cc:; BB(0x0069e6cc);
    /* 0069e6cc: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e6d1u); f_00687c48();
    /* 0069e6d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6d3: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6d5:; BB(0x0069e6d5);
    /* 0069e6d5: call 0x694c8c */ r_esp -= 4; W32(r_esp, 0x69e6dau); f_00694c8c();
    /* 0069e6da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6dc: je 0x69e6f3 */ if (fZ) goto L_0069e6f3;
L_0069e6de:; BB(0x0069e6de);
    /* 0069e6de: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e6e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6e3: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6e8u); f_006c1bd4();
    /* 0069e6e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6e9: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069e6f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e6f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e6f2: ret  */ FN_RET(0x0069e55b); r_esp += 4; return;
L_0069e6f3:; BB(0x0069e6f3);
    /* 0069e6f3: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6f8: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6fdu); f_006c1bd4();
    /* 0069e6fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6fe: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0069e705:; BB(0x0069e705);
    /* 0069e705: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e706: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e707: ret  */ FN_RET(0x0069e55b); r_esp += 4; return;
L_0069e708:; BB(0x0069e708);
    /* 0069e708: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e70d: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e712u); f_0069178c();
    /* 0069e712: jmp 0x69e67f */ goto L_0069e67f;
}

void f_0069e566(void)
{
    FN_ENTER(0x0069e566);
    /* 0069e566: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e568: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e56a: call 0x6a0eb8 */ r_esp -= 4; W32(r_esp, 0x69e56fu); f_006a0eb8();
    /* 0069e56f: jmp 0x69e59b */ goto L_0069e59b;
L_0069e59b:; BB(0x0069e59b);
    /* 0069e59b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e59d: call 0x69ac2c */ r_esp -= 4; W32(r_esp, 0x69e5a2u); f_0069ac2c();
    /* 0069e5a2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5a4: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69e5a9u); f_0077774c();
    /* 0069e5a9: mov edx, dword ptr [edi + 0x92c] */ r_edx = R32((u32)(r_edi+0x92cu));
    /* 0069e5af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5b1: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069e5b8: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069e5bb: je 0x69e5d1 */ if (fZ) goto L_0069e5d1;
L_0069e5bd:; BB(0x0069e5bd);
    /* 0069e5bd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5bf: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5c1: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5c3: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5c8u); f_00694390();
    /* 0069e5c8: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5ca: call 0x69cb24 */ r_esp -= 4; W32(r_esp, 0x69e5cfu); f_0069cb24();
    /* 0069e5cf: jmp 0x69e5e9 */ goto L_0069e5e9;
L_0069e5d1:; BB(0x0069e5d1);
    /* 0069e5d1: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069e5d7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069e5d9: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x69e5dcu); call_ind(t); }
    /* 0069e5dc: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069e5df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e0: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5e4: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5e9u); f_00694390();
L_0069e5e9:; BB(0x0069e5e9);
    /* 0069e5e9: mov eax, dword ptr [edi + 0x524] */ r_eax = R32((u32)(r_edi+0x524u));
    /* 0069e5ef: and eax, 0xffffffc1 */ {  u32 a = r_eax; u32 b = 0xffffffc1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5f2: mov dword ptr [edi + 0x524], eax */ W32((u32)(r_edi+0x524u), r_eax);
    /* 0069e5f8: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e5fdu); f_00687c48();
    /* 0069e5fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e5ff: jne 0x69e60d */ if (!fZ) goto L_0069e60d;
L_0069e601:; BB(0x0069e601);
    /* 0069e601: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e608: jmp 0x69e6be */ goto L_0069e6be;
L_0069e60d:; BB(0x0069e60d);
    /* 0069e60d: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e60f: call 0x7778d8 */ r_esp -= 4; W32(r_esp, 0x69e614u); f_007778d8();
    /* 0069e614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e615: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e61au); f_007b4d18();
    /* 0069e61a: mov ebp, eax */ r_ebp = r_eax;
    /* 0069e61c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e61f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e621: je 0x69e68c */ if (fZ) goto L_0069e68c;
L_0069e623:; BB(0x0069e623);
    /* 0069e623: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0069e626: cmp ecx, dword ptr [0x9cb9a8] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9cb9a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e62c: jne 0x69e647 */ if (!fZ) goto L_0069e647;
L_0069e62e:; BB(0x0069e62e);
    /* 0069e62e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0069e632: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e636: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e638: je 0x69e647 */ if (fZ) goto L_0069e647;
L_0069e63a:; BB(0x0069e63a);
    /* 0069e63a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069e63f: call 0x691728 */ r_esp -= 4; W32(r_esp, 0x69e644u); f_00691728();
    /* 0069e644: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
L_0069e647:; BB(0x0069e647);
    /* 0069e647: cmp ecx, dword ptr [0x9c605c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9c605cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e64d: jne 0x69e675 */ if (!fZ) goto L_0069e675;
L_0069e64f:; BB(0x0069e64f);
    /* 0069e64f: movzx edx, word ptr [ebp + 0x2dc] */ r_edx = (u32)R16((u32)(r_ebp+0x2dcu));
    /* 0069e656: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e65c: je 0x69e708 */ if (fZ) goto L_0069e708;
L_0069e662:; BB(0x0069e662);
    /* 0069e662: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069e663: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e668u); f_007b4d18();
    /* 0069e668: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e669: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e66e: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e673u); f_0069178c();
    /* 0069e673: jmp 0x69e67f */ goto L_0069e67f;
L_0069e675:; BB(0x0069e675);
    /* 0069e675: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e677: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e678: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e67a: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e67fu); f_0069178c();
L_0069e67f:; BB(0x0069e67f);
    /* 0069e67f: push 0x93db00 */ { u32 v = 0x93db00u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e684: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e685: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e687: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e68cu); f_00691578();
L_0069e68c:; BB(0x0069e68c);
    /* 0069e68c: push 0x909a64 */ { u32 v = 0x909a64u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e691: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e692: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e694: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e699u); f_00691578();
    /* 0069e699: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e6a0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6a3: jne 0x69e6be */ if (!fZ) goto L_0069e6be;
L_0069e6a5:; BB(0x0069e6a5);
    /* 0069e6a5: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6aa: push 0x93db08 */ { u32 v = 0x93db08u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6af: call 0x6afb08 */ r_esp -= 4; W32(r_esp, 0x69e6b4u); f_006afb08();
    /* 0069e6b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e6b7: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
L_0069e6be:; BB(0x0069e6be);
    /* 0069e6be: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069e6c1: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6c3:; BB(0x0069e6c3);
    /* 0069e6c3: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x69e6c8u); f_00688b8c();
    /* 0069e6c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6ca: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6cc:; BB(0x0069e6cc);
    /* 0069e6cc: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e6d1u); f_00687c48();
    /* 0069e6d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6d3: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6d5:; BB(0x0069e6d5);
    /* 0069e6d5: call 0x694c8c */ r_esp -= 4; W32(r_esp, 0x69e6dau); f_00694c8c();
    /* 0069e6da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6dc: je 0x69e6f3 */ if (fZ) goto L_0069e6f3;
L_0069e6de:; BB(0x0069e6de);
    /* 0069e6de: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e6e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6e3: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6e8u); f_006c1bd4();
    /* 0069e6e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6e9: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069e6f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e6f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e6f2: ret  */ FN_RET(0x0069e566); r_esp += 4; return;
L_0069e6f3:; BB(0x0069e6f3);
    /* 0069e6f3: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6f8: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6fdu); f_006c1bd4();
    /* 0069e6fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6fe: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0069e705:; BB(0x0069e705);
    /* 0069e705: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e706: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e707: ret  */ FN_RET(0x0069e566); r_esp += 4; return;
L_0069e708:; BB(0x0069e708);
    /* 0069e708: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e70d: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e712u); f_0069178c();
    /* 0069e712: jmp 0x69e67f */ goto L_0069e67f;
}

void f_0069e571(void)
{
    FN_ENTER(0x0069e571);
    /* 0069e571: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e573: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e575: call 0x6a139c */ r_esp -= 4; W32(r_esp, 0x69e57au); f_006a139c();
    /* 0069e57a: jmp 0x69e59b */ goto L_0069e59b;
L_0069e59b:; BB(0x0069e59b);
    /* 0069e59b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e59d: call 0x69ac2c */ r_esp -= 4; W32(r_esp, 0x69e5a2u); f_0069ac2c();
    /* 0069e5a2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5a4: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69e5a9u); f_0077774c();
    /* 0069e5a9: mov edx, dword ptr [edi + 0x92c] */ r_edx = R32((u32)(r_edi+0x92cu));
    /* 0069e5af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5b1: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069e5b8: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069e5bb: je 0x69e5d1 */ if (fZ) goto L_0069e5d1;
L_0069e5bd:; BB(0x0069e5bd);
    /* 0069e5bd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5bf: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5c1: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5c3: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5c8u); f_00694390();
    /* 0069e5c8: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5ca: call 0x69cb24 */ r_esp -= 4; W32(r_esp, 0x69e5cfu); f_0069cb24();
    /* 0069e5cf: jmp 0x69e5e9 */ goto L_0069e5e9;
L_0069e5d1:; BB(0x0069e5d1);
    /* 0069e5d1: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069e5d7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069e5d9: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x69e5dcu); call_ind(t); }
    /* 0069e5dc: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069e5df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e0: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5e4: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5e9u); f_00694390();
L_0069e5e9:; BB(0x0069e5e9);
    /* 0069e5e9: mov eax, dword ptr [edi + 0x524] */ r_eax = R32((u32)(r_edi+0x524u));
    /* 0069e5ef: and eax, 0xffffffc1 */ {  u32 a = r_eax; u32 b = 0xffffffc1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5f2: mov dword ptr [edi + 0x524], eax */ W32((u32)(r_edi+0x524u), r_eax);
    /* 0069e5f8: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e5fdu); f_00687c48();
    /* 0069e5fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e5ff: jne 0x69e60d */ if (!fZ) goto L_0069e60d;
L_0069e601:; BB(0x0069e601);
    /* 0069e601: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e608: jmp 0x69e6be */ goto L_0069e6be;
L_0069e60d:; BB(0x0069e60d);
    /* 0069e60d: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e60f: call 0x7778d8 */ r_esp -= 4; W32(r_esp, 0x69e614u); f_007778d8();
    /* 0069e614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e615: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e61au); f_007b4d18();
    /* 0069e61a: mov ebp, eax */ r_ebp = r_eax;
    /* 0069e61c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e61f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e621: je 0x69e68c */ if (fZ) goto L_0069e68c;
L_0069e623:; BB(0x0069e623);
    /* 0069e623: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0069e626: cmp ecx, dword ptr [0x9cb9a8] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9cb9a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e62c: jne 0x69e647 */ if (!fZ) goto L_0069e647;
L_0069e62e:; BB(0x0069e62e);
    /* 0069e62e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0069e632: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e636: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e638: je 0x69e647 */ if (fZ) goto L_0069e647;
L_0069e63a:; BB(0x0069e63a);
    /* 0069e63a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069e63f: call 0x691728 */ r_esp -= 4; W32(r_esp, 0x69e644u); f_00691728();
    /* 0069e644: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
L_0069e647:; BB(0x0069e647);
    /* 0069e647: cmp ecx, dword ptr [0x9c605c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9c605cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e64d: jne 0x69e675 */ if (!fZ) goto L_0069e675;
L_0069e64f:; BB(0x0069e64f);
    /* 0069e64f: movzx edx, word ptr [ebp + 0x2dc] */ r_edx = (u32)R16((u32)(r_ebp+0x2dcu));
    /* 0069e656: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e65c: je 0x69e708 */ if (fZ) goto L_0069e708;
L_0069e662:; BB(0x0069e662);
    /* 0069e662: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069e663: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e668u); f_007b4d18();
    /* 0069e668: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e669: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e66e: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e673u); f_0069178c();
    /* 0069e673: jmp 0x69e67f */ goto L_0069e67f;
L_0069e675:; BB(0x0069e675);
    /* 0069e675: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e677: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e678: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e67a: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e67fu); f_0069178c();
L_0069e67f:; BB(0x0069e67f);
    /* 0069e67f: push 0x93db00 */ { u32 v = 0x93db00u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e684: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e685: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e687: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e68cu); f_00691578();
L_0069e68c:; BB(0x0069e68c);
    /* 0069e68c: push 0x909a64 */ { u32 v = 0x909a64u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e691: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e692: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e694: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e699u); f_00691578();
    /* 0069e699: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e6a0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6a3: jne 0x69e6be */ if (!fZ) goto L_0069e6be;
L_0069e6a5:; BB(0x0069e6a5);
    /* 0069e6a5: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6aa: push 0x93db08 */ { u32 v = 0x93db08u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6af: call 0x6afb08 */ r_esp -= 4; W32(r_esp, 0x69e6b4u); f_006afb08();
    /* 0069e6b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e6b7: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
L_0069e6be:; BB(0x0069e6be);
    /* 0069e6be: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069e6c1: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6c3:; BB(0x0069e6c3);
    /* 0069e6c3: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x69e6c8u); f_00688b8c();
    /* 0069e6c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6ca: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6cc:; BB(0x0069e6cc);
    /* 0069e6cc: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e6d1u); f_00687c48();
    /* 0069e6d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6d3: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6d5:; BB(0x0069e6d5);
    /* 0069e6d5: call 0x694c8c */ r_esp -= 4; W32(r_esp, 0x69e6dau); f_00694c8c();
    /* 0069e6da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6dc: je 0x69e6f3 */ if (fZ) goto L_0069e6f3;
L_0069e6de:; BB(0x0069e6de);
    /* 0069e6de: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e6e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6e3: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6e8u); f_006c1bd4();
    /* 0069e6e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6e9: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069e6f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e6f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e6f2: ret  */ FN_RET(0x0069e571); r_esp += 4; return;
L_0069e6f3:; BB(0x0069e6f3);
    /* 0069e6f3: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6f8: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6fdu); f_006c1bd4();
    /* 0069e6fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6fe: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0069e705:; BB(0x0069e705);
    /* 0069e705: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e706: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e707: ret  */ FN_RET(0x0069e571); r_esp += 4; return;
L_0069e708:; BB(0x0069e708);
    /* 0069e708: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e70d: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e712u); f_0069178c();
    /* 0069e712: jmp 0x69e67f */ goto L_0069e67f;
}

void f_0069e57c(void)
{
    FN_ENTER(0x0069e57c);
    /* 0069e57c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e57e: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e580: call 0x6a1a60 */ r_esp -= 4; W32(r_esp, 0x69e585u); f_006a1a60();
    /* 0069e585: jmp 0x69e59b */ goto L_0069e59b;
L_0069e59b:; BB(0x0069e59b);
    /* 0069e59b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e59d: call 0x69ac2c */ r_esp -= 4; W32(r_esp, 0x69e5a2u); f_0069ac2c();
    /* 0069e5a2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5a4: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69e5a9u); f_0077774c();
    /* 0069e5a9: mov edx, dword ptr [edi + 0x92c] */ r_edx = R32((u32)(r_edi+0x92cu));
    /* 0069e5af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5b1: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069e5b8: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069e5bb: je 0x69e5d1 */ if (fZ) goto L_0069e5d1;
L_0069e5bd:; BB(0x0069e5bd);
    /* 0069e5bd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5bf: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5c1: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5c3: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5c8u); f_00694390();
    /* 0069e5c8: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5ca: call 0x69cb24 */ r_esp -= 4; W32(r_esp, 0x69e5cfu); f_0069cb24();
    /* 0069e5cf: jmp 0x69e5e9 */ goto L_0069e5e9;
L_0069e5d1:; BB(0x0069e5d1);
    /* 0069e5d1: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069e5d7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069e5d9: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x69e5dcu); call_ind(t); }
    /* 0069e5dc: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069e5df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e0: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5e4: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5e9u); f_00694390();
L_0069e5e9:; BB(0x0069e5e9);
    /* 0069e5e9: mov eax, dword ptr [edi + 0x524] */ r_eax = R32((u32)(r_edi+0x524u));
    /* 0069e5ef: and eax, 0xffffffc1 */ {  u32 a = r_eax; u32 b = 0xffffffc1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5f2: mov dword ptr [edi + 0x524], eax */ W32((u32)(r_edi+0x524u), r_eax);
    /* 0069e5f8: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e5fdu); f_00687c48();
    /* 0069e5fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e5ff: jne 0x69e60d */ if (!fZ) goto L_0069e60d;
L_0069e601:; BB(0x0069e601);
    /* 0069e601: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e608: jmp 0x69e6be */ goto L_0069e6be;
L_0069e60d:; BB(0x0069e60d);
    /* 0069e60d: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e60f: call 0x7778d8 */ r_esp -= 4; W32(r_esp, 0x69e614u); f_007778d8();
    /* 0069e614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e615: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e61au); f_007b4d18();
    /* 0069e61a: mov ebp, eax */ r_ebp = r_eax;
    /* 0069e61c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e61f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e621: je 0x69e68c */ if (fZ) goto L_0069e68c;
L_0069e623:; BB(0x0069e623);
    /* 0069e623: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0069e626: cmp ecx, dword ptr [0x9cb9a8] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9cb9a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e62c: jne 0x69e647 */ if (!fZ) goto L_0069e647;
L_0069e62e:; BB(0x0069e62e);
    /* 0069e62e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0069e632: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e636: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e638: je 0x69e647 */ if (fZ) goto L_0069e647;
L_0069e63a:; BB(0x0069e63a);
    /* 0069e63a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069e63f: call 0x691728 */ r_esp -= 4; W32(r_esp, 0x69e644u); f_00691728();
    /* 0069e644: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
L_0069e647:; BB(0x0069e647);
    /* 0069e647: cmp ecx, dword ptr [0x9c605c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9c605cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e64d: jne 0x69e675 */ if (!fZ) goto L_0069e675;
L_0069e64f:; BB(0x0069e64f);
    /* 0069e64f: movzx edx, word ptr [ebp + 0x2dc] */ r_edx = (u32)R16((u32)(r_ebp+0x2dcu));
    /* 0069e656: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e65c: je 0x69e708 */ if (fZ) goto L_0069e708;
L_0069e662:; BB(0x0069e662);
    /* 0069e662: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069e663: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e668u); f_007b4d18();
    /* 0069e668: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e669: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e66e: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e673u); f_0069178c();
    /* 0069e673: jmp 0x69e67f */ goto L_0069e67f;
L_0069e675:; BB(0x0069e675);
    /* 0069e675: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e677: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e678: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e67a: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e67fu); f_0069178c();
L_0069e67f:; BB(0x0069e67f);
    /* 0069e67f: push 0x93db00 */ { u32 v = 0x93db00u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e684: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e685: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e687: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e68cu); f_00691578();
L_0069e68c:; BB(0x0069e68c);
    /* 0069e68c: push 0x909a64 */ { u32 v = 0x909a64u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e691: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e692: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e694: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e699u); f_00691578();
    /* 0069e699: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e6a0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6a3: jne 0x69e6be */ if (!fZ) goto L_0069e6be;
L_0069e6a5:; BB(0x0069e6a5);
    /* 0069e6a5: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6aa: push 0x93db08 */ { u32 v = 0x93db08u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6af: call 0x6afb08 */ r_esp -= 4; W32(r_esp, 0x69e6b4u); f_006afb08();
    /* 0069e6b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e6b7: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
L_0069e6be:; BB(0x0069e6be);
    /* 0069e6be: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069e6c1: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6c3:; BB(0x0069e6c3);
    /* 0069e6c3: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x69e6c8u); f_00688b8c();
    /* 0069e6c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6ca: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6cc:; BB(0x0069e6cc);
    /* 0069e6cc: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e6d1u); f_00687c48();
    /* 0069e6d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6d3: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6d5:; BB(0x0069e6d5);
    /* 0069e6d5: call 0x694c8c */ r_esp -= 4; W32(r_esp, 0x69e6dau); f_00694c8c();
    /* 0069e6da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6dc: je 0x69e6f3 */ if (fZ) goto L_0069e6f3;
L_0069e6de:; BB(0x0069e6de);
    /* 0069e6de: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e6e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6e3: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6e8u); f_006c1bd4();
    /* 0069e6e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6e9: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069e6f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e6f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e6f2: ret  */ FN_RET(0x0069e57c); r_esp += 4; return;
L_0069e6f3:; BB(0x0069e6f3);
    /* 0069e6f3: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6f8: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6fdu); f_006c1bd4();
    /* 0069e6fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6fe: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0069e705:; BB(0x0069e705);
    /* 0069e705: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e706: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e707: ret  */ FN_RET(0x0069e57c); r_esp += 4; return;
L_0069e708:; BB(0x0069e708);
    /* 0069e708: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e70d: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e712u); f_0069178c();
    /* 0069e712: jmp 0x69e67f */ goto L_0069e67f;
}

void f_0069e587(void)
{
    FN_ENTER(0x0069e587);
    /* 0069e587: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e589: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e58b: call 0x69b93c */ r_esp -= 4; W32(r_esp, 0x69e590u); f_0069b93c();
    /* 0069e590: jmp 0x69e59b */ goto L_0069e59b;
L_0069e59b:; BB(0x0069e59b);
    /* 0069e59b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e59d: call 0x69ac2c */ r_esp -= 4; W32(r_esp, 0x69e5a2u); f_0069ac2c();
    /* 0069e5a2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5a4: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69e5a9u); f_0077774c();
    /* 0069e5a9: mov edx, dword ptr [edi + 0x92c] */ r_edx = R32((u32)(r_edi+0x92cu));
    /* 0069e5af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5b1: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069e5b8: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069e5bb: je 0x69e5d1 */ if (fZ) goto L_0069e5d1;
L_0069e5bd:; BB(0x0069e5bd);
    /* 0069e5bd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5bf: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5c1: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5c3: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5c8u); f_00694390();
    /* 0069e5c8: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5ca: call 0x69cb24 */ r_esp -= 4; W32(r_esp, 0x69e5cfu); f_0069cb24();
    /* 0069e5cf: jmp 0x69e5e9 */ goto L_0069e5e9;
L_0069e5d1:; BB(0x0069e5d1);
    /* 0069e5d1: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069e5d7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069e5d9: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x69e5dcu); call_ind(t); }
    /* 0069e5dc: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069e5df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e0: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5e4: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5e9u); f_00694390();
L_0069e5e9:; BB(0x0069e5e9);
    /* 0069e5e9: mov eax, dword ptr [edi + 0x524] */ r_eax = R32((u32)(r_edi+0x524u));
    /* 0069e5ef: and eax, 0xffffffc1 */ {  u32 a = r_eax; u32 b = 0xffffffc1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5f2: mov dword ptr [edi + 0x524], eax */ W32((u32)(r_edi+0x524u), r_eax);
    /* 0069e5f8: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e5fdu); f_00687c48();
    /* 0069e5fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e5ff: jne 0x69e60d */ if (!fZ) goto L_0069e60d;
L_0069e601:; BB(0x0069e601);
    /* 0069e601: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e608: jmp 0x69e6be */ goto L_0069e6be;
L_0069e60d:; BB(0x0069e60d);
    /* 0069e60d: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e60f: call 0x7778d8 */ r_esp -= 4; W32(r_esp, 0x69e614u); f_007778d8();
    /* 0069e614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e615: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e61au); f_007b4d18();
    /* 0069e61a: mov ebp, eax */ r_ebp = r_eax;
    /* 0069e61c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e61f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e621: je 0x69e68c */ if (fZ) goto L_0069e68c;
L_0069e623:; BB(0x0069e623);
    /* 0069e623: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0069e626: cmp ecx, dword ptr [0x9cb9a8] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9cb9a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e62c: jne 0x69e647 */ if (!fZ) goto L_0069e647;
L_0069e62e:; BB(0x0069e62e);
    /* 0069e62e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0069e632: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e636: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e638: je 0x69e647 */ if (fZ) goto L_0069e647;
L_0069e63a:; BB(0x0069e63a);
    /* 0069e63a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069e63f: call 0x691728 */ r_esp -= 4; W32(r_esp, 0x69e644u); f_00691728();
    /* 0069e644: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
L_0069e647:; BB(0x0069e647);
    /* 0069e647: cmp ecx, dword ptr [0x9c605c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9c605cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e64d: jne 0x69e675 */ if (!fZ) goto L_0069e675;
L_0069e64f:; BB(0x0069e64f);
    /* 0069e64f: movzx edx, word ptr [ebp + 0x2dc] */ r_edx = (u32)R16((u32)(r_ebp+0x2dcu));
    /* 0069e656: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e65c: je 0x69e708 */ if (fZ) goto L_0069e708;
L_0069e662:; BB(0x0069e662);
    /* 0069e662: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069e663: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e668u); f_007b4d18();
    /* 0069e668: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e669: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e66e: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e673u); f_0069178c();
    /* 0069e673: jmp 0x69e67f */ goto L_0069e67f;
L_0069e675:; BB(0x0069e675);
    /* 0069e675: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e677: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e678: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e67a: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e67fu); f_0069178c();
L_0069e67f:; BB(0x0069e67f);
    /* 0069e67f: push 0x93db00 */ { u32 v = 0x93db00u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e684: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e685: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e687: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e68cu); f_00691578();
L_0069e68c:; BB(0x0069e68c);
    /* 0069e68c: push 0x909a64 */ { u32 v = 0x909a64u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e691: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e692: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e694: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e699u); f_00691578();
    /* 0069e699: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e6a0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6a3: jne 0x69e6be */ if (!fZ) goto L_0069e6be;
L_0069e6a5:; BB(0x0069e6a5);
    /* 0069e6a5: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6aa: push 0x93db08 */ { u32 v = 0x93db08u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6af: call 0x6afb08 */ r_esp -= 4; W32(r_esp, 0x69e6b4u); f_006afb08();
    /* 0069e6b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e6b7: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
L_0069e6be:; BB(0x0069e6be);
    /* 0069e6be: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069e6c1: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6c3:; BB(0x0069e6c3);
    /* 0069e6c3: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x69e6c8u); f_00688b8c();
    /* 0069e6c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6ca: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6cc:; BB(0x0069e6cc);
    /* 0069e6cc: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e6d1u); f_00687c48();
    /* 0069e6d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6d3: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6d5:; BB(0x0069e6d5);
    /* 0069e6d5: call 0x694c8c */ r_esp -= 4; W32(r_esp, 0x69e6dau); f_00694c8c();
    /* 0069e6da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6dc: je 0x69e6f3 */ if (fZ) goto L_0069e6f3;
L_0069e6de:; BB(0x0069e6de);
    /* 0069e6de: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e6e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6e3: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6e8u); f_006c1bd4();
    /* 0069e6e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6e9: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069e6f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e6f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e6f2: ret  */ FN_RET(0x0069e587); r_esp += 4; return;
L_0069e6f3:; BB(0x0069e6f3);
    /* 0069e6f3: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6f8: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6fdu); f_006c1bd4();
    /* 0069e6fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6fe: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0069e705:; BB(0x0069e705);
    /* 0069e705: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e706: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e707: ret  */ FN_RET(0x0069e587); r_esp += 4; return;
L_0069e708:; BB(0x0069e708);
    /* 0069e708: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e70d: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e712u); f_0069178c();
    /* 0069e712: jmp 0x69e67f */ goto L_0069e67f;
}

void f_0069e592(void)
{
    FN_ENTER(0x0069e592);
    /* 0069e592: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e594: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e596: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x69e59bu); f_006a1ac0();
    /* 0069e59b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e59d: call 0x69ac2c */ r_esp -= 4; W32(r_esp, 0x69e5a2u); f_0069ac2c();
    /* 0069e5a2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5a4: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69e5a9u); f_0077774c();
    /* 0069e5a9: mov edx, dword ptr [edi + 0x92c] */ r_edx = R32((u32)(r_edi+0x92cu));
    /* 0069e5af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5b1: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069e5b8: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069e5bb: je 0x69e5d1 */ if (fZ) goto L_0069e5d1;
L_0069e5bd:; BB(0x0069e5bd);
    /* 0069e5bd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5bf: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5c1: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5c3: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5c8u); f_00694390();
    /* 0069e5c8: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5ca: call 0x69cb24 */ r_esp -= 4; W32(r_esp, 0x69e5cfu); f_0069cb24();
    /* 0069e5cf: jmp 0x69e5e9 */ goto L_0069e5e9;
L_0069e5d1:; BB(0x0069e5d1);
    /* 0069e5d1: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069e5d7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069e5d9: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x69e5dcu); call_ind(t); }
    /* 0069e5dc: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069e5df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e0: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5e4: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5e9u); f_00694390();
L_0069e5e9:; BB(0x0069e5e9);
    /* 0069e5e9: mov eax, dword ptr [edi + 0x524] */ r_eax = R32((u32)(r_edi+0x524u));
    /* 0069e5ef: and eax, 0xffffffc1 */ {  u32 a = r_eax; u32 b = 0xffffffc1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5f2: mov dword ptr [edi + 0x524], eax */ W32((u32)(r_edi+0x524u), r_eax);
    /* 0069e5f8: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e5fdu); f_00687c48();
    /* 0069e5fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e5ff: jne 0x69e60d */ if (!fZ) goto L_0069e60d;
L_0069e601:; BB(0x0069e601);
    /* 0069e601: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e608: jmp 0x69e6be */ goto L_0069e6be;
L_0069e60d:; BB(0x0069e60d);
    /* 0069e60d: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e60f: call 0x7778d8 */ r_esp -= 4; W32(r_esp, 0x69e614u); f_007778d8();
    /* 0069e614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e615: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e61au); f_007b4d18();
    /* 0069e61a: mov ebp, eax */ r_ebp = r_eax;
    /* 0069e61c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e61f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e621: je 0x69e68c */ if (fZ) goto L_0069e68c;
L_0069e623:; BB(0x0069e623);
    /* 0069e623: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0069e626: cmp ecx, dword ptr [0x9cb9a8] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9cb9a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e62c: jne 0x69e647 */ if (!fZ) goto L_0069e647;
L_0069e62e:; BB(0x0069e62e);
    /* 0069e62e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0069e632: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e636: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e638: je 0x69e647 */ if (fZ) goto L_0069e647;
L_0069e63a:; BB(0x0069e63a);
    /* 0069e63a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069e63f: call 0x691728 */ r_esp -= 4; W32(r_esp, 0x69e644u); f_00691728();
    /* 0069e644: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
L_0069e647:; BB(0x0069e647);
    /* 0069e647: cmp ecx, dword ptr [0x9c605c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9c605cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e64d: jne 0x69e675 */ if (!fZ) goto L_0069e675;
L_0069e64f:; BB(0x0069e64f);
    /* 0069e64f: movzx edx, word ptr [ebp + 0x2dc] */ r_edx = (u32)R16((u32)(r_ebp+0x2dcu));
    /* 0069e656: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e65c: je 0x69e708 */ if (fZ) goto L_0069e708;
L_0069e662:; BB(0x0069e662);
    /* 0069e662: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069e663: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e668u); f_007b4d18();
    /* 0069e668: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e669: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e66e: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e673u); f_0069178c();
    /* 0069e673: jmp 0x69e67f */ goto L_0069e67f;
L_0069e675:; BB(0x0069e675);
    /* 0069e675: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e677: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e678: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e67a: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e67fu); f_0069178c();
L_0069e67f:; BB(0x0069e67f);
    /* 0069e67f: push 0x93db00 */ { u32 v = 0x93db00u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e684: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e685: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e687: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e68cu); f_00691578();
L_0069e68c:; BB(0x0069e68c);
    /* 0069e68c: push 0x909a64 */ { u32 v = 0x909a64u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e691: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e692: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e694: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e699u); f_00691578();
    /* 0069e699: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e6a0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6a3: jne 0x69e6be */ if (!fZ) goto L_0069e6be;
L_0069e6a5:; BB(0x0069e6a5);
    /* 0069e6a5: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6aa: push 0x93db08 */ { u32 v = 0x93db08u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6af: call 0x6afb08 */ r_esp -= 4; W32(r_esp, 0x69e6b4u); f_006afb08();
    /* 0069e6b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e6b7: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
L_0069e6be:; BB(0x0069e6be);
    /* 0069e6be: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069e6c1: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6c3:; BB(0x0069e6c3);
    /* 0069e6c3: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x69e6c8u); f_00688b8c();
    /* 0069e6c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6ca: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6cc:; BB(0x0069e6cc);
    /* 0069e6cc: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e6d1u); f_00687c48();
    /* 0069e6d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6d3: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6d5:; BB(0x0069e6d5);
    /* 0069e6d5: call 0x694c8c */ r_esp -= 4; W32(r_esp, 0x69e6dau); f_00694c8c();
    /* 0069e6da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6dc: je 0x69e6f3 */ if (fZ) goto L_0069e6f3;
L_0069e6de:; BB(0x0069e6de);
    /* 0069e6de: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e6e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6e3: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6e8u); f_006c1bd4();
    /* 0069e6e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6e9: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069e6f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e6f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e6f2: ret  */ FN_RET(0x0069e592); r_esp += 4; return;
L_0069e6f3:; BB(0x0069e6f3);
    /* 0069e6f3: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6f8: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6fdu); f_006c1bd4();
    /* 0069e6fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6fe: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0069e705:; BB(0x0069e705);
    /* 0069e705: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e706: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e707: ret  */ FN_RET(0x0069e592); r_esp += 4; return;
L_0069e708:; BB(0x0069e708);
    /* 0069e708: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e70d: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e712u); f_0069178c();
    /* 0069e712: jmp 0x69e67f */ goto L_0069e67f;
}

void f_0069e59b(void)
{
    FN_ENTER(0x0069e59b);
    /* 0069e59b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e59d: call 0x69ac2c */ r_esp -= 4; W32(r_esp, 0x69e5a2u); f_0069ac2c();
    /* 0069e5a2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5a4: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69e5a9u); f_0077774c();
    /* 0069e5a9: mov edx, dword ptr [edi + 0x92c] */ r_edx = R32((u32)(r_edi+0x92cu));
    /* 0069e5af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5b1: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069e5b8: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069e5bb: je 0x69e5d1 */ if (fZ) goto L_0069e5d1;
L_0069e5bd:; BB(0x0069e5bd);
    /* 0069e5bd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5bf: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5c1: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5c3: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5c8u); f_00694390();
    /* 0069e5c8: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5ca: call 0x69cb24 */ r_esp -= 4; W32(r_esp, 0x69e5cfu); f_0069cb24();
    /* 0069e5cf: jmp 0x69e5e9 */ goto L_0069e5e9;
L_0069e5d1:; BB(0x0069e5d1);
    /* 0069e5d1: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069e5d7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069e5d9: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x69e5dcu); call_ind(t); }
    /* 0069e5dc: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069e5df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e0: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e5e2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e5e4: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69e5e9u); f_00694390();
L_0069e5e9:; BB(0x0069e5e9);
    /* 0069e5e9: mov eax, dword ptr [edi + 0x524] */ r_eax = R32((u32)(r_edi+0x524u));
    /* 0069e5ef: and eax, 0xffffffc1 */ {  u32 a = r_eax; u32 b = 0xffffffc1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069e5f2: mov dword ptr [edi + 0x524], eax */ W32((u32)(r_edi+0x524u), r_eax);
    /* 0069e5f8: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e5fdu); f_00687c48();
    /* 0069e5fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e5ff: jne 0x69e60d */ if (!fZ) goto L_0069e60d;
L_0069e601:; BB(0x0069e601);
    /* 0069e601: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e608: jmp 0x69e6be */ goto L_0069e6be;
L_0069e60d:; BB(0x0069e60d);
    /* 0069e60d: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e60f: call 0x7778d8 */ r_esp -= 4; W32(r_esp, 0x69e614u); f_007778d8();
    /* 0069e614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e615: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e61au); f_007b4d18();
    /* 0069e61a: mov ebp, eax */ r_ebp = r_eax;
    /* 0069e61c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e61f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e621: je 0x69e68c */ if (fZ) goto L_0069e68c;
L_0069e623:; BB(0x0069e623);
    /* 0069e623: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0069e626: cmp ecx, dword ptr [0x9cb9a8] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9cb9a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e62c: jne 0x69e647 */ if (!fZ) goto L_0069e647;
L_0069e62e:; BB(0x0069e62e);
    /* 0069e62e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0069e632: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e636: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e638: je 0x69e647 */ if (fZ) goto L_0069e647;
L_0069e63a:; BB(0x0069e63a);
    /* 0069e63a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e63d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069e63f: call 0x691728 */ r_esp -= 4; W32(r_esp, 0x69e644u); f_00691728();
    /* 0069e644: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
L_0069e647:; BB(0x0069e647);
    /* 0069e647: cmp ecx, dword ptr [0x9c605c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x9c605cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e64d: jne 0x69e675 */ if (!fZ) goto L_0069e675;
L_0069e64f:; BB(0x0069e64f);
    /* 0069e64f: movzx edx, word ptr [ebp + 0x2dc] */ r_edx = (u32)R16((u32)(r_ebp+0x2dcu));
    /* 0069e656: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e65c: je 0x69e708 */ if (fZ) goto L_0069e708;
L_0069e662:; BB(0x0069e662);
    /* 0069e662: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069e663: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69e668u); f_007b4d18();
    /* 0069e668: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e669: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e66c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e66e: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e673u); f_0069178c();
    /* 0069e673: jmp 0x69e67f */ goto L_0069e67f;
L_0069e675:; BB(0x0069e675);
    /* 0069e675: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e677: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e678: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e67a: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e67fu); f_0069178c();
L_0069e67f:; BB(0x0069e67f);
    /* 0069e67f: push 0x93db00 */ { u32 v = 0x93db00u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e684: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e685: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e687: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e68cu); f_00691578();
L_0069e68c:; BB(0x0069e68c);
    /* 0069e68c: push 0x909a64 */ { u32 v = 0x909a64u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e691: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e692: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e694: call 0x691578 */ r_esp -= 4; W32(r_esp, 0x69e699u); f_00691578();
    /* 0069e699: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e6a0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6a3: jne 0x69e6be */ if (!fZ) goto L_0069e6be;
L_0069e6a5:; BB(0x0069e6a5);
    /* 0069e6a5: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6aa: push 0x93db08 */ { u32 v = 0x93db08u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6af: call 0x6afb08 */ r_esp -= 4; W32(r_esp, 0x69e6b4u); f_006afb08();
    /* 0069e6b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069e6b7: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
L_0069e6be:; BB(0x0069e6be);
    /* 0069e6be: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069e6c1: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6c3:; BB(0x0069e6c3);
    /* 0069e6c3: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x69e6c8u); f_00688b8c();
    /* 0069e6c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6ca: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6cc:; BB(0x0069e6cc);
    /* 0069e6cc: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69e6d1u); f_00687c48();
    /* 0069e6d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e6d3: jne 0x69e705 */ if (!fZ) goto L_0069e705;
L_0069e6d5:; BB(0x0069e6d5);
    /* 0069e6d5: call 0x694c8c */ r_esp -= 4; W32(r_esp, 0x69e6dau); f_00694c8c();
    /* 0069e6da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e6dc: je 0x69e6f3 */ if (fZ) goto L_0069e6f3;
L_0069e6de:; BB(0x0069e6de);
    /* 0069e6de: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e6e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6e3: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6e8u); f_006c1bd4();
    /* 0069e6e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6e9: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069e6f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e6f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e6f2: ret  */ FN_RET(0x0069e59b); r_esp += 4; return;
L_0069e6f3:; BB(0x0069e6f3);
    /* 0069e6f3: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e6f8: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x69e6fdu); f_006c1bd4();
    /* 0069e6fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e6fe: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0069e705:; BB(0x0069e705);
    /* 0069e705: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e706: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e707: ret  */ FN_RET(0x0069e59b); r_esp += 4; return;
L_0069e708:; BB(0x0069e708);
    /* 0069e708: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e70b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e70d: call 0x69178c */ r_esp -= 4; W32(r_esp, 0x69e712u); f_0069178c();
    /* 0069e712: jmp 0x69e67f */ goto L_0069e67f;
}

void f_0069e6fe(void)
{
    FN_ENTER(0x0069e6fe);
    /* 0069e6fe: add dword ptr [eax + 0x218], 1 */ { u32 ad = (u32)(r_eax+0x218u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069e705: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e706: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e707: ret  */ FN_RET(0x0069e6fe); r_esp += 4; return;
}

void f_0069e718(void) /* sub_69E718 */
{
    FN_ENTER(0x0069e718);
    /* 0069e718: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 0069e71d: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069e720: ja 0x69e797 */ if ((!fC&&!fZ)) goto L_0069e797;
L_0069e722:; BB(0x0069e722);
    /* 0069e722: mov eax, dword ptr [eax*4 + 0x93d104] */ r_eax = R32((u32)(r_eax*4+0x93d104u));
    /* 0069e729: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0069e797:; BB(0x0069e797);
    /* 0069e797: ret 4 */ FN_RET(0x0069e718); r_esp += 8; return;
}

void f_0069e72b(void)
{
    FN_ENTER(0x0069e72b);
    /* 0069e72b: call 0x69e79c */ r_esp -= 4; W32(r_esp, 0x69e730u); f_0069e79c();
    /* 0069e730: jmp 0x69e797 */ goto L_0069e797;
L_0069e797:; BB(0x0069e797);
    /* 0069e797: ret 4 */ FN_RET(0x0069e72b); r_esp += 8; return;
}

void f_0069e732(void)
{
    FN_ENTER(0x0069e732);
    /* 0069e732: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69e737u); f_0077774c();
    /* 0069e737: jmp 0x69e797 */ goto L_0069e797;
L_0069e797:; BB(0x0069e797);
    /* 0069e797: ret 4 */ FN_RET(0x0069e732); r_esp += 8; return;
}

void f_0069e739(void)
{
    FN_ENTER(0x0069e739);
    /* 0069e739: call 0x69e7b8 */ r_esp -= 4; W32(r_esp, 0x69e73eu); f_0069e7b8();
    /* 0069e73e: jmp 0x69e797 */ goto L_0069e797;
L_0069e797:; BB(0x0069e797);
    /* 0069e797: ret 4 */ FN_RET(0x0069e739); r_esp += 8; return;
}

void f_0069e740(void)
{
    FN_ENTER(0x0069e740);
    /* 0069e740: call 0x69e8b0 */ r_esp -= 4; W32(r_esp, 0x69e745u); f_0069e8b0();
    /* 0069e745: jmp 0x69e797 */ goto L_0069e797;
L_0069e797:; BB(0x0069e797);
    /* 0069e797: ret 4 */ FN_RET(0x0069e740); r_esp += 8; return;
}

void f_0069e747(void)
{
    FN_ENTER(0x0069e747);
    /* 0069e747: mov edx, dword ptr [ecx + 0x634] */ r_edx = R32((u32)(r_ecx+0x634u));
    /* 0069e74d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069e74f: mov word ptr [0xa9432c], ax */ W16((u32)(0xa9432cu), (u16)r_eax);
    /* 0069e755: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e757: mov word ptr [0xa94330], ax */ W16((u32)(0xa94330u), (u16)r_eax);
    /* 0069e75d: je 0x69e797 */ if (fZ) goto L_0069e797;
L_0069e75f:; BB(0x0069e75f);
    /* 0069e75f: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 0069e765: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069e767: je 0x69e770 */ if (fZ) goto L_0069e770;
L_0069e769:; BB(0x0069e769);
    /* 0069e769: mov eax, 1 */ r_eax = 0x1u;
    /* 0069e76e: jmp 0x69e772 */ goto L_0069e772;
L_0069e770:; BB(0x0069e770);
    /* 0069e770: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0069e772:; BB(0x0069e772);
    /* 0069e772: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e774: jne 0x69e797 */ if (!fZ) goto L_0069e797;
L_0069e776:; BB(0x0069e776);
    /* 0069e776: push 0xa9432c */ { u32 v = 0xa9432cu; r_esp -= 4; W32(r_esp, v); }
    /* 0069e77b: push 0xa94330 */ { u32 v = 0xa94330u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e780: call 0x70a60c */ r_esp -= 4; W32(r_esp, 0x69e785u); f_0070a60c();
    /* 0069e785: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069e788: ret 4 */ FN_RET(0x0069e747); r_esp += 8; return;
L_0069e797:; BB(0x0069e797);
    /* 0069e797: ret 4 */ FN_RET(0x0069e747); r_esp += 8; return;
}

void f_0069e78b(void)
{
    FN_ENTER(0x0069e78b);
    /* 0069e78b: call 0x69e92c */ r_esp -= 4; W32(r_esp, 0x69e790u); f_0069e92c();
    /* 0069e790: jmp 0x69e797 */ goto L_0069e797;
L_0069e797:; BB(0x0069e797);
    /* 0069e797: ret 4 */ FN_RET(0x0069e78b); r_esp += 8; return;
}

void f_0069e792(void)
{
    FN_ENTER(0x0069e792);
    /* 0069e792: call 0x69ea00 */ r_esp -= 4; W32(r_esp, 0x69e797u); f_0069ea00();
    /* 0069e797: ret 4 */ FN_RET(0x0069e792); r_esp += 8; return;
}

void f_0069e797(void)
{
    FN_ENTER(0x0069e797);
    /* 0069e797: ret 4 */ FN_RET(0x0069e797); r_esp += 8; return;
}

void f_0069e79c(void) /* sub_69E79C */
{
    FN_ENTER(0x0069e79c);
    /* 0069e79c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e79d: mov edi, ecx */ r_edi = r_ecx;
    /* 0069e79f: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e7a1: call 0x68a3e0 */ r_esp -= 4; W32(r_esp, 0x69e7a6u); f_0068a3e0();
    /* 0069e7a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e7a8: je 0x69e7b3 */ if (fZ) goto L_0069e7b3;
L_0069e7aa:; BB(0x0069e7aa);
    /* 0069e7aa: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e7ac: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e7ae: call 0x69d43c */ r_esp -= 4; W32(r_esp, 0x69e7b3u); f_0069d43c();
L_0069e7b3:; BB(0x0069e7b3);
    /* 0069e7b3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e7b4: ret  */ FN_RET(0x0069e79c); r_esp += 4; return;
}

void f_0069e7b8(void) /* sub_69E7B8 */
{
    FN_ENTER(0x0069e7b8);
    /* 0069e7b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e7b9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e7ba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069e7bb: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069e7be: mov edi, ecx */ r_edi = r_ecx;
    /* 0069e7c0: fld dword ptr [edi + 0x30c] */ FPUSH(R_F32((u32)(r_edi+0x30cu)));
    /* 0069e7c6: mov ebp, dword ptr [edi + 0x30c] */ r_ebp = R32((u32)(r_edi+0x30cu));
    /* 0069e7cc: fld dword ptr [edi + 0x314] */ FPUSH(R_F32((u32)(r_edi+0x314u)));
    /* 0069e7d2: mov ebx, dword ptr [edi + 0x314] */ r_ebx = R32((u32)(r_edi+0x314u));
    /* 0069e7d8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0069e7da: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
    /* 0069e7de: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0069e7e0: fst dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0));
    /* 0069e7e4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0069e7e6: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0069e7e8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0069e7ea: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0069e7ec: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0069e7ee: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e7ef: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0069e7f2: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x69e7f7u); f_0082dc9c();
    /* 0069e7f7: fcomp dword ptr [0x93da04] */ fx_compare(ST(0), R_F32((u32)(0x93da04u))); FPOP();
    /* 0069e7fd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069e7ff: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0069e800: jbe 0x69e842 */ if ((fC||fZ)) goto L_0069e842;
L_0069e802:; BB(0x0069e802);
    /* 0069e802: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0069e806: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0069e80a: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0069e80c: fmul qword ptr [0x93d940] */ ST(0) = ST(0) * R_F64((u32)(0x93d940u));
    /* 0069e812: fdiv qword ptr [0x93d938] */ ST(0) = ST(0) / R_F64((u32)(0x93d938u));
    /* 0069e818: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0069e81c: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0069e821: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069e826: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0069e82a: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0069e82e: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069e832: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0069e836: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0069e83a: add eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069e83f: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
L_0069e842:; BB(0x0069e842);
    /* 0069e842: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069e845: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e84a: je 0x69e853 */ if (fZ) goto L_0069e853;
L_0069e84c:; BB(0x0069e84c);
    /* 0069e84c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e84e: call 0x68d9c4 */ r_esp -= 4; W32(r_esp, 0x69e853u); f_0068d9c4();
L_0069e853:; BB(0x0069e853);
    /* 0069e853: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e855: call 0x692068 */ r_esp -= 4; W32(r_esp, 0x69e85au); f_00692068();
    /* 0069e85a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e85c: je 0x69e871 */ if (fZ) goto L_0069e871;
L_0069e85e:; BB(0x0069e85e);
    /* 0069e85e: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069e865: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e868: jne 0x69e871 */ if (!fZ) goto L_0069e871;
L_0069e86a:; BB(0x0069e86a);
    /* 0069e86a: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069e86d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069e86e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e86f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e870: ret  */ FN_RET(0x0069e7b8); r_esp += 4; return;
L_0069e871:; BB(0x0069e871);
    /* 0069e871: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069e875: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0069e878: movzx edi, word ptr [edi + 0x334] */ r_edi = (u32)R16((u32)(r_edi+0x334u));
    /* 0069e87f: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0069e884: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 0069e889: mov byte ptr [esp], 0x4c */ W8((u32)(r_esp), 0x4cu);
    /* 0069e88d: mov byte ptr [esp + 1], 4 */ W8((u32)(r_esp+0x1u), 0x4u);
    /* 0069e892: mov word ptr [esp + 6], di */ W16((u32)(r_esp+0x6u), (u16)r_edi);
    /* 0069e897: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0069e89b: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0069e89f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069e8a2: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x69e8a7u); f_008003e0();
    /* 0069e8a7: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069e8aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069e8ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e8ac: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e8ad: ret  */ FN_RET(0x0069e7b8); r_esp += 4; return;
}

void f_0069e8b0(void) /* sub_69E8B0 */
{
    FN_ENTER(0x0069e8b0);
    /* 0069e8b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e8b1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0069e8b3: movsx eax, word ptr [ebp + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x330u));
    /* 0069e8ba: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e8bd: jne 0x69e904 */ if (!fZ) goto L_0069e904;
L_0069e8bf:; BB(0x0069e8bf);
    /* 0069e8bf: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 0069e8c5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069e8c7: call dword ptr [eax + 0x58] */ { u32 t = R32((u32)(r_eax+0x58u)); r_esp -= 4; W32(r_esp, 0x69e8cau); call_ind(t); }
    /* 0069e8ca: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069e8cd: cmp ax, word ptr [ebp + 0xb8] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ebp+0xb8u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 0069e8d4: jne 0x69e913 */ if (!fZ) goto L_0069e913;
L_0069e8d6:; BB(0x0069e8d6);
    /* 0069e8d6: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0069e8dc: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e8de: je 0x69e913 */ if (fZ) goto L_0069e913;
L_0069e8e0:; BB(0x0069e8e0);
    /* 0069e8e0: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0069e8e3: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e8e8: je 0x69e913 */ if (fZ) goto L_0069e913;
L_0069e8ea:; BB(0x0069e8ea);
    /* 0069e8ea: mov eax, dword ptr [ebp + 0x92c] */ r_eax = R32((u32)(r_ebp+0x92cu));
    /* 0069e8f0: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069e8f3: mov dword ptr [ebp + 0x92c], eax */ W32((u32)(r_ebp+0x92cu), r_eax);
    /* 0069e8f9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e8fb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069e8fd: call 0x69e15c */ r_esp -= 4; W32(r_esp, 0x69e902u); f_0069e15c();
    /* 0069e902: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e903: ret  */ FN_RET(0x0069e8b0); r_esp += 4; return;
L_0069e904:; BB(0x0069e904);
    /* 0069e904: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069e907: jne 0x69e913 */ if (!fZ) goto L_0069e913;
L_0069e909:; BB(0x0069e909);
    /* 0069e909: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0069e90f: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e911: jne 0x69e915 */ if (!fZ) goto L_0069e915;
L_0069e913:; BB(0x0069e913);
    /* 0069e913: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e914: ret  */ FN_RET(0x0069e8b0); r_esp += 4; return;
L_0069e915:; BB(0x0069e915);
    /* 0069e915: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069e916: call 0x6ac8ac */ r_esp -= 4; W32(r_esp, 0x69e91bu); f_006ac8ac();
    /* 0069e91b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069e91c: mov dword ptr [ebp + 0x720], eax */ W32((u32)(r_ebp+0x720u), r_eax);
    /* 0069e922: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069e924: call 0x69d554 */ r_esp -= 4; W32(r_esp, 0x69e929u); f_0069d554();
    /* 0069e929: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069e92a: ret  */ FN_RET(0x0069e8b0); r_esp += 4; return;
}

void f_0069e92c(void) /* sub_69E92C */
{
    FN_ENTER(0x0069e92c);
    /* 0069e92c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069e92d: mov edi, ecx */ r_edi = r_ecx;
    /* 0069e92f: movsx eax, word ptr [edi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x330u));
    /* 0069e936: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e938: je 0x69e980 */ if (fZ) goto L_0069e980;
L_0069e93a:; BB(0x0069e93a);
    /* 0069e93a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e93d: jne 0x69e9c5 */ if (!fZ) goto L_0069e9c5;
L_0069e943:; BB(0x0069e943);
    /* 0069e943: fld dword ptr [0x93d9fc] */ FPUSH(R_F32((u32)(0x93d9fcu)));
    /* 0069e949: fadd dword ptr [edi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x2b8u));
    /* 0069e94f: fcom dword ptr [0x93d9f8] */ fx_compare(ST(0), R_F32((u32)(0x93d9f8u))); 
    /* 0069e955: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069e957: fstp dword ptr [edi + 0x2b8] */ W_F32((u32)(r_edi+0x2b8u), ST(0)); FPOP();
    /* 0069e95d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0069e95e: jae 0x69e9c5 */ if (!fC) goto L_0069e9c5;
L_0069e960:; BB(0x0069e960);
    /* 0069e960: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069e966: mov eax, 2 */ r_eax = 0x2u;
    /* 0069e96b: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069e972: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069e974: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x69e977u); call_ind(t); }
    /* 0069e977: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0069e97e: jmp 0x69e9c5 */ goto L_0069e9c5;
L_0069e980:; BB(0x0069e980);
    /* 0069e980: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e985: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e987: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x69e98cu); f_007aaa30();
    /* 0069e98c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e98e: je 0x69e9a5 */ if (fZ) goto L_0069e9a5;
L_0069e990:; BB(0x0069e990);
    /* 0069e990: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e992: call 0x691e54 */ r_esp -= 4; W32(r_esp, 0x69e997u); f_00691e54();
    /* 0069e997: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e99a: je 0x69e9f2 */ if (fZ) goto L_0069e9f2;
L_0069e99c:; BB(0x0069e99c);
    /* 0069e99c: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e99e: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e9a0: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69e9a5u); f_006904cc();
L_0069e9a5:; BB(0x0069e9a5);
    /* 0069e9a5: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0069e9ab: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069e9ad: je 0x69e9c5 */ if (fZ) goto L_0069e9c5;
L_0069e9af:; BB(0x0069e9af);
    /* 0069e9af: mov dword ptr [edi + 0x2b8], 0x41f00000 */ W32((u32)(r_edi+0x2b8u), 0x41f00000u);
    /* 0069e9b9: mov eax, 1 */ r_eax = 0x1u;
    /* 0069e9be: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
L_0069e9c5:; BB(0x0069e9c5);
    /* 0069e9c5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e9c7: call 0x694230 */ r_esp -= 4; W32(r_esp, 0x69e9ccu); f_00694230();
    /* 0069e9cc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e9ce: call 0x694198 */ r_esp -= 4; W32(r_esp, 0x69e9d3u); f_00694198();
    /* 0069e9d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069e9d5: je 0x69e9de */ if (fZ) goto L_0069e9de;
L_0069e9d7:; BB(0x0069e9d7);
    /* 0069e9d7: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e9d9: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69e9deu); f_0077774c();
L_0069e9de:; BB(0x0069e9de);
    /* 0069e9de: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e9e0: call 0x693844 */ r_esp -= 4; W32(r_esp, 0x69e9e5u); f_00693844();
    /* 0069e9e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069e9e7: jne 0x69e9f0 */ if (!fZ) goto L_0069e9f0;
L_0069e9e9:; BB(0x0069e9e9);
    /* 0069e9e9: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e9eb: call 0x777724 */ r_esp -= 4; W32(r_esp, 0x69e9f0u); f_00777724();
L_0069e9f0:; BB(0x0069e9f0);
    /* 0069e9f0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069e9f1: ret  */ FN_RET(0x0069e92c); r_esp += 4; return;
L_0069e9f2:; BB(0x0069e9f2);
    /* 0069e9f2: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 0069e9f4: mov ecx, edi */ r_ecx = r_edi;
    /* 0069e9f6: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69e9fbu); f_006904cc();
    /* 0069e9fb: jmp 0x69e9a5 */ goto L_0069e9a5;
}

void f_0069e9ff(void)
{
    FN_ENTER(0x0069e9ff);
    /* 0069e9ff: nop  */ ;
    /* 0069ea00: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069ea01: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069ea02: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069ea03: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069ea04: mov edi, ecx */ r_edi = r_ecx;
    /* 0069ea06: mov esi, dword ptr [edi + 0x30c] */ r_esi = R32((u32)(r_edi+0x30cu));
    /* 0069ea0c: mov ebp, dword ptr [edi + 0x310] */ r_ebp = R32((u32)(r_edi+0x310u));
    /* 0069ea12: mov ebx, dword ptr [edi + 0x314] */ r_ebx = R32((u32)(r_edi+0x314u));
    /* 0069ea18: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0069ea1f: mov dword ptr [edi + 0x348], 0xe */ W32((u32)(r_edi+0x348u), 0xeu);
    /* 0069ea29: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0069ea2c: ja 0x69eb57 */ if ((!fC&&!fZ)) goto L_0069eb57;
L_0069ea32:; BB(0x0069ea32);
    /* 0069ea32: mov eax, dword ptr [eax*4 + 0x93d140] */ r_eax = R32((u32)(r_eax*4+0x93d140u));
    /* 0069ea39: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0069eb57:; BB(0x0069eb57);
    /* 0069eb57: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eb5a: mov dword ptr [edi + 0x720], 0x12c */ W32((u32)(r_edi+0x720u), 0x12cu);
    /* 0069eb64: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069eb6a: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069eb70: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb72: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069eb78: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eb7d: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eb80: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb82: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eb87u); f_006904cc();
    /* 0069eb87: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eb8e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eb91: jne 0x69eba2 */ if (!fZ) goto L_0069eba2;
L_0069eb93:; BB(0x0069eb93);
    /* 0069eb93: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eb95: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb97: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eb9au); call_ind(t); }
    /* 0069eb9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb9b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb9d: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eba2u); f_007752dc();
L_0069eba2:; BB(0x0069eba2);
    /* 0069eba2: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eba8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069ebaa: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069ebb1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069ebb3: call dword ptr [edx + 0x58] */ { u32 t = R32((u32)(r_edx+0x58u)); r_esp -= 4; W32(r_esp, 0x69ebb6u); call_ind(t); }
    /* 0069ebb6: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069ebb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebba: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebbc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ebbe: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69ebc3u); f_00694390();
    /* 0069ebc3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069ebc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ebc5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069ebc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ebc7: ret  */ FN_RET(0x0069e9ff); r_esp += 4; return;
}

void f_0069ea00(void) /* sub_69EA00 */
{
    FN_ENTER(0x0069ea00);
    /* 0069ea00: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069ea01: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069ea02: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069ea03: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069ea04: mov edi, ecx */ r_edi = r_ecx;
    /* 0069ea06: mov esi, dword ptr [edi + 0x30c] */ r_esi = R32((u32)(r_edi+0x30cu));
    /* 0069ea0c: mov ebp, dword ptr [edi + 0x310] */ r_ebp = R32((u32)(r_edi+0x310u));
    /* 0069ea12: mov ebx, dword ptr [edi + 0x314] */ r_ebx = R32((u32)(r_edi+0x314u));
    /* 0069ea18: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0069ea1f: mov dword ptr [edi + 0x348], 0xe */ W32((u32)(r_edi+0x348u), 0xeu);
    /* 0069ea29: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0069ea2c: ja 0x69eb57 */ if ((!fC&&!fZ)) goto L_0069eb57;
L_0069ea32:; BB(0x0069ea32);
    /* 0069ea32: mov eax, dword ptr [eax*4 + 0x93d140] */ r_eax = R32((u32)(r_eax*4+0x93d140u));
    /* 0069ea39: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0069eb57:; BB(0x0069eb57);
    /* 0069eb57: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eb5a: mov dword ptr [edi + 0x720], 0x12c */ W32((u32)(r_edi+0x720u), 0x12cu);
    /* 0069eb64: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069eb6a: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069eb70: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb72: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069eb78: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eb7d: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eb80: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb82: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eb87u); f_006904cc();
    /* 0069eb87: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eb8e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eb91: jne 0x69eba2 */ if (!fZ) goto L_0069eba2;
L_0069eb93:; BB(0x0069eb93);
    /* 0069eb93: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eb95: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb97: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eb9au); call_ind(t); }
    /* 0069eb9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb9b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb9d: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eba2u); f_007752dc();
L_0069eba2:; BB(0x0069eba2);
    /* 0069eba2: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eba8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069ebaa: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069ebb1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069ebb3: call dword ptr [edx + 0x58] */ { u32 t = R32((u32)(r_edx+0x58u)); r_esp -= 4; W32(r_esp, 0x69ebb6u); call_ind(t); }
    /* 0069ebb6: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069ebb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebba: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebbc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ebbe: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69ebc3u); f_00694390();
    /* 0069ebc3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069ebc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ebc5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069ebc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ebc7: ret  */ FN_RET(0x0069ea00); r_esp += 4; return;
}

void f_0069ea3b(void)
{
    FN_ENTER(0x0069ea3b);
    /* 0069ea3b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ea3d: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ea3f: call 0x69bdf0 */ r_esp -= 4; W32(r_esp, 0x69ea44u); f_0069bdf0();
    /* 0069ea44: jmp 0x69eb57 */ goto L_0069eb57;
L_0069eb57:; BB(0x0069eb57);
    /* 0069eb57: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eb5a: mov dword ptr [edi + 0x720], 0x12c */ W32((u32)(r_edi+0x720u), 0x12cu);
    /* 0069eb64: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069eb6a: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069eb70: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb72: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069eb78: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eb7d: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eb80: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb82: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eb87u); f_006904cc();
    /* 0069eb87: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eb8e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eb91: jne 0x69eba2 */ if (!fZ) goto L_0069eba2;
L_0069eb93:; BB(0x0069eb93);
    /* 0069eb93: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eb95: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb97: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eb9au); call_ind(t); }
    /* 0069eb9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb9b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb9d: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eba2u); f_007752dc();
L_0069eba2:; BB(0x0069eba2);
    /* 0069eba2: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eba8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069ebaa: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069ebb1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069ebb3: call dword ptr [edx + 0x58] */ { u32 t = R32((u32)(r_edx+0x58u)); r_esp -= 4; W32(r_esp, 0x69ebb6u); call_ind(t); }
    /* 0069ebb6: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069ebb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebba: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebbc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ebbe: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69ebc3u); f_00694390();
    /* 0069ebc3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069ebc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ebc5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069ebc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ebc7: ret  */ FN_RET(0x0069ea3b); r_esp += 4; return;
}

void f_0069ea49(void)
{
    FN_ENTER(0x0069ea49);
    /* 0069ea49: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ea4b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ea4d: call 0x69c6c0 */ r_esp -= 4; W32(r_esp, 0x69ea52u); f_0069c6c0();
    /* 0069ea52: jmp 0x69eb57 */ goto L_0069eb57;
L_0069eb57:; BB(0x0069eb57);
    /* 0069eb57: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eb5a: mov dword ptr [edi + 0x720], 0x12c */ W32((u32)(r_edi+0x720u), 0x12cu);
    /* 0069eb64: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069eb6a: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069eb70: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb72: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069eb78: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eb7d: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eb80: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb82: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eb87u); f_006904cc();
    /* 0069eb87: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eb8e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eb91: jne 0x69eba2 */ if (!fZ) goto L_0069eba2;
L_0069eb93:; BB(0x0069eb93);
    /* 0069eb93: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eb95: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb97: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eb9au); call_ind(t); }
    /* 0069eb9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb9b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb9d: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eba2u); f_007752dc();
L_0069eba2:; BB(0x0069eba2);
    /* 0069eba2: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eba8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069ebaa: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069ebb1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069ebb3: call dword ptr [edx + 0x58] */ { u32 t = R32((u32)(r_edx+0x58u)); r_esp -= 4; W32(r_esp, 0x69ebb6u); call_ind(t); }
    /* 0069ebb6: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069ebb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebba: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebbc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ebbe: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69ebc3u); f_00694390();
    /* 0069ebc3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069ebc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ebc5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069ebc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ebc7: ret  */ FN_RET(0x0069ea49); r_esp += 4; return;
}

void f_0069ea57(void)
{
    FN_ENTER(0x0069ea57);
    /* 0069ea57: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ea59: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ea5b: call 0x69c988 */ r_esp -= 4; W32(r_esp, 0x69ea60u); f_0069c988();
    /* 0069ea60: jmp 0x69eb57 */ goto L_0069eb57;
L_0069eb57:; BB(0x0069eb57);
    /* 0069eb57: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eb5a: mov dword ptr [edi + 0x720], 0x12c */ W32((u32)(r_edi+0x720u), 0x12cu);
    /* 0069eb64: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069eb6a: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069eb70: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb72: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069eb78: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eb7d: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eb80: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb82: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eb87u); f_006904cc();
    /* 0069eb87: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eb8e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eb91: jne 0x69eba2 */ if (!fZ) goto L_0069eba2;
L_0069eb93:; BB(0x0069eb93);
    /* 0069eb93: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eb95: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb97: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eb9au); call_ind(t); }
    /* 0069eb9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb9b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb9d: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eba2u); f_007752dc();
L_0069eba2:; BB(0x0069eba2);
    /* 0069eba2: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eba8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069ebaa: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069ebb1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069ebb3: call dword ptr [edx + 0x58] */ { u32 t = R32((u32)(r_edx+0x58u)); r_esp -= 4; W32(r_esp, 0x69ebb6u); call_ind(t); }
    /* 0069ebb6: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069ebb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebba: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebbc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ebbe: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69ebc3u); f_00694390();
    /* 0069ebc3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069ebc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ebc5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069ebc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ebc7: ret  */ FN_RET(0x0069ea57); r_esp += 4; return;
}

void f_0069ea65(void)
{
    FN_ENTER(0x0069ea65);
    /* 0069ea65: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ea67: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ea69: call 0x69cd20 */ r_esp -= 4; W32(r_esp, 0x69ea6eu); f_0069cd20();
    /* 0069ea6e: jmp 0x69eb57 */ goto L_0069eb57;
L_0069eb57:; BB(0x0069eb57);
    /* 0069eb57: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eb5a: mov dword ptr [edi + 0x720], 0x12c */ W32((u32)(r_edi+0x720u), 0x12cu);
    /* 0069eb64: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069eb6a: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069eb70: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb72: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069eb78: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eb7d: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eb80: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb82: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eb87u); f_006904cc();
    /* 0069eb87: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eb8e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eb91: jne 0x69eba2 */ if (!fZ) goto L_0069eba2;
L_0069eb93:; BB(0x0069eb93);
    /* 0069eb93: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eb95: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb97: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eb9au); call_ind(t); }
    /* 0069eb9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb9b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb9d: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eba2u); f_007752dc();
L_0069eba2:; BB(0x0069eba2);
    /* 0069eba2: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eba8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069ebaa: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069ebb1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069ebb3: call dword ptr [edx + 0x58] */ { u32 t = R32((u32)(r_edx+0x58u)); r_esp -= 4; W32(r_esp, 0x69ebb6u); call_ind(t); }
    /* 0069ebb6: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069ebb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebba: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebbc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ebbe: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69ebc3u); f_00694390();
    /* 0069ebc3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069ebc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ebc5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069ebc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ebc7: ret  */ FN_RET(0x0069ea65); r_esp += 4; return;
}

void f_0069ea73(void)
{
    FN_ENTER(0x0069ea73);
    /* 0069ea73: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ea75: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ea77: call 0x69d1e4 */ r_esp -= 4; W32(r_esp, 0x69ea7cu); f_0069d1e4();
    /* 0069ea7c: jmp 0x69eb57 */ goto L_0069eb57;
L_0069eb57:; BB(0x0069eb57);
    /* 0069eb57: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eb5a: mov dword ptr [edi + 0x720], 0x12c */ W32((u32)(r_edi+0x720u), 0x12cu);
    /* 0069eb64: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069eb6a: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069eb70: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb72: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069eb78: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eb7d: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eb80: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb82: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eb87u); f_006904cc();
    /* 0069eb87: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eb8e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eb91: jne 0x69eba2 */ if (!fZ) goto L_0069eba2;
L_0069eb93:; BB(0x0069eb93);
    /* 0069eb93: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eb95: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb97: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eb9au); call_ind(t); }
    /* 0069eb9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb9b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb9d: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eba2u); f_007752dc();
L_0069eba2:; BB(0x0069eba2);
    /* 0069eba2: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eba8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069ebaa: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069ebb1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069ebb3: call dword ptr [edx + 0x58] */ { u32 t = R32((u32)(r_edx+0x58u)); r_esp -= 4; W32(r_esp, 0x69ebb6u); call_ind(t); }
    /* 0069ebb6: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069ebb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebba: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebbc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ebbe: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69ebc3u); f_00694390();
    /* 0069ebc3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069ebc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ebc5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069ebc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ebc7: ret  */ FN_RET(0x0069ea73); r_esp += 4; return;
}

void f_0069ea81(void)
{
    FN_ENTER(0x0069ea81);
    /* 0069ea81: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ea83: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ea85: call 0x69d43c */ r_esp -= 4; W32(r_esp, 0x69ea8au); f_0069d43c();
    /* 0069ea8a: jmp 0x69eb57 */ goto L_0069eb57;
L_0069eb57:; BB(0x0069eb57);
    /* 0069eb57: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eb5a: mov dword ptr [edi + 0x720], 0x12c */ W32((u32)(r_edi+0x720u), 0x12cu);
    /* 0069eb64: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069eb6a: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069eb70: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb72: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069eb78: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eb7d: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eb80: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb82: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eb87u); f_006904cc();
    /* 0069eb87: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eb8e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eb91: jne 0x69eba2 */ if (!fZ) goto L_0069eba2;
L_0069eb93:; BB(0x0069eb93);
    /* 0069eb93: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eb95: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb97: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eb9au); call_ind(t); }
    /* 0069eb9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb9b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb9d: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eba2u); f_007752dc();
L_0069eba2:; BB(0x0069eba2);
    /* 0069eba2: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eba8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069ebaa: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069ebb1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069ebb3: call dword ptr [edx + 0x58] */ { u32 t = R32((u32)(r_edx+0x58u)); r_esp -= 4; W32(r_esp, 0x69ebb6u); call_ind(t); }
    /* 0069ebb6: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069ebb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebba: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebbc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ebbe: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69ebc3u); f_00694390();
    /* 0069ebc3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069ebc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ebc5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069ebc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ebc7: ret  */ FN_RET(0x0069ea81); r_esp += 4; return;
}

void f_0069ea8f(void)
{
    FN_ENTER(0x0069ea8f);
    /* 0069ea8f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ea91: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ea93: call 0x69d8f4 */ r_esp -= 4; W32(r_esp, 0x69ea98u); f_0069d8f4();
    /* 0069ea98: jmp 0x69eb57 */ goto L_0069eb57;
L_0069eb57:; BB(0x0069eb57);
    /* 0069eb57: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eb5a: mov dword ptr [edi + 0x720], 0x12c */ W32((u32)(r_edi+0x720u), 0x12cu);
    /* 0069eb64: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069eb6a: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069eb70: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb72: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069eb78: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eb7d: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eb80: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb82: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eb87u); f_006904cc();
    /* 0069eb87: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eb8e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eb91: jne 0x69eba2 */ if (!fZ) goto L_0069eba2;
L_0069eb93:; BB(0x0069eb93);
    /* 0069eb93: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eb95: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb97: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eb9au); call_ind(t); }
    /* 0069eb9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb9b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb9d: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eba2u); f_007752dc();
L_0069eba2:; BB(0x0069eba2);
    /* 0069eba2: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eba8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069ebaa: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069ebb1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069ebb3: call dword ptr [edx + 0x58] */ { u32 t = R32((u32)(r_edx+0x58u)); r_esp -= 4; W32(r_esp, 0x69ebb6u); call_ind(t); }
    /* 0069ebb6: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069ebb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebba: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebbc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ebbe: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69ebc3u); f_00694390();
    /* 0069ebc3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069ebc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ebc5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069ebc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ebc7: ret  */ FN_RET(0x0069ea8f); r_esp += 4; return;
}

void f_0069ea9d(void)
{
    FN_ENTER(0x0069ea9d);
    /* 0069ea9d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ea9f: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eaa1: call 0x69dd60 */ r_esp -= 4; W32(r_esp, 0x69eaa6u); f_0069dd60();
    /* 0069eaa6: jmp 0x69eb57 */ goto L_0069eb57;
L_0069eb57:; BB(0x0069eb57);
    /* 0069eb57: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eb5a: mov dword ptr [edi + 0x720], 0x12c */ W32((u32)(r_edi+0x720u), 0x12cu);
    /* 0069eb64: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069eb6a: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069eb70: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb72: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069eb78: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eb7d: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eb80: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb82: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eb87u); f_006904cc();
    /* 0069eb87: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eb8e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eb91: jne 0x69eba2 */ if (!fZ) goto L_0069eba2;
L_0069eb93:; BB(0x0069eb93);
    /* 0069eb93: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eb95: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb97: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eb9au); call_ind(t); }
    /* 0069eb9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb9b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb9d: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eba2u); f_007752dc();
L_0069eba2:; BB(0x0069eba2);
    /* 0069eba2: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eba8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069ebaa: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069ebb1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069ebb3: call dword ptr [edx + 0x58] */ { u32 t = R32((u32)(r_edx+0x58u)); r_esp -= 4; W32(r_esp, 0x69ebb6u); call_ind(t); }
    /* 0069ebb6: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069ebb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebba: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebbc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ebbe: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69ebc3u); f_00694390();
    /* 0069ebc3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069ebc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ebc5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069ebc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ebc7: ret  */ FN_RET(0x0069ea9d); r_esp += 4; return;
}

void f_0069eaab(void)
{
    FN_ENTER(0x0069eaab);
    /* 0069eaab: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eaad: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eaaf: call 0x69e15c */ r_esp -= 4; W32(r_esp, 0x69eab4u); f_0069e15c();
    /* 0069eab4: jmp 0x69eb57 */ goto L_0069eb57;
L_0069eb57:; BB(0x0069eb57);
    /* 0069eb57: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eb5a: mov dword ptr [edi + 0x720], 0x12c */ W32((u32)(r_edi+0x720u), 0x12cu);
    /* 0069eb64: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069eb6a: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069eb70: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb72: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069eb78: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eb7d: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eb80: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb82: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eb87u); f_006904cc();
    /* 0069eb87: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eb8e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eb91: jne 0x69eba2 */ if (!fZ) goto L_0069eba2;
L_0069eb93:; BB(0x0069eb93);
    /* 0069eb93: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eb95: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb97: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eb9au); call_ind(t); }
    /* 0069eb9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb9b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb9d: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eba2u); f_007752dc();
L_0069eba2:; BB(0x0069eba2);
    /* 0069eba2: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eba8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069ebaa: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069ebb1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069ebb3: call dword ptr [edx + 0x58] */ { u32 t = R32((u32)(r_edx+0x58u)); r_esp -= 4; W32(r_esp, 0x69ebb6u); call_ind(t); }
    /* 0069ebb6: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069ebb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebba: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebbc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ebbe: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69ebc3u); f_00694390();
    /* 0069ebc3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069ebc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ebc5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069ebc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ebc7: ret  */ FN_RET(0x0069eaab); r_esp += 4; return;
}

void f_0069eab9(void)
{
    FN_ENTER(0x0069eab9);
    /* 0069eab9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eabb: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eabd: call 0x69e718 */ r_esp -= 4; W32(r_esp, 0x69eac2u); f_0069e718();
    /* 0069eac2: jmp 0x69eb57 */ goto L_0069eb57;
L_0069eb57:; BB(0x0069eb57);
    /* 0069eb57: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eb5a: mov dword ptr [edi + 0x720], 0x12c */ W32((u32)(r_edi+0x720u), 0x12cu);
    /* 0069eb64: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069eb6a: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069eb70: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb72: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069eb78: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eb7d: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eb80: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb82: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eb87u); f_006904cc();
    /* 0069eb87: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eb8e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eb91: jne 0x69eba2 */ if (!fZ) goto L_0069eba2;
L_0069eb93:; BB(0x0069eb93);
    /* 0069eb93: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eb95: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb97: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eb9au); call_ind(t); }
    /* 0069eb9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb9b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb9d: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eba2u); f_007752dc();
L_0069eba2:; BB(0x0069eba2);
    /* 0069eba2: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eba8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069ebaa: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069ebb1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069ebb3: call dword ptr [edx + 0x58] */ { u32 t = R32((u32)(r_edx+0x58u)); r_esp -= 4; W32(r_esp, 0x69ebb6u); call_ind(t); }
    /* 0069ebb6: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069ebb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebba: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebbc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ebbe: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69ebc3u); f_00694390();
    /* 0069ebc3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069ebc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ebc5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069ebc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ebc7: ret  */ FN_RET(0x0069eab9); r_esp += 4; return;
}

void f_0069eac7(void)
{
    FN_ENTER(0x0069eac7);
    /* 0069eac7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eac9: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eacb: call 0x69ebc8 */ r_esp -= 4; W32(r_esp, 0x69ead0u); f_0069ebc8();
    /* 0069ead0: jmp 0x69eb57 */ goto L_0069eb57;
L_0069eb57:; BB(0x0069eb57);
    /* 0069eb57: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eb5a: mov dword ptr [edi + 0x720], 0x12c */ W32((u32)(r_edi+0x720u), 0x12cu);
    /* 0069eb64: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069eb6a: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069eb70: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb72: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069eb78: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eb7d: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eb80: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb82: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eb87u); f_006904cc();
    /* 0069eb87: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eb8e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eb91: jne 0x69eba2 */ if (!fZ) goto L_0069eba2;
L_0069eb93:; BB(0x0069eb93);
    /* 0069eb93: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eb95: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb97: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eb9au); call_ind(t); }
    /* 0069eb9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb9b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb9d: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eba2u); f_007752dc();
L_0069eba2:; BB(0x0069eba2);
    /* 0069eba2: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eba8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069ebaa: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069ebb1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069ebb3: call dword ptr [edx + 0x58] */ { u32 t = R32((u32)(r_edx+0x58u)); r_esp -= 4; W32(r_esp, 0x69ebb6u); call_ind(t); }
    /* 0069ebb6: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069ebb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebba: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebbc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ebbe: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69ebc3u); f_00694390();
    /* 0069ebc3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069ebc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ebc5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069ebc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ebc7: ret  */ FN_RET(0x0069eac7); r_esp += 4; return;
}

void f_0069ead5(void)
{
    FN_ENTER(0x0069ead5);
    /* 0069ead5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ead7: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ead9: call 0x69ef04 */ r_esp -= 4; W32(r_esp, 0x69eadeu); f_0069ef04();
    /* 0069eade: jmp 0x69eb57 */ goto L_0069eb57;
L_0069eb57:; BB(0x0069eb57);
    /* 0069eb57: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eb5a: mov dword ptr [edi + 0x720], 0x12c */ W32((u32)(r_edi+0x720u), 0x12cu);
    /* 0069eb64: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069eb6a: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069eb70: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb72: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069eb78: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eb7d: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eb80: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb82: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eb87u); f_006904cc();
    /* 0069eb87: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eb8e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eb91: jne 0x69eba2 */ if (!fZ) goto L_0069eba2;
L_0069eb93:; BB(0x0069eb93);
    /* 0069eb93: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eb95: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb97: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eb9au); call_ind(t); }
    /* 0069eb9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb9b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb9d: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eba2u); f_007752dc();
L_0069eba2:; BB(0x0069eba2);
    /* 0069eba2: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eba8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069ebaa: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069ebb1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069ebb3: call dword ptr [edx + 0x58] */ { u32 t = R32((u32)(r_edx+0x58u)); r_esp -= 4; W32(r_esp, 0x69ebb6u); call_ind(t); }
    /* 0069ebb6: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069ebb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebba: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebbc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ebbe: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69ebc3u); f_00694390();
    /* 0069ebc3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069ebc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ebc5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069ebc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ebc7: ret  */ FN_RET(0x0069ead5); r_esp += 4; return;
}

void f_0069eae0(void)
{
    FN_ENTER(0x0069eae0);
    /* 0069eae0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eae2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eae4: call 0x69f148 */ r_esp -= 4; W32(r_esp, 0x69eae9u); f_0069f148();
    /* 0069eae9: jmp 0x69eb57 */ goto L_0069eb57;
L_0069eb57:; BB(0x0069eb57);
    /* 0069eb57: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eb5a: mov dword ptr [edi + 0x720], 0x12c */ W32((u32)(r_edi+0x720u), 0x12cu);
    /* 0069eb64: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069eb6a: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069eb70: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb72: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069eb78: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eb7d: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eb80: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb82: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eb87u); f_006904cc();
    /* 0069eb87: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eb8e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eb91: jne 0x69eba2 */ if (!fZ) goto L_0069eba2;
L_0069eb93:; BB(0x0069eb93);
    /* 0069eb93: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eb95: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb97: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eb9au); call_ind(t); }
    /* 0069eb9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb9b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb9d: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eba2u); f_007752dc();
L_0069eba2:; BB(0x0069eba2);
    /* 0069eba2: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eba8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069ebaa: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069ebb1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069ebb3: call dword ptr [edx + 0x58] */ { u32 t = R32((u32)(r_edx+0x58u)); r_esp -= 4; W32(r_esp, 0x69ebb6u); call_ind(t); }
    /* 0069ebb6: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069ebb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebba: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebbc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ebbe: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69ebc3u); f_00694390();
    /* 0069ebc3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069ebc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ebc5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069ebc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ebc7: ret  */ FN_RET(0x0069eae0); r_esp += 4; return;
}

void f_0069eaeb(void)
{
    FN_ENTER(0x0069eaeb);
    /* 0069eaeb: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eaed: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eaef: call 0x69f384 */ r_esp -= 4; W32(r_esp, 0x69eaf4u); f_0069f384();
    /* 0069eaf4: jmp 0x69eb57 */ goto L_0069eb57;
L_0069eb57:; BB(0x0069eb57);
    /* 0069eb57: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eb5a: mov dword ptr [edi + 0x720], 0x12c */ W32((u32)(r_edi+0x720u), 0x12cu);
    /* 0069eb64: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069eb6a: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069eb70: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb72: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069eb78: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eb7d: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eb80: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb82: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eb87u); f_006904cc();
    /* 0069eb87: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eb8e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eb91: jne 0x69eba2 */ if (!fZ) goto L_0069eba2;
L_0069eb93:; BB(0x0069eb93);
    /* 0069eb93: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eb95: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb97: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eb9au); call_ind(t); }
    /* 0069eb9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb9b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb9d: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eba2u); f_007752dc();
L_0069eba2:; BB(0x0069eba2);
    /* 0069eba2: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eba8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069ebaa: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069ebb1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069ebb3: call dword ptr [edx + 0x58] */ { u32 t = R32((u32)(r_edx+0x58u)); r_esp -= 4; W32(r_esp, 0x69ebb6u); call_ind(t); }
    /* 0069ebb6: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069ebb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebba: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebbc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ebbe: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69ebc3u); f_00694390();
    /* 0069ebc3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069ebc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ebc5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069ebc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ebc7: ret  */ FN_RET(0x0069eaeb); r_esp += 4; return;
}

void f_0069eaf6(void)
{
    FN_ENTER(0x0069eaf6);
    /* 0069eaf6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eaf8: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eafa: call 0x69f648 */ r_esp -= 4; W32(r_esp, 0x69eaffu); f_0069f648();
    /* 0069eaff: jmp 0x69eb57 */ goto L_0069eb57;
L_0069eb57:; BB(0x0069eb57);
    /* 0069eb57: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eb5a: mov dword ptr [edi + 0x720], 0x12c */ W32((u32)(r_edi+0x720u), 0x12cu);
    /* 0069eb64: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069eb6a: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069eb70: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb72: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069eb78: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eb7d: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eb80: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb82: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eb87u); f_006904cc();
    /* 0069eb87: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eb8e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eb91: jne 0x69eba2 */ if (!fZ) goto L_0069eba2;
L_0069eb93:; BB(0x0069eb93);
    /* 0069eb93: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eb95: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb97: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eb9au); call_ind(t); }
    /* 0069eb9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb9b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb9d: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eba2u); f_007752dc();
L_0069eba2:; BB(0x0069eba2);
    /* 0069eba2: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eba8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069ebaa: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069ebb1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069ebb3: call dword ptr [edx + 0x58] */ { u32 t = R32((u32)(r_edx+0x58u)); r_esp -= 4; W32(r_esp, 0x69ebb6u); call_ind(t); }
    /* 0069ebb6: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069ebb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebba: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebbc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ebbe: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69ebc3u); f_00694390();
    /* 0069ebc3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069ebc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ebc5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069ebc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ebc7: ret  */ FN_RET(0x0069eaf6); r_esp += 4; return;
}

void f_0069eb01(void)
{
    FN_ENTER(0x0069eb01);
    /* 0069eb01: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb03: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb05: call 0x69fe2c */ r_esp -= 4; W32(r_esp, 0x69eb0au); f_0069fe2c();
    /* 0069eb0a: jmp 0x69eb57 */ goto L_0069eb57;
L_0069eb57:; BB(0x0069eb57);
    /* 0069eb57: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eb5a: mov dword ptr [edi + 0x720], 0x12c */ W32((u32)(r_edi+0x720u), 0x12cu);
    /* 0069eb64: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069eb6a: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069eb70: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb72: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069eb78: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eb7d: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eb80: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb82: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eb87u); f_006904cc();
    /* 0069eb87: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eb8e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eb91: jne 0x69eba2 */ if (!fZ) goto L_0069eba2;
L_0069eb93:; BB(0x0069eb93);
    /* 0069eb93: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eb95: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb97: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eb9au); call_ind(t); }
    /* 0069eb9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb9b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb9d: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eba2u); f_007752dc();
L_0069eba2:; BB(0x0069eba2);
    /* 0069eba2: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eba8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069ebaa: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069ebb1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069ebb3: call dword ptr [edx + 0x58] */ { u32 t = R32((u32)(r_edx+0x58u)); r_esp -= 4; W32(r_esp, 0x69ebb6u); call_ind(t); }
    /* 0069ebb6: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069ebb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebba: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebbc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ebbe: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69ebc3u); f_00694390();
    /* 0069ebc3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069ebc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ebc5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069ebc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ebc7: ret  */ FN_RET(0x0069eb01); r_esp += 4; return;
}

void f_0069eb0c(void)
{
    FN_ENTER(0x0069eb0c);
    /* 0069eb0c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb0e: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb10: call 0x6a0624 */ r_esp -= 4; W32(r_esp, 0x69eb15u); f_006a0624();
    /* 0069eb15: jmp 0x69eb57 */ goto L_0069eb57;
L_0069eb57:; BB(0x0069eb57);
    /* 0069eb57: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eb5a: mov dword ptr [edi + 0x720], 0x12c */ W32((u32)(r_edi+0x720u), 0x12cu);
    /* 0069eb64: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069eb6a: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069eb70: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb72: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069eb78: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eb7d: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eb80: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb82: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eb87u); f_006904cc();
    /* 0069eb87: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eb8e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eb91: jne 0x69eba2 */ if (!fZ) goto L_0069eba2;
L_0069eb93:; BB(0x0069eb93);
    /* 0069eb93: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eb95: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb97: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eb9au); call_ind(t); }
    /* 0069eb9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb9b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb9d: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eba2u); f_007752dc();
L_0069eba2:; BB(0x0069eba2);
    /* 0069eba2: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eba8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069ebaa: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069ebb1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069ebb3: call dword ptr [edx + 0x58] */ { u32 t = R32((u32)(r_edx+0x58u)); r_esp -= 4; W32(r_esp, 0x69ebb6u); call_ind(t); }
    /* 0069ebb6: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069ebb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebba: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebbc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ebbe: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69ebc3u); f_00694390();
    /* 0069ebc3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069ebc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ebc5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069ebc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ebc7: ret  */ FN_RET(0x0069eb0c); r_esp += 4; return;
}

void f_0069eb17(void)
{
    FN_ENTER(0x0069eb17);
    /* 0069eb17: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb19: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb1b: call 0x6a0994 */ r_esp -= 4; W32(r_esp, 0x69eb20u); f_006a0994();
    /* 0069eb20: jmp 0x69eb57 */ goto L_0069eb57;
L_0069eb57:; BB(0x0069eb57);
    /* 0069eb57: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eb5a: mov dword ptr [edi + 0x720], 0x12c */ W32((u32)(r_edi+0x720u), 0x12cu);
    /* 0069eb64: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069eb6a: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069eb70: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb72: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069eb78: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eb7d: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eb80: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb82: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eb87u); f_006904cc();
    /* 0069eb87: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eb8e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eb91: jne 0x69eba2 */ if (!fZ) goto L_0069eba2;
L_0069eb93:; BB(0x0069eb93);
    /* 0069eb93: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eb95: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb97: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eb9au); call_ind(t); }
    /* 0069eb9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb9b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb9d: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eba2u); f_007752dc();
L_0069eba2:; BB(0x0069eba2);
    /* 0069eba2: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eba8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069ebaa: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069ebb1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069ebb3: call dword ptr [edx + 0x58] */ { u32 t = R32((u32)(r_edx+0x58u)); r_esp -= 4; W32(r_esp, 0x69ebb6u); call_ind(t); }
    /* 0069ebb6: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069ebb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebba: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebbc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ebbe: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69ebc3u); f_00694390();
    /* 0069ebc3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069ebc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ebc5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069ebc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ebc7: ret  */ FN_RET(0x0069eb17); r_esp += 4; return;
}

void f_0069eb22(void)
{
    FN_ENTER(0x0069eb22);
    /* 0069eb22: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb24: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb26: call 0x6a0eb8 */ r_esp -= 4; W32(r_esp, 0x69eb2bu); f_006a0eb8();
    /* 0069eb2b: jmp 0x69eb57 */ goto L_0069eb57;
L_0069eb57:; BB(0x0069eb57);
    /* 0069eb57: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eb5a: mov dword ptr [edi + 0x720], 0x12c */ W32((u32)(r_edi+0x720u), 0x12cu);
    /* 0069eb64: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069eb6a: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069eb70: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb72: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069eb78: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eb7d: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eb80: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb82: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eb87u); f_006904cc();
    /* 0069eb87: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eb8e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eb91: jne 0x69eba2 */ if (!fZ) goto L_0069eba2;
L_0069eb93:; BB(0x0069eb93);
    /* 0069eb93: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eb95: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb97: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eb9au); call_ind(t); }
    /* 0069eb9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb9b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb9d: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eba2u); f_007752dc();
L_0069eba2:; BB(0x0069eba2);
    /* 0069eba2: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eba8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069ebaa: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069ebb1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069ebb3: call dword ptr [edx + 0x58] */ { u32 t = R32((u32)(r_edx+0x58u)); r_esp -= 4; W32(r_esp, 0x69ebb6u); call_ind(t); }
    /* 0069ebb6: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069ebb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebba: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebbc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ebbe: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69ebc3u); f_00694390();
    /* 0069ebc3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069ebc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ebc5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069ebc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ebc7: ret  */ FN_RET(0x0069eb22); r_esp += 4; return;
}

void f_0069eb2d(void)
{
    FN_ENTER(0x0069eb2d);
    /* 0069eb2d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb2f: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb31: call 0x6a139c */ r_esp -= 4; W32(r_esp, 0x69eb36u); f_006a139c();
    /* 0069eb36: jmp 0x69eb57 */ goto L_0069eb57;
L_0069eb57:; BB(0x0069eb57);
    /* 0069eb57: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eb5a: mov dword ptr [edi + 0x720], 0x12c */ W32((u32)(r_edi+0x720u), 0x12cu);
    /* 0069eb64: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069eb6a: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069eb70: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb72: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069eb78: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eb7d: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eb80: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb82: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eb87u); f_006904cc();
    /* 0069eb87: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eb8e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eb91: jne 0x69eba2 */ if (!fZ) goto L_0069eba2;
L_0069eb93:; BB(0x0069eb93);
    /* 0069eb93: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eb95: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb97: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eb9au); call_ind(t); }
    /* 0069eb9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb9b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb9d: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eba2u); f_007752dc();
L_0069eba2:; BB(0x0069eba2);
    /* 0069eba2: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eba8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069ebaa: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069ebb1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069ebb3: call dword ptr [edx + 0x58] */ { u32 t = R32((u32)(r_edx+0x58u)); r_esp -= 4; W32(r_esp, 0x69ebb6u); call_ind(t); }
    /* 0069ebb6: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069ebb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebba: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebbc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ebbe: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69ebc3u); f_00694390();
    /* 0069ebc3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069ebc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ebc5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069ebc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ebc7: ret  */ FN_RET(0x0069eb2d); r_esp += 4; return;
}

void f_0069eb38(void)
{
    FN_ENTER(0x0069eb38);
    /* 0069eb38: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb3a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb3c: call 0x6a1a60 */ r_esp -= 4; W32(r_esp, 0x69eb41u); f_006a1a60();
    /* 0069eb41: jmp 0x69eb57 */ goto L_0069eb57;
L_0069eb57:; BB(0x0069eb57);
    /* 0069eb57: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eb5a: mov dword ptr [edi + 0x720], 0x12c */ W32((u32)(r_edi+0x720u), 0x12cu);
    /* 0069eb64: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069eb6a: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069eb70: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb72: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069eb78: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eb7d: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eb80: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb82: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eb87u); f_006904cc();
    /* 0069eb87: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eb8e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eb91: jne 0x69eba2 */ if (!fZ) goto L_0069eba2;
L_0069eb93:; BB(0x0069eb93);
    /* 0069eb93: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eb95: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb97: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eb9au); call_ind(t); }
    /* 0069eb9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb9b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb9d: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eba2u); f_007752dc();
L_0069eba2:; BB(0x0069eba2);
    /* 0069eba2: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eba8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069ebaa: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069ebb1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069ebb3: call dword ptr [edx + 0x58] */ { u32 t = R32((u32)(r_edx+0x58u)); r_esp -= 4; W32(r_esp, 0x69ebb6u); call_ind(t); }
    /* 0069ebb6: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069ebb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebba: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebbc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ebbe: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69ebc3u); f_00694390();
    /* 0069ebc3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069ebc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ebc5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069ebc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ebc7: ret  */ FN_RET(0x0069eb38); r_esp += 4; return;
}

void f_0069eb43(void)
{
    FN_ENTER(0x0069eb43);
    /* 0069eb43: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb45: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb47: call 0x69b93c */ r_esp -= 4; W32(r_esp, 0x69eb4cu); f_0069b93c();
    /* 0069eb4c: jmp 0x69eb57 */ goto L_0069eb57;
L_0069eb57:; BB(0x0069eb57);
    /* 0069eb57: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eb5a: mov dword ptr [edi + 0x720], 0x12c */ W32((u32)(r_edi+0x720u), 0x12cu);
    /* 0069eb64: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069eb6a: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069eb70: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb72: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069eb78: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eb7d: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eb80: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb82: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eb87u); f_006904cc();
    /* 0069eb87: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eb8e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eb91: jne 0x69eba2 */ if (!fZ) goto L_0069eba2;
L_0069eb93:; BB(0x0069eb93);
    /* 0069eb93: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eb95: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb97: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eb9au); call_ind(t); }
    /* 0069eb9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb9b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb9d: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eba2u); f_007752dc();
L_0069eba2:; BB(0x0069eba2);
    /* 0069eba2: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eba8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069ebaa: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069ebb1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069ebb3: call dword ptr [edx + 0x58] */ { u32 t = R32((u32)(r_edx+0x58u)); r_esp -= 4; W32(r_esp, 0x69ebb6u); call_ind(t); }
    /* 0069ebb6: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069ebb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebba: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebbc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ebbe: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69ebc3u); f_00694390();
    /* 0069ebc3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069ebc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ebc5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069ebc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ebc7: ret  */ FN_RET(0x0069eb43); r_esp += 4; return;
}

void f_0069eb4e(void)
{
    FN_ENTER(0x0069eb4e);
    /* 0069eb4e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb50: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb52: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x69eb57u); f_006a1ac0();
    /* 0069eb57: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eb5a: mov dword ptr [edi + 0x720], 0x12c */ W32((u32)(r_edi+0x720u), 0x12cu);
    /* 0069eb64: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069eb6a: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069eb70: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb72: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069eb78: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eb7d: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eb80: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb82: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eb87u); f_006904cc();
    /* 0069eb87: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eb8e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eb91: jne 0x69eba2 */ if (!fZ) goto L_0069eba2;
L_0069eb93:; BB(0x0069eb93);
    /* 0069eb93: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eb95: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb97: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eb9au); call_ind(t); }
    /* 0069eb9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb9b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb9d: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eba2u); f_007752dc();
L_0069eba2:; BB(0x0069eba2);
    /* 0069eba2: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eba8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069ebaa: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069ebb1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069ebb3: call dword ptr [edx + 0x58] */ { u32 t = R32((u32)(r_edx+0x58u)); r_esp -= 4; W32(r_esp, 0x69ebb6u); call_ind(t); }
    /* 0069ebb6: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069ebb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebba: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebbc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ebbe: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69ebc3u); f_00694390();
    /* 0069ebc3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069ebc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ebc5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069ebc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ebc7: ret  */ FN_RET(0x0069eb4e); r_esp += 4; return;
}

void f_0069eb57(void)
{
    FN_ENTER(0x0069eb57);
    /* 0069eb57: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eb5a: mov dword ptr [edi + 0x720], 0x12c */ W32((u32)(r_edi+0x720u), 0x12cu);
    /* 0069eb64: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069eb6a: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069eb70: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb72: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069eb78: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eb7d: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eb80: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb82: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eb87u); f_006904cc();
    /* 0069eb87: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eb8e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eb91: jne 0x69eba2 */ if (!fZ) goto L_0069eba2;
L_0069eb93:; BB(0x0069eb93);
    /* 0069eb93: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eb95: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb97: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eb9au); call_ind(t); }
    /* 0069eb9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eb9b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eb9d: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eba2u); f_007752dc();
L_0069eba2:; BB(0x0069eba2);
    /* 0069eba2: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eba8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069ebaa: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069ebb1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069ebb3: call dword ptr [edx + 0x58] */ { u32 t = R32((u32)(r_edx+0x58u)); r_esp -= 4; W32(r_esp, 0x69ebb6u); call_ind(t); }
    /* 0069ebb6: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069ebb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebba: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0069ebbc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ebbe: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69ebc3u); f_00694390();
    /* 0069ebc3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069ebc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ebc5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069ebc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ebc7: ret  */ FN_RET(0x0069eb57); r_esp += 4; return;
}

void f_0069ebc8(void) /* sub_69EBC8 */
{
    FN_ENTER(0x0069ebc8);
    /* 0069ebc8: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 0069ebcd: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069ebd0: ja 0x69ec47 */ if ((!fC&&!fZ)) goto L_0069ec47;
L_0069ebd2:; BB(0x0069ebd2);
    /* 0069ebd2: mov eax, dword ptr [eax*4 + 0x93d1a4] */ r_eax = R32((u32)(r_eax*4+0x93d1a4u));
    /* 0069ebd9: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0069ec47:; BB(0x0069ec47);
    /* 0069ec47: ret 4 */ FN_RET(0x0069ebc8); r_esp += 8; return;
}

void f_0069ebdb(void)
{
    FN_ENTER(0x0069ebdb);
    /* 0069ebdb: call 0x69e79c */ r_esp -= 4; W32(r_esp, 0x69ebe0u); f_0069e79c();
    /* 0069ebe0: jmp 0x69ec47 */ goto L_0069ec47;
L_0069ec47:; BB(0x0069ec47);
    /* 0069ec47: ret 4 */ FN_RET(0x0069ebdb); r_esp += 8; return;
}

void f_0069ebe2(void)
{
    FN_ENTER(0x0069ebe2);
    /* 0069ebe2: call 0x6a29f4 */ r_esp -= 4; W32(r_esp, 0x69ebe7u); f_006a29f4();
    /* 0069ebe7: jmp 0x69ec47 */ goto L_0069ec47;
L_0069ec47:; BB(0x0069ec47);
    /* 0069ec47: ret 4 */ FN_RET(0x0069ebe2); r_esp += 8; return;
}

void f_0069ebe9(void)
{
    FN_ENTER(0x0069ebe9);
    /* 0069ebe9: call 0x69ec4c */ r_esp -= 4; W32(r_esp, 0x69ebeeu); f_0069ec4c();
    /* 0069ebee: jmp 0x69ec47 */ goto L_0069ec47;
L_0069ec47:; BB(0x0069ec47);
    /* 0069ec47: ret 4 */ FN_RET(0x0069ebe9); r_esp += 8; return;
}

void f_0069ebf0(void)
{
    FN_ENTER(0x0069ebf0);
    /* 0069ebf0: call 0x69ecac */ r_esp -= 4; W32(r_esp, 0x69ebf5u); f_0069ecac();
    /* 0069ebf5: jmp 0x69ec47 */ goto L_0069ec47;
L_0069ec47:; BB(0x0069ec47);
    /* 0069ec47: ret 4 */ FN_RET(0x0069ebf0); r_esp += 8; return;
}

void f_0069ebf7(void)
{
    FN_ENTER(0x0069ebf7);
    /* 0069ebf7: mov edx, dword ptr [ecx + 0x634] */ r_edx = R32((u32)(r_ecx+0x634u));
    /* 0069ebfd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069ebff: mov word ptr [0xa9432c], ax */ W16((u32)(0xa9432cu), (u16)r_eax);
    /* 0069ec05: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069ec07: mov word ptr [0xa94330], ax */ W16((u32)(0xa94330u), (u16)r_eax);
    /* 0069ec0d: je 0x69ec47 */ if (fZ) goto L_0069ec47;
L_0069ec0f:; BB(0x0069ec0f);
    /* 0069ec0f: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 0069ec15: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069ec17: je 0x69ec20 */ if (fZ) goto L_0069ec20;
L_0069ec19:; BB(0x0069ec19);
    /* 0069ec19: mov eax, 1 */ r_eax = 0x1u;
    /* 0069ec1e: jmp 0x69ec22 */ goto L_0069ec22;
L_0069ec20:; BB(0x0069ec20);
    /* 0069ec20: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0069ec22:; BB(0x0069ec22);
    /* 0069ec22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069ec24: jne 0x69ec47 */ if (!fZ) goto L_0069ec47;
L_0069ec26:; BB(0x0069ec26);
    /* 0069ec26: push 0xa9432c */ { u32 v = 0xa9432cu; r_esp -= 4; W32(r_esp, v); }
    /* 0069ec2b: push 0xa94330 */ { u32 v = 0xa94330u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ec30: call 0x70a60c */ r_esp -= 4; W32(r_esp, 0x69ec35u); f_0070a60c();
    /* 0069ec35: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069ec38: ret 4 */ FN_RET(0x0069ebf7); r_esp += 8; return;
L_0069ec47:; BB(0x0069ec47);
    /* 0069ec47: ret 4 */ FN_RET(0x0069ebf7); r_esp += 8; return;
}

void f_0069ec3b(void)
{
    FN_ENTER(0x0069ec3b);
    /* 0069ec3b: call 0x69ece0 */ r_esp -= 4; W32(r_esp, 0x69ec40u); f_0069ece0();
    /* 0069ec40: jmp 0x69ec47 */ goto L_0069ec47;
L_0069ec47:; BB(0x0069ec47);
    /* 0069ec47: ret 4 */ FN_RET(0x0069ec3b); r_esp += 8; return;
}

void f_0069ec42(void)
{
    FN_ENTER(0x0069ec42);
    /* 0069ec42: call 0x69ed10 */ r_esp -= 4; W32(r_esp, 0x69ec47u); f_0069ed10();
    /* 0069ec47: ret 4 */ FN_RET(0x0069ec42); r_esp += 8; return;
}

void f_0069ec47(void)
{
    FN_ENTER(0x0069ec47);
    /* 0069ec47: ret 4 */ FN_RET(0x0069ec47); r_esp += 8; return;
}

void f_0069ec4c(void) /* sub_69EC4C */
{
    FN_ENTER(0x0069ec4c);
    /* 0069ec4c: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069ec4f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ec51: je 0x69ec63 */ if (fZ) goto L_0069ec63;
L_0069ec53:; BB(0x0069ec53);
    /* 0069ec53: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 0069ec5a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ec5d: jne 0x69ec63 */ if (!fZ) goto L_0069ec63;
L_0069ec5f:; BB(0x0069ec5f);
    /* 0069ec5f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069ec62: ret  */ FN_RET(0x0069ec4c); r_esp += 4; return;
L_0069ec63:; BB(0x0069ec63);
    /* 0069ec63: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0069ec67: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 0069ec6a: mov byte ptr [esp], 0x4b */ W8((u32)(r_esp), 0x4bu);
    /* 0069ec6e: mov byte ptr [esp + 1], 4 */ W8((u32)(r_esp+0x1u), 0x4u);
    /* 0069ec73: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0069ec78: movzx eax, word ptr [ecx + 0x334] */ r_eax = (u32)R16((u32)(r_ecx+0x334u));
    /* 0069ec7f: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 0069ec84: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 0069ec89: mov eax, dword ptr [ecx + 0x30c] */ r_eax = R32((u32)(r_ecx+0x30cu));
    /* 0069ec8f: mov ecx, dword ptr [ecx + 0x314] */ r_ecx = R32((u32)(r_ecx+0x314u));
    /* 0069ec95: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0069ec99: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0069ec9d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069eca0: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x69eca5u); f_008003e0();
    /* 0069eca5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069eca8: ret  */ FN_RET(0x0069ec4c); r_esp += 4; return;
}

void f_0069ecac(void) /* sub_69ECAC */
{
    FN_ENTER(0x0069ecac);
    /* 0069ecac: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 0069ecb2: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069ecb4: je 0x69ecd6 */ if (fZ) goto L_0069ecd6;
L_0069ecb6:; BB(0x0069ecb6);
    /* 0069ecb6: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0069ecb9: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ecbe: je 0x69ecd7 */ if (fZ) goto L_0069ecd7;
L_0069ecc0:; BB(0x0069ecc0);
    /* 0069ecc0: mov eax, dword ptr [ecx + 0x92c] */ r_eax = R32((u32)(r_ecx+0x92cu));
    /* 0069ecc6: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069ecc9: mov dword ptr [ecx + 0x92c], eax */ W32((u32)(r_ecx+0x92cu), r_eax);
    /* 0069eccf: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ecd1: call 0x69e15c */ r_esp -= 4; W32(r_esp, 0x69ecd6u); f_0069e15c();
L_0069ecd6:; BB(0x0069ecd6);
    /* 0069ecd6: ret  */ FN_RET(0x0069ecac); r_esp += 4; return;
L_0069ecd7:; BB(0x0069ecd7);
    /* 0069ecd7: call 0x69d554 */ r_esp -= 4; W32(r_esp, 0x69ecdcu); f_0069d554();
    /* 0069ecdc: ret  */ FN_RET(0x0069ecac); r_esp += 4; return;
}

void f_0069ece0(void) /* sub_69ECE0 */
{
    FN_ENTER(0x0069ece0);
    /* 0069ece0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069ece1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0069ece3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069ece5: call 0x694230 */ r_esp -= 4; W32(r_esp, 0x69eceau); f_00694230();
    /* 0069ecea: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069ecec: call 0x694198 */ r_esp -= 4; W32(r_esp, 0x69ecf1u); f_00694198();
    /* 0069ecf1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ecf3: je 0x69ecfc */ if (fZ) goto L_0069ecfc;
L_0069ecf5:; BB(0x0069ecf5);
    /* 0069ecf5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069ecf7: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69ecfcu); f_0077774c();
L_0069ecfc:; BB(0x0069ecfc);
    /* 0069ecfc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069ecfe: call 0x693844 */ r_esp -= 4; W32(r_esp, 0x69ed03u); f_00693844();
    /* 0069ed03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069ed05: jne 0x69ed0e */ if (!fZ) goto L_0069ed0e;
L_0069ed07:; BB(0x0069ed07);
    /* 0069ed07: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069ed09: call 0x777724 */ r_esp -= 4; W32(r_esp, 0x69ed0eu); f_00777724();
L_0069ed0e:; BB(0x0069ed0e);
    /* 0069ed0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ed0f: ret  */ FN_RET(0x0069ece0); r_esp += 4; return;
}

void f_0069ed10(void) /* sub_69ED10 */
{
    FN_ENTER(0x0069ed10);
    /* 0069ed10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069ed11: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069ed12: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069ed13: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069ed14: mov edi, ecx */ r_edi = r_ecx;
    /* 0069ed16: mov esi, dword ptr [edi + 0x30c] */ r_esi = R32((u32)(r_edi+0x30cu));
    /* 0069ed1c: mov ebp, dword ptr [edi + 0x310] */ r_ebp = R32((u32)(r_edi+0x310u));
    /* 0069ed22: mov ebx, dword ptr [edi + 0x314] */ r_ebx = R32((u32)(r_edi+0x314u));
    /* 0069ed28: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0069ed2f: mov dword ptr [edi + 0x348], 0xd */ W32((u32)(r_edi+0x348u), 0xdu);
    /* 0069ed39: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0069ed3c: ja 0x69ee67 */ if ((!fC&&!fZ)) goto L_0069ee67;
L_0069ed42:; BB(0x0069ed42);
    /* 0069ed42: mov eax, dword ptr [eax*4 + 0x93d1e0] */ r_eax = R32((u32)(r_eax*4+0x93d1e0u));
    /* 0069ed49: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0069ee67:; BB(0x0069ee67);
    /* 0069ee67: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069ee6d: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069ee73: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069ee79: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069ee7f: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee84: je 0x69ee93 */ if (fZ) goto L_0069ee93;
L_0069ee86:; BB(0x0069ee86);
    /* 0069ee86: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069ee8b: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069ee91: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069ee93:; BB(0x0069ee93);
    /* 0069ee93: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69ee98u); f_00687c48();
    /* 0069ee98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee9a: je 0x69eea8 */ if (fZ) goto L_0069eea8;
L_0069ee9c:; BB(0x0069ee9c);
    /* 0069ee9c: mov dword ptr [edi + 0x720], 0x1e */ W32((u32)(r_edi+0x720u), 0x1eu);
    /* 0069eea6: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069eea8:; BB(0x0069eea8);
    /* 0069eea8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069eea9: call 0x6ac848 */ r_esp -= 4; W32(r_esp, 0x69eeaeu); f_006ac848();
    /* 0069eeae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069eeaf: mov dword ptr [edi + 0x720], eax */ W32((u32)(r_edi+0x720u), r_eax);
L_0069eeb5:; BB(0x0069eeb5);
    /* 0069eeb5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eeb7: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eeb9: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eebeu); f_006904cc();
    /* 0069eebe: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eec5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eec8: jne 0x69eed9 */ if (!fZ) goto L_0069eed9;
L_0069eeca:; BB(0x0069eeca);
    /* 0069eeca: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eecc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eece: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eed1u); call_ind(t); }
    /* 0069eed1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eed2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eed4: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eed9u); f_007752dc();
L_0069eed9:; BB(0x0069eed9);
    /* 0069eed9: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eedc: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eee2: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eee7: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eeea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069eeec: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x69eeefu); call_ind(t); }
    /* 0069eeef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069eef2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef3: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eef7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69eefcu); f_00694390();
    /* 0069eefc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069eefd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069eefe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069eeff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ef00: ret  */ FN_RET(0x0069ed10); r_esp += 4; return;
}

void f_0069ed4b(void)
{
    FN_ENTER(0x0069ed4b);
    /* 0069ed4b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ed4d: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ed4f: call 0x69bdf0 */ r_esp -= 4; W32(r_esp, 0x69ed54u); f_0069bdf0();
    /* 0069ed54: jmp 0x69ee67 */ goto L_0069ee67;
L_0069ee67:; BB(0x0069ee67);
    /* 0069ee67: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069ee6d: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069ee73: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069ee79: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069ee7f: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee84: je 0x69ee93 */ if (fZ) goto L_0069ee93;
L_0069ee86:; BB(0x0069ee86);
    /* 0069ee86: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069ee8b: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069ee91: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069ee93:; BB(0x0069ee93);
    /* 0069ee93: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69ee98u); f_00687c48();
    /* 0069ee98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee9a: je 0x69eea8 */ if (fZ) goto L_0069eea8;
L_0069ee9c:; BB(0x0069ee9c);
    /* 0069ee9c: mov dword ptr [edi + 0x720], 0x1e */ W32((u32)(r_edi+0x720u), 0x1eu);
    /* 0069eea6: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069eea8:; BB(0x0069eea8);
    /* 0069eea8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069eea9: call 0x6ac848 */ r_esp -= 4; W32(r_esp, 0x69eeaeu); f_006ac848();
    /* 0069eeae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069eeaf: mov dword ptr [edi + 0x720], eax */ W32((u32)(r_edi+0x720u), r_eax);
L_0069eeb5:; BB(0x0069eeb5);
    /* 0069eeb5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eeb7: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eeb9: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eebeu); f_006904cc();
    /* 0069eebe: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eec5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eec8: jne 0x69eed9 */ if (!fZ) goto L_0069eed9;
L_0069eeca:; BB(0x0069eeca);
    /* 0069eeca: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eecc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eece: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eed1u); call_ind(t); }
    /* 0069eed1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eed2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eed4: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eed9u); f_007752dc();
L_0069eed9:; BB(0x0069eed9);
    /* 0069eed9: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eedc: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eee2: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eee7: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eeea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069eeec: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x69eeefu); call_ind(t); }
    /* 0069eeef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069eef2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef3: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eef7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69eefcu); f_00694390();
    /* 0069eefc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069eefd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069eefe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069eeff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ef00: ret  */ FN_RET(0x0069ed4b); r_esp += 4; return;
}

void f_0069ed59(void)
{
    FN_ENTER(0x0069ed59);
    /* 0069ed59: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ed5b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ed5d: call 0x69c6c0 */ r_esp -= 4; W32(r_esp, 0x69ed62u); f_0069c6c0();
    /* 0069ed62: jmp 0x69ee67 */ goto L_0069ee67;
L_0069ee67:; BB(0x0069ee67);
    /* 0069ee67: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069ee6d: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069ee73: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069ee79: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069ee7f: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee84: je 0x69ee93 */ if (fZ) goto L_0069ee93;
L_0069ee86:; BB(0x0069ee86);
    /* 0069ee86: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069ee8b: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069ee91: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069ee93:; BB(0x0069ee93);
    /* 0069ee93: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69ee98u); f_00687c48();
    /* 0069ee98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee9a: je 0x69eea8 */ if (fZ) goto L_0069eea8;
L_0069ee9c:; BB(0x0069ee9c);
    /* 0069ee9c: mov dword ptr [edi + 0x720], 0x1e */ W32((u32)(r_edi+0x720u), 0x1eu);
    /* 0069eea6: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069eea8:; BB(0x0069eea8);
    /* 0069eea8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069eea9: call 0x6ac848 */ r_esp -= 4; W32(r_esp, 0x69eeaeu); f_006ac848();
    /* 0069eeae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069eeaf: mov dword ptr [edi + 0x720], eax */ W32((u32)(r_edi+0x720u), r_eax);
L_0069eeb5:; BB(0x0069eeb5);
    /* 0069eeb5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eeb7: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eeb9: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eebeu); f_006904cc();
    /* 0069eebe: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eec5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eec8: jne 0x69eed9 */ if (!fZ) goto L_0069eed9;
L_0069eeca:; BB(0x0069eeca);
    /* 0069eeca: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eecc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eece: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eed1u); call_ind(t); }
    /* 0069eed1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eed2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eed4: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eed9u); f_007752dc();
L_0069eed9:; BB(0x0069eed9);
    /* 0069eed9: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eedc: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eee2: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eee7: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eeea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069eeec: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x69eeefu); call_ind(t); }
    /* 0069eeef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069eef2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef3: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eef7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69eefcu); f_00694390();
    /* 0069eefc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069eefd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069eefe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069eeff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ef00: ret  */ FN_RET(0x0069ed59); r_esp += 4; return;
}

void f_0069ed67(void)
{
    FN_ENTER(0x0069ed67);
    /* 0069ed67: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ed69: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ed6b: call 0x69c988 */ r_esp -= 4; W32(r_esp, 0x69ed70u); f_0069c988();
    /* 0069ed70: jmp 0x69ee67 */ goto L_0069ee67;
L_0069ee67:; BB(0x0069ee67);
    /* 0069ee67: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069ee6d: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069ee73: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069ee79: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069ee7f: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee84: je 0x69ee93 */ if (fZ) goto L_0069ee93;
L_0069ee86:; BB(0x0069ee86);
    /* 0069ee86: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069ee8b: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069ee91: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069ee93:; BB(0x0069ee93);
    /* 0069ee93: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69ee98u); f_00687c48();
    /* 0069ee98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee9a: je 0x69eea8 */ if (fZ) goto L_0069eea8;
L_0069ee9c:; BB(0x0069ee9c);
    /* 0069ee9c: mov dword ptr [edi + 0x720], 0x1e */ W32((u32)(r_edi+0x720u), 0x1eu);
    /* 0069eea6: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069eea8:; BB(0x0069eea8);
    /* 0069eea8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069eea9: call 0x6ac848 */ r_esp -= 4; W32(r_esp, 0x69eeaeu); f_006ac848();
    /* 0069eeae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069eeaf: mov dword ptr [edi + 0x720], eax */ W32((u32)(r_edi+0x720u), r_eax);
L_0069eeb5:; BB(0x0069eeb5);
    /* 0069eeb5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eeb7: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eeb9: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eebeu); f_006904cc();
    /* 0069eebe: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eec5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eec8: jne 0x69eed9 */ if (!fZ) goto L_0069eed9;
L_0069eeca:; BB(0x0069eeca);
    /* 0069eeca: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eecc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eece: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eed1u); call_ind(t); }
    /* 0069eed1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eed2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eed4: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eed9u); f_007752dc();
L_0069eed9:; BB(0x0069eed9);
    /* 0069eed9: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eedc: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eee2: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eee7: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eeea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069eeec: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x69eeefu); call_ind(t); }
    /* 0069eeef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069eef2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef3: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eef7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69eefcu); f_00694390();
    /* 0069eefc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069eefd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069eefe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069eeff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ef00: ret  */ FN_RET(0x0069ed67); r_esp += 4; return;
}

void f_0069ed75(void)
{
    FN_ENTER(0x0069ed75);
    /* 0069ed75: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ed77: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ed79: call 0x69cd20 */ r_esp -= 4; W32(r_esp, 0x69ed7eu); f_0069cd20();
    /* 0069ed7e: jmp 0x69ee67 */ goto L_0069ee67;
L_0069ee67:; BB(0x0069ee67);
    /* 0069ee67: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069ee6d: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069ee73: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069ee79: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069ee7f: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee84: je 0x69ee93 */ if (fZ) goto L_0069ee93;
L_0069ee86:; BB(0x0069ee86);
    /* 0069ee86: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069ee8b: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069ee91: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069ee93:; BB(0x0069ee93);
    /* 0069ee93: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69ee98u); f_00687c48();
    /* 0069ee98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee9a: je 0x69eea8 */ if (fZ) goto L_0069eea8;
L_0069ee9c:; BB(0x0069ee9c);
    /* 0069ee9c: mov dword ptr [edi + 0x720], 0x1e */ W32((u32)(r_edi+0x720u), 0x1eu);
    /* 0069eea6: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069eea8:; BB(0x0069eea8);
    /* 0069eea8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069eea9: call 0x6ac848 */ r_esp -= 4; W32(r_esp, 0x69eeaeu); f_006ac848();
    /* 0069eeae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069eeaf: mov dword ptr [edi + 0x720], eax */ W32((u32)(r_edi+0x720u), r_eax);
L_0069eeb5:; BB(0x0069eeb5);
    /* 0069eeb5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eeb7: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eeb9: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eebeu); f_006904cc();
    /* 0069eebe: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eec5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eec8: jne 0x69eed9 */ if (!fZ) goto L_0069eed9;
L_0069eeca:; BB(0x0069eeca);
    /* 0069eeca: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eecc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eece: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eed1u); call_ind(t); }
    /* 0069eed1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eed2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eed4: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eed9u); f_007752dc();
L_0069eed9:; BB(0x0069eed9);
    /* 0069eed9: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eedc: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eee2: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eee7: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eeea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069eeec: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x69eeefu); call_ind(t); }
    /* 0069eeef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069eef2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef3: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eef7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69eefcu); f_00694390();
    /* 0069eefc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069eefd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069eefe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069eeff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ef00: ret  */ FN_RET(0x0069ed75); r_esp += 4; return;
}

void f_0069ed83(void)
{
    FN_ENTER(0x0069ed83);
    /* 0069ed83: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ed85: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ed87: call 0x69d1e4 */ r_esp -= 4; W32(r_esp, 0x69ed8cu); f_0069d1e4();
    /* 0069ed8c: jmp 0x69ee67 */ goto L_0069ee67;
L_0069ee67:; BB(0x0069ee67);
    /* 0069ee67: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069ee6d: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069ee73: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069ee79: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069ee7f: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee84: je 0x69ee93 */ if (fZ) goto L_0069ee93;
L_0069ee86:; BB(0x0069ee86);
    /* 0069ee86: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069ee8b: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069ee91: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069ee93:; BB(0x0069ee93);
    /* 0069ee93: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69ee98u); f_00687c48();
    /* 0069ee98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee9a: je 0x69eea8 */ if (fZ) goto L_0069eea8;
L_0069ee9c:; BB(0x0069ee9c);
    /* 0069ee9c: mov dword ptr [edi + 0x720], 0x1e */ W32((u32)(r_edi+0x720u), 0x1eu);
    /* 0069eea6: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069eea8:; BB(0x0069eea8);
    /* 0069eea8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069eea9: call 0x6ac848 */ r_esp -= 4; W32(r_esp, 0x69eeaeu); f_006ac848();
    /* 0069eeae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069eeaf: mov dword ptr [edi + 0x720], eax */ W32((u32)(r_edi+0x720u), r_eax);
L_0069eeb5:; BB(0x0069eeb5);
    /* 0069eeb5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eeb7: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eeb9: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eebeu); f_006904cc();
    /* 0069eebe: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eec5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eec8: jne 0x69eed9 */ if (!fZ) goto L_0069eed9;
L_0069eeca:; BB(0x0069eeca);
    /* 0069eeca: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eecc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eece: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eed1u); call_ind(t); }
    /* 0069eed1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eed2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eed4: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eed9u); f_007752dc();
L_0069eed9:; BB(0x0069eed9);
    /* 0069eed9: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eedc: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eee2: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eee7: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eeea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069eeec: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x69eeefu); call_ind(t); }
    /* 0069eeef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069eef2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef3: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eef7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69eefcu); f_00694390();
    /* 0069eefc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069eefd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069eefe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069eeff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ef00: ret  */ FN_RET(0x0069ed83); r_esp += 4; return;
}

void f_0069ed91(void)
{
    FN_ENTER(0x0069ed91);
    /* 0069ed91: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ed93: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ed95: call 0x69d43c */ r_esp -= 4; W32(r_esp, 0x69ed9au); f_0069d43c();
    /* 0069ed9a: jmp 0x69ee67 */ goto L_0069ee67;
L_0069ee67:; BB(0x0069ee67);
    /* 0069ee67: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069ee6d: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069ee73: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069ee79: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069ee7f: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee84: je 0x69ee93 */ if (fZ) goto L_0069ee93;
L_0069ee86:; BB(0x0069ee86);
    /* 0069ee86: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069ee8b: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069ee91: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069ee93:; BB(0x0069ee93);
    /* 0069ee93: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69ee98u); f_00687c48();
    /* 0069ee98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee9a: je 0x69eea8 */ if (fZ) goto L_0069eea8;
L_0069ee9c:; BB(0x0069ee9c);
    /* 0069ee9c: mov dword ptr [edi + 0x720], 0x1e */ W32((u32)(r_edi+0x720u), 0x1eu);
    /* 0069eea6: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069eea8:; BB(0x0069eea8);
    /* 0069eea8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069eea9: call 0x6ac848 */ r_esp -= 4; W32(r_esp, 0x69eeaeu); f_006ac848();
    /* 0069eeae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069eeaf: mov dword ptr [edi + 0x720], eax */ W32((u32)(r_edi+0x720u), r_eax);
L_0069eeb5:; BB(0x0069eeb5);
    /* 0069eeb5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eeb7: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eeb9: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eebeu); f_006904cc();
    /* 0069eebe: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eec5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eec8: jne 0x69eed9 */ if (!fZ) goto L_0069eed9;
L_0069eeca:; BB(0x0069eeca);
    /* 0069eeca: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eecc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eece: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eed1u); call_ind(t); }
    /* 0069eed1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eed2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eed4: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eed9u); f_007752dc();
L_0069eed9:; BB(0x0069eed9);
    /* 0069eed9: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eedc: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eee2: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eee7: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eeea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069eeec: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x69eeefu); call_ind(t); }
    /* 0069eeef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069eef2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef3: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eef7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69eefcu); f_00694390();
    /* 0069eefc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069eefd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069eefe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069eeff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ef00: ret  */ FN_RET(0x0069ed91); r_esp += 4; return;
}

void f_0069ed9f(void)
{
    FN_ENTER(0x0069ed9f);
    /* 0069ed9f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eda1: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eda3: call 0x69d8f4 */ r_esp -= 4; W32(r_esp, 0x69eda8u); f_0069d8f4();
    /* 0069eda8: jmp 0x69ee67 */ goto L_0069ee67;
L_0069ee67:; BB(0x0069ee67);
    /* 0069ee67: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069ee6d: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069ee73: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069ee79: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069ee7f: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee84: je 0x69ee93 */ if (fZ) goto L_0069ee93;
L_0069ee86:; BB(0x0069ee86);
    /* 0069ee86: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069ee8b: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069ee91: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069ee93:; BB(0x0069ee93);
    /* 0069ee93: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69ee98u); f_00687c48();
    /* 0069ee98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee9a: je 0x69eea8 */ if (fZ) goto L_0069eea8;
L_0069ee9c:; BB(0x0069ee9c);
    /* 0069ee9c: mov dword ptr [edi + 0x720], 0x1e */ W32((u32)(r_edi+0x720u), 0x1eu);
    /* 0069eea6: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069eea8:; BB(0x0069eea8);
    /* 0069eea8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069eea9: call 0x6ac848 */ r_esp -= 4; W32(r_esp, 0x69eeaeu); f_006ac848();
    /* 0069eeae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069eeaf: mov dword ptr [edi + 0x720], eax */ W32((u32)(r_edi+0x720u), r_eax);
L_0069eeb5:; BB(0x0069eeb5);
    /* 0069eeb5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eeb7: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eeb9: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eebeu); f_006904cc();
    /* 0069eebe: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eec5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eec8: jne 0x69eed9 */ if (!fZ) goto L_0069eed9;
L_0069eeca:; BB(0x0069eeca);
    /* 0069eeca: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eecc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eece: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eed1u); call_ind(t); }
    /* 0069eed1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eed2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eed4: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eed9u); f_007752dc();
L_0069eed9:; BB(0x0069eed9);
    /* 0069eed9: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eedc: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eee2: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eee7: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eeea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069eeec: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x69eeefu); call_ind(t); }
    /* 0069eeef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069eef2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef3: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eef7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69eefcu); f_00694390();
    /* 0069eefc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069eefd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069eefe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069eeff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ef00: ret  */ FN_RET(0x0069ed9f); r_esp += 4; return;
}

void f_0069edad(void)
{
    FN_ENTER(0x0069edad);
    /* 0069edad: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069edaf: mov ecx, edi */ r_ecx = r_edi;
    /* 0069edb1: call 0x69dd60 */ r_esp -= 4; W32(r_esp, 0x69edb6u); f_0069dd60();
    /* 0069edb6: jmp 0x69ee67 */ goto L_0069ee67;
L_0069ee67:; BB(0x0069ee67);
    /* 0069ee67: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069ee6d: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069ee73: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069ee79: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069ee7f: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee84: je 0x69ee93 */ if (fZ) goto L_0069ee93;
L_0069ee86:; BB(0x0069ee86);
    /* 0069ee86: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069ee8b: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069ee91: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069ee93:; BB(0x0069ee93);
    /* 0069ee93: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69ee98u); f_00687c48();
    /* 0069ee98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee9a: je 0x69eea8 */ if (fZ) goto L_0069eea8;
L_0069ee9c:; BB(0x0069ee9c);
    /* 0069ee9c: mov dword ptr [edi + 0x720], 0x1e */ W32((u32)(r_edi+0x720u), 0x1eu);
    /* 0069eea6: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069eea8:; BB(0x0069eea8);
    /* 0069eea8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069eea9: call 0x6ac848 */ r_esp -= 4; W32(r_esp, 0x69eeaeu); f_006ac848();
    /* 0069eeae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069eeaf: mov dword ptr [edi + 0x720], eax */ W32((u32)(r_edi+0x720u), r_eax);
L_0069eeb5:; BB(0x0069eeb5);
    /* 0069eeb5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eeb7: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eeb9: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eebeu); f_006904cc();
    /* 0069eebe: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eec5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eec8: jne 0x69eed9 */ if (!fZ) goto L_0069eed9;
L_0069eeca:; BB(0x0069eeca);
    /* 0069eeca: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eecc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eece: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eed1u); call_ind(t); }
    /* 0069eed1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eed2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eed4: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eed9u); f_007752dc();
L_0069eed9:; BB(0x0069eed9);
    /* 0069eed9: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eedc: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eee2: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eee7: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eeea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069eeec: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x69eeefu); call_ind(t); }
    /* 0069eeef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069eef2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef3: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eef7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69eefcu); f_00694390();
    /* 0069eefc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069eefd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069eefe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069eeff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ef00: ret  */ FN_RET(0x0069edad); r_esp += 4; return;
}

void f_0069edbb(void)
{
    FN_ENTER(0x0069edbb);
    /* 0069edbb: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069edbd: mov ecx, edi */ r_ecx = r_edi;
    /* 0069edbf: call 0x69e15c */ r_esp -= 4; W32(r_esp, 0x69edc4u); f_0069e15c();
    /* 0069edc4: jmp 0x69ee67 */ goto L_0069ee67;
L_0069ee67:; BB(0x0069ee67);
    /* 0069ee67: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069ee6d: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069ee73: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069ee79: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069ee7f: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee84: je 0x69ee93 */ if (fZ) goto L_0069ee93;
L_0069ee86:; BB(0x0069ee86);
    /* 0069ee86: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069ee8b: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069ee91: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069ee93:; BB(0x0069ee93);
    /* 0069ee93: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69ee98u); f_00687c48();
    /* 0069ee98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee9a: je 0x69eea8 */ if (fZ) goto L_0069eea8;
L_0069ee9c:; BB(0x0069ee9c);
    /* 0069ee9c: mov dword ptr [edi + 0x720], 0x1e */ W32((u32)(r_edi+0x720u), 0x1eu);
    /* 0069eea6: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069eea8:; BB(0x0069eea8);
    /* 0069eea8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069eea9: call 0x6ac848 */ r_esp -= 4; W32(r_esp, 0x69eeaeu); f_006ac848();
    /* 0069eeae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069eeaf: mov dword ptr [edi + 0x720], eax */ W32((u32)(r_edi+0x720u), r_eax);
L_0069eeb5:; BB(0x0069eeb5);
    /* 0069eeb5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eeb7: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eeb9: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eebeu); f_006904cc();
    /* 0069eebe: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eec5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eec8: jne 0x69eed9 */ if (!fZ) goto L_0069eed9;
L_0069eeca:; BB(0x0069eeca);
    /* 0069eeca: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eecc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eece: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eed1u); call_ind(t); }
    /* 0069eed1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eed2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eed4: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eed9u); f_007752dc();
L_0069eed9:; BB(0x0069eed9);
    /* 0069eed9: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eedc: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eee2: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eee7: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eeea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069eeec: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x69eeefu); call_ind(t); }
    /* 0069eeef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069eef2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef3: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eef7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69eefcu); f_00694390();
    /* 0069eefc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069eefd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069eefe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069eeff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ef00: ret  */ FN_RET(0x0069edbb); r_esp += 4; return;
}

void f_0069edc9(void)
{
    FN_ENTER(0x0069edc9);
    /* 0069edc9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069edcb: mov ecx, edi */ r_ecx = r_edi;
    /* 0069edcd: call 0x69e718 */ r_esp -= 4; W32(r_esp, 0x69edd2u); f_0069e718();
    /* 0069edd2: jmp 0x69ee67 */ goto L_0069ee67;
L_0069ee67:; BB(0x0069ee67);
    /* 0069ee67: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069ee6d: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069ee73: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069ee79: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069ee7f: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee84: je 0x69ee93 */ if (fZ) goto L_0069ee93;
L_0069ee86:; BB(0x0069ee86);
    /* 0069ee86: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069ee8b: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069ee91: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069ee93:; BB(0x0069ee93);
    /* 0069ee93: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69ee98u); f_00687c48();
    /* 0069ee98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee9a: je 0x69eea8 */ if (fZ) goto L_0069eea8;
L_0069ee9c:; BB(0x0069ee9c);
    /* 0069ee9c: mov dword ptr [edi + 0x720], 0x1e */ W32((u32)(r_edi+0x720u), 0x1eu);
    /* 0069eea6: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069eea8:; BB(0x0069eea8);
    /* 0069eea8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069eea9: call 0x6ac848 */ r_esp -= 4; W32(r_esp, 0x69eeaeu); f_006ac848();
    /* 0069eeae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069eeaf: mov dword ptr [edi + 0x720], eax */ W32((u32)(r_edi+0x720u), r_eax);
L_0069eeb5:; BB(0x0069eeb5);
    /* 0069eeb5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eeb7: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eeb9: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eebeu); f_006904cc();
    /* 0069eebe: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eec5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eec8: jne 0x69eed9 */ if (!fZ) goto L_0069eed9;
L_0069eeca:; BB(0x0069eeca);
    /* 0069eeca: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eecc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eece: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eed1u); call_ind(t); }
    /* 0069eed1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eed2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eed4: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eed9u); f_007752dc();
L_0069eed9:; BB(0x0069eed9);
    /* 0069eed9: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eedc: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eee2: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eee7: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eeea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069eeec: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x69eeefu); call_ind(t); }
    /* 0069eeef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069eef2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef3: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eef7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69eefcu); f_00694390();
    /* 0069eefc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069eefd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069eefe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069eeff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ef00: ret  */ FN_RET(0x0069edc9); r_esp += 4; return;
}

void f_0069edd7(void)
{
    FN_ENTER(0x0069edd7);
    /* 0069edd7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069edd9: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eddb: call 0x69ebc8 */ r_esp -= 4; W32(r_esp, 0x69ede0u); f_0069ebc8();
    /* 0069ede0: jmp 0x69ee67 */ goto L_0069ee67;
L_0069ee67:; BB(0x0069ee67);
    /* 0069ee67: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069ee6d: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069ee73: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069ee79: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069ee7f: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee84: je 0x69ee93 */ if (fZ) goto L_0069ee93;
L_0069ee86:; BB(0x0069ee86);
    /* 0069ee86: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069ee8b: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069ee91: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069ee93:; BB(0x0069ee93);
    /* 0069ee93: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69ee98u); f_00687c48();
    /* 0069ee98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee9a: je 0x69eea8 */ if (fZ) goto L_0069eea8;
L_0069ee9c:; BB(0x0069ee9c);
    /* 0069ee9c: mov dword ptr [edi + 0x720], 0x1e */ W32((u32)(r_edi+0x720u), 0x1eu);
    /* 0069eea6: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069eea8:; BB(0x0069eea8);
    /* 0069eea8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069eea9: call 0x6ac848 */ r_esp -= 4; W32(r_esp, 0x69eeaeu); f_006ac848();
    /* 0069eeae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069eeaf: mov dword ptr [edi + 0x720], eax */ W32((u32)(r_edi+0x720u), r_eax);
L_0069eeb5:; BB(0x0069eeb5);
    /* 0069eeb5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eeb7: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eeb9: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eebeu); f_006904cc();
    /* 0069eebe: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eec5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eec8: jne 0x69eed9 */ if (!fZ) goto L_0069eed9;
L_0069eeca:; BB(0x0069eeca);
    /* 0069eeca: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eecc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eece: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eed1u); call_ind(t); }
    /* 0069eed1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eed2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eed4: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eed9u); f_007752dc();
L_0069eed9:; BB(0x0069eed9);
    /* 0069eed9: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eedc: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eee2: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eee7: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eeea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069eeec: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x69eeefu); call_ind(t); }
    /* 0069eeef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069eef2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef3: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eef7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69eefcu); f_00694390();
    /* 0069eefc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069eefd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069eefe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069eeff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ef00: ret  */ FN_RET(0x0069edd7); r_esp += 4; return;
}

void f_0069ede5(void)
{
    FN_ENTER(0x0069ede5);
    /* 0069ede5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ede7: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ede9: call 0x69ef04 */ r_esp -= 4; W32(r_esp, 0x69edeeu); f_0069ef04();
    /* 0069edee: jmp 0x69ee67 */ goto L_0069ee67;
L_0069ee67:; BB(0x0069ee67);
    /* 0069ee67: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069ee6d: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069ee73: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069ee79: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069ee7f: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee84: je 0x69ee93 */ if (fZ) goto L_0069ee93;
L_0069ee86:; BB(0x0069ee86);
    /* 0069ee86: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069ee8b: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069ee91: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069ee93:; BB(0x0069ee93);
    /* 0069ee93: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69ee98u); f_00687c48();
    /* 0069ee98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee9a: je 0x69eea8 */ if (fZ) goto L_0069eea8;
L_0069ee9c:; BB(0x0069ee9c);
    /* 0069ee9c: mov dword ptr [edi + 0x720], 0x1e */ W32((u32)(r_edi+0x720u), 0x1eu);
    /* 0069eea6: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069eea8:; BB(0x0069eea8);
    /* 0069eea8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069eea9: call 0x6ac848 */ r_esp -= 4; W32(r_esp, 0x69eeaeu); f_006ac848();
    /* 0069eeae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069eeaf: mov dword ptr [edi + 0x720], eax */ W32((u32)(r_edi+0x720u), r_eax);
L_0069eeb5:; BB(0x0069eeb5);
    /* 0069eeb5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eeb7: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eeb9: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eebeu); f_006904cc();
    /* 0069eebe: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eec5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eec8: jne 0x69eed9 */ if (!fZ) goto L_0069eed9;
L_0069eeca:; BB(0x0069eeca);
    /* 0069eeca: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eecc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eece: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eed1u); call_ind(t); }
    /* 0069eed1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eed2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eed4: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eed9u); f_007752dc();
L_0069eed9:; BB(0x0069eed9);
    /* 0069eed9: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eedc: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eee2: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eee7: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eeea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069eeec: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x69eeefu); call_ind(t); }
    /* 0069eeef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069eef2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef3: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eef7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69eefcu); f_00694390();
    /* 0069eefc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069eefd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069eefe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069eeff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ef00: ret  */ FN_RET(0x0069ede5); r_esp += 4; return;
}

void f_0069edf0(void)
{
    FN_ENTER(0x0069edf0);
    /* 0069edf0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069edf2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069edf4: call 0x69f148 */ r_esp -= 4; W32(r_esp, 0x69edf9u); f_0069f148();
    /* 0069edf9: jmp 0x69ee67 */ goto L_0069ee67;
L_0069ee67:; BB(0x0069ee67);
    /* 0069ee67: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069ee6d: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069ee73: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069ee79: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069ee7f: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee84: je 0x69ee93 */ if (fZ) goto L_0069ee93;
L_0069ee86:; BB(0x0069ee86);
    /* 0069ee86: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069ee8b: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069ee91: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069ee93:; BB(0x0069ee93);
    /* 0069ee93: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69ee98u); f_00687c48();
    /* 0069ee98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee9a: je 0x69eea8 */ if (fZ) goto L_0069eea8;
L_0069ee9c:; BB(0x0069ee9c);
    /* 0069ee9c: mov dword ptr [edi + 0x720], 0x1e */ W32((u32)(r_edi+0x720u), 0x1eu);
    /* 0069eea6: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069eea8:; BB(0x0069eea8);
    /* 0069eea8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069eea9: call 0x6ac848 */ r_esp -= 4; W32(r_esp, 0x69eeaeu); f_006ac848();
    /* 0069eeae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069eeaf: mov dword ptr [edi + 0x720], eax */ W32((u32)(r_edi+0x720u), r_eax);
L_0069eeb5:; BB(0x0069eeb5);
    /* 0069eeb5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eeb7: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eeb9: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eebeu); f_006904cc();
    /* 0069eebe: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eec5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eec8: jne 0x69eed9 */ if (!fZ) goto L_0069eed9;
L_0069eeca:; BB(0x0069eeca);
    /* 0069eeca: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eecc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eece: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eed1u); call_ind(t); }
    /* 0069eed1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eed2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eed4: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eed9u); f_007752dc();
L_0069eed9:; BB(0x0069eed9);
    /* 0069eed9: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eedc: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eee2: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eee7: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eeea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069eeec: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x69eeefu); call_ind(t); }
    /* 0069eeef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069eef2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef3: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eef7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69eefcu); f_00694390();
    /* 0069eefc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069eefd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069eefe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069eeff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ef00: ret  */ FN_RET(0x0069edf0); r_esp += 4; return;
}

void f_0069edfb(void)
{
    FN_ENTER(0x0069edfb);
    /* 0069edfb: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069edfd: mov ecx, edi */ r_ecx = r_edi;
    /* 0069edff: call 0x69f384 */ r_esp -= 4; W32(r_esp, 0x69ee04u); f_0069f384();
    /* 0069ee04: jmp 0x69ee67 */ goto L_0069ee67;
L_0069ee67:; BB(0x0069ee67);
    /* 0069ee67: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069ee6d: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069ee73: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069ee79: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069ee7f: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee84: je 0x69ee93 */ if (fZ) goto L_0069ee93;
L_0069ee86:; BB(0x0069ee86);
    /* 0069ee86: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069ee8b: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069ee91: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069ee93:; BB(0x0069ee93);
    /* 0069ee93: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69ee98u); f_00687c48();
    /* 0069ee98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee9a: je 0x69eea8 */ if (fZ) goto L_0069eea8;
L_0069ee9c:; BB(0x0069ee9c);
    /* 0069ee9c: mov dword ptr [edi + 0x720], 0x1e */ W32((u32)(r_edi+0x720u), 0x1eu);
    /* 0069eea6: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069eea8:; BB(0x0069eea8);
    /* 0069eea8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069eea9: call 0x6ac848 */ r_esp -= 4; W32(r_esp, 0x69eeaeu); f_006ac848();
    /* 0069eeae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069eeaf: mov dword ptr [edi + 0x720], eax */ W32((u32)(r_edi+0x720u), r_eax);
L_0069eeb5:; BB(0x0069eeb5);
    /* 0069eeb5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eeb7: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eeb9: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eebeu); f_006904cc();
    /* 0069eebe: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eec5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eec8: jne 0x69eed9 */ if (!fZ) goto L_0069eed9;
L_0069eeca:; BB(0x0069eeca);
    /* 0069eeca: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eecc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eece: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eed1u); call_ind(t); }
    /* 0069eed1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eed2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eed4: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eed9u); f_007752dc();
L_0069eed9:; BB(0x0069eed9);
    /* 0069eed9: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eedc: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eee2: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eee7: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eeea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069eeec: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x69eeefu); call_ind(t); }
    /* 0069eeef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069eef2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef3: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eef7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69eefcu); f_00694390();
    /* 0069eefc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069eefd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069eefe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069eeff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ef00: ret  */ FN_RET(0x0069edfb); r_esp += 4; return;
}

void f_0069ee06(void)
{
    FN_ENTER(0x0069ee06);
    /* 0069ee06: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ee08: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ee0a: call 0x69f648 */ r_esp -= 4; W32(r_esp, 0x69ee0fu); f_0069f648();
    /* 0069ee0f: jmp 0x69ee67 */ goto L_0069ee67;
L_0069ee67:; BB(0x0069ee67);
    /* 0069ee67: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069ee6d: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069ee73: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069ee79: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069ee7f: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee84: je 0x69ee93 */ if (fZ) goto L_0069ee93;
L_0069ee86:; BB(0x0069ee86);
    /* 0069ee86: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069ee8b: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069ee91: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069ee93:; BB(0x0069ee93);
    /* 0069ee93: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69ee98u); f_00687c48();
    /* 0069ee98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee9a: je 0x69eea8 */ if (fZ) goto L_0069eea8;
L_0069ee9c:; BB(0x0069ee9c);
    /* 0069ee9c: mov dword ptr [edi + 0x720], 0x1e */ W32((u32)(r_edi+0x720u), 0x1eu);
    /* 0069eea6: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069eea8:; BB(0x0069eea8);
    /* 0069eea8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069eea9: call 0x6ac848 */ r_esp -= 4; W32(r_esp, 0x69eeaeu); f_006ac848();
    /* 0069eeae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069eeaf: mov dword ptr [edi + 0x720], eax */ W32((u32)(r_edi+0x720u), r_eax);
L_0069eeb5:; BB(0x0069eeb5);
    /* 0069eeb5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eeb7: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eeb9: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eebeu); f_006904cc();
    /* 0069eebe: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eec5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eec8: jne 0x69eed9 */ if (!fZ) goto L_0069eed9;
L_0069eeca:; BB(0x0069eeca);
    /* 0069eeca: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eecc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eece: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eed1u); call_ind(t); }
    /* 0069eed1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eed2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eed4: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eed9u); f_007752dc();
L_0069eed9:; BB(0x0069eed9);
    /* 0069eed9: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eedc: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eee2: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eee7: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eeea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069eeec: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x69eeefu); call_ind(t); }
    /* 0069eeef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069eef2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef3: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eef7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69eefcu); f_00694390();
    /* 0069eefc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069eefd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069eefe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069eeff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ef00: ret  */ FN_RET(0x0069ee06); r_esp += 4; return;
}

void f_0069ee11(void)
{
    FN_ENTER(0x0069ee11);
    /* 0069ee11: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ee13: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ee15: call 0x69fe2c */ r_esp -= 4; W32(r_esp, 0x69ee1au); f_0069fe2c();
    /* 0069ee1a: jmp 0x69ee67 */ goto L_0069ee67;
L_0069ee67:; BB(0x0069ee67);
    /* 0069ee67: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069ee6d: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069ee73: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069ee79: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069ee7f: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee84: je 0x69ee93 */ if (fZ) goto L_0069ee93;
L_0069ee86:; BB(0x0069ee86);
    /* 0069ee86: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069ee8b: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069ee91: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069ee93:; BB(0x0069ee93);
    /* 0069ee93: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69ee98u); f_00687c48();
    /* 0069ee98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee9a: je 0x69eea8 */ if (fZ) goto L_0069eea8;
L_0069ee9c:; BB(0x0069ee9c);
    /* 0069ee9c: mov dword ptr [edi + 0x720], 0x1e */ W32((u32)(r_edi+0x720u), 0x1eu);
    /* 0069eea6: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069eea8:; BB(0x0069eea8);
    /* 0069eea8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069eea9: call 0x6ac848 */ r_esp -= 4; W32(r_esp, 0x69eeaeu); f_006ac848();
    /* 0069eeae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069eeaf: mov dword ptr [edi + 0x720], eax */ W32((u32)(r_edi+0x720u), r_eax);
L_0069eeb5:; BB(0x0069eeb5);
    /* 0069eeb5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eeb7: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eeb9: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eebeu); f_006904cc();
    /* 0069eebe: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eec5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eec8: jne 0x69eed9 */ if (!fZ) goto L_0069eed9;
L_0069eeca:; BB(0x0069eeca);
    /* 0069eeca: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eecc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eece: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eed1u); call_ind(t); }
    /* 0069eed1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eed2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eed4: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eed9u); f_007752dc();
L_0069eed9:; BB(0x0069eed9);
    /* 0069eed9: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eedc: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eee2: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eee7: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eeea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069eeec: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x69eeefu); call_ind(t); }
    /* 0069eeef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069eef2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef3: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eef7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69eefcu); f_00694390();
    /* 0069eefc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069eefd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069eefe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069eeff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ef00: ret  */ FN_RET(0x0069ee11); r_esp += 4; return;
}

void f_0069ee1c(void)
{
    FN_ENTER(0x0069ee1c);
    /* 0069ee1c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ee1e: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ee20: call 0x6a0624 */ r_esp -= 4; W32(r_esp, 0x69ee25u); f_006a0624();
    /* 0069ee25: jmp 0x69ee67 */ goto L_0069ee67;
L_0069ee67:; BB(0x0069ee67);
    /* 0069ee67: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069ee6d: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069ee73: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069ee79: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069ee7f: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee84: je 0x69ee93 */ if (fZ) goto L_0069ee93;
L_0069ee86:; BB(0x0069ee86);
    /* 0069ee86: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069ee8b: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069ee91: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069ee93:; BB(0x0069ee93);
    /* 0069ee93: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69ee98u); f_00687c48();
    /* 0069ee98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee9a: je 0x69eea8 */ if (fZ) goto L_0069eea8;
L_0069ee9c:; BB(0x0069ee9c);
    /* 0069ee9c: mov dword ptr [edi + 0x720], 0x1e */ W32((u32)(r_edi+0x720u), 0x1eu);
    /* 0069eea6: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069eea8:; BB(0x0069eea8);
    /* 0069eea8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069eea9: call 0x6ac848 */ r_esp -= 4; W32(r_esp, 0x69eeaeu); f_006ac848();
    /* 0069eeae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069eeaf: mov dword ptr [edi + 0x720], eax */ W32((u32)(r_edi+0x720u), r_eax);
L_0069eeb5:; BB(0x0069eeb5);
    /* 0069eeb5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eeb7: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eeb9: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eebeu); f_006904cc();
    /* 0069eebe: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eec5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eec8: jne 0x69eed9 */ if (!fZ) goto L_0069eed9;
L_0069eeca:; BB(0x0069eeca);
    /* 0069eeca: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eecc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eece: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eed1u); call_ind(t); }
    /* 0069eed1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eed2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eed4: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eed9u); f_007752dc();
L_0069eed9:; BB(0x0069eed9);
    /* 0069eed9: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eedc: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eee2: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eee7: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eeea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069eeec: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x69eeefu); call_ind(t); }
    /* 0069eeef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069eef2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef3: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eef7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69eefcu); f_00694390();
    /* 0069eefc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069eefd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069eefe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069eeff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ef00: ret  */ FN_RET(0x0069ee1c); r_esp += 4; return;
}

void f_0069ee27(void)
{
    FN_ENTER(0x0069ee27);
    /* 0069ee27: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ee29: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ee2b: call 0x6a0994 */ r_esp -= 4; W32(r_esp, 0x69ee30u); f_006a0994();
    /* 0069ee30: jmp 0x69ee67 */ goto L_0069ee67;
L_0069ee67:; BB(0x0069ee67);
    /* 0069ee67: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069ee6d: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069ee73: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069ee79: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069ee7f: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee84: je 0x69ee93 */ if (fZ) goto L_0069ee93;
L_0069ee86:; BB(0x0069ee86);
    /* 0069ee86: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069ee8b: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069ee91: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069ee93:; BB(0x0069ee93);
    /* 0069ee93: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69ee98u); f_00687c48();
    /* 0069ee98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee9a: je 0x69eea8 */ if (fZ) goto L_0069eea8;
L_0069ee9c:; BB(0x0069ee9c);
    /* 0069ee9c: mov dword ptr [edi + 0x720], 0x1e */ W32((u32)(r_edi+0x720u), 0x1eu);
    /* 0069eea6: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069eea8:; BB(0x0069eea8);
    /* 0069eea8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069eea9: call 0x6ac848 */ r_esp -= 4; W32(r_esp, 0x69eeaeu); f_006ac848();
    /* 0069eeae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069eeaf: mov dword ptr [edi + 0x720], eax */ W32((u32)(r_edi+0x720u), r_eax);
L_0069eeb5:; BB(0x0069eeb5);
    /* 0069eeb5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eeb7: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eeb9: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eebeu); f_006904cc();
    /* 0069eebe: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eec5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eec8: jne 0x69eed9 */ if (!fZ) goto L_0069eed9;
L_0069eeca:; BB(0x0069eeca);
    /* 0069eeca: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eecc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eece: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eed1u); call_ind(t); }
    /* 0069eed1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eed2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eed4: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eed9u); f_007752dc();
L_0069eed9:; BB(0x0069eed9);
    /* 0069eed9: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eedc: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eee2: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eee7: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eeea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069eeec: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x69eeefu); call_ind(t); }
    /* 0069eeef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069eef2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef3: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eef7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69eefcu); f_00694390();
    /* 0069eefc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069eefd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069eefe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069eeff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ef00: ret  */ FN_RET(0x0069ee27); r_esp += 4; return;
}

void f_0069ee32(void)
{
    FN_ENTER(0x0069ee32);
    /* 0069ee32: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ee34: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ee36: call 0x6a0eb8 */ r_esp -= 4; W32(r_esp, 0x69ee3bu); f_006a0eb8();
    /* 0069ee3b: jmp 0x69ee67 */ goto L_0069ee67;
L_0069ee67:; BB(0x0069ee67);
    /* 0069ee67: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069ee6d: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069ee73: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069ee79: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069ee7f: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee84: je 0x69ee93 */ if (fZ) goto L_0069ee93;
L_0069ee86:; BB(0x0069ee86);
    /* 0069ee86: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069ee8b: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069ee91: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069ee93:; BB(0x0069ee93);
    /* 0069ee93: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69ee98u); f_00687c48();
    /* 0069ee98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee9a: je 0x69eea8 */ if (fZ) goto L_0069eea8;
L_0069ee9c:; BB(0x0069ee9c);
    /* 0069ee9c: mov dword ptr [edi + 0x720], 0x1e */ W32((u32)(r_edi+0x720u), 0x1eu);
    /* 0069eea6: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069eea8:; BB(0x0069eea8);
    /* 0069eea8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069eea9: call 0x6ac848 */ r_esp -= 4; W32(r_esp, 0x69eeaeu); f_006ac848();
    /* 0069eeae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069eeaf: mov dword ptr [edi + 0x720], eax */ W32((u32)(r_edi+0x720u), r_eax);
L_0069eeb5:; BB(0x0069eeb5);
    /* 0069eeb5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eeb7: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eeb9: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eebeu); f_006904cc();
    /* 0069eebe: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eec5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eec8: jne 0x69eed9 */ if (!fZ) goto L_0069eed9;
L_0069eeca:; BB(0x0069eeca);
    /* 0069eeca: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eecc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eece: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eed1u); call_ind(t); }
    /* 0069eed1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eed2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eed4: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eed9u); f_007752dc();
L_0069eed9:; BB(0x0069eed9);
    /* 0069eed9: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eedc: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eee2: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eee7: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eeea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069eeec: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x69eeefu); call_ind(t); }
    /* 0069eeef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069eef2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef3: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eef7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69eefcu); f_00694390();
    /* 0069eefc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069eefd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069eefe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069eeff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ef00: ret  */ FN_RET(0x0069ee32); r_esp += 4; return;
}

void f_0069ee3d(void)
{
    FN_ENTER(0x0069ee3d);
    /* 0069ee3d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ee3f: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ee41: call 0x6a139c */ r_esp -= 4; W32(r_esp, 0x69ee46u); f_006a139c();
    /* 0069ee46: jmp 0x69ee67 */ goto L_0069ee67;
L_0069ee67:; BB(0x0069ee67);
    /* 0069ee67: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069ee6d: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069ee73: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069ee79: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069ee7f: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee84: je 0x69ee93 */ if (fZ) goto L_0069ee93;
L_0069ee86:; BB(0x0069ee86);
    /* 0069ee86: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069ee8b: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069ee91: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069ee93:; BB(0x0069ee93);
    /* 0069ee93: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69ee98u); f_00687c48();
    /* 0069ee98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee9a: je 0x69eea8 */ if (fZ) goto L_0069eea8;
L_0069ee9c:; BB(0x0069ee9c);
    /* 0069ee9c: mov dword ptr [edi + 0x720], 0x1e */ W32((u32)(r_edi+0x720u), 0x1eu);
    /* 0069eea6: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069eea8:; BB(0x0069eea8);
    /* 0069eea8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069eea9: call 0x6ac848 */ r_esp -= 4; W32(r_esp, 0x69eeaeu); f_006ac848();
    /* 0069eeae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069eeaf: mov dword ptr [edi + 0x720], eax */ W32((u32)(r_edi+0x720u), r_eax);
L_0069eeb5:; BB(0x0069eeb5);
    /* 0069eeb5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eeb7: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eeb9: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eebeu); f_006904cc();
    /* 0069eebe: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eec5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eec8: jne 0x69eed9 */ if (!fZ) goto L_0069eed9;
L_0069eeca:; BB(0x0069eeca);
    /* 0069eeca: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eecc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eece: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eed1u); call_ind(t); }
    /* 0069eed1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eed2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eed4: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eed9u); f_007752dc();
L_0069eed9:; BB(0x0069eed9);
    /* 0069eed9: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eedc: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eee2: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eee7: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eeea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069eeec: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x69eeefu); call_ind(t); }
    /* 0069eeef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069eef2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef3: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eef7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69eefcu); f_00694390();
    /* 0069eefc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069eefd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069eefe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069eeff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ef00: ret  */ FN_RET(0x0069ee3d); r_esp += 4; return;
}

void f_0069ee48(void)
{
    FN_ENTER(0x0069ee48);
    /* 0069ee48: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ee4a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ee4c: call 0x6a1a60 */ r_esp -= 4; W32(r_esp, 0x69ee51u); f_006a1a60();
    /* 0069ee51: jmp 0x69ee67 */ goto L_0069ee67;
L_0069ee67:; BB(0x0069ee67);
    /* 0069ee67: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069ee6d: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069ee73: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069ee79: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069ee7f: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee84: je 0x69ee93 */ if (fZ) goto L_0069ee93;
L_0069ee86:; BB(0x0069ee86);
    /* 0069ee86: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069ee8b: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069ee91: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069ee93:; BB(0x0069ee93);
    /* 0069ee93: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69ee98u); f_00687c48();
    /* 0069ee98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee9a: je 0x69eea8 */ if (fZ) goto L_0069eea8;
L_0069ee9c:; BB(0x0069ee9c);
    /* 0069ee9c: mov dword ptr [edi + 0x720], 0x1e */ W32((u32)(r_edi+0x720u), 0x1eu);
    /* 0069eea6: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069eea8:; BB(0x0069eea8);
    /* 0069eea8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069eea9: call 0x6ac848 */ r_esp -= 4; W32(r_esp, 0x69eeaeu); f_006ac848();
    /* 0069eeae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069eeaf: mov dword ptr [edi + 0x720], eax */ W32((u32)(r_edi+0x720u), r_eax);
L_0069eeb5:; BB(0x0069eeb5);
    /* 0069eeb5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eeb7: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eeb9: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eebeu); f_006904cc();
    /* 0069eebe: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eec5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eec8: jne 0x69eed9 */ if (!fZ) goto L_0069eed9;
L_0069eeca:; BB(0x0069eeca);
    /* 0069eeca: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eecc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eece: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eed1u); call_ind(t); }
    /* 0069eed1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eed2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eed4: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eed9u); f_007752dc();
L_0069eed9:; BB(0x0069eed9);
    /* 0069eed9: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eedc: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eee2: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eee7: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eeea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069eeec: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x69eeefu); call_ind(t); }
    /* 0069eeef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069eef2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef3: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eef7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69eefcu); f_00694390();
    /* 0069eefc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069eefd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069eefe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069eeff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ef00: ret  */ FN_RET(0x0069ee48); r_esp += 4; return;
}

void f_0069ee53(void)
{
    FN_ENTER(0x0069ee53);
    /* 0069ee53: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ee55: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ee57: call 0x69b93c */ r_esp -= 4; W32(r_esp, 0x69ee5cu); f_0069b93c();
    /* 0069ee5c: jmp 0x69ee67 */ goto L_0069ee67;
L_0069ee67:; BB(0x0069ee67);
    /* 0069ee67: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069ee6d: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069ee73: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069ee79: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069ee7f: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee84: je 0x69ee93 */ if (fZ) goto L_0069ee93;
L_0069ee86:; BB(0x0069ee86);
    /* 0069ee86: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069ee8b: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069ee91: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069ee93:; BB(0x0069ee93);
    /* 0069ee93: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69ee98u); f_00687c48();
    /* 0069ee98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee9a: je 0x69eea8 */ if (fZ) goto L_0069eea8;
L_0069ee9c:; BB(0x0069ee9c);
    /* 0069ee9c: mov dword ptr [edi + 0x720], 0x1e */ W32((u32)(r_edi+0x720u), 0x1eu);
    /* 0069eea6: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069eea8:; BB(0x0069eea8);
    /* 0069eea8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069eea9: call 0x6ac848 */ r_esp -= 4; W32(r_esp, 0x69eeaeu); f_006ac848();
    /* 0069eeae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069eeaf: mov dword ptr [edi + 0x720], eax */ W32((u32)(r_edi+0x720u), r_eax);
L_0069eeb5:; BB(0x0069eeb5);
    /* 0069eeb5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eeb7: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eeb9: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eebeu); f_006904cc();
    /* 0069eebe: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eec5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eec8: jne 0x69eed9 */ if (!fZ) goto L_0069eed9;
L_0069eeca:; BB(0x0069eeca);
    /* 0069eeca: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eecc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eece: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eed1u); call_ind(t); }
    /* 0069eed1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eed2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eed4: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eed9u); f_007752dc();
L_0069eed9:; BB(0x0069eed9);
    /* 0069eed9: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eedc: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eee2: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eee7: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eeea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069eeec: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x69eeefu); call_ind(t); }
    /* 0069eeef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069eef2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef3: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eef7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69eefcu); f_00694390();
    /* 0069eefc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069eefd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069eefe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069eeff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ef00: ret  */ FN_RET(0x0069ee53); r_esp += 4; return;
}

void f_0069ee5e(void)
{
    FN_ENTER(0x0069ee5e);
    /* 0069ee5e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ee60: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ee62: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x69ee67u); f_006a1ac0();
    /* 0069ee67: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069ee6d: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069ee73: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069ee79: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069ee7f: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee84: je 0x69ee93 */ if (fZ) goto L_0069ee93;
L_0069ee86:; BB(0x0069ee86);
    /* 0069ee86: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069ee8b: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069ee91: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069ee93:; BB(0x0069ee93);
    /* 0069ee93: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69ee98u); f_00687c48();
    /* 0069ee98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee9a: je 0x69eea8 */ if (fZ) goto L_0069eea8;
L_0069ee9c:; BB(0x0069ee9c);
    /* 0069ee9c: mov dword ptr [edi + 0x720], 0x1e */ W32((u32)(r_edi+0x720u), 0x1eu);
    /* 0069eea6: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069eea8:; BB(0x0069eea8);
    /* 0069eea8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069eea9: call 0x6ac848 */ r_esp -= 4; W32(r_esp, 0x69eeaeu); f_006ac848();
    /* 0069eeae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069eeaf: mov dword ptr [edi + 0x720], eax */ W32((u32)(r_edi+0x720u), r_eax);
L_0069eeb5:; BB(0x0069eeb5);
    /* 0069eeb5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eeb7: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eeb9: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eebeu); f_006904cc();
    /* 0069eebe: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eec5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eec8: jne 0x69eed9 */ if (!fZ) goto L_0069eed9;
L_0069eeca:; BB(0x0069eeca);
    /* 0069eeca: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eecc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eece: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eed1u); call_ind(t); }
    /* 0069eed1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eed2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eed4: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eed9u); f_007752dc();
L_0069eed9:; BB(0x0069eed9);
    /* 0069eed9: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eedc: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eee2: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eee7: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eeea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069eeec: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x69eeefu); call_ind(t); }
    /* 0069eeef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069eef2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef3: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eef7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69eefcu); f_00694390();
    /* 0069eefc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069eefd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069eefe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069eeff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ef00: ret  */ FN_RET(0x0069ee5e); r_esp += 4; return;
}

void f_0069ee67(void)
{
    FN_ENTER(0x0069ee67);
    /* 0069ee67: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069ee6d: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069ee73: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069ee79: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069ee7f: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee84: je 0x69ee93 */ if (fZ) goto L_0069ee93;
L_0069ee86:; BB(0x0069ee86);
    /* 0069ee86: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069ee8b: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069ee91: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069ee93:; BB(0x0069ee93);
    /* 0069ee93: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x69ee98u); f_00687c48();
    /* 0069ee98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ee9a: je 0x69eea8 */ if (fZ) goto L_0069eea8;
L_0069ee9c:; BB(0x0069ee9c);
    /* 0069ee9c: mov dword ptr [edi + 0x720], 0x1e */ W32((u32)(r_edi+0x720u), 0x1eu);
    /* 0069eea6: jmp 0x69eeb5 */ goto L_0069eeb5;
L_0069eea8:; BB(0x0069eea8);
    /* 0069eea8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069eea9: call 0x6ac848 */ r_esp -= 4; W32(r_esp, 0x69eeaeu); f_006ac848();
    /* 0069eeae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069eeaf: mov dword ptr [edi + 0x720], eax */ W32((u32)(r_edi+0x720u), r_eax);
L_0069eeb5:; BB(0x0069eeb5);
    /* 0069eeb5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069eeb7: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eeb9: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69eebeu); f_006904cc();
    /* 0069eebe: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069eec5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069eec8: jne 0x69eed9 */ if (!fZ) goto L_0069eed9;
L_0069eeca:; BB(0x0069eeca);
    /* 0069eeca: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069eecc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eece: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x69eed1u); call_ind(t); }
    /* 0069eed1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eed2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eed4: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x69eed9u); f_007752dc();
L_0069eed9:; BB(0x0069eed9);
    /* 0069eed9: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069eedc: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069eee2: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069eee7: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069eeea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069eeec: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x69eeefu); call_ind(t); }
    /* 0069eeef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069eef2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef3: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0069eef5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069eef7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69eefcu); f_00694390();
    /* 0069eefc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069eefd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069eefe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069eeff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ef00: ret  */ FN_RET(0x0069ee67); r_esp += 4; return;
}

void f_0069ef04(void) /* sub_69EF04 */
{
    FN_ENTER(0x0069ef04);
    /* 0069ef04: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 0069ef09: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069ef0c: ja 0x69ef7c */ if ((!fC&&!fZ)) goto L_0069ef7c;
L_0069ef0e:; BB(0x0069ef0e);
    /* 0069ef0e: mov eax, dword ptr [eax*4 + 0x93d244] */ r_eax = R32((u32)(r_eax*4+0x93d244u));
    /* 0069ef15: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0069ef7c:; BB(0x0069ef7c);
    /* 0069ef7c: ret 4 */ FN_RET(0x0069ef04); r_esp += 8; return;
}

void f_0069ef17(void)
{
    FN_ENTER(0x0069ef17);
    /* 0069ef17: call 0x69b720 */ r_esp -= 4; W32(r_esp, 0x69ef1cu); f_0069b720();
    /* 0069ef1c: jmp 0x69ef7c */ goto L_0069ef7c;
L_0069ef7c:; BB(0x0069ef7c);
    /* 0069ef7c: ret 4 */ FN_RET(0x0069ef17); r_esp += 8; return;
}

void f_0069ef1e(void)
{
    FN_ENTER(0x0069ef1e);
    /* 0069ef1e: call 0x69ef80 */ r_esp -= 4; W32(r_esp, 0x69ef23u); f_0069ef80();
    /* 0069ef23: jmp 0x69ef7c */ goto L_0069ef7c;
L_0069ef7c:; BB(0x0069ef7c);
    /* 0069ef7c: ret 4 */ FN_RET(0x0069ef1e); r_esp += 8; return;
}

void f_0069ef25(void)
{
    FN_ENTER(0x0069ef25);
    /* 0069ef25: call 0x69f200 */ r_esp -= 4; W32(r_esp, 0x69ef2au); f_0069f200();
    /* 0069ef2a: jmp 0x69ef7c */ goto L_0069ef7c;
L_0069ef7c:; BB(0x0069ef7c);
    /* 0069ef7c: ret 4 */ FN_RET(0x0069ef25); r_esp += 8; return;
}

void f_0069ef2c(void)
{
    FN_ENTER(0x0069ef2c);
    /* 0069ef2c: mov edx, dword ptr [ecx + 0x634] */ r_edx = R32((u32)(r_ecx+0x634u));
    /* 0069ef32: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069ef34: mov word ptr [0xa9432c], ax */ W16((u32)(0xa9432cu), (u16)r_eax);
    /* 0069ef3a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069ef3c: mov word ptr [0xa94330], ax */ W16((u32)(0xa94330u), (u16)r_eax);
    /* 0069ef42: je 0x69ef7c */ if (fZ) goto L_0069ef7c;
L_0069ef44:; BB(0x0069ef44);
    /* 0069ef44: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 0069ef4a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069ef4c: je 0x69ef55 */ if (fZ) goto L_0069ef55;
L_0069ef4e:; BB(0x0069ef4e);
    /* 0069ef4e: mov eax, 1 */ r_eax = 0x1u;
    /* 0069ef53: jmp 0x69ef57 */ goto L_0069ef57;
L_0069ef55:; BB(0x0069ef55);
    /* 0069ef55: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0069ef57:; BB(0x0069ef57);
    /* 0069ef57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069ef59: jne 0x69ef7c */ if (!fZ) goto L_0069ef7c;
L_0069ef5b:; BB(0x0069ef5b);
    /* 0069ef5b: push 0xa9432c */ { u32 v = 0xa9432cu; r_esp -= 4; W32(r_esp, v); }
    /* 0069ef60: push 0xa94330 */ { u32 v = 0xa94330u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ef65: call 0x70a60c */ r_esp -= 4; W32(r_esp, 0x69ef6au); f_0070a60c();
    /* 0069ef6a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069ef6d: ret 4 */ FN_RET(0x0069ef2c); r_esp += 8; return;
L_0069ef7c:; BB(0x0069ef7c);
    /* 0069ef7c: ret 4 */ FN_RET(0x0069ef2c); r_esp += 8; return;
}

void f_0069ef70(void)
{
    FN_ENTER(0x0069ef70);
    /* 0069ef70: call 0x69efbc */ r_esp -= 4; W32(r_esp, 0x69ef75u); f_0069efbc();
    /* 0069ef75: jmp 0x69ef7c */ goto L_0069ef7c;
L_0069ef7c:; BB(0x0069ef7c);
    /* 0069ef7c: ret 4 */ FN_RET(0x0069ef70); r_esp += 8; return;
}

void f_0069ef77(void)
{
    FN_ENTER(0x0069ef77);
    /* 0069ef77: call 0x69efd4 */ r_esp -= 4; W32(r_esp, 0x69ef7cu); f_0069efd4();
    /* 0069ef7c: ret 4 */ FN_RET(0x0069ef77); r_esp += 8; return;
}

void f_0069ef7c(void)
{
    FN_ENTER(0x0069ef7c);
    /* 0069ef7c: ret 4 */ FN_RET(0x0069ef7c); r_esp += 8; return;
}

void f_0069ef80(void) /* sub_69EF80 */
{
    FN_ENTER(0x0069ef80);
    /* 0069ef80: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069ef83: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ef85: je 0x69ef97 */ if (fZ) goto L_0069ef97;
L_0069ef87:; BB(0x0069ef87);
    /* 0069ef87: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 0069ef8e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ef91: jne 0x69ef97 */ if (!fZ) goto L_0069ef97;
L_0069ef93:; BB(0x0069ef93);
    /* 0069ef93: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069ef96: ret  */ FN_RET(0x0069ef80); r_esp += 4; return;
L_0069ef97:; BB(0x0069ef97);
    /* 0069ef97: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0069ef9b: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 0069ef9e: mov byte ptr [esp], 0x50 */ W8((u32)(r_esp), 0x50u);
    /* 0069efa2: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 0069efa7: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0069efac: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0069efb0: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069efb3: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x69efb8u); f_008003e0();
    /* 0069efb8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069efbb: ret  */ FN_RET(0x0069ef80); r_esp += 4; return;
}

void f_0069efbc(void) /* sub_69EFBC */
{
    FN_ENTER(0x0069efbc);
    /* 0069efbc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069efbd: mov edi, ecx */ r_edi = r_ecx;
    /* 0069efbf: mov ecx, edi */ r_ecx = r_edi;
    /* 0069efc1: call 0x693844 */ r_esp -= 4; W32(r_esp, 0x69efc6u); f_00693844();
    /* 0069efc6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069efc8: jne 0x69efd1 */ if (!fZ) goto L_0069efd1;
L_0069efca:; BB(0x0069efca);
    /* 0069efca: mov ecx, edi */ r_ecx = r_edi;
    /* 0069efcc: call 0x777724 */ r_esp -= 4; W32(r_esp, 0x69efd1u); f_00777724();
L_0069efd1:; BB(0x0069efd1);
    /* 0069efd1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069efd2: ret  */ FN_RET(0x0069efbc); r_esp += 4; return;
}

