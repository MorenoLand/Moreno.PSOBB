#include "protos.h"

void f_004681e0(void)
{
    FN_ENTER(0x004681e0);
    /* 004681e0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004681e3: mov dword ptr [eax + 0x12130], 0xd */ W32((u32)(r_eax+0x12130u), 0xdu);
    /* 004681ed: jmp 0x46829b */ goto L_0046829b;
L_0046829b:; BB(0x0046829b);
    /* 0046829b: mov dword ptr [eax + 0x12120], 2 */ W32((u32)(r_eax+0x12120u), 0x2u);
    /* 004682a5: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 004682a6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004682a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004682aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004682ac: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004682ae: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x4682b4u); call_ind(t); }
    /* 004682b4: jmp 0x4682d4 */ goto L_004682d4;
L_004682d4:; BB(0x004682d4);
    /* 004682d4: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 004682d5: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004682d8: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 004682db: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 004682de: mov esp, ebp */ r_esp = r_ebp;
    /* 004682e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004682e1: ret 4 */ FN_RET(0x004681e0); r_esp += 8; return;
}

void f_004681f2(void)
{
    FN_ENTER(0x004681f2);
    /* 004681f2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004681f5: mov dword ptr [eax + 0x12130], 0xc */ W32((u32)(r_eax+0x12130u), 0xcu);
    /* 004681ff: jmp 0x46829b */ goto L_0046829b;
L_0046829b:; BB(0x0046829b);
    /* 0046829b: mov dword ptr [eax + 0x12120], 2 */ W32((u32)(r_eax+0x12120u), 0x2u);
    /* 004682a5: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 004682a6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004682a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004682aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004682ac: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004682ae: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x4682b4u); call_ind(t); }
    /* 004682b4: jmp 0x4682d4 */ goto L_004682d4;
L_004682d4:; BB(0x004682d4);
    /* 004682d4: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 004682d5: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004682d8: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 004682db: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 004682de: mov esp, ebp */ r_esp = r_ebp;
    /* 004682e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004682e1: ret 4 */ FN_RET(0x004681f2); r_esp += 8; return;
}

void f_00468204(void)
{
    FN_ENTER(0x00468204);
    /* 00468204: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00468207: mov dword ptr [eax + 0x12130], 0xb */ W32((u32)(r_eax+0x12130u), 0xbu);
    /* 00468211: jmp 0x46829b */ goto L_0046829b;
L_0046829b:; BB(0x0046829b);
    /* 0046829b: mov dword ptr [eax + 0x12120], 2 */ W32((u32)(r_eax+0x12120u), 0x2u);
    /* 004682a5: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 004682a6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004682a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004682aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004682ac: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004682ae: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x4682b4u); call_ind(t); }
    /* 004682b4: jmp 0x4682d4 */ goto L_004682d4;
L_004682d4:; BB(0x004682d4);
    /* 004682d4: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 004682d5: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004682d8: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 004682db: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 004682de: mov esp, ebp */ r_esp = r_ebp;
    /* 004682e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004682e1: ret 4 */ FN_RET(0x00468204); r_esp += 8; return;
}

void f_00468216(void)
{
    FN_ENTER(0x00468216);
    /* 00468216: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00468219: mov dword ptr [eax + 0x12130], 0xa */ W32((u32)(r_eax+0x12130u), 0xau);
    /* 00468223: jmp 0x46829b */ goto L_0046829b;
L_0046829b:; BB(0x0046829b);
    /* 0046829b: mov dword ptr [eax + 0x12120], 2 */ W32((u32)(r_eax+0x12120u), 0x2u);
    /* 004682a5: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 004682a6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004682a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004682aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004682ac: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004682ae: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x4682b4u); call_ind(t); }
    /* 004682b4: jmp 0x4682d4 */ goto L_004682d4;
L_004682d4:; BB(0x004682d4);
    /* 004682d4: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 004682d5: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004682d8: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 004682db: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 004682de: mov esp, ebp */ r_esp = r_ebp;
    /* 004682e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004682e1: ret 4 */ FN_RET(0x00468216); r_esp += 8; return;
}

