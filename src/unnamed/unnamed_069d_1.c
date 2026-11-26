#include "protos.h"

void f_0069d00c(void)
{
    FN_ENTER(0x0069d00c);
    /* 0069d00c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d00e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d010: call 0x69cd20 */ r_esp -= 4; W32(r_esp, 0x69d015u); f_0069cd20();
    /* 0069d015: jmp 0x69d0fe */ goto L_0069d0fe;
L_0069d0fe:; BB(0x0069d0fe);
    /* 0069d0fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d100: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x69d105u); f_0069d15c();
    /* 0069d105: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d107: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d109: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d10b: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d110u); f_007b52ec();
    /* 0069d110: mov dword ptr [ebx + 0x6fc], 0 */ W32((u32)(r_ebx+0x6fcu), 0x0u);
    /* 0069d11a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d11c: call 0x69357c */ r_esp -= 4; W32(r_esp, 0x69d121u); f_0069357c();
    /* 0069d121: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0069d123: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d125: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x69d128u); call_ind(t); }
    /* 0069d128: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069d12f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d132: jne 0x69d13d */ if (!fZ) goto L_0069d13d;
L_0069d134:; BB(0x0069d134);
    /* 0069d134: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d136: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d138: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d13du); f_006904cc();
L_0069d13d:; BB(0x0069d13d);
    /* 0069d13d: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d142: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d149: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d14b: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d150u); f_0069d1bc();
    /* 0069d150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d151: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d153: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d155: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d15au); f_00694390();
    /* 0069d15a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d15b: ret  */ FN_RET(0x0069d00c); r_esp += 4; return;
}

void f_0069d01a(void)
{
    FN_ENTER(0x0069d01a);
    /* 0069d01a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d01c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d01e: call 0x69d1e4 */ r_esp -= 4; W32(r_esp, 0x69d023u); f_0069d1e4();
    /* 0069d023: jmp 0x69d0fe */ goto L_0069d0fe;
L_0069d0fe:; BB(0x0069d0fe);
    /* 0069d0fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d100: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x69d105u); f_0069d15c();
    /* 0069d105: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d107: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d109: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d10b: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d110u); f_007b52ec();
    /* 0069d110: mov dword ptr [ebx + 0x6fc], 0 */ W32((u32)(r_ebx+0x6fcu), 0x0u);
    /* 0069d11a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d11c: call 0x69357c */ r_esp -= 4; W32(r_esp, 0x69d121u); f_0069357c();
    /* 0069d121: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0069d123: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d125: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x69d128u); call_ind(t); }
    /* 0069d128: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069d12f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d132: jne 0x69d13d */ if (!fZ) goto L_0069d13d;
L_0069d134:; BB(0x0069d134);
    /* 0069d134: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d136: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d138: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d13du); f_006904cc();
L_0069d13d:; BB(0x0069d13d);
    /* 0069d13d: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d142: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d149: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d14b: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d150u); f_0069d1bc();
    /* 0069d150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d151: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d153: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d155: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d15au); f_00694390();
    /* 0069d15a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d15b: ret  */ FN_RET(0x0069d01a); r_esp += 4; return;
}

void f_0069d028(void)
{
    FN_ENTER(0x0069d028);
    /* 0069d028: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d02a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d02c: call 0x69d43c */ r_esp -= 4; W32(r_esp, 0x69d031u); f_0069d43c();
    /* 0069d031: jmp 0x69d0fe */ goto L_0069d0fe;
L_0069d0fe:; BB(0x0069d0fe);
    /* 0069d0fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d100: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x69d105u); f_0069d15c();
    /* 0069d105: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d107: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d109: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d10b: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d110u); f_007b52ec();
    /* 0069d110: mov dword ptr [ebx + 0x6fc], 0 */ W32((u32)(r_ebx+0x6fcu), 0x0u);
    /* 0069d11a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d11c: call 0x69357c */ r_esp -= 4; W32(r_esp, 0x69d121u); f_0069357c();
    /* 0069d121: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0069d123: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d125: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x69d128u); call_ind(t); }
    /* 0069d128: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069d12f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d132: jne 0x69d13d */ if (!fZ) goto L_0069d13d;
L_0069d134:; BB(0x0069d134);
    /* 0069d134: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d136: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d138: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d13du); f_006904cc();
L_0069d13d:; BB(0x0069d13d);
    /* 0069d13d: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d142: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d149: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d14b: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d150u); f_0069d1bc();
    /* 0069d150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d151: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d153: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d155: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d15au); f_00694390();
    /* 0069d15a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d15b: ret  */ FN_RET(0x0069d028); r_esp += 4; return;
}

void f_0069d036(void)
{
    FN_ENTER(0x0069d036);
    /* 0069d036: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d038: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d03a: call 0x69d8f4 */ r_esp -= 4; W32(r_esp, 0x69d03fu); f_0069d8f4();
    /* 0069d03f: jmp 0x69d0fe */ goto L_0069d0fe;
L_0069d0fe:; BB(0x0069d0fe);
    /* 0069d0fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d100: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x69d105u); f_0069d15c();
    /* 0069d105: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d107: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d109: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d10b: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d110u); f_007b52ec();
    /* 0069d110: mov dword ptr [ebx + 0x6fc], 0 */ W32((u32)(r_ebx+0x6fcu), 0x0u);
    /* 0069d11a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d11c: call 0x69357c */ r_esp -= 4; W32(r_esp, 0x69d121u); f_0069357c();
    /* 0069d121: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0069d123: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d125: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x69d128u); call_ind(t); }
    /* 0069d128: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069d12f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d132: jne 0x69d13d */ if (!fZ) goto L_0069d13d;
L_0069d134:; BB(0x0069d134);
    /* 0069d134: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d136: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d138: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d13du); f_006904cc();
L_0069d13d:; BB(0x0069d13d);
    /* 0069d13d: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d142: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d149: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d14b: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d150u); f_0069d1bc();
    /* 0069d150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d151: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d153: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d155: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d15au); f_00694390();
    /* 0069d15a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d15b: ret  */ FN_RET(0x0069d036); r_esp += 4; return;
}

void f_0069d044(void)
{
    FN_ENTER(0x0069d044);
    /* 0069d044: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d046: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d048: call 0x69dd60 */ r_esp -= 4; W32(r_esp, 0x69d04du); f_0069dd60();
    /* 0069d04d: jmp 0x69d0fe */ goto L_0069d0fe;
L_0069d0fe:; BB(0x0069d0fe);
    /* 0069d0fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d100: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x69d105u); f_0069d15c();
    /* 0069d105: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d107: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d109: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d10b: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d110u); f_007b52ec();
    /* 0069d110: mov dword ptr [ebx + 0x6fc], 0 */ W32((u32)(r_ebx+0x6fcu), 0x0u);
    /* 0069d11a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d11c: call 0x69357c */ r_esp -= 4; W32(r_esp, 0x69d121u); f_0069357c();
    /* 0069d121: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0069d123: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d125: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x69d128u); call_ind(t); }
    /* 0069d128: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069d12f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d132: jne 0x69d13d */ if (!fZ) goto L_0069d13d;
L_0069d134:; BB(0x0069d134);
    /* 0069d134: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d136: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d138: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d13du); f_006904cc();
L_0069d13d:; BB(0x0069d13d);
    /* 0069d13d: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d142: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d149: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d14b: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d150u); f_0069d1bc();
    /* 0069d150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d151: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d153: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d155: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d15au); f_00694390();
    /* 0069d15a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d15b: ret  */ FN_RET(0x0069d044); r_esp += 4; return;
}

void f_0069d052(void)
{
    FN_ENTER(0x0069d052);
    /* 0069d052: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d054: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d056: call 0x69e15c */ r_esp -= 4; W32(r_esp, 0x69d05bu); f_0069e15c();
    /* 0069d05b: jmp 0x69d0fe */ goto L_0069d0fe;
L_0069d0fe:; BB(0x0069d0fe);
    /* 0069d0fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d100: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x69d105u); f_0069d15c();
    /* 0069d105: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d107: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d109: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d10b: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d110u); f_007b52ec();
    /* 0069d110: mov dword ptr [ebx + 0x6fc], 0 */ W32((u32)(r_ebx+0x6fcu), 0x0u);
    /* 0069d11a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d11c: call 0x69357c */ r_esp -= 4; W32(r_esp, 0x69d121u); f_0069357c();
    /* 0069d121: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0069d123: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d125: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x69d128u); call_ind(t); }
    /* 0069d128: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069d12f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d132: jne 0x69d13d */ if (!fZ) goto L_0069d13d;
L_0069d134:; BB(0x0069d134);
    /* 0069d134: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d136: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d138: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d13du); f_006904cc();
L_0069d13d:; BB(0x0069d13d);
    /* 0069d13d: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d142: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d149: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d14b: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d150u); f_0069d1bc();
    /* 0069d150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d151: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d153: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d155: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d15au); f_00694390();
    /* 0069d15a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d15b: ret  */ FN_RET(0x0069d052); r_esp += 4; return;
}

void f_0069d060(void)
{
    FN_ENTER(0x0069d060);
    /* 0069d060: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d062: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d064: call 0x69e718 */ r_esp -= 4; W32(r_esp, 0x69d069u); f_0069e718();
    /* 0069d069: jmp 0x69d0fe */ goto L_0069d0fe;
L_0069d0fe:; BB(0x0069d0fe);
    /* 0069d0fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d100: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x69d105u); f_0069d15c();
    /* 0069d105: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d107: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d109: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d10b: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d110u); f_007b52ec();
    /* 0069d110: mov dword ptr [ebx + 0x6fc], 0 */ W32((u32)(r_ebx+0x6fcu), 0x0u);
    /* 0069d11a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d11c: call 0x69357c */ r_esp -= 4; W32(r_esp, 0x69d121u); f_0069357c();
    /* 0069d121: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0069d123: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d125: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x69d128u); call_ind(t); }
    /* 0069d128: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069d12f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d132: jne 0x69d13d */ if (!fZ) goto L_0069d13d;
L_0069d134:; BB(0x0069d134);
    /* 0069d134: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d136: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d138: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d13du); f_006904cc();
L_0069d13d:; BB(0x0069d13d);
    /* 0069d13d: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d142: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d149: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d14b: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d150u); f_0069d1bc();
    /* 0069d150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d151: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d153: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d155: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d15au); f_00694390();
    /* 0069d15a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d15b: ret  */ FN_RET(0x0069d060); r_esp += 4; return;
}

void f_0069d06e(void)
{
    FN_ENTER(0x0069d06e);
    /* 0069d06e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d070: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d072: call 0x69ebc8 */ r_esp -= 4; W32(r_esp, 0x69d077u); f_0069ebc8();
    /* 0069d077: jmp 0x69d0fe */ goto L_0069d0fe;
L_0069d0fe:; BB(0x0069d0fe);
    /* 0069d0fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d100: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x69d105u); f_0069d15c();
    /* 0069d105: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d107: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d109: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d10b: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d110u); f_007b52ec();
    /* 0069d110: mov dword ptr [ebx + 0x6fc], 0 */ W32((u32)(r_ebx+0x6fcu), 0x0u);
    /* 0069d11a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d11c: call 0x69357c */ r_esp -= 4; W32(r_esp, 0x69d121u); f_0069357c();
    /* 0069d121: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0069d123: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d125: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x69d128u); call_ind(t); }
    /* 0069d128: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069d12f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d132: jne 0x69d13d */ if (!fZ) goto L_0069d13d;
L_0069d134:; BB(0x0069d134);
    /* 0069d134: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d136: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d138: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d13du); f_006904cc();
L_0069d13d:; BB(0x0069d13d);
    /* 0069d13d: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d142: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d149: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d14b: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d150u); f_0069d1bc();
    /* 0069d150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d151: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d153: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d155: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d15au); f_00694390();
    /* 0069d15a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d15b: ret  */ FN_RET(0x0069d06e); r_esp += 4; return;
}

void f_0069d07c(void)
{
    FN_ENTER(0x0069d07c);
    /* 0069d07c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d07e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d080: call 0x69ef04 */ r_esp -= 4; W32(r_esp, 0x69d085u); f_0069ef04();
    /* 0069d085: jmp 0x69d0fe */ goto L_0069d0fe;
L_0069d0fe:; BB(0x0069d0fe);
    /* 0069d0fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d100: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x69d105u); f_0069d15c();
    /* 0069d105: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d107: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d109: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d10b: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d110u); f_007b52ec();
    /* 0069d110: mov dword ptr [ebx + 0x6fc], 0 */ W32((u32)(r_ebx+0x6fcu), 0x0u);
    /* 0069d11a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d11c: call 0x69357c */ r_esp -= 4; W32(r_esp, 0x69d121u); f_0069357c();
    /* 0069d121: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0069d123: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d125: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x69d128u); call_ind(t); }
    /* 0069d128: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069d12f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d132: jne 0x69d13d */ if (!fZ) goto L_0069d13d;
L_0069d134:; BB(0x0069d134);
    /* 0069d134: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d136: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d138: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d13du); f_006904cc();
L_0069d13d:; BB(0x0069d13d);
    /* 0069d13d: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d142: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d149: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d14b: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d150u); f_0069d1bc();
    /* 0069d150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d151: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d153: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d155: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d15au); f_00694390();
    /* 0069d15a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d15b: ret  */ FN_RET(0x0069d07c); r_esp += 4; return;
}

void f_0069d087(void)
{
    FN_ENTER(0x0069d087);
    /* 0069d087: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d089: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d08b: call 0x69f148 */ r_esp -= 4; W32(r_esp, 0x69d090u); f_0069f148();
    /* 0069d090: jmp 0x69d0fe */ goto L_0069d0fe;
L_0069d0fe:; BB(0x0069d0fe);
    /* 0069d0fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d100: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x69d105u); f_0069d15c();
    /* 0069d105: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d107: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d109: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d10b: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d110u); f_007b52ec();
    /* 0069d110: mov dword ptr [ebx + 0x6fc], 0 */ W32((u32)(r_ebx+0x6fcu), 0x0u);
    /* 0069d11a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d11c: call 0x69357c */ r_esp -= 4; W32(r_esp, 0x69d121u); f_0069357c();
    /* 0069d121: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0069d123: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d125: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x69d128u); call_ind(t); }
    /* 0069d128: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069d12f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d132: jne 0x69d13d */ if (!fZ) goto L_0069d13d;
L_0069d134:; BB(0x0069d134);
    /* 0069d134: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d136: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d138: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d13du); f_006904cc();
L_0069d13d:; BB(0x0069d13d);
    /* 0069d13d: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d142: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d149: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d14b: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d150u); f_0069d1bc();
    /* 0069d150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d151: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d153: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d155: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d15au); f_00694390();
    /* 0069d15a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d15b: ret  */ FN_RET(0x0069d087); r_esp += 4; return;
}

void f_0069d092(void)
{
    FN_ENTER(0x0069d092);
    /* 0069d092: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d094: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d096: call 0x69f384 */ r_esp -= 4; W32(r_esp, 0x69d09bu); f_0069f384();
    /* 0069d09b: jmp 0x69d0fe */ goto L_0069d0fe;
L_0069d0fe:; BB(0x0069d0fe);
    /* 0069d0fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d100: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x69d105u); f_0069d15c();
    /* 0069d105: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d107: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d109: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d10b: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d110u); f_007b52ec();
    /* 0069d110: mov dword ptr [ebx + 0x6fc], 0 */ W32((u32)(r_ebx+0x6fcu), 0x0u);
    /* 0069d11a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d11c: call 0x69357c */ r_esp -= 4; W32(r_esp, 0x69d121u); f_0069357c();
    /* 0069d121: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0069d123: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d125: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x69d128u); call_ind(t); }
    /* 0069d128: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069d12f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d132: jne 0x69d13d */ if (!fZ) goto L_0069d13d;
L_0069d134:; BB(0x0069d134);
    /* 0069d134: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d136: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d138: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d13du); f_006904cc();
L_0069d13d:; BB(0x0069d13d);
    /* 0069d13d: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d142: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d149: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d14b: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d150u); f_0069d1bc();
    /* 0069d150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d151: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d153: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d155: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d15au); f_00694390();
    /* 0069d15a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d15b: ret  */ FN_RET(0x0069d092); r_esp += 4; return;
}

void f_0069d09d(void)
{
    FN_ENTER(0x0069d09d);
    /* 0069d09d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d09f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d0a1: call 0x69f648 */ r_esp -= 4; W32(r_esp, 0x69d0a6u); f_0069f648();
    /* 0069d0a6: jmp 0x69d0fe */ goto L_0069d0fe;
L_0069d0fe:; BB(0x0069d0fe);
    /* 0069d0fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d100: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x69d105u); f_0069d15c();
    /* 0069d105: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d107: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d109: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d10b: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d110u); f_007b52ec();
    /* 0069d110: mov dword ptr [ebx + 0x6fc], 0 */ W32((u32)(r_ebx+0x6fcu), 0x0u);
    /* 0069d11a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d11c: call 0x69357c */ r_esp -= 4; W32(r_esp, 0x69d121u); f_0069357c();
    /* 0069d121: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0069d123: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d125: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x69d128u); call_ind(t); }
    /* 0069d128: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069d12f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d132: jne 0x69d13d */ if (!fZ) goto L_0069d13d;
L_0069d134:; BB(0x0069d134);
    /* 0069d134: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d136: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d138: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d13du); f_006904cc();
L_0069d13d:; BB(0x0069d13d);
    /* 0069d13d: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d142: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d149: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d14b: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d150u); f_0069d1bc();
    /* 0069d150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d151: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d153: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d155: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d15au); f_00694390();
    /* 0069d15a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d15b: ret  */ FN_RET(0x0069d09d); r_esp += 4; return;
}

void f_0069d0a8(void)
{
    FN_ENTER(0x0069d0a8);
    /* 0069d0a8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d0aa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d0ac: call 0x69fe2c */ r_esp -= 4; W32(r_esp, 0x69d0b1u); f_0069fe2c();
    /* 0069d0b1: jmp 0x69d0fe */ goto L_0069d0fe;
L_0069d0fe:; BB(0x0069d0fe);
    /* 0069d0fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d100: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x69d105u); f_0069d15c();
    /* 0069d105: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d107: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d109: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d10b: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d110u); f_007b52ec();
    /* 0069d110: mov dword ptr [ebx + 0x6fc], 0 */ W32((u32)(r_ebx+0x6fcu), 0x0u);
    /* 0069d11a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d11c: call 0x69357c */ r_esp -= 4; W32(r_esp, 0x69d121u); f_0069357c();
    /* 0069d121: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0069d123: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d125: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x69d128u); call_ind(t); }
    /* 0069d128: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069d12f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d132: jne 0x69d13d */ if (!fZ) goto L_0069d13d;
L_0069d134:; BB(0x0069d134);
    /* 0069d134: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d136: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d138: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d13du); f_006904cc();
L_0069d13d:; BB(0x0069d13d);
    /* 0069d13d: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d142: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d149: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d14b: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d150u); f_0069d1bc();
    /* 0069d150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d151: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d153: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d155: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d15au); f_00694390();
    /* 0069d15a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d15b: ret  */ FN_RET(0x0069d0a8); r_esp += 4; return;
}

void f_0069d0b3(void)
{
    FN_ENTER(0x0069d0b3);
    /* 0069d0b3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d0b5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d0b7: call 0x6a0624 */ r_esp -= 4; W32(r_esp, 0x69d0bcu); f_006a0624();
    /* 0069d0bc: jmp 0x69d0fe */ goto L_0069d0fe;
L_0069d0fe:; BB(0x0069d0fe);
    /* 0069d0fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d100: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x69d105u); f_0069d15c();
    /* 0069d105: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d107: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d109: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d10b: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d110u); f_007b52ec();
    /* 0069d110: mov dword ptr [ebx + 0x6fc], 0 */ W32((u32)(r_ebx+0x6fcu), 0x0u);
    /* 0069d11a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d11c: call 0x69357c */ r_esp -= 4; W32(r_esp, 0x69d121u); f_0069357c();
    /* 0069d121: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0069d123: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d125: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x69d128u); call_ind(t); }
    /* 0069d128: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069d12f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d132: jne 0x69d13d */ if (!fZ) goto L_0069d13d;
L_0069d134:; BB(0x0069d134);
    /* 0069d134: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d136: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d138: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d13du); f_006904cc();
L_0069d13d:; BB(0x0069d13d);
    /* 0069d13d: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d142: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d149: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d14b: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d150u); f_0069d1bc();
    /* 0069d150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d151: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d153: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d155: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d15au); f_00694390();
    /* 0069d15a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d15b: ret  */ FN_RET(0x0069d0b3); r_esp += 4; return;
}

void f_0069d0be(void)
{
    FN_ENTER(0x0069d0be);
    /* 0069d0be: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d0c0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d0c2: call 0x6a0994 */ r_esp -= 4; W32(r_esp, 0x69d0c7u); f_006a0994();
    /* 0069d0c7: jmp 0x69d0fe */ goto L_0069d0fe;
L_0069d0fe:; BB(0x0069d0fe);
    /* 0069d0fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d100: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x69d105u); f_0069d15c();
    /* 0069d105: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d107: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d109: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d10b: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d110u); f_007b52ec();
    /* 0069d110: mov dword ptr [ebx + 0x6fc], 0 */ W32((u32)(r_ebx+0x6fcu), 0x0u);
    /* 0069d11a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d11c: call 0x69357c */ r_esp -= 4; W32(r_esp, 0x69d121u); f_0069357c();
    /* 0069d121: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0069d123: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d125: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x69d128u); call_ind(t); }
    /* 0069d128: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069d12f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d132: jne 0x69d13d */ if (!fZ) goto L_0069d13d;
L_0069d134:; BB(0x0069d134);
    /* 0069d134: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d136: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d138: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d13du); f_006904cc();
L_0069d13d:; BB(0x0069d13d);
    /* 0069d13d: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d142: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d149: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d14b: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d150u); f_0069d1bc();
    /* 0069d150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d151: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d153: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d155: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d15au); f_00694390();
    /* 0069d15a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d15b: ret  */ FN_RET(0x0069d0be); r_esp += 4; return;
}

void f_0069d0c9(void)
{
    FN_ENTER(0x0069d0c9);
    /* 0069d0c9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d0cb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d0cd: call 0x6a0eb8 */ r_esp -= 4; W32(r_esp, 0x69d0d2u); f_006a0eb8();
    /* 0069d0d2: jmp 0x69d0fe */ goto L_0069d0fe;
L_0069d0fe:; BB(0x0069d0fe);
    /* 0069d0fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d100: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x69d105u); f_0069d15c();
    /* 0069d105: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d107: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d109: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d10b: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d110u); f_007b52ec();
    /* 0069d110: mov dword ptr [ebx + 0x6fc], 0 */ W32((u32)(r_ebx+0x6fcu), 0x0u);
    /* 0069d11a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d11c: call 0x69357c */ r_esp -= 4; W32(r_esp, 0x69d121u); f_0069357c();
    /* 0069d121: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0069d123: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d125: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x69d128u); call_ind(t); }
    /* 0069d128: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069d12f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d132: jne 0x69d13d */ if (!fZ) goto L_0069d13d;
L_0069d134:; BB(0x0069d134);
    /* 0069d134: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d136: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d138: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d13du); f_006904cc();
L_0069d13d:; BB(0x0069d13d);
    /* 0069d13d: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d142: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d149: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d14b: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d150u); f_0069d1bc();
    /* 0069d150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d151: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d153: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d155: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d15au); f_00694390();
    /* 0069d15a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d15b: ret  */ FN_RET(0x0069d0c9); r_esp += 4; return;
}

void f_0069d0d4(void)
{
    FN_ENTER(0x0069d0d4);
    /* 0069d0d4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d0d6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d0d8: call 0x6a139c */ r_esp -= 4; W32(r_esp, 0x69d0ddu); f_006a139c();
    /* 0069d0dd: jmp 0x69d0fe */ goto L_0069d0fe;
L_0069d0fe:; BB(0x0069d0fe);
    /* 0069d0fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d100: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x69d105u); f_0069d15c();
    /* 0069d105: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d107: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d109: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d10b: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d110u); f_007b52ec();
    /* 0069d110: mov dword ptr [ebx + 0x6fc], 0 */ W32((u32)(r_ebx+0x6fcu), 0x0u);
    /* 0069d11a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d11c: call 0x69357c */ r_esp -= 4; W32(r_esp, 0x69d121u); f_0069357c();
    /* 0069d121: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0069d123: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d125: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x69d128u); call_ind(t); }
    /* 0069d128: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069d12f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d132: jne 0x69d13d */ if (!fZ) goto L_0069d13d;
L_0069d134:; BB(0x0069d134);
    /* 0069d134: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d136: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d138: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d13du); f_006904cc();
L_0069d13d:; BB(0x0069d13d);
    /* 0069d13d: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d142: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d149: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d14b: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d150u); f_0069d1bc();
    /* 0069d150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d151: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d153: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d155: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d15au); f_00694390();
    /* 0069d15a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d15b: ret  */ FN_RET(0x0069d0d4); r_esp += 4; return;
}

void f_0069d0df(void)
{
    FN_ENTER(0x0069d0df);
    /* 0069d0df: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d0e1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d0e3: call 0x6a1a60 */ r_esp -= 4; W32(r_esp, 0x69d0e8u); f_006a1a60();
    /* 0069d0e8: jmp 0x69d0fe */ goto L_0069d0fe;
L_0069d0fe:; BB(0x0069d0fe);
    /* 0069d0fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d100: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x69d105u); f_0069d15c();
    /* 0069d105: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d107: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d109: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d10b: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d110u); f_007b52ec();
    /* 0069d110: mov dword ptr [ebx + 0x6fc], 0 */ W32((u32)(r_ebx+0x6fcu), 0x0u);
    /* 0069d11a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d11c: call 0x69357c */ r_esp -= 4; W32(r_esp, 0x69d121u); f_0069357c();
    /* 0069d121: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0069d123: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d125: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x69d128u); call_ind(t); }
    /* 0069d128: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069d12f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d132: jne 0x69d13d */ if (!fZ) goto L_0069d13d;
L_0069d134:; BB(0x0069d134);
    /* 0069d134: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d136: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d138: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d13du); f_006904cc();
L_0069d13d:; BB(0x0069d13d);
    /* 0069d13d: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d142: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d149: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d14b: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d150u); f_0069d1bc();
    /* 0069d150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d151: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d153: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d155: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d15au); f_00694390();
    /* 0069d15a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d15b: ret  */ FN_RET(0x0069d0df); r_esp += 4; return;
}

