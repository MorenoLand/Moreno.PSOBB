#include "protos.h"

void f_0085790e(void) /* __local_unwind2 */
{
    FN_ENTER(0x0085790e);
    /* 0085790e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085790f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00857910: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00857911: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00857915: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00857916: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 00857918: push 0x8578ec */ { u32 v = 0x8578ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0085791d: push dword ptr fs:[0] */ { u32 v = R32((u32)(TEB)); r_esp -= 4; W32(r_esp, v); }
    /* 00857924: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
L_0085792b:; BB(0x0085792b);
    /* 0085792b: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0085792f: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 00857932: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 00857935: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00857938: je 0x857968 */ if (fZ) goto L_00857968;
L_0085793a:; BB(0x0085793a);
    /* 0085793a: cmp esi, dword ptr [esp + 0x24] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085793e: je 0x857968 */ if (fZ) goto L_00857968;
L_00857940:; BB(0x00857940);
    /* 00857940: lea esi, [esi + esi*2] */ r_esi = (u32)(r_esi+r_esi*2);
    /* 00857943: mov ecx, dword ptr [ebx + esi*4] */ r_ecx = R32((u32)(r_ebx+r_esi*4));
    /* 00857946: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0085794a: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 0085794d: cmp dword ptr [ebx + esi*4 + 4], 0 */ {  u32 a = R32((u32)(r_ebx+r_esi*4+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00857952: jne 0x857966 */ if (!fZ) goto L_00857966;
L_00857954:; BB(0x00857954);
    /* 00857954: push 0x101 */ { u32 v = 0x101u; r_esp -= 4; W32(r_esp, v); }
    /* 00857959: mov eax, dword ptr [ebx + esi*4 + 8] */ r_eax = R32((u32)(r_ebx+r_esi*4+0x8u));
    /* 0085795d: call 0x8579a2 */ r_esp -= 4; W32(r_esp, 0x857962u); f_008579a2();
    /* 00857962: call dword ptr [ebx + esi*4 + 8] */ { u32 t = R32((u32)(r_ebx+r_esi*4+0x8u)); r_esp -= 4; W32(r_esp, 0x857966u); call_ind(t); }
L_00857966:; BB(0x00857966);
    /* 00857966: jmp 0x85792b */ goto L_0085792b;
L_00857968:; BB(0x00857968);
    /* 00857968: pop dword ptr fs:[0] */ { u32 v = R32(r_esp); r_esp += 4; W32((u32)(TEB), v); }
    /* 0085796f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00857972: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00857973: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00857974: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00857975: ret  */ FN_RET(0x0085790e); r_esp += 4; return;
}