void f_00468225(void)
{
    FN_ENTER(0x00468225);
    /* 00468225: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00468228: mov dword ptr [eax + 0x12130], 8 */ W32((u32)(r_eax+0x12130u), 0x8u);
    /* 00468232: jmp 0x46829b */ goto L_0046829b;
L_0046829b:; BB(0x0046829b);
    /* 0046829b: mov dword ptr [eax + 0x12120], 2 */ W32((u32)(r_eax+0x12120u), 0x2u);
    /* 004682a5: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 004682a6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004682a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004682aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004682ac: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004682ae: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x4682b4u); call_ind(t); }
    /* 004682b4: jmp 0x4682d4 */ goto L_004682d4;
L_004682d4:; BB(0x004682d4);
    /* 004682d4: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 004682d5: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004682d8: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 004682db: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 004682de: mov esp, ebp */ r_esp = r_ebp;
    /* 004682e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004682e1: ret 4 */ FN_RET(0x00468225); r_esp += 8; return;
}

void f_00468234(void)
{
    FN_ENTER(0x00468234);
    /* 00468234: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00468237: mov dword ptr [eax + 0x12130], 8 */ W32((u32)(r_eax+0x12130u), 0x8u);
    /* 00468241: jmp 0x46829b */ goto L_0046829b;
L_0046829b:; BB(0x0046829b);
    /* 0046829b: mov dword ptr [eax + 0x12120], 2 */ W32((u32)(r_eax+0x12120u), 0x2u);
    /* 004682a5: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 004682a6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004682a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004682aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004682ac: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004682ae: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x4682b4u); call_ind(t); }
    /* 004682b4: jmp 0x4682d4 */ goto L_004682d4;
L_004682d4:; BB(0x004682d4);
    /* 004682d4: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 004682d5: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004682d8: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 004682db: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 004682de: mov esp, ebp */ r_esp = r_ebp;
    /* 004682e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004682e1: ret 4 */ FN_RET(0x00468234); r_esp += 8; return;
}

void f_00468243(void)
{
    FN_ENTER(0x00468243);
    /* 00468243: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00468246: mov dword ptr [eax + 0x12130], 9 */ W32((u32)(r_eax+0x12130u), 0x9u);
    /* 00468250: jmp 0x46829b */ goto L_0046829b;
L_0046829b:; BB(0x0046829b);
    /* 0046829b: mov dword ptr [eax + 0x12120], 2 */ W32((u32)(r_eax+0x12120u), 0x2u);
    /* 004682a5: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 004682a6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004682a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004682aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004682ac: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004682ae: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x4682b4u); call_ind(t); }
    /* 004682b4: jmp 0x4682d4 */ goto L_004682d4;
L_004682d4:; BB(0x004682d4);
    /* 004682d4: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 004682d5: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004682d8: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 004682db: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 004682de: mov esp, ebp */ r_esp = r_ebp;
    /* 004682e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004682e1: ret 4 */ FN_RET(0x00468243); r_esp += 8; return;
}

void f_00468252(void)
{
    FN_ENTER(0x00468252);
    /* 00468252: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00468255: mov dword ptr [eax + 0x12130], 6 */ W32((u32)(r_eax+0x12130u), 0x6u);
    /* 0046825f: jmp 0x46829b */ goto L_0046829b;
L_0046829b:; BB(0x0046829b);
    /* 0046829b: mov dword ptr [eax + 0x12120], 2 */ W32((u32)(r_eax+0x12120u), 0x2u);
    /* 004682a5: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 004682a6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004682a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004682aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004682ac: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004682ae: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x4682b4u); call_ind(t); }
    /* 004682b4: jmp 0x4682d4 */ goto L_004682d4;
L_004682d4:; BB(0x004682d4);
    /* 004682d4: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 004682d5: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004682d8: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 004682db: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 004682de: mov esp, ebp */ r_esp = r_ebp;
    /* 004682e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004682e1: ret 4 */ FN_RET(0x00468252); r_esp += 8; return;
}