void f_0069d0ea(void)
{
    FN_ENTER(0x0069d0ea);
    /* 0069d0ea: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d0ec: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d0ee: call 0x69b93c */ r_esp -= 4; W32(r_esp, 0x69d0f3u); f_0069b93c();
    /* 0069d0f3: jmp 0x69d0fe */ goto L_0069d0fe;
L_0069d0fe:; BB(0x0069d0fe);
    /* 0069d0fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d100: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x69d105u); f_0069d15c();
    /* 0069d105: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d107: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d109: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d10b: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d110u); f_007b52ec();
    /* 0069d110: mov dword ptr [ebx + 0x6fc], 0 */ W32((u32)(r_ebx+0x6fcu), 0x0u);
    /* 0069d11a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d11c: call 0x69357c */ r_esp -= 4; W32(r_esp, 0x69d121u); f_0069357c();
    /* 0069d121: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0069d123: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d125: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x69d128u); call_ind(t); }
    /* 0069d128: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069d12f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d132: jne 0x69d13d */ if (!fZ) goto L_0069d13d;
L_0069d134:; BB(0x0069d134);
    /* 0069d134: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d136: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d138: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d13du); f_006904cc();
L_0069d13d:; BB(0x0069d13d);
    /* 0069d13d: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d142: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d149: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d14b: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d150u); f_0069d1bc();
    /* 0069d150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d151: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d153: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d155: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d15au); f_00694390();
    /* 0069d15a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d15b: ret  */ FN_RET(0x0069d0ea); r_esp += 4; return;
}

void f_0069d0f5(void)
{
    FN_ENTER(0x0069d0f5);
    /* 0069d0f5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d0f7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d0f9: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x69d0feu); f_006a1ac0();
    /* 0069d0fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d100: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x69d105u); f_0069d15c();
    /* 0069d105: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d107: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d109: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d10b: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d110u); f_007b52ec();
    /* 0069d110: mov dword ptr [ebx + 0x6fc], 0 */ W32((u32)(r_ebx+0x6fcu), 0x0u);
    /* 0069d11a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d11c: call 0x69357c */ r_esp -= 4; W32(r_esp, 0x69d121u); f_0069357c();
    /* 0069d121: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0069d123: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d125: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x69d128u); call_ind(t); }
    /* 0069d128: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069d12f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d132: jne 0x69d13d */ if (!fZ) goto L_0069d13d;
L_0069d134:; BB(0x0069d134);
    /* 0069d134: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d136: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d138: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d13du); f_006904cc();
L_0069d13d:; BB(0x0069d13d);
    /* 0069d13d: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d142: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d149: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d14b: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d150u); f_0069d1bc();
    /* 0069d150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d151: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d153: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d155: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d15au); f_00694390();
    /* 0069d15a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d15b: ret  */ FN_RET(0x0069d0f5); r_esp += 4; return;
}

void f_0069d0fe(void)
{
    FN_ENTER(0x0069d0fe);
    /* 0069d0fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d100: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x69d105u); f_0069d15c();
    /* 0069d105: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d107: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d109: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d10b: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d110u); f_007b52ec();
    /* 0069d110: mov dword ptr [ebx + 0x6fc], 0 */ W32((u32)(r_ebx+0x6fcu), 0x0u);
    /* 0069d11a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d11c: call 0x69357c */ r_esp -= 4; W32(r_esp, 0x69d121u); f_0069357c();
    /* 0069d121: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0069d123: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d125: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x69d128u); call_ind(t); }
    /* 0069d128: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069d12f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d132: jne 0x69d13d */ if (!fZ) goto L_0069d13d;
L_0069d134:; BB(0x0069d134);
    /* 0069d134: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d136: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d138: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d13du); f_006904cc();
L_0069d13d:; BB(0x0069d13d);
    /* 0069d13d: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d142: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d149: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d14b: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d150u); f_0069d1bc();
    /* 0069d150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d151: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d153: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d155: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d15au); f_00694390();
    /* 0069d15a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d15b: ret  */ FN_RET(0x0069d0fe); r_esp += 4; return;
}

