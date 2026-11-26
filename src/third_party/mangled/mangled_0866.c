#include "protos.h"

void f_00866196(void) /* ?__CxxUnhandledExceptionFilter@@YGJPAU_EXCEPTION_POINTERS@@@Z */
{
    FN_ENTER(0x00866196);
    /* 00866196: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00866197: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0086619b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0086619d: cmp dword ptr [eax], 0xe06d7363 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0xe06d7363u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008661a3: jne 0x8661c1 */ if (!fZ) goto L_008661c1;
L_008661a5:; BB(0x008661a5);
    /* 008661a5: cmp dword ptr [eax + 0x10], 3 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008661a9: jne 0x8661c1 */ if (!fZ) goto L_008661c1;
L_008661ab:; BB(0x008661ab);
    /* 008661ab: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 008661ae: cmp eax, 0x19930520 */ {  u32 a = r_eax; u32 b = 0x19930520u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008661b3: je 0x8661bc */ if (fZ) goto L_008661bc;
L_008661b5:; BB(0x008661b5);
    /* 008661b5: cmp eax, 0x19930521 */ {  u32 a = r_eax; u32 b = 0x19930521u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008661ba: jne 0x8661c1 */ if (!fZ) goto L_008661c1;
L_008661bc:; BB(0x008661bc);
    /* 008661bc: call 0x85c859 */ r_esp -= 4; W32(r_esp, 0x8661c1u); f_0085c859();
L_008661c1:; BB(0x008661c1);
    /* 008661c1: mov eax, dword ptr [0xae7e5c] */ r_eax = R32((u32)(0xae7e5cu));
    /* 008661c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008661c8: je 0x8661de */ if (fZ) goto L_008661de;
L_008661ca:; BB(0x008661ca);
    /* 008661ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008661cb: call 0x86623c */ r_esp -= 4; W32(r_esp, 0x8661d0u); f_0086623c();
    /* 008661d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008661d2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008661d3: je 0x8661de */ if (fZ) goto L_008661de;
L_008661d5:; BB(0x008661d5);
    /* 008661d5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008661d6: call dword ptr [0xae7e5c] */ { u32 t = R32((u32)(0xae7e5cu)); r_esp -= 4; W32(r_esp, 0x8661dcu); call_ind(t); }
    /* 008661dc: jmp 0x8661e0 */ goto L_008661e0;
L_008661de:; BB(0x008661de);
    /* 008661de: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008661e0:; BB(0x008661e0);
    /* 008661e0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008661e1: ret 4 */ FN_RET(0x00866196); r_esp += 8; return;
}

void f_008661e4(void) /* ?__CxxSetUnhandledExceptionFilter@@YAHXZ */
{
    FN_ENTER(0x008661e4);
    /* 008661e4: push 0x866196 */ { u32 v = 0x866196u; r_esp -= 4; W32(r_esp, v); }
    /* 008661e9: call dword ptr [0x8f82a0] */ { u32 t = R32((u32)(0x8f82a0u)); r_esp -= 4; W32(r_esp, 0x8661efu); call_ind(t); }
    /* 008661ef: mov dword ptr [0xae7e5c], eax */ W32((u32)(0xae7e5cu), r_eax);
    /* 008661f4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008661f6: ret  */ FN_RET(0x008661e4); r_esp += 4; return;
}

void f_00866204(void) /* ?_ValidateRead@@YAHPBXI@Z */
{
    FN_ENTER(0x00866204);
    /* 00866204: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00866205: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00866209: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0086620b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086620f: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00866210: call dword ptr [0x8f82a4] */ { u32 t = R32((u32)(0x8f82a4u)); r_esp -= 4; W32(r_esp, 0x866216u); call_ind(t); }
    /* 00866216: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00866218: je 0x86621c */ if (fZ) goto L_0086621c;
L_0086621a:; BB(0x0086621a);
    /* 0086621a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0086621c:; BB(0x0086621c);
    /* 0086621c: mov eax, esi */ r_eax = r_esi;
    /* 0086621e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086621f: ret  */ FN_RET(0x00866204); r_esp += 4; return;
}

void f_00866220(void) /* ?_ValidateWrite@@YAHPAXI@Z */
{
    FN_ENTER(0x00866220);
    /* 00866220: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00866221: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00866225: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00866227: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086622b: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086622c: call dword ptr [0x8f8244] */ { u32 t = R32((u32)(0x8f8244u)); r_esp -= 4; W32(r_esp, 0x866232u); call_ind(t); }
    /* 00866232: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00866234: je 0x866238 */ if (fZ) goto L_00866238;
L_00866236:; BB(0x00866236);
    /* 00866236: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00866238:; BB(0x00866238);
    /* 00866238: mov eax, esi */ r_eax = r_esi;
    /* 0086623a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086623b: ret  */ FN_RET(0x00866220); r_esp += 4; return;
}

void f_0086623c(void) /* ?_ValidateExecute@@YAHP6GHXZ@Z */
{
    FN_ENTER(0x0086623c);
    /* 0086623c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086623d: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00866241: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00866243: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00866244: call dword ptr [0x8f82a8] */ { u32 t = R32((u32)(0x8f82a8u)); r_esp -= 4; W32(r_esp, 0x86624au); call_ind(t); }
    /* 0086624a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086624c: je 0x866250 */ if (fZ) goto L_00866250;
L_0086624e:; BB(0x0086624e);
    /* 0086624e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00866250:; BB(0x00866250);
    /* 00866250: mov eax, esi */ r_eax = r_esi;
    /* 00866252: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00866253: ret  */ FN_RET(0x0086623c); r_esp += 4; return;
}