void f_00468261(void)
{
    FN_ENTER(0x00468261);
    /* 00468261: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00468264: mov dword ptr [eax + 0x12130], 5 */ W32((u32)(r_eax+0x12130u), 0x5u);
    /* 0046826e: jmp 0x46829b */ goto L_0046829b;
L_0046829b:; BB(0x0046829b);
    /* 0046829b: mov dword ptr [eax + 0x12120], 2 */ W32((u32)(r_eax+0x12120u), 0x2u);
    /* 004682a5: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 004682a6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004682a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004682aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004682ac: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004682ae: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x4682b4u); call_ind(t); }
    /* 004682b4: jmp 0x4682d4 */ goto L_004682d4;
L_004682d4:; BB(0x004682d4);
    /* 004682d4: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 004682d5: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004682d8: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 004682db: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 004682de: mov esp, ebp */ r_esp = r_ebp;
    /* 004682e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004682e1: ret 4 */ FN_RET(0x00468261); r_esp += 8; return;
}

void f_00468270(void)
{
    FN_ENTER(0x00468270);
    /* 00468270: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00468273: mov dword ptr [eax + 0x12130], 4 */ W32((u32)(r_eax+0x12130u), 0x4u);
    /* 0046827d: jmp 0x46829b */ goto L_0046829b;
L_0046829b:; BB(0x0046829b);
    /* 0046829b: mov dword ptr [eax + 0x12120], 2 */ W32((u32)(r_eax+0x12120u), 0x2u);
    /* 004682a5: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 004682a6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004682a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004682aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004682ac: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004682ae: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x4682b4u); call_ind(t); }
    /* 004682b4: jmp 0x4682d4 */ goto L_004682d4;
L_004682d4:; BB(0x004682d4);
    /* 004682d4: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 004682d5: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004682d8: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 004682db: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 004682de: mov esp, ebp */ r_esp = r_ebp;
    /* 004682e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004682e1: ret 4 */ FN_RET(0x00468270); r_esp += 8; return;
}

void f_0046827f(void)
{
    FN_ENTER(0x0046827f);
    /* 0046827f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00468282: mov dword ptr [eax + 0x12130], 3 */ W32((u32)(r_eax+0x12130u), 0x3u);
    /* 0046828c: jmp 0x46829b */ goto L_0046829b;
L_0046829b:; BB(0x0046829b);
    /* 0046829b: mov dword ptr [eax + 0x12120], 2 */ W32((u32)(r_eax+0x12120u), 0x2u);
    /* 004682a5: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 004682a6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004682a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004682aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004682ac: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004682ae: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x4682b4u); call_ind(t); }
    /* 004682b4: jmp 0x4682d4 */ goto L_004682d4;
L_004682d4:; BB(0x004682d4);
    /* 004682d4: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 004682d5: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004682d8: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 004682db: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 004682de: mov esp, ebp */ r_esp = r_ebp;
    /* 004682e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004682e1: ret 4 */ FN_RET(0x0046827f); r_esp += 8; return;
}