void f_0069d15c(void) /* sub_69D15C */
{
    FN_ENTER(0x0069d15c);
    /* 0069d15c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069d15d: mov edi, ecx */ r_edi = r_ecx;
    /* 0069d15f: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069d162: mov edx, dword ptr [edi + 0x33c] */ r_edx = R32((u32)(r_edi+0x33cu));
    /* 0069d168: mov dword ptr [edi + 0x6bc], 0 */ W32((u32)(r_edi+0x6bcu), 0x0u);
    /* 0069d172: and eax, 0xfffff0ff */ {  u32 a = r_eax; u32 b = 0xfffff0ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069d177: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069d17a: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0069d180: and edx, 0xffffff7f */ {  u32 a = r_edx; u32 b = 0xffffff7fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0069d186: mov dword ptr [edi + 0x33c], edx */ W32((u32)(r_edi+0x33cu), r_edx);
    /* 0069d18c: and eax, 0xffffffbf */ {  u32 a = r_eax; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069d18f: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 0069d195: mov ecx, edi */ r_ecx = r_edi;
    /* 0069d197: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d19cu); f_0077774c();
    /* 0069d19c: mov dword ptr [edi + 0x6d4], 0 */ W32((u32)(r_edi+0x6d4u), 0x0u);
    /* 0069d1a6: mov dword ptr [edi + 0x6d8], 0 */ W32((u32)(r_edi+0x6d8u), 0x0u);
    /* 0069d1b0: mov dword ptr [edi + 0x6dc], 0 */ W32((u32)(r_edi+0x6dcu), 0x0u);
    /* 0069d1ba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069d1bb: ret  */ FN_RET(0x0069d15c); r_esp += 4; return;
}

void f_0069d1bc(void) /* sub_69D1BC */
{
    FN_ENTER(0x0069d1bc);
    /* 0069d1bc: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0069d1bf: test eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d1c4: je 0x69d1d5 */ if (fZ) goto L_0069d1d5;
L_0069d1c6:; BB(0x0069d1c6);
    /* 0069d1c6: mov ecx, dword ptr [ecx + 0x38c] */ r_ecx = R32((u32)(r_ecx+0x38cu));
    /* 0069d1cc: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069d1ce: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x69d1d1u); call_ind(t); }
    /* 0069d1d1: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069d1d4: ret  */ FN_RET(0x0069d1bc); r_esp += 4; return;
L_0069d1d5:; BB(0x0069d1d5);
    /* 0069d1d5: mov ecx, dword ptr [ecx + 0x38c] */ r_ecx = R32((u32)(r_ecx+0x38cu));
    /* 0069d1db: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069d1dd: call dword ptr [eax + 0x54] */ { u32 t = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, 0x69d1e0u); call_ind(t); }
    /* 0069d1e0: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069d1e3: ret  */ FN_RET(0x0069d1bc); r_esp += 4; return;
}

void f_0069d1e4(void) /* sub_69D1E4 */
{
    FN_ENTER(0x0069d1e4);
    /* 0069d1e4: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 0069d1e9: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069d1ec: ja 0x69d25c */ if ((!fC&&!fZ)) goto L_0069d25c;
L_0069d1ee:; BB(0x0069d1ee);
    /* 0069d1ee: mov eax, dword ptr [eax*4 + 0x93cd64] */ r_eax = R32((u32)(r_eax*4+0x93cd64u));
    /* 0069d1f5: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0069d25c:; BB(0x0069d25c);
    /* 0069d25c: ret 4 */ FN_RET(0x0069d1e4); r_esp += 8; return;
}

void f_0069d1f7(void)
{
    FN_ENTER(0x0069d1f7);
    /* 0069d1f7: call 0x6a2918 */ r_esp -= 4; W32(r_esp, 0x69d1fcu); f_006a2918();
    /* 0069d1fc: jmp 0x69d25c */ goto L_0069d25c;
L_0069d25c:; BB(0x0069d25c);
    /* 0069d25c: ret 4 */ FN_RET(0x0069d1f7); r_esp += 8; return;
}

void f_0069d1fe(void)
{
    FN_ENTER(0x0069d1fe);
    /* 0069d1fe: call 0x69d260 */ r_esp -= 4; W32(r_esp, 0x69d203u); f_0069d260();
    /* 0069d203: jmp 0x69d25c */ goto L_0069d25c;
L_0069d25c:; BB(0x0069d25c);
    /* 0069d25c: ret 4 */ FN_RET(0x0069d1fe); r_esp += 8; return;
}

void f_0069d205(void)
{
    FN_ENTER(0x0069d205);
    /* 0069d205: call 0x69cdf0 */ r_esp -= 4; W32(r_esp, 0x69d20au); f_0069cdf0();
    /* 0069d20a: jmp 0x69d25c */ goto L_0069d25c;
L_0069d25c:; BB(0x0069d25c);
    /* 0069d25c: ret 4 */ FN_RET(0x0069d205); r_esp += 8; return;
}

void f_0069d20c(void)
{
    FN_ENTER(0x0069d20c);
    /* 0069d20c: mov edx, dword ptr [ecx + 0x634] */ r_edx = R32((u32)(r_ecx+0x634u));
    /* 0069d212: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069d214: mov word ptr [0xa9432c], ax */ W16((u32)(0xa9432cu), (u16)r_eax);
    /* 0069d21a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069d21c: mov word ptr [0xa94330], ax */ W16((u32)(0xa94330u), (u16)r_eax);
    /* 0069d222: je 0x69d25c */ if (fZ) goto L_0069d25c;
L_0069d224:; BB(0x0069d224);
    /* 0069d224: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 0069d22a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069d22c: je 0x69d235 */ if (fZ) goto L_0069d235;
L_0069d22e:; BB(0x0069d22e);
    /* 0069d22e: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d233: jmp 0x69d237 */ goto L_0069d237;
L_0069d235:; BB(0x0069d235);
    /* 0069d235: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0069d237:; BB(0x0069d237);
    /* 0069d237: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069d239: jne 0x69d25c */ if (!fZ) goto L_0069d25c;
L_0069d23b:; BB(0x0069d23b);
    /* 0069d23b: push 0xa9432c */ { u32 v = 0xa9432cu; r_esp -= 4; W32(r_esp, v); }
    /* 0069d240: push 0xa94330 */ { u32 v = 0xa94330u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d245: call 0x70a60c */ r_esp -= 4; W32(r_esp, 0x69d24au); f_0070a60c();
    /* 0069d24a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069d24d: ret 4 */ FN_RET(0x0069d20c); r_esp += 8; return;
L_0069d25c:; BB(0x0069d25c);
    /* 0069d25c: ret 4 */ FN_RET(0x0069d20c); r_esp += 8; return;
}

void f_0069d250(void)
{
    FN_ENTER(0x0069d250);
    /* 0069d250: call 0x69ce04 */ r_esp -= 4; W32(r_esp, 0x69d255u); f_0069ce04();
    /* 0069d255: jmp 0x69d25c */ goto L_0069d25c;
L_0069d25c:; BB(0x0069d25c);
    /* 0069d25c: ret 4 */ FN_RET(0x0069d250); r_esp += 8; return;
}

void f_0069d257(void)
{
    FN_ENTER(0x0069d257);
    /* 0069d257: call 0x69d2c0 */ r_esp -= 4; W32(r_esp, 0x69d25cu); f_0069d2c0();
    /* 0069d25c: ret 4 */ FN_RET(0x0069d257); r_esp += 8; return;
}

void f_0069d25c(void)
{
    FN_ENTER(0x0069d25c);
    /* 0069d25c: ret 4 */ FN_RET(0x0069d25c); r_esp += 8; return;
}

void f_0069d260(void) /* sub_69D260 */
{
    FN_ENTER(0x0069d260);
    /* 0069d260: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069d263: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d265: je 0x69d277 */ if (fZ) goto L_0069d277;
L_0069d267:; BB(0x0069d267);
    /* 0069d267: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 0069d26e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d271: jne 0x69d277 */ if (!fZ) goto L_0069d277;
L_0069d273:; BB(0x0069d273);
    /* 0069d273: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069d276: ret  */ FN_RET(0x0069d260); r_esp += 4; return;
L_0069d277:; BB(0x0069d277);
    /* 0069d277: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0069d27b: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0069d27e: mov byte ptr [esp], 0x55 */ W8((u32)(r_esp), 0x55u);
    /* 0069d282: mov byte ptr [esp + 1], 8 */ W8((u32)(r_esp+0x1u), 0x8u);
    /* 0069d287: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0069d28c: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 0069d28f: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0069d293: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0069d296: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 0069d299: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0069d29d: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0069d2a1: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0069d2a5: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0069d2a9: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0069d2ad: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 0069d2b1: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069d2b4: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x69d2b9u); f_008003e0();
    /* 0069d2b9: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069d2bc: ret  */ FN_RET(0x0069d260); r_esp += 4; return;
}

void f_0069d2c0(void) /* sub_69D2C0 */
{
    FN_ENTER(0x0069d2c0);
    /* 0069d2c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069d2c1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0069d2c3: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0069d2ca: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0069d2cd: mov dword ptr [ebx + 0x348], 0x14 */ W32((u32)(r_ebx+0x348u), 0x14u);
    /* 0069d2d7: ja 0x69d402 */ if ((!fC&&!fZ)) goto L_0069d402;
L_0069d2dd:; BB(0x0069d2dd);
    /* 0069d2dd: mov eax, dword ptr [eax*4 + 0x93cda0] */ r_eax = R32((u32)(r_eax*4+0x93cda0u));
    /* 0069d2e4: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0069d402:; BB(0x0069d402);
    /* 0069d402: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d404: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d409u); f_0077774c();
    /* 0069d409: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d40f: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d414u); f_007b52ec();
    /* 0069d414: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d416: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069d418: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d41f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d421: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d426u); f_006904cc();
    /* 0069d426: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d428: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d42du); f_0069d1bc();
    /* 0069d42d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d42e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d430: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d432: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d437u); f_00694390();
    /* 0069d437: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d438: ret  */ FN_RET(0x0069d2c0); r_esp += 4; return;
}

void f_0069d2e6(void)
{
    FN_ENTER(0x0069d2e6);
    /* 0069d2e6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d2e8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d2ea: call 0x69bdf0 */ r_esp -= 4; W32(r_esp, 0x69d2efu); f_0069bdf0();
    /* 0069d2ef: jmp 0x69d402 */ goto L_0069d402;
L_0069d402:; BB(0x0069d402);
    /* 0069d402: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d404: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d409u); f_0077774c();
    /* 0069d409: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d40f: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d414u); f_007b52ec();
    /* 0069d414: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d416: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069d418: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d41f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d421: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d426u); f_006904cc();
    /* 0069d426: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d428: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d42du); f_0069d1bc();
    /* 0069d42d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d42e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d430: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d432: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d437u); f_00694390();
    /* 0069d437: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d438: ret  */ FN_RET(0x0069d2e6); r_esp += 4; return;
}

void f_0069d2f4(void)
{
    FN_ENTER(0x0069d2f4);
    /* 0069d2f4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d2f6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d2f8: call 0x69c6c0 */ r_esp -= 4; W32(r_esp, 0x69d2fdu); f_0069c6c0();
    /* 0069d2fd: jmp 0x69d402 */ goto L_0069d402;
L_0069d402:; BB(0x0069d402);
    /* 0069d402: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d404: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d409u); f_0077774c();
    /* 0069d409: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d40f: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d414u); f_007b52ec();
    /* 0069d414: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d416: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069d418: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d41f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d421: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d426u); f_006904cc();
    /* 0069d426: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d428: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d42du); f_0069d1bc();
    /* 0069d42d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d42e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d430: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d432: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d437u); f_00694390();
    /* 0069d437: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d438: ret  */ FN_RET(0x0069d2f4); r_esp += 4; return;
}

void f_0069d302(void)
{
    FN_ENTER(0x0069d302);
    /* 0069d302: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d304: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d306: call 0x69c988 */ r_esp -= 4; W32(r_esp, 0x69d30bu); f_0069c988();
    /* 0069d30b: jmp 0x69d402 */ goto L_0069d402;
L_0069d402:; BB(0x0069d402);
    /* 0069d402: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d404: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d409u); f_0077774c();
    /* 0069d409: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d40f: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d414u); f_007b52ec();
    /* 0069d414: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d416: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069d418: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d41f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d421: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d426u); f_006904cc();
    /* 0069d426: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d428: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d42du); f_0069d1bc();
    /* 0069d42d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d42e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d430: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d432: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d437u); f_00694390();
    /* 0069d437: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d438: ret  */ FN_RET(0x0069d302); r_esp += 4; return;
}

void f_0069d310(void)
{
    FN_ENTER(0x0069d310);
    /* 0069d310: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d312: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d314: call 0x69cd20 */ r_esp -= 4; W32(r_esp, 0x69d319u); f_0069cd20();
    /* 0069d319: jmp 0x69d402 */ goto L_0069d402;
L_0069d402:; BB(0x0069d402);
    /* 0069d402: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d404: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d409u); f_0077774c();
    /* 0069d409: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d40f: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d414u); f_007b52ec();
    /* 0069d414: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d416: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069d418: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d41f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d421: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d426u); f_006904cc();
    /* 0069d426: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d428: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d42du); f_0069d1bc();
    /* 0069d42d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d42e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d430: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d432: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d437u); f_00694390();
    /* 0069d437: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d438: ret  */ FN_RET(0x0069d310); r_esp += 4; return;
}

void f_0069d31e(void)
{
    FN_ENTER(0x0069d31e);
    /* 0069d31e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d320: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d322: call 0x69d1e4 */ r_esp -= 4; W32(r_esp, 0x69d327u); f_0069d1e4();
    /* 0069d327: jmp 0x69d402 */ goto L_0069d402;
L_0069d402:; BB(0x0069d402);
    /* 0069d402: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d404: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d409u); f_0077774c();
    /* 0069d409: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d40f: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d414u); f_007b52ec();
    /* 0069d414: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d416: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069d418: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d41f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d421: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d426u); f_006904cc();
    /* 0069d426: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d428: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d42du); f_0069d1bc();
    /* 0069d42d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d42e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d430: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d432: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d437u); f_00694390();
    /* 0069d437: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d438: ret  */ FN_RET(0x0069d31e); r_esp += 4; return;
}

void f_0069d32c(void)
{
    FN_ENTER(0x0069d32c);
    /* 0069d32c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d32e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d330: call 0x69d43c */ r_esp -= 4; W32(r_esp, 0x69d335u); f_0069d43c();
    /* 0069d335: jmp 0x69d402 */ goto L_0069d402;
L_0069d402:; BB(0x0069d402);
    /* 0069d402: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d404: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d409u); f_0077774c();
    /* 0069d409: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d40f: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d414u); f_007b52ec();
    /* 0069d414: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d416: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069d418: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d41f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d421: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d426u); f_006904cc();
    /* 0069d426: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d428: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d42du); f_0069d1bc();
    /* 0069d42d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d42e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d430: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d432: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d437u); f_00694390();
    /* 0069d437: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d438: ret  */ FN_RET(0x0069d32c); r_esp += 4; return;
}

void f_0069d33a(void)
{
    FN_ENTER(0x0069d33a);
    /* 0069d33a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d33c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d33e: call 0x69d8f4 */ r_esp -= 4; W32(r_esp, 0x69d343u); f_0069d8f4();
    /* 0069d343: jmp 0x69d402 */ goto L_0069d402;
L_0069d402:; BB(0x0069d402);
    /* 0069d402: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d404: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d409u); f_0077774c();
    /* 0069d409: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d40f: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d414u); f_007b52ec();
    /* 0069d414: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d416: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069d418: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d41f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d421: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d426u); f_006904cc();
    /* 0069d426: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d428: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d42du); f_0069d1bc();
    /* 0069d42d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d42e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d430: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d432: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d437u); f_00694390();
    /* 0069d437: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d438: ret  */ FN_RET(0x0069d33a); r_esp += 4; return;
}

void f_0069d348(void)
{
    FN_ENTER(0x0069d348);
    /* 0069d348: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d34a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d34c: call 0x69dd60 */ r_esp -= 4; W32(r_esp, 0x69d351u); f_0069dd60();
    /* 0069d351: jmp 0x69d402 */ goto L_0069d402;
L_0069d402:; BB(0x0069d402);
    /* 0069d402: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d404: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d409u); f_0077774c();
    /* 0069d409: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d40f: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d414u); f_007b52ec();
    /* 0069d414: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d416: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069d418: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d41f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d421: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d426u); f_006904cc();
    /* 0069d426: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d428: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d42du); f_0069d1bc();
    /* 0069d42d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d42e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d430: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d432: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d437u); f_00694390();
    /* 0069d437: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d438: ret  */ FN_RET(0x0069d348); r_esp += 4; return;
}

void f_0069d356(void)
{
    FN_ENTER(0x0069d356);
    /* 0069d356: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d358: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d35a: call 0x69e15c */ r_esp -= 4; W32(r_esp, 0x69d35fu); f_0069e15c();
    /* 0069d35f: jmp 0x69d402 */ goto L_0069d402;
L_0069d402:; BB(0x0069d402);
    /* 0069d402: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d404: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d409u); f_0077774c();
    /* 0069d409: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d40f: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d414u); f_007b52ec();
    /* 0069d414: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d416: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069d418: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d41f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d421: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d426u); f_006904cc();
    /* 0069d426: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d428: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d42du); f_0069d1bc();
    /* 0069d42d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d42e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d430: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d432: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d437u); f_00694390();
    /* 0069d437: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d438: ret  */ FN_RET(0x0069d356); r_esp += 4; return;
}

void f_0069d364(void)
{
    FN_ENTER(0x0069d364);
    /* 0069d364: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d366: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d368: call 0x69e718 */ r_esp -= 4; W32(r_esp, 0x69d36du); f_0069e718();
    /* 0069d36d: jmp 0x69d402 */ goto L_0069d402;
L_0069d402:; BB(0x0069d402);
    /* 0069d402: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d404: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d409u); f_0077774c();
    /* 0069d409: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d40f: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d414u); f_007b52ec();
    /* 0069d414: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d416: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069d418: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d41f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d421: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d426u); f_006904cc();
    /* 0069d426: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d428: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d42du); f_0069d1bc();
    /* 0069d42d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d42e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d430: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d432: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d437u); f_00694390();
    /* 0069d437: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d438: ret  */ FN_RET(0x0069d364); r_esp += 4; return;
}

void f_0069d372(void)
{
    FN_ENTER(0x0069d372);
    /* 0069d372: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d374: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d376: call 0x69ebc8 */ r_esp -= 4; W32(r_esp, 0x69d37bu); f_0069ebc8();
    /* 0069d37b: jmp 0x69d402 */ goto L_0069d402;
L_0069d402:; BB(0x0069d402);
    /* 0069d402: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d404: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d409u); f_0077774c();
    /* 0069d409: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d40f: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d414u); f_007b52ec();
    /* 0069d414: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d416: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069d418: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d41f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d421: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d426u); f_006904cc();
    /* 0069d426: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d428: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d42du); f_0069d1bc();
    /* 0069d42d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d42e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d430: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d432: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d437u); f_00694390();
    /* 0069d437: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d438: ret  */ FN_RET(0x0069d372); r_esp += 4; return;
}

void f_0069d380(void)
{
    FN_ENTER(0x0069d380);
    /* 0069d380: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d382: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d384: call 0x69ef04 */ r_esp -= 4; W32(r_esp, 0x69d389u); f_0069ef04();
    /* 0069d389: jmp 0x69d402 */ goto L_0069d402;
L_0069d402:; BB(0x0069d402);
    /* 0069d402: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d404: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d409u); f_0077774c();
    /* 0069d409: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d40f: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d414u); f_007b52ec();
    /* 0069d414: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d416: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069d418: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d41f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d421: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d426u); f_006904cc();
    /* 0069d426: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d428: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d42du); f_0069d1bc();
    /* 0069d42d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d42e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d430: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d432: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d437u); f_00694390();
    /* 0069d437: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d438: ret  */ FN_RET(0x0069d380); r_esp += 4; return;
}

void f_0069d38b(void)
{
    FN_ENTER(0x0069d38b);
    /* 0069d38b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d38d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d38f: call 0x69f148 */ r_esp -= 4; W32(r_esp, 0x69d394u); f_0069f148();
    /* 0069d394: jmp 0x69d402 */ goto L_0069d402;
L_0069d402:; BB(0x0069d402);
    /* 0069d402: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d404: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d409u); f_0077774c();
    /* 0069d409: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d40f: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d414u); f_007b52ec();
    /* 0069d414: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d416: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069d418: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d41f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d421: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d426u); f_006904cc();
    /* 0069d426: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d428: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d42du); f_0069d1bc();
    /* 0069d42d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d42e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d430: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d432: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d437u); f_00694390();
    /* 0069d437: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d438: ret  */ FN_RET(0x0069d38b); r_esp += 4; return;
}

void f_0069d396(void)
{
    FN_ENTER(0x0069d396);
    /* 0069d396: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d398: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d39a: call 0x69f384 */ r_esp -= 4; W32(r_esp, 0x69d39fu); f_0069f384();
    /* 0069d39f: jmp 0x69d402 */ goto L_0069d402;
L_0069d402:; BB(0x0069d402);
    /* 0069d402: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d404: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d409u); f_0077774c();
    /* 0069d409: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d40f: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d414u); f_007b52ec();
    /* 0069d414: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d416: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069d418: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d41f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d421: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d426u); f_006904cc();
    /* 0069d426: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d428: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d42du); f_0069d1bc();
    /* 0069d42d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d42e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d430: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d432: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d437u); f_00694390();
    /* 0069d437: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d438: ret  */ FN_RET(0x0069d396); r_esp += 4; return;
}

void f_0069d3a1(void)
{
    FN_ENTER(0x0069d3a1);
    /* 0069d3a1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d3a3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d3a5: call 0x69f648 */ r_esp -= 4; W32(r_esp, 0x69d3aau); f_0069f648();
    /* 0069d3aa: jmp 0x69d402 */ goto L_0069d402;
L_0069d402:; BB(0x0069d402);
    /* 0069d402: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d404: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d409u); f_0077774c();
    /* 0069d409: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d40f: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d414u); f_007b52ec();
    /* 0069d414: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d416: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069d418: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d41f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d421: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d426u); f_006904cc();
    /* 0069d426: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d428: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d42du); f_0069d1bc();
    /* 0069d42d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d42e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d430: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d432: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d437u); f_00694390();
    /* 0069d437: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d438: ret  */ FN_RET(0x0069d3a1); r_esp += 4; return;
}

void f_0069d3ac(void)
{
    FN_ENTER(0x0069d3ac);
    /* 0069d3ac: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d3ae: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d3b0: call 0x69fe2c */ r_esp -= 4; W32(r_esp, 0x69d3b5u); f_0069fe2c();
    /* 0069d3b5: jmp 0x69d402 */ goto L_0069d402;
L_0069d402:; BB(0x0069d402);
    /* 0069d402: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d404: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d409u); f_0077774c();
    /* 0069d409: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d40f: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d414u); f_007b52ec();
    /* 0069d414: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d416: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069d418: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d41f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d421: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d426u); f_006904cc();
    /* 0069d426: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d428: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d42du); f_0069d1bc();
    /* 0069d42d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d42e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d430: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d432: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d437u); f_00694390();
    /* 0069d437: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d438: ret  */ FN_RET(0x0069d3ac); r_esp += 4; return;
}

void f_0069d3b7(void)
{
    FN_ENTER(0x0069d3b7);
    /* 0069d3b7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d3b9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d3bb: call 0x6a0624 */ r_esp -= 4; W32(r_esp, 0x69d3c0u); f_006a0624();
    /* 0069d3c0: jmp 0x69d402 */ goto L_0069d402;
L_0069d402:; BB(0x0069d402);
    /* 0069d402: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d404: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d409u); f_0077774c();
    /* 0069d409: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d40f: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d414u); f_007b52ec();
    /* 0069d414: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d416: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069d418: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d41f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d421: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d426u); f_006904cc();
    /* 0069d426: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d428: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d42du); f_0069d1bc();
    /* 0069d42d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d42e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d430: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d432: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d437u); f_00694390();
    /* 0069d437: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d438: ret  */ FN_RET(0x0069d3b7); r_esp += 4; return;
}

void f_0069d3c2(void)
{
    FN_ENTER(0x0069d3c2);
    /* 0069d3c2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d3c4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d3c6: call 0x6a0994 */ r_esp -= 4; W32(r_esp, 0x69d3cbu); f_006a0994();
    /* 0069d3cb: jmp 0x69d402 */ goto L_0069d402;
L_0069d402:; BB(0x0069d402);
    /* 0069d402: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d404: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d409u); f_0077774c();
    /* 0069d409: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d40f: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d414u); f_007b52ec();
    /* 0069d414: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d416: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069d418: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d41f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d421: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d426u); f_006904cc();
    /* 0069d426: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d428: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d42du); f_0069d1bc();
    /* 0069d42d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d42e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d430: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d432: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d437u); f_00694390();
    /* 0069d437: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d438: ret  */ FN_RET(0x0069d3c2); r_esp += 4; return;
}

void f_0069d3cd(void)
{
    FN_ENTER(0x0069d3cd);
    /* 0069d3cd: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d3cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d3d1: call 0x6a0eb8 */ r_esp -= 4; W32(r_esp, 0x69d3d6u); f_006a0eb8();
    /* 0069d3d6: jmp 0x69d402 */ goto L_0069d402;
L_0069d402:; BB(0x0069d402);
    /* 0069d402: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d404: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d409u); f_0077774c();
    /* 0069d409: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d40f: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d414u); f_007b52ec();
    /* 0069d414: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d416: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069d418: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d41f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d421: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d426u); f_006904cc();
    /* 0069d426: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d428: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d42du); f_0069d1bc();
    /* 0069d42d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d42e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d430: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d432: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d437u); f_00694390();
    /* 0069d437: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d438: ret  */ FN_RET(0x0069d3cd); r_esp += 4; return;
}

void f_0069d3d8(void)
{
    FN_ENTER(0x0069d3d8);
    /* 0069d3d8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d3da: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d3dc: call 0x6a139c */ r_esp -= 4; W32(r_esp, 0x69d3e1u); f_006a139c();
    /* 0069d3e1: jmp 0x69d402 */ goto L_0069d402;
L_0069d402:; BB(0x0069d402);
    /* 0069d402: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d404: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d409u); f_0077774c();
    /* 0069d409: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d40f: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d414u); f_007b52ec();
    /* 0069d414: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d416: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069d418: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d41f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d421: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d426u); f_006904cc();
    /* 0069d426: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d428: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d42du); f_0069d1bc();
    /* 0069d42d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d42e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d430: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d432: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d437u); f_00694390();
    /* 0069d437: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d438: ret  */ FN_RET(0x0069d3d8); r_esp += 4; return;
}

void f_0069d3e3(void)
{
    FN_ENTER(0x0069d3e3);
    /* 0069d3e3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d3e5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d3e7: call 0x6a1a60 */ r_esp -= 4; W32(r_esp, 0x69d3ecu); f_006a1a60();
    /* 0069d3ec: jmp 0x69d402 */ goto L_0069d402;
L_0069d402:; BB(0x0069d402);
    /* 0069d402: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d404: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d409u); f_0077774c();
    /* 0069d409: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d40f: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d414u); f_007b52ec();
    /* 0069d414: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d416: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069d418: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d41f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d421: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d426u); f_006904cc();
    /* 0069d426: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d428: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d42du); f_0069d1bc();
    /* 0069d42d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d42e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d430: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d432: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d437u); f_00694390();
    /* 0069d437: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d438: ret  */ FN_RET(0x0069d3e3); r_esp += 4; return;
}

void f_0069d3ee(void)
{
    FN_ENTER(0x0069d3ee);
    /* 0069d3ee: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d3f0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d3f2: call 0x69b93c */ r_esp -= 4; W32(r_esp, 0x69d3f7u); f_0069b93c();
    /* 0069d3f7: jmp 0x69d402 */ goto L_0069d402;
L_0069d402:; BB(0x0069d402);
    /* 0069d402: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d404: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d409u); f_0077774c();
    /* 0069d409: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d40f: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d414u); f_007b52ec();
    /* 0069d414: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d416: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069d418: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d41f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d421: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d426u); f_006904cc();
    /* 0069d426: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d428: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d42du); f_0069d1bc();
    /* 0069d42d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d42e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d430: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d432: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d437u); f_00694390();
    /* 0069d437: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d438: ret  */ FN_RET(0x0069d3ee); r_esp += 4; return;
}

void f_0069d3f9(void)
{
    FN_ENTER(0x0069d3f9);
    /* 0069d3f9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d3fb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d3fd: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x69d402u); f_006a1ac0();
    /* 0069d402: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d404: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d409u); f_0077774c();
    /* 0069d409: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d40f: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d414u); f_007b52ec();
    /* 0069d414: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d416: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069d418: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d41f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d421: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d426u); f_006904cc();
    /* 0069d426: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d428: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d42du); f_0069d1bc();
    /* 0069d42d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d42e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d430: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d432: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d437u); f_00694390();
    /* 0069d437: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d438: ret  */ FN_RET(0x0069d3f9); r_esp += 4; return;
}

void f_0069d402(void)
{
    FN_ENTER(0x0069d402);
    /* 0069d402: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d404: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d409u); f_0077774c();
    /* 0069d409: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d40d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d40f: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x69d414u); f_007b52ec();
    /* 0069d414: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d416: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069d418: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069d41f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d421: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69d426u); f_006904cc();
    /* 0069d426: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d428: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d42du); f_0069d1bc();
    /* 0069d42d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d42e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d430: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d432: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d437u); f_00694390();
    /* 0069d437: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d438: ret  */ FN_RET(0x0069d402); r_esp += 4; return;
}

void f_0069d43c(void) /* sub_69D43C */
{
    FN_ENTER(0x0069d43c);
    /* 0069d43c: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 0069d441: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069d444: ja 0x69d4c6 */ if ((!fC&&!fZ)) goto L_0069d4c6;
L_0069d44a:; BB(0x0069d44a);
    /* 0069d44a: mov eax, dword ptr [eax*4 + 0x93ce04] */ r_eax = R32((u32)(r_eax*4+0x93ce04u));
    /* 0069d451: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0069d4c6:; BB(0x0069d4c6);
    /* 0069d4c6: ret 4 */ FN_RET(0x0069d43c); r_esp += 8; return;
}

void f_0069d453(void)
{
    FN_ENTER(0x0069d453);
    /* 0069d453: call 0x69d4cc */ r_esp -= 4; W32(r_esp, 0x69d458u); f_0069d4cc();
    /* 0069d458: jmp 0x69d4c6 */ goto L_0069d4c6;
L_0069d4c6:; BB(0x0069d4c6);
    /* 0069d4c6: ret 4 */ FN_RET(0x0069d453); r_esp += 8; return;
}

void f_0069d45a(void)
{
    FN_ENTER(0x0069d45a);
    /* 0069d45a: call 0x69d4f0 */ r_esp -= 4; W32(r_esp, 0x69d45fu); f_0069d4f0();
    /* 0069d45f: jmp 0x69d4c6 */ goto L_0069d4c6;
L_0069d4c6:; BB(0x0069d4c6);
    /* 0069d4c6: ret 4 */ FN_RET(0x0069d45a); r_esp += 8; return;
}

void f_0069d461(void)
{
    FN_ENTER(0x0069d461);
    /* 0069d461: call 0x6a2938 */ r_esp -= 4; W32(r_esp, 0x69d466u); f_006a2938();
    /* 0069d466: jmp 0x69d4c6 */ goto L_0069d4c6;
L_0069d4c6:; BB(0x0069d4c6);
    /* 0069d4c6: ret 4 */ FN_RET(0x0069d461); r_esp += 8; return;
}

void f_0069d468(void)
{
    FN_ENTER(0x0069d468);
    /* 0069d468: call 0x69d5f8 */ r_esp -= 4; W32(r_esp, 0x69d46du); f_0069d5f8();
    /* 0069d46d: jmp 0x69d4c6 */ goto L_0069d4c6;
L_0069d4c6:; BB(0x0069d4c6);
    /* 0069d4c6: ret 4 */ FN_RET(0x0069d468); r_esp += 8; return;
}

void f_0069d46f(void)
{
    FN_ENTER(0x0069d46f);
    /* 0069d46f: call 0x69d688 */ r_esp -= 4; W32(r_esp, 0x69d474u); f_0069d688();
    /* 0069d474: jmp 0x69d4c6 */ goto L_0069d4c6;
L_0069d4c6:; BB(0x0069d4c6);
    /* 0069d4c6: ret 4 */ FN_RET(0x0069d46f); r_esp += 8; return;
}

void f_0069d476(void)
{
    FN_ENTER(0x0069d476);
    /* 0069d476: mov edx, dword ptr [ecx + 0x634] */ r_edx = R32((u32)(r_ecx+0x634u));
    /* 0069d47c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069d47e: mov word ptr [0xa9432c], ax */ W16((u32)(0xa9432cu), (u16)r_eax);
    /* 0069d484: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069d486: mov word ptr [0xa94330], ax */ W16((u32)(0xa94330u), (u16)r_eax);
    /* 0069d48c: je 0x69d4c6 */ if (fZ) goto L_0069d4c6;
L_0069d48e:; BB(0x0069d48e);
    /* 0069d48e: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 0069d494: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069d496: je 0x69d49f */ if (fZ) goto L_0069d49f;
L_0069d498:; BB(0x0069d498);
    /* 0069d498: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d49d: jmp 0x69d4a1 */ goto L_0069d4a1;
L_0069d49f:; BB(0x0069d49f);
    /* 0069d49f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0069d4a1:; BB(0x0069d4a1);
    /* 0069d4a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069d4a3: jne 0x69d4c6 */ if (!fZ) goto L_0069d4c6;
L_0069d4a5:; BB(0x0069d4a5);
    /* 0069d4a5: push 0xa9432c */ { u32 v = 0xa9432cu; r_esp -= 4; W32(r_esp, v); }
    /* 0069d4aa: push 0xa94330 */ { u32 v = 0xa94330u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d4af: call 0x70a60c */ r_esp -= 4; W32(r_esp, 0x69d4b4u); f_0070a60c();
    /* 0069d4b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069d4b7: ret 4 */ FN_RET(0x0069d476); r_esp += 8; return;
L_0069d4c6:; BB(0x0069d4c6);
    /* 0069d4c6: ret 4 */ FN_RET(0x0069d476); r_esp += 8; return;
}

void f_0069d4ba(void)
{
    FN_ENTER(0x0069d4ba);
    /* 0069d4ba: call 0x69d6f4 */ r_esp -= 4; W32(r_esp, 0x69d4bfu); f_0069d6f4();
    /* 0069d4bf: jmp 0x69d4c6 */ goto L_0069d4c6;
L_0069d4c6:; BB(0x0069d4c6);
    /* 0069d4c6: ret 4 */ FN_RET(0x0069d4ba); r_esp += 8; return;
}

void f_0069d4c1(void)
{
    FN_ENTER(0x0069d4c1);
    /* 0069d4c1: call 0x69d730 */ r_esp -= 4; W32(r_esp, 0x69d4c6u); f_0069d730();
    /* 0069d4c6: ret 4 */ FN_RET(0x0069d4c1); r_esp += 8; return;
}

void f_0069d4c6(void)
{
    FN_ENTER(0x0069d4c6);
    /* 0069d4c6: ret 4 */ FN_RET(0x0069d4c6); r_esp += 8; return;
}

void f_0069d4cc(void) /* sub_69D4CC */
{
    FN_ENTER(0x0069d4cc);
    /* 0069d4cc: movsx eax, word ptr [ecx + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x330u));
    /* 0069d4d3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069d4d6: jne 0x69d4ec */ if (!fZ) goto L_0069d4ec;
L_0069d4d8:; BB(0x0069d4d8);
    /* 0069d4d8: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 0069d4de: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069d4e3: jne 0x69d4ec */ if (!fZ) goto L_0069d4ec;
L_0069d4e5:; BB(0x0069d4e5);
    /* 0069d4e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d4e7: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x69d4ecu); f_006a1ac0();
L_0069d4ec:; BB(0x0069d4ec);
    /* 0069d4ec: ret  */ FN_RET(0x0069d4cc); r_esp += 4; return;
}

void f_0069d4f0(void) /* sub_69D4F0 */
{
    FN_ENTER(0x0069d4f0);
    /* 0069d4f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069d4f1: mov esi, ecx */ r_esi = r_ecx;
    /* 0069d4f3: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0069d4f6: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d4fb: jne 0x69d539 */ if (!fZ) goto L_0069d539;
L_0069d4fd:; BB(0x0069d4fd);
    /* 0069d4fd: movsx eax, word ptr [esi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 0069d504: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d506: jne 0x69d51c */ if (!fZ) goto L_0069d51c;
L_0069d508:; BB(0x0069d508);
    /* 0069d508: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d50a: call 0x68a3e0 */ r_esp -= 4; W32(r_esp, 0x69d50fu); f_0068a3e0();
    /* 0069d50f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069d511: jne 0x69d52e */ if (!fZ) goto L_0069d52e;
L_0069d513:; BB(0x0069d513);
    /* 0069d513: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d515: call 0x69d554 */ r_esp -= 4; W32(r_esp, 0x69d51au); f_0069d554();
    /* 0069d51a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d51b: ret  */ FN_RET(0x0069d4f0); r_esp += 4; return;
L_0069d51c:; BB(0x0069d51c);
    /* 0069d51c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069d51f: jne 0x69d52e */ if (!fZ) goto L_0069d52e;
L_0069d521:; BB(0x0069d521);
    /* 0069d521: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069d527: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069d52c: je 0x69d530 */ if (fZ) goto L_0069d530;
L_0069d52e:; BB(0x0069d52e);
    /* 0069d52e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d52f: ret  */ FN_RET(0x0069d4f0); r_esp += 4; return;
L_0069d530:; BB(0x0069d530);
    /* 0069d530: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d532: call 0x69d554 */ r_esp -= 4; W32(r_esp, 0x69d537u); f_0069d554();
    /* 0069d537: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d538: ret  */ FN_RET(0x0069d4f0); r_esp += 4; return;
L_0069d539:; BB(0x0069d539);
    /* 0069d539: mov eax, dword ptr [esi + 0x92c] */ r_eax = R32((u32)(r_esi+0x92cu));
    /* 0069d53f: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069d542: mov dword ptr [esi + 0x92c], eax */ W32((u32)(r_esi+0x92cu), r_eax);
    /* 0069d548: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d54a: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d54c: call 0x69e15c */ r_esp -= 4; W32(r_esp, 0x69d551u); f_0069e15c();
    /* 0069d551: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d552: ret  */ FN_RET(0x0069d4f0); r_esp += 4; return;
}

void f_0069d554(void) /* sub_69D554 */
{
    FN_ENTER(0x0069d554);
    /* 0069d554: push dword ptr [ecx + 0x60] */ { u32 v = R32((u32)(r_ecx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069d557: lea eax, [ecx + 0x38] */ r_eax = (u32)(r_ecx+0x38u);
    /* 0069d55a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d55b: call 0x69d564 */ r_esp -= 4; W32(r_esp, 0x69d560u); f_0069d564();
    /* 0069d560: ret  */ FN_RET(0x0069d554); r_esp += 4; return;
}

void f_0069d564(void) /* sub_69D564 */
{
    FN_ENTER(0x0069d564);
    /* 0069d564: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069d565: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069d568: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d56a: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 0069d56e: je 0x69d583 */ if (fZ) goto L_0069d583;
L_0069d570:; BB(0x0069d570);
    /* 0069d570: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 0069d577: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d57a: jne 0x69d583 */ if (!fZ) goto L_0069d583;
L_0069d57c:; BB(0x0069d57c);
    /* 0069d57c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069d57f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d580: ret 8 */ FN_RET(0x0069d564); r_esp += 12; return;
L_0069d583:; BB(0x0069d583);
    /* 0069d583: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0069d586: test eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d58b: je 0x69d594 */ if (fZ) goto L_0069d594;
L_0069d58d:; BB(0x0069d58d);
    /* 0069d58d: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d592: jmp 0x69d596 */ goto L_0069d596;
L_0069d594:; BB(0x0069d594);
    /* 0069d594: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0069d596:; BB(0x0069d596);
    /* 0069d596: mov byte ptr [esp], 0x3f */ W8((u32)(r_esp), 0x3fu);
    /* 0069d59a: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 0069d59f: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0069d5a3: mov byte ptr [esp + 1], 6 */ W8((u32)(r_esp+0x1u), 0x6u);
    /* 0069d5a8: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0069d5ad: mov word ptr [esp + 0xa], dx */ W16((u32)(r_esp+0xau), (u16)r_edx);
    /* 0069d5b2: movzx edx, word ptr [ecx + 0x1c] */ r_edx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0069d5b6: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 0069d5bb: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 0069d5c0: mov eax, dword ptr [ecx + 0x3f0] */ r_eax = R32((u32)(r_ecx+0x3f0u));
    /* 0069d5c6: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 0069d5cb: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x69d5d0u); f_007ba980();
    /* 0069d5d0: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 0069d5d3: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 0069d5d8: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0069d5da: mov esi, dword ptr [esi + 8] */ r_esi = R32((u32)(r_esi+0x8u));
    /* 0069d5dd: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0069d5e1: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0069d5e5: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 0069d5e9: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069d5ec: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x69d5f1u); f_008003e0();
    /* 0069d5f1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069d5f4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d5f5: ret 8 */ FN_RET(0x0069d564); r_esp += 12; return;
}

void f_0069d5f8(void) /* sub_69D5F8 */
{
    FN_ENTER(0x0069d5f8);
    /* 0069d5f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069d5f9: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069d5fc: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0069d5fe: mov eax, dword ptr [ebx + 0x33c] */ r_eax = R32((u32)(r_ebx+0x33cu));
    /* 0069d604: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d609: jne 0x69d61c */ if (!fZ) goto L_0069d61c;
L_0069d60b:; BB(0x0069d60b);
    /* 0069d60b: push dword ptr [ebx + 0x634] */ { u32 v = R32((u32)(r_ebx+0x634u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069d611: lea ecx, [ebx + 0x724] */ r_ecx = (u32)(r_ebx+0x724u);
    /* 0069d617: call 0x7c12d8 */ r_esp -= 4; W32(r_esp, 0x69d61cu); f_007c12d8();
L_0069d61c:; BB(0x0069d61c);
    /* 0069d61c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d61e: je 0x69d631 */ if (fZ) goto L_0069d631;
L_0069d620:; BB(0x0069d620);
    /* 0069d620: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069d627: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d62a: jne 0x69d631 */ if (!fZ) goto L_0069d631;
L_0069d62c:; BB(0x0069d62c);
    /* 0069d62c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069d62f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d630: ret  */ FN_RET(0x0069d5f8); r_esp += 4; return;
L_0069d631:; BB(0x0069d631);
    /* 0069d631: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0069d635: mov byte ptr [esp], 0x53 */ W8((u32)(r_esp), 0x53u);
    /* 0069d639: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0069d63e: mov byte ptr [esp + 1], 1 */ W8((u32)(r_esp+0x1u), 0x1u);
    /* 0069d643: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069d646: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x69d64bu); f_008003e0();
    /* 0069d64b: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0069d64f: movzx ebx, word ptr [ebx + 0x334] */ r_ebx = (u32)R16((u32)(r_ebx+0x334u));
    /* 0069d656: mov byte ptr [esp + 4], 0x2f */ W8((u32)(r_esp+0x4u), 0x2fu);
    /* 0069d65b: mov byte ptr [esp + 5], 3 */ W8((u32)(r_esp+0x5u), 0x3u);
    /* 0069d660: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 0069d665: mov word ptr [esp + 0xc], bx */ W16((u32)(r_esp+0xcu), (u16)r_ebx);
    /* 0069d66a: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0069d672: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 0069d677: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0069d67b: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x69d680u); f_008003e0();
    /* 0069d680: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069d683: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d684: ret  */ FN_RET(0x0069d5f8); r_esp += 4; return;
}

void f_0069d688(void) /* sub_69D688 */
{
    FN_ENTER(0x0069d688);
    /* 0069d688: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069d689: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0069d68b: movsx eax, word ptr [ebx + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x330u));
    /* 0069d692: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069d694: jne 0x69d6d5 */ if (!fZ) goto L_0069d6d5;
L_0069d696:; BB(0x0069d696);
    /* 0069d696: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0069d699: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d69e: je 0x69d6c3 */ if (fZ) goto L_0069d6c3;
L_0069d6a0:; BB(0x0069d6a0);
    /* 0069d6a0: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0069d6a4: movsx eax, word ptr [ebx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 0069d6ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d6ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069d6ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069d6ae: call 0x693348 */ r_esp -= 4; W32(r_esp, 0x69d6b3u); f_00693348();
    /* 0069d6b3: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0069d6b6: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069d6bb: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 0069d6be: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069d6c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d6c2: ret  */ FN_RET(0x0069d688); r_esp += 4; return;
L_0069d6c3:; BB(0x0069d6c3);
    /* 0069d6c3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d6c5: call 0x69d6d8 */ r_esp -= 4; W32(r_esp, 0x69d6cau); f_0069d6d8();
    /* 0069d6ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069d6cc: je 0x69d6d5 */ if (fZ) goto L_0069d6d5;
L_0069d6ce:; BB(0x0069d6ce);
    /* 0069d6ce: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069d6d0: call 0x68c8e8 */ r_esp -= 4; W32(r_esp, 0x69d6d5u); f_0068c8e8();
L_0069d6d5:; BB(0x0069d6d5);
    /* 0069d6d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d6d6: ret  */ FN_RET(0x0069d688); r_esp += 4; return;
}

void f_0069d6d8(void) /* sub_69D6D8 */
{
    FN_ENTER(0x0069d6d8);
    /* 0069d6d8: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0069d6db: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d6e0: je 0x69d6ef */ if (fZ) goto L_0069d6ef;
L_0069d6e2:; BB(0x0069d6e2);
    /* 0069d6e2: test eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069d6e7: jne 0x69d6ef */ if (!fZ) goto L_0069d6ef;
L_0069d6e9:; BB(0x0069d6e9);
    /* 0069d6e9: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d6ee: ret  */ FN_RET(0x0069d6d8); r_esp += 4; return;
L_0069d6ef:; BB(0x0069d6ef);
    /* 0069d6ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069d6f1: ret  */ FN_RET(0x0069d6d8); r_esp += 4; return;
}

void f_0069d6f4(void) /* sub_69D6F4 */
{
    FN_ENTER(0x0069d6f4);
    /* 0069d6f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069d6f5: mov esi, ecx */ r_esi = r_ecx;
    /* 0069d6f7: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069d6fd: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069d702: jne 0x69d72b */ if (!fZ) goto L_0069d72b;
L_0069d704:; BB(0x0069d704);
    /* 0069d704: movsx eax, word ptr [esi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 0069d70b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069d70e: jne 0x69d72b */ if (!fZ) goto L_0069d72b;
L_0069d710:; BB(0x0069d710);
    /* 0069d710: lea ecx, [esi + 0x724] */ r_ecx = (u32)(r_esi+0x724u);
    /* 0069d716: call 0x7c11d0 */ r_esp -= 4; W32(r_esp, 0x69d71bu); f_007c11d0();
    /* 0069d71b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069d71d: je 0x69d72b */ if (fZ) goto L_0069d72b;
L_0069d71f:; BB(0x0069d71f);
    /* 0069d71f: mov eax, dword ptr [esi + 0x3e0] */ r_eax = R32((u32)(r_esi+0x3e0u));
    /* 0069d725: add dword ptr [esi + 0x270], eax */ { u32 ad = (u32)(r_esi+0x270u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0069d72b:; BB(0x0069d72b);
    /* 0069d72b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d72c: ret  */ FN_RET(0x0069d6f4); r_esp += 4; return;
}

void f_0069d730(void) /* sub_69D730 */
{
    FN_ENTER(0x0069d730);
    /* 0069d730: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069d731: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069d734: mov esi, ecx */ r_esi = r_ecx;
    /* 0069d736: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0069d73d: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0069d740: mov dword ptr [esi + 0x348], 0x13 */ W32((u32)(r_esi+0x348u), 0x13u);
    /* 0069d74a: ja 0x69d875 */ if ((!fC&&!fZ)) goto L_0069d875;
L_0069d750:; BB(0x0069d750);
    /* 0069d750: mov eax, dword ptr [eax*4 + 0x93ce40] */ r_eax = R32((u32)(r_eax*4+0x93ce40u));
    /* 0069d757: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0069d875:; BB(0x0069d875);
    /* 0069d875: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d877: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d87cu); f_0077774c();
    /* 0069d87c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0069d87f: mov edx, dword ptr [esi + 0xb0] */ r_edx = R32((u32)(r_esi+0xb0u));
    /* 0069d885: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069d88a: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0069d88d: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069d893: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069d896: mov dword ptr [esi + 0xb0], edx */ W32((u32)(r_esi+0xb0u), r_edx);
    /* 0069d89c: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d8a1: je 0x69d8b1 */ if (fZ) goto L_0069d8b1;
L_0069d8a3:; BB(0x0069d8a3);
    /* 0069d8a3: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d8a8: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0069d8af: jmp 0x69d8e3 */ goto L_0069d8e3;
L_0069d8b1:; BB(0x0069d8b1);
    /* 0069d8b1: fild dword ptr [esi + 0x270] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x270u)));
    /* 0069d8b7: fmul qword ptr [0x93d948] */ ST(0) = ST(0) * R_F64((u32)(0x93d948u));
    /* 0069d8bd: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0069d8c0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0069d8c4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069d8c9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0069d8cd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0069d8d1: fistp dword ptr [esi + 0x3e0] */ W32((u32)(r_esi+0x3e0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069d8d7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0069d8da: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069d8dc: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
L_0069d8e3:; BB(0x0069d8e3);
    /* 0069d8e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e7: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d8e9: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d8eeu); f_00694390();
    /* 0069d8ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069d8f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d8f2: ret  */ FN_RET(0x0069d730); r_esp += 4; return;
}

void f_0069d759(void)
{
    FN_ENTER(0x0069d759);
    /* 0069d759: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d75b: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d75d: call 0x69bdf0 */ r_esp -= 4; W32(r_esp, 0x69d762u); f_0069bdf0();
    /* 0069d762: jmp 0x69d875 */ goto L_0069d875;
L_0069d875:; BB(0x0069d875);
    /* 0069d875: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d877: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d87cu); f_0077774c();
    /* 0069d87c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0069d87f: mov edx, dword ptr [esi + 0xb0] */ r_edx = R32((u32)(r_esi+0xb0u));
    /* 0069d885: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069d88a: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0069d88d: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069d893: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069d896: mov dword ptr [esi + 0xb0], edx */ W32((u32)(r_esi+0xb0u), r_edx);
    /* 0069d89c: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d8a1: je 0x69d8b1 */ if (fZ) goto L_0069d8b1;
L_0069d8a3:; BB(0x0069d8a3);
    /* 0069d8a3: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d8a8: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0069d8af: jmp 0x69d8e3 */ goto L_0069d8e3;
L_0069d8b1:; BB(0x0069d8b1);
    /* 0069d8b1: fild dword ptr [esi + 0x270] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x270u)));
    /* 0069d8b7: fmul qword ptr [0x93d948] */ ST(0) = ST(0) * R_F64((u32)(0x93d948u));
    /* 0069d8bd: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0069d8c0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0069d8c4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069d8c9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0069d8cd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0069d8d1: fistp dword ptr [esi + 0x3e0] */ W32((u32)(r_esi+0x3e0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069d8d7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0069d8da: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069d8dc: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
L_0069d8e3:; BB(0x0069d8e3);
    /* 0069d8e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e7: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d8e9: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d8eeu); f_00694390();
    /* 0069d8ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069d8f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d8f2: ret  */ FN_RET(0x0069d759); r_esp += 4; return;
}

void f_0069d767(void)
{
    FN_ENTER(0x0069d767);
    /* 0069d767: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d769: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d76b: call 0x69c6c0 */ r_esp -= 4; W32(r_esp, 0x69d770u); f_0069c6c0();
    /* 0069d770: jmp 0x69d875 */ goto L_0069d875;
L_0069d875:; BB(0x0069d875);
    /* 0069d875: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d877: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d87cu); f_0077774c();
    /* 0069d87c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0069d87f: mov edx, dword ptr [esi + 0xb0] */ r_edx = R32((u32)(r_esi+0xb0u));
    /* 0069d885: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069d88a: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0069d88d: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069d893: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069d896: mov dword ptr [esi + 0xb0], edx */ W32((u32)(r_esi+0xb0u), r_edx);
    /* 0069d89c: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d8a1: je 0x69d8b1 */ if (fZ) goto L_0069d8b1;
L_0069d8a3:; BB(0x0069d8a3);
    /* 0069d8a3: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d8a8: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0069d8af: jmp 0x69d8e3 */ goto L_0069d8e3;
L_0069d8b1:; BB(0x0069d8b1);
    /* 0069d8b1: fild dword ptr [esi + 0x270] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x270u)));
    /* 0069d8b7: fmul qword ptr [0x93d948] */ ST(0) = ST(0) * R_F64((u32)(0x93d948u));
    /* 0069d8bd: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0069d8c0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0069d8c4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069d8c9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0069d8cd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0069d8d1: fistp dword ptr [esi + 0x3e0] */ W32((u32)(r_esi+0x3e0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069d8d7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0069d8da: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069d8dc: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
L_0069d8e3:; BB(0x0069d8e3);
    /* 0069d8e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e7: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d8e9: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d8eeu); f_00694390();
    /* 0069d8ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069d8f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d8f2: ret  */ FN_RET(0x0069d767); r_esp += 4; return;
}

void f_0069d775(void)
{
    FN_ENTER(0x0069d775);
    /* 0069d775: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d777: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d779: call 0x69c988 */ r_esp -= 4; W32(r_esp, 0x69d77eu); f_0069c988();
    /* 0069d77e: jmp 0x69d875 */ goto L_0069d875;
L_0069d875:; BB(0x0069d875);
    /* 0069d875: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d877: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d87cu); f_0077774c();
    /* 0069d87c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0069d87f: mov edx, dword ptr [esi + 0xb0] */ r_edx = R32((u32)(r_esi+0xb0u));
    /* 0069d885: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069d88a: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0069d88d: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069d893: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069d896: mov dword ptr [esi + 0xb0], edx */ W32((u32)(r_esi+0xb0u), r_edx);
    /* 0069d89c: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d8a1: je 0x69d8b1 */ if (fZ) goto L_0069d8b1;
L_0069d8a3:; BB(0x0069d8a3);
    /* 0069d8a3: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d8a8: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0069d8af: jmp 0x69d8e3 */ goto L_0069d8e3;
L_0069d8b1:; BB(0x0069d8b1);
    /* 0069d8b1: fild dword ptr [esi + 0x270] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x270u)));
    /* 0069d8b7: fmul qword ptr [0x93d948] */ ST(0) = ST(0) * R_F64((u32)(0x93d948u));
    /* 0069d8bd: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0069d8c0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0069d8c4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069d8c9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0069d8cd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0069d8d1: fistp dword ptr [esi + 0x3e0] */ W32((u32)(r_esi+0x3e0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069d8d7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0069d8da: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069d8dc: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
L_0069d8e3:; BB(0x0069d8e3);
    /* 0069d8e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e7: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d8e9: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d8eeu); f_00694390();
    /* 0069d8ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069d8f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d8f2: ret  */ FN_RET(0x0069d775); r_esp += 4; return;
}

void f_0069d783(void)
{
    FN_ENTER(0x0069d783);
    /* 0069d783: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d785: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d787: call 0x69cd20 */ r_esp -= 4; W32(r_esp, 0x69d78cu); f_0069cd20();
    /* 0069d78c: jmp 0x69d875 */ goto L_0069d875;
L_0069d875:; BB(0x0069d875);
    /* 0069d875: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d877: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d87cu); f_0077774c();
    /* 0069d87c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0069d87f: mov edx, dword ptr [esi + 0xb0] */ r_edx = R32((u32)(r_esi+0xb0u));
    /* 0069d885: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069d88a: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0069d88d: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069d893: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069d896: mov dword ptr [esi + 0xb0], edx */ W32((u32)(r_esi+0xb0u), r_edx);
    /* 0069d89c: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d8a1: je 0x69d8b1 */ if (fZ) goto L_0069d8b1;
L_0069d8a3:; BB(0x0069d8a3);
    /* 0069d8a3: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d8a8: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0069d8af: jmp 0x69d8e3 */ goto L_0069d8e3;
L_0069d8b1:; BB(0x0069d8b1);
    /* 0069d8b1: fild dword ptr [esi + 0x270] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x270u)));
    /* 0069d8b7: fmul qword ptr [0x93d948] */ ST(0) = ST(0) * R_F64((u32)(0x93d948u));
    /* 0069d8bd: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0069d8c0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0069d8c4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069d8c9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0069d8cd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0069d8d1: fistp dword ptr [esi + 0x3e0] */ W32((u32)(r_esi+0x3e0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069d8d7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0069d8da: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069d8dc: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
L_0069d8e3:; BB(0x0069d8e3);
    /* 0069d8e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e7: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d8e9: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d8eeu); f_00694390();
    /* 0069d8ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069d8f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d8f2: ret  */ FN_RET(0x0069d783); r_esp += 4; return;
}

void f_0069d791(void)
{
    FN_ENTER(0x0069d791);
    /* 0069d791: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d793: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d795: call 0x69d1e4 */ r_esp -= 4; W32(r_esp, 0x69d79au); f_0069d1e4();
    /* 0069d79a: jmp 0x69d875 */ goto L_0069d875;
L_0069d875:; BB(0x0069d875);
    /* 0069d875: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d877: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d87cu); f_0077774c();
    /* 0069d87c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0069d87f: mov edx, dword ptr [esi + 0xb0] */ r_edx = R32((u32)(r_esi+0xb0u));
    /* 0069d885: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069d88a: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0069d88d: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069d893: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069d896: mov dword ptr [esi + 0xb0], edx */ W32((u32)(r_esi+0xb0u), r_edx);
    /* 0069d89c: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d8a1: je 0x69d8b1 */ if (fZ) goto L_0069d8b1;
L_0069d8a3:; BB(0x0069d8a3);
    /* 0069d8a3: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d8a8: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0069d8af: jmp 0x69d8e3 */ goto L_0069d8e3;
L_0069d8b1:; BB(0x0069d8b1);
    /* 0069d8b1: fild dword ptr [esi + 0x270] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x270u)));
    /* 0069d8b7: fmul qword ptr [0x93d948] */ ST(0) = ST(0) * R_F64((u32)(0x93d948u));
    /* 0069d8bd: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0069d8c0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0069d8c4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069d8c9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0069d8cd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0069d8d1: fistp dword ptr [esi + 0x3e0] */ W32((u32)(r_esi+0x3e0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069d8d7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0069d8da: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069d8dc: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
L_0069d8e3:; BB(0x0069d8e3);
    /* 0069d8e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e7: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d8e9: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d8eeu); f_00694390();
    /* 0069d8ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069d8f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d8f2: ret  */ FN_RET(0x0069d791); r_esp += 4; return;
}

void f_0069d79f(void)
{
    FN_ENTER(0x0069d79f);
    /* 0069d79f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d7a1: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d7a3: call 0x69d43c */ r_esp -= 4; W32(r_esp, 0x69d7a8u); f_0069d43c();
    /* 0069d7a8: jmp 0x69d875 */ goto L_0069d875;
L_0069d875:; BB(0x0069d875);
    /* 0069d875: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d877: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d87cu); f_0077774c();
    /* 0069d87c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0069d87f: mov edx, dword ptr [esi + 0xb0] */ r_edx = R32((u32)(r_esi+0xb0u));
    /* 0069d885: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069d88a: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0069d88d: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069d893: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069d896: mov dword ptr [esi + 0xb0], edx */ W32((u32)(r_esi+0xb0u), r_edx);
    /* 0069d89c: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d8a1: je 0x69d8b1 */ if (fZ) goto L_0069d8b1;
L_0069d8a3:; BB(0x0069d8a3);
    /* 0069d8a3: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d8a8: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0069d8af: jmp 0x69d8e3 */ goto L_0069d8e3;
L_0069d8b1:; BB(0x0069d8b1);
    /* 0069d8b1: fild dword ptr [esi + 0x270] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x270u)));
    /* 0069d8b7: fmul qword ptr [0x93d948] */ ST(0) = ST(0) * R_F64((u32)(0x93d948u));
    /* 0069d8bd: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0069d8c0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0069d8c4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069d8c9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0069d8cd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0069d8d1: fistp dword ptr [esi + 0x3e0] */ W32((u32)(r_esi+0x3e0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069d8d7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0069d8da: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069d8dc: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
L_0069d8e3:; BB(0x0069d8e3);
    /* 0069d8e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e7: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d8e9: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d8eeu); f_00694390();
    /* 0069d8ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069d8f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d8f2: ret  */ FN_RET(0x0069d79f); r_esp += 4; return;
}

void f_0069d7ad(void)
{
    FN_ENTER(0x0069d7ad);
    /* 0069d7ad: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d7af: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d7b1: call 0x69d8f4 */ r_esp -= 4; W32(r_esp, 0x69d7b6u); f_0069d8f4();
    /* 0069d7b6: jmp 0x69d875 */ goto L_0069d875;
L_0069d875:; BB(0x0069d875);
    /* 0069d875: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d877: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d87cu); f_0077774c();
    /* 0069d87c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0069d87f: mov edx, dword ptr [esi + 0xb0] */ r_edx = R32((u32)(r_esi+0xb0u));
    /* 0069d885: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069d88a: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0069d88d: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069d893: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069d896: mov dword ptr [esi + 0xb0], edx */ W32((u32)(r_esi+0xb0u), r_edx);
    /* 0069d89c: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d8a1: je 0x69d8b1 */ if (fZ) goto L_0069d8b1;
L_0069d8a3:; BB(0x0069d8a3);
    /* 0069d8a3: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d8a8: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0069d8af: jmp 0x69d8e3 */ goto L_0069d8e3;
L_0069d8b1:; BB(0x0069d8b1);
    /* 0069d8b1: fild dword ptr [esi + 0x270] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x270u)));
    /* 0069d8b7: fmul qword ptr [0x93d948] */ ST(0) = ST(0) * R_F64((u32)(0x93d948u));
    /* 0069d8bd: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0069d8c0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0069d8c4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069d8c9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0069d8cd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0069d8d1: fistp dword ptr [esi + 0x3e0] */ W32((u32)(r_esi+0x3e0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069d8d7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0069d8da: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069d8dc: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
L_0069d8e3:; BB(0x0069d8e3);
    /* 0069d8e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e7: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d8e9: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d8eeu); f_00694390();
    /* 0069d8ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069d8f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d8f2: ret  */ FN_RET(0x0069d7ad); r_esp += 4; return;
}

void f_0069d7bb(void)
{
    FN_ENTER(0x0069d7bb);
    /* 0069d7bb: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d7bd: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d7bf: call 0x69dd60 */ r_esp -= 4; W32(r_esp, 0x69d7c4u); f_0069dd60();
    /* 0069d7c4: jmp 0x69d875 */ goto L_0069d875;
L_0069d875:; BB(0x0069d875);
    /* 0069d875: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d877: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d87cu); f_0077774c();
    /* 0069d87c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0069d87f: mov edx, dword ptr [esi + 0xb0] */ r_edx = R32((u32)(r_esi+0xb0u));
    /* 0069d885: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069d88a: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0069d88d: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069d893: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069d896: mov dword ptr [esi + 0xb0], edx */ W32((u32)(r_esi+0xb0u), r_edx);
    /* 0069d89c: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d8a1: je 0x69d8b1 */ if (fZ) goto L_0069d8b1;
L_0069d8a3:; BB(0x0069d8a3);
    /* 0069d8a3: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d8a8: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0069d8af: jmp 0x69d8e3 */ goto L_0069d8e3;
L_0069d8b1:; BB(0x0069d8b1);
    /* 0069d8b1: fild dword ptr [esi + 0x270] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x270u)));
    /* 0069d8b7: fmul qword ptr [0x93d948] */ ST(0) = ST(0) * R_F64((u32)(0x93d948u));
    /* 0069d8bd: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0069d8c0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0069d8c4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069d8c9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0069d8cd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0069d8d1: fistp dword ptr [esi + 0x3e0] */ W32((u32)(r_esi+0x3e0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069d8d7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0069d8da: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069d8dc: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
L_0069d8e3:; BB(0x0069d8e3);
    /* 0069d8e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e7: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d8e9: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d8eeu); f_00694390();
    /* 0069d8ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069d8f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d8f2: ret  */ FN_RET(0x0069d7bb); r_esp += 4; return;
}

void f_0069d7c9(void)
{
    FN_ENTER(0x0069d7c9);
    /* 0069d7c9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d7cb: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d7cd: call 0x69e15c */ r_esp -= 4; W32(r_esp, 0x69d7d2u); f_0069e15c();
    /* 0069d7d2: jmp 0x69d875 */ goto L_0069d875;
L_0069d875:; BB(0x0069d875);
    /* 0069d875: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d877: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d87cu); f_0077774c();
    /* 0069d87c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0069d87f: mov edx, dword ptr [esi + 0xb0] */ r_edx = R32((u32)(r_esi+0xb0u));
    /* 0069d885: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069d88a: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0069d88d: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069d893: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069d896: mov dword ptr [esi + 0xb0], edx */ W32((u32)(r_esi+0xb0u), r_edx);
    /* 0069d89c: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d8a1: je 0x69d8b1 */ if (fZ) goto L_0069d8b1;
L_0069d8a3:; BB(0x0069d8a3);
    /* 0069d8a3: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d8a8: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0069d8af: jmp 0x69d8e3 */ goto L_0069d8e3;
L_0069d8b1:; BB(0x0069d8b1);
    /* 0069d8b1: fild dword ptr [esi + 0x270] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x270u)));
    /* 0069d8b7: fmul qword ptr [0x93d948] */ ST(0) = ST(0) * R_F64((u32)(0x93d948u));
    /* 0069d8bd: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0069d8c0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0069d8c4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069d8c9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0069d8cd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0069d8d1: fistp dword ptr [esi + 0x3e0] */ W32((u32)(r_esi+0x3e0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069d8d7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0069d8da: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069d8dc: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
L_0069d8e3:; BB(0x0069d8e3);
    /* 0069d8e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e7: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d8e9: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d8eeu); f_00694390();
    /* 0069d8ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069d8f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d8f2: ret  */ FN_RET(0x0069d7c9); r_esp += 4; return;
}

void f_0069d7d7(void)
{
    FN_ENTER(0x0069d7d7);
    /* 0069d7d7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d7d9: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d7db: call 0x69e718 */ r_esp -= 4; W32(r_esp, 0x69d7e0u); f_0069e718();
    /* 0069d7e0: jmp 0x69d875 */ goto L_0069d875;
L_0069d875:; BB(0x0069d875);
    /* 0069d875: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d877: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d87cu); f_0077774c();
    /* 0069d87c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0069d87f: mov edx, dword ptr [esi + 0xb0] */ r_edx = R32((u32)(r_esi+0xb0u));
    /* 0069d885: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069d88a: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0069d88d: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069d893: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069d896: mov dword ptr [esi + 0xb0], edx */ W32((u32)(r_esi+0xb0u), r_edx);
    /* 0069d89c: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d8a1: je 0x69d8b1 */ if (fZ) goto L_0069d8b1;
L_0069d8a3:; BB(0x0069d8a3);
    /* 0069d8a3: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d8a8: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0069d8af: jmp 0x69d8e3 */ goto L_0069d8e3;
L_0069d8b1:; BB(0x0069d8b1);
    /* 0069d8b1: fild dword ptr [esi + 0x270] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x270u)));
    /* 0069d8b7: fmul qword ptr [0x93d948] */ ST(0) = ST(0) * R_F64((u32)(0x93d948u));
    /* 0069d8bd: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0069d8c0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0069d8c4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069d8c9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0069d8cd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0069d8d1: fistp dword ptr [esi + 0x3e0] */ W32((u32)(r_esi+0x3e0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069d8d7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0069d8da: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069d8dc: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
L_0069d8e3:; BB(0x0069d8e3);
    /* 0069d8e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e7: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d8e9: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d8eeu); f_00694390();
    /* 0069d8ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069d8f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d8f2: ret  */ FN_RET(0x0069d7d7); r_esp += 4; return;
}

void f_0069d7e5(void)
{
    FN_ENTER(0x0069d7e5);
    /* 0069d7e5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d7e7: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d7e9: call 0x69ebc8 */ r_esp -= 4; W32(r_esp, 0x69d7eeu); f_0069ebc8();
    /* 0069d7ee: jmp 0x69d875 */ goto L_0069d875;
L_0069d875:; BB(0x0069d875);
    /* 0069d875: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d877: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d87cu); f_0077774c();
    /* 0069d87c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0069d87f: mov edx, dword ptr [esi + 0xb0] */ r_edx = R32((u32)(r_esi+0xb0u));
    /* 0069d885: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069d88a: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0069d88d: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069d893: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069d896: mov dword ptr [esi + 0xb0], edx */ W32((u32)(r_esi+0xb0u), r_edx);
    /* 0069d89c: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d8a1: je 0x69d8b1 */ if (fZ) goto L_0069d8b1;
L_0069d8a3:; BB(0x0069d8a3);
    /* 0069d8a3: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d8a8: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0069d8af: jmp 0x69d8e3 */ goto L_0069d8e3;
L_0069d8b1:; BB(0x0069d8b1);
    /* 0069d8b1: fild dword ptr [esi + 0x270] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x270u)));
    /* 0069d8b7: fmul qword ptr [0x93d948] */ ST(0) = ST(0) * R_F64((u32)(0x93d948u));
    /* 0069d8bd: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0069d8c0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0069d8c4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069d8c9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0069d8cd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0069d8d1: fistp dword ptr [esi + 0x3e0] */ W32((u32)(r_esi+0x3e0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069d8d7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0069d8da: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069d8dc: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
L_0069d8e3:; BB(0x0069d8e3);
    /* 0069d8e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e7: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d8e9: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d8eeu); f_00694390();
    /* 0069d8ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069d8f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d8f2: ret  */ FN_RET(0x0069d7e5); r_esp += 4; return;
}

void f_0069d7f3(void)
{
    FN_ENTER(0x0069d7f3);
    /* 0069d7f3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d7f5: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d7f7: call 0x69ef04 */ r_esp -= 4; W32(r_esp, 0x69d7fcu); f_0069ef04();
    /* 0069d7fc: jmp 0x69d875 */ goto L_0069d875;
L_0069d875:; BB(0x0069d875);
    /* 0069d875: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d877: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d87cu); f_0077774c();
    /* 0069d87c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0069d87f: mov edx, dword ptr [esi + 0xb0] */ r_edx = R32((u32)(r_esi+0xb0u));
    /* 0069d885: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069d88a: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0069d88d: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069d893: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069d896: mov dword ptr [esi + 0xb0], edx */ W32((u32)(r_esi+0xb0u), r_edx);
    /* 0069d89c: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d8a1: je 0x69d8b1 */ if (fZ) goto L_0069d8b1;
L_0069d8a3:; BB(0x0069d8a3);
    /* 0069d8a3: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d8a8: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0069d8af: jmp 0x69d8e3 */ goto L_0069d8e3;
L_0069d8b1:; BB(0x0069d8b1);
    /* 0069d8b1: fild dword ptr [esi + 0x270] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x270u)));
    /* 0069d8b7: fmul qword ptr [0x93d948] */ ST(0) = ST(0) * R_F64((u32)(0x93d948u));
    /* 0069d8bd: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0069d8c0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0069d8c4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069d8c9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0069d8cd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0069d8d1: fistp dword ptr [esi + 0x3e0] */ W32((u32)(r_esi+0x3e0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069d8d7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0069d8da: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069d8dc: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
L_0069d8e3:; BB(0x0069d8e3);
    /* 0069d8e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e7: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d8e9: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d8eeu); f_00694390();
    /* 0069d8ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069d8f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d8f2: ret  */ FN_RET(0x0069d7f3); r_esp += 4; return;
}

void f_0069d7fe(void)
{
    FN_ENTER(0x0069d7fe);
    /* 0069d7fe: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d800: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d802: call 0x69f148 */ r_esp -= 4; W32(r_esp, 0x69d807u); f_0069f148();
    /* 0069d807: jmp 0x69d875 */ goto L_0069d875;
L_0069d875:; BB(0x0069d875);
    /* 0069d875: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d877: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d87cu); f_0077774c();
    /* 0069d87c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0069d87f: mov edx, dword ptr [esi + 0xb0] */ r_edx = R32((u32)(r_esi+0xb0u));
    /* 0069d885: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069d88a: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0069d88d: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069d893: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069d896: mov dword ptr [esi + 0xb0], edx */ W32((u32)(r_esi+0xb0u), r_edx);
    /* 0069d89c: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d8a1: je 0x69d8b1 */ if (fZ) goto L_0069d8b1;
L_0069d8a3:; BB(0x0069d8a3);
    /* 0069d8a3: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d8a8: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0069d8af: jmp 0x69d8e3 */ goto L_0069d8e3;
L_0069d8b1:; BB(0x0069d8b1);
    /* 0069d8b1: fild dword ptr [esi + 0x270] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x270u)));
    /* 0069d8b7: fmul qword ptr [0x93d948] */ ST(0) = ST(0) * R_F64((u32)(0x93d948u));
    /* 0069d8bd: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0069d8c0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0069d8c4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069d8c9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0069d8cd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0069d8d1: fistp dword ptr [esi + 0x3e0] */ W32((u32)(r_esi+0x3e0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069d8d7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0069d8da: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069d8dc: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
L_0069d8e3:; BB(0x0069d8e3);
    /* 0069d8e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e7: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d8e9: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d8eeu); f_00694390();
    /* 0069d8ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069d8f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d8f2: ret  */ FN_RET(0x0069d7fe); r_esp += 4; return;
}

void f_0069d809(void)
{
    FN_ENTER(0x0069d809);
    /* 0069d809: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d80b: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d80d: call 0x69f384 */ r_esp -= 4; W32(r_esp, 0x69d812u); f_0069f384();
    /* 0069d812: jmp 0x69d875 */ goto L_0069d875;
L_0069d875:; BB(0x0069d875);
    /* 0069d875: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d877: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d87cu); f_0077774c();
    /* 0069d87c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0069d87f: mov edx, dword ptr [esi + 0xb0] */ r_edx = R32((u32)(r_esi+0xb0u));
    /* 0069d885: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069d88a: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0069d88d: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069d893: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069d896: mov dword ptr [esi + 0xb0], edx */ W32((u32)(r_esi+0xb0u), r_edx);
    /* 0069d89c: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d8a1: je 0x69d8b1 */ if (fZ) goto L_0069d8b1;
L_0069d8a3:; BB(0x0069d8a3);
    /* 0069d8a3: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d8a8: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0069d8af: jmp 0x69d8e3 */ goto L_0069d8e3;
L_0069d8b1:; BB(0x0069d8b1);
    /* 0069d8b1: fild dword ptr [esi + 0x270] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x270u)));
    /* 0069d8b7: fmul qword ptr [0x93d948] */ ST(0) = ST(0) * R_F64((u32)(0x93d948u));
    /* 0069d8bd: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0069d8c0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0069d8c4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069d8c9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0069d8cd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0069d8d1: fistp dword ptr [esi + 0x3e0] */ W32((u32)(r_esi+0x3e0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069d8d7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0069d8da: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069d8dc: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
L_0069d8e3:; BB(0x0069d8e3);
    /* 0069d8e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e7: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d8e9: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d8eeu); f_00694390();
    /* 0069d8ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069d8f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d8f2: ret  */ FN_RET(0x0069d809); r_esp += 4; return;
}

void f_0069d814(void)
{
    FN_ENTER(0x0069d814);
    /* 0069d814: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d816: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d818: call 0x69f648 */ r_esp -= 4; W32(r_esp, 0x69d81du); f_0069f648();
    /* 0069d81d: jmp 0x69d875 */ goto L_0069d875;
L_0069d875:; BB(0x0069d875);
    /* 0069d875: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d877: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d87cu); f_0077774c();
    /* 0069d87c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0069d87f: mov edx, dword ptr [esi + 0xb0] */ r_edx = R32((u32)(r_esi+0xb0u));
    /* 0069d885: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069d88a: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0069d88d: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069d893: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069d896: mov dword ptr [esi + 0xb0], edx */ W32((u32)(r_esi+0xb0u), r_edx);
    /* 0069d89c: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d8a1: je 0x69d8b1 */ if (fZ) goto L_0069d8b1;
L_0069d8a3:; BB(0x0069d8a3);
    /* 0069d8a3: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d8a8: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0069d8af: jmp 0x69d8e3 */ goto L_0069d8e3;
L_0069d8b1:; BB(0x0069d8b1);
    /* 0069d8b1: fild dword ptr [esi + 0x270] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x270u)));
    /* 0069d8b7: fmul qword ptr [0x93d948] */ ST(0) = ST(0) * R_F64((u32)(0x93d948u));
    /* 0069d8bd: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0069d8c0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0069d8c4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069d8c9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0069d8cd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0069d8d1: fistp dword ptr [esi + 0x3e0] */ W32((u32)(r_esi+0x3e0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069d8d7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0069d8da: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069d8dc: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
L_0069d8e3:; BB(0x0069d8e3);
    /* 0069d8e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e7: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d8e9: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d8eeu); f_00694390();
    /* 0069d8ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069d8f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d8f2: ret  */ FN_RET(0x0069d814); r_esp += 4; return;
}

void f_0069d81f(void)
{
    FN_ENTER(0x0069d81f);
    /* 0069d81f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d821: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d823: call 0x69fe2c */ r_esp -= 4; W32(r_esp, 0x69d828u); f_0069fe2c();
    /* 0069d828: jmp 0x69d875 */ goto L_0069d875;
L_0069d875:; BB(0x0069d875);
    /* 0069d875: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d877: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d87cu); f_0077774c();
    /* 0069d87c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0069d87f: mov edx, dword ptr [esi + 0xb0] */ r_edx = R32((u32)(r_esi+0xb0u));
    /* 0069d885: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069d88a: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0069d88d: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069d893: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069d896: mov dword ptr [esi + 0xb0], edx */ W32((u32)(r_esi+0xb0u), r_edx);
    /* 0069d89c: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d8a1: je 0x69d8b1 */ if (fZ) goto L_0069d8b1;
L_0069d8a3:; BB(0x0069d8a3);
    /* 0069d8a3: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d8a8: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0069d8af: jmp 0x69d8e3 */ goto L_0069d8e3;
L_0069d8b1:; BB(0x0069d8b1);
    /* 0069d8b1: fild dword ptr [esi + 0x270] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x270u)));
    /* 0069d8b7: fmul qword ptr [0x93d948] */ ST(0) = ST(0) * R_F64((u32)(0x93d948u));
    /* 0069d8bd: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0069d8c0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0069d8c4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069d8c9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0069d8cd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0069d8d1: fistp dword ptr [esi + 0x3e0] */ W32((u32)(r_esi+0x3e0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069d8d7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0069d8da: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069d8dc: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
L_0069d8e3:; BB(0x0069d8e3);
    /* 0069d8e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e7: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d8e9: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d8eeu); f_00694390();
    /* 0069d8ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069d8f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d8f2: ret  */ FN_RET(0x0069d81f); r_esp += 4; return;
}

void f_0069d82a(void)
{
    FN_ENTER(0x0069d82a);
    /* 0069d82a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d82c: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d82e: call 0x6a0624 */ r_esp -= 4; W32(r_esp, 0x69d833u); f_006a0624();
    /* 0069d833: jmp 0x69d875 */ goto L_0069d875;
L_0069d875:; BB(0x0069d875);
    /* 0069d875: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d877: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d87cu); f_0077774c();
    /* 0069d87c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0069d87f: mov edx, dword ptr [esi + 0xb0] */ r_edx = R32((u32)(r_esi+0xb0u));
    /* 0069d885: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069d88a: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0069d88d: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069d893: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069d896: mov dword ptr [esi + 0xb0], edx */ W32((u32)(r_esi+0xb0u), r_edx);
    /* 0069d89c: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d8a1: je 0x69d8b1 */ if (fZ) goto L_0069d8b1;
L_0069d8a3:; BB(0x0069d8a3);
    /* 0069d8a3: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d8a8: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0069d8af: jmp 0x69d8e3 */ goto L_0069d8e3;
L_0069d8b1:; BB(0x0069d8b1);
    /* 0069d8b1: fild dword ptr [esi + 0x270] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x270u)));
    /* 0069d8b7: fmul qword ptr [0x93d948] */ ST(0) = ST(0) * R_F64((u32)(0x93d948u));
    /* 0069d8bd: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0069d8c0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0069d8c4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069d8c9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0069d8cd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0069d8d1: fistp dword ptr [esi + 0x3e0] */ W32((u32)(r_esi+0x3e0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069d8d7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0069d8da: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069d8dc: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
L_0069d8e3:; BB(0x0069d8e3);
    /* 0069d8e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e7: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d8e9: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d8eeu); f_00694390();
    /* 0069d8ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069d8f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d8f2: ret  */ FN_RET(0x0069d82a); r_esp += 4; return;
}

void f_0069d835(void)
{
    FN_ENTER(0x0069d835);
    /* 0069d835: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d837: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d839: call 0x6a0994 */ r_esp -= 4; W32(r_esp, 0x69d83eu); f_006a0994();
    /* 0069d83e: jmp 0x69d875 */ goto L_0069d875;
L_0069d875:; BB(0x0069d875);
    /* 0069d875: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d877: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d87cu); f_0077774c();
    /* 0069d87c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0069d87f: mov edx, dword ptr [esi + 0xb0] */ r_edx = R32((u32)(r_esi+0xb0u));
    /* 0069d885: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069d88a: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0069d88d: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069d893: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069d896: mov dword ptr [esi + 0xb0], edx */ W32((u32)(r_esi+0xb0u), r_edx);
    /* 0069d89c: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d8a1: je 0x69d8b1 */ if (fZ) goto L_0069d8b1;
L_0069d8a3:; BB(0x0069d8a3);
    /* 0069d8a3: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d8a8: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0069d8af: jmp 0x69d8e3 */ goto L_0069d8e3;
L_0069d8b1:; BB(0x0069d8b1);
    /* 0069d8b1: fild dword ptr [esi + 0x270] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x270u)));
    /* 0069d8b7: fmul qword ptr [0x93d948] */ ST(0) = ST(0) * R_F64((u32)(0x93d948u));
    /* 0069d8bd: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0069d8c0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0069d8c4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069d8c9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0069d8cd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0069d8d1: fistp dword ptr [esi + 0x3e0] */ W32((u32)(r_esi+0x3e0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069d8d7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0069d8da: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069d8dc: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
L_0069d8e3:; BB(0x0069d8e3);
    /* 0069d8e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e7: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d8e9: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d8eeu); f_00694390();
    /* 0069d8ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069d8f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d8f2: ret  */ FN_RET(0x0069d835); r_esp += 4; return;
}

void f_0069d840(void)
{
    FN_ENTER(0x0069d840);
    /* 0069d840: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d842: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d844: call 0x6a0eb8 */ r_esp -= 4; W32(r_esp, 0x69d849u); f_006a0eb8();
    /* 0069d849: jmp 0x69d875 */ goto L_0069d875;
L_0069d875:; BB(0x0069d875);
    /* 0069d875: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d877: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d87cu); f_0077774c();
    /* 0069d87c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0069d87f: mov edx, dword ptr [esi + 0xb0] */ r_edx = R32((u32)(r_esi+0xb0u));
    /* 0069d885: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069d88a: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0069d88d: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069d893: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069d896: mov dword ptr [esi + 0xb0], edx */ W32((u32)(r_esi+0xb0u), r_edx);
    /* 0069d89c: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d8a1: je 0x69d8b1 */ if (fZ) goto L_0069d8b1;
L_0069d8a3:; BB(0x0069d8a3);
    /* 0069d8a3: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d8a8: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0069d8af: jmp 0x69d8e3 */ goto L_0069d8e3;
L_0069d8b1:; BB(0x0069d8b1);
    /* 0069d8b1: fild dword ptr [esi + 0x270] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x270u)));
    /* 0069d8b7: fmul qword ptr [0x93d948] */ ST(0) = ST(0) * R_F64((u32)(0x93d948u));
    /* 0069d8bd: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0069d8c0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0069d8c4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069d8c9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0069d8cd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0069d8d1: fistp dword ptr [esi + 0x3e0] */ W32((u32)(r_esi+0x3e0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069d8d7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0069d8da: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069d8dc: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
L_0069d8e3:; BB(0x0069d8e3);
    /* 0069d8e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e7: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d8e9: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d8eeu); f_00694390();
    /* 0069d8ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069d8f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d8f2: ret  */ FN_RET(0x0069d840); r_esp += 4; return;
}

void f_0069d84b(void)
{
    FN_ENTER(0x0069d84b);
    /* 0069d84b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d84d: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d84f: call 0x6a139c */ r_esp -= 4; W32(r_esp, 0x69d854u); f_006a139c();
    /* 0069d854: jmp 0x69d875 */ goto L_0069d875;
L_0069d875:; BB(0x0069d875);
    /* 0069d875: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d877: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d87cu); f_0077774c();
    /* 0069d87c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0069d87f: mov edx, dword ptr [esi + 0xb0] */ r_edx = R32((u32)(r_esi+0xb0u));
    /* 0069d885: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069d88a: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0069d88d: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069d893: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069d896: mov dword ptr [esi + 0xb0], edx */ W32((u32)(r_esi+0xb0u), r_edx);
    /* 0069d89c: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d8a1: je 0x69d8b1 */ if (fZ) goto L_0069d8b1;
L_0069d8a3:; BB(0x0069d8a3);
    /* 0069d8a3: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d8a8: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0069d8af: jmp 0x69d8e3 */ goto L_0069d8e3;
L_0069d8b1:; BB(0x0069d8b1);
    /* 0069d8b1: fild dword ptr [esi + 0x270] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x270u)));
    /* 0069d8b7: fmul qword ptr [0x93d948] */ ST(0) = ST(0) * R_F64((u32)(0x93d948u));
    /* 0069d8bd: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0069d8c0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0069d8c4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069d8c9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0069d8cd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0069d8d1: fistp dword ptr [esi + 0x3e0] */ W32((u32)(r_esi+0x3e0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069d8d7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0069d8da: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069d8dc: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
L_0069d8e3:; BB(0x0069d8e3);
    /* 0069d8e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e7: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d8e9: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d8eeu); f_00694390();
    /* 0069d8ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069d8f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d8f2: ret  */ FN_RET(0x0069d84b); r_esp += 4; return;
}

void f_0069d856(void)
{
    FN_ENTER(0x0069d856);
    /* 0069d856: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d858: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d85a: call 0x6a1a60 */ r_esp -= 4; W32(r_esp, 0x69d85fu); f_006a1a60();
    /* 0069d85f: jmp 0x69d875 */ goto L_0069d875;
L_0069d875:; BB(0x0069d875);
    /* 0069d875: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d877: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d87cu); f_0077774c();
    /* 0069d87c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0069d87f: mov edx, dword ptr [esi + 0xb0] */ r_edx = R32((u32)(r_esi+0xb0u));
    /* 0069d885: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069d88a: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0069d88d: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069d893: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069d896: mov dword ptr [esi + 0xb0], edx */ W32((u32)(r_esi+0xb0u), r_edx);
    /* 0069d89c: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d8a1: je 0x69d8b1 */ if (fZ) goto L_0069d8b1;
L_0069d8a3:; BB(0x0069d8a3);
    /* 0069d8a3: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d8a8: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0069d8af: jmp 0x69d8e3 */ goto L_0069d8e3;
L_0069d8b1:; BB(0x0069d8b1);
    /* 0069d8b1: fild dword ptr [esi + 0x270] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x270u)));
    /* 0069d8b7: fmul qword ptr [0x93d948] */ ST(0) = ST(0) * R_F64((u32)(0x93d948u));
    /* 0069d8bd: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0069d8c0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0069d8c4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069d8c9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0069d8cd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0069d8d1: fistp dword ptr [esi + 0x3e0] */ W32((u32)(r_esi+0x3e0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069d8d7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0069d8da: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069d8dc: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
L_0069d8e3:; BB(0x0069d8e3);
    /* 0069d8e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e7: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d8e9: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d8eeu); f_00694390();
    /* 0069d8ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069d8f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d8f2: ret  */ FN_RET(0x0069d856); r_esp += 4; return;
}

void f_0069d861(void)
{
    FN_ENTER(0x0069d861);
    /* 0069d861: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d863: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d865: call 0x69b93c */ r_esp -= 4; W32(r_esp, 0x69d86au); f_0069b93c();
    /* 0069d86a: jmp 0x69d875 */ goto L_0069d875;
L_0069d875:; BB(0x0069d875);
    /* 0069d875: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d877: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d87cu); f_0077774c();
    /* 0069d87c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0069d87f: mov edx, dword ptr [esi + 0xb0] */ r_edx = R32((u32)(r_esi+0xb0u));
    /* 0069d885: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069d88a: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0069d88d: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069d893: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069d896: mov dword ptr [esi + 0xb0], edx */ W32((u32)(r_esi+0xb0u), r_edx);
    /* 0069d89c: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d8a1: je 0x69d8b1 */ if (fZ) goto L_0069d8b1;
L_0069d8a3:; BB(0x0069d8a3);
    /* 0069d8a3: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d8a8: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0069d8af: jmp 0x69d8e3 */ goto L_0069d8e3;
L_0069d8b1:; BB(0x0069d8b1);
    /* 0069d8b1: fild dword ptr [esi + 0x270] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x270u)));
    /* 0069d8b7: fmul qword ptr [0x93d948] */ ST(0) = ST(0) * R_F64((u32)(0x93d948u));
    /* 0069d8bd: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0069d8c0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0069d8c4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069d8c9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0069d8cd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0069d8d1: fistp dword ptr [esi + 0x3e0] */ W32((u32)(r_esi+0x3e0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069d8d7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0069d8da: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069d8dc: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
L_0069d8e3:; BB(0x0069d8e3);
    /* 0069d8e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e7: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d8e9: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d8eeu); f_00694390();
    /* 0069d8ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069d8f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d8f2: ret  */ FN_RET(0x0069d861); r_esp += 4; return;
}

void f_0069d86c(void)
{
    FN_ENTER(0x0069d86c);
    /* 0069d86c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d86e: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d870: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x69d875u); f_006a1ac0();
    /* 0069d875: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d877: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d87cu); f_0077774c();
    /* 0069d87c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0069d87f: mov edx, dword ptr [esi + 0xb0] */ r_edx = R32((u32)(r_esi+0xb0u));
    /* 0069d885: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069d88a: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0069d88d: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069d893: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069d896: mov dword ptr [esi + 0xb0], edx */ W32((u32)(r_esi+0xb0u), r_edx);
    /* 0069d89c: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d8a1: je 0x69d8b1 */ if (fZ) goto L_0069d8b1;
L_0069d8a3:; BB(0x0069d8a3);
    /* 0069d8a3: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d8a8: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0069d8af: jmp 0x69d8e3 */ goto L_0069d8e3;
L_0069d8b1:; BB(0x0069d8b1);
    /* 0069d8b1: fild dword ptr [esi + 0x270] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x270u)));
    /* 0069d8b7: fmul qword ptr [0x93d948] */ ST(0) = ST(0) * R_F64((u32)(0x93d948u));
    /* 0069d8bd: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0069d8c0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0069d8c4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069d8c9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0069d8cd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0069d8d1: fistp dword ptr [esi + 0x3e0] */ W32((u32)(r_esi+0x3e0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069d8d7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0069d8da: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069d8dc: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
L_0069d8e3:; BB(0x0069d8e3);
    /* 0069d8e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e7: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d8e9: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d8eeu); f_00694390();
    /* 0069d8ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069d8f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d8f2: ret  */ FN_RET(0x0069d86c); r_esp += 4; return;
}

void f_0069d875(void)
{
    FN_ENTER(0x0069d875);
    /* 0069d875: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d877: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69d87cu); f_0077774c();
    /* 0069d87c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0069d87f: mov edx, dword ptr [esi + 0xb0] */ r_edx = R32((u32)(r_esi+0xb0u));
    /* 0069d885: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069d88a: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0069d88d: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0069d893: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069d896: mov dword ptr [esi + 0xb0], edx */ W32((u32)(r_esi+0xb0u), r_edx);
    /* 0069d89c: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d8a1: je 0x69d8b1 */ if (fZ) goto L_0069d8b1;
L_0069d8a3:; BB(0x0069d8a3);
    /* 0069d8a3: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d8a8: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0069d8af: jmp 0x69d8e3 */ goto L_0069d8e3;
L_0069d8b1:; BB(0x0069d8b1);
    /* 0069d8b1: fild dword ptr [esi + 0x270] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x270u)));
    /* 0069d8b7: fmul qword ptr [0x93d948] */ ST(0) = ST(0) * R_F64((u32)(0x93d948u));
    /* 0069d8bd: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0069d8c0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0069d8c4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069d8c9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0069d8cd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0069d8d1: fistp dword ptr [esi + 0x3e0] */ W32((u32)(r_esi+0x3e0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069d8d7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0069d8da: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069d8dc: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
L_0069d8e3:; BB(0x0069d8e3);
    /* 0069d8e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e5: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d8e7: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d8e9: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69d8eeu); f_00694390();
    /* 0069d8ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069d8f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d8f2: ret  */ FN_RET(0x0069d875); r_esp += 4; return;
}

void f_0069d8f4(void) /* sub_69D8F4 */
{
    FN_ENTER(0x0069d8f4);
    /* 0069d8f4: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 0069d8f9: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069d8fc: ja 0x69d973 */ if ((!fC&&!fZ)) goto L_0069d973;
L_0069d8fe:; BB(0x0069d8fe);
    /* 0069d8fe: mov eax, dword ptr [eax*4 + 0x93cea4] */ r_eax = R32((u32)(r_eax*4+0x93cea4u));
    /* 0069d905: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0069d973:; BB(0x0069d973);
    /* 0069d973: ret 4 */ FN_RET(0x0069d8f4); r_esp += 8; return;
}

void f_0069d907(void)
{
    FN_ENTER(0x0069d907);
    /* 0069d907: call 0x69d978 */ r_esp -= 4; W32(r_esp, 0x69d90cu); f_0069d978();
    /* 0069d90c: jmp 0x69d973 */ goto L_0069d973;
L_0069d973:; BB(0x0069d973);
    /* 0069d973: ret 4 */ FN_RET(0x0069d907); r_esp += 8; return;
}

void f_0069d90e(void)
{
    FN_ENTER(0x0069d90e);
    /* 0069d90e: call 0x6a2994 */ r_esp -= 4; W32(r_esp, 0x69d913u); f_006a2994();
    /* 0069d913: jmp 0x69d973 */ goto L_0069d973;
L_0069d973:; BB(0x0069d973);
    /* 0069d973: ret 4 */ FN_RET(0x0069d90e); r_esp += 8; return;
}

void f_0069d915(void)
{
    FN_ENTER(0x0069d915);
    /* 0069d915: call 0x69da2c */ r_esp -= 4; W32(r_esp, 0x69d91au); f_0069da2c();
    /* 0069d91a: jmp 0x69d973 */ goto L_0069d973;
L_0069d973:; BB(0x0069d973);
    /* 0069d973: ret 4 */ FN_RET(0x0069d915); r_esp += 8; return;
}

void f_0069d91c(void)
{
    FN_ENTER(0x0069d91c);
    /* 0069d91c: call 0x69da9c */ r_esp -= 4; W32(r_esp, 0x69d921u); f_0069da9c();
    /* 0069d921: jmp 0x69d973 */ goto L_0069d973;
L_0069d973:; BB(0x0069d973);
    /* 0069d973: ret 4 */ FN_RET(0x0069d91c); r_esp += 8; return;
}

void f_0069d923(void)
{
    FN_ENTER(0x0069d923);
    /* 0069d923: mov edx, dword ptr [ecx + 0x634] */ r_edx = R32((u32)(r_ecx+0x634u));
    /* 0069d929: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069d92b: mov word ptr [0xa9432c], ax */ W16((u32)(0xa9432cu), (u16)r_eax);
    /* 0069d931: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069d933: mov word ptr [0xa94330], ax */ W16((u32)(0xa94330u), (u16)r_eax);
    /* 0069d939: je 0x69d973 */ if (fZ) goto L_0069d973;
L_0069d93b:; BB(0x0069d93b);
    /* 0069d93b: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 0069d941: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069d943: je 0x69d94c */ if (fZ) goto L_0069d94c;
L_0069d945:; BB(0x0069d945);
    /* 0069d945: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d94a: jmp 0x69d94e */ goto L_0069d94e;
L_0069d94c:; BB(0x0069d94c);
    /* 0069d94c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0069d94e:; BB(0x0069d94e);
    /* 0069d94e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069d950: jne 0x69d973 */ if (!fZ) goto L_0069d973;
L_0069d952:; BB(0x0069d952);
    /* 0069d952: push 0xa9432c */ { u32 v = 0xa9432cu; r_esp -= 4; W32(r_esp, v); }
    /* 0069d957: push 0xa94330 */ { u32 v = 0xa94330u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d95c: call 0x70a60c */ r_esp -= 4; W32(r_esp, 0x69d961u); f_0070a60c();
    /* 0069d961: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069d964: ret 4 */ FN_RET(0x0069d923); r_esp += 8; return;
L_0069d973:; BB(0x0069d973);
    /* 0069d973: ret 4 */ FN_RET(0x0069d923); r_esp += 8; return;
}

void f_0069d967(void)
{
    FN_ENTER(0x0069d967);
    /* 0069d967: call 0x69efbc */ r_esp -= 4; W32(r_esp, 0x69d96cu); f_0069efbc();
    /* 0069d96c: jmp 0x69d973 */ goto L_0069d973;
L_0069d973:; BB(0x0069d973);
    /* 0069d973: ret 4 */ FN_RET(0x0069d967); r_esp += 8; return;
}

void f_0069d96e(void)
{
    FN_ENTER(0x0069d96e);
    /* 0069d96e: call 0x69db5c */ r_esp -= 4; W32(r_esp, 0x69d973u); f_0069db5c();
    /* 0069d973: ret 4 */ FN_RET(0x0069d96e); r_esp += 8; return;
}

void f_0069d973(void)
{
    FN_ENTER(0x0069d973);
    /* 0069d973: ret 4 */ FN_RET(0x0069d973); r_esp += 8; return;
}

void f_0069d978(void) /* sub_69D978 */
{
    FN_ENTER(0x0069d978);
    /* 0069d978: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069d979: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0069d97b: movsx eax, word ptr [ebp + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x330u));
    /* 0069d982: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 0069d984: jne 0x69d9ee */ if (!fZ) goto L_0069d9ee;
L_0069d986:; BB(0x0069d986);
    /* 0069d986: fld dword ptr [0x93da2c] */ FPUSH(R_F32((u32)(0x93da2cu)));
    /* 0069d98c: fadd dword ptr [ebp + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x2b8u));
    /* 0069d992: fcom dword ptr [0x93da28] */ fx_compare(ST(0), R_F32((u32)(0x93da28u))); 
    /* 0069d998: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069d99a: fstp dword ptr [ebp + 0x2b8] */ W_F32((u32)(r_ebp+0x2b8u), ST(0)); FPOP();
    /* 0069d9a0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0069d9a1: jae 0x69da10 */ if (!fC) goto L_0069da10;
L_0069d9a3:; BB(0x0069d9a3);
    /* 0069d9a3: mov eax, 1 */ r_eax = 0x1u;
    /* 0069d9a8: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 0069d9af: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069d9b1: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69d9b6u); f_0069d1bc();
    /* 0069d9b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d9b7: mov edx, dword ptr [ebp + 0xb0] */ r_edx = R32((u32)(r_ebp+0xb0u));
    /* 0069d9bd: and edx, 0xfffffffb */ {  u32 a = r_edx; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0069d9c0: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069d9c3: mov dword ptr [ebp + 0xb0], edx */ W32((u32)(r_ebp+0xb0u), r_edx);
    /* 0069d9c9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069d9cb: call 0x7a9a6c */ r_esp -= 4; W32(r_esp, 0x69d9d0u); f_007a9a6c();
    /* 0069d9d0: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0069d9d6: mov dword ptr [ebp + 0x2b8], 0x41c00000 */ W32((u32)(r_ebp+0x2b8u), 0x41c00000u);
    /* 0069d9e0: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069d9e3: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069d9e6: mov dword ptr [ebp + 0xb0], eax */ W32((u32)(r_ebp+0xb0u), r_eax);
    /* 0069d9ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069d9ed: ret  */ FN_RET(0x0069d978); r_esp += 4; return;
L_0069d9ee:; BB(0x0069d9ee);
    /* 0069d9ee: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069d9f1: jne 0x69da10 */ if (!fZ) goto L_0069da10;
L_0069d9f3:; BB(0x0069d9f3);
    /* 0069d9f3: fld dword ptr [0x93da2c] */ FPUSH(R_F32((u32)(0x93da2cu)));
    /* 0069d9f9: fadd dword ptr [ebp + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x2b8u));
    /* 0069d9ff: fcom dword ptr [0x93da28] */ fx_compare(ST(0), R_F32((u32)(0x93da28u))); 
    /* 0069da05: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069da07: fstp dword ptr [ebp + 0x2b8] */ W_F32((u32)(r_ebp+0x2b8u), ST(0)); FPOP();
    /* 0069da0d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0069da0e: jb 0x69da12 */ if (fC) goto L_0069da12;
L_0069da10:; BB(0x0069da10);
    /* 0069da10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069da11: ret  */ FN_RET(0x0069d978); r_esp += 4; return;
L_0069da12:; BB(0x0069da12);
    /* 0069da12: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0069da18: and eax, 0xffffffbf */ {  u32 a = r_eax; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069da1b: mov dword ptr [ebp + 0xb0], eax */ W32((u32)(r_ebp+0xb0u), r_eax);
    /* 0069da21: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069da23: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069da25: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x69da2au); f_006a1ac0();
    /* 0069da2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069da2b: ret  */ FN_RET(0x0069d978); r_esp += 4; return;
}

void f_0069da2c(void) /* sub_69DA2C */
{
    FN_ENTER(0x0069da2c);
    /* 0069da2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069da2d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069da2e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0069da30: mov eax, dword ptr [ebp + 0x92c] */ r_eax = R32((u32)(r_ebp+0x92cu));
    /* 0069da36: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069da38: je 0x69da4e */ if (fZ) goto L_0069da4e;
L_0069da3a:; BB(0x0069da3a);
    /* 0069da3a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069da3c: call 0x688f70 */ r_esp -= 4; W32(r_esp, 0x69da41u); f_00688f70();
    /* 0069da41: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069da43: call 0x695388 */ r_esp -= 4; W32(r_esp, 0x69da48u); f_00695388();
    /* 0069da48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069da4a: jne 0x69da90 */ if (!fZ) goto L_0069da90;
L_0069da4c:; BB(0x0069da4c);
    /* 0069da4c: jmp 0x69da55 */ goto L_0069da55;
L_0069da4e:; BB(0x0069da4e);
    /* 0069da4e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069da50: call 0x6903fc */ r_esp -= 4; W32(r_esp, 0x69da55u); f_006903fc();
L_0069da55:; BB(0x0069da55);
    /* 0069da55: lea ecx, [ebp + 0x4e4] */ r_ecx = (u32)(r_ebp+0x4e4u);
    /* 0069da5b: call 0x6a7e6c */ r_esp -= 4; W32(r_esp, 0x69da60u); f_006a7e6c();
    /* 0069da60: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069da62: je 0x69da73 */ if (fZ) goto L_0069da73;
L_0069da64:; BB(0x0069da64);
    /* 0069da64: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0069da6b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069da6e: jne 0x69da73 */ if (!fZ) goto L_0069da73;
L_0069da70:; BB(0x0069da70);
    /* 0069da70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069da71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069da72: ret  */ FN_RET(0x0069da2c); r_esp += 4; return;
L_0069da73:; BB(0x0069da73);
    /* 0069da73: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0069da77: mov byte ptr [esp], 0x4f */ W8((u32)(r_esp), 0x4fu);
    /* 0069da7b: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0069da80: mov byte ptr [esp + 1], 1 */ W8((u32)(r_esp+0x1u), 0x1u);
    /* 0069da85: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069da88: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x69da8du); f_008003e0();
    /* 0069da8d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069da8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069da8f: ret  */ FN_RET(0x0069da2c); r_esp += 4; return;
L_0069da90:; BB(0x0069da90);
    /* 0069da90: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069da92: call 0x695420 */ r_esp -= 4; W32(r_esp, 0x69da97u); f_00695420();
    /* 0069da97: jmp 0x69da55 */ goto L_0069da55;
}

void f_0069da9c(void) /* sub_69DA9C */
{
    FN_ENTER(0x0069da9c);
    /* 0069da9c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069da9d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0069da9f: movsx eax, word ptr [ebp + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x330u));
    /* 0069daa6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 0069daa8: jne 0x69db12 */ if (!fZ) goto L_0069db12;
L_0069daaa:; BB(0x0069daaa);
    /* 0069daaa: fld dword ptr [0x93da20] */ FPUSH(R_F32((u32)(0x93da20u)));
    /* 0069dab0: fadd dword ptr [ebp + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x2b8u));
    /* 0069dab6: fcom dword ptr [0x93da1c] */ fx_compare(ST(0), R_F32((u32)(0x93da1cu))); 
    /* 0069dabc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069dabe: fstp dword ptr [ebp + 0x2b8] */ W_F32((u32)(r_ebp+0x2b8u), ST(0)); FPOP();
    /* 0069dac4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0069dac5: jae 0x69db34 */ if (!fC) goto L_0069db34;
L_0069dac7:; BB(0x0069dac7);
    /* 0069dac7: mov eax, 1 */ r_eax = 0x1u;
    /* 0069dacc: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 0069dad3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069dad5: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x69dadau); f_0069d1bc();
    /* 0069dada: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069dadb: mov edx, dword ptr [ebp + 0xb0] */ r_edx = R32((u32)(r_ebp+0xb0u));
    /* 0069dae1: and edx, 0xfffffffb */ {  u32 a = r_edx; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0069dae4: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069dae7: mov dword ptr [ebp + 0xb0], edx */ W32((u32)(r_ebp+0xb0u), r_edx);
    /* 0069daed: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069daef: call 0x7a9a6c */ r_esp -= 4; W32(r_esp, 0x69daf4u); f_007a9a6c();
    /* 0069daf4: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0069dafa: mov dword ptr [ebp + 0x2b8], 0x41c00000 */ W32((u32)(r_ebp+0x2b8u), 0x41c00000u);
    /* 0069db04: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069db07: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069db0a: mov dword ptr [ebp + 0xb0], eax */ W32((u32)(r_ebp+0xb0u), r_eax);
    /* 0069db10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069db11: ret  */ FN_RET(0x0069da9c); r_esp += 4; return;
L_0069db12:; BB(0x0069db12);
    /* 0069db12: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069db15: jne 0x69db34 */ if (!fZ) goto L_0069db34;
L_0069db17:; BB(0x0069db17);
    /* 0069db17: fld dword ptr [0x93da20] */ FPUSH(R_F32((u32)(0x93da20u)));
    /* 0069db1d: fadd dword ptr [ebp + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x2b8u));
    /* 0069db23: fcom dword ptr [0x93da1c] */ fx_compare(ST(0), R_F32((u32)(0x93da1cu))); 
    /* 0069db29: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069db2b: fstp dword ptr [ebp + 0x2b8] */ W_F32((u32)(r_ebp+0x2b8u), ST(0)); FPOP();
    /* 0069db31: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0069db32: jb 0x69db36 */ if (fC) goto L_0069db36;
L_0069db34:; BB(0x0069db34);
    /* 0069db34: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069db35: ret  */ FN_RET(0x0069da9c); r_esp += 4; return;
L_0069db36:; BB(0x0069db36);
    /* 0069db36: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069db37: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0069db3d: and eax, 0xffffffbf */ {  u32 a = r_eax; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069db40: mov dword ptr [ebp + 0xb0], eax */ W32((u32)(r_ebp+0xb0u), r_eax);
    /* 0069db46: call 0x6ac8ac */ r_esp -= 4; W32(r_esp, 0x69db4bu); f_006ac8ac();
    /* 0069db4b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069db4c: mov dword ptr [ebp + 0x720], eax */ W32((u32)(r_ebp+0x720u), r_eax);
    /* 0069db52: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069db54: call 0x69d554 */ r_esp -= 4; W32(r_esp, 0x69db59u); f_0069d554();
    /* 0069db59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069db5a: ret  */ FN_RET(0x0069da9c); r_esp += 4; return;
}

void f_0069db5c(void) /* sub_69DB5C */
{
    FN_ENTER(0x0069db5c);
    /* 0069db5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069db5d: mov ebp, esp */ r_ebp = r_esp;
    /* 0069db5f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069db61: push 0x8eb6bc */ { u32 v = 0x8eb6bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0069db66: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0069db6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069db6d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0069db74: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069db77: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0069db7a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0069db7d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0069db80: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0069db83: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0069db8a: mov dword ptr [ecx + 0x348], 0x12 */ W32((u32)(r_ecx+0x348u), 0x12u);
    /* 0069db94: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0069db97: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0069db9a: ja 0x69dc91 */ if ((!fC&&!fZ)) goto L_0069dc91;
L_0069dba0:; BB(0x0069dba0);
    /* 0069dba0: mov eax, dword ptr [eax*4 + 0x93cee0] */ r_eax = R32((u32)(r_eax*4+0x93cee0u));
    /* 0069dba7: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0069dc91:; BB(0x0069dc91);
    /* 0069dc91: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dc94: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69dc99u); f_0077774c();
    /* 0069dc99: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dca1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069dca3: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 0069dcaa: mov dword ptr [ecx + 0x720], 0x12c */ W32((u32)(r_ecx+0x720u), 0x12cu);
    /* 0069dcb4: mov dword ptr [ecx + 0x2b8], 0x42300000 */ W32((u32)(r_ecx+0x2b8u), 0x42300000u);
    /* 0069dcbe: call 0x7778e0 */ r_esp -= 4; W32(r_esp, 0x69dcc3u); f_007778e0();
    /* 0069dcc3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcc6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcc8: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcca: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69dccfu); f_00694390();
    /* 0069dccf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcd2: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0069dcd8: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcdb: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcde: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 0069dce4: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x69dce9u); f_00807d60();
    /* 0069dce9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dceb: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dced:; BB(0x0069dced);
    /* 0069dced: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0069dcf4: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcf6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x69dcfbu); f_005caba4();
    /* 0069dcfb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069dcfc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0069dcff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dd01: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dd03:; BB(0x0069dd03);
    /* 0069dd03: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0069dd0a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0069dd11: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069dd17: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd1a: mov ecx, eax */ r_ecx = r_eax;
    /* 0069dd1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069dd1d: call 0x6efc48 */ r_esp -= 4; W32(r_esp, 0x69dd22u); f_006efc48();
    /* 0069dd22: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0069dd29:; BB(0x0069dd29);
    /* 0069dd29: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd2c: mov edx, dword ptr [eax + 0x620] */ r_edx = R32((u32)(r_eax+0x620u));
    /* 0069dd32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd34: je 0x69dd50 */ if (fZ) goto L_0069dd50;
L_0069dd36:; BB(0x0069dd36);
    /* 0069dd36: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0069dd3a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd3f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0069dd43: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd46: mov dword ptr [edx + 0x620], 0 */ W32((u32)(r_edx+0x620u), 0x0u);
L_0069dd50:; BB(0x0069dd50);
    /* 0069dd50: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0069dd53: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069dd5a: mov esp, ebp */ r_esp = r_ebp;
    /* 0069dd5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069dd5d: ret  */ FN_RET(0x0069db5c); r_esp += 4; return;
}

void f_0069dba9(void)
{
    FN_ENTER(0x0069dba9);
    /* 0069dba9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dbab: call 0x69bdf0 */ r_esp -= 4; W32(r_esp, 0x69dbb0u); f_0069bdf0();
    /* 0069dbb0: jmp 0x69dc91 */ goto L_0069dc91;
L_0069dc91:; BB(0x0069dc91);
    /* 0069dc91: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dc94: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69dc99u); f_0077774c();
    /* 0069dc99: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dca1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069dca3: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 0069dcaa: mov dword ptr [ecx + 0x720], 0x12c */ W32((u32)(r_ecx+0x720u), 0x12cu);
    /* 0069dcb4: mov dword ptr [ecx + 0x2b8], 0x42300000 */ W32((u32)(r_ecx+0x2b8u), 0x42300000u);
    /* 0069dcbe: call 0x7778e0 */ r_esp -= 4; W32(r_esp, 0x69dcc3u); f_007778e0();
    /* 0069dcc3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcc6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcc8: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcca: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69dccfu); f_00694390();
    /* 0069dccf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcd2: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0069dcd8: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcdb: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcde: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 0069dce4: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x69dce9u); f_00807d60();
    /* 0069dce9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dceb: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dced:; BB(0x0069dced);
    /* 0069dced: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0069dcf4: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcf6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x69dcfbu); f_005caba4();
    /* 0069dcfb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069dcfc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0069dcff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dd01: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dd03:; BB(0x0069dd03);
    /* 0069dd03: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0069dd0a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0069dd11: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069dd17: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd1a: mov ecx, eax */ r_ecx = r_eax;
    /* 0069dd1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069dd1d: call 0x6efc48 */ r_esp -= 4; W32(r_esp, 0x69dd22u); f_006efc48();
    /* 0069dd22: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0069dd29:; BB(0x0069dd29);
    /* 0069dd29: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd2c: mov edx, dword ptr [eax + 0x620] */ r_edx = R32((u32)(r_eax+0x620u));
    /* 0069dd32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd34: je 0x69dd50 */ if (fZ) goto L_0069dd50;
L_0069dd36:; BB(0x0069dd36);
    /* 0069dd36: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0069dd3a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd3f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0069dd43: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd46: mov dword ptr [edx + 0x620], 0 */ W32((u32)(r_edx+0x620u), 0x0u);
L_0069dd50:; BB(0x0069dd50);
    /* 0069dd50: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0069dd53: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069dd5a: mov esp, ebp */ r_esp = r_ebp;
    /* 0069dd5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069dd5d: ret  */ FN_RET(0x0069dba9); r_esp += 4; return;
}

void f_0069dbb5(void)
{
    FN_ENTER(0x0069dbb5);
    /* 0069dbb5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dbb7: call 0x69c6c0 */ r_esp -= 4; W32(r_esp, 0x69dbbcu); f_0069c6c0();
    /* 0069dbbc: jmp 0x69dc91 */ goto L_0069dc91;
L_0069dc91:; BB(0x0069dc91);
    /* 0069dc91: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dc94: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69dc99u); f_0077774c();
    /* 0069dc99: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dca1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069dca3: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 0069dcaa: mov dword ptr [ecx + 0x720], 0x12c */ W32((u32)(r_ecx+0x720u), 0x12cu);
    /* 0069dcb4: mov dword ptr [ecx + 0x2b8], 0x42300000 */ W32((u32)(r_ecx+0x2b8u), 0x42300000u);
    /* 0069dcbe: call 0x7778e0 */ r_esp -= 4; W32(r_esp, 0x69dcc3u); f_007778e0();
    /* 0069dcc3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcc6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcc8: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcca: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69dccfu); f_00694390();
    /* 0069dccf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcd2: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0069dcd8: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcdb: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcde: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 0069dce4: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x69dce9u); f_00807d60();
    /* 0069dce9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dceb: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dced:; BB(0x0069dced);
    /* 0069dced: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0069dcf4: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcf6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x69dcfbu); f_005caba4();
    /* 0069dcfb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069dcfc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0069dcff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dd01: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dd03:; BB(0x0069dd03);
    /* 0069dd03: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0069dd0a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0069dd11: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069dd17: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd1a: mov ecx, eax */ r_ecx = r_eax;
    /* 0069dd1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069dd1d: call 0x6efc48 */ r_esp -= 4; W32(r_esp, 0x69dd22u); f_006efc48();
    /* 0069dd22: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0069dd29:; BB(0x0069dd29);
    /* 0069dd29: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd2c: mov edx, dword ptr [eax + 0x620] */ r_edx = R32((u32)(r_eax+0x620u));
    /* 0069dd32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd34: je 0x69dd50 */ if (fZ) goto L_0069dd50;
L_0069dd36:; BB(0x0069dd36);
    /* 0069dd36: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0069dd3a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd3f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0069dd43: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd46: mov dword ptr [edx + 0x620], 0 */ W32((u32)(r_edx+0x620u), 0x0u);
L_0069dd50:; BB(0x0069dd50);
    /* 0069dd50: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0069dd53: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069dd5a: mov esp, ebp */ r_esp = r_ebp;
    /* 0069dd5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069dd5d: ret  */ FN_RET(0x0069dbb5); r_esp += 4; return;
}

void f_0069dbc1(void)
{
    FN_ENTER(0x0069dbc1);
    /* 0069dbc1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dbc3: call 0x69c988 */ r_esp -= 4; W32(r_esp, 0x69dbc8u); f_0069c988();
    /* 0069dbc8: jmp 0x69dc91 */ goto L_0069dc91;
L_0069dc91:; BB(0x0069dc91);
    /* 0069dc91: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dc94: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69dc99u); f_0077774c();
    /* 0069dc99: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dca1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069dca3: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 0069dcaa: mov dword ptr [ecx + 0x720], 0x12c */ W32((u32)(r_ecx+0x720u), 0x12cu);
    /* 0069dcb4: mov dword ptr [ecx + 0x2b8], 0x42300000 */ W32((u32)(r_ecx+0x2b8u), 0x42300000u);
    /* 0069dcbe: call 0x7778e0 */ r_esp -= 4; W32(r_esp, 0x69dcc3u); f_007778e0();
    /* 0069dcc3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcc6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcc8: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcca: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69dccfu); f_00694390();
    /* 0069dccf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcd2: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0069dcd8: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcdb: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcde: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 0069dce4: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x69dce9u); f_00807d60();
    /* 0069dce9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dceb: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dced:; BB(0x0069dced);
    /* 0069dced: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0069dcf4: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcf6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x69dcfbu); f_005caba4();
    /* 0069dcfb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069dcfc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0069dcff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dd01: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dd03:; BB(0x0069dd03);
    /* 0069dd03: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0069dd0a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0069dd11: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069dd17: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd1a: mov ecx, eax */ r_ecx = r_eax;
    /* 0069dd1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069dd1d: call 0x6efc48 */ r_esp -= 4; W32(r_esp, 0x69dd22u); f_006efc48();
    /* 0069dd22: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0069dd29:; BB(0x0069dd29);
    /* 0069dd29: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd2c: mov edx, dword ptr [eax + 0x620] */ r_edx = R32((u32)(r_eax+0x620u));
    /* 0069dd32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd34: je 0x69dd50 */ if (fZ) goto L_0069dd50;
L_0069dd36:; BB(0x0069dd36);
    /* 0069dd36: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0069dd3a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd3f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0069dd43: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd46: mov dword ptr [edx + 0x620], 0 */ W32((u32)(r_edx+0x620u), 0x0u);
L_0069dd50:; BB(0x0069dd50);
    /* 0069dd50: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0069dd53: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069dd5a: mov esp, ebp */ r_esp = r_ebp;
    /* 0069dd5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069dd5d: ret  */ FN_RET(0x0069dbc1); r_esp += 4; return;
}

void f_0069dbcd(void)
{
    FN_ENTER(0x0069dbcd);
    /* 0069dbcd: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dbcf: call 0x69cd20 */ r_esp -= 4; W32(r_esp, 0x69dbd4u); f_0069cd20();
    /* 0069dbd4: jmp 0x69dc91 */ goto L_0069dc91;
L_0069dc91:; BB(0x0069dc91);
    /* 0069dc91: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dc94: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69dc99u); f_0077774c();
    /* 0069dc99: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dca1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069dca3: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 0069dcaa: mov dword ptr [ecx + 0x720], 0x12c */ W32((u32)(r_ecx+0x720u), 0x12cu);
    /* 0069dcb4: mov dword ptr [ecx + 0x2b8], 0x42300000 */ W32((u32)(r_ecx+0x2b8u), 0x42300000u);
    /* 0069dcbe: call 0x7778e0 */ r_esp -= 4; W32(r_esp, 0x69dcc3u); f_007778e0();
    /* 0069dcc3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcc6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcc8: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcca: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69dccfu); f_00694390();
    /* 0069dccf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcd2: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0069dcd8: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcdb: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcde: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 0069dce4: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x69dce9u); f_00807d60();
    /* 0069dce9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dceb: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dced:; BB(0x0069dced);
    /* 0069dced: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0069dcf4: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcf6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x69dcfbu); f_005caba4();
    /* 0069dcfb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069dcfc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0069dcff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dd01: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dd03:; BB(0x0069dd03);
    /* 0069dd03: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0069dd0a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0069dd11: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069dd17: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd1a: mov ecx, eax */ r_ecx = r_eax;
    /* 0069dd1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069dd1d: call 0x6efc48 */ r_esp -= 4; W32(r_esp, 0x69dd22u); f_006efc48();
    /* 0069dd22: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0069dd29:; BB(0x0069dd29);
    /* 0069dd29: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd2c: mov edx, dword ptr [eax + 0x620] */ r_edx = R32((u32)(r_eax+0x620u));
    /* 0069dd32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd34: je 0x69dd50 */ if (fZ) goto L_0069dd50;
L_0069dd36:; BB(0x0069dd36);
    /* 0069dd36: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0069dd3a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd3f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0069dd43: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd46: mov dword ptr [edx + 0x620], 0 */ W32((u32)(r_edx+0x620u), 0x0u);
L_0069dd50:; BB(0x0069dd50);
    /* 0069dd50: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0069dd53: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069dd5a: mov esp, ebp */ r_esp = r_ebp;
    /* 0069dd5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069dd5d: ret  */ FN_RET(0x0069dbcd); r_esp += 4; return;
}

void f_0069dbd9(void)
{
    FN_ENTER(0x0069dbd9);
    /* 0069dbd9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dbdb: call 0x69d1e4 */ r_esp -= 4; W32(r_esp, 0x69dbe0u); f_0069d1e4();
    /* 0069dbe0: jmp 0x69dc91 */ goto L_0069dc91;
L_0069dc91:; BB(0x0069dc91);
    /* 0069dc91: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dc94: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69dc99u); f_0077774c();
    /* 0069dc99: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dca1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069dca3: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 0069dcaa: mov dword ptr [ecx + 0x720], 0x12c */ W32((u32)(r_ecx+0x720u), 0x12cu);
    /* 0069dcb4: mov dword ptr [ecx + 0x2b8], 0x42300000 */ W32((u32)(r_ecx+0x2b8u), 0x42300000u);
    /* 0069dcbe: call 0x7778e0 */ r_esp -= 4; W32(r_esp, 0x69dcc3u); f_007778e0();
    /* 0069dcc3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcc6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcc8: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcca: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69dccfu); f_00694390();
    /* 0069dccf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcd2: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0069dcd8: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcdb: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcde: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 0069dce4: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x69dce9u); f_00807d60();
    /* 0069dce9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dceb: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dced:; BB(0x0069dced);
    /* 0069dced: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0069dcf4: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcf6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x69dcfbu); f_005caba4();
    /* 0069dcfb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069dcfc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0069dcff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dd01: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dd03:; BB(0x0069dd03);
    /* 0069dd03: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0069dd0a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0069dd11: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069dd17: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd1a: mov ecx, eax */ r_ecx = r_eax;
    /* 0069dd1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069dd1d: call 0x6efc48 */ r_esp -= 4; W32(r_esp, 0x69dd22u); f_006efc48();
    /* 0069dd22: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0069dd29:; BB(0x0069dd29);
    /* 0069dd29: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd2c: mov edx, dword ptr [eax + 0x620] */ r_edx = R32((u32)(r_eax+0x620u));
    /* 0069dd32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd34: je 0x69dd50 */ if (fZ) goto L_0069dd50;
L_0069dd36:; BB(0x0069dd36);
    /* 0069dd36: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0069dd3a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd3f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0069dd43: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd46: mov dword ptr [edx + 0x620], 0 */ W32((u32)(r_edx+0x620u), 0x0u);
L_0069dd50:; BB(0x0069dd50);
    /* 0069dd50: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0069dd53: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069dd5a: mov esp, ebp */ r_esp = r_ebp;
    /* 0069dd5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069dd5d: ret  */ FN_RET(0x0069dbd9); r_esp += 4; return;
}

void f_0069dbe5(void)
{
    FN_ENTER(0x0069dbe5);
    /* 0069dbe5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dbe7: call 0x69d43c */ r_esp -= 4; W32(r_esp, 0x69dbecu); f_0069d43c();
    /* 0069dbec: jmp 0x69dc91 */ goto L_0069dc91;
L_0069dc91:; BB(0x0069dc91);
    /* 0069dc91: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dc94: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69dc99u); f_0077774c();
    /* 0069dc99: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dca1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069dca3: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 0069dcaa: mov dword ptr [ecx + 0x720], 0x12c */ W32((u32)(r_ecx+0x720u), 0x12cu);
    /* 0069dcb4: mov dword ptr [ecx + 0x2b8], 0x42300000 */ W32((u32)(r_ecx+0x2b8u), 0x42300000u);
    /* 0069dcbe: call 0x7778e0 */ r_esp -= 4; W32(r_esp, 0x69dcc3u); f_007778e0();
    /* 0069dcc3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcc6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcc8: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcca: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69dccfu); f_00694390();
    /* 0069dccf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcd2: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0069dcd8: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcdb: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcde: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 0069dce4: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x69dce9u); f_00807d60();
    /* 0069dce9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dceb: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dced:; BB(0x0069dced);
    /* 0069dced: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0069dcf4: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcf6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x69dcfbu); f_005caba4();
    /* 0069dcfb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069dcfc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0069dcff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dd01: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dd03:; BB(0x0069dd03);
    /* 0069dd03: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0069dd0a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0069dd11: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069dd17: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd1a: mov ecx, eax */ r_ecx = r_eax;
    /* 0069dd1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069dd1d: call 0x6efc48 */ r_esp -= 4; W32(r_esp, 0x69dd22u); f_006efc48();
    /* 0069dd22: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0069dd29:; BB(0x0069dd29);
    /* 0069dd29: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd2c: mov edx, dword ptr [eax + 0x620] */ r_edx = R32((u32)(r_eax+0x620u));
    /* 0069dd32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd34: je 0x69dd50 */ if (fZ) goto L_0069dd50;
L_0069dd36:; BB(0x0069dd36);
    /* 0069dd36: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0069dd3a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd3f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0069dd43: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd46: mov dword ptr [edx + 0x620], 0 */ W32((u32)(r_edx+0x620u), 0x0u);
L_0069dd50:; BB(0x0069dd50);
    /* 0069dd50: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0069dd53: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069dd5a: mov esp, ebp */ r_esp = r_ebp;
    /* 0069dd5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069dd5d: ret  */ FN_RET(0x0069dbe5); r_esp += 4; return;
}

void f_0069dbf1(void)
{
    FN_ENTER(0x0069dbf1);
    /* 0069dbf1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dbf3: call 0x69d8f4 */ r_esp -= 4; W32(r_esp, 0x69dbf8u); f_0069d8f4();
    /* 0069dbf8: jmp 0x69dc91 */ goto L_0069dc91;
L_0069dc91:; BB(0x0069dc91);
    /* 0069dc91: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dc94: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69dc99u); f_0077774c();
    /* 0069dc99: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dca1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069dca3: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 0069dcaa: mov dword ptr [ecx + 0x720], 0x12c */ W32((u32)(r_ecx+0x720u), 0x12cu);
    /* 0069dcb4: mov dword ptr [ecx + 0x2b8], 0x42300000 */ W32((u32)(r_ecx+0x2b8u), 0x42300000u);
    /* 0069dcbe: call 0x7778e0 */ r_esp -= 4; W32(r_esp, 0x69dcc3u); f_007778e0();
    /* 0069dcc3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcc6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcc8: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcca: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69dccfu); f_00694390();
    /* 0069dccf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcd2: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0069dcd8: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcdb: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcde: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 0069dce4: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x69dce9u); f_00807d60();
    /* 0069dce9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dceb: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dced:; BB(0x0069dced);
    /* 0069dced: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0069dcf4: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcf6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x69dcfbu); f_005caba4();
    /* 0069dcfb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069dcfc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0069dcff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dd01: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dd03:; BB(0x0069dd03);
    /* 0069dd03: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0069dd0a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0069dd11: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069dd17: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd1a: mov ecx, eax */ r_ecx = r_eax;
    /* 0069dd1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069dd1d: call 0x6efc48 */ r_esp -= 4; W32(r_esp, 0x69dd22u); f_006efc48();
    /* 0069dd22: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0069dd29:; BB(0x0069dd29);
    /* 0069dd29: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd2c: mov edx, dword ptr [eax + 0x620] */ r_edx = R32((u32)(r_eax+0x620u));
    /* 0069dd32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd34: je 0x69dd50 */ if (fZ) goto L_0069dd50;
L_0069dd36:; BB(0x0069dd36);
    /* 0069dd36: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0069dd3a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd3f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0069dd43: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd46: mov dword ptr [edx + 0x620], 0 */ W32((u32)(r_edx+0x620u), 0x0u);
L_0069dd50:; BB(0x0069dd50);
    /* 0069dd50: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0069dd53: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069dd5a: mov esp, ebp */ r_esp = r_ebp;
    /* 0069dd5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069dd5d: ret  */ FN_RET(0x0069dbf1); r_esp += 4; return;
}

void f_0069dbfd(void)
{
    FN_ENTER(0x0069dbfd);
    /* 0069dbfd: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dbff: call 0x69dd60 */ r_esp -= 4; W32(r_esp, 0x69dc04u); f_0069dd60();
    /* 0069dc04: jmp 0x69dc91 */ goto L_0069dc91;
L_0069dc91:; BB(0x0069dc91);
    /* 0069dc91: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dc94: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69dc99u); f_0077774c();
    /* 0069dc99: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dca1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069dca3: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 0069dcaa: mov dword ptr [ecx + 0x720], 0x12c */ W32((u32)(r_ecx+0x720u), 0x12cu);
    /* 0069dcb4: mov dword ptr [ecx + 0x2b8], 0x42300000 */ W32((u32)(r_ecx+0x2b8u), 0x42300000u);
    /* 0069dcbe: call 0x7778e0 */ r_esp -= 4; W32(r_esp, 0x69dcc3u); f_007778e0();
    /* 0069dcc3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcc6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcc8: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcca: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69dccfu); f_00694390();
    /* 0069dccf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcd2: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0069dcd8: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcdb: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcde: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 0069dce4: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x69dce9u); f_00807d60();
    /* 0069dce9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dceb: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dced:; BB(0x0069dced);
    /* 0069dced: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0069dcf4: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcf6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x69dcfbu); f_005caba4();
    /* 0069dcfb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069dcfc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0069dcff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dd01: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dd03:; BB(0x0069dd03);
    /* 0069dd03: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0069dd0a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0069dd11: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069dd17: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd1a: mov ecx, eax */ r_ecx = r_eax;
    /* 0069dd1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069dd1d: call 0x6efc48 */ r_esp -= 4; W32(r_esp, 0x69dd22u); f_006efc48();
    /* 0069dd22: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0069dd29:; BB(0x0069dd29);
    /* 0069dd29: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd2c: mov edx, dword ptr [eax + 0x620] */ r_edx = R32((u32)(r_eax+0x620u));
    /* 0069dd32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd34: je 0x69dd50 */ if (fZ) goto L_0069dd50;
L_0069dd36:; BB(0x0069dd36);
    /* 0069dd36: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0069dd3a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd3f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0069dd43: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd46: mov dword ptr [edx + 0x620], 0 */ W32((u32)(r_edx+0x620u), 0x0u);
L_0069dd50:; BB(0x0069dd50);
    /* 0069dd50: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0069dd53: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069dd5a: mov esp, ebp */ r_esp = r_ebp;
    /* 0069dd5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069dd5d: ret  */ FN_RET(0x0069dbfd); r_esp += 4; return;
}

void f_0069dc09(void)
{
    FN_ENTER(0x0069dc09);
    /* 0069dc09: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc0b: call 0x69e15c */ r_esp -= 4; W32(r_esp, 0x69dc10u); f_0069e15c();
    /* 0069dc10: jmp 0x69dc91 */ goto L_0069dc91;
L_0069dc91:; BB(0x0069dc91);
    /* 0069dc91: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dc94: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69dc99u); f_0077774c();
    /* 0069dc99: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dca1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069dca3: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 0069dcaa: mov dword ptr [ecx + 0x720], 0x12c */ W32((u32)(r_ecx+0x720u), 0x12cu);
    /* 0069dcb4: mov dword ptr [ecx + 0x2b8], 0x42300000 */ W32((u32)(r_ecx+0x2b8u), 0x42300000u);
    /* 0069dcbe: call 0x7778e0 */ r_esp -= 4; W32(r_esp, 0x69dcc3u); f_007778e0();
    /* 0069dcc3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcc6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcc8: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcca: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69dccfu); f_00694390();
    /* 0069dccf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcd2: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0069dcd8: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcdb: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcde: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 0069dce4: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x69dce9u); f_00807d60();
    /* 0069dce9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dceb: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dced:; BB(0x0069dced);
    /* 0069dced: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0069dcf4: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcf6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x69dcfbu); f_005caba4();
    /* 0069dcfb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069dcfc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0069dcff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dd01: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dd03:; BB(0x0069dd03);
    /* 0069dd03: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0069dd0a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0069dd11: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069dd17: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd1a: mov ecx, eax */ r_ecx = r_eax;
    /* 0069dd1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069dd1d: call 0x6efc48 */ r_esp -= 4; W32(r_esp, 0x69dd22u); f_006efc48();
    /* 0069dd22: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0069dd29:; BB(0x0069dd29);
    /* 0069dd29: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd2c: mov edx, dword ptr [eax + 0x620] */ r_edx = R32((u32)(r_eax+0x620u));
    /* 0069dd32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd34: je 0x69dd50 */ if (fZ) goto L_0069dd50;
L_0069dd36:; BB(0x0069dd36);
    /* 0069dd36: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0069dd3a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd3f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0069dd43: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd46: mov dword ptr [edx + 0x620], 0 */ W32((u32)(r_edx+0x620u), 0x0u);
L_0069dd50:; BB(0x0069dd50);
    /* 0069dd50: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0069dd53: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069dd5a: mov esp, ebp */ r_esp = r_ebp;
    /* 0069dd5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069dd5d: ret  */ FN_RET(0x0069dc09); r_esp += 4; return;
}

void f_0069dc15(void)
{
    FN_ENTER(0x0069dc15);
    /* 0069dc15: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc17: call 0x69e718 */ r_esp -= 4; W32(r_esp, 0x69dc1cu); f_0069e718();
    /* 0069dc1c: jmp 0x69dc91 */ goto L_0069dc91;
L_0069dc91:; BB(0x0069dc91);
    /* 0069dc91: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dc94: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69dc99u); f_0077774c();
    /* 0069dc99: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dca1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069dca3: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 0069dcaa: mov dword ptr [ecx + 0x720], 0x12c */ W32((u32)(r_ecx+0x720u), 0x12cu);
    /* 0069dcb4: mov dword ptr [ecx + 0x2b8], 0x42300000 */ W32((u32)(r_ecx+0x2b8u), 0x42300000u);
    /* 0069dcbe: call 0x7778e0 */ r_esp -= 4; W32(r_esp, 0x69dcc3u); f_007778e0();
    /* 0069dcc3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcc6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcc8: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcca: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69dccfu); f_00694390();
    /* 0069dccf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcd2: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0069dcd8: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcdb: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcde: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 0069dce4: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x69dce9u); f_00807d60();
    /* 0069dce9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dceb: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dced:; BB(0x0069dced);
    /* 0069dced: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0069dcf4: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcf6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x69dcfbu); f_005caba4();
    /* 0069dcfb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069dcfc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0069dcff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dd01: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dd03:; BB(0x0069dd03);
    /* 0069dd03: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0069dd0a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0069dd11: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069dd17: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd1a: mov ecx, eax */ r_ecx = r_eax;
    /* 0069dd1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069dd1d: call 0x6efc48 */ r_esp -= 4; W32(r_esp, 0x69dd22u); f_006efc48();
    /* 0069dd22: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0069dd29:; BB(0x0069dd29);
    /* 0069dd29: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd2c: mov edx, dword ptr [eax + 0x620] */ r_edx = R32((u32)(r_eax+0x620u));
    /* 0069dd32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd34: je 0x69dd50 */ if (fZ) goto L_0069dd50;
L_0069dd36:; BB(0x0069dd36);
    /* 0069dd36: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0069dd3a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd3f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0069dd43: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd46: mov dword ptr [edx + 0x620], 0 */ W32((u32)(r_edx+0x620u), 0x0u);
L_0069dd50:; BB(0x0069dd50);
    /* 0069dd50: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0069dd53: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069dd5a: mov esp, ebp */ r_esp = r_ebp;
    /* 0069dd5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069dd5d: ret  */ FN_RET(0x0069dc15); r_esp += 4; return;
}

void f_0069dc1e(void)
{
    FN_ENTER(0x0069dc1e);
    /* 0069dc1e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc20: call 0x69ebc8 */ r_esp -= 4; W32(r_esp, 0x69dc25u); f_0069ebc8();
    /* 0069dc25: jmp 0x69dc91 */ goto L_0069dc91;
L_0069dc91:; BB(0x0069dc91);
    /* 0069dc91: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dc94: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69dc99u); f_0077774c();
    /* 0069dc99: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dca1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069dca3: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 0069dcaa: mov dword ptr [ecx + 0x720], 0x12c */ W32((u32)(r_ecx+0x720u), 0x12cu);
    /* 0069dcb4: mov dword ptr [ecx + 0x2b8], 0x42300000 */ W32((u32)(r_ecx+0x2b8u), 0x42300000u);
    /* 0069dcbe: call 0x7778e0 */ r_esp -= 4; W32(r_esp, 0x69dcc3u); f_007778e0();
    /* 0069dcc3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcc6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcc8: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcca: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69dccfu); f_00694390();
    /* 0069dccf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcd2: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0069dcd8: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcdb: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcde: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 0069dce4: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x69dce9u); f_00807d60();
    /* 0069dce9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dceb: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dced:; BB(0x0069dced);
    /* 0069dced: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0069dcf4: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcf6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x69dcfbu); f_005caba4();
    /* 0069dcfb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069dcfc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0069dcff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dd01: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dd03:; BB(0x0069dd03);
    /* 0069dd03: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0069dd0a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0069dd11: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069dd17: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd1a: mov ecx, eax */ r_ecx = r_eax;
    /* 0069dd1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069dd1d: call 0x6efc48 */ r_esp -= 4; W32(r_esp, 0x69dd22u); f_006efc48();
    /* 0069dd22: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0069dd29:; BB(0x0069dd29);
    /* 0069dd29: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd2c: mov edx, dword ptr [eax + 0x620] */ r_edx = R32((u32)(r_eax+0x620u));
    /* 0069dd32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd34: je 0x69dd50 */ if (fZ) goto L_0069dd50;
L_0069dd36:; BB(0x0069dd36);
    /* 0069dd36: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0069dd3a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd3f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0069dd43: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd46: mov dword ptr [edx + 0x620], 0 */ W32((u32)(r_edx+0x620u), 0x0u);
L_0069dd50:; BB(0x0069dd50);
    /* 0069dd50: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0069dd53: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069dd5a: mov esp, ebp */ r_esp = r_ebp;
    /* 0069dd5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069dd5d: ret  */ FN_RET(0x0069dc1e); r_esp += 4; return;
}

void f_0069dc27(void)
{
    FN_ENTER(0x0069dc27);
    /* 0069dc27: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc29: call 0x69ef04 */ r_esp -= 4; W32(r_esp, 0x69dc2eu); f_0069ef04();
    /* 0069dc2e: jmp 0x69dc91 */ goto L_0069dc91;
L_0069dc91:; BB(0x0069dc91);
    /* 0069dc91: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dc94: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69dc99u); f_0077774c();
    /* 0069dc99: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dca1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069dca3: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 0069dcaa: mov dword ptr [ecx + 0x720], 0x12c */ W32((u32)(r_ecx+0x720u), 0x12cu);
    /* 0069dcb4: mov dword ptr [ecx + 0x2b8], 0x42300000 */ W32((u32)(r_ecx+0x2b8u), 0x42300000u);
    /* 0069dcbe: call 0x7778e0 */ r_esp -= 4; W32(r_esp, 0x69dcc3u); f_007778e0();
    /* 0069dcc3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcc6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcc8: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcca: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69dccfu); f_00694390();
    /* 0069dccf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcd2: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0069dcd8: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcdb: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcde: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 0069dce4: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x69dce9u); f_00807d60();
    /* 0069dce9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dceb: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dced:; BB(0x0069dced);
    /* 0069dced: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0069dcf4: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcf6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x69dcfbu); f_005caba4();
    /* 0069dcfb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069dcfc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0069dcff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dd01: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dd03:; BB(0x0069dd03);
    /* 0069dd03: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0069dd0a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0069dd11: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069dd17: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd1a: mov ecx, eax */ r_ecx = r_eax;
    /* 0069dd1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069dd1d: call 0x6efc48 */ r_esp -= 4; W32(r_esp, 0x69dd22u); f_006efc48();
    /* 0069dd22: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0069dd29:; BB(0x0069dd29);
    /* 0069dd29: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd2c: mov edx, dword ptr [eax + 0x620] */ r_edx = R32((u32)(r_eax+0x620u));
    /* 0069dd32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd34: je 0x69dd50 */ if (fZ) goto L_0069dd50;
L_0069dd36:; BB(0x0069dd36);
    /* 0069dd36: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0069dd3a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd3f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0069dd43: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd46: mov dword ptr [edx + 0x620], 0 */ W32((u32)(r_edx+0x620u), 0x0u);
L_0069dd50:; BB(0x0069dd50);
    /* 0069dd50: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0069dd53: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069dd5a: mov esp, ebp */ r_esp = r_ebp;
    /* 0069dd5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069dd5d: ret  */ FN_RET(0x0069dc27); r_esp += 4; return;
}

void f_0069dc30(void)
{
    FN_ENTER(0x0069dc30);
    /* 0069dc30: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc32: call 0x69f148 */ r_esp -= 4; W32(r_esp, 0x69dc37u); f_0069f148();
    /* 0069dc37: jmp 0x69dc91 */ goto L_0069dc91;
L_0069dc91:; BB(0x0069dc91);
    /* 0069dc91: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dc94: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69dc99u); f_0077774c();
    /* 0069dc99: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dca1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069dca3: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 0069dcaa: mov dword ptr [ecx + 0x720], 0x12c */ W32((u32)(r_ecx+0x720u), 0x12cu);
    /* 0069dcb4: mov dword ptr [ecx + 0x2b8], 0x42300000 */ W32((u32)(r_ecx+0x2b8u), 0x42300000u);
    /* 0069dcbe: call 0x7778e0 */ r_esp -= 4; W32(r_esp, 0x69dcc3u); f_007778e0();
    /* 0069dcc3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcc6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcc8: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcca: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69dccfu); f_00694390();
    /* 0069dccf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcd2: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0069dcd8: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcdb: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcde: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 0069dce4: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x69dce9u); f_00807d60();
    /* 0069dce9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dceb: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dced:; BB(0x0069dced);
    /* 0069dced: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0069dcf4: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcf6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x69dcfbu); f_005caba4();
    /* 0069dcfb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069dcfc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0069dcff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dd01: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dd03:; BB(0x0069dd03);
    /* 0069dd03: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0069dd0a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0069dd11: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069dd17: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd1a: mov ecx, eax */ r_ecx = r_eax;
    /* 0069dd1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069dd1d: call 0x6efc48 */ r_esp -= 4; W32(r_esp, 0x69dd22u); f_006efc48();
    /* 0069dd22: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0069dd29:; BB(0x0069dd29);
    /* 0069dd29: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd2c: mov edx, dword ptr [eax + 0x620] */ r_edx = R32((u32)(r_eax+0x620u));
    /* 0069dd32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd34: je 0x69dd50 */ if (fZ) goto L_0069dd50;
L_0069dd36:; BB(0x0069dd36);
    /* 0069dd36: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0069dd3a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd3f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0069dd43: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd46: mov dword ptr [edx + 0x620], 0 */ W32((u32)(r_edx+0x620u), 0x0u);
L_0069dd50:; BB(0x0069dd50);
    /* 0069dd50: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0069dd53: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069dd5a: mov esp, ebp */ r_esp = r_ebp;
    /* 0069dd5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069dd5d: ret  */ FN_RET(0x0069dc30); r_esp += 4; return;
}

void f_0069dc39(void)
{
    FN_ENTER(0x0069dc39);
    /* 0069dc39: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc3b: call 0x69f384 */ r_esp -= 4; W32(r_esp, 0x69dc40u); f_0069f384();
    /* 0069dc40: jmp 0x69dc91 */ goto L_0069dc91;
L_0069dc91:; BB(0x0069dc91);
    /* 0069dc91: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dc94: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69dc99u); f_0077774c();
    /* 0069dc99: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dca1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069dca3: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 0069dcaa: mov dword ptr [ecx + 0x720], 0x12c */ W32((u32)(r_ecx+0x720u), 0x12cu);
    /* 0069dcb4: mov dword ptr [ecx + 0x2b8], 0x42300000 */ W32((u32)(r_ecx+0x2b8u), 0x42300000u);
    /* 0069dcbe: call 0x7778e0 */ r_esp -= 4; W32(r_esp, 0x69dcc3u); f_007778e0();
    /* 0069dcc3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcc6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcc8: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcca: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69dccfu); f_00694390();
    /* 0069dccf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcd2: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0069dcd8: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcdb: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcde: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 0069dce4: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x69dce9u); f_00807d60();
    /* 0069dce9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dceb: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dced:; BB(0x0069dced);
    /* 0069dced: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0069dcf4: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcf6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x69dcfbu); f_005caba4();
    /* 0069dcfb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069dcfc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0069dcff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dd01: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dd03:; BB(0x0069dd03);
    /* 0069dd03: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0069dd0a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0069dd11: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069dd17: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd1a: mov ecx, eax */ r_ecx = r_eax;
    /* 0069dd1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069dd1d: call 0x6efc48 */ r_esp -= 4; W32(r_esp, 0x69dd22u); f_006efc48();
    /* 0069dd22: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0069dd29:; BB(0x0069dd29);
    /* 0069dd29: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd2c: mov edx, dword ptr [eax + 0x620] */ r_edx = R32((u32)(r_eax+0x620u));
    /* 0069dd32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd34: je 0x69dd50 */ if (fZ) goto L_0069dd50;
L_0069dd36:; BB(0x0069dd36);
    /* 0069dd36: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0069dd3a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd3f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0069dd43: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd46: mov dword ptr [edx + 0x620], 0 */ W32((u32)(r_edx+0x620u), 0x0u);
L_0069dd50:; BB(0x0069dd50);
    /* 0069dd50: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0069dd53: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069dd5a: mov esp, ebp */ r_esp = r_ebp;
    /* 0069dd5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069dd5d: ret  */ FN_RET(0x0069dc39); r_esp += 4; return;
}

void f_0069dc42(void)
{
    FN_ENTER(0x0069dc42);
    /* 0069dc42: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc44: call 0x69f648 */ r_esp -= 4; W32(r_esp, 0x69dc49u); f_0069f648();
    /* 0069dc49: jmp 0x69dc91 */ goto L_0069dc91;
L_0069dc91:; BB(0x0069dc91);
    /* 0069dc91: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dc94: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69dc99u); f_0077774c();
    /* 0069dc99: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dca1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069dca3: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 0069dcaa: mov dword ptr [ecx + 0x720], 0x12c */ W32((u32)(r_ecx+0x720u), 0x12cu);
    /* 0069dcb4: mov dword ptr [ecx + 0x2b8], 0x42300000 */ W32((u32)(r_ecx+0x2b8u), 0x42300000u);
    /* 0069dcbe: call 0x7778e0 */ r_esp -= 4; W32(r_esp, 0x69dcc3u); f_007778e0();
    /* 0069dcc3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcc6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcc8: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcca: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69dccfu); f_00694390();
    /* 0069dccf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcd2: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0069dcd8: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcdb: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcde: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 0069dce4: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x69dce9u); f_00807d60();
    /* 0069dce9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dceb: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dced:; BB(0x0069dced);
    /* 0069dced: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0069dcf4: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcf6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x69dcfbu); f_005caba4();
    /* 0069dcfb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069dcfc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0069dcff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dd01: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dd03:; BB(0x0069dd03);
    /* 0069dd03: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0069dd0a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0069dd11: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069dd17: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd1a: mov ecx, eax */ r_ecx = r_eax;
    /* 0069dd1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069dd1d: call 0x6efc48 */ r_esp -= 4; W32(r_esp, 0x69dd22u); f_006efc48();
    /* 0069dd22: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0069dd29:; BB(0x0069dd29);
    /* 0069dd29: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd2c: mov edx, dword ptr [eax + 0x620] */ r_edx = R32((u32)(r_eax+0x620u));
    /* 0069dd32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd34: je 0x69dd50 */ if (fZ) goto L_0069dd50;
L_0069dd36:; BB(0x0069dd36);
    /* 0069dd36: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0069dd3a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd3f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0069dd43: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd46: mov dword ptr [edx + 0x620], 0 */ W32((u32)(r_edx+0x620u), 0x0u);
L_0069dd50:; BB(0x0069dd50);
    /* 0069dd50: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0069dd53: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069dd5a: mov esp, ebp */ r_esp = r_ebp;
    /* 0069dd5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069dd5d: ret  */ FN_RET(0x0069dc42); r_esp += 4; return;
}

void f_0069dc4b(void)
{
    FN_ENTER(0x0069dc4b);
    /* 0069dc4b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc4d: call 0x69fe2c */ r_esp -= 4; W32(r_esp, 0x69dc52u); f_0069fe2c();
    /* 0069dc52: jmp 0x69dc91 */ goto L_0069dc91;
L_0069dc91:; BB(0x0069dc91);
    /* 0069dc91: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dc94: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69dc99u); f_0077774c();
    /* 0069dc99: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dca1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069dca3: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 0069dcaa: mov dword ptr [ecx + 0x720], 0x12c */ W32((u32)(r_ecx+0x720u), 0x12cu);
    /* 0069dcb4: mov dword ptr [ecx + 0x2b8], 0x42300000 */ W32((u32)(r_ecx+0x2b8u), 0x42300000u);
    /* 0069dcbe: call 0x7778e0 */ r_esp -= 4; W32(r_esp, 0x69dcc3u); f_007778e0();
    /* 0069dcc3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcc6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcc8: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcca: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69dccfu); f_00694390();
    /* 0069dccf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcd2: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0069dcd8: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcdb: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcde: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 0069dce4: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x69dce9u); f_00807d60();
    /* 0069dce9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dceb: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dced:; BB(0x0069dced);
    /* 0069dced: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0069dcf4: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcf6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x69dcfbu); f_005caba4();
    /* 0069dcfb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069dcfc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0069dcff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dd01: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dd03:; BB(0x0069dd03);
    /* 0069dd03: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0069dd0a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0069dd11: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069dd17: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd1a: mov ecx, eax */ r_ecx = r_eax;
    /* 0069dd1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069dd1d: call 0x6efc48 */ r_esp -= 4; W32(r_esp, 0x69dd22u); f_006efc48();
    /* 0069dd22: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0069dd29:; BB(0x0069dd29);
    /* 0069dd29: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd2c: mov edx, dword ptr [eax + 0x620] */ r_edx = R32((u32)(r_eax+0x620u));
    /* 0069dd32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd34: je 0x69dd50 */ if (fZ) goto L_0069dd50;
L_0069dd36:; BB(0x0069dd36);
    /* 0069dd36: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0069dd3a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd3f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0069dd43: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd46: mov dword ptr [edx + 0x620], 0 */ W32((u32)(r_edx+0x620u), 0x0u);
L_0069dd50:; BB(0x0069dd50);
    /* 0069dd50: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0069dd53: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069dd5a: mov esp, ebp */ r_esp = r_ebp;
    /* 0069dd5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069dd5d: ret  */ FN_RET(0x0069dc4b); r_esp += 4; return;
}

void f_0069dc54(void)
{
    FN_ENTER(0x0069dc54);
    /* 0069dc54: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc56: call 0x6a0624 */ r_esp -= 4; W32(r_esp, 0x69dc5bu); f_006a0624();
    /* 0069dc5b: jmp 0x69dc91 */ goto L_0069dc91;
L_0069dc91:; BB(0x0069dc91);
    /* 0069dc91: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dc94: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69dc99u); f_0077774c();
    /* 0069dc99: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dca1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069dca3: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 0069dcaa: mov dword ptr [ecx + 0x720], 0x12c */ W32((u32)(r_ecx+0x720u), 0x12cu);
    /* 0069dcb4: mov dword ptr [ecx + 0x2b8], 0x42300000 */ W32((u32)(r_ecx+0x2b8u), 0x42300000u);
    /* 0069dcbe: call 0x7778e0 */ r_esp -= 4; W32(r_esp, 0x69dcc3u); f_007778e0();
    /* 0069dcc3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcc6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcc8: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcca: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69dccfu); f_00694390();
    /* 0069dccf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcd2: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0069dcd8: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcdb: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcde: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 0069dce4: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x69dce9u); f_00807d60();
    /* 0069dce9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dceb: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dced:; BB(0x0069dced);
    /* 0069dced: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0069dcf4: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcf6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x69dcfbu); f_005caba4();
    /* 0069dcfb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069dcfc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0069dcff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dd01: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dd03:; BB(0x0069dd03);
    /* 0069dd03: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0069dd0a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0069dd11: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069dd17: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd1a: mov ecx, eax */ r_ecx = r_eax;
    /* 0069dd1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069dd1d: call 0x6efc48 */ r_esp -= 4; W32(r_esp, 0x69dd22u); f_006efc48();
    /* 0069dd22: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0069dd29:; BB(0x0069dd29);
    /* 0069dd29: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd2c: mov edx, dword ptr [eax + 0x620] */ r_edx = R32((u32)(r_eax+0x620u));
    /* 0069dd32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd34: je 0x69dd50 */ if (fZ) goto L_0069dd50;
L_0069dd36:; BB(0x0069dd36);
    /* 0069dd36: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0069dd3a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd3f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0069dd43: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd46: mov dword ptr [edx + 0x620], 0 */ W32((u32)(r_edx+0x620u), 0x0u);
L_0069dd50:; BB(0x0069dd50);
    /* 0069dd50: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0069dd53: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069dd5a: mov esp, ebp */ r_esp = r_ebp;
    /* 0069dd5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069dd5d: ret  */ FN_RET(0x0069dc54); r_esp += 4; return;
}

void f_0069dc5d(void)
{
    FN_ENTER(0x0069dc5d);
    /* 0069dc5d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc5f: call 0x6a0994 */ r_esp -= 4; W32(r_esp, 0x69dc64u); f_006a0994();
    /* 0069dc64: jmp 0x69dc91 */ goto L_0069dc91;
L_0069dc91:; BB(0x0069dc91);
    /* 0069dc91: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dc94: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69dc99u); f_0077774c();
    /* 0069dc99: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dca1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069dca3: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 0069dcaa: mov dword ptr [ecx + 0x720], 0x12c */ W32((u32)(r_ecx+0x720u), 0x12cu);
    /* 0069dcb4: mov dword ptr [ecx + 0x2b8], 0x42300000 */ W32((u32)(r_ecx+0x2b8u), 0x42300000u);
    /* 0069dcbe: call 0x7778e0 */ r_esp -= 4; W32(r_esp, 0x69dcc3u); f_007778e0();
    /* 0069dcc3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcc6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcc8: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcca: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69dccfu); f_00694390();
    /* 0069dccf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcd2: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0069dcd8: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcdb: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcde: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 0069dce4: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x69dce9u); f_00807d60();
    /* 0069dce9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dceb: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dced:; BB(0x0069dced);
    /* 0069dced: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0069dcf4: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcf6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x69dcfbu); f_005caba4();
    /* 0069dcfb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069dcfc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0069dcff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dd01: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dd03:; BB(0x0069dd03);
    /* 0069dd03: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0069dd0a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0069dd11: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069dd17: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd1a: mov ecx, eax */ r_ecx = r_eax;
    /* 0069dd1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069dd1d: call 0x6efc48 */ r_esp -= 4; W32(r_esp, 0x69dd22u); f_006efc48();
    /* 0069dd22: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0069dd29:; BB(0x0069dd29);
    /* 0069dd29: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd2c: mov edx, dword ptr [eax + 0x620] */ r_edx = R32((u32)(r_eax+0x620u));
    /* 0069dd32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd34: je 0x69dd50 */ if (fZ) goto L_0069dd50;
L_0069dd36:; BB(0x0069dd36);
    /* 0069dd36: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0069dd3a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd3f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0069dd43: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd46: mov dword ptr [edx + 0x620], 0 */ W32((u32)(r_edx+0x620u), 0x0u);
L_0069dd50:; BB(0x0069dd50);
    /* 0069dd50: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0069dd53: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069dd5a: mov esp, ebp */ r_esp = r_ebp;
    /* 0069dd5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069dd5d: ret  */ FN_RET(0x0069dc5d); r_esp += 4; return;
}

void f_0069dc66(void)
{
    FN_ENTER(0x0069dc66);
    /* 0069dc66: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc68: call 0x6a0eb8 */ r_esp -= 4; W32(r_esp, 0x69dc6du); f_006a0eb8();
    /* 0069dc6d: jmp 0x69dc91 */ goto L_0069dc91;
L_0069dc91:; BB(0x0069dc91);
    /* 0069dc91: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dc94: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69dc99u); f_0077774c();
    /* 0069dc99: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dca1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069dca3: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 0069dcaa: mov dword ptr [ecx + 0x720], 0x12c */ W32((u32)(r_ecx+0x720u), 0x12cu);
    /* 0069dcb4: mov dword ptr [ecx + 0x2b8], 0x42300000 */ W32((u32)(r_ecx+0x2b8u), 0x42300000u);
    /* 0069dcbe: call 0x7778e0 */ r_esp -= 4; W32(r_esp, 0x69dcc3u); f_007778e0();
    /* 0069dcc3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcc6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcc8: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcca: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69dccfu); f_00694390();
    /* 0069dccf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcd2: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0069dcd8: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcdb: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcde: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 0069dce4: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x69dce9u); f_00807d60();
    /* 0069dce9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dceb: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dced:; BB(0x0069dced);
    /* 0069dced: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0069dcf4: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcf6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x69dcfbu); f_005caba4();
    /* 0069dcfb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069dcfc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0069dcff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dd01: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dd03:; BB(0x0069dd03);
    /* 0069dd03: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0069dd0a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0069dd11: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069dd17: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd1a: mov ecx, eax */ r_ecx = r_eax;
    /* 0069dd1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069dd1d: call 0x6efc48 */ r_esp -= 4; W32(r_esp, 0x69dd22u); f_006efc48();
    /* 0069dd22: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0069dd29:; BB(0x0069dd29);
    /* 0069dd29: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd2c: mov edx, dword ptr [eax + 0x620] */ r_edx = R32((u32)(r_eax+0x620u));
    /* 0069dd32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd34: je 0x69dd50 */ if (fZ) goto L_0069dd50;
L_0069dd36:; BB(0x0069dd36);
    /* 0069dd36: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0069dd3a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd3f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0069dd43: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd46: mov dword ptr [edx + 0x620], 0 */ W32((u32)(r_edx+0x620u), 0x0u);
L_0069dd50:; BB(0x0069dd50);
    /* 0069dd50: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0069dd53: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069dd5a: mov esp, ebp */ r_esp = r_ebp;
    /* 0069dd5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069dd5d: ret  */ FN_RET(0x0069dc66); r_esp += 4; return;
}

void f_0069dc6f(void)
{
    FN_ENTER(0x0069dc6f);
    /* 0069dc6f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc71: call 0x6a139c */ r_esp -= 4; W32(r_esp, 0x69dc76u); f_006a139c();
    /* 0069dc76: jmp 0x69dc91 */ goto L_0069dc91;
L_0069dc91:; BB(0x0069dc91);
    /* 0069dc91: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dc94: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69dc99u); f_0077774c();
    /* 0069dc99: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dca1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069dca3: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 0069dcaa: mov dword ptr [ecx + 0x720], 0x12c */ W32((u32)(r_ecx+0x720u), 0x12cu);
    /* 0069dcb4: mov dword ptr [ecx + 0x2b8], 0x42300000 */ W32((u32)(r_ecx+0x2b8u), 0x42300000u);
    /* 0069dcbe: call 0x7778e0 */ r_esp -= 4; W32(r_esp, 0x69dcc3u); f_007778e0();
    /* 0069dcc3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcc6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcc8: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcca: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69dccfu); f_00694390();
    /* 0069dccf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcd2: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0069dcd8: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcdb: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcde: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 0069dce4: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x69dce9u); f_00807d60();
    /* 0069dce9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dceb: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dced:; BB(0x0069dced);
    /* 0069dced: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0069dcf4: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcf6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x69dcfbu); f_005caba4();
    /* 0069dcfb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069dcfc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0069dcff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dd01: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dd03:; BB(0x0069dd03);
    /* 0069dd03: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0069dd0a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0069dd11: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069dd17: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd1a: mov ecx, eax */ r_ecx = r_eax;
    /* 0069dd1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069dd1d: call 0x6efc48 */ r_esp -= 4; W32(r_esp, 0x69dd22u); f_006efc48();
    /* 0069dd22: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0069dd29:; BB(0x0069dd29);
    /* 0069dd29: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd2c: mov edx, dword ptr [eax + 0x620] */ r_edx = R32((u32)(r_eax+0x620u));
    /* 0069dd32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd34: je 0x69dd50 */ if (fZ) goto L_0069dd50;
L_0069dd36:; BB(0x0069dd36);
    /* 0069dd36: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0069dd3a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd3f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0069dd43: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd46: mov dword ptr [edx + 0x620], 0 */ W32((u32)(r_edx+0x620u), 0x0u);
L_0069dd50:; BB(0x0069dd50);
    /* 0069dd50: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0069dd53: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069dd5a: mov esp, ebp */ r_esp = r_ebp;
    /* 0069dd5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069dd5d: ret  */ FN_RET(0x0069dc6f); r_esp += 4; return;
}

void f_0069dc78(void)
{
    FN_ENTER(0x0069dc78);
    /* 0069dc78: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc7a: call 0x6a1a60 */ r_esp -= 4; W32(r_esp, 0x69dc7fu); f_006a1a60();
    /* 0069dc7f: jmp 0x69dc91 */ goto L_0069dc91;
L_0069dc91:; BB(0x0069dc91);
    /* 0069dc91: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dc94: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69dc99u); f_0077774c();
    /* 0069dc99: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dca1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069dca3: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 0069dcaa: mov dword ptr [ecx + 0x720], 0x12c */ W32((u32)(r_ecx+0x720u), 0x12cu);
    /* 0069dcb4: mov dword ptr [ecx + 0x2b8], 0x42300000 */ W32((u32)(r_ecx+0x2b8u), 0x42300000u);
    /* 0069dcbe: call 0x7778e0 */ r_esp -= 4; W32(r_esp, 0x69dcc3u); f_007778e0();
    /* 0069dcc3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcc6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcc8: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcca: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69dccfu); f_00694390();
    /* 0069dccf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcd2: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0069dcd8: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcdb: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcde: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 0069dce4: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x69dce9u); f_00807d60();
    /* 0069dce9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dceb: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dced:; BB(0x0069dced);
    /* 0069dced: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0069dcf4: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcf6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x69dcfbu); f_005caba4();
    /* 0069dcfb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069dcfc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0069dcff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dd01: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dd03:; BB(0x0069dd03);
    /* 0069dd03: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0069dd0a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0069dd11: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069dd17: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd1a: mov ecx, eax */ r_ecx = r_eax;
    /* 0069dd1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069dd1d: call 0x6efc48 */ r_esp -= 4; W32(r_esp, 0x69dd22u); f_006efc48();
    /* 0069dd22: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0069dd29:; BB(0x0069dd29);
    /* 0069dd29: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd2c: mov edx, dword ptr [eax + 0x620] */ r_edx = R32((u32)(r_eax+0x620u));
    /* 0069dd32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd34: je 0x69dd50 */ if (fZ) goto L_0069dd50;
L_0069dd36:; BB(0x0069dd36);
    /* 0069dd36: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0069dd3a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd3f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0069dd43: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd46: mov dword ptr [edx + 0x620], 0 */ W32((u32)(r_edx+0x620u), 0x0u);
L_0069dd50:; BB(0x0069dd50);
    /* 0069dd50: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0069dd53: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069dd5a: mov esp, ebp */ r_esp = r_ebp;
    /* 0069dd5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069dd5d: ret  */ FN_RET(0x0069dc78); r_esp += 4; return;
}

void f_0069dc81(void)
{
    FN_ENTER(0x0069dc81);
    /* 0069dc81: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc83: call 0x69b93c */ r_esp -= 4; W32(r_esp, 0x69dc88u); f_0069b93c();
    /* 0069dc88: jmp 0x69dc91 */ goto L_0069dc91;
L_0069dc91:; BB(0x0069dc91);
    /* 0069dc91: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dc94: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69dc99u); f_0077774c();
    /* 0069dc99: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dca1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069dca3: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 0069dcaa: mov dword ptr [ecx + 0x720], 0x12c */ W32((u32)(r_ecx+0x720u), 0x12cu);
    /* 0069dcb4: mov dword ptr [ecx + 0x2b8], 0x42300000 */ W32((u32)(r_ecx+0x2b8u), 0x42300000u);
    /* 0069dcbe: call 0x7778e0 */ r_esp -= 4; W32(r_esp, 0x69dcc3u); f_007778e0();
    /* 0069dcc3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcc6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcc8: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcca: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69dccfu); f_00694390();
    /* 0069dccf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcd2: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0069dcd8: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcdb: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcde: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 0069dce4: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x69dce9u); f_00807d60();
    /* 0069dce9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dceb: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dced:; BB(0x0069dced);
    /* 0069dced: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0069dcf4: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcf6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x69dcfbu); f_005caba4();
    /* 0069dcfb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069dcfc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0069dcff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dd01: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dd03:; BB(0x0069dd03);
    /* 0069dd03: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0069dd0a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0069dd11: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069dd17: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd1a: mov ecx, eax */ r_ecx = r_eax;
    /* 0069dd1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069dd1d: call 0x6efc48 */ r_esp -= 4; W32(r_esp, 0x69dd22u); f_006efc48();
    /* 0069dd22: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0069dd29:; BB(0x0069dd29);
    /* 0069dd29: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd2c: mov edx, dword ptr [eax + 0x620] */ r_edx = R32((u32)(r_eax+0x620u));
    /* 0069dd32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd34: je 0x69dd50 */ if (fZ) goto L_0069dd50;
L_0069dd36:; BB(0x0069dd36);
    /* 0069dd36: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0069dd3a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd3f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0069dd43: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd46: mov dword ptr [edx + 0x620], 0 */ W32((u32)(r_edx+0x620u), 0x0u);
L_0069dd50:; BB(0x0069dd50);
    /* 0069dd50: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0069dd53: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069dd5a: mov esp, ebp */ r_esp = r_ebp;
    /* 0069dd5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069dd5d: ret  */ FN_RET(0x0069dc81); r_esp += 4; return;
}

void f_0069dc8a(void)
{
    FN_ENTER(0x0069dc8a);
    /* 0069dc8a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc8c: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x69dc91u); f_006a1ac0();
    /* 0069dc91: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dc94: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69dc99u); f_0077774c();
    /* 0069dc99: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dca1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069dca3: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 0069dcaa: mov dword ptr [ecx + 0x720], 0x12c */ W32((u32)(r_ecx+0x720u), 0x12cu);
    /* 0069dcb4: mov dword ptr [ecx + 0x2b8], 0x42300000 */ W32((u32)(r_ecx+0x2b8u), 0x42300000u);
    /* 0069dcbe: call 0x7778e0 */ r_esp -= 4; W32(r_esp, 0x69dcc3u); f_007778e0();
    /* 0069dcc3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcc6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcc8: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcca: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69dccfu); f_00694390();
    /* 0069dccf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcd2: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0069dcd8: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcdb: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcde: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 0069dce4: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x69dce9u); f_00807d60();
    /* 0069dce9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dceb: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dced:; BB(0x0069dced);
    /* 0069dced: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0069dcf4: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcf6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x69dcfbu); f_005caba4();
    /* 0069dcfb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069dcfc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0069dcff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dd01: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dd03:; BB(0x0069dd03);
    /* 0069dd03: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0069dd0a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0069dd11: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069dd17: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd1a: mov ecx, eax */ r_ecx = r_eax;
    /* 0069dd1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069dd1d: call 0x6efc48 */ r_esp -= 4; W32(r_esp, 0x69dd22u); f_006efc48();
    /* 0069dd22: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0069dd29:; BB(0x0069dd29);
    /* 0069dd29: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd2c: mov edx, dword ptr [eax + 0x620] */ r_edx = R32((u32)(r_eax+0x620u));
    /* 0069dd32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd34: je 0x69dd50 */ if (fZ) goto L_0069dd50;
L_0069dd36:; BB(0x0069dd36);
    /* 0069dd36: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0069dd3a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd3f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0069dd43: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd46: mov dword ptr [edx + 0x620], 0 */ W32((u32)(r_edx+0x620u), 0x0u);
L_0069dd50:; BB(0x0069dd50);
    /* 0069dd50: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0069dd53: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069dd5a: mov esp, ebp */ r_esp = r_ebp;
    /* 0069dd5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069dd5d: ret  */ FN_RET(0x0069dc8a); r_esp += 4; return;
}

void f_0069dc91(void)
{
    FN_ENTER(0x0069dc91);
    /* 0069dc91: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dc94: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69dc99u); f_0077774c();
    /* 0069dc99: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dc9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dca1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069dca3: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 0069dcaa: mov dword ptr [ecx + 0x720], 0x12c */ W32((u32)(r_ecx+0x720u), 0x12cu);
    /* 0069dcb4: mov dword ptr [ecx + 0x2b8], 0x42300000 */ W32((u32)(r_ecx+0x2b8u), 0x42300000u);
    /* 0069dcbe: call 0x7778e0 */ r_esp -= 4; W32(r_esp, 0x69dcc3u); f_007778e0();
    /* 0069dcc3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcc6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcc8: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcca: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69dccfu); f_00694390();
    /* 0069dccf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dcd2: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0069dcd8: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcdb: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069dcde: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 0069dce4: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x69dce9u); f_00807d60();
    /* 0069dce9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dceb: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dced:; BB(0x0069dced);
    /* 0069dced: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0069dcf4: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcf6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x69dcfbu); f_005caba4();
    /* 0069dcfb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069dcfc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0069dcff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069dd01: je 0x69dd29 */ if (fZ) goto L_0069dd29;
L_0069dd03:; BB(0x0069dd03);
    /* 0069dd03: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0069dd0a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0069dd11: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069dd17: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd1a: mov ecx, eax */ r_ecx = r_eax;
    /* 0069dd1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069dd1d: call 0x6efc48 */ r_esp -= 4; W32(r_esp, 0x69dd22u); f_006efc48();
    /* 0069dd22: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0069dd29:; BB(0x0069dd29);
    /* 0069dd29: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd2c: mov edx, dword ptr [eax + 0x620] */ r_edx = R32((u32)(r_eax+0x620u));
    /* 0069dd32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd34: je 0x69dd50 */ if (fZ) goto L_0069dd50;
L_0069dd36:; BB(0x0069dd36);
    /* 0069dd36: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0069dd3a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd3f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0069dd43: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd46: mov dword ptr [edx + 0x620], 0 */ W32((u32)(r_edx+0x620u), 0x0u);
L_0069dd50:; BB(0x0069dd50);
    /* 0069dd50: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0069dd53: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069dd5a: mov esp, ebp */ r_esp = r_ebp;
    /* 0069dd5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069dd5d: ret  */ FN_RET(0x0069dc91); r_esp += 4; return;
}

void f_0069dd60(void) /* sub_69DD60 */
{
    FN_ENTER(0x0069dd60);
    /* 0069dd60: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 0069dd65: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069dd68: ja 0x69dddf */ if ((!fC&&!fZ)) goto L_0069dddf;
L_0069dd6a:; BB(0x0069dd6a);
    /* 0069dd6a: mov eax, dword ptr [eax*4 + 0x93cf44] */ r_eax = R32((u32)(r_eax*4+0x93cf44u));
    /* 0069dd71: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0069dddf:; BB(0x0069dddf);
    /* 0069dddf: ret 4 */ FN_RET(0x0069dd60); r_esp += 8; return;
}

void f_0069dd73(void)
{
    FN_ENTER(0x0069dd73);
    /* 0069dd73: call 0x69dde4 */ r_esp -= 4; W32(r_esp, 0x69dd78u); f_0069dde4();
    /* 0069dd78: jmp 0x69dddf */ goto L_0069dddf;
L_0069dddf:; BB(0x0069dddf);
    /* 0069dddf: ret 4 */ FN_RET(0x0069dd73); r_esp += 8; return;
}

void f_0069dd7a(void)
{
    FN_ENTER(0x0069dd7a);
    /* 0069dd7a: call 0x6a2980 */ r_esp -= 4; W32(r_esp, 0x69dd7fu); f_006a2980();
    /* 0069dd7f: jmp 0x69dddf */ goto L_0069dddf;
L_0069dddf:; BB(0x0069dddf);
    /* 0069dddf: ret 4 */ FN_RET(0x0069dd7a); r_esp += 8; return;
}

void f_0069dd81(void)
{
    FN_ENTER(0x0069dd81);
    /* 0069dd81: call 0x69de3c */ r_esp -= 4; W32(r_esp, 0x69dd86u); f_0069de3c();
    /* 0069dd86: jmp 0x69dddf */ goto L_0069dddf;
L_0069dddf:; BB(0x0069dddf);
    /* 0069dddf: ret 4 */ FN_RET(0x0069dd81); r_esp += 8; return;
}

void f_0069dd88(void)
{
    FN_ENTER(0x0069dd88);
    /* 0069dd88: call 0x69de94 */ r_esp -= 4; W32(r_esp, 0x69dd8du); f_0069de94();
    /* 0069dd8d: jmp 0x69dddf */ goto L_0069dddf;
L_0069dddf:; BB(0x0069dddf);
    /* 0069dddf: ret 4 */ FN_RET(0x0069dd88); r_esp += 8; return;
}

void f_0069dd8f(void)
{
    FN_ENTER(0x0069dd8f);
    /* 0069dd8f: mov edx, dword ptr [ecx + 0x634] */ r_edx = R32((u32)(r_ecx+0x634u));
    /* 0069dd95: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069dd97: mov word ptr [0xa9432c], ax */ W16((u32)(0xa9432cu), (u16)r_eax);
    /* 0069dd9d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dd9f: mov word ptr [0xa94330], ax */ W16((u32)(0xa94330u), (u16)r_eax);
    /* 0069dda5: je 0x69dddf */ if (fZ) goto L_0069dddf;
L_0069dda7:; BB(0x0069dda7);
    /* 0069dda7: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 0069ddad: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069ddaf: je 0x69ddb8 */ if (fZ) goto L_0069ddb8;
L_0069ddb1:; BB(0x0069ddb1);
    /* 0069ddb1: mov eax, 1 */ r_eax = 0x1u;
    /* 0069ddb6: jmp 0x69ddba */ goto L_0069ddba;
L_0069ddb8:; BB(0x0069ddb8);
    /* 0069ddb8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0069ddba:; BB(0x0069ddba);
    /* 0069ddba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069ddbc: jne 0x69dddf */ if (!fZ) goto L_0069dddf;
L_0069ddbe:; BB(0x0069ddbe);
    /* 0069ddbe: push 0xa9432c */ { u32 v = 0xa9432cu; r_esp -= 4; W32(r_esp, v); }
    /* 0069ddc3: push 0xa94330 */ { u32 v = 0xa94330u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ddc8: call 0x70a60c */ r_esp -= 4; W32(r_esp, 0x69ddcdu); f_0070a60c();
    /* 0069ddcd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069ddd0: ret 4 */ FN_RET(0x0069dd8f); r_esp += 8; return;
L_0069dddf:; BB(0x0069dddf);
    /* 0069dddf: ret 4 */ FN_RET(0x0069dd8f); r_esp += 8; return;
}

void f_0069ddd3(void)
{
    FN_ENTER(0x0069ddd3);
    /* 0069ddd3: call 0x69efbc */ r_esp -= 4; W32(r_esp, 0x69ddd8u); f_0069efbc();
    /* 0069ddd8: jmp 0x69dddf */ goto L_0069dddf;
L_0069dddf:; BB(0x0069dddf);
    /* 0069dddf: ret 4 */ FN_RET(0x0069ddd3); r_esp += 8; return;
}

void f_0069ddda(void)
{
    FN_ENTER(0x0069ddda);
    /* 0069ddda: call 0x69dff4 */ r_esp -= 4; W32(r_esp, 0x69dddfu); f_0069dff4();
    /* 0069dddf: ret 4 */ FN_RET(0x0069ddda); r_esp += 8; return;
}

void f_0069dddf(void)
{
    FN_ENTER(0x0069dddf);
    /* 0069dddf: ret 4 */ FN_RET(0x0069dddf); r_esp += 8; return;
}

void f_0069dde4(void) /* sub_69DDE4 */
{
    FN_ENTER(0x0069dde4);
    /* 0069dde4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069dde5: mov edi, ecx */ r_edi = r_ecx;
    /* 0069dde7: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069ddea: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ddef: je 0x69de0e */ if (fZ) goto L_0069de0e;
L_0069ddf1:; BB(0x0069ddf1);
    /* 0069ddf1: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069ddf6: je 0x69de03 */ if (fZ) goto L_0069de03;
L_0069ddf8:; BB(0x0069ddf8);
    /* 0069ddf8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069ddfa: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ddfc: call 0x69e718 */ r_esp -= 4; W32(r_esp, 0x69de01u); f_0069e718();
    /* 0069de01: jmp 0x69de0c */ goto L_0069de0c;
L_0069de03:; BB(0x0069de03);
    /* 0069de03: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069de05: mov ecx, edi */ r_ecx = r_edi;
    /* 0069de07: call 0x69ebc8 */ r_esp -= 4; W32(r_esp, 0x69de0cu); f_0069ebc8();
L_0069de0c:; BB(0x0069de0c);
    /* 0069de0c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069de0d: ret  */ FN_RET(0x0069dde4); r_esp += 4; return;
L_0069de0e:; BB(0x0069de0e);
    /* 0069de0e: mov ecx, edi */ r_ecx = r_edi;
    /* 0069de10: call 0x69d6d8 */ r_esp -= 4; W32(r_esp, 0x69de15u); f_0069d6d8();
    /* 0069de15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069de17: je 0x69de24 */ if (fZ) goto L_0069de24;
L_0069de19:; BB(0x0069de19);
    /* 0069de19: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069de1b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069de1d: call 0x69f384 */ r_esp -= 4; W32(r_esp, 0x69de22u); f_0069f384();
    /* 0069de22: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069de23: ret  */ FN_RET(0x0069dde4); r_esp += 4; return;
L_0069de24:; BB(0x0069de24);
    /* 0069de24: mov ecx, edi */ r_ecx = r_edi;
    /* 0069de26: call 0x68a3e0 */ r_esp -= 4; W32(r_esp, 0x69de2bu); f_0068a3e0();
    /* 0069de2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069de2d: je 0x69de38 */ if (fZ) goto L_0069de38;
L_0069de2f:; BB(0x0069de2f);
    /* 0069de2f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069de31: mov ecx, edi */ r_ecx = r_edi;
    /* 0069de33: call 0x69d43c */ r_esp -= 4; W32(r_esp, 0x69de38u); f_0069d43c();
L_0069de38:; BB(0x0069de38);
    /* 0069de38: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069de39: ret  */ FN_RET(0x0069dde4); r_esp += 4; return;
}

void f_0069de3c(void) /* sub_69DE3C */
{
    FN_ENTER(0x0069de3c);
    /* 0069de3c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069de3f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069de41: je 0x69de53 */ if (fZ) goto L_0069de53;
L_0069de43:; BB(0x0069de43);
    /* 0069de43: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 0069de4a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069de4d: jne 0x69de53 */ if (!fZ) goto L_0069de53;
L_0069de4f:; BB(0x0069de4f);
    /* 0069de4f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069de52: ret  */ FN_RET(0x0069de3c); r_esp += 4; return;
L_0069de53:; BB(0x0069de53);
    /* 0069de53: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0069de57: movzx edx, word ptr [ecx + 0x6d0] */ r_edx = (u32)R16((u32)(r_ecx+0x6d0u));
    /* 0069de5e: mov byte ptr [esp], 0x52 */ W8((u32)(r_esp), 0x52u);
    /* 0069de62: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 0069de67: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0069de6c: mov eax, dword ptr [ecx + 0x6cc] */ r_eax = R32((u32)(r_ecx+0x6ccu));
    /* 0069de72: movzx ecx, word ptr [ecx + 0x6c8] */ r_ecx = (u32)R16((u32)(r_ecx+0x6c8u));
    /* 0069de79: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 0069de7e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0069de82: mov word ptr [esp + 6], cx */ W16((u32)(r_esp+0x6u), (u16)r_ecx);
    /* 0069de87: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069de8a: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x69de8fu); f_008003e0();
    /* 0069de8f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069de92: ret  */ FN_RET(0x0069de3c); r_esp += 4; return;
}

void f_0069de94(void) /* sub_69DE94 */
{
    FN_ENTER(0x0069de94);
    /* 0069de94: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069de95: mov edi, ecx */ r_edi = r_ecx;
    /* 0069de97: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069de9a: test eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069de9f: jne 0x69dff0 */ if (!fZ) goto L_0069dff0;
L_0069dea5:; BB(0x0069dea5);
    /* 0069dea5: movsx eax, word ptr [edi + 0x6ca] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x6cau));
    /* 0069deac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069deae: jne 0x69deb9 */ if (!fZ) goto L_0069deb9;
L_0069deb0:; BB(0x0069deb0);
    /* 0069deb0: mov ecx, edi */ r_ecx = r_edi;
    /* 0069deb2: call 0x69d554 */ r_esp -= 4; W32(r_esp, 0x69deb7u); f_0069d554();
    /* 0069deb7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069deb8: ret  */ FN_RET(0x0069de94); r_esp += 4; return;
L_0069deb9:; BB(0x0069deb9);
    /* 0069deb9: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0069debc: ja 0x69dfe7 */ if ((!fC&&!fZ)) goto L_0069dfe7;
L_0069dec2:; BB(0x0069dec2);
    /* 0069dec2: mov eax, dword ptr [eax*4 + 0x93cf80] */ r_eax = R32((u32)(r_eax*4+0x93cf80u));
    /* 0069dec9: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0069dfe7:; BB(0x0069dfe7);
    /* 0069dfe7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dfe9: mov word ptr [edi + 0x6ca], ax */ W16((u32)(r_edi+0x6cau), (u16)r_eax);
L_0069dff0:; BB(0x0069dff0);
    /* 0069dff0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069dff1: ret  */ FN_RET(0x0069de94); r_esp += 4; return;
}

void f_0069decb(void)
{
    FN_ENTER(0x0069decb);
    /* 0069decb: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069decd: mov ecx, edi */ r_ecx = r_edi;
    /* 0069decf: call 0x69bdf0 */ r_esp -= 4; W32(r_esp, 0x69ded4u); f_0069bdf0();
    /* 0069ded4: jmp 0x69dfe7 */ goto L_0069dfe7;
L_0069dfe7:; BB(0x0069dfe7);
    /* 0069dfe7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069dfe9: mov word ptr [edi + 0x6ca], ax */ W16((u32)(r_edi+0x6cau), (u16)r_eax);
    /* 0069dff0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069dff1: ret  */ FN_RET(0x0069decb); r_esp += 4; return;
}