void f_004682e4(void) /* sub_4682E4 */
{
    FN_ENTER(0x004682e4);
    /* 004682e4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004682e8: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 004682ec: movsx ecx, byte ptr [esp + 0xc] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esp+0xcu));
    /* 004682f1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004682f2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004682f3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004682f4: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004682f7: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004682fa: mov edi, 0x9006a4 */ r_edi = 0x9006a4u;
    /* 004682ff: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 00468301: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00468304: mov ebx, dword ptr [edi + 4] */ r_ebx = R32((u32)(r_edi+0x4u));
    /* 00468307: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0046830b: mov ebx, dword ptr [edi + 8] */ r_ebx = R32((u32)(r_edi+0x8u));
    /* 0046830e: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00468312: mov ebx, dword ptr [edi + 0xc] */ r_ebx = R32((u32)(r_edi+0xcu));
    /* 00468315: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 00468319: mov ebx, dword ptr [edi + 0x10] */ r_ebx = R32((u32)(r_edi+0x10u));
    /* 0046831c: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00468320: mov ebx, dword ptr [edi + 0x14] */ r_ebx = R32((u32)(r_edi+0x14u));
    /* 00468323: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 00468327: mov ebx, dword ptr [edi + 0x18] */ r_ebx = R32((u32)(r_edi+0x18u));
    /* 0046832a: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0046832e: mov ebx, dword ptr [edi + 0x1c] */ r_ebx = R32((u32)(r_edi+0x1cu));
    /* 00468331: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 00468335: mov ebx, dword ptr [edi + 0x20] */ r_ebx = R32((u32)(r_edi+0x20u));
    /* 00468338: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 0046833c: mov ebx, dword ptr [edi + 0x24] */ r_ebx = R32((u32)(r_edi+0x24u));
    /* 0046833f: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 00468343: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 00468346: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00468348: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0046834a: movsx esi, byte ptr [esp + ebx] */ r_esi = (u32)(i32)(i8)R8((u32)(r_esp+r_ebx));
    /* 0046834e: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00468350: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00468352: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 00468355: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00468357: mov dword ptr [eax + 4], edi */ W32((u32)(r_eax+0x4u), r_edi);
    /* 0046835a: movsx edi, byte ptr [esp + ebx + 1] */ r_edi = (u32)(i32)(i8)R8((u32)(r_esp+r_ebx+0x1u));
    /* 0046835f: lea ecx, [eax + 8] */ r_ecx = (u32)(r_eax+0x8u);
    /* 00468362: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00468364: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 00468366: mov dword ptr [ecx], esi */ W32((u32)(r_ecx), r_esi);
    /* 00468368: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 0046836b: mov dword ptr [ecx + 4], esi */ W32((u32)(r_ecx+0x4u), r_esi);
    /* 0046836e: movsx edi, byte ptr [esp + ebx + 2] */ r_edi = (u32)(i32)(i8)R8((u32)(r_esp+r_ebx+0x2u));
    /* 00468373: lea ecx, [eax + 0x10] */ r_ecx = (u32)(r_eax+0x10u);
    /* 00468376: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00468378: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 0046837a: mov dword ptr [ecx], esi */ W32((u32)(r_ecx), r_esi);
    /* 0046837c: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 0046837f: mov dword ptr [ecx + 4], esi */ W32((u32)(r_ecx+0x4u), r_esi);
    /* 00468382: movsx edi, byte ptr [esp + ebx + 3] */ r_edi = (u32)(i32)(i8)R8((u32)(r_esp+r_ebx+0x3u));
    /* 00468387: lea ecx, [eax + 0x18] */ r_ecx = (u32)(r_eax+0x18u);
    /* 0046838a: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0046838c: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 0046838e: mov dword ptr [ecx], esi */ W32((u32)(r_ecx), r_esi);
    /* 00468390: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 00468393: mov dword ptr [ecx + 4], esi */ W32((u32)(r_ecx+0x4u), r_esi);
    /* 00468396: movsx ecx, byte ptr [esp + ebx + 4] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esp+r_ebx+0x4u));
    /* 0046839b: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046839e: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004683a0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004683a2: mov ebx, dword ptr [ecx + 4] */ r_ebx = R32((u32)(r_ecx+0x4u));
    /* 004683a5: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 004683a7: mov dword ptr [eax + 4], ebx */ W32((u32)(r_eax+0x4u), r_ebx);
    /* 004683aa: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004683ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004683ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004683af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004683b0: ret  */ FN_RET(0x004682e4); r_esp += 4; return;
}

void f_004682f1(void) /* sub_4682F1 */
{
    FN_ENTER(0x004682f1);
    /* 004682f1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004682f2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004682f3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004682f4: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004682f7: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004682fa: mov edi, 0x9006a4 */ r_edi = 0x9006a4u;
    /* 004682ff: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 00468301: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00468304: mov ebx, dword ptr [edi + 4] */ r_ebx = R32((u32)(r_edi+0x4u));
    /* 00468307: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0046830b: mov ebx, dword ptr [edi + 8] */ r_ebx = R32((u32)(r_edi+0x8u));
    /* 0046830e: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00468312: mov ebx, dword ptr [edi + 0xc] */ r_ebx = R32((u32)(r_edi+0xcu));
    /* 00468315: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 00468319: mov ebx, dword ptr [edi + 0x10] */ r_ebx = R32((u32)(r_edi+0x10u));
    /* 0046831c: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00468320: mov ebx, dword ptr [edi + 0x14] */ r_ebx = R32((u32)(r_edi+0x14u));
    /* 00468323: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 00468327: mov ebx, dword ptr [edi + 0x18] */ r_ebx = R32((u32)(r_edi+0x18u));
    /* 0046832a: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0046832e: mov ebx, dword ptr [edi + 0x1c] */ r_ebx = R32((u32)(r_edi+0x1cu));
    /* 00468331: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 00468335: mov ebx, dword ptr [edi + 0x20] */ r_ebx = R32((u32)(r_edi+0x20u));
    /* 00468338: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 0046833c: mov ebx, dword ptr [edi + 0x24] */ r_ebx = R32((u32)(r_edi+0x24u));
    /* 0046833f: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 00468343: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 00468346: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00468348: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0046834a: movsx esi, byte ptr [esp + ebx] */ r_esi = (u32)(i32)(i8)R8((u32)(r_esp+r_ebx));
    /* 0046834e: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00468350: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00468352: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 00468355: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00468357: mov dword ptr [eax + 4], edi */ W32((u32)(r_eax+0x4u), r_edi);
    /* 0046835a: movsx edi, byte ptr [esp + ebx + 1] */ r_edi = (u32)(i32)(i8)R8((u32)(r_esp+r_ebx+0x1u));
    /* 0046835f: lea ecx, [eax + 8] */ r_ecx = (u32)(r_eax+0x8u);
    /* 00468362: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00468364: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 00468366: mov dword ptr [ecx], esi */ W32((u32)(r_ecx), r_esi);
    /* 00468368: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 0046836b: mov dword ptr [ecx + 4], esi */ W32((u32)(r_ecx+0x4u), r_esi);
    /* 0046836e: movsx edi, byte ptr [esp + ebx + 2] */ r_edi = (u32)(i32)(i8)R8((u32)(r_esp+r_ebx+0x2u));
    /* 00468373: lea ecx, [eax + 0x10] */ r_ecx = (u32)(r_eax+0x10u);
    /* 00468376: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00468378: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 0046837a: mov dword ptr [ecx], esi */ W32((u32)(r_ecx), r_esi);
    /* 0046837c: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 0046837f: mov dword ptr [ecx + 4], esi */ W32((u32)(r_ecx+0x4u), r_esi);
    /* 00468382: movsx edi, byte ptr [esp + ebx + 3] */ r_edi = (u32)(i32)(i8)R8((u32)(r_esp+r_ebx+0x3u));
    /* 00468387: lea ecx, [eax + 0x18] */ r_ecx = (u32)(r_eax+0x18u);
    /* 0046838a: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0046838c: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 0046838e: mov dword ptr [ecx], esi */ W32((u32)(r_ecx), r_esi);
    /* 00468390: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 00468393: mov dword ptr [ecx + 4], esi */ W32((u32)(r_ecx+0x4u), r_esi);
    /* 00468396: movsx ecx, byte ptr [esp + ebx + 4] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esp+r_ebx+0x4u));
    /* 0046839b: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046839e: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004683a0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004683a2: mov ebx, dword ptr [ecx + 4] */ r_ebx = R32((u32)(r_ecx+0x4u));
    /* 004683a5: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 004683a7: mov dword ptr [eax + 4], ebx */ W32((u32)(r_eax+0x4u), r_ebx);
    /* 004683aa: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004683ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004683ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004683af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004683b0: ret  */ FN_RET(0x004682f1); r_esp += 4; return;
}

void f_004683b4(void) /* sub_4683B4 */
{
    FN_ENTER(0x004683b4);
    /* 004683b4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004683b5: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004683bb: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004683bd: mov edx, dword ptr [0xa95e48] */ r_edx = R32((u32)(0xa95e48u));
    /* 004683c3: mov byte ptr [esp + 2], 0xe5 */ W8((u32)(r_esp+0x2u), 0xe5u);
    /* 004683c8: mov dword ptr [ebx + 0x1212c], edx */ W32((u32)(r_ebx+0x1212cu), r_edx);
    /* 004683ce: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004683d0: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 004683d4: mov byte ptr [esp + 3], cl */ W8((u32)(r_esp+0x3u), (u8)r_ecx);
    /* 004683d8: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004683dc: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 004683e0: mov eax, 0x88 */ r_eax = 0x88u;
    /* 004683e5: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 004683e9: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004683ee: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x4683f3u); f_006c1bcc();
    /* 004683f3: mov eax, dword ptr [eax + 0x364] */ r_eax = R32((u32)(r_eax+0x364u));
    /* 004683f9: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004683fd: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00468402: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x468407u); f_006c1bcc();
    /* 00468407: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046840a: add eax, 0x370 */ {  u32 a = r_eax; u32 b = 0x370u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046840f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00468411: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00468415: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00468418: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0046841c: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0046841f: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00468423: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00468426: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0046842a: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0046842d: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00468431: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00468434: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00468438: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0046843b: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0046843f: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00468442: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00468446: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00468449: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 0046844d: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00468450: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 00468454: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00468457: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0046845b: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0046845e: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00468462: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00468465: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 00468469: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0046846c: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00468470: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00468473: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 00468477: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0046847a: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 0046847e: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00468481: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 00468485: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00468488: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 0046848c: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0046848f: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 00468493: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 00468496: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 0046849a: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 0046849d: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 004684a1: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 004684a4: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 004684a8: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 004684ab: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 004684af: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 004684b2: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 004684b6: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 004684b9: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 004684bd: mov edx, dword ptr [eax + 0x64] */ r_edx = R32((u32)(r_eax+0x64u));
    /* 004684c0: mov dword ptr [esp + 0x78], edx */ W32((u32)(r_esp+0x78u), r_edx);
    /* 004684c4: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 004684c7: mov eax, dword ptr [eax + 0x6c] */ r_eax = R32((u32)(r_eax+0x6cu));
    /* 004684ca: mov dword ptr [esp + 0x7c], edx */ W32((u32)(r_esp+0x7cu), r_edx);
    /* 004684ce: mov dword ptr [esp + 0x80], eax */ W32((u32)(r_esp+0x80u), r_eax);
    /* 004684d5: movzx edx, word ptr [esp] */ r_edx = (u32)R16((u32)(r_esp));
    /* 004684d9: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004684dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004684dd: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004684df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004684e0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004684e2: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x4684e5u); call_ind(t); }
    /* 004684e5: push dword ptr [ebx + 0x1212c] */ { u32 v = R32((u32)(r_ebx+0x1212cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004684eb: call 0x6c1a80 */ r_esp -= 4; W32(r_esp, 0x4684f0u); f_006c1a80();
    /* 004684f0: add esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004684f6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004684f7: ret  */ FN_RET(0x004683b4); r_esp += 4; return;
}

void f_004684f8(void) /* sub_4684F8 */
{
    FN_ENTER(0x004684f8);
    /* 004684f8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004684fb: mov byte ptr [esp + 2], 0xe0 */ W8((u32)(r_esp+0x2u), 0xe0u);
    /* 00468500: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00468502: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00468506: mov byte ptr [esp + 3], dl */ W8((u32)(r_esp+0x3u), (u8)r_edx);
    /* 0046850a: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0046850d: mov eax, 8 */ r_eax = 0x8u;
    /* 00468512: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 00468516: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00468518: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0046851a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046851b: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x46851eu); call_ind(t); }
    /* 0046851e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00468521: ret  */ FN_RET(0x004684f8); r_esp += 4; return;
}

void f_00468524(void)
{
    FN_ENTER(0x00468524);
    /* 00468524: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00468525: mov ebp, esp */ r_ebp = r_esp;
    /* 00468527: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046852a: mov dword ptr [ebp - 0xc], edi */ W32((u32)(r_ebp+0xfffffff4u), r_edi);
    /* 0046852d: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 00468530: mov dword ptr [ebp - 0x10], ebx */ W32((u32)(r_ebp+0xfffffff0u), r_ebx);
    /* 00468533: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00468536: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 00468537: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00468539: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046853b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046853d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0046853f: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x468545u); call_ind(t); }
    /* 00468545: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 00468546: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 00468547: jmp 0x46b768 */ f_0046b768(); return;
}

