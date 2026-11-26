#include "protos.h"

void f_0069f008(void)
{
    FN_ENTER(0x0069f008);
    /* 0069f008: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f00a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f00c: call 0x69c6c0 */ r_esp -= 4; W32(r_esp, 0x69f011u); f_0069c6c0();
    /* 0069f011: jmp 0x69f116 */ goto L_0069f116;
L_0069f116:; BB(0x0069f116);
    /* 0069f116: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f11d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f120: jne 0x69f12e */ if (!fZ) goto L_0069f12e;
L_0069f122:; BB(0x0069f122);
    /* 0069f122: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f127: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f12e:; BB(0x0069f12e);
    /* 0069f12e: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f134: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f136: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f139u); call_ind(t); }
    /* 0069f139: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f13c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f141: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f146u); f_00694390();
    /* 0069f146: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f147: ret  */ FN_RET(0x0069f008); r_esp += 4; return;
}

void f_0069f016(void)
{
    FN_ENTER(0x0069f016);
    /* 0069f016: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f018: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f01a: call 0x69c988 */ r_esp -= 4; W32(r_esp, 0x69f01fu); f_0069c988();
    /* 0069f01f: jmp 0x69f116 */ goto L_0069f116;
L_0069f116:; BB(0x0069f116);
    /* 0069f116: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f11d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f120: jne 0x69f12e */ if (!fZ) goto L_0069f12e;
L_0069f122:; BB(0x0069f122);
    /* 0069f122: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f127: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f12e:; BB(0x0069f12e);
    /* 0069f12e: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f134: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f136: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f139u); call_ind(t); }
    /* 0069f139: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f13c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f141: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f146u); f_00694390();
    /* 0069f146: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f147: ret  */ FN_RET(0x0069f016); r_esp += 4; return;
}

void f_0069f024(void)
{
    FN_ENTER(0x0069f024);
    /* 0069f024: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f026: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f028: call 0x69cd20 */ r_esp -= 4; W32(r_esp, 0x69f02du); f_0069cd20();
    /* 0069f02d: jmp 0x69f116 */ goto L_0069f116;
L_0069f116:; BB(0x0069f116);
    /* 0069f116: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f11d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f120: jne 0x69f12e */ if (!fZ) goto L_0069f12e;
L_0069f122:; BB(0x0069f122);
    /* 0069f122: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f127: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f12e:; BB(0x0069f12e);
    /* 0069f12e: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f134: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f136: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f139u); call_ind(t); }
    /* 0069f139: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f13c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f141: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f146u); f_00694390();
    /* 0069f146: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f147: ret  */ FN_RET(0x0069f024); r_esp += 4; return;
}

void f_0069f032(void)
{
    FN_ENTER(0x0069f032);
    /* 0069f032: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f034: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f036: call 0x69d1e4 */ r_esp -= 4; W32(r_esp, 0x69f03bu); f_0069d1e4();
    /* 0069f03b: jmp 0x69f116 */ goto L_0069f116;
L_0069f116:; BB(0x0069f116);
    /* 0069f116: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f11d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f120: jne 0x69f12e */ if (!fZ) goto L_0069f12e;
L_0069f122:; BB(0x0069f122);
    /* 0069f122: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f127: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f12e:; BB(0x0069f12e);
    /* 0069f12e: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f134: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f136: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f139u); call_ind(t); }
    /* 0069f139: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f13c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f141: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f146u); f_00694390();
    /* 0069f146: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f147: ret  */ FN_RET(0x0069f032); r_esp += 4; return;
}

void f_0069f040(void)
{
    FN_ENTER(0x0069f040);
    /* 0069f040: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f042: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f044: call 0x69d43c */ r_esp -= 4; W32(r_esp, 0x69f049u); f_0069d43c();
    /* 0069f049: jmp 0x69f116 */ goto L_0069f116;
L_0069f116:; BB(0x0069f116);
    /* 0069f116: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f11d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f120: jne 0x69f12e */ if (!fZ) goto L_0069f12e;
L_0069f122:; BB(0x0069f122);
    /* 0069f122: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f127: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f12e:; BB(0x0069f12e);
    /* 0069f12e: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f134: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f136: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f139u); call_ind(t); }
    /* 0069f139: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f13c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f141: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f146u); f_00694390();
    /* 0069f146: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f147: ret  */ FN_RET(0x0069f040); r_esp += 4; return;
}

void f_0069f04e(void)
{
    FN_ENTER(0x0069f04e);
    /* 0069f04e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f050: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f052: call 0x69d8f4 */ r_esp -= 4; W32(r_esp, 0x69f057u); f_0069d8f4();
    /* 0069f057: jmp 0x69f116 */ goto L_0069f116;
L_0069f116:; BB(0x0069f116);
    /* 0069f116: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f11d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f120: jne 0x69f12e */ if (!fZ) goto L_0069f12e;
L_0069f122:; BB(0x0069f122);
    /* 0069f122: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f127: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f12e:; BB(0x0069f12e);
    /* 0069f12e: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f134: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f136: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f139u); call_ind(t); }
    /* 0069f139: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f13c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f141: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f146u); f_00694390();
    /* 0069f146: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f147: ret  */ FN_RET(0x0069f04e); r_esp += 4; return;
}

void f_0069f05c(void)
{
    FN_ENTER(0x0069f05c);
    /* 0069f05c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f05e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f060: call 0x69dd60 */ r_esp -= 4; W32(r_esp, 0x69f065u); f_0069dd60();
    /* 0069f065: jmp 0x69f116 */ goto L_0069f116;
L_0069f116:; BB(0x0069f116);
    /* 0069f116: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f11d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f120: jne 0x69f12e */ if (!fZ) goto L_0069f12e;
L_0069f122:; BB(0x0069f122);
    /* 0069f122: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f127: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f12e:; BB(0x0069f12e);
    /* 0069f12e: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f134: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f136: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f139u); call_ind(t); }
    /* 0069f139: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f13c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f141: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f146u); f_00694390();
    /* 0069f146: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f147: ret  */ FN_RET(0x0069f05c); r_esp += 4; return;
}

void f_0069f06a(void)
{
    FN_ENTER(0x0069f06a);
    /* 0069f06a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f06c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f06e: call 0x69e15c */ r_esp -= 4; W32(r_esp, 0x69f073u); f_0069e15c();
    /* 0069f073: jmp 0x69f116 */ goto L_0069f116;
L_0069f116:; BB(0x0069f116);
    /* 0069f116: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f11d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f120: jne 0x69f12e */ if (!fZ) goto L_0069f12e;
L_0069f122:; BB(0x0069f122);
    /* 0069f122: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f127: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f12e:; BB(0x0069f12e);
    /* 0069f12e: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f134: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f136: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f139u); call_ind(t); }
    /* 0069f139: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f13c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f141: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f146u); f_00694390();
    /* 0069f146: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f147: ret  */ FN_RET(0x0069f06a); r_esp += 4; return;
}

void f_0069f078(void)
{
    FN_ENTER(0x0069f078);
    /* 0069f078: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f07a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f07c: call 0x69e718 */ r_esp -= 4; W32(r_esp, 0x69f081u); f_0069e718();
    /* 0069f081: jmp 0x69f116 */ goto L_0069f116;
L_0069f116:; BB(0x0069f116);
    /* 0069f116: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f11d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f120: jne 0x69f12e */ if (!fZ) goto L_0069f12e;
L_0069f122:; BB(0x0069f122);
    /* 0069f122: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f127: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f12e:; BB(0x0069f12e);
    /* 0069f12e: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f134: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f136: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f139u); call_ind(t); }
    /* 0069f139: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f13c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f141: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f146u); f_00694390();
    /* 0069f146: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f147: ret  */ FN_RET(0x0069f078); r_esp += 4; return;
}

void f_0069f086(void)
{
    FN_ENTER(0x0069f086);
    /* 0069f086: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f088: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f08a: call 0x69ebc8 */ r_esp -= 4; W32(r_esp, 0x69f08fu); f_0069ebc8();
    /* 0069f08f: jmp 0x69f116 */ goto L_0069f116;
L_0069f116:; BB(0x0069f116);
    /* 0069f116: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f11d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f120: jne 0x69f12e */ if (!fZ) goto L_0069f12e;
L_0069f122:; BB(0x0069f122);
    /* 0069f122: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f127: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f12e:; BB(0x0069f12e);
    /* 0069f12e: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f134: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f136: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f139u); call_ind(t); }
    /* 0069f139: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f13c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f141: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f146u); f_00694390();
    /* 0069f146: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f147: ret  */ FN_RET(0x0069f086); r_esp += 4; return;
}

void f_0069f094(void)
{
    FN_ENTER(0x0069f094);
    /* 0069f094: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f096: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f098: call 0x69ef04 */ r_esp -= 4; W32(r_esp, 0x69f09du); f_0069ef04();
    /* 0069f09d: jmp 0x69f116 */ goto L_0069f116;
L_0069f116:; BB(0x0069f116);
    /* 0069f116: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f11d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f120: jne 0x69f12e */ if (!fZ) goto L_0069f12e;
L_0069f122:; BB(0x0069f122);
    /* 0069f122: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f127: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f12e:; BB(0x0069f12e);
    /* 0069f12e: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f134: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f136: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f139u); call_ind(t); }
    /* 0069f139: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f13c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f141: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f146u); f_00694390();
    /* 0069f146: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f147: ret  */ FN_RET(0x0069f094); r_esp += 4; return;
}

void f_0069f09f(void)
{
    FN_ENTER(0x0069f09f);
    /* 0069f09f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f0a1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f0a3: call 0x69f148 */ r_esp -= 4; W32(r_esp, 0x69f0a8u); f_0069f148();
    /* 0069f0a8: jmp 0x69f116 */ goto L_0069f116;
L_0069f116:; BB(0x0069f116);
    /* 0069f116: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f11d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f120: jne 0x69f12e */ if (!fZ) goto L_0069f12e;
L_0069f122:; BB(0x0069f122);
    /* 0069f122: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f127: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f12e:; BB(0x0069f12e);
    /* 0069f12e: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f134: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f136: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f139u); call_ind(t); }
    /* 0069f139: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f13c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f141: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f146u); f_00694390();
    /* 0069f146: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f147: ret  */ FN_RET(0x0069f09f); r_esp += 4; return;
}

void f_0069f0aa(void)
{
    FN_ENTER(0x0069f0aa);
    /* 0069f0aa: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f0ac: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f0ae: call 0x69f384 */ r_esp -= 4; W32(r_esp, 0x69f0b3u); f_0069f384();
    /* 0069f0b3: jmp 0x69f116 */ goto L_0069f116;
L_0069f116:; BB(0x0069f116);
    /* 0069f116: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f11d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f120: jne 0x69f12e */ if (!fZ) goto L_0069f12e;
L_0069f122:; BB(0x0069f122);
    /* 0069f122: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f127: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f12e:; BB(0x0069f12e);
    /* 0069f12e: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f134: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f136: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f139u); call_ind(t); }
    /* 0069f139: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f13c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f141: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f146u); f_00694390();
    /* 0069f146: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f147: ret  */ FN_RET(0x0069f0aa); r_esp += 4; return;
}

void f_0069f0b5(void)
{
    FN_ENTER(0x0069f0b5);
    /* 0069f0b5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f0b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f0b9: call 0x69f648 */ r_esp -= 4; W32(r_esp, 0x69f0beu); f_0069f648();
    /* 0069f0be: jmp 0x69f116 */ goto L_0069f116;
L_0069f116:; BB(0x0069f116);
    /* 0069f116: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f11d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f120: jne 0x69f12e */ if (!fZ) goto L_0069f12e;
L_0069f122:; BB(0x0069f122);
    /* 0069f122: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f127: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f12e:; BB(0x0069f12e);
    /* 0069f12e: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f134: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f136: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f139u); call_ind(t); }
    /* 0069f139: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f13c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f141: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f146u); f_00694390();
    /* 0069f146: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f147: ret  */ FN_RET(0x0069f0b5); r_esp += 4; return;
}

void f_0069f0c0(void)
{
    FN_ENTER(0x0069f0c0);
    /* 0069f0c0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f0c2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f0c4: call 0x69fe2c */ r_esp -= 4; W32(r_esp, 0x69f0c9u); f_0069fe2c();
    /* 0069f0c9: jmp 0x69f116 */ goto L_0069f116;
L_0069f116:; BB(0x0069f116);
    /* 0069f116: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f11d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f120: jne 0x69f12e */ if (!fZ) goto L_0069f12e;
L_0069f122:; BB(0x0069f122);
    /* 0069f122: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f127: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f12e:; BB(0x0069f12e);
    /* 0069f12e: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f134: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f136: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f139u); call_ind(t); }
    /* 0069f139: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f13c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f141: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f146u); f_00694390();
    /* 0069f146: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f147: ret  */ FN_RET(0x0069f0c0); r_esp += 4; return;
}

void f_0069f0cb(void)
{
    FN_ENTER(0x0069f0cb);
    /* 0069f0cb: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f0cd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f0cf: call 0x6a0624 */ r_esp -= 4; W32(r_esp, 0x69f0d4u); f_006a0624();
    /* 0069f0d4: jmp 0x69f116 */ goto L_0069f116;
L_0069f116:; BB(0x0069f116);
    /* 0069f116: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f11d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f120: jne 0x69f12e */ if (!fZ) goto L_0069f12e;
L_0069f122:; BB(0x0069f122);
    /* 0069f122: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f127: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f12e:; BB(0x0069f12e);
    /* 0069f12e: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f134: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f136: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f139u); call_ind(t); }
    /* 0069f139: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f13c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f141: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f146u); f_00694390();
    /* 0069f146: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f147: ret  */ FN_RET(0x0069f0cb); r_esp += 4; return;
}

void f_0069f0d6(void)
{
    FN_ENTER(0x0069f0d6);
    /* 0069f0d6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f0d8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f0da: call 0x6a0994 */ r_esp -= 4; W32(r_esp, 0x69f0dfu); f_006a0994();
    /* 0069f0df: jmp 0x69f116 */ goto L_0069f116;
L_0069f116:; BB(0x0069f116);
    /* 0069f116: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f11d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f120: jne 0x69f12e */ if (!fZ) goto L_0069f12e;
L_0069f122:; BB(0x0069f122);
    /* 0069f122: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f127: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f12e:; BB(0x0069f12e);
    /* 0069f12e: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f134: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f136: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f139u); call_ind(t); }
    /* 0069f139: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f13c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f141: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f146u); f_00694390();
    /* 0069f146: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f147: ret  */ FN_RET(0x0069f0d6); r_esp += 4; return;
}

void f_0069f0e1(void)
{
    FN_ENTER(0x0069f0e1);
    /* 0069f0e1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f0e3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f0e5: call 0x6a0eb8 */ r_esp -= 4; W32(r_esp, 0x69f0eau); f_006a0eb8();
    /* 0069f0ea: jmp 0x69f116 */ goto L_0069f116;
L_0069f116:; BB(0x0069f116);
    /* 0069f116: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f11d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f120: jne 0x69f12e */ if (!fZ) goto L_0069f12e;
L_0069f122:; BB(0x0069f122);
    /* 0069f122: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f127: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f12e:; BB(0x0069f12e);
    /* 0069f12e: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f134: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f136: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f139u); call_ind(t); }
    /* 0069f139: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f13c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f141: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f146u); f_00694390();
    /* 0069f146: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f147: ret  */ FN_RET(0x0069f0e1); r_esp += 4; return;
}

void f_0069f0ec(void)
{
    FN_ENTER(0x0069f0ec);
    /* 0069f0ec: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f0ee: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f0f0: call 0x6a139c */ r_esp -= 4; W32(r_esp, 0x69f0f5u); f_006a139c();
    /* 0069f0f5: jmp 0x69f116 */ goto L_0069f116;
L_0069f116:; BB(0x0069f116);
    /* 0069f116: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f11d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f120: jne 0x69f12e */ if (!fZ) goto L_0069f12e;
L_0069f122:; BB(0x0069f122);
    /* 0069f122: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f127: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f12e:; BB(0x0069f12e);
    /* 0069f12e: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f134: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f136: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f139u); call_ind(t); }
    /* 0069f139: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f13c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f141: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f146u); f_00694390();
    /* 0069f146: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f147: ret  */ FN_RET(0x0069f0ec); r_esp += 4; return;
}

void f_0069f0f7(void)
{
    FN_ENTER(0x0069f0f7);
    /* 0069f0f7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f0f9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f0fb: call 0x6a1a60 */ r_esp -= 4; W32(r_esp, 0x69f100u); f_006a1a60();
    /* 0069f100: jmp 0x69f116 */ goto L_0069f116;
L_0069f116:; BB(0x0069f116);
    /* 0069f116: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f11d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f120: jne 0x69f12e */ if (!fZ) goto L_0069f12e;
L_0069f122:; BB(0x0069f122);
    /* 0069f122: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f127: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f12e:; BB(0x0069f12e);
    /* 0069f12e: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f134: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f136: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f139u); call_ind(t); }
    /* 0069f139: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f13c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f141: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f146u); f_00694390();
    /* 0069f146: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f147: ret  */ FN_RET(0x0069f0f7); r_esp += 4; return;
}

void f_0069f102(void)
{
    FN_ENTER(0x0069f102);
    /* 0069f102: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f104: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f106: call 0x69b93c */ r_esp -= 4; W32(r_esp, 0x69f10bu); f_0069b93c();
    /* 0069f10b: jmp 0x69f116 */ goto L_0069f116;
L_0069f116:; BB(0x0069f116);
    /* 0069f116: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f11d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f120: jne 0x69f12e */ if (!fZ) goto L_0069f12e;
L_0069f122:; BB(0x0069f122);
    /* 0069f122: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f127: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f12e:; BB(0x0069f12e);
    /* 0069f12e: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f134: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f136: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f139u); call_ind(t); }
    /* 0069f139: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f13c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f141: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f146u); f_00694390();
    /* 0069f146: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f147: ret  */ FN_RET(0x0069f102); r_esp += 4; return;
}

void f_0069f10d(void)
{
    FN_ENTER(0x0069f10d);
    /* 0069f10d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f10f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f111: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x69f116u); f_006a1ac0();
    /* 0069f116: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f11d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f120: jne 0x69f12e */ if (!fZ) goto L_0069f12e;
L_0069f122:; BB(0x0069f122);
    /* 0069f122: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f127: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f12e:; BB(0x0069f12e);
    /* 0069f12e: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f134: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f136: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f139u); call_ind(t); }
    /* 0069f139: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f13c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f141: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f146u); f_00694390();
    /* 0069f146: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f147: ret  */ FN_RET(0x0069f10d); r_esp += 4; return;
}

void f_0069f116(void)
{
    FN_ENTER(0x0069f116);
    /* 0069f116: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f11d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f120: jne 0x69f12e */ if (!fZ) goto L_0069f12e;
L_0069f122:; BB(0x0069f122);
    /* 0069f122: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f127: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f12e:; BB(0x0069f12e);
    /* 0069f12e: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f134: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f136: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f139u); call_ind(t); }
    /* 0069f139: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f13c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f13f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f141: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f146u); f_00694390();
    /* 0069f146: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f147: ret  */ FN_RET(0x0069f116); r_esp += 4; return;
}

void f_0069f148(void) /* sub_69F148 */
{
    FN_ENTER(0x0069f148);
    /* 0069f148: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 0069f14d: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069f150: ja 0x69f1c0 */ if ((!fC&&!fZ)) goto L_0069f1c0;
L_0069f152:; BB(0x0069f152);
    /* 0069f152: mov eax, dword ptr [eax*4 + 0x93d2e4] */ r_eax = R32((u32)(r_eax*4+0x93d2e4u));
    /* 0069f159: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0069f1c0:; BB(0x0069f1c0);
    /* 0069f1c0: ret 4 */ FN_RET(0x0069f148); r_esp += 8; return;
}

void f_0069f15b(void)
{
    FN_ENTER(0x0069f15b);
    /* 0069f15b: call 0x69b720 */ r_esp -= 4; W32(r_esp, 0x69f160u); f_0069b720();
    /* 0069f160: jmp 0x69f1c0 */ goto L_0069f1c0;
L_0069f1c0:; BB(0x0069f1c0);
    /* 0069f1c0: ret 4 */ FN_RET(0x0069f15b); r_esp += 8; return;
}

void f_0069f162(void)
{
    FN_ENTER(0x0069f162);
    /* 0069f162: call 0x69f1c4 */ r_esp -= 4; W32(r_esp, 0x69f167u); f_0069f1c4();
    /* 0069f167: jmp 0x69f1c0 */ goto L_0069f1c0;
L_0069f1c0:; BB(0x0069f1c0);
    /* 0069f1c0: ret 4 */ FN_RET(0x0069f162); r_esp += 8; return;
}

void f_0069f169(void)
{
    FN_ENTER(0x0069f169);
    /* 0069f169: call 0x69f200 */ r_esp -= 4; W32(r_esp, 0x69f16eu); f_0069f200();
    /* 0069f16e: jmp 0x69f1c0 */ goto L_0069f1c0;
L_0069f1c0:; BB(0x0069f1c0);
    /* 0069f1c0: ret 4 */ FN_RET(0x0069f169); r_esp += 8; return;
}

void f_0069f170(void)
{
    FN_ENTER(0x0069f170);
    /* 0069f170: mov edx, dword ptr [ecx + 0x634] */ r_edx = R32((u32)(r_ecx+0x634u));
    /* 0069f176: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069f178: mov word ptr [0xa9432c], ax */ W16((u32)(0xa9432cu), (u16)r_eax);
    /* 0069f17e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069f180: mov word ptr [0xa94330], ax */ W16((u32)(0xa94330u), (u16)r_eax);
    /* 0069f186: je 0x69f1c0 */ if (fZ) goto L_0069f1c0;
L_0069f188:; BB(0x0069f188);
    /* 0069f188: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 0069f18e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069f190: je 0x69f199 */ if (fZ) goto L_0069f199;
L_0069f192:; BB(0x0069f192);
    /* 0069f192: mov eax, 1 */ r_eax = 0x1u;
    /* 0069f197: jmp 0x69f19b */ goto L_0069f19b;
L_0069f199:; BB(0x0069f199);
    /* 0069f199: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0069f19b:; BB(0x0069f19b);
    /* 0069f19b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069f19d: jne 0x69f1c0 */ if (!fZ) goto L_0069f1c0;
L_0069f19f:; BB(0x0069f19f);
    /* 0069f19f: push 0xa9432c */ { u32 v = 0xa9432cu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f1a4: push 0xa94330 */ { u32 v = 0xa94330u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f1a9: call 0x70a60c */ r_esp -= 4; W32(r_esp, 0x69f1aeu); f_0070a60c();
    /* 0069f1ae: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069f1b1: ret 4 */ FN_RET(0x0069f170); r_esp += 8; return;
L_0069f1c0:; BB(0x0069f1c0);
    /* 0069f1c0: ret 4 */ FN_RET(0x0069f170); r_esp += 8; return;
}

void f_0069f1b4(void)
{
    FN_ENTER(0x0069f1b4);
    /* 0069f1b4: call 0x69efbc */ r_esp -= 4; W32(r_esp, 0x69f1b9u); f_0069efbc();
    /* 0069f1b9: jmp 0x69f1c0 */ goto L_0069f1c0;
L_0069f1c0:; BB(0x0069f1c0);
    /* 0069f1c0: ret 4 */ FN_RET(0x0069f1b4); r_esp += 8; return;
}

void f_0069f1bb(void)
{
    FN_ENTER(0x0069f1bb);
    /* 0069f1bb: call 0x69f210 */ r_esp -= 4; W32(r_esp, 0x69f1c0u); f_0069f210();
    /* 0069f1c0: ret 4 */ FN_RET(0x0069f1bb); r_esp += 8; return;
}

void f_0069f1c0(void)
{
    FN_ENTER(0x0069f1c0);
    /* 0069f1c0: ret 4 */ FN_RET(0x0069f1c0); r_esp += 8; return;
}

void f_0069f1c4(void) /* sub_69F1C4 */
{
    FN_ENTER(0x0069f1c4);
    /* 0069f1c4: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069f1c7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f1c9: je 0x69f1db */ if (fZ) goto L_0069f1db;
L_0069f1cb:; BB(0x0069f1cb);
    /* 0069f1cb: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 0069f1d2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f1d5: jne 0x69f1db */ if (!fZ) goto L_0069f1db;
L_0069f1d7:; BB(0x0069f1d7);
    /* 0069f1d7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069f1da: ret  */ FN_RET(0x0069f1c4); r_esp += 4; return;
L_0069f1db:; BB(0x0069f1db);
    /* 0069f1db: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0069f1df: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 0069f1e2: mov byte ptr [esp], 0x51 */ W8((u32)(r_esp), 0x51u);
    /* 0069f1e6: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 0069f1eb: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0069f1f0: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0069f1f4: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069f1f7: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x69f1fcu); f_008003e0();
    /* 0069f1fc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069f1ff: ret  */ FN_RET(0x0069f1c4); r_esp += 4; return;
}

void f_0069f200(void) /* sub_69F200 */
{
    FN_ENTER(0x0069f200);
    /* 0069f200: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 0069f206: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069f208: je 0x69f20f */ if (fZ) goto L_0069f20f;
L_0069f20a:; BB(0x0069f20a);
    /* 0069f20a: call 0x69d554 */ r_esp -= 4; W32(r_esp, 0x69f20fu); f_0069d554();
L_0069f20f:; BB(0x0069f20f);
    /* 0069f20f: ret  */ FN_RET(0x0069f200); r_esp += 4; return;
}

void f_0069f210(void) /* sub_69F210 */
{
    FN_ENTER(0x0069f210);
    /* 0069f210: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069f211: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0069f213: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0069f21a: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0069f21d: mov dword ptr [ebx + 0x348], 0xb */ W32((u32)(r_ebx+0x348u), 0xbu);
    /* 0069f227: ja 0x69f352 */ if ((!fC&&!fZ)) goto L_0069f352;
L_0069f22d:; BB(0x0069f22d);
    /* 0069f22d: mov eax, dword ptr [eax*4 + 0x93d320] */ r_eax = R32((u32)(r_eax*4+0x93d320u));
    /* 0069f234: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0069f352:; BB(0x0069f352);
    /* 0069f352: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f359: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f35c: jne 0x69f36a */ if (!fZ) goto L_0069f36a;
L_0069f35e:; BB(0x0069f35e);
    /* 0069f35e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f363: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f36a:; BB(0x0069f36a);
    /* 0069f36a: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f370: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f372: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f375u); call_ind(t); }
    /* 0069f375: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f379: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f37b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f37d: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f382u); f_00694390();
    /* 0069f382: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f383: ret  */ FN_RET(0x0069f210); r_esp += 4; return;
}

void f_0069f236(void)
{
    FN_ENTER(0x0069f236);
    /* 0069f236: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f238: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f23a: call 0x69bdf0 */ r_esp -= 4; W32(r_esp, 0x69f23fu); f_0069bdf0();
    /* 0069f23f: jmp 0x69f352 */ goto L_0069f352;
L_0069f352:; BB(0x0069f352);
    /* 0069f352: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f359: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f35c: jne 0x69f36a */ if (!fZ) goto L_0069f36a;
L_0069f35e:; BB(0x0069f35e);
    /* 0069f35e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f363: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f36a:; BB(0x0069f36a);
    /* 0069f36a: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f370: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f372: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f375u); call_ind(t); }
    /* 0069f375: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f379: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f37b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f37d: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f382u); f_00694390();
    /* 0069f382: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f383: ret  */ FN_RET(0x0069f236); r_esp += 4; return;
}

void f_0069f244(void)
{
    FN_ENTER(0x0069f244);
    /* 0069f244: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f246: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f248: call 0x69c6c0 */ r_esp -= 4; W32(r_esp, 0x69f24du); f_0069c6c0();
    /* 0069f24d: jmp 0x69f352 */ goto L_0069f352;
L_0069f352:; BB(0x0069f352);
    /* 0069f352: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f359: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f35c: jne 0x69f36a */ if (!fZ) goto L_0069f36a;
L_0069f35e:; BB(0x0069f35e);
    /* 0069f35e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f363: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f36a:; BB(0x0069f36a);
    /* 0069f36a: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f370: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f372: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f375u); call_ind(t); }
    /* 0069f375: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f379: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f37b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f37d: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f382u); f_00694390();
    /* 0069f382: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f383: ret  */ FN_RET(0x0069f244); r_esp += 4; return;
}

void f_0069f252(void)
{
    FN_ENTER(0x0069f252);
    /* 0069f252: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f254: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f256: call 0x69c988 */ r_esp -= 4; W32(r_esp, 0x69f25bu); f_0069c988();
    /* 0069f25b: jmp 0x69f352 */ goto L_0069f352;
L_0069f352:; BB(0x0069f352);
    /* 0069f352: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f359: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f35c: jne 0x69f36a */ if (!fZ) goto L_0069f36a;
L_0069f35e:; BB(0x0069f35e);
    /* 0069f35e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f363: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f36a:; BB(0x0069f36a);
    /* 0069f36a: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f370: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f372: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f375u); call_ind(t); }
    /* 0069f375: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f379: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f37b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f37d: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f382u); f_00694390();
    /* 0069f382: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f383: ret  */ FN_RET(0x0069f252); r_esp += 4; return;
}

void f_0069f260(void)
{
    FN_ENTER(0x0069f260);
    /* 0069f260: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f262: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f264: call 0x69cd20 */ r_esp -= 4; W32(r_esp, 0x69f269u); f_0069cd20();
    /* 0069f269: jmp 0x69f352 */ goto L_0069f352;
L_0069f352:; BB(0x0069f352);
    /* 0069f352: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f359: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f35c: jne 0x69f36a */ if (!fZ) goto L_0069f36a;
L_0069f35e:; BB(0x0069f35e);
    /* 0069f35e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f363: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f36a:; BB(0x0069f36a);
    /* 0069f36a: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f370: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f372: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f375u); call_ind(t); }
    /* 0069f375: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f379: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f37b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f37d: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f382u); f_00694390();
    /* 0069f382: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f383: ret  */ FN_RET(0x0069f260); r_esp += 4; return;
}

void f_0069f26e(void)
{
    FN_ENTER(0x0069f26e);
    /* 0069f26e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f270: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f272: call 0x69d1e4 */ r_esp -= 4; W32(r_esp, 0x69f277u); f_0069d1e4();
    /* 0069f277: jmp 0x69f352 */ goto L_0069f352;
L_0069f352:; BB(0x0069f352);
    /* 0069f352: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f359: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f35c: jne 0x69f36a */ if (!fZ) goto L_0069f36a;
L_0069f35e:; BB(0x0069f35e);
    /* 0069f35e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f363: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f36a:; BB(0x0069f36a);
    /* 0069f36a: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f370: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f372: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f375u); call_ind(t); }
    /* 0069f375: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f379: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f37b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f37d: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f382u); f_00694390();
    /* 0069f382: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f383: ret  */ FN_RET(0x0069f26e); r_esp += 4; return;
}

void f_0069f27c(void)
{
    FN_ENTER(0x0069f27c);
    /* 0069f27c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f27e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f280: call 0x69d43c */ r_esp -= 4; W32(r_esp, 0x69f285u); f_0069d43c();
    /* 0069f285: jmp 0x69f352 */ goto L_0069f352;
L_0069f352:; BB(0x0069f352);
    /* 0069f352: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f359: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f35c: jne 0x69f36a */ if (!fZ) goto L_0069f36a;
L_0069f35e:; BB(0x0069f35e);
    /* 0069f35e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f363: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f36a:; BB(0x0069f36a);
    /* 0069f36a: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f370: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f372: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f375u); call_ind(t); }
    /* 0069f375: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f379: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f37b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f37d: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f382u); f_00694390();
    /* 0069f382: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f383: ret  */ FN_RET(0x0069f27c); r_esp += 4; return;
}

void f_0069f28a(void)
{
    FN_ENTER(0x0069f28a);
    /* 0069f28a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f28c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f28e: call 0x69d8f4 */ r_esp -= 4; W32(r_esp, 0x69f293u); f_0069d8f4();
    /* 0069f293: jmp 0x69f352 */ goto L_0069f352;
L_0069f352:; BB(0x0069f352);
    /* 0069f352: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f359: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f35c: jne 0x69f36a */ if (!fZ) goto L_0069f36a;
L_0069f35e:; BB(0x0069f35e);
    /* 0069f35e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f363: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f36a:; BB(0x0069f36a);
    /* 0069f36a: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f370: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f372: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f375u); call_ind(t); }
    /* 0069f375: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f379: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f37b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f37d: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f382u); f_00694390();
    /* 0069f382: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f383: ret  */ FN_RET(0x0069f28a); r_esp += 4; return;
}

void f_0069f298(void)
{
    FN_ENTER(0x0069f298);
    /* 0069f298: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f29a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f29c: call 0x69dd60 */ r_esp -= 4; W32(r_esp, 0x69f2a1u); f_0069dd60();
    /* 0069f2a1: jmp 0x69f352 */ goto L_0069f352;
L_0069f352:; BB(0x0069f352);
    /* 0069f352: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f359: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f35c: jne 0x69f36a */ if (!fZ) goto L_0069f36a;
L_0069f35e:; BB(0x0069f35e);
    /* 0069f35e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f363: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f36a:; BB(0x0069f36a);
    /* 0069f36a: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f370: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f372: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f375u); call_ind(t); }
    /* 0069f375: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f379: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f37b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f37d: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f382u); f_00694390();
    /* 0069f382: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f383: ret  */ FN_RET(0x0069f298); r_esp += 4; return;
}

void f_0069f2a6(void)
{
    FN_ENTER(0x0069f2a6);
    /* 0069f2a6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f2a8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f2aa: call 0x69e15c */ r_esp -= 4; W32(r_esp, 0x69f2afu); f_0069e15c();
    /* 0069f2af: jmp 0x69f352 */ goto L_0069f352;
L_0069f352:; BB(0x0069f352);
    /* 0069f352: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f359: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f35c: jne 0x69f36a */ if (!fZ) goto L_0069f36a;
L_0069f35e:; BB(0x0069f35e);
    /* 0069f35e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f363: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f36a:; BB(0x0069f36a);
    /* 0069f36a: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f370: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f372: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f375u); call_ind(t); }
    /* 0069f375: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f379: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f37b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f37d: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f382u); f_00694390();
    /* 0069f382: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f383: ret  */ FN_RET(0x0069f2a6); r_esp += 4; return;
}

void f_0069f2b4(void)
{
    FN_ENTER(0x0069f2b4);
    /* 0069f2b4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f2b6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f2b8: call 0x69e718 */ r_esp -= 4; W32(r_esp, 0x69f2bdu); f_0069e718();
    /* 0069f2bd: jmp 0x69f352 */ goto L_0069f352;
L_0069f352:; BB(0x0069f352);
    /* 0069f352: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f359: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f35c: jne 0x69f36a */ if (!fZ) goto L_0069f36a;
L_0069f35e:; BB(0x0069f35e);
    /* 0069f35e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f363: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f36a:; BB(0x0069f36a);
    /* 0069f36a: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f370: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f372: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f375u); call_ind(t); }
    /* 0069f375: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f379: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f37b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f37d: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f382u); f_00694390();
    /* 0069f382: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f383: ret  */ FN_RET(0x0069f2b4); r_esp += 4; return;
}

void f_0069f2c2(void)
{
    FN_ENTER(0x0069f2c2);
    /* 0069f2c2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f2c4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f2c6: call 0x69ebc8 */ r_esp -= 4; W32(r_esp, 0x69f2cbu); f_0069ebc8();
    /* 0069f2cb: jmp 0x69f352 */ goto L_0069f352;
L_0069f352:; BB(0x0069f352);
    /* 0069f352: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f359: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f35c: jne 0x69f36a */ if (!fZ) goto L_0069f36a;
L_0069f35e:; BB(0x0069f35e);
    /* 0069f35e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f363: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f36a:; BB(0x0069f36a);
    /* 0069f36a: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f370: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f372: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f375u); call_ind(t); }
    /* 0069f375: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f379: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f37b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f37d: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f382u); f_00694390();
    /* 0069f382: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f383: ret  */ FN_RET(0x0069f2c2); r_esp += 4; return;
}

void f_0069f2d0(void)
{
    FN_ENTER(0x0069f2d0);
    /* 0069f2d0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f2d2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f2d4: call 0x69ef04 */ r_esp -= 4; W32(r_esp, 0x69f2d9u); f_0069ef04();
    /* 0069f2d9: jmp 0x69f352 */ goto L_0069f352;
L_0069f352:; BB(0x0069f352);
    /* 0069f352: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f359: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f35c: jne 0x69f36a */ if (!fZ) goto L_0069f36a;
L_0069f35e:; BB(0x0069f35e);
    /* 0069f35e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f363: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f36a:; BB(0x0069f36a);
    /* 0069f36a: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f370: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f372: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f375u); call_ind(t); }
    /* 0069f375: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f379: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f37b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f37d: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f382u); f_00694390();
    /* 0069f382: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f383: ret  */ FN_RET(0x0069f2d0); r_esp += 4; return;
}

void f_0069f2db(void)
{
    FN_ENTER(0x0069f2db);
    /* 0069f2db: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f2dd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f2df: call 0x69f148 */ r_esp -= 4; W32(r_esp, 0x69f2e4u); f_0069f148();
    /* 0069f2e4: jmp 0x69f352 */ goto L_0069f352;
L_0069f352:; BB(0x0069f352);
    /* 0069f352: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f359: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f35c: jne 0x69f36a */ if (!fZ) goto L_0069f36a;
L_0069f35e:; BB(0x0069f35e);
    /* 0069f35e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f363: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f36a:; BB(0x0069f36a);
    /* 0069f36a: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f370: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f372: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f375u); call_ind(t); }
    /* 0069f375: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f379: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f37b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f37d: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f382u); f_00694390();
    /* 0069f382: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f383: ret  */ FN_RET(0x0069f2db); r_esp += 4; return;
}

void f_0069f2e6(void)
{
    FN_ENTER(0x0069f2e6);
    /* 0069f2e6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f2e8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f2ea: call 0x69f384 */ r_esp -= 4; W32(r_esp, 0x69f2efu); f_0069f384();
    /* 0069f2ef: jmp 0x69f352 */ goto L_0069f352;
L_0069f352:; BB(0x0069f352);
    /* 0069f352: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f359: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f35c: jne 0x69f36a */ if (!fZ) goto L_0069f36a;
L_0069f35e:; BB(0x0069f35e);
    /* 0069f35e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f363: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f36a:; BB(0x0069f36a);
    /* 0069f36a: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f370: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f372: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f375u); call_ind(t); }
    /* 0069f375: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f379: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f37b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f37d: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f382u); f_00694390();
    /* 0069f382: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f383: ret  */ FN_RET(0x0069f2e6); r_esp += 4; return;
}

void f_0069f2f1(void)
{
    FN_ENTER(0x0069f2f1);
    /* 0069f2f1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f2f3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f2f5: call 0x69f648 */ r_esp -= 4; W32(r_esp, 0x69f2fau); f_0069f648();
    /* 0069f2fa: jmp 0x69f352 */ goto L_0069f352;
L_0069f352:; BB(0x0069f352);
    /* 0069f352: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f359: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f35c: jne 0x69f36a */ if (!fZ) goto L_0069f36a;
L_0069f35e:; BB(0x0069f35e);
    /* 0069f35e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f363: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f36a:; BB(0x0069f36a);
    /* 0069f36a: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f370: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f372: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f375u); call_ind(t); }
    /* 0069f375: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f379: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f37b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f37d: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f382u); f_00694390();
    /* 0069f382: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f383: ret  */ FN_RET(0x0069f2f1); r_esp += 4; return;
}

void f_0069f2fc(void)
{
    FN_ENTER(0x0069f2fc);
    /* 0069f2fc: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f2fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f300: call 0x69fe2c */ r_esp -= 4; W32(r_esp, 0x69f305u); f_0069fe2c();
    /* 0069f305: jmp 0x69f352 */ goto L_0069f352;
L_0069f352:; BB(0x0069f352);
    /* 0069f352: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f359: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f35c: jne 0x69f36a */ if (!fZ) goto L_0069f36a;
L_0069f35e:; BB(0x0069f35e);
    /* 0069f35e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f363: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f36a:; BB(0x0069f36a);
    /* 0069f36a: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f370: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f372: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f375u); call_ind(t); }
    /* 0069f375: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f379: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f37b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f37d: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f382u); f_00694390();
    /* 0069f382: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f383: ret  */ FN_RET(0x0069f2fc); r_esp += 4; return;
}

void f_0069f307(void)
{
    FN_ENTER(0x0069f307);
    /* 0069f307: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f309: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f30b: call 0x6a0624 */ r_esp -= 4; W32(r_esp, 0x69f310u); f_006a0624();
    /* 0069f310: jmp 0x69f352 */ goto L_0069f352;
L_0069f352:; BB(0x0069f352);
    /* 0069f352: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f359: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f35c: jne 0x69f36a */ if (!fZ) goto L_0069f36a;
L_0069f35e:; BB(0x0069f35e);
    /* 0069f35e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f363: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f36a:; BB(0x0069f36a);
    /* 0069f36a: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f370: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f372: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f375u); call_ind(t); }
    /* 0069f375: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f379: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f37b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f37d: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f382u); f_00694390();
    /* 0069f382: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f383: ret  */ FN_RET(0x0069f307); r_esp += 4; return;
}

void f_0069f312(void)
{
    FN_ENTER(0x0069f312);
    /* 0069f312: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f314: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f316: call 0x6a0994 */ r_esp -= 4; W32(r_esp, 0x69f31bu); f_006a0994();
    /* 0069f31b: jmp 0x69f352 */ goto L_0069f352;
L_0069f352:; BB(0x0069f352);
    /* 0069f352: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f359: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f35c: jne 0x69f36a */ if (!fZ) goto L_0069f36a;
L_0069f35e:; BB(0x0069f35e);
    /* 0069f35e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f363: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f36a:; BB(0x0069f36a);
    /* 0069f36a: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f370: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f372: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f375u); call_ind(t); }
    /* 0069f375: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f379: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f37b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f37d: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f382u); f_00694390();
    /* 0069f382: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f383: ret  */ FN_RET(0x0069f312); r_esp += 4; return;
}

void f_0069f31d(void)
{
    FN_ENTER(0x0069f31d);
    /* 0069f31d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f31f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f321: call 0x6a0eb8 */ r_esp -= 4; W32(r_esp, 0x69f326u); f_006a0eb8();
    /* 0069f326: jmp 0x69f352 */ goto L_0069f352;
L_0069f352:; BB(0x0069f352);
    /* 0069f352: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f359: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f35c: jne 0x69f36a */ if (!fZ) goto L_0069f36a;
L_0069f35e:; BB(0x0069f35e);
    /* 0069f35e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f363: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f36a:; BB(0x0069f36a);
    /* 0069f36a: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f370: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f372: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f375u); call_ind(t); }
    /* 0069f375: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f379: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f37b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f37d: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f382u); f_00694390();
    /* 0069f382: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f383: ret  */ FN_RET(0x0069f31d); r_esp += 4; return;
}

void f_0069f328(void)
{
    FN_ENTER(0x0069f328);
    /* 0069f328: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f32a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f32c: call 0x6a139c */ r_esp -= 4; W32(r_esp, 0x69f331u); f_006a139c();
    /* 0069f331: jmp 0x69f352 */ goto L_0069f352;
L_0069f352:; BB(0x0069f352);
    /* 0069f352: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f359: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f35c: jne 0x69f36a */ if (!fZ) goto L_0069f36a;
L_0069f35e:; BB(0x0069f35e);
    /* 0069f35e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f363: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f36a:; BB(0x0069f36a);
    /* 0069f36a: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f370: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f372: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f375u); call_ind(t); }
    /* 0069f375: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f379: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f37b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f37d: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f382u); f_00694390();
    /* 0069f382: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f383: ret  */ FN_RET(0x0069f328); r_esp += 4; return;
}

void f_0069f333(void)
{
    FN_ENTER(0x0069f333);
    /* 0069f333: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f335: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f337: call 0x6a1a60 */ r_esp -= 4; W32(r_esp, 0x69f33cu); f_006a1a60();
    /* 0069f33c: jmp 0x69f352 */ goto L_0069f352;
L_0069f352:; BB(0x0069f352);
    /* 0069f352: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f359: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f35c: jne 0x69f36a */ if (!fZ) goto L_0069f36a;
L_0069f35e:; BB(0x0069f35e);
    /* 0069f35e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f363: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f36a:; BB(0x0069f36a);
    /* 0069f36a: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f370: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f372: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f375u); call_ind(t); }
    /* 0069f375: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f379: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f37b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f37d: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f382u); f_00694390();
    /* 0069f382: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f383: ret  */ FN_RET(0x0069f333); r_esp += 4; return;
}

void f_0069f33e(void)
{
    FN_ENTER(0x0069f33e);
    /* 0069f33e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f340: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f342: call 0x69b93c */ r_esp -= 4; W32(r_esp, 0x69f347u); f_0069b93c();
    /* 0069f347: jmp 0x69f352 */ goto L_0069f352;
L_0069f352:; BB(0x0069f352);
    /* 0069f352: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f359: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f35c: jne 0x69f36a */ if (!fZ) goto L_0069f36a;
L_0069f35e:; BB(0x0069f35e);
    /* 0069f35e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f363: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f36a:; BB(0x0069f36a);
    /* 0069f36a: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f370: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f372: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f375u); call_ind(t); }
    /* 0069f375: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f379: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f37b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f37d: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f382u); f_00694390();
    /* 0069f382: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f383: ret  */ FN_RET(0x0069f33e); r_esp += 4; return;
}

void f_0069f349(void)
{
    FN_ENTER(0x0069f349);
    /* 0069f349: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f34b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f34d: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x69f352u); f_006a1ac0();
    /* 0069f352: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f359: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f35c: jne 0x69f36a */ if (!fZ) goto L_0069f36a;
L_0069f35e:; BB(0x0069f35e);
    /* 0069f35e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f363: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f36a:; BB(0x0069f36a);
    /* 0069f36a: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f370: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f372: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f375u); call_ind(t); }
    /* 0069f375: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f379: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f37b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f37d: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f382u); f_00694390();
    /* 0069f382: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f383: ret  */ FN_RET(0x0069f349); r_esp += 4; return;
}

void f_0069f352(void)
{
    FN_ENTER(0x0069f352);
    /* 0069f352: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0069f359: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f35c: jne 0x69f36a */ if (!fZ) goto L_0069f36a;
L_0069f35e:; BB(0x0069f35e);
    /* 0069f35e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f363: mov word ptr [ebx + 0xba], ax */ W16((u32)(r_ebx+0xbau), (u16)r_eax);
L_0069f36a:; BB(0x0069f36a);
    /* 0069f36a: mov ecx, dword ptr [ebx + 0x38c] */ r_ecx = R32((u32)(r_ebx+0x38cu));
    /* 0069f370: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f372: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x69f375u); call_ind(t); }
    /* 0069f375: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f379: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f37b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069f37d: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f382u); f_00694390();
    /* 0069f382: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f383: ret  */ FN_RET(0x0069f352); r_esp += 4; return;
}

void f_0069f384(void) /* sub_69F384 */
{
    FN_ENTER(0x0069f384);
    /* 0069f384: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 0069f389: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069f38c: ja 0x69f403 */ if ((!fC&&!fZ)) goto L_0069f403;
L_0069f38e:; BB(0x0069f38e);
    /* 0069f38e: mov eax, dword ptr [eax*4 + 0x93d384] */ r_eax = R32((u32)(r_eax*4+0x93d384u));
    /* 0069f395: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0069f403:; BB(0x0069f403);
    /* 0069f403: ret 4 */ FN_RET(0x0069f384); r_esp += 8; return;
}

void f_0069f397(void)
{
    FN_ENTER(0x0069f397);
    /* 0069f397: call 0x69f408 */ r_esp -= 4; W32(r_esp, 0x69f39cu); f_0069f408();
    /* 0069f39c: jmp 0x69f403 */ goto L_0069f403;
L_0069f403:; BB(0x0069f403);
    /* 0069f403: ret 4 */ FN_RET(0x0069f397); r_esp += 8; return;
}

void f_0069f39e(void)
{
    FN_ENTER(0x0069f39e);
    /* 0069f39e: call 0x6a29f4 */ r_esp -= 4; W32(r_esp, 0x69f3a3u); f_006a29f4();
    /* 0069f3a3: jmp 0x69f403 */ goto L_0069f403;
L_0069f403:; BB(0x0069f403);
    /* 0069f403: ret 4 */ FN_RET(0x0069f39e); r_esp += 8; return;
}

void f_0069f3a5(void)
{
    FN_ENTER(0x0069f3a5);
    /* 0069f3a5: call 0x69f448 */ r_esp -= 4; W32(r_esp, 0x69f3aau); f_0069f448();
    /* 0069f3aa: jmp 0x69f403 */ goto L_0069f403;
L_0069f403:; BB(0x0069f403);
    /* 0069f403: ret 4 */ FN_RET(0x0069f3a5); r_esp += 8; return;
}

void f_0069f3ac(void)
{
    FN_ENTER(0x0069f3ac);
    /* 0069f3ac: call 0x69ecac */ r_esp -= 4; W32(r_esp, 0x69f3b1u); f_0069ecac();
    /* 0069f3b1: jmp 0x69f403 */ goto L_0069f403;
L_0069f403:; BB(0x0069f403);
    /* 0069f403: ret 4 */ FN_RET(0x0069f3ac); r_esp += 8; return;
}

void f_0069f3b3(void)
{
    FN_ENTER(0x0069f3b3);
    /* 0069f3b3: mov edx, dword ptr [ecx + 0x634] */ r_edx = R32((u32)(r_ecx+0x634u));
    /* 0069f3b9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069f3bb: mov word ptr [0xa9432c], ax */ W16((u32)(0xa9432cu), (u16)r_eax);
    /* 0069f3c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069f3c3: mov word ptr [0xa94330], ax */ W16((u32)(0xa94330u), (u16)r_eax);
    /* 0069f3c9: je 0x69f403 */ if (fZ) goto L_0069f403;
L_0069f3cb:; BB(0x0069f3cb);
    /* 0069f3cb: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 0069f3d1: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069f3d3: je 0x69f3dc */ if (fZ) goto L_0069f3dc;
L_0069f3d5:; BB(0x0069f3d5);
    /* 0069f3d5: mov eax, 1 */ r_eax = 0x1u;
    /* 0069f3da: jmp 0x69f3de */ goto L_0069f3de;
L_0069f3dc:; BB(0x0069f3dc);
    /* 0069f3dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0069f3de:; BB(0x0069f3de);
    /* 0069f3de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069f3e0: jne 0x69f403 */ if (!fZ) goto L_0069f403;
L_0069f3e2:; BB(0x0069f3e2);
    /* 0069f3e2: push 0xa9432c */ { u32 v = 0xa9432cu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f3e7: push 0xa94330 */ { u32 v = 0xa94330u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f3ec: call 0x70a60c */ r_esp -= 4; W32(r_esp, 0x69f3f1u); f_0070a60c();
    /* 0069f3f1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069f3f4: ret 4 */ FN_RET(0x0069f3b3); r_esp += 8; return;
L_0069f403:; BB(0x0069f403);
    /* 0069f403: ret 4 */ FN_RET(0x0069f3b3); r_esp += 8; return;
}

void f_0069f3f7(void)
{
    FN_ENTER(0x0069f3f7);
    /* 0069f3f7: call 0x69f478 */ r_esp -= 4; W32(r_esp, 0x69f3fcu); f_0069f478();
    /* 0069f3fc: jmp 0x69f403 */ goto L_0069f403;
L_0069f403:; BB(0x0069f403);
    /* 0069f403: ret 4 */ FN_RET(0x0069f3f7); r_esp += 8; return;
}

void f_0069f3fe(void)
{
    FN_ENTER(0x0069f3fe);
    /* 0069f3fe: call 0x69f498 */ r_esp -= 4; W32(r_esp, 0x69f403u); f_0069f498();
    /* 0069f403: ret 4 */ FN_RET(0x0069f3fe); r_esp += 8; return;
}

void f_0069f403(void)
{
    FN_ENTER(0x0069f403);
    /* 0069f403: ret 4 */ FN_RET(0x0069f403); r_esp += 8; return;
}

void f_0069f408(void) /* sub_69F408 */
{
    FN_ENTER(0x0069f408);
    /* 0069f408: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069f409: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0069f40b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069f40d: call 0x68a3e0 */ r_esp -= 4; W32(r_esp, 0x69f412u); f_0068a3e0();
    /* 0069f412: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f414: je 0x69f421 */ if (fZ) goto L_0069f421;
L_0069f416:; BB(0x0069f416);
    /* 0069f416: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f418: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069f41a: call 0x69d43c */ r_esp -= 4; W32(r_esp, 0x69f41fu); f_0069d43c();
    /* 0069f41f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f420: ret  */ FN_RET(0x0069f408); r_esp += 4; return;
L_0069f421:; BB(0x0069f421);
    /* 0069f421: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0069f424: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069f429: je 0x69f446 */ if (fZ) goto L_0069f446;
L_0069f42b:; BB(0x0069f42b);
    /* 0069f42b: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f430: je 0x69f43d */ if (fZ) goto L_0069f43d;
L_0069f432:; BB(0x0069f432);
    /* 0069f432: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f434: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069f436: call 0x69e718 */ r_esp -= 4; W32(r_esp, 0x69f43bu); f_0069e718();
    /* 0069f43b: jmp 0x69f446 */ goto L_0069f446;
L_0069f43d:; BB(0x0069f43d);
    /* 0069f43d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f43f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069f441: call 0x69ebc8 */ r_esp -= 4; W32(r_esp, 0x69f446u); f_0069ebc8();
L_0069f446:; BB(0x0069f446);
    /* 0069f446: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f447: ret  */ FN_RET(0x0069f408); r_esp += 4; return;
}

void f_0069f448(void) /* sub_69F448 */
{
    FN_ENTER(0x0069f448);
    /* 0069f448: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069f449: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f44b: je 0x69f45b */ if (fZ) goto L_0069f45b;
L_0069f44d:; BB(0x0069f44d);
    /* 0069f44d: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 0069f454: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069f457: jne 0x69f45b */ if (!fZ) goto L_0069f45b;
L_0069f459:; BB(0x0069f459);
    /* 0069f459: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069f45a: ret  */ FN_RET(0x0069f448); r_esp += 4; return;
L_0069f45b:; BB(0x0069f45b);
    /* 0069f45b: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0069f45f: mov byte ptr [esp], 0x4a */ W8((u32)(r_esp), 0x4au);
    /* 0069f463: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0069f468: mov byte ptr [esp + 1], 1 */ W8((u32)(r_esp+0x1u), 0x1u);
    /* 0069f46d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069f470: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x69f475u); f_008003e0();
    /* 0069f475: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069f476: ret  */ FN_RET(0x0069f448); r_esp += 4; return;
}

void f_0069f460(void)
{
    FN_ENTER(0x0069f460);
    /* 0069f460: add al, 0x24 */ {  u32 a = (u8)r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0069f462: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069f463: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0069f468: mov byte ptr [esp + 1], 1 */ W8((u32)(r_esp+0x1u), 0x1u);
    /* 0069f46d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069f470: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x69f475u); f_008003e0();
    /* 0069f475: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069f476: ret  */ FN_RET(0x0069f460); r_esp += 4; return;
}

void f_0069f478(void) /* sub_69F478 */
{
    FN_ENTER(0x0069f478);
    /* 0069f478: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069f479: mov esi, ecx */ r_esi = r_ecx;
    /* 0069f47b: mov ecx, esi */ r_ecx = r_esi;
    /* 0069f47d: call 0x694230 */ r_esp -= 4; W32(r_esp, 0x69f482u); f_00694230();
    /* 0069f482: mov ecx, esi */ r_ecx = r_esi;
    /* 0069f484: call 0x693844 */ r_esp -= 4; W32(r_esp, 0x69f489u); f_00693844();
    /* 0069f489: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069f48b: jne 0x69f494 */ if (!fZ) goto L_0069f494;
L_0069f48d:; BB(0x0069f48d);
    /* 0069f48d: mov ecx, esi */ r_ecx = r_esi;
    /* 0069f48f: call 0x777724 */ r_esp -= 4; W32(r_esp, 0x69f494u); f_00777724();
L_0069f494:; BB(0x0069f494);
    /* 0069f494: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069f495: ret  */ FN_RET(0x0069f478); r_esp += 4; return;
}

void f_0069f498(void) /* sub_69F498 */
{
    FN_ENTER(0x0069f498);
    /* 0069f498: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069f499: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069f49a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069f49b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069f49c: mov edi, ecx */ r_edi = r_ecx;
    /* 0069f49e: mov esi, dword ptr [edi + 0x30c] */ r_esi = R32((u32)(r_edi+0x30cu));
    /* 0069f4a4: mov ebp, dword ptr [edi + 0x310] */ r_ebp = R32((u32)(r_edi+0x310u));
    /* 0069f4aa: mov ebx, dword ptr [edi + 0x314] */ r_ebx = R32((u32)(r_edi+0x314u));
    /* 0069f4b0: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0069f4b7: mov dword ptr [edi + 0x348], 0xa */ W32((u32)(r_edi+0x348u), 0xau);
    /* 0069f4c1: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0069f4c4: ja 0x69f5ef */ if ((!fC&&!fZ)) goto L_0069f5ef;
L_0069f4ca:; BB(0x0069f4ca);
    /* 0069f4ca: mov eax, dword ptr [eax*4 + 0x93d3c0] */ r_eax = R32((u32)(r_eax*4+0x93d3c0u));
    /* 0069f4d1: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0069f5ef:; BB(0x0069f5ef);
    /* 0069f5ef: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069f5f2: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069f5f8: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069f5fe: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069f604: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069f609: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069f60c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f60e: call 0x68c8e8 */ r_esp -= 4; W32(r_esp, 0x69f613u); f_0068c8e8();
    /* 0069f613: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069f61a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f61d: jne 0x69f62b */ if (!fZ) goto L_0069f62b;
L_0069f61f:; BB(0x0069f61f);
    /* 0069f61f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f624: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069f62b:; BB(0x0069f62b);
    /* 0069f62b: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069f631: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f633: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x69f636u); call_ind(t); }
    /* 0069f636: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f639: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f63e: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f643u); f_00694390();
    /* 0069f643: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f644: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f645: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069f646: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069f647: ret  */ FN_RET(0x0069f498); r_esp += 4; return;
}

void f_0069f4d3(void)
{
    FN_ENTER(0x0069f4d3);
    /* 0069f4d3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f4d5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f4d7: call 0x69bdf0 */ r_esp -= 4; W32(r_esp, 0x69f4dcu); f_0069bdf0();
    /* 0069f4dc: jmp 0x69f5ef */ goto L_0069f5ef;
L_0069f5ef:; BB(0x0069f5ef);
    /* 0069f5ef: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069f5f2: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069f5f8: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069f5fe: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069f604: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069f609: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069f60c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f60e: call 0x68c8e8 */ r_esp -= 4; W32(r_esp, 0x69f613u); f_0068c8e8();
    /* 0069f613: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069f61a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f61d: jne 0x69f62b */ if (!fZ) goto L_0069f62b;
L_0069f61f:; BB(0x0069f61f);
    /* 0069f61f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f624: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069f62b:; BB(0x0069f62b);
    /* 0069f62b: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069f631: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f633: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x69f636u); call_ind(t); }
    /* 0069f636: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f639: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f63e: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f643u); f_00694390();
    /* 0069f643: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f644: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f645: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069f646: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069f647: ret  */ FN_RET(0x0069f4d3); r_esp += 4; return;
}

void f_0069f4e1(void)
{
    FN_ENTER(0x0069f4e1);
    /* 0069f4e1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f4e3: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f4e5: call 0x69c6c0 */ r_esp -= 4; W32(r_esp, 0x69f4eau); f_0069c6c0();
    /* 0069f4ea: jmp 0x69f5ef */ goto L_0069f5ef;
L_0069f5ef:; BB(0x0069f5ef);
    /* 0069f5ef: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069f5f2: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069f5f8: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069f5fe: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069f604: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069f609: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069f60c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f60e: call 0x68c8e8 */ r_esp -= 4; W32(r_esp, 0x69f613u); f_0068c8e8();
    /* 0069f613: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069f61a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f61d: jne 0x69f62b */ if (!fZ) goto L_0069f62b;
L_0069f61f:; BB(0x0069f61f);
    /* 0069f61f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f624: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069f62b:; BB(0x0069f62b);
    /* 0069f62b: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069f631: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f633: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x69f636u); call_ind(t); }
    /* 0069f636: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f639: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f63e: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f643u); f_00694390();
    /* 0069f643: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f644: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f645: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069f646: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069f647: ret  */ FN_RET(0x0069f4e1); r_esp += 4; return;
}

void f_0069f4ef(void)
{
    FN_ENTER(0x0069f4ef);
    /* 0069f4ef: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f4f1: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f4f3: call 0x69c988 */ r_esp -= 4; W32(r_esp, 0x69f4f8u); f_0069c988();
    /* 0069f4f8: jmp 0x69f5ef */ goto L_0069f5ef;
L_0069f5ef:; BB(0x0069f5ef);
    /* 0069f5ef: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069f5f2: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069f5f8: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069f5fe: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069f604: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069f609: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069f60c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f60e: call 0x68c8e8 */ r_esp -= 4; W32(r_esp, 0x69f613u); f_0068c8e8();
    /* 0069f613: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069f61a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f61d: jne 0x69f62b */ if (!fZ) goto L_0069f62b;
L_0069f61f:; BB(0x0069f61f);
    /* 0069f61f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f624: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069f62b:; BB(0x0069f62b);
    /* 0069f62b: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069f631: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f633: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x69f636u); call_ind(t); }
    /* 0069f636: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f639: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f63e: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f643u); f_00694390();
    /* 0069f643: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f644: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f645: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069f646: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069f647: ret  */ FN_RET(0x0069f4ef); r_esp += 4; return;
}

void f_0069f4fd(void)
{
    FN_ENTER(0x0069f4fd);
    /* 0069f4fd: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f4ff: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f501: call 0x69cd20 */ r_esp -= 4; W32(r_esp, 0x69f506u); f_0069cd20();
    /* 0069f506: jmp 0x69f5ef */ goto L_0069f5ef;
L_0069f5ef:; BB(0x0069f5ef);
    /* 0069f5ef: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069f5f2: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069f5f8: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069f5fe: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069f604: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069f609: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069f60c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f60e: call 0x68c8e8 */ r_esp -= 4; W32(r_esp, 0x69f613u); f_0068c8e8();
    /* 0069f613: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069f61a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f61d: jne 0x69f62b */ if (!fZ) goto L_0069f62b;
L_0069f61f:; BB(0x0069f61f);
    /* 0069f61f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f624: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069f62b:; BB(0x0069f62b);
    /* 0069f62b: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069f631: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f633: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x69f636u); call_ind(t); }
    /* 0069f636: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f639: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f63e: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f643u); f_00694390();
    /* 0069f643: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f644: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f645: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069f646: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069f647: ret  */ FN_RET(0x0069f4fd); r_esp += 4; return;
}

void f_0069f50b(void)
{
    FN_ENTER(0x0069f50b);
    /* 0069f50b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f50d: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f50f: call 0x69d1e4 */ r_esp -= 4; W32(r_esp, 0x69f514u); f_0069d1e4();
    /* 0069f514: jmp 0x69f5ef */ goto L_0069f5ef;
L_0069f5ef:; BB(0x0069f5ef);
    /* 0069f5ef: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069f5f2: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069f5f8: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069f5fe: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069f604: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069f609: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069f60c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f60e: call 0x68c8e8 */ r_esp -= 4; W32(r_esp, 0x69f613u); f_0068c8e8();
    /* 0069f613: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069f61a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f61d: jne 0x69f62b */ if (!fZ) goto L_0069f62b;
L_0069f61f:; BB(0x0069f61f);
    /* 0069f61f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f624: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069f62b:; BB(0x0069f62b);
    /* 0069f62b: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069f631: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f633: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x69f636u); call_ind(t); }
    /* 0069f636: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f639: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f63e: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f643u); f_00694390();
    /* 0069f643: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f644: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f645: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069f646: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069f647: ret  */ FN_RET(0x0069f50b); r_esp += 4; return;
}

void f_0069f519(void)
{
    FN_ENTER(0x0069f519);
    /* 0069f519: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f51b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f51d: call 0x69d43c */ r_esp -= 4; W32(r_esp, 0x69f522u); f_0069d43c();
    /* 0069f522: jmp 0x69f5ef */ goto L_0069f5ef;
L_0069f5ef:; BB(0x0069f5ef);
    /* 0069f5ef: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069f5f2: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069f5f8: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069f5fe: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069f604: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069f609: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069f60c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f60e: call 0x68c8e8 */ r_esp -= 4; W32(r_esp, 0x69f613u); f_0068c8e8();
    /* 0069f613: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069f61a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f61d: jne 0x69f62b */ if (!fZ) goto L_0069f62b;
L_0069f61f:; BB(0x0069f61f);
    /* 0069f61f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f624: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069f62b:; BB(0x0069f62b);
    /* 0069f62b: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069f631: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f633: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x69f636u); call_ind(t); }
    /* 0069f636: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f639: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f63e: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f643u); f_00694390();
    /* 0069f643: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f644: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f645: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069f646: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069f647: ret  */ FN_RET(0x0069f519); r_esp += 4; return;
}

void f_0069f527(void)
{
    FN_ENTER(0x0069f527);
    /* 0069f527: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f529: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f52b: call 0x69d8f4 */ r_esp -= 4; W32(r_esp, 0x69f530u); f_0069d8f4();
    /* 0069f530: jmp 0x69f5ef */ goto L_0069f5ef;
L_0069f5ef:; BB(0x0069f5ef);
    /* 0069f5ef: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069f5f2: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069f5f8: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069f5fe: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069f604: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069f609: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069f60c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f60e: call 0x68c8e8 */ r_esp -= 4; W32(r_esp, 0x69f613u); f_0068c8e8();
    /* 0069f613: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069f61a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f61d: jne 0x69f62b */ if (!fZ) goto L_0069f62b;
L_0069f61f:; BB(0x0069f61f);
    /* 0069f61f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f624: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069f62b:; BB(0x0069f62b);
    /* 0069f62b: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069f631: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f633: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x69f636u); call_ind(t); }
    /* 0069f636: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f639: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f63e: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f643u); f_00694390();
    /* 0069f643: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f644: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f645: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069f646: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069f647: ret  */ FN_RET(0x0069f527); r_esp += 4; return;
}

void f_0069f535(void)
{
    FN_ENTER(0x0069f535);
    /* 0069f535: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f537: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f539: call 0x69dd60 */ r_esp -= 4; W32(r_esp, 0x69f53eu); f_0069dd60();
    /* 0069f53e: jmp 0x69f5ef */ goto L_0069f5ef;
L_0069f5ef:; BB(0x0069f5ef);
    /* 0069f5ef: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069f5f2: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069f5f8: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069f5fe: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069f604: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069f609: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069f60c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f60e: call 0x68c8e8 */ r_esp -= 4; W32(r_esp, 0x69f613u); f_0068c8e8();
    /* 0069f613: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069f61a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f61d: jne 0x69f62b */ if (!fZ) goto L_0069f62b;
L_0069f61f:; BB(0x0069f61f);
    /* 0069f61f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f624: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069f62b:; BB(0x0069f62b);
    /* 0069f62b: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069f631: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f633: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x69f636u); call_ind(t); }
    /* 0069f636: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f639: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f63e: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f643u); f_00694390();
    /* 0069f643: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f644: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f645: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069f646: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069f647: ret  */ FN_RET(0x0069f535); r_esp += 4; return;
}

void f_0069f543(void)
{
    FN_ENTER(0x0069f543);
    /* 0069f543: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f545: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f547: call 0x69e15c */ r_esp -= 4; W32(r_esp, 0x69f54cu); f_0069e15c();
    /* 0069f54c: jmp 0x69f5ef */ goto L_0069f5ef;
L_0069f5ef:; BB(0x0069f5ef);
    /* 0069f5ef: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069f5f2: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069f5f8: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069f5fe: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069f604: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069f609: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069f60c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f60e: call 0x68c8e8 */ r_esp -= 4; W32(r_esp, 0x69f613u); f_0068c8e8();
    /* 0069f613: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069f61a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f61d: jne 0x69f62b */ if (!fZ) goto L_0069f62b;
L_0069f61f:; BB(0x0069f61f);
    /* 0069f61f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f624: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069f62b:; BB(0x0069f62b);
    /* 0069f62b: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069f631: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f633: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x69f636u); call_ind(t); }
    /* 0069f636: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f639: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f63e: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f643u); f_00694390();
    /* 0069f643: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f644: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f645: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069f646: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069f647: ret  */ FN_RET(0x0069f543); r_esp += 4; return;
}

void f_0069f551(void)
{
    FN_ENTER(0x0069f551);
    /* 0069f551: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f553: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f555: call 0x69e718 */ r_esp -= 4; W32(r_esp, 0x69f55au); f_0069e718();
    /* 0069f55a: jmp 0x69f5ef */ goto L_0069f5ef;
L_0069f5ef:; BB(0x0069f5ef);
    /* 0069f5ef: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069f5f2: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069f5f8: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069f5fe: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069f604: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069f609: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069f60c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f60e: call 0x68c8e8 */ r_esp -= 4; W32(r_esp, 0x69f613u); f_0068c8e8();
    /* 0069f613: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069f61a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f61d: jne 0x69f62b */ if (!fZ) goto L_0069f62b;
L_0069f61f:; BB(0x0069f61f);
    /* 0069f61f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f624: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069f62b:; BB(0x0069f62b);
    /* 0069f62b: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069f631: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f633: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x69f636u); call_ind(t); }
    /* 0069f636: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f639: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f63e: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f643u); f_00694390();
    /* 0069f643: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f644: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f645: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069f646: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069f647: ret  */ FN_RET(0x0069f551); r_esp += 4; return;
}

void f_0069f55f(void)
{
    FN_ENTER(0x0069f55f);
    /* 0069f55f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f561: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f563: call 0x69ebc8 */ r_esp -= 4; W32(r_esp, 0x69f568u); f_0069ebc8();
    /* 0069f568: jmp 0x69f5ef */ goto L_0069f5ef;
L_0069f5ef:; BB(0x0069f5ef);
    /* 0069f5ef: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069f5f2: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069f5f8: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069f5fe: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069f604: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069f609: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069f60c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f60e: call 0x68c8e8 */ r_esp -= 4; W32(r_esp, 0x69f613u); f_0068c8e8();
    /* 0069f613: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069f61a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f61d: jne 0x69f62b */ if (!fZ) goto L_0069f62b;
L_0069f61f:; BB(0x0069f61f);
    /* 0069f61f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f624: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069f62b:; BB(0x0069f62b);
    /* 0069f62b: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069f631: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f633: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x69f636u); call_ind(t); }
    /* 0069f636: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f639: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f63e: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f643u); f_00694390();
    /* 0069f643: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f644: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f645: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069f646: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069f647: ret  */ FN_RET(0x0069f55f); r_esp += 4; return;
}

void f_0069f56d(void)
{
    FN_ENTER(0x0069f56d);
    /* 0069f56d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f56f: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f571: call 0x69ef04 */ r_esp -= 4; W32(r_esp, 0x69f576u); f_0069ef04();
    /* 0069f576: jmp 0x69f5ef */ goto L_0069f5ef;
L_0069f5ef:; BB(0x0069f5ef);
    /* 0069f5ef: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069f5f2: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069f5f8: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069f5fe: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069f604: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069f609: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069f60c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f60e: call 0x68c8e8 */ r_esp -= 4; W32(r_esp, 0x69f613u); f_0068c8e8();
    /* 0069f613: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069f61a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f61d: jne 0x69f62b */ if (!fZ) goto L_0069f62b;
L_0069f61f:; BB(0x0069f61f);
    /* 0069f61f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f624: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069f62b:; BB(0x0069f62b);
    /* 0069f62b: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069f631: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f633: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x69f636u); call_ind(t); }
    /* 0069f636: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f639: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f63e: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f643u); f_00694390();
    /* 0069f643: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f644: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f645: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069f646: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069f647: ret  */ FN_RET(0x0069f56d); r_esp += 4; return;
}

void f_0069f578(void)
{
    FN_ENTER(0x0069f578);
    /* 0069f578: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f57a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f57c: call 0x69f148 */ r_esp -= 4; W32(r_esp, 0x69f581u); f_0069f148();
    /* 0069f581: jmp 0x69f5ef */ goto L_0069f5ef;
L_0069f5ef:; BB(0x0069f5ef);
    /* 0069f5ef: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069f5f2: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069f5f8: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069f5fe: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069f604: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069f609: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069f60c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f60e: call 0x68c8e8 */ r_esp -= 4; W32(r_esp, 0x69f613u); f_0068c8e8();
    /* 0069f613: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069f61a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f61d: jne 0x69f62b */ if (!fZ) goto L_0069f62b;
L_0069f61f:; BB(0x0069f61f);
    /* 0069f61f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f624: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069f62b:; BB(0x0069f62b);
    /* 0069f62b: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069f631: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f633: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x69f636u); call_ind(t); }
    /* 0069f636: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f639: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f63e: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f643u); f_00694390();
    /* 0069f643: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f644: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f645: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069f646: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069f647: ret  */ FN_RET(0x0069f578); r_esp += 4; return;
}

void f_0069f583(void)
{
    FN_ENTER(0x0069f583);
    /* 0069f583: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f585: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f587: call 0x69f384 */ r_esp -= 4; W32(r_esp, 0x69f58cu); f_0069f384();
    /* 0069f58c: jmp 0x69f5ef */ goto L_0069f5ef;
L_0069f5ef:; BB(0x0069f5ef);
    /* 0069f5ef: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069f5f2: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069f5f8: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069f5fe: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069f604: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069f609: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069f60c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f60e: call 0x68c8e8 */ r_esp -= 4; W32(r_esp, 0x69f613u); f_0068c8e8();
    /* 0069f613: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069f61a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f61d: jne 0x69f62b */ if (!fZ) goto L_0069f62b;
L_0069f61f:; BB(0x0069f61f);
    /* 0069f61f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f624: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069f62b:; BB(0x0069f62b);
    /* 0069f62b: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069f631: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f633: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x69f636u); call_ind(t); }
    /* 0069f636: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f639: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f63e: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f643u); f_00694390();
    /* 0069f643: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f644: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f645: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069f646: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069f647: ret  */ FN_RET(0x0069f583); r_esp += 4; return;
}

void f_0069f58e(void)
{
    FN_ENTER(0x0069f58e);
    /* 0069f58e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f590: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f592: call 0x69f648 */ r_esp -= 4; W32(r_esp, 0x69f597u); f_0069f648();
    /* 0069f597: jmp 0x69f5ef */ goto L_0069f5ef;
L_0069f5ef:; BB(0x0069f5ef);
    /* 0069f5ef: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069f5f2: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069f5f8: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069f5fe: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069f604: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069f609: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069f60c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f60e: call 0x68c8e8 */ r_esp -= 4; W32(r_esp, 0x69f613u); f_0068c8e8();
    /* 0069f613: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069f61a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f61d: jne 0x69f62b */ if (!fZ) goto L_0069f62b;
L_0069f61f:; BB(0x0069f61f);
    /* 0069f61f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f624: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069f62b:; BB(0x0069f62b);
    /* 0069f62b: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069f631: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f633: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x69f636u); call_ind(t); }
    /* 0069f636: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f639: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f63e: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f643u); f_00694390();
    /* 0069f643: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f644: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f645: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069f646: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069f647: ret  */ FN_RET(0x0069f58e); r_esp += 4; return;
}

void f_0069f599(void)
{
    FN_ENTER(0x0069f599);
    /* 0069f599: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f59b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f59d: call 0x69fe2c */ r_esp -= 4; W32(r_esp, 0x69f5a2u); f_0069fe2c();
    /* 0069f5a2: jmp 0x69f5ef */ goto L_0069f5ef;
L_0069f5ef:; BB(0x0069f5ef);
    /* 0069f5ef: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069f5f2: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069f5f8: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069f5fe: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069f604: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069f609: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069f60c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f60e: call 0x68c8e8 */ r_esp -= 4; W32(r_esp, 0x69f613u); f_0068c8e8();
    /* 0069f613: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069f61a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f61d: jne 0x69f62b */ if (!fZ) goto L_0069f62b;
L_0069f61f:; BB(0x0069f61f);
    /* 0069f61f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f624: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069f62b:; BB(0x0069f62b);
    /* 0069f62b: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069f631: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f633: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x69f636u); call_ind(t); }
    /* 0069f636: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f639: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f63e: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f643u); f_00694390();
    /* 0069f643: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f644: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f645: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069f646: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069f647: ret  */ FN_RET(0x0069f599); r_esp += 4; return;
}

void f_0069f5a4(void)
{
    FN_ENTER(0x0069f5a4);
    /* 0069f5a4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f5a6: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f5a8: call 0x6a0624 */ r_esp -= 4; W32(r_esp, 0x69f5adu); f_006a0624();
    /* 0069f5ad: jmp 0x69f5ef */ goto L_0069f5ef;
L_0069f5ef:; BB(0x0069f5ef);
    /* 0069f5ef: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069f5f2: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069f5f8: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069f5fe: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069f604: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069f609: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069f60c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f60e: call 0x68c8e8 */ r_esp -= 4; W32(r_esp, 0x69f613u); f_0068c8e8();
    /* 0069f613: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069f61a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f61d: jne 0x69f62b */ if (!fZ) goto L_0069f62b;
L_0069f61f:; BB(0x0069f61f);
    /* 0069f61f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f624: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069f62b:; BB(0x0069f62b);
    /* 0069f62b: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069f631: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f633: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x69f636u); call_ind(t); }
    /* 0069f636: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f639: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f63e: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f643u); f_00694390();
    /* 0069f643: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f644: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f645: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069f646: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069f647: ret  */ FN_RET(0x0069f5a4); r_esp += 4; return;
}

void f_0069f5af(void)
{
    FN_ENTER(0x0069f5af);
    /* 0069f5af: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f5b1: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f5b3: call 0x6a0994 */ r_esp -= 4; W32(r_esp, 0x69f5b8u); f_006a0994();
    /* 0069f5b8: jmp 0x69f5ef */ goto L_0069f5ef;
L_0069f5ef:; BB(0x0069f5ef);
    /* 0069f5ef: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069f5f2: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069f5f8: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069f5fe: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069f604: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069f609: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069f60c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f60e: call 0x68c8e8 */ r_esp -= 4; W32(r_esp, 0x69f613u); f_0068c8e8();
    /* 0069f613: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069f61a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f61d: jne 0x69f62b */ if (!fZ) goto L_0069f62b;
L_0069f61f:; BB(0x0069f61f);
    /* 0069f61f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f624: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069f62b:; BB(0x0069f62b);
    /* 0069f62b: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069f631: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f633: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x69f636u); call_ind(t); }
    /* 0069f636: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f639: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f63e: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f643u); f_00694390();
    /* 0069f643: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f644: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f645: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069f646: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069f647: ret  */ FN_RET(0x0069f5af); r_esp += 4; return;
}

void f_0069f5ba(void)
{
    FN_ENTER(0x0069f5ba);
    /* 0069f5ba: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f5bc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f5be: call 0x6a0eb8 */ r_esp -= 4; W32(r_esp, 0x69f5c3u); f_006a0eb8();
    /* 0069f5c3: jmp 0x69f5ef */ goto L_0069f5ef;
L_0069f5ef:; BB(0x0069f5ef);
    /* 0069f5ef: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069f5f2: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069f5f8: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069f5fe: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069f604: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069f609: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069f60c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f60e: call 0x68c8e8 */ r_esp -= 4; W32(r_esp, 0x69f613u); f_0068c8e8();
    /* 0069f613: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069f61a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f61d: jne 0x69f62b */ if (!fZ) goto L_0069f62b;
L_0069f61f:; BB(0x0069f61f);
    /* 0069f61f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f624: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069f62b:; BB(0x0069f62b);
    /* 0069f62b: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069f631: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f633: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x69f636u); call_ind(t); }
    /* 0069f636: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f639: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f63e: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f643u); f_00694390();
    /* 0069f643: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f644: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f645: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069f646: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069f647: ret  */ FN_RET(0x0069f5ba); r_esp += 4; return;
}

void f_0069f5c5(void)
{
    FN_ENTER(0x0069f5c5);
    /* 0069f5c5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f5c7: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f5c9: call 0x6a139c */ r_esp -= 4; W32(r_esp, 0x69f5ceu); f_006a139c();
    /* 0069f5ce: jmp 0x69f5ef */ goto L_0069f5ef;
L_0069f5ef:; BB(0x0069f5ef);
    /* 0069f5ef: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069f5f2: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069f5f8: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069f5fe: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069f604: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069f609: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069f60c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f60e: call 0x68c8e8 */ r_esp -= 4; W32(r_esp, 0x69f613u); f_0068c8e8();
    /* 0069f613: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069f61a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f61d: jne 0x69f62b */ if (!fZ) goto L_0069f62b;
L_0069f61f:; BB(0x0069f61f);
    /* 0069f61f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f624: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069f62b:; BB(0x0069f62b);
    /* 0069f62b: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069f631: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f633: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x69f636u); call_ind(t); }
    /* 0069f636: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f639: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f63e: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f643u); f_00694390();
    /* 0069f643: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f644: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f645: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069f646: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069f647: ret  */ FN_RET(0x0069f5c5); r_esp += 4; return;
}

void f_0069f5d0(void)
{
    FN_ENTER(0x0069f5d0);
    /* 0069f5d0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f5d2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f5d4: call 0x6a1a60 */ r_esp -= 4; W32(r_esp, 0x69f5d9u); f_006a1a60();
    /* 0069f5d9: jmp 0x69f5ef */ goto L_0069f5ef;
L_0069f5ef:; BB(0x0069f5ef);
    /* 0069f5ef: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069f5f2: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069f5f8: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069f5fe: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069f604: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069f609: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069f60c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f60e: call 0x68c8e8 */ r_esp -= 4; W32(r_esp, 0x69f613u); f_0068c8e8();
    /* 0069f613: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069f61a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f61d: jne 0x69f62b */ if (!fZ) goto L_0069f62b;
L_0069f61f:; BB(0x0069f61f);
    /* 0069f61f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f624: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069f62b:; BB(0x0069f62b);
    /* 0069f62b: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069f631: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f633: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x69f636u); call_ind(t); }
    /* 0069f636: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f639: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f63e: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f643u); f_00694390();
    /* 0069f643: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f644: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f645: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069f646: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069f647: ret  */ FN_RET(0x0069f5d0); r_esp += 4; return;
}

void f_0069f5db(void)
{
    FN_ENTER(0x0069f5db);
    /* 0069f5db: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f5dd: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f5df: call 0x69b93c */ r_esp -= 4; W32(r_esp, 0x69f5e4u); f_0069b93c();
    /* 0069f5e4: jmp 0x69f5ef */ goto L_0069f5ef;
L_0069f5ef:; BB(0x0069f5ef);
    /* 0069f5ef: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069f5f2: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069f5f8: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069f5fe: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069f604: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069f609: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069f60c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f60e: call 0x68c8e8 */ r_esp -= 4; W32(r_esp, 0x69f613u); f_0068c8e8();
    /* 0069f613: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069f61a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f61d: jne 0x69f62b */ if (!fZ) goto L_0069f62b;
L_0069f61f:; BB(0x0069f61f);
    /* 0069f61f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f624: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069f62b:; BB(0x0069f62b);
    /* 0069f62b: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069f631: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f633: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x69f636u); call_ind(t); }
    /* 0069f636: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f639: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f63e: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f643u); f_00694390();
    /* 0069f643: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f644: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f645: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069f646: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069f647: ret  */ FN_RET(0x0069f5db); r_esp += 4; return;
}

void f_0069f5e6(void)
{
    FN_ENTER(0x0069f5e6);
    /* 0069f5e6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f5e8: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f5ea: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x69f5efu); f_006a1ac0();
    /* 0069f5ef: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069f5f2: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069f5f8: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069f5fe: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069f604: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069f609: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069f60c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f60e: call 0x68c8e8 */ r_esp -= 4; W32(r_esp, 0x69f613u); f_0068c8e8();
    /* 0069f613: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069f61a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f61d: jne 0x69f62b */ if (!fZ) goto L_0069f62b;
L_0069f61f:; BB(0x0069f61f);
    /* 0069f61f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f624: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069f62b:; BB(0x0069f62b);
    /* 0069f62b: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069f631: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f633: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x69f636u); call_ind(t); }
    /* 0069f636: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f639: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f63e: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f643u); f_00694390();
    /* 0069f643: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f644: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f645: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069f646: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069f647: ret  */ FN_RET(0x0069f5e6); r_esp += 4; return;
}

void f_0069f5ef(void)
{
    FN_ENTER(0x0069f5ef);
    /* 0069f5ef: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069f5f2: mov dword ptr [edi + 0x30c], esi */ W32((u32)(r_edi+0x30cu), r_esi);
    /* 0069f5f8: mov dword ptr [edi + 0x310], ebp */ W32((u32)(r_edi+0x310u), r_ebp);
    /* 0069f5fe: mov dword ptr [edi + 0x314], ebx */ W32((u32)(r_edi+0x314u), r_ebx);
    /* 0069f604: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069f609: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069f60c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f60e: call 0x68c8e8 */ r_esp -= 4; W32(r_esp, 0x69f613u); f_0068c8e8();
    /* 0069f613: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069f61a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f61d: jne 0x69f62b */ if (!fZ) goto L_0069f62b;
L_0069f61f:; BB(0x0069f61f);
    /* 0069f61f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0069f624: mov word ptr [edi + 0xba], ax */ W16((u32)(r_edi+0xbau), (u16)r_eax);
L_0069f62b:; BB(0x0069f62b);
    /* 0069f62b: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069f631: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069f633: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x69f636u); call_ind(t); }
    /* 0069f636: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f639: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0069f63c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069f63e: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69f643u); f_00694390();
    /* 0069f643: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069f644: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f645: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069f646: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069f647: ret  */ FN_RET(0x0069f5ef); r_esp += 4; return;
}

void f_0069f648(void) /* sub_69F648 */
{
    FN_ENTER(0x0069f648);
    /* 0069f648: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069f649: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069f64a: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069f64d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0069f64f: movsx eax, word ptr [esp + 0x5c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x5cu));
    /* 0069f654: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0069f657: ja 0x69f898 */ if ((!fC&&!fZ)) goto L_0069f898;
L_0069f65d:; BB(0x0069f65d);
    /* 0069f65d: mov eax, dword ptr [eax*4 + 0x93d424] */ r_eax = R32((u32)(r_eax*4+0x93d424u));
    /* 0069f664: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0069f898:; BB(0x0069f898);
    /* 0069f898: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069f89b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f89c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069f89d: ret 4 */ FN_RET(0x0069f648); r_esp += 8; return;
}

void f_0069f666(void)
{
    FN_ENTER(0x0069f666);
    /* 0069f666: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069f668: call 0x69f8a0 */ r_esp -= 4; W32(r_esp, 0x69f66du); f_0069f8a0();
    /* 0069f66d: jmp 0x69f898 */ goto L_0069f898;
L_0069f898:; BB(0x0069f898);
    /* 0069f898: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069f89b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f89c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069f89d: ret 4 */ FN_RET(0x0069f666); r_esp += 8; return;
}

void f_0069f672(void)
{
    FN_ENTER(0x0069f672);
    /* 0069f672: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069f674: call 0x69b720 */ r_esp -= 4; W32(r_esp, 0x69f679u); f_0069b720();
    /* 0069f679: jmp 0x69f898 */ goto L_0069f898;
L_0069f898:; BB(0x0069f898);
    /* 0069f898: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069f89b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f89c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069f89d: ret 4 */ FN_RET(0x0069f672); r_esp += 8; return;
}

void f_0069f67e(void)
{
    FN_ENTER(0x0069f67e);
    /* 0069f67e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069f680: call 0x6a2a0c */ r_esp -= 4; W32(r_esp, 0x69f685u); f_006a2a0c();
    /* 0069f685: jmp 0x69f898 */ goto L_0069f898;
L_0069f898:; BB(0x0069f898);
    /* 0069f898: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069f89b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f89c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069f89d: ret 4 */ FN_RET(0x0069f67e); r_esp += 8; return;
}

void f_0069f68a(void)
{
    FN_ENTER(0x0069f68a);
    /* 0069f68a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069f68c: call 0x68a3fc */ r_esp -= 4; W32(r_esp, 0x69f691u); f_0068a3fc();
    /* 0069f691: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f693: je 0x69f898 */ if (fZ) goto L_0069f898;
L_0069f699:; BB(0x0069f699);
    /* 0069f699: mov dword ptr [ebp + 0x720], 0x708 */ W32((u32)(r_ebp+0x720u), 0x708u);
    /* 0069f6a3: lea esi, [ebp + 0x4e4] */ r_esi = (u32)(r_ebp+0x4e4u);
    /* 0069f6a9: mov ecx, esi */ r_ecx = r_esi;
    /* 0069f6ab: call 0x6a8248 */ r_esp -= 4; W32(r_esp, 0x69f6b0u); f_006a8248();
    /* 0069f6b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069f6b1: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f6b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f6b5: call 0x6e1a48 */ r_esp -= 4; W32(r_esp, 0x69f6bau); f_006e1a48();
    /* 0069f6ba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069f6bd: mov ecx, dword ptr [ebp + 0x45c] */ r_ecx = R32((u32)(r_ebp+0x45cu));
    /* 0069f6c3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f6c5: je 0x69f6dc */ if (fZ) goto L_0069f6dc;
L_0069f6c7:; BB(0x0069f6c7);
    /* 0069f6c7: movzx edx, word ptr [ebp + 0x4f8] */ r_edx = (u32)R16((u32)(r_ebp+0x4f8u));
    /* 0069f6ce: movsx eax, word ptr [ebp + 0x4fa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x4fau));
    /* 0069f6d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069f6d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069f6d7: call 0x7a4118 */ r_esp -= 4; W32(r_esp, 0x69f6dcu); f_007a4118();
L_0069f6dc:; BB(0x0069f6dc);
    /* 0069f6dc: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f6de: je 0x69f6fd */ if (fZ) goto L_0069f6fd;
L_0069f6e0:; BB(0x0069f6e0);
    /* 0069f6e0: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0069f6e7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f6ea: jne 0x69f6f3 */ if (!fZ) goto L_0069f6f3;
L_0069f6ec:; BB(0x0069f6ec);
    /* 0069f6ec: mov eax, 1 */ r_eax = 0x1u;
    /* 0069f6f1: jmp 0x69f6f5 */ goto L_0069f6f5;
L_0069f6f3:; BB(0x0069f6f3);
    /* 0069f6f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0069f6f5:; BB(0x0069f6f5);
    /* 0069f6f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f6f7: jne 0x69f898 */ if (!fZ) goto L_0069f898;
L_0069f6fd:; BB(0x0069f6fd);
    /* 0069f6fd: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0069f701: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069f703: mov byte ptr [esp + 4], al */ W8((u32)(r_esp+0x4u), (u8)r_eax);
    /* 0069f707: mov byte ptr [esp + 5], al */ W8((u32)(r_esp+0x5u), (u8)r_eax);
    /* 0069f70b: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 0069f710: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 0069f715: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 0069f71a: mov eax, 0xa */ r_eax = 0xau;
L_0069f71f:; BB(0x0069f71f);
    /* 0069f71f: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 0069f724: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
    /* 0069f727: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0069f729: mov word ptr [edx + 2], cx */ W16((u32)(r_edx+0x2u), (u16)r_ecx);
    /* 0069f72d: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069f730: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0069f733: jne 0x69f71f */ if (!fZ) goto L_0069f71f;
L_0069f735:; BB(0x0069f735);
    /* 0069f735: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0069f739: mov byte ptr [esp], 0x49 */ W8((u32)(r_esp), 0x49u);
    /* 0069f73d: mov ecx, esi */ r_ecx = r_esi;
    /* 0069f73f: mov byte ptr [esp + 1], 0xd */ W8((u32)(r_esp+0x1u), 0xdu);
    /* 0069f744: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0069f749: call 0x6a8248 */ r_esp -= 4; W32(r_esp, 0x69f74eu); f_006a8248();
    /* 0069f74e: mov byte ptr [esp + 4], al */ W8((u32)(r_esp+0x4u), (u8)r_eax);
    /* 0069f752: mov ecx, esi */ r_ecx = r_esi;
    /* 0069f754: call 0x6a8284 */ r_esp -= 4; W32(r_esp, 0x69f759u); f_006a8284();
    /* 0069f759: lea esi, [esp + 0xc] */ r_esi = (u32)(r_esp+0xcu);
    /* 0069f75d: fld dword ptr [ebp + 0x520] */ FPUSH(R_F32((u32)(r_ebp+0x520u)));
    /* 0069f763: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0069f766: fnstcw word ptr [esp + 0x34] */ W16((u32)(r_esp+0x34u), fcw);
    /* 0069f76a: movzx eax, word ptr [esp + 0x34] */ r_eax = (u32)R16((u32)(r_esp+0x34u));
    /* 0069f76f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069f774: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0069f778: fldcw word ptr [esp + 0x3c] */ fcw = R16((u32)(r_esp+0x3cu));
    /* 0069f77c: fistp dword ptr [esp + 0x44] */ W32((u32)(r_esp+0x44u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069f780: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 0069f784: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0069f788: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 0069f78d: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 0069f792: add ebp, 0x4f8 */ {  u32 a = r_ebp; u32 b = 0x4f8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0069f798: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0069f79a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069f79c: jle 0x69f816 */ if ((fZ||fS!=fO)) goto L_0069f816;
L_0069f79e:; BB(0x0069f79e);
    /* 0069f79e: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069f7a1: jl 0x69f7fa */ if ((fS!=fO)) goto L_0069f7fa;
L_0069f7a3:; BB(0x0069f7a3);
    /* 0069f7a3: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 0069f7a7: lea eax, [edx - 5] */ r_eax = (u32)(r_edx+0xfffffffbu);
L_0069f7aa:; BB(0x0069f7aa);
    /* 0069f7aa: movzx edi, word ptr [ebp] */ r_edi = (u32)R16((u32)(r_ebp));
    /* 0069f7ae: mov word ptr [esi], di */ W16((u32)(r_esi), (u16)r_edi);
    /* 0069f7b1: movzx edi, word ptr [ebp + 2] */ r_edi = (u32)R16((u32)(r_ebp+0x2u));
    /* 0069f7b5: mov word ptr [esi + 2], di */ W16((u32)(r_esi+0x2u), (u16)r_edi);
    /* 0069f7b9: movzx edi, word ptr [ebp + 4] */ r_edi = (u32)R16((u32)(r_ebp+0x4u));
    /* 0069f7bd: mov word ptr [esi + 4], di */ W16((u32)(r_esi+0x4u), (u16)r_edi);
    /* 0069f7c1: movzx edi, word ptr [ebp + 6] */ r_edi = (u32)R16((u32)(r_ebp+0x6u));
    /* 0069f7c5: mov word ptr [esi + 6], di */ W16((u32)(r_esi+0x6u), (u16)r_edi);
    /* 0069f7c9: movzx edi, word ptr [ebp + 8] */ r_edi = (u32)R16((u32)(r_ebp+0x8u));
    /* 0069f7cd: mov word ptr [esi + 8], di */ W16((u32)(r_esi+0x8u), (u16)r_edi);
    /* 0069f7d1: movzx edi, word ptr [ebp + 0xa] */ r_edi = (u32)R16((u32)(r_ebp+0xau));
    /* 0069f7d5: mov word ptr [esi + 0xa], di */ W16((u32)(r_esi+0xau), (u16)r_edi);
    /* 0069f7d9: movzx edi, word ptr [ebp + 0xc] */ r_edi = (u32)R16((u32)(r_ebp+0xcu));
    /* 0069f7dd: mov word ptr [esi + 0xc], di */ W16((u32)(r_esi+0xcu), (u16)r_edi);
    /* 0069f7e1: movzx edi, word ptr [ebp + 0xe] */ r_edi = (u32)R16((u32)(r_ebp+0xeu));
    /* 0069f7e5: mov word ptr [esi + 0xe], di */ W16((u32)(r_esi+0xeu), (u16)r_edi);
    /* 0069f7e9: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069f7ec: add ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0069f7ef: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069f7f2: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069f7f4: jle 0x69f7aa */ if ((fZ||fS!=fO)) goto L_0069f7aa;
L_0069f7f6:; BB(0x0069f7f6);
    /* 0069f7f6: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
L_0069f7fa:; BB(0x0069f7fa);
    /* 0069f7fa: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 0069f7fe: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 0069f801: movzx eax, word ptr [ebp + 2] */ r_eax = (u32)R16((u32)(r_ebp+0x2u));
    /* 0069f805: mov word ptr [esi + 2], ax */ W16((u32)(r_esi+0x2u), (u16)r_eax);
    /* 0069f809: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069f80c: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0069f80f: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069f812: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069f814: jl 0x69f7fa */ if ((fS!=fO)) goto L_0069f7fa;
L_0069f816:; BB(0x0069f816);
    /* 0069f816: movsx ebp, word ptr [esp + 6] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esp+0x6u));
    /* 0069f81b: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069f81e: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0069f820: lea eax, [ebp + ebp + 0x14] */ r_eax = (u32)(r_ebp+r_ebp+0x14u);
    /* 0069f824: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069f826: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069f828: add eax, 0x34 */ {  u32 a = r_eax; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069f82b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0069f82e: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0069f831: mov byte ptr [esp + 1], al */ W8((u32)(r_esp+0x1u), (u8)r_eax);
    /* 0069f835: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x69f83au); f_008003e0();
    /* 0069f83a: jmp 0x69f898 */ goto L_0069f898;
L_0069f898:; BB(0x0069f898);
    /* 0069f898: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069f89b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f89c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069f89d: ret 4 */ FN_RET(0x0069f68a); r_esp += 8; return;
}

void f_0069f83c(void)
{
    FN_ENTER(0x0069f83c);
    /* 0069f83c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069f83e: call 0x69f8e0 */ r_esp -= 4; W32(r_esp, 0x69f843u); f_0069f8e0();
    /* 0069f843: jmp 0x69f898 */ goto L_0069f898;
L_0069f898:; BB(0x0069f898);
    /* 0069f898: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069f89b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f89c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069f89d: ret 4 */ FN_RET(0x0069f83c); r_esp += 8; return;
}

void f_0069f845(void)
{
    FN_ENTER(0x0069f845);
    /* 0069f845: mov edx, dword ptr [ebp + 0x634] */ r_edx = R32((u32)(r_ebp+0x634u));
    /* 0069f84b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069f84d: mov word ptr [0xa9432c], ax */ W16((u32)(0xa9432cu), (u16)r_eax);
    /* 0069f853: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f855: mov word ptr [0xa94330], ax */ W16((u32)(0xa94330u), (u16)r_eax);
    /* 0069f85b: je 0x69f898 */ if (fZ) goto L_0069f898;
L_0069f85d:; BB(0x0069f85d);
    /* 0069f85d: mov eax, dword ptr [ebp + 0x33c] */ r_eax = R32((u32)(r_ebp+0x33cu));
    /* 0069f863: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069f865: je 0x69f86e */ if (fZ) goto L_0069f86e;
L_0069f867:; BB(0x0069f867);
    /* 0069f867: mov eax, 1 */ r_eax = 0x1u;
    /* 0069f86c: jmp 0x69f870 */ goto L_0069f870;
L_0069f86e:; BB(0x0069f86e);
    /* 0069f86e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0069f870:; BB(0x0069f870);
    /* 0069f870: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f872: jne 0x69f898 */ if (!fZ) goto L_0069f898;
L_0069f874:; BB(0x0069f874);
    /* 0069f874: push 0xa9432c */ { u32 v = 0xa9432cu; r_esp -= 4; W32(r_esp, v); }
    /* 0069f879: push 0xa94330 */ { u32 v = 0xa94330u; r_esp -= 4; W32(r_esp, v); }
    /* 0069f87e: call 0x70a60c */ r_esp -= 4; W32(r_esp, 0x69f883u); f_0070a60c();
    /* 0069f883: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069f886: jmp 0x69f898 */ goto L_0069f898;
L_0069f898:; BB(0x0069f898);
    /* 0069f898: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069f89b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f89c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069f89d: ret 4 */ FN_RET(0x0069f845); r_esp += 8; return;
}

void f_0069f888(void)
{
    FN_ENTER(0x0069f888);
    /* 0069f888: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069f88a: call 0x69f9a8 */ r_esp -= 4; W32(r_esp, 0x69f88fu); f_0069f9a8();
    /* 0069f88f: jmp 0x69f898 */ goto L_0069f898;
L_0069f898:; BB(0x0069f898);
    /* 0069f898: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069f89b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f89c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069f89d: ret 4 */ FN_RET(0x0069f888); r_esp += 8; return;
}

void f_0069f891(void)
{
    FN_ENTER(0x0069f891);
    /* 0069f891: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069f893: call 0x69fbc4 */ r_esp -= 4; W32(r_esp, 0x69f898u); f_0069fbc4();
    /* 0069f898: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069f89b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f89c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069f89d: ret 4 */ FN_RET(0x0069f891); r_esp += 8; return;
}

void f_0069f898(void)
{
    FN_ENTER(0x0069f898);
    /* 0069f898: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069f89b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f89c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069f89d: ret 4 */ FN_RET(0x0069f898); r_esp += 8; return;
}

void f_0069f8a0(void) /* sub_69F8A0 */
{
    FN_ENTER(0x0069f8a0);
    /* 0069f8a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069f8a1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0069f8a3: movsx eax, word ptr [ebp + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x330u));
    /* 0069f8aa: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069f8ad: je 0x69f8b1 */ if (fZ) goto L_0069f8b1;
L_0069f8af:; BB(0x0069f8af);
    /* 0069f8af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f8b0: ret  */ FN_RET(0x0069f8a0); r_esp += 4; return;
L_0069f8b1:; BB(0x0069f8b1);
    /* 0069f8b1: push dword ptr [ebp + 0x4f4] */ { u32 v = R32((u32)(r_ebp+0x4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069f8b7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069f8b9: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x69f8beu); f_007aaa30();
    /* 0069f8be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069f8c0: je 0x69f8af */ if (fZ) goto L_0069f8af;
L_0069f8c2:; BB(0x0069f8c2);
    /* 0069f8c2: mov edx, dword ptr [ebp + 0xb0] */ r_edx = R32((u32)(r_ebp+0xb0u));
    /* 0069f8c8: mov eax, 3 */ r_eax = 0x3u;
    /* 0069f8cd: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 0069f8d4: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069f8d7: mov dword ptr [ebp + 0xb0], edx */ W32((u32)(r_ebp+0xb0u), r_edx);
    /* 0069f8dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f8de: ret  */ FN_RET(0x0069f8a0); r_esp += 4; return;
}

void f_0069f8e0(void) /* sub_69F8E0 */
{
    FN_ENTER(0x0069f8e0);
    /* 0069f8e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069f8e1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0069f8e3: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0069f8e9: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069f8eb: jne 0x69f8fb */ if (!fZ) goto L_0069f8fb;
L_0069f8ed:; BB(0x0069f8ed);
    /* 0069f8ed: movsx eax, word ptr [ebp + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x330u));
    /* 0069f8f4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069f8f7: je 0x69f904 */ if (fZ) goto L_0069f904;
L_0069f8f9:; BB(0x0069f8f9);
    /* 0069f8f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f8fa: ret  */ FN_RET(0x0069f8e0); r_esp += 4; return;
L_0069f8fb:; BB(0x0069f8fb);
    /* 0069f8fb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069f8fd: call 0x69d554 */ r_esp -= 4; W32(r_esp, 0x69f902u); f_0069d554();
    /* 0069f902: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f903: ret  */ FN_RET(0x0069f8e0); r_esp += 4; return;
L_0069f904:; BB(0x0069f904);
    /* 0069f904: push dword ptr [ebp + 0x4f4] */ { u32 v = R32((u32)(r_ebp+0x4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069f90a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069f90c: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x69f911u); f_007aaa30();
    /* 0069f911: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069f913: je 0x69f8f9 */ if (fZ) goto L_0069f8f9;
L_0069f915:; BB(0x0069f915);
    /* 0069f915: mov edx, dword ptr [ebp + 0xb0] */ r_edx = R32((u32)(r_ebp+0xb0u));
    /* 0069f91b: mov eax, 3 */ r_eax = 0x3u;
    /* 0069f920: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 0069f927: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069f92a: mov dword ptr [ebp + 0xb0], edx */ W32((u32)(r_ebp+0xb0u), r_edx);
    /* 0069f930: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069f932: call 0x69f93c */ r_esp -= 4; W32(r_esp, 0x69f937u); f_0069f93c();
    /* 0069f937: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069f938: ret  */ FN_RET(0x0069f8e0); r_esp += 4; return;
}

void f_0069f93c(void) /* sub_69F93C */
{
    FN_ENTER(0x0069f93c);
    /* 0069f93c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069f93f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f941: je 0x69f953 */ if (fZ) goto L_0069f953;
L_0069f943:; BB(0x0069f943);
    /* 0069f943: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 0069f94a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f94d: jne 0x69f953 */ if (!fZ) goto L_0069f953;
L_0069f94f:; BB(0x0069f94f);
    /* 0069f94f: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069f952: ret  */ FN_RET(0x0069f93c); r_esp += 4; return;
L_0069f953:; BB(0x0069f953);
    /* 0069f953: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0069f957: fld dword ptr [ecx + 0x520] */ FPUSH(R_F32((u32)(r_ecx+0x520u)));
    /* 0069f95d: mov byte ptr [esp], 0x37 */ W8((u32)(r_esp), 0x37u);
    /* 0069f961: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069f963: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 0069f968: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 0069f96d: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0069f972: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0069f976: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0069f97b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069f980: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0069f984: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0069f988: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069f98c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0069f990: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0069f994: mov word ptr [esp + 4], cx */ W16((u32)(r_esp+0x4u), (u16)r_ecx);
    /* 0069f999: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069f99c: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x69f9a1u); f_008003e0();
    /* 0069f9a1: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069f9a4: ret  */ FN_RET(0x0069f93c); r_esp += 4; return;
}

void f_0069f9a8(void) /* sub_69F9A8 */
{
    FN_ENTER(0x0069f9a8);
    /* 0069f9a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069f9a9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0069f9ab: push dword ptr [ebx + 0x3fc] */ { u32 v = R32((u32)(r_ebx+0x3fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0069f9b1: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069f9b4: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x69f9b9u); f_007a8cb8();
    /* 0069f9b9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069f9bc: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 0069f9bf: movsx eax, word ptr [ebx + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x330u));
    /* 0069f9c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f9c8: je 0x69fb05 */ if (fZ) goto L_0069fb05;
L_0069f9ce:; BB(0x0069f9ce);
    /* 0069f9ce: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f9d1: je 0x69fa4b */ if (fZ) goto L_0069fa4b;
L_0069f9d3:; BB(0x0069f9d3);
    /* 0069f9d3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f9d6: je 0x69fa37 */ if (fZ) goto L_0069fa37;
L_0069f9d8:; BB(0x0069f9d8);
    /* 0069f9d8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f9db: jne 0x69fa37 */ if (!fZ) goto L_0069fa37;
L_0069f9dd:; BB(0x0069f9dd);
    /* 0069f9dd: mov eax, dword ptr [ebx + 0x524] */ r_eax = R32((u32)(r_ebx+0x524u));
    /* 0069f9e3: lea ecx, [ebx + 0x4e4] */ r_ecx = (u32)(r_ebx+0x4e4u);
    /* 0069f9e9: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069f9eb: je 0x69f9f4 */ if (fZ) goto L_0069f9f4;
L_0069f9ed:; BB(0x0069f9ed);
    /* 0069f9ed: mov eax, 1 */ r_eax = 0x1u;
    /* 0069f9f2: jmp 0x69f9f6 */ goto L_0069f9f6;
L_0069f9f4:; BB(0x0069f9f4);
    /* 0069f9f4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0069f9f6:; BB(0x0069f9f6);
    /* 0069f9f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069f9f8: je 0x69fa37 */ if (fZ) goto L_0069fa37;
L_0069f9fa:; BB(0x0069f9fa);
    /* 0069f9fa: mov edx, dword ptr [ebx + 0x33c] */ r_edx = R32((u32)(r_ebx+0x33cu));
    /* 0069fa00: mov eax, 4 */ r_eax = 0x4u;
    /* 0069fa05: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069fa0c: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 0069fa12: and edx, 0xffffff7f */ {  u32 a = r_edx; u32 b = 0xffffff7fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0069fa18: mov dword ptr [ebx + 0x33c], edx */ W32((u32)(r_ebx+0x33cu), r_edx);
    /* 0069fa1e: and eax, 0xffffffbf */ {  u32 a = r_eax; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069fa21: mov dword ptr [ebx + 0xb0], eax */ W32((u32)(r_ebx+0xb0u), r_eax);
    /* 0069fa27: call 0x6a8248 */ r_esp -= 4; W32(r_esp, 0x69fa2cu); f_006a8248();
    /* 0069fa2c: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fa2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fa30: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069fa32: call 0x69fb78 */ r_esp -= 4; W32(r_esp, 0x69fa37u); f_0069fb78();
L_0069fa37:; BB(0x0069fa37);
    /* 0069fa37: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069fa39: call 0x693844 */ r_esp -= 4; W32(r_esp, 0x69fa3eu); f_00693844();
    /* 0069fa3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069fa40: jne 0x69fa49 */ if (!fZ) goto L_0069fa49;
L_0069fa42:; BB(0x0069fa42);
    /* 0069fa42: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069fa44: call 0x777724 */ r_esp -= 4; W32(r_esp, 0x69fa49u); f_00777724();
L_0069fa49:; BB(0x0069fa49);
    /* 0069fa49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069fa4a: ret  */ FN_RET(0x0069f9a8); r_esp += 4; return;
L_0069fa4b:; BB(0x0069fa4b);
    /* 0069fa4b: fld dword ptr [ebx + 0x4f0] */ FPUSH(R_F32((u32)(r_ebx+0x4f0u)));
    /* 0069fa51: fadd dword ptr [ebx + 0xc0] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xc0u));
    /* 0069fa57: fld dword ptr [ebx + 0x4f0] */ FPUSH(R_F32((u32)(r_ebx+0x4f0u)));
    /* 0069fa5d: fcomp dword ptr [0x93d9e8] */ fx_compare(ST(0), R_F32((u32)(0x93d9e8u))); FPOP();
    /* 0069fa63: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069fa65: fstp dword ptr [ebx + 0xc0] */ W_F32((u32)(r_ebx+0xc0u), ST(0)); FPOP();
    /* 0069fa6b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0069fa6c: jbe 0x69fa8c */ if ((fC||fZ)) goto L_0069fa8c;
L_0069fa6e:; BB(0x0069fa6e);
    /* 0069fa6e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fa6f: call 0x6ac698 */ r_esp -= 4; W32(r_esp, 0x69fa74u); f_006ac698();
    /* 0069fa74: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069fa75: fcomp dword ptr [ebx + 0xc0] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0xc0u))); FPOP();
    /* 0069fa7b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069fa7d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0069fa7e: ja 0x69fab0 */ if ((!fC&&!fZ)) goto L_0069fab0;
L_0069fa80:; BB(0x0069fa80);
    /* 0069fa80: mov dword ptr [ebx + 0x4f0], 0xbe4ccccd */ W32((u32)(r_ebx+0x4f0u), 0xbe4ccccdu);
    /* 0069fa8a: jmp 0x69fab0 */ goto L_0069fab0;
L_0069fa8c:; BB(0x0069fa8c);
    /* 0069fa8c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fa8d: call 0x6ac668 */ r_esp -= 4; W32(r_esp, 0x69fa92u); f_006ac668();
    /* 0069fa92: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069fa93: fld dword ptr [0x93d9e4] */ FPUSH(R_F32((u32)(0x93d9e4u)));
    /* 0069fa99: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0069fa9b: fcomp dword ptr [ebx + 0xc0] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0xc0u))); FPOP();
    /* 0069faa1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069faa3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0069faa4: jb 0x69fab0 */ if (fC) goto L_0069fab0;
L_0069faa6:; BB(0x0069faa6);
    /* 0069faa6: mov dword ptr [ebx + 0x4f0], 0x3e4ccccd */ W32((u32)(r_ebx+0x4f0u), 0x3e4ccccdu);
L_0069fab0:; BB(0x0069fab0);
    /* 0069fab0: mov eax, dword ptr [ebx + 0x4ec] */ r_eax = R32((u32)(r_ebx+0x4ecu));
    /* 0069fab6: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069fab9: mov dword ptr [ebx + 0x4ec], eax */ W32((u32)(r_ebx+0x4ecu), r_eax);
    /* 0069fabf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0069fac1: jl 0x69fadb */ if ((fS!=fO)) goto L_0069fadb;
L_0069fac3:; BB(0x0069fac3);
    /* 0069fac3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069fac5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fac6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fac7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fac8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fac9: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 0069face: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x69fad3u); f_008144b0();
    /* 0069fad3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fad6: jmp 0x69fa37 */ goto L_0069fa37;
L_0069fadb:; BB(0x0069fadb);
    /* 0069fadb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fadc: mov edx, dword ptr [ebx + 0xb0] */ r_edx = R32((u32)(r_ebx+0xb0u));
    /* 0069fae2: mov eax, 2 */ r_eax = 0x2u;
    /* 0069fae7: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069faee: and edx, 0xffffffbf */ {  u32 a = r_edx; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0069faf1: mov dword ptr [ebx + 0xb0], edx */ W32((u32)(r_ebx+0xb0u), r_edx);
    /* 0069faf7: call 0x6ac6c8 */ r_esp -= 4; W32(r_esp, 0x69fafcu); f_006ac6c8();
    /* 0069fafc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069fafd: fstp dword ptr [ebx + 0x4f4] */ W_F32((u32)(r_ebx+0x4f4u), ST(0)); FPOP();
    /* 0069fb03: jmp 0x69fac3 */ goto L_0069fac3;
L_0069fb05:; BB(0x0069fb05);
    /* 0069fb05: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fb06: call 0x6ac668 */ r_esp -= 4; W32(r_esp, 0x69fb0bu); f_006ac668();
    /* 0069fb0b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069fb0c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069fb0d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0069fb10: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069fb12: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x69fb17u); f_007aaa30();
    /* 0069fb17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fb19: je 0x69fb5f */ if (fZ) goto L_0069fb5f;
L_0069fb1b:; BB(0x0069fb1b);
    /* 0069fb1b: mov edx, dword ptr [ebx + 0xb0] */ r_edx = R32((u32)(r_ebx+0xb0u));
    /* 0069fb21: mov eax, 1 */ r_eax = 0x1u;
    /* 0069fb26: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0069fb2d: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069fb30: mov dword ptr [ebx + 0xb0], edx */ W32((u32)(r_ebx+0xb0u), r_edx);
    /* 0069fb36: lea ecx, [ebx + 0x4e4] */ r_ecx = (u32)(r_ebx+0x4e4u);
    /* 0069fb3c: call 0x6a8248 */ r_esp -= 4; W32(r_esp, 0x69fb41u); f_006a8248();
    /* 0069fb41: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fb44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fb45: call 0x67e000 */ r_esp -= 4; W32(r_esp, 0x69fb4au); f_0067e000();
    /* 0069fb4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069fb4b: movsx eax, word ptr [eax + 0x12] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x12u));
    /* 0069fb4f: mov dword ptr [ebx + 0x4f0], 0xbe4ccccd */ W32((u32)(r_ebx+0x4f0u), 0xbe4ccccdu);
    /* 0069fb59: mov dword ptr [ebx + 0x4ec], eax */ W32((u32)(r_ebx+0x4ecu), r_eax);
L_0069fb5f:; BB(0x0069fb5f);
    /* 0069fb5f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069fb61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fb62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fb63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fb64: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fb65: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 0069fb6a: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x69fb6fu); f_008144b0();
    /* 0069fb6f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fb72: jmp 0x69fa37 */ goto L_0069fa37;
}

void f_0069fb78(void) /* sub_69FB78 */
{
    FN_ENTER(0x0069fb78);
    /* 0069fb78: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069fb79: mov esi, ecx */ r_esi = r_ecx;
    /* 0069fb7b: mov eax, dword ptr [0xa942b4] */ r_eax = R32((u32)(0xa942b4u));
    /* 0069fb80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069fb82: je 0x69fbad */ if (fZ) goto L_0069fbad;
L_0069fb84:; BB(0x0069fb84);
    /* 0069fb84: mov ecx, esi */ r_ecx = r_esi;
    /* 0069fb86: call 0x68a3fc */ r_esp -= 4; W32(r_esp, 0x69fb8bu); f_0068a3fc();
    /* 0069fb8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fb8d: je 0x69fbb5 */ if (fZ) goto L_0069fbb5;
L_0069fb8f:; BB(0x0069fb8f);
    /* 0069fb8f: mov ecx, dword ptr [0xa942b4] */ r_ecx = R32((u32)(0xa942b4u));
    /* 0069fb95: call 0x6a850c */ r_esp -= 4; W32(r_esp, 0x69fb9au); f_006a850c();
    /* 0069fb9a: mov eax, dword ptr [0xa942b4] */ r_eax = R32((u32)(0xa942b4u));
    /* 0069fb9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fba1: je 0x69fbb1 */ if (fZ) goto L_0069fbb1;
L_0069fba3:; BB(0x0069fba3);
    /* 0069fba3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069fba4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fba5: call 0x67e4c4 */ r_esp -= 4; W32(r_esp, 0x69fbaau); f_0067e4c4();
    /* 0069fbaa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0069fbad:; BB(0x0069fbad);
    /* 0069fbad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069fbae: ret 4 */ FN_RET(0x0069fb78); r_esp += 8; return;
L_0069fbb1:; BB(0x0069fbb1);
    /* 0069fbb1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069fbb3: jmp 0x69fba3 */ goto L_0069fba3;
L_0069fbb5:; BB(0x0069fbb5);
    /* 0069fbb5: mov ecx, dword ptr [0xa942b4] */ r_ecx = R32((u32)(0xa942b4u));
    /* 0069fbbb: call 0x6a85ac */ r_esp -= 4; W32(r_esp, 0x69fbc0u); f_006a85ac();
    /* 0069fbc0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069fbc1: ret 4 */ FN_RET(0x0069fb78); r_esp += 8; return;
}

void f_0069fbc4(void) /* sub_69FBC4 */
{
    FN_ENTER(0x0069fbc4);
    /* 0069fbc4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069fbc5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069fbc6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fbc7: mov edi, ecx */ r_edi = r_ecx;
    /* 0069fbc9: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0069fbd0: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0069fbd3: mov dword ptr [edi + 0x348], 9 */ W32((u32)(r_edi+0x348u), 0x9u);
    /* 0069fbdd: ja 0x69fd08 */ if ((!fC&&!fZ)) goto L_0069fd08;
L_0069fbe3:; BB(0x0069fbe3);
    /* 0069fbe3: mov eax, dword ptr [eax*4 + 0x93d460] */ r_eax = R32((u32)(r_eax*4+0x93d460u));
    /* 0069fbea: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0069fd08:; BB(0x0069fd08);
    /* 0069fd08: movzx ebx, word ptr [edi + 0x4f8] */ r_ebx = (u32)R16((u32)(r_edi+0x4f8u));
    /* 0069fd0f: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd15: lea esi, [edi + 0x4e4] */ r_esi = (u32)(r_edi+0x4e4u);
    /* 0069fd1b: je 0x69fd77 */ if (fZ) goto L_0069fd77;
L_0069fd1d:; BB(0x0069fd1d);
    /* 0069fd1d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd1e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69fd23u); f_007b4d18();
    /* 0069fd23: mov ecx, eax */ r_ecx = r_eax;
    /* 0069fd25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd28: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd2a: jne 0x69fd3f */ if (!fZ) goto L_0069fd3f;
L_0069fd2c:; BB(0x0069fd2c);
    /* 0069fd2c: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0069fd31: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0069fd36: mov word ptr [edi + 0x4f8], ax */ W16((u32)(r_edi+0x4f8u), (u16)r_eax);
    /* 0069fd3d: jmp 0x69fd77 */ goto L_0069fd77;
L_0069fd3f:; BB(0x0069fd3f);
    /* 0069fd3f: movsx eax, word ptr [edi + 0x4fa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x4fau));
    /* 0069fd46: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0069fd49: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd51: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd53: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 0069fd59: mov ecx, dword ptr [eax + edx*4 + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cu));
    /* 0069fd5d: mov dword ptr [edi + 0x820], ecx */ W32((u32)(r_edi+0x820u), r_ecx);
    /* 0069fd63: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0069fd67: mov dword ptr [edi + 0x824], ecx */ W32((u32)(r_edi+0x824u), r_ecx);
    /* 0069fd6d: mov eax, dword ptr [eax + edx*4 + 0x24] */ r_eax = R32((u32)(r_eax+r_edx*4+0x24u));
    /* 0069fd71: mov dword ptr [edi + 0x828], eax */ W32((u32)(r_edi+0x828u), r_eax);
L_0069fd77:; BB(0x0069fd77);
    /* 0069fd77: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd7d: jne 0x69fd8a */ if (!fZ) goto L_0069fd8a;
L_0069fd7f:; BB(0x0069fd7f);
    /* 0069fd7f: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0069fd82: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
    /* 0069fd88: jmp 0x69fda3 */ goto L_0069fda3;
L_0069fd8a:; BB(0x0069fd8a);
    /* 0069fd8a: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0069fd8d: lea eax, [edi + 0x820] */ r_eax = (u32)(r_edi+0x820u);
    /* 0069fd93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd95: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x69fd9au); f_007a90a8();
    /* 0069fd9a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd9d: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
L_0069fda3:; BB(0x0069fda3);
    /* 0069fda3: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069fda6: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fdab: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069fdae: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdb0: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69fdb5u); f_0077774c();
    /* 0069fdb5: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069fdbc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fdbf: jne 0x69fdcf */ if (!fZ) goto L_0069fdcf;
L_0069fdc1:; BB(0x0069fdc1);
    /* 0069fdc1: push 0xab */ { u32 v = 0xabu; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdc6: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdc8: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fdcdu); f_006904cc();
    /* 0069fdcd: jmp 0x69fddb */ goto L_0069fddb;
L_0069fdcf:; BB(0x0069fdcf);
    /* 0069fdcf: push 0xa9 */ { u32 v = 0xa9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdd4: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdd6: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fddbu); f_006904cc();
L_0069fddb:; BB(0x0069fddb);
    /* 0069fddb: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069fde1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069fde3: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069fdea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069fdec: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x69fdefu); call_ind(t); }
    /* 0069fdef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fdf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf3: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdf7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69fdfcu); f_00694390();
    /* 0069fdfc: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069fe02: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fe07: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069fe0d: mov ecx, esi */ r_ecx = r_esi;
    /* 0069fe0f: call 0x6a8248 */ r_esp -= 4; W32(r_esp, 0x69fe14u); f_006a8248();
    /* 0069fe14: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069fe18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe19: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fe1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe1d: call 0x67e0b0 */ r_esp -= 4; W32(r_esp, 0x69fe22u); f_0067e0b0();
    /* 0069fe22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069fe25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069fe26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069fe27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069fe28: ret  */ FN_RET(0x0069fbc4); r_esp += 4; return;
}

void f_0069fbec(void)
{
    FN_ENTER(0x0069fbec);
    /* 0069fbec: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fbee: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fbf0: call 0x69bdf0 */ r_esp -= 4; W32(r_esp, 0x69fbf5u); f_0069bdf0();
    /* 0069fbf5: jmp 0x69fd08 */ goto L_0069fd08;
L_0069fd08:; BB(0x0069fd08);
    /* 0069fd08: movzx ebx, word ptr [edi + 0x4f8] */ r_ebx = (u32)R16((u32)(r_edi+0x4f8u));
    /* 0069fd0f: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd15: lea esi, [edi + 0x4e4] */ r_esi = (u32)(r_edi+0x4e4u);
    /* 0069fd1b: je 0x69fd77 */ if (fZ) goto L_0069fd77;
L_0069fd1d:; BB(0x0069fd1d);
    /* 0069fd1d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd1e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69fd23u); f_007b4d18();
    /* 0069fd23: mov ecx, eax */ r_ecx = r_eax;
    /* 0069fd25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd28: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd2a: jne 0x69fd3f */ if (!fZ) goto L_0069fd3f;
L_0069fd2c:; BB(0x0069fd2c);
    /* 0069fd2c: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0069fd31: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0069fd36: mov word ptr [edi + 0x4f8], ax */ W16((u32)(r_edi+0x4f8u), (u16)r_eax);
    /* 0069fd3d: jmp 0x69fd77 */ goto L_0069fd77;
L_0069fd3f:; BB(0x0069fd3f);
    /* 0069fd3f: movsx eax, word ptr [edi + 0x4fa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x4fau));
    /* 0069fd46: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0069fd49: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd51: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd53: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 0069fd59: mov ecx, dword ptr [eax + edx*4 + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cu));
    /* 0069fd5d: mov dword ptr [edi + 0x820], ecx */ W32((u32)(r_edi+0x820u), r_ecx);
    /* 0069fd63: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0069fd67: mov dword ptr [edi + 0x824], ecx */ W32((u32)(r_edi+0x824u), r_ecx);
    /* 0069fd6d: mov eax, dword ptr [eax + edx*4 + 0x24] */ r_eax = R32((u32)(r_eax+r_edx*4+0x24u));
    /* 0069fd71: mov dword ptr [edi + 0x828], eax */ W32((u32)(r_edi+0x828u), r_eax);
L_0069fd77:; BB(0x0069fd77);
    /* 0069fd77: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd7d: jne 0x69fd8a */ if (!fZ) goto L_0069fd8a;
L_0069fd7f:; BB(0x0069fd7f);
    /* 0069fd7f: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0069fd82: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
    /* 0069fd88: jmp 0x69fda3 */ goto L_0069fda3;
L_0069fd8a:; BB(0x0069fd8a);
    /* 0069fd8a: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0069fd8d: lea eax, [edi + 0x820] */ r_eax = (u32)(r_edi+0x820u);
    /* 0069fd93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd95: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x69fd9au); f_007a90a8();
    /* 0069fd9a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd9d: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
L_0069fda3:; BB(0x0069fda3);
    /* 0069fda3: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069fda6: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fdab: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069fdae: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdb0: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69fdb5u); f_0077774c();
    /* 0069fdb5: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069fdbc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fdbf: jne 0x69fdcf */ if (!fZ) goto L_0069fdcf;
L_0069fdc1:; BB(0x0069fdc1);
    /* 0069fdc1: push 0xab */ { u32 v = 0xabu; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdc6: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdc8: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fdcdu); f_006904cc();
    /* 0069fdcd: jmp 0x69fddb */ goto L_0069fddb;
L_0069fdcf:; BB(0x0069fdcf);
    /* 0069fdcf: push 0xa9 */ { u32 v = 0xa9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdd4: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdd6: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fddbu); f_006904cc();
L_0069fddb:; BB(0x0069fddb);
    /* 0069fddb: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069fde1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069fde3: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069fdea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069fdec: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x69fdefu); call_ind(t); }
    /* 0069fdef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fdf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf3: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdf7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69fdfcu); f_00694390();
    /* 0069fdfc: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069fe02: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fe07: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069fe0d: mov ecx, esi */ r_ecx = r_esi;
    /* 0069fe0f: call 0x6a8248 */ r_esp -= 4; W32(r_esp, 0x69fe14u); f_006a8248();
    /* 0069fe14: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069fe18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe19: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fe1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe1d: call 0x67e0b0 */ r_esp -= 4; W32(r_esp, 0x69fe22u); f_0067e0b0();
    /* 0069fe22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069fe25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069fe26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069fe27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069fe28: ret  */ FN_RET(0x0069fbec); r_esp += 4; return;
}

void f_0069fbfa(void)
{
    FN_ENTER(0x0069fbfa);
    /* 0069fbfa: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fbfc: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fbfe: call 0x69c6c0 */ r_esp -= 4; W32(r_esp, 0x69fc03u); f_0069c6c0();
    /* 0069fc03: jmp 0x69fd08 */ goto L_0069fd08;
L_0069fd08:; BB(0x0069fd08);
    /* 0069fd08: movzx ebx, word ptr [edi + 0x4f8] */ r_ebx = (u32)R16((u32)(r_edi+0x4f8u));
    /* 0069fd0f: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd15: lea esi, [edi + 0x4e4] */ r_esi = (u32)(r_edi+0x4e4u);
    /* 0069fd1b: je 0x69fd77 */ if (fZ) goto L_0069fd77;
L_0069fd1d:; BB(0x0069fd1d);
    /* 0069fd1d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd1e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69fd23u); f_007b4d18();
    /* 0069fd23: mov ecx, eax */ r_ecx = r_eax;
    /* 0069fd25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd28: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd2a: jne 0x69fd3f */ if (!fZ) goto L_0069fd3f;
L_0069fd2c:; BB(0x0069fd2c);
    /* 0069fd2c: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0069fd31: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0069fd36: mov word ptr [edi + 0x4f8], ax */ W16((u32)(r_edi+0x4f8u), (u16)r_eax);
    /* 0069fd3d: jmp 0x69fd77 */ goto L_0069fd77;
L_0069fd3f:; BB(0x0069fd3f);
    /* 0069fd3f: movsx eax, word ptr [edi + 0x4fa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x4fau));
    /* 0069fd46: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0069fd49: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd51: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd53: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 0069fd59: mov ecx, dword ptr [eax + edx*4 + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cu));
    /* 0069fd5d: mov dword ptr [edi + 0x820], ecx */ W32((u32)(r_edi+0x820u), r_ecx);
    /* 0069fd63: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0069fd67: mov dword ptr [edi + 0x824], ecx */ W32((u32)(r_edi+0x824u), r_ecx);
    /* 0069fd6d: mov eax, dword ptr [eax + edx*4 + 0x24] */ r_eax = R32((u32)(r_eax+r_edx*4+0x24u));
    /* 0069fd71: mov dword ptr [edi + 0x828], eax */ W32((u32)(r_edi+0x828u), r_eax);
L_0069fd77:; BB(0x0069fd77);
    /* 0069fd77: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd7d: jne 0x69fd8a */ if (!fZ) goto L_0069fd8a;
L_0069fd7f:; BB(0x0069fd7f);
    /* 0069fd7f: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0069fd82: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
    /* 0069fd88: jmp 0x69fda3 */ goto L_0069fda3;
L_0069fd8a:; BB(0x0069fd8a);
    /* 0069fd8a: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0069fd8d: lea eax, [edi + 0x820] */ r_eax = (u32)(r_edi+0x820u);
    /* 0069fd93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd95: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x69fd9au); f_007a90a8();
    /* 0069fd9a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd9d: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
L_0069fda3:; BB(0x0069fda3);
    /* 0069fda3: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069fda6: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fdab: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069fdae: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdb0: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69fdb5u); f_0077774c();
    /* 0069fdb5: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069fdbc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fdbf: jne 0x69fdcf */ if (!fZ) goto L_0069fdcf;
L_0069fdc1:; BB(0x0069fdc1);
    /* 0069fdc1: push 0xab */ { u32 v = 0xabu; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdc6: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdc8: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fdcdu); f_006904cc();
    /* 0069fdcd: jmp 0x69fddb */ goto L_0069fddb;
L_0069fdcf:; BB(0x0069fdcf);
    /* 0069fdcf: push 0xa9 */ { u32 v = 0xa9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdd4: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdd6: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fddbu); f_006904cc();
L_0069fddb:; BB(0x0069fddb);
    /* 0069fddb: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069fde1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069fde3: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069fdea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069fdec: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x69fdefu); call_ind(t); }
    /* 0069fdef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fdf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf3: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdf7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69fdfcu); f_00694390();
    /* 0069fdfc: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069fe02: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fe07: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069fe0d: mov ecx, esi */ r_ecx = r_esi;
    /* 0069fe0f: call 0x6a8248 */ r_esp -= 4; W32(r_esp, 0x69fe14u); f_006a8248();
    /* 0069fe14: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069fe18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe19: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fe1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe1d: call 0x67e0b0 */ r_esp -= 4; W32(r_esp, 0x69fe22u); f_0067e0b0();
    /* 0069fe22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069fe25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069fe26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069fe27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069fe28: ret  */ FN_RET(0x0069fbfa); r_esp += 4; return;
}

void f_0069fc08(void)
{
    FN_ENTER(0x0069fc08);
    /* 0069fc08: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fc0a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fc0c: call 0x69c988 */ r_esp -= 4; W32(r_esp, 0x69fc11u); f_0069c988();
    /* 0069fc11: jmp 0x69fd08 */ goto L_0069fd08;
L_0069fd08:; BB(0x0069fd08);
    /* 0069fd08: movzx ebx, word ptr [edi + 0x4f8] */ r_ebx = (u32)R16((u32)(r_edi+0x4f8u));
    /* 0069fd0f: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd15: lea esi, [edi + 0x4e4] */ r_esi = (u32)(r_edi+0x4e4u);
    /* 0069fd1b: je 0x69fd77 */ if (fZ) goto L_0069fd77;
L_0069fd1d:; BB(0x0069fd1d);
    /* 0069fd1d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd1e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69fd23u); f_007b4d18();
    /* 0069fd23: mov ecx, eax */ r_ecx = r_eax;
    /* 0069fd25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd28: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd2a: jne 0x69fd3f */ if (!fZ) goto L_0069fd3f;
L_0069fd2c:; BB(0x0069fd2c);
    /* 0069fd2c: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0069fd31: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0069fd36: mov word ptr [edi + 0x4f8], ax */ W16((u32)(r_edi+0x4f8u), (u16)r_eax);
    /* 0069fd3d: jmp 0x69fd77 */ goto L_0069fd77;
L_0069fd3f:; BB(0x0069fd3f);
    /* 0069fd3f: movsx eax, word ptr [edi + 0x4fa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x4fau));
    /* 0069fd46: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0069fd49: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd51: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd53: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 0069fd59: mov ecx, dword ptr [eax + edx*4 + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cu));
    /* 0069fd5d: mov dword ptr [edi + 0x820], ecx */ W32((u32)(r_edi+0x820u), r_ecx);
    /* 0069fd63: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0069fd67: mov dword ptr [edi + 0x824], ecx */ W32((u32)(r_edi+0x824u), r_ecx);
    /* 0069fd6d: mov eax, dword ptr [eax + edx*4 + 0x24] */ r_eax = R32((u32)(r_eax+r_edx*4+0x24u));
    /* 0069fd71: mov dword ptr [edi + 0x828], eax */ W32((u32)(r_edi+0x828u), r_eax);
L_0069fd77:; BB(0x0069fd77);
    /* 0069fd77: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd7d: jne 0x69fd8a */ if (!fZ) goto L_0069fd8a;
L_0069fd7f:; BB(0x0069fd7f);
    /* 0069fd7f: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0069fd82: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
    /* 0069fd88: jmp 0x69fda3 */ goto L_0069fda3;
L_0069fd8a:; BB(0x0069fd8a);
    /* 0069fd8a: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0069fd8d: lea eax, [edi + 0x820] */ r_eax = (u32)(r_edi+0x820u);
    /* 0069fd93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd95: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x69fd9au); f_007a90a8();
    /* 0069fd9a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd9d: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
L_0069fda3:; BB(0x0069fda3);
    /* 0069fda3: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069fda6: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fdab: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069fdae: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdb0: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69fdb5u); f_0077774c();
    /* 0069fdb5: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069fdbc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fdbf: jne 0x69fdcf */ if (!fZ) goto L_0069fdcf;
L_0069fdc1:; BB(0x0069fdc1);
    /* 0069fdc1: push 0xab */ { u32 v = 0xabu; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdc6: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdc8: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fdcdu); f_006904cc();
    /* 0069fdcd: jmp 0x69fddb */ goto L_0069fddb;
L_0069fdcf:; BB(0x0069fdcf);
    /* 0069fdcf: push 0xa9 */ { u32 v = 0xa9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdd4: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdd6: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fddbu); f_006904cc();
L_0069fddb:; BB(0x0069fddb);
    /* 0069fddb: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069fde1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069fde3: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069fdea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069fdec: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x69fdefu); call_ind(t); }
    /* 0069fdef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fdf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf3: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdf7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69fdfcu); f_00694390();
    /* 0069fdfc: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069fe02: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fe07: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069fe0d: mov ecx, esi */ r_ecx = r_esi;
    /* 0069fe0f: call 0x6a8248 */ r_esp -= 4; W32(r_esp, 0x69fe14u); f_006a8248();
    /* 0069fe14: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069fe18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe19: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fe1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe1d: call 0x67e0b0 */ r_esp -= 4; W32(r_esp, 0x69fe22u); f_0067e0b0();
    /* 0069fe22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069fe25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069fe26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069fe27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069fe28: ret  */ FN_RET(0x0069fc08); r_esp += 4; return;
}

void f_0069fc16(void)
{
    FN_ENTER(0x0069fc16);
    /* 0069fc16: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fc18: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fc1a: call 0x69cd20 */ r_esp -= 4; W32(r_esp, 0x69fc1fu); f_0069cd20();
    /* 0069fc1f: jmp 0x69fd08 */ goto L_0069fd08;
L_0069fd08:; BB(0x0069fd08);
    /* 0069fd08: movzx ebx, word ptr [edi + 0x4f8] */ r_ebx = (u32)R16((u32)(r_edi+0x4f8u));
    /* 0069fd0f: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd15: lea esi, [edi + 0x4e4] */ r_esi = (u32)(r_edi+0x4e4u);
    /* 0069fd1b: je 0x69fd77 */ if (fZ) goto L_0069fd77;
L_0069fd1d:; BB(0x0069fd1d);
    /* 0069fd1d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd1e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69fd23u); f_007b4d18();
    /* 0069fd23: mov ecx, eax */ r_ecx = r_eax;
    /* 0069fd25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd28: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd2a: jne 0x69fd3f */ if (!fZ) goto L_0069fd3f;
L_0069fd2c:; BB(0x0069fd2c);
    /* 0069fd2c: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0069fd31: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0069fd36: mov word ptr [edi + 0x4f8], ax */ W16((u32)(r_edi+0x4f8u), (u16)r_eax);
    /* 0069fd3d: jmp 0x69fd77 */ goto L_0069fd77;
L_0069fd3f:; BB(0x0069fd3f);
    /* 0069fd3f: movsx eax, word ptr [edi + 0x4fa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x4fau));
    /* 0069fd46: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0069fd49: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd51: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd53: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 0069fd59: mov ecx, dword ptr [eax + edx*4 + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cu));
    /* 0069fd5d: mov dword ptr [edi + 0x820], ecx */ W32((u32)(r_edi+0x820u), r_ecx);
    /* 0069fd63: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0069fd67: mov dword ptr [edi + 0x824], ecx */ W32((u32)(r_edi+0x824u), r_ecx);
    /* 0069fd6d: mov eax, dword ptr [eax + edx*4 + 0x24] */ r_eax = R32((u32)(r_eax+r_edx*4+0x24u));
    /* 0069fd71: mov dword ptr [edi + 0x828], eax */ W32((u32)(r_edi+0x828u), r_eax);
L_0069fd77:; BB(0x0069fd77);
    /* 0069fd77: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd7d: jne 0x69fd8a */ if (!fZ) goto L_0069fd8a;
L_0069fd7f:; BB(0x0069fd7f);
    /* 0069fd7f: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0069fd82: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
    /* 0069fd88: jmp 0x69fda3 */ goto L_0069fda3;
L_0069fd8a:; BB(0x0069fd8a);
    /* 0069fd8a: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0069fd8d: lea eax, [edi + 0x820] */ r_eax = (u32)(r_edi+0x820u);
    /* 0069fd93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd95: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x69fd9au); f_007a90a8();
    /* 0069fd9a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd9d: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
L_0069fda3:; BB(0x0069fda3);
    /* 0069fda3: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069fda6: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fdab: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069fdae: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdb0: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69fdb5u); f_0077774c();
    /* 0069fdb5: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069fdbc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fdbf: jne 0x69fdcf */ if (!fZ) goto L_0069fdcf;
L_0069fdc1:; BB(0x0069fdc1);
    /* 0069fdc1: push 0xab */ { u32 v = 0xabu; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdc6: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdc8: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fdcdu); f_006904cc();
    /* 0069fdcd: jmp 0x69fddb */ goto L_0069fddb;
L_0069fdcf:; BB(0x0069fdcf);
    /* 0069fdcf: push 0xa9 */ { u32 v = 0xa9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdd4: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdd6: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fddbu); f_006904cc();
L_0069fddb:; BB(0x0069fddb);
    /* 0069fddb: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069fde1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069fde3: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069fdea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069fdec: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x69fdefu); call_ind(t); }
    /* 0069fdef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fdf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf3: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdf7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69fdfcu); f_00694390();
    /* 0069fdfc: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069fe02: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fe07: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069fe0d: mov ecx, esi */ r_ecx = r_esi;
    /* 0069fe0f: call 0x6a8248 */ r_esp -= 4; W32(r_esp, 0x69fe14u); f_006a8248();
    /* 0069fe14: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069fe18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe19: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fe1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe1d: call 0x67e0b0 */ r_esp -= 4; W32(r_esp, 0x69fe22u); f_0067e0b0();
    /* 0069fe22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069fe25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069fe26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069fe27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069fe28: ret  */ FN_RET(0x0069fc16); r_esp += 4; return;
}

void f_0069fc24(void)
{
    FN_ENTER(0x0069fc24);
    /* 0069fc24: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fc26: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fc28: call 0x69d1e4 */ r_esp -= 4; W32(r_esp, 0x69fc2du); f_0069d1e4();
    /* 0069fc2d: jmp 0x69fd08 */ goto L_0069fd08;
L_0069fd08:; BB(0x0069fd08);
    /* 0069fd08: movzx ebx, word ptr [edi + 0x4f8] */ r_ebx = (u32)R16((u32)(r_edi+0x4f8u));
    /* 0069fd0f: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd15: lea esi, [edi + 0x4e4] */ r_esi = (u32)(r_edi+0x4e4u);
    /* 0069fd1b: je 0x69fd77 */ if (fZ) goto L_0069fd77;
L_0069fd1d:; BB(0x0069fd1d);
    /* 0069fd1d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd1e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69fd23u); f_007b4d18();
    /* 0069fd23: mov ecx, eax */ r_ecx = r_eax;
    /* 0069fd25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd28: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd2a: jne 0x69fd3f */ if (!fZ) goto L_0069fd3f;
L_0069fd2c:; BB(0x0069fd2c);
    /* 0069fd2c: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0069fd31: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0069fd36: mov word ptr [edi + 0x4f8], ax */ W16((u32)(r_edi+0x4f8u), (u16)r_eax);
    /* 0069fd3d: jmp 0x69fd77 */ goto L_0069fd77;
L_0069fd3f:; BB(0x0069fd3f);
    /* 0069fd3f: movsx eax, word ptr [edi + 0x4fa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x4fau));
    /* 0069fd46: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0069fd49: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd51: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd53: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 0069fd59: mov ecx, dword ptr [eax + edx*4 + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cu));
    /* 0069fd5d: mov dword ptr [edi + 0x820], ecx */ W32((u32)(r_edi+0x820u), r_ecx);
    /* 0069fd63: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0069fd67: mov dword ptr [edi + 0x824], ecx */ W32((u32)(r_edi+0x824u), r_ecx);
    /* 0069fd6d: mov eax, dword ptr [eax + edx*4 + 0x24] */ r_eax = R32((u32)(r_eax+r_edx*4+0x24u));
    /* 0069fd71: mov dword ptr [edi + 0x828], eax */ W32((u32)(r_edi+0x828u), r_eax);
L_0069fd77:; BB(0x0069fd77);
    /* 0069fd77: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd7d: jne 0x69fd8a */ if (!fZ) goto L_0069fd8a;
L_0069fd7f:; BB(0x0069fd7f);
    /* 0069fd7f: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0069fd82: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
    /* 0069fd88: jmp 0x69fda3 */ goto L_0069fda3;
L_0069fd8a:; BB(0x0069fd8a);
    /* 0069fd8a: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0069fd8d: lea eax, [edi + 0x820] */ r_eax = (u32)(r_edi+0x820u);
    /* 0069fd93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd95: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x69fd9au); f_007a90a8();
    /* 0069fd9a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd9d: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
L_0069fda3:; BB(0x0069fda3);
    /* 0069fda3: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069fda6: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fdab: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069fdae: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdb0: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69fdb5u); f_0077774c();
    /* 0069fdb5: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069fdbc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fdbf: jne 0x69fdcf */ if (!fZ) goto L_0069fdcf;
L_0069fdc1:; BB(0x0069fdc1);
    /* 0069fdc1: push 0xab */ { u32 v = 0xabu; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdc6: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdc8: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fdcdu); f_006904cc();
    /* 0069fdcd: jmp 0x69fddb */ goto L_0069fddb;
L_0069fdcf:; BB(0x0069fdcf);
    /* 0069fdcf: push 0xa9 */ { u32 v = 0xa9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdd4: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdd6: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fddbu); f_006904cc();
L_0069fddb:; BB(0x0069fddb);
    /* 0069fddb: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069fde1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069fde3: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069fdea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069fdec: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x69fdefu); call_ind(t); }
    /* 0069fdef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fdf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf3: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdf7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69fdfcu); f_00694390();
    /* 0069fdfc: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069fe02: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fe07: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069fe0d: mov ecx, esi */ r_ecx = r_esi;
    /* 0069fe0f: call 0x6a8248 */ r_esp -= 4; W32(r_esp, 0x69fe14u); f_006a8248();
    /* 0069fe14: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069fe18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe19: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fe1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe1d: call 0x67e0b0 */ r_esp -= 4; W32(r_esp, 0x69fe22u); f_0067e0b0();
    /* 0069fe22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069fe25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069fe26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069fe27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069fe28: ret  */ FN_RET(0x0069fc24); r_esp += 4; return;
}

void f_0069fc32(void)
{
    FN_ENTER(0x0069fc32);
    /* 0069fc32: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fc34: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fc36: call 0x69d43c */ r_esp -= 4; W32(r_esp, 0x69fc3bu); f_0069d43c();
    /* 0069fc3b: jmp 0x69fd08 */ goto L_0069fd08;
L_0069fd08:; BB(0x0069fd08);
    /* 0069fd08: movzx ebx, word ptr [edi + 0x4f8] */ r_ebx = (u32)R16((u32)(r_edi+0x4f8u));
    /* 0069fd0f: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd15: lea esi, [edi + 0x4e4] */ r_esi = (u32)(r_edi+0x4e4u);
    /* 0069fd1b: je 0x69fd77 */ if (fZ) goto L_0069fd77;
L_0069fd1d:; BB(0x0069fd1d);
    /* 0069fd1d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd1e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69fd23u); f_007b4d18();
    /* 0069fd23: mov ecx, eax */ r_ecx = r_eax;
    /* 0069fd25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd28: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd2a: jne 0x69fd3f */ if (!fZ) goto L_0069fd3f;
L_0069fd2c:; BB(0x0069fd2c);
    /* 0069fd2c: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0069fd31: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0069fd36: mov word ptr [edi + 0x4f8], ax */ W16((u32)(r_edi+0x4f8u), (u16)r_eax);
    /* 0069fd3d: jmp 0x69fd77 */ goto L_0069fd77;
L_0069fd3f:; BB(0x0069fd3f);
    /* 0069fd3f: movsx eax, word ptr [edi + 0x4fa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x4fau));
    /* 0069fd46: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0069fd49: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd51: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd53: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 0069fd59: mov ecx, dword ptr [eax + edx*4 + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cu));
    /* 0069fd5d: mov dword ptr [edi + 0x820], ecx */ W32((u32)(r_edi+0x820u), r_ecx);
    /* 0069fd63: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0069fd67: mov dword ptr [edi + 0x824], ecx */ W32((u32)(r_edi+0x824u), r_ecx);
    /* 0069fd6d: mov eax, dword ptr [eax + edx*4 + 0x24] */ r_eax = R32((u32)(r_eax+r_edx*4+0x24u));
    /* 0069fd71: mov dword ptr [edi + 0x828], eax */ W32((u32)(r_edi+0x828u), r_eax);
L_0069fd77:; BB(0x0069fd77);
    /* 0069fd77: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd7d: jne 0x69fd8a */ if (!fZ) goto L_0069fd8a;
L_0069fd7f:; BB(0x0069fd7f);
    /* 0069fd7f: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0069fd82: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
    /* 0069fd88: jmp 0x69fda3 */ goto L_0069fda3;
L_0069fd8a:; BB(0x0069fd8a);
    /* 0069fd8a: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0069fd8d: lea eax, [edi + 0x820] */ r_eax = (u32)(r_edi+0x820u);
    /* 0069fd93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd95: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x69fd9au); f_007a90a8();
    /* 0069fd9a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd9d: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
L_0069fda3:; BB(0x0069fda3);
    /* 0069fda3: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069fda6: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fdab: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069fdae: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdb0: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69fdb5u); f_0077774c();
    /* 0069fdb5: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069fdbc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fdbf: jne 0x69fdcf */ if (!fZ) goto L_0069fdcf;
L_0069fdc1:; BB(0x0069fdc1);
    /* 0069fdc1: push 0xab */ { u32 v = 0xabu; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdc6: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdc8: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fdcdu); f_006904cc();
    /* 0069fdcd: jmp 0x69fddb */ goto L_0069fddb;
L_0069fdcf:; BB(0x0069fdcf);
    /* 0069fdcf: push 0xa9 */ { u32 v = 0xa9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdd4: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdd6: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fddbu); f_006904cc();
L_0069fddb:; BB(0x0069fddb);
    /* 0069fddb: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069fde1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069fde3: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069fdea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069fdec: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x69fdefu); call_ind(t); }
    /* 0069fdef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fdf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf3: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdf7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69fdfcu); f_00694390();
    /* 0069fdfc: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069fe02: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fe07: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069fe0d: mov ecx, esi */ r_ecx = r_esi;
    /* 0069fe0f: call 0x6a8248 */ r_esp -= 4; W32(r_esp, 0x69fe14u); f_006a8248();
    /* 0069fe14: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069fe18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe19: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fe1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe1d: call 0x67e0b0 */ r_esp -= 4; W32(r_esp, 0x69fe22u); f_0067e0b0();
    /* 0069fe22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069fe25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069fe26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069fe27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069fe28: ret  */ FN_RET(0x0069fc32); r_esp += 4; return;
}

void f_0069fc40(void)
{
    FN_ENTER(0x0069fc40);
    /* 0069fc40: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fc42: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fc44: call 0x69d8f4 */ r_esp -= 4; W32(r_esp, 0x69fc49u); f_0069d8f4();
    /* 0069fc49: jmp 0x69fd08 */ goto L_0069fd08;
L_0069fd08:; BB(0x0069fd08);
    /* 0069fd08: movzx ebx, word ptr [edi + 0x4f8] */ r_ebx = (u32)R16((u32)(r_edi+0x4f8u));
    /* 0069fd0f: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd15: lea esi, [edi + 0x4e4] */ r_esi = (u32)(r_edi+0x4e4u);
    /* 0069fd1b: je 0x69fd77 */ if (fZ) goto L_0069fd77;
L_0069fd1d:; BB(0x0069fd1d);
    /* 0069fd1d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd1e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69fd23u); f_007b4d18();
    /* 0069fd23: mov ecx, eax */ r_ecx = r_eax;
    /* 0069fd25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd28: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd2a: jne 0x69fd3f */ if (!fZ) goto L_0069fd3f;
L_0069fd2c:; BB(0x0069fd2c);
    /* 0069fd2c: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0069fd31: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0069fd36: mov word ptr [edi + 0x4f8], ax */ W16((u32)(r_edi+0x4f8u), (u16)r_eax);
    /* 0069fd3d: jmp 0x69fd77 */ goto L_0069fd77;
L_0069fd3f:; BB(0x0069fd3f);
    /* 0069fd3f: movsx eax, word ptr [edi + 0x4fa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x4fau));
    /* 0069fd46: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0069fd49: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd51: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd53: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 0069fd59: mov ecx, dword ptr [eax + edx*4 + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cu));
    /* 0069fd5d: mov dword ptr [edi + 0x820], ecx */ W32((u32)(r_edi+0x820u), r_ecx);
    /* 0069fd63: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0069fd67: mov dword ptr [edi + 0x824], ecx */ W32((u32)(r_edi+0x824u), r_ecx);
    /* 0069fd6d: mov eax, dword ptr [eax + edx*4 + 0x24] */ r_eax = R32((u32)(r_eax+r_edx*4+0x24u));
    /* 0069fd71: mov dword ptr [edi + 0x828], eax */ W32((u32)(r_edi+0x828u), r_eax);
L_0069fd77:; BB(0x0069fd77);
    /* 0069fd77: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd7d: jne 0x69fd8a */ if (!fZ) goto L_0069fd8a;
L_0069fd7f:; BB(0x0069fd7f);
    /* 0069fd7f: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0069fd82: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
    /* 0069fd88: jmp 0x69fda3 */ goto L_0069fda3;
L_0069fd8a:; BB(0x0069fd8a);
    /* 0069fd8a: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0069fd8d: lea eax, [edi + 0x820] */ r_eax = (u32)(r_edi+0x820u);
    /* 0069fd93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd95: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x69fd9au); f_007a90a8();
    /* 0069fd9a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd9d: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
L_0069fda3:; BB(0x0069fda3);
    /* 0069fda3: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069fda6: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fdab: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069fdae: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdb0: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69fdb5u); f_0077774c();
    /* 0069fdb5: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069fdbc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fdbf: jne 0x69fdcf */ if (!fZ) goto L_0069fdcf;
L_0069fdc1:; BB(0x0069fdc1);
    /* 0069fdc1: push 0xab */ { u32 v = 0xabu; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdc6: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdc8: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fdcdu); f_006904cc();
    /* 0069fdcd: jmp 0x69fddb */ goto L_0069fddb;
L_0069fdcf:; BB(0x0069fdcf);
    /* 0069fdcf: push 0xa9 */ { u32 v = 0xa9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdd4: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdd6: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fddbu); f_006904cc();
L_0069fddb:; BB(0x0069fddb);
    /* 0069fddb: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069fde1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069fde3: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069fdea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069fdec: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x69fdefu); call_ind(t); }
    /* 0069fdef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fdf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf3: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdf7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69fdfcu); f_00694390();
    /* 0069fdfc: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069fe02: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fe07: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069fe0d: mov ecx, esi */ r_ecx = r_esi;
    /* 0069fe0f: call 0x6a8248 */ r_esp -= 4; W32(r_esp, 0x69fe14u); f_006a8248();
    /* 0069fe14: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069fe18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe19: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fe1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe1d: call 0x67e0b0 */ r_esp -= 4; W32(r_esp, 0x69fe22u); f_0067e0b0();
    /* 0069fe22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069fe25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069fe26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069fe27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069fe28: ret  */ FN_RET(0x0069fc40); r_esp += 4; return;
}

void f_0069fc4e(void)
{
    FN_ENTER(0x0069fc4e);
    /* 0069fc4e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fc50: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fc52: call 0x69dd60 */ r_esp -= 4; W32(r_esp, 0x69fc57u); f_0069dd60();
    /* 0069fc57: jmp 0x69fd08 */ goto L_0069fd08;
L_0069fd08:; BB(0x0069fd08);
    /* 0069fd08: movzx ebx, word ptr [edi + 0x4f8] */ r_ebx = (u32)R16((u32)(r_edi+0x4f8u));
    /* 0069fd0f: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd15: lea esi, [edi + 0x4e4] */ r_esi = (u32)(r_edi+0x4e4u);
    /* 0069fd1b: je 0x69fd77 */ if (fZ) goto L_0069fd77;
L_0069fd1d:; BB(0x0069fd1d);
    /* 0069fd1d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd1e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69fd23u); f_007b4d18();
    /* 0069fd23: mov ecx, eax */ r_ecx = r_eax;
    /* 0069fd25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd28: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd2a: jne 0x69fd3f */ if (!fZ) goto L_0069fd3f;
L_0069fd2c:; BB(0x0069fd2c);
    /* 0069fd2c: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0069fd31: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0069fd36: mov word ptr [edi + 0x4f8], ax */ W16((u32)(r_edi+0x4f8u), (u16)r_eax);
    /* 0069fd3d: jmp 0x69fd77 */ goto L_0069fd77;
L_0069fd3f:; BB(0x0069fd3f);
    /* 0069fd3f: movsx eax, word ptr [edi + 0x4fa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x4fau));
    /* 0069fd46: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0069fd49: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd51: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd53: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 0069fd59: mov ecx, dword ptr [eax + edx*4 + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cu));
    /* 0069fd5d: mov dword ptr [edi + 0x820], ecx */ W32((u32)(r_edi+0x820u), r_ecx);
    /* 0069fd63: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0069fd67: mov dword ptr [edi + 0x824], ecx */ W32((u32)(r_edi+0x824u), r_ecx);
    /* 0069fd6d: mov eax, dword ptr [eax + edx*4 + 0x24] */ r_eax = R32((u32)(r_eax+r_edx*4+0x24u));
    /* 0069fd71: mov dword ptr [edi + 0x828], eax */ W32((u32)(r_edi+0x828u), r_eax);
L_0069fd77:; BB(0x0069fd77);
    /* 0069fd77: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd7d: jne 0x69fd8a */ if (!fZ) goto L_0069fd8a;
L_0069fd7f:; BB(0x0069fd7f);
    /* 0069fd7f: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0069fd82: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
    /* 0069fd88: jmp 0x69fda3 */ goto L_0069fda3;
L_0069fd8a:; BB(0x0069fd8a);
    /* 0069fd8a: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0069fd8d: lea eax, [edi + 0x820] */ r_eax = (u32)(r_edi+0x820u);
    /* 0069fd93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd95: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x69fd9au); f_007a90a8();
    /* 0069fd9a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd9d: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
L_0069fda3:; BB(0x0069fda3);
    /* 0069fda3: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069fda6: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fdab: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069fdae: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdb0: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69fdb5u); f_0077774c();
    /* 0069fdb5: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069fdbc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fdbf: jne 0x69fdcf */ if (!fZ) goto L_0069fdcf;
L_0069fdc1:; BB(0x0069fdc1);
    /* 0069fdc1: push 0xab */ { u32 v = 0xabu; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdc6: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdc8: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fdcdu); f_006904cc();
    /* 0069fdcd: jmp 0x69fddb */ goto L_0069fddb;
L_0069fdcf:; BB(0x0069fdcf);
    /* 0069fdcf: push 0xa9 */ { u32 v = 0xa9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdd4: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdd6: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fddbu); f_006904cc();
L_0069fddb:; BB(0x0069fddb);
    /* 0069fddb: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069fde1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069fde3: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069fdea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069fdec: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x69fdefu); call_ind(t); }
    /* 0069fdef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fdf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf3: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdf7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69fdfcu); f_00694390();
    /* 0069fdfc: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069fe02: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fe07: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069fe0d: mov ecx, esi */ r_ecx = r_esi;
    /* 0069fe0f: call 0x6a8248 */ r_esp -= 4; W32(r_esp, 0x69fe14u); f_006a8248();
    /* 0069fe14: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069fe18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe19: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fe1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe1d: call 0x67e0b0 */ r_esp -= 4; W32(r_esp, 0x69fe22u); f_0067e0b0();
    /* 0069fe22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069fe25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069fe26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069fe27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069fe28: ret  */ FN_RET(0x0069fc4e); r_esp += 4; return;
}

void f_0069fc5c(void)
{
    FN_ENTER(0x0069fc5c);
    /* 0069fc5c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fc5e: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fc60: call 0x69e15c */ r_esp -= 4; W32(r_esp, 0x69fc65u); f_0069e15c();
    /* 0069fc65: jmp 0x69fd08 */ goto L_0069fd08;
L_0069fd08:; BB(0x0069fd08);
    /* 0069fd08: movzx ebx, word ptr [edi + 0x4f8] */ r_ebx = (u32)R16((u32)(r_edi+0x4f8u));
    /* 0069fd0f: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd15: lea esi, [edi + 0x4e4] */ r_esi = (u32)(r_edi+0x4e4u);
    /* 0069fd1b: je 0x69fd77 */ if (fZ) goto L_0069fd77;
L_0069fd1d:; BB(0x0069fd1d);
    /* 0069fd1d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd1e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69fd23u); f_007b4d18();
    /* 0069fd23: mov ecx, eax */ r_ecx = r_eax;
    /* 0069fd25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd28: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd2a: jne 0x69fd3f */ if (!fZ) goto L_0069fd3f;
L_0069fd2c:; BB(0x0069fd2c);
    /* 0069fd2c: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0069fd31: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0069fd36: mov word ptr [edi + 0x4f8], ax */ W16((u32)(r_edi+0x4f8u), (u16)r_eax);
    /* 0069fd3d: jmp 0x69fd77 */ goto L_0069fd77;
L_0069fd3f:; BB(0x0069fd3f);
    /* 0069fd3f: movsx eax, word ptr [edi + 0x4fa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x4fau));
    /* 0069fd46: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0069fd49: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd51: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd53: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 0069fd59: mov ecx, dword ptr [eax + edx*4 + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cu));
    /* 0069fd5d: mov dword ptr [edi + 0x820], ecx */ W32((u32)(r_edi+0x820u), r_ecx);
    /* 0069fd63: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0069fd67: mov dword ptr [edi + 0x824], ecx */ W32((u32)(r_edi+0x824u), r_ecx);
    /* 0069fd6d: mov eax, dword ptr [eax + edx*4 + 0x24] */ r_eax = R32((u32)(r_eax+r_edx*4+0x24u));
    /* 0069fd71: mov dword ptr [edi + 0x828], eax */ W32((u32)(r_edi+0x828u), r_eax);
L_0069fd77:; BB(0x0069fd77);
    /* 0069fd77: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd7d: jne 0x69fd8a */ if (!fZ) goto L_0069fd8a;
L_0069fd7f:; BB(0x0069fd7f);
    /* 0069fd7f: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0069fd82: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
    /* 0069fd88: jmp 0x69fda3 */ goto L_0069fda3;
L_0069fd8a:; BB(0x0069fd8a);
    /* 0069fd8a: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0069fd8d: lea eax, [edi + 0x820] */ r_eax = (u32)(r_edi+0x820u);
    /* 0069fd93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd95: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x69fd9au); f_007a90a8();
    /* 0069fd9a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd9d: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
L_0069fda3:; BB(0x0069fda3);
    /* 0069fda3: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069fda6: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fdab: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069fdae: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdb0: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69fdb5u); f_0077774c();
    /* 0069fdb5: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069fdbc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fdbf: jne 0x69fdcf */ if (!fZ) goto L_0069fdcf;
L_0069fdc1:; BB(0x0069fdc1);
    /* 0069fdc1: push 0xab */ { u32 v = 0xabu; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdc6: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdc8: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fdcdu); f_006904cc();
    /* 0069fdcd: jmp 0x69fddb */ goto L_0069fddb;
L_0069fdcf:; BB(0x0069fdcf);
    /* 0069fdcf: push 0xa9 */ { u32 v = 0xa9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdd4: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdd6: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fddbu); f_006904cc();
L_0069fddb:; BB(0x0069fddb);
    /* 0069fddb: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069fde1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069fde3: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069fdea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069fdec: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x69fdefu); call_ind(t); }
    /* 0069fdef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fdf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf3: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdf7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69fdfcu); f_00694390();
    /* 0069fdfc: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069fe02: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fe07: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069fe0d: mov ecx, esi */ r_ecx = r_esi;
    /* 0069fe0f: call 0x6a8248 */ r_esp -= 4; W32(r_esp, 0x69fe14u); f_006a8248();
    /* 0069fe14: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069fe18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe19: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fe1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe1d: call 0x67e0b0 */ r_esp -= 4; W32(r_esp, 0x69fe22u); f_0067e0b0();
    /* 0069fe22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069fe25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069fe26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069fe27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069fe28: ret  */ FN_RET(0x0069fc5c); r_esp += 4; return;
}

void f_0069fc6a(void)
{
    FN_ENTER(0x0069fc6a);
    /* 0069fc6a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fc6c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fc6e: call 0x69e718 */ r_esp -= 4; W32(r_esp, 0x69fc73u); f_0069e718();
    /* 0069fc73: jmp 0x69fd08 */ goto L_0069fd08;
L_0069fd08:; BB(0x0069fd08);
    /* 0069fd08: movzx ebx, word ptr [edi + 0x4f8] */ r_ebx = (u32)R16((u32)(r_edi+0x4f8u));
    /* 0069fd0f: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd15: lea esi, [edi + 0x4e4] */ r_esi = (u32)(r_edi+0x4e4u);
    /* 0069fd1b: je 0x69fd77 */ if (fZ) goto L_0069fd77;
L_0069fd1d:; BB(0x0069fd1d);
    /* 0069fd1d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd1e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69fd23u); f_007b4d18();
    /* 0069fd23: mov ecx, eax */ r_ecx = r_eax;
    /* 0069fd25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd28: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd2a: jne 0x69fd3f */ if (!fZ) goto L_0069fd3f;
L_0069fd2c:; BB(0x0069fd2c);
    /* 0069fd2c: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0069fd31: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0069fd36: mov word ptr [edi + 0x4f8], ax */ W16((u32)(r_edi+0x4f8u), (u16)r_eax);
    /* 0069fd3d: jmp 0x69fd77 */ goto L_0069fd77;
L_0069fd3f:; BB(0x0069fd3f);
    /* 0069fd3f: movsx eax, word ptr [edi + 0x4fa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x4fau));
    /* 0069fd46: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0069fd49: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd51: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd53: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 0069fd59: mov ecx, dword ptr [eax + edx*4 + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cu));
    /* 0069fd5d: mov dword ptr [edi + 0x820], ecx */ W32((u32)(r_edi+0x820u), r_ecx);
    /* 0069fd63: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0069fd67: mov dword ptr [edi + 0x824], ecx */ W32((u32)(r_edi+0x824u), r_ecx);
    /* 0069fd6d: mov eax, dword ptr [eax + edx*4 + 0x24] */ r_eax = R32((u32)(r_eax+r_edx*4+0x24u));
    /* 0069fd71: mov dword ptr [edi + 0x828], eax */ W32((u32)(r_edi+0x828u), r_eax);
L_0069fd77:; BB(0x0069fd77);
    /* 0069fd77: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd7d: jne 0x69fd8a */ if (!fZ) goto L_0069fd8a;
L_0069fd7f:; BB(0x0069fd7f);
    /* 0069fd7f: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0069fd82: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
    /* 0069fd88: jmp 0x69fda3 */ goto L_0069fda3;
L_0069fd8a:; BB(0x0069fd8a);
    /* 0069fd8a: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0069fd8d: lea eax, [edi + 0x820] */ r_eax = (u32)(r_edi+0x820u);
    /* 0069fd93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd95: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x69fd9au); f_007a90a8();
    /* 0069fd9a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd9d: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
L_0069fda3:; BB(0x0069fda3);
    /* 0069fda3: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069fda6: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fdab: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069fdae: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdb0: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69fdb5u); f_0077774c();
    /* 0069fdb5: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069fdbc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fdbf: jne 0x69fdcf */ if (!fZ) goto L_0069fdcf;
L_0069fdc1:; BB(0x0069fdc1);
    /* 0069fdc1: push 0xab */ { u32 v = 0xabu; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdc6: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdc8: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fdcdu); f_006904cc();
    /* 0069fdcd: jmp 0x69fddb */ goto L_0069fddb;
L_0069fdcf:; BB(0x0069fdcf);
    /* 0069fdcf: push 0xa9 */ { u32 v = 0xa9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdd4: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdd6: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fddbu); f_006904cc();
L_0069fddb:; BB(0x0069fddb);
    /* 0069fddb: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069fde1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069fde3: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069fdea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069fdec: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x69fdefu); call_ind(t); }
    /* 0069fdef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fdf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf3: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdf7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69fdfcu); f_00694390();
    /* 0069fdfc: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069fe02: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fe07: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069fe0d: mov ecx, esi */ r_ecx = r_esi;
    /* 0069fe0f: call 0x6a8248 */ r_esp -= 4; W32(r_esp, 0x69fe14u); f_006a8248();
    /* 0069fe14: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069fe18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe19: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fe1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe1d: call 0x67e0b0 */ r_esp -= 4; W32(r_esp, 0x69fe22u); f_0067e0b0();
    /* 0069fe22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069fe25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069fe26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069fe27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069fe28: ret  */ FN_RET(0x0069fc6a); r_esp += 4; return;
}

void f_0069fc78(void)
{
    FN_ENTER(0x0069fc78);
    /* 0069fc78: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fc7a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fc7c: call 0x69ebc8 */ r_esp -= 4; W32(r_esp, 0x69fc81u); f_0069ebc8();
    /* 0069fc81: jmp 0x69fd08 */ goto L_0069fd08;
L_0069fd08:; BB(0x0069fd08);
    /* 0069fd08: movzx ebx, word ptr [edi + 0x4f8] */ r_ebx = (u32)R16((u32)(r_edi+0x4f8u));
    /* 0069fd0f: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd15: lea esi, [edi + 0x4e4] */ r_esi = (u32)(r_edi+0x4e4u);
    /* 0069fd1b: je 0x69fd77 */ if (fZ) goto L_0069fd77;
L_0069fd1d:; BB(0x0069fd1d);
    /* 0069fd1d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd1e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69fd23u); f_007b4d18();
    /* 0069fd23: mov ecx, eax */ r_ecx = r_eax;
    /* 0069fd25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd28: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd2a: jne 0x69fd3f */ if (!fZ) goto L_0069fd3f;
L_0069fd2c:; BB(0x0069fd2c);
    /* 0069fd2c: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0069fd31: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0069fd36: mov word ptr [edi + 0x4f8], ax */ W16((u32)(r_edi+0x4f8u), (u16)r_eax);
    /* 0069fd3d: jmp 0x69fd77 */ goto L_0069fd77;
L_0069fd3f:; BB(0x0069fd3f);
    /* 0069fd3f: movsx eax, word ptr [edi + 0x4fa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x4fau));
    /* 0069fd46: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0069fd49: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd51: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd53: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 0069fd59: mov ecx, dword ptr [eax + edx*4 + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cu));
    /* 0069fd5d: mov dword ptr [edi + 0x820], ecx */ W32((u32)(r_edi+0x820u), r_ecx);
    /* 0069fd63: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0069fd67: mov dword ptr [edi + 0x824], ecx */ W32((u32)(r_edi+0x824u), r_ecx);
    /* 0069fd6d: mov eax, dword ptr [eax + edx*4 + 0x24] */ r_eax = R32((u32)(r_eax+r_edx*4+0x24u));
    /* 0069fd71: mov dword ptr [edi + 0x828], eax */ W32((u32)(r_edi+0x828u), r_eax);
L_0069fd77:; BB(0x0069fd77);
    /* 0069fd77: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd7d: jne 0x69fd8a */ if (!fZ) goto L_0069fd8a;
L_0069fd7f:; BB(0x0069fd7f);
    /* 0069fd7f: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0069fd82: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
    /* 0069fd88: jmp 0x69fda3 */ goto L_0069fda3;
L_0069fd8a:; BB(0x0069fd8a);
    /* 0069fd8a: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0069fd8d: lea eax, [edi + 0x820] */ r_eax = (u32)(r_edi+0x820u);
    /* 0069fd93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd95: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x69fd9au); f_007a90a8();
    /* 0069fd9a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd9d: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
L_0069fda3:; BB(0x0069fda3);
    /* 0069fda3: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069fda6: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fdab: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069fdae: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdb0: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69fdb5u); f_0077774c();
    /* 0069fdb5: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069fdbc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fdbf: jne 0x69fdcf */ if (!fZ) goto L_0069fdcf;
L_0069fdc1:; BB(0x0069fdc1);
    /* 0069fdc1: push 0xab */ { u32 v = 0xabu; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdc6: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdc8: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fdcdu); f_006904cc();
    /* 0069fdcd: jmp 0x69fddb */ goto L_0069fddb;
L_0069fdcf:; BB(0x0069fdcf);
    /* 0069fdcf: push 0xa9 */ { u32 v = 0xa9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdd4: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdd6: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fddbu); f_006904cc();
L_0069fddb:; BB(0x0069fddb);
    /* 0069fddb: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069fde1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069fde3: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069fdea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069fdec: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x69fdefu); call_ind(t); }
    /* 0069fdef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fdf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf3: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdf7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69fdfcu); f_00694390();
    /* 0069fdfc: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069fe02: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fe07: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069fe0d: mov ecx, esi */ r_ecx = r_esi;
    /* 0069fe0f: call 0x6a8248 */ r_esp -= 4; W32(r_esp, 0x69fe14u); f_006a8248();
    /* 0069fe14: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069fe18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe19: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fe1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe1d: call 0x67e0b0 */ r_esp -= 4; W32(r_esp, 0x69fe22u); f_0067e0b0();
    /* 0069fe22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069fe25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069fe26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069fe27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069fe28: ret  */ FN_RET(0x0069fc78); r_esp += 4; return;
}

void f_0069fc86(void)
{
    FN_ENTER(0x0069fc86);
    /* 0069fc86: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fc88: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fc8a: call 0x69ef04 */ r_esp -= 4; W32(r_esp, 0x69fc8fu); f_0069ef04();
    /* 0069fc8f: jmp 0x69fd08 */ goto L_0069fd08;
L_0069fd08:; BB(0x0069fd08);
    /* 0069fd08: movzx ebx, word ptr [edi + 0x4f8] */ r_ebx = (u32)R16((u32)(r_edi+0x4f8u));
    /* 0069fd0f: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd15: lea esi, [edi + 0x4e4] */ r_esi = (u32)(r_edi+0x4e4u);
    /* 0069fd1b: je 0x69fd77 */ if (fZ) goto L_0069fd77;
L_0069fd1d:; BB(0x0069fd1d);
    /* 0069fd1d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd1e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69fd23u); f_007b4d18();
    /* 0069fd23: mov ecx, eax */ r_ecx = r_eax;
    /* 0069fd25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd28: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd2a: jne 0x69fd3f */ if (!fZ) goto L_0069fd3f;
L_0069fd2c:; BB(0x0069fd2c);
    /* 0069fd2c: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0069fd31: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0069fd36: mov word ptr [edi + 0x4f8], ax */ W16((u32)(r_edi+0x4f8u), (u16)r_eax);
    /* 0069fd3d: jmp 0x69fd77 */ goto L_0069fd77;
L_0069fd3f:; BB(0x0069fd3f);
    /* 0069fd3f: movsx eax, word ptr [edi + 0x4fa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x4fau));
    /* 0069fd46: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0069fd49: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd51: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd53: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 0069fd59: mov ecx, dword ptr [eax + edx*4 + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cu));
    /* 0069fd5d: mov dword ptr [edi + 0x820], ecx */ W32((u32)(r_edi+0x820u), r_ecx);
    /* 0069fd63: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0069fd67: mov dword ptr [edi + 0x824], ecx */ W32((u32)(r_edi+0x824u), r_ecx);
    /* 0069fd6d: mov eax, dword ptr [eax + edx*4 + 0x24] */ r_eax = R32((u32)(r_eax+r_edx*4+0x24u));
    /* 0069fd71: mov dword ptr [edi + 0x828], eax */ W32((u32)(r_edi+0x828u), r_eax);
L_0069fd77:; BB(0x0069fd77);
    /* 0069fd77: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd7d: jne 0x69fd8a */ if (!fZ) goto L_0069fd8a;
L_0069fd7f:; BB(0x0069fd7f);
    /* 0069fd7f: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0069fd82: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
    /* 0069fd88: jmp 0x69fda3 */ goto L_0069fda3;
L_0069fd8a:; BB(0x0069fd8a);
    /* 0069fd8a: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0069fd8d: lea eax, [edi + 0x820] */ r_eax = (u32)(r_edi+0x820u);
    /* 0069fd93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd95: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x69fd9au); f_007a90a8();
    /* 0069fd9a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd9d: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
L_0069fda3:; BB(0x0069fda3);
    /* 0069fda3: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069fda6: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fdab: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069fdae: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdb0: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69fdb5u); f_0077774c();
    /* 0069fdb5: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069fdbc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fdbf: jne 0x69fdcf */ if (!fZ) goto L_0069fdcf;
L_0069fdc1:; BB(0x0069fdc1);
    /* 0069fdc1: push 0xab */ { u32 v = 0xabu; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdc6: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdc8: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fdcdu); f_006904cc();
    /* 0069fdcd: jmp 0x69fddb */ goto L_0069fddb;
L_0069fdcf:; BB(0x0069fdcf);
    /* 0069fdcf: push 0xa9 */ { u32 v = 0xa9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdd4: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdd6: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fddbu); f_006904cc();
L_0069fddb:; BB(0x0069fddb);
    /* 0069fddb: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069fde1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069fde3: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069fdea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069fdec: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x69fdefu); call_ind(t); }
    /* 0069fdef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fdf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf3: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdf7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69fdfcu); f_00694390();
    /* 0069fdfc: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069fe02: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fe07: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069fe0d: mov ecx, esi */ r_ecx = r_esi;
    /* 0069fe0f: call 0x6a8248 */ r_esp -= 4; W32(r_esp, 0x69fe14u); f_006a8248();
    /* 0069fe14: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069fe18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe19: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fe1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe1d: call 0x67e0b0 */ r_esp -= 4; W32(r_esp, 0x69fe22u); f_0067e0b0();
    /* 0069fe22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069fe25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069fe26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069fe27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069fe28: ret  */ FN_RET(0x0069fc86); r_esp += 4; return;
}

void f_0069fc91(void)
{
    FN_ENTER(0x0069fc91);
    /* 0069fc91: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fc93: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fc95: call 0x69f148 */ r_esp -= 4; W32(r_esp, 0x69fc9au); f_0069f148();
    /* 0069fc9a: jmp 0x69fd08 */ goto L_0069fd08;
L_0069fd08:; BB(0x0069fd08);
    /* 0069fd08: movzx ebx, word ptr [edi + 0x4f8] */ r_ebx = (u32)R16((u32)(r_edi+0x4f8u));
    /* 0069fd0f: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd15: lea esi, [edi + 0x4e4] */ r_esi = (u32)(r_edi+0x4e4u);
    /* 0069fd1b: je 0x69fd77 */ if (fZ) goto L_0069fd77;
L_0069fd1d:; BB(0x0069fd1d);
    /* 0069fd1d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd1e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69fd23u); f_007b4d18();
    /* 0069fd23: mov ecx, eax */ r_ecx = r_eax;
    /* 0069fd25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd28: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd2a: jne 0x69fd3f */ if (!fZ) goto L_0069fd3f;
L_0069fd2c:; BB(0x0069fd2c);
    /* 0069fd2c: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0069fd31: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0069fd36: mov word ptr [edi + 0x4f8], ax */ W16((u32)(r_edi+0x4f8u), (u16)r_eax);
    /* 0069fd3d: jmp 0x69fd77 */ goto L_0069fd77;
L_0069fd3f:; BB(0x0069fd3f);
    /* 0069fd3f: movsx eax, word ptr [edi + 0x4fa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x4fau));
    /* 0069fd46: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0069fd49: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd51: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd53: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 0069fd59: mov ecx, dword ptr [eax + edx*4 + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cu));
    /* 0069fd5d: mov dword ptr [edi + 0x820], ecx */ W32((u32)(r_edi+0x820u), r_ecx);
    /* 0069fd63: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0069fd67: mov dword ptr [edi + 0x824], ecx */ W32((u32)(r_edi+0x824u), r_ecx);
    /* 0069fd6d: mov eax, dword ptr [eax + edx*4 + 0x24] */ r_eax = R32((u32)(r_eax+r_edx*4+0x24u));
    /* 0069fd71: mov dword ptr [edi + 0x828], eax */ W32((u32)(r_edi+0x828u), r_eax);
L_0069fd77:; BB(0x0069fd77);
    /* 0069fd77: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd7d: jne 0x69fd8a */ if (!fZ) goto L_0069fd8a;
L_0069fd7f:; BB(0x0069fd7f);
    /* 0069fd7f: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0069fd82: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
    /* 0069fd88: jmp 0x69fda3 */ goto L_0069fda3;
L_0069fd8a:; BB(0x0069fd8a);
    /* 0069fd8a: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0069fd8d: lea eax, [edi + 0x820] */ r_eax = (u32)(r_edi+0x820u);
    /* 0069fd93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd95: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x69fd9au); f_007a90a8();
    /* 0069fd9a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd9d: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
L_0069fda3:; BB(0x0069fda3);
    /* 0069fda3: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069fda6: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fdab: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069fdae: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdb0: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69fdb5u); f_0077774c();
    /* 0069fdb5: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069fdbc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fdbf: jne 0x69fdcf */ if (!fZ) goto L_0069fdcf;
L_0069fdc1:; BB(0x0069fdc1);
    /* 0069fdc1: push 0xab */ { u32 v = 0xabu; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdc6: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdc8: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fdcdu); f_006904cc();
    /* 0069fdcd: jmp 0x69fddb */ goto L_0069fddb;
L_0069fdcf:; BB(0x0069fdcf);
    /* 0069fdcf: push 0xa9 */ { u32 v = 0xa9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdd4: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdd6: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fddbu); f_006904cc();
L_0069fddb:; BB(0x0069fddb);
    /* 0069fddb: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069fde1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069fde3: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069fdea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069fdec: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x69fdefu); call_ind(t); }
    /* 0069fdef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fdf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf3: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdf7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69fdfcu); f_00694390();
    /* 0069fdfc: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069fe02: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fe07: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069fe0d: mov ecx, esi */ r_ecx = r_esi;
    /* 0069fe0f: call 0x6a8248 */ r_esp -= 4; W32(r_esp, 0x69fe14u); f_006a8248();
    /* 0069fe14: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069fe18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe19: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fe1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe1d: call 0x67e0b0 */ r_esp -= 4; W32(r_esp, 0x69fe22u); f_0067e0b0();
    /* 0069fe22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069fe25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069fe26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069fe27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069fe28: ret  */ FN_RET(0x0069fc91); r_esp += 4; return;
}

void f_0069fc9c(void)
{
    FN_ENTER(0x0069fc9c);
    /* 0069fc9c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fc9e: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fca0: call 0x69f384 */ r_esp -= 4; W32(r_esp, 0x69fca5u); f_0069f384();
    /* 0069fca5: jmp 0x69fd08 */ goto L_0069fd08;
L_0069fd08:; BB(0x0069fd08);
    /* 0069fd08: movzx ebx, word ptr [edi + 0x4f8] */ r_ebx = (u32)R16((u32)(r_edi+0x4f8u));
    /* 0069fd0f: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd15: lea esi, [edi + 0x4e4] */ r_esi = (u32)(r_edi+0x4e4u);
    /* 0069fd1b: je 0x69fd77 */ if (fZ) goto L_0069fd77;
L_0069fd1d:; BB(0x0069fd1d);
    /* 0069fd1d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd1e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69fd23u); f_007b4d18();
    /* 0069fd23: mov ecx, eax */ r_ecx = r_eax;
    /* 0069fd25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd28: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd2a: jne 0x69fd3f */ if (!fZ) goto L_0069fd3f;
L_0069fd2c:; BB(0x0069fd2c);
    /* 0069fd2c: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0069fd31: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0069fd36: mov word ptr [edi + 0x4f8], ax */ W16((u32)(r_edi+0x4f8u), (u16)r_eax);
    /* 0069fd3d: jmp 0x69fd77 */ goto L_0069fd77;
L_0069fd3f:; BB(0x0069fd3f);
    /* 0069fd3f: movsx eax, word ptr [edi + 0x4fa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x4fau));
    /* 0069fd46: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0069fd49: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd51: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd53: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 0069fd59: mov ecx, dword ptr [eax + edx*4 + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cu));
    /* 0069fd5d: mov dword ptr [edi + 0x820], ecx */ W32((u32)(r_edi+0x820u), r_ecx);
    /* 0069fd63: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0069fd67: mov dword ptr [edi + 0x824], ecx */ W32((u32)(r_edi+0x824u), r_ecx);
    /* 0069fd6d: mov eax, dword ptr [eax + edx*4 + 0x24] */ r_eax = R32((u32)(r_eax+r_edx*4+0x24u));
    /* 0069fd71: mov dword ptr [edi + 0x828], eax */ W32((u32)(r_edi+0x828u), r_eax);
L_0069fd77:; BB(0x0069fd77);
    /* 0069fd77: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd7d: jne 0x69fd8a */ if (!fZ) goto L_0069fd8a;
L_0069fd7f:; BB(0x0069fd7f);
    /* 0069fd7f: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0069fd82: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
    /* 0069fd88: jmp 0x69fda3 */ goto L_0069fda3;
L_0069fd8a:; BB(0x0069fd8a);
    /* 0069fd8a: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0069fd8d: lea eax, [edi + 0x820] */ r_eax = (u32)(r_edi+0x820u);
    /* 0069fd93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd95: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x69fd9au); f_007a90a8();
    /* 0069fd9a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd9d: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
L_0069fda3:; BB(0x0069fda3);
    /* 0069fda3: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069fda6: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fdab: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069fdae: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdb0: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69fdb5u); f_0077774c();
    /* 0069fdb5: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069fdbc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fdbf: jne 0x69fdcf */ if (!fZ) goto L_0069fdcf;
L_0069fdc1:; BB(0x0069fdc1);
    /* 0069fdc1: push 0xab */ { u32 v = 0xabu; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdc6: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdc8: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fdcdu); f_006904cc();
    /* 0069fdcd: jmp 0x69fddb */ goto L_0069fddb;
L_0069fdcf:; BB(0x0069fdcf);
    /* 0069fdcf: push 0xa9 */ { u32 v = 0xa9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdd4: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdd6: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fddbu); f_006904cc();
L_0069fddb:; BB(0x0069fddb);
    /* 0069fddb: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069fde1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069fde3: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069fdea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069fdec: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x69fdefu); call_ind(t); }
    /* 0069fdef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fdf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf3: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdf7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69fdfcu); f_00694390();
    /* 0069fdfc: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069fe02: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fe07: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069fe0d: mov ecx, esi */ r_ecx = r_esi;
    /* 0069fe0f: call 0x6a8248 */ r_esp -= 4; W32(r_esp, 0x69fe14u); f_006a8248();
    /* 0069fe14: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069fe18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe19: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fe1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe1d: call 0x67e0b0 */ r_esp -= 4; W32(r_esp, 0x69fe22u); f_0067e0b0();
    /* 0069fe22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069fe25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069fe26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069fe27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069fe28: ret  */ FN_RET(0x0069fc9c); r_esp += 4; return;
}

void f_0069fca7(void)
{
    FN_ENTER(0x0069fca7);
    /* 0069fca7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fca9: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fcab: call 0x69f648 */ r_esp -= 4; W32(r_esp, 0x69fcb0u); f_0069f648();
    /* 0069fcb0: jmp 0x69fd08 */ goto L_0069fd08;
L_0069fd08:; BB(0x0069fd08);
    /* 0069fd08: movzx ebx, word ptr [edi + 0x4f8] */ r_ebx = (u32)R16((u32)(r_edi+0x4f8u));
    /* 0069fd0f: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd15: lea esi, [edi + 0x4e4] */ r_esi = (u32)(r_edi+0x4e4u);
    /* 0069fd1b: je 0x69fd77 */ if (fZ) goto L_0069fd77;
L_0069fd1d:; BB(0x0069fd1d);
    /* 0069fd1d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd1e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69fd23u); f_007b4d18();
    /* 0069fd23: mov ecx, eax */ r_ecx = r_eax;
    /* 0069fd25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd28: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd2a: jne 0x69fd3f */ if (!fZ) goto L_0069fd3f;
L_0069fd2c:; BB(0x0069fd2c);
    /* 0069fd2c: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0069fd31: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0069fd36: mov word ptr [edi + 0x4f8], ax */ W16((u32)(r_edi+0x4f8u), (u16)r_eax);
    /* 0069fd3d: jmp 0x69fd77 */ goto L_0069fd77;
L_0069fd3f:; BB(0x0069fd3f);
    /* 0069fd3f: movsx eax, word ptr [edi + 0x4fa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x4fau));
    /* 0069fd46: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0069fd49: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd51: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd53: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 0069fd59: mov ecx, dword ptr [eax + edx*4 + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cu));
    /* 0069fd5d: mov dword ptr [edi + 0x820], ecx */ W32((u32)(r_edi+0x820u), r_ecx);
    /* 0069fd63: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0069fd67: mov dword ptr [edi + 0x824], ecx */ W32((u32)(r_edi+0x824u), r_ecx);
    /* 0069fd6d: mov eax, dword ptr [eax + edx*4 + 0x24] */ r_eax = R32((u32)(r_eax+r_edx*4+0x24u));
    /* 0069fd71: mov dword ptr [edi + 0x828], eax */ W32((u32)(r_edi+0x828u), r_eax);
L_0069fd77:; BB(0x0069fd77);
    /* 0069fd77: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd7d: jne 0x69fd8a */ if (!fZ) goto L_0069fd8a;
L_0069fd7f:; BB(0x0069fd7f);
    /* 0069fd7f: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0069fd82: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
    /* 0069fd88: jmp 0x69fda3 */ goto L_0069fda3;
L_0069fd8a:; BB(0x0069fd8a);
    /* 0069fd8a: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0069fd8d: lea eax, [edi + 0x820] */ r_eax = (u32)(r_edi+0x820u);
    /* 0069fd93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd95: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x69fd9au); f_007a90a8();
    /* 0069fd9a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd9d: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
L_0069fda3:; BB(0x0069fda3);
    /* 0069fda3: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069fda6: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fdab: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069fdae: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdb0: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69fdb5u); f_0077774c();
    /* 0069fdb5: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069fdbc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fdbf: jne 0x69fdcf */ if (!fZ) goto L_0069fdcf;
L_0069fdc1:; BB(0x0069fdc1);
    /* 0069fdc1: push 0xab */ { u32 v = 0xabu; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdc6: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdc8: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fdcdu); f_006904cc();
    /* 0069fdcd: jmp 0x69fddb */ goto L_0069fddb;
L_0069fdcf:; BB(0x0069fdcf);
    /* 0069fdcf: push 0xa9 */ { u32 v = 0xa9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdd4: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdd6: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fddbu); f_006904cc();
L_0069fddb:; BB(0x0069fddb);
    /* 0069fddb: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069fde1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069fde3: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069fdea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069fdec: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x69fdefu); call_ind(t); }
    /* 0069fdef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fdf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf3: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdf7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69fdfcu); f_00694390();
    /* 0069fdfc: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069fe02: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fe07: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069fe0d: mov ecx, esi */ r_ecx = r_esi;
    /* 0069fe0f: call 0x6a8248 */ r_esp -= 4; W32(r_esp, 0x69fe14u); f_006a8248();
    /* 0069fe14: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069fe18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe19: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fe1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe1d: call 0x67e0b0 */ r_esp -= 4; W32(r_esp, 0x69fe22u); f_0067e0b0();
    /* 0069fe22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069fe25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069fe26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069fe27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069fe28: ret  */ FN_RET(0x0069fca7); r_esp += 4; return;
}

void f_0069fcb2(void)
{
    FN_ENTER(0x0069fcb2);
    /* 0069fcb2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fcb4: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fcb6: call 0x69fe2c */ r_esp -= 4; W32(r_esp, 0x69fcbbu); f_0069fe2c();
    /* 0069fcbb: jmp 0x69fd08 */ goto L_0069fd08;
L_0069fd08:; BB(0x0069fd08);
    /* 0069fd08: movzx ebx, word ptr [edi + 0x4f8] */ r_ebx = (u32)R16((u32)(r_edi+0x4f8u));
    /* 0069fd0f: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd15: lea esi, [edi + 0x4e4] */ r_esi = (u32)(r_edi+0x4e4u);
    /* 0069fd1b: je 0x69fd77 */ if (fZ) goto L_0069fd77;
L_0069fd1d:; BB(0x0069fd1d);
    /* 0069fd1d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd1e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69fd23u); f_007b4d18();
    /* 0069fd23: mov ecx, eax */ r_ecx = r_eax;
    /* 0069fd25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd28: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd2a: jne 0x69fd3f */ if (!fZ) goto L_0069fd3f;
L_0069fd2c:; BB(0x0069fd2c);
    /* 0069fd2c: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0069fd31: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0069fd36: mov word ptr [edi + 0x4f8], ax */ W16((u32)(r_edi+0x4f8u), (u16)r_eax);
    /* 0069fd3d: jmp 0x69fd77 */ goto L_0069fd77;
L_0069fd3f:; BB(0x0069fd3f);
    /* 0069fd3f: movsx eax, word ptr [edi + 0x4fa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x4fau));
    /* 0069fd46: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0069fd49: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd51: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd53: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 0069fd59: mov ecx, dword ptr [eax + edx*4 + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cu));
    /* 0069fd5d: mov dword ptr [edi + 0x820], ecx */ W32((u32)(r_edi+0x820u), r_ecx);
    /* 0069fd63: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0069fd67: mov dword ptr [edi + 0x824], ecx */ W32((u32)(r_edi+0x824u), r_ecx);
    /* 0069fd6d: mov eax, dword ptr [eax + edx*4 + 0x24] */ r_eax = R32((u32)(r_eax+r_edx*4+0x24u));
    /* 0069fd71: mov dword ptr [edi + 0x828], eax */ W32((u32)(r_edi+0x828u), r_eax);
L_0069fd77:; BB(0x0069fd77);
    /* 0069fd77: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd7d: jne 0x69fd8a */ if (!fZ) goto L_0069fd8a;
L_0069fd7f:; BB(0x0069fd7f);
    /* 0069fd7f: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0069fd82: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
    /* 0069fd88: jmp 0x69fda3 */ goto L_0069fda3;
L_0069fd8a:; BB(0x0069fd8a);
    /* 0069fd8a: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0069fd8d: lea eax, [edi + 0x820] */ r_eax = (u32)(r_edi+0x820u);
    /* 0069fd93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd95: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x69fd9au); f_007a90a8();
    /* 0069fd9a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd9d: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
L_0069fda3:; BB(0x0069fda3);
    /* 0069fda3: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069fda6: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fdab: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069fdae: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdb0: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69fdb5u); f_0077774c();
    /* 0069fdb5: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069fdbc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fdbf: jne 0x69fdcf */ if (!fZ) goto L_0069fdcf;
L_0069fdc1:; BB(0x0069fdc1);
    /* 0069fdc1: push 0xab */ { u32 v = 0xabu; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdc6: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdc8: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fdcdu); f_006904cc();
    /* 0069fdcd: jmp 0x69fddb */ goto L_0069fddb;
L_0069fdcf:; BB(0x0069fdcf);
    /* 0069fdcf: push 0xa9 */ { u32 v = 0xa9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdd4: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdd6: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fddbu); f_006904cc();
L_0069fddb:; BB(0x0069fddb);
    /* 0069fddb: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069fde1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069fde3: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069fdea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069fdec: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x69fdefu); call_ind(t); }
    /* 0069fdef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fdf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf3: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdf7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69fdfcu); f_00694390();
    /* 0069fdfc: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069fe02: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fe07: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069fe0d: mov ecx, esi */ r_ecx = r_esi;
    /* 0069fe0f: call 0x6a8248 */ r_esp -= 4; W32(r_esp, 0x69fe14u); f_006a8248();
    /* 0069fe14: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069fe18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe19: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fe1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe1d: call 0x67e0b0 */ r_esp -= 4; W32(r_esp, 0x69fe22u); f_0067e0b0();
    /* 0069fe22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069fe25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069fe26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069fe27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069fe28: ret  */ FN_RET(0x0069fcb2); r_esp += 4; return;
}

void f_0069fcbd(void)
{
    FN_ENTER(0x0069fcbd);
    /* 0069fcbd: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fcbf: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fcc1: call 0x6a0624 */ r_esp -= 4; W32(r_esp, 0x69fcc6u); f_006a0624();
    /* 0069fcc6: jmp 0x69fd08 */ goto L_0069fd08;
L_0069fd08:; BB(0x0069fd08);
    /* 0069fd08: movzx ebx, word ptr [edi + 0x4f8] */ r_ebx = (u32)R16((u32)(r_edi+0x4f8u));
    /* 0069fd0f: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd15: lea esi, [edi + 0x4e4] */ r_esi = (u32)(r_edi+0x4e4u);
    /* 0069fd1b: je 0x69fd77 */ if (fZ) goto L_0069fd77;
L_0069fd1d:; BB(0x0069fd1d);
    /* 0069fd1d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd1e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69fd23u); f_007b4d18();
    /* 0069fd23: mov ecx, eax */ r_ecx = r_eax;
    /* 0069fd25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd28: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd2a: jne 0x69fd3f */ if (!fZ) goto L_0069fd3f;
L_0069fd2c:; BB(0x0069fd2c);
    /* 0069fd2c: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0069fd31: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0069fd36: mov word ptr [edi + 0x4f8], ax */ W16((u32)(r_edi+0x4f8u), (u16)r_eax);
    /* 0069fd3d: jmp 0x69fd77 */ goto L_0069fd77;
L_0069fd3f:; BB(0x0069fd3f);
    /* 0069fd3f: movsx eax, word ptr [edi + 0x4fa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x4fau));
    /* 0069fd46: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0069fd49: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd51: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd53: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 0069fd59: mov ecx, dword ptr [eax + edx*4 + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cu));
    /* 0069fd5d: mov dword ptr [edi + 0x820], ecx */ W32((u32)(r_edi+0x820u), r_ecx);
    /* 0069fd63: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0069fd67: mov dword ptr [edi + 0x824], ecx */ W32((u32)(r_edi+0x824u), r_ecx);
    /* 0069fd6d: mov eax, dword ptr [eax + edx*4 + 0x24] */ r_eax = R32((u32)(r_eax+r_edx*4+0x24u));
    /* 0069fd71: mov dword ptr [edi + 0x828], eax */ W32((u32)(r_edi+0x828u), r_eax);
L_0069fd77:; BB(0x0069fd77);
    /* 0069fd77: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd7d: jne 0x69fd8a */ if (!fZ) goto L_0069fd8a;
L_0069fd7f:; BB(0x0069fd7f);
    /* 0069fd7f: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0069fd82: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
    /* 0069fd88: jmp 0x69fda3 */ goto L_0069fda3;
L_0069fd8a:; BB(0x0069fd8a);
    /* 0069fd8a: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0069fd8d: lea eax, [edi + 0x820] */ r_eax = (u32)(r_edi+0x820u);
    /* 0069fd93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd95: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x69fd9au); f_007a90a8();
    /* 0069fd9a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd9d: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
L_0069fda3:; BB(0x0069fda3);
    /* 0069fda3: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069fda6: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fdab: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069fdae: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdb0: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69fdb5u); f_0077774c();
    /* 0069fdb5: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069fdbc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fdbf: jne 0x69fdcf */ if (!fZ) goto L_0069fdcf;
L_0069fdc1:; BB(0x0069fdc1);
    /* 0069fdc1: push 0xab */ { u32 v = 0xabu; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdc6: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdc8: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fdcdu); f_006904cc();
    /* 0069fdcd: jmp 0x69fddb */ goto L_0069fddb;
L_0069fdcf:; BB(0x0069fdcf);
    /* 0069fdcf: push 0xa9 */ { u32 v = 0xa9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdd4: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdd6: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fddbu); f_006904cc();
L_0069fddb:; BB(0x0069fddb);
    /* 0069fddb: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069fde1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069fde3: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069fdea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069fdec: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x69fdefu); call_ind(t); }
    /* 0069fdef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fdf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf3: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdf7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69fdfcu); f_00694390();
    /* 0069fdfc: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069fe02: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fe07: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069fe0d: mov ecx, esi */ r_ecx = r_esi;
    /* 0069fe0f: call 0x6a8248 */ r_esp -= 4; W32(r_esp, 0x69fe14u); f_006a8248();
    /* 0069fe14: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069fe18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe19: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fe1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe1d: call 0x67e0b0 */ r_esp -= 4; W32(r_esp, 0x69fe22u); f_0067e0b0();
    /* 0069fe22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069fe25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069fe26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069fe27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069fe28: ret  */ FN_RET(0x0069fcbd); r_esp += 4; return;
}

void f_0069fcc8(void)
{
    FN_ENTER(0x0069fcc8);
    /* 0069fcc8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fcca: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fccc: call 0x6a0994 */ r_esp -= 4; W32(r_esp, 0x69fcd1u); f_006a0994();
    /* 0069fcd1: jmp 0x69fd08 */ goto L_0069fd08;
L_0069fd08:; BB(0x0069fd08);
    /* 0069fd08: movzx ebx, word ptr [edi + 0x4f8] */ r_ebx = (u32)R16((u32)(r_edi+0x4f8u));
    /* 0069fd0f: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd15: lea esi, [edi + 0x4e4] */ r_esi = (u32)(r_edi+0x4e4u);
    /* 0069fd1b: je 0x69fd77 */ if (fZ) goto L_0069fd77;
L_0069fd1d:; BB(0x0069fd1d);
    /* 0069fd1d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd1e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69fd23u); f_007b4d18();
    /* 0069fd23: mov ecx, eax */ r_ecx = r_eax;
    /* 0069fd25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd28: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd2a: jne 0x69fd3f */ if (!fZ) goto L_0069fd3f;
L_0069fd2c:; BB(0x0069fd2c);
    /* 0069fd2c: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0069fd31: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0069fd36: mov word ptr [edi + 0x4f8], ax */ W16((u32)(r_edi+0x4f8u), (u16)r_eax);
    /* 0069fd3d: jmp 0x69fd77 */ goto L_0069fd77;
L_0069fd3f:; BB(0x0069fd3f);
    /* 0069fd3f: movsx eax, word ptr [edi + 0x4fa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x4fau));
    /* 0069fd46: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0069fd49: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd51: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd53: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 0069fd59: mov ecx, dword ptr [eax + edx*4 + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cu));
    /* 0069fd5d: mov dword ptr [edi + 0x820], ecx */ W32((u32)(r_edi+0x820u), r_ecx);
    /* 0069fd63: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0069fd67: mov dword ptr [edi + 0x824], ecx */ W32((u32)(r_edi+0x824u), r_ecx);
    /* 0069fd6d: mov eax, dword ptr [eax + edx*4 + 0x24] */ r_eax = R32((u32)(r_eax+r_edx*4+0x24u));
    /* 0069fd71: mov dword ptr [edi + 0x828], eax */ W32((u32)(r_edi+0x828u), r_eax);
L_0069fd77:; BB(0x0069fd77);
    /* 0069fd77: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd7d: jne 0x69fd8a */ if (!fZ) goto L_0069fd8a;
L_0069fd7f:; BB(0x0069fd7f);
    /* 0069fd7f: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0069fd82: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
    /* 0069fd88: jmp 0x69fda3 */ goto L_0069fda3;
L_0069fd8a:; BB(0x0069fd8a);
    /* 0069fd8a: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0069fd8d: lea eax, [edi + 0x820] */ r_eax = (u32)(r_edi+0x820u);
    /* 0069fd93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd95: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x69fd9au); f_007a90a8();
    /* 0069fd9a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd9d: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
L_0069fda3:; BB(0x0069fda3);
    /* 0069fda3: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069fda6: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fdab: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069fdae: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdb0: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69fdb5u); f_0077774c();
    /* 0069fdb5: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069fdbc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fdbf: jne 0x69fdcf */ if (!fZ) goto L_0069fdcf;
L_0069fdc1:; BB(0x0069fdc1);
    /* 0069fdc1: push 0xab */ { u32 v = 0xabu; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdc6: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdc8: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fdcdu); f_006904cc();
    /* 0069fdcd: jmp 0x69fddb */ goto L_0069fddb;
L_0069fdcf:; BB(0x0069fdcf);
    /* 0069fdcf: push 0xa9 */ { u32 v = 0xa9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdd4: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdd6: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fddbu); f_006904cc();
L_0069fddb:; BB(0x0069fddb);
    /* 0069fddb: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069fde1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069fde3: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069fdea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069fdec: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x69fdefu); call_ind(t); }
    /* 0069fdef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fdf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf3: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdf7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69fdfcu); f_00694390();
    /* 0069fdfc: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069fe02: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fe07: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069fe0d: mov ecx, esi */ r_ecx = r_esi;
    /* 0069fe0f: call 0x6a8248 */ r_esp -= 4; W32(r_esp, 0x69fe14u); f_006a8248();
    /* 0069fe14: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069fe18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe19: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fe1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe1d: call 0x67e0b0 */ r_esp -= 4; W32(r_esp, 0x69fe22u); f_0067e0b0();
    /* 0069fe22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069fe25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069fe26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069fe27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069fe28: ret  */ FN_RET(0x0069fcc8); r_esp += 4; return;
}

void f_0069fcd3(void)
{
    FN_ENTER(0x0069fcd3);
    /* 0069fcd3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fcd5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fcd7: call 0x6a0eb8 */ r_esp -= 4; W32(r_esp, 0x69fcdcu); f_006a0eb8();
    /* 0069fcdc: jmp 0x69fd08 */ goto L_0069fd08;
L_0069fd08:; BB(0x0069fd08);
    /* 0069fd08: movzx ebx, word ptr [edi + 0x4f8] */ r_ebx = (u32)R16((u32)(r_edi+0x4f8u));
    /* 0069fd0f: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd15: lea esi, [edi + 0x4e4] */ r_esi = (u32)(r_edi+0x4e4u);
    /* 0069fd1b: je 0x69fd77 */ if (fZ) goto L_0069fd77;
L_0069fd1d:; BB(0x0069fd1d);
    /* 0069fd1d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd1e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69fd23u); f_007b4d18();
    /* 0069fd23: mov ecx, eax */ r_ecx = r_eax;
    /* 0069fd25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd28: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd2a: jne 0x69fd3f */ if (!fZ) goto L_0069fd3f;
L_0069fd2c:; BB(0x0069fd2c);
    /* 0069fd2c: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0069fd31: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0069fd36: mov word ptr [edi + 0x4f8], ax */ W16((u32)(r_edi+0x4f8u), (u16)r_eax);
    /* 0069fd3d: jmp 0x69fd77 */ goto L_0069fd77;
L_0069fd3f:; BB(0x0069fd3f);
    /* 0069fd3f: movsx eax, word ptr [edi + 0x4fa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x4fau));
    /* 0069fd46: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0069fd49: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd51: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd53: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 0069fd59: mov ecx, dword ptr [eax + edx*4 + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cu));
    /* 0069fd5d: mov dword ptr [edi + 0x820], ecx */ W32((u32)(r_edi+0x820u), r_ecx);
    /* 0069fd63: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0069fd67: mov dword ptr [edi + 0x824], ecx */ W32((u32)(r_edi+0x824u), r_ecx);
    /* 0069fd6d: mov eax, dword ptr [eax + edx*4 + 0x24] */ r_eax = R32((u32)(r_eax+r_edx*4+0x24u));
    /* 0069fd71: mov dword ptr [edi + 0x828], eax */ W32((u32)(r_edi+0x828u), r_eax);
L_0069fd77:; BB(0x0069fd77);
    /* 0069fd77: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd7d: jne 0x69fd8a */ if (!fZ) goto L_0069fd8a;
L_0069fd7f:; BB(0x0069fd7f);
    /* 0069fd7f: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0069fd82: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
    /* 0069fd88: jmp 0x69fda3 */ goto L_0069fda3;
L_0069fd8a:; BB(0x0069fd8a);
    /* 0069fd8a: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0069fd8d: lea eax, [edi + 0x820] */ r_eax = (u32)(r_edi+0x820u);
    /* 0069fd93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd95: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x69fd9au); f_007a90a8();
    /* 0069fd9a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd9d: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
L_0069fda3:; BB(0x0069fda3);
    /* 0069fda3: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069fda6: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fdab: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069fdae: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdb0: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69fdb5u); f_0077774c();
    /* 0069fdb5: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069fdbc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fdbf: jne 0x69fdcf */ if (!fZ) goto L_0069fdcf;
L_0069fdc1:; BB(0x0069fdc1);
    /* 0069fdc1: push 0xab */ { u32 v = 0xabu; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdc6: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdc8: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fdcdu); f_006904cc();
    /* 0069fdcd: jmp 0x69fddb */ goto L_0069fddb;
L_0069fdcf:; BB(0x0069fdcf);
    /* 0069fdcf: push 0xa9 */ { u32 v = 0xa9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdd4: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdd6: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fddbu); f_006904cc();
L_0069fddb:; BB(0x0069fddb);
    /* 0069fddb: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069fde1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069fde3: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069fdea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069fdec: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x69fdefu); call_ind(t); }
    /* 0069fdef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fdf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf3: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdf7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69fdfcu); f_00694390();
    /* 0069fdfc: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069fe02: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fe07: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069fe0d: mov ecx, esi */ r_ecx = r_esi;
    /* 0069fe0f: call 0x6a8248 */ r_esp -= 4; W32(r_esp, 0x69fe14u); f_006a8248();
    /* 0069fe14: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069fe18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe19: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fe1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe1d: call 0x67e0b0 */ r_esp -= 4; W32(r_esp, 0x69fe22u); f_0067e0b0();
    /* 0069fe22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069fe25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069fe26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069fe27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069fe28: ret  */ FN_RET(0x0069fcd3); r_esp += 4; return;
}

void f_0069fcde(void)
{
    FN_ENTER(0x0069fcde);
    /* 0069fcde: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fce0: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fce2: call 0x6a139c */ r_esp -= 4; W32(r_esp, 0x69fce7u); f_006a139c();
    /* 0069fce7: jmp 0x69fd08 */ goto L_0069fd08;
L_0069fd08:; BB(0x0069fd08);
    /* 0069fd08: movzx ebx, word ptr [edi + 0x4f8] */ r_ebx = (u32)R16((u32)(r_edi+0x4f8u));
    /* 0069fd0f: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd15: lea esi, [edi + 0x4e4] */ r_esi = (u32)(r_edi+0x4e4u);
    /* 0069fd1b: je 0x69fd77 */ if (fZ) goto L_0069fd77;
L_0069fd1d:; BB(0x0069fd1d);
    /* 0069fd1d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd1e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69fd23u); f_007b4d18();
    /* 0069fd23: mov ecx, eax */ r_ecx = r_eax;
    /* 0069fd25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd28: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd2a: jne 0x69fd3f */ if (!fZ) goto L_0069fd3f;
L_0069fd2c:; BB(0x0069fd2c);
    /* 0069fd2c: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0069fd31: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0069fd36: mov word ptr [edi + 0x4f8], ax */ W16((u32)(r_edi+0x4f8u), (u16)r_eax);
    /* 0069fd3d: jmp 0x69fd77 */ goto L_0069fd77;
L_0069fd3f:; BB(0x0069fd3f);
    /* 0069fd3f: movsx eax, word ptr [edi + 0x4fa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x4fau));
    /* 0069fd46: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0069fd49: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd51: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd53: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 0069fd59: mov ecx, dword ptr [eax + edx*4 + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cu));
    /* 0069fd5d: mov dword ptr [edi + 0x820], ecx */ W32((u32)(r_edi+0x820u), r_ecx);
    /* 0069fd63: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0069fd67: mov dword ptr [edi + 0x824], ecx */ W32((u32)(r_edi+0x824u), r_ecx);
    /* 0069fd6d: mov eax, dword ptr [eax + edx*4 + 0x24] */ r_eax = R32((u32)(r_eax+r_edx*4+0x24u));
    /* 0069fd71: mov dword ptr [edi + 0x828], eax */ W32((u32)(r_edi+0x828u), r_eax);
L_0069fd77:; BB(0x0069fd77);
    /* 0069fd77: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd7d: jne 0x69fd8a */ if (!fZ) goto L_0069fd8a;
L_0069fd7f:; BB(0x0069fd7f);
    /* 0069fd7f: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0069fd82: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
    /* 0069fd88: jmp 0x69fda3 */ goto L_0069fda3;
L_0069fd8a:; BB(0x0069fd8a);
    /* 0069fd8a: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0069fd8d: lea eax, [edi + 0x820] */ r_eax = (u32)(r_edi+0x820u);
    /* 0069fd93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd95: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x69fd9au); f_007a90a8();
    /* 0069fd9a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd9d: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
L_0069fda3:; BB(0x0069fda3);
    /* 0069fda3: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069fda6: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fdab: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069fdae: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdb0: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69fdb5u); f_0077774c();
    /* 0069fdb5: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069fdbc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fdbf: jne 0x69fdcf */ if (!fZ) goto L_0069fdcf;
L_0069fdc1:; BB(0x0069fdc1);
    /* 0069fdc1: push 0xab */ { u32 v = 0xabu; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdc6: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdc8: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fdcdu); f_006904cc();
    /* 0069fdcd: jmp 0x69fddb */ goto L_0069fddb;
L_0069fdcf:; BB(0x0069fdcf);
    /* 0069fdcf: push 0xa9 */ { u32 v = 0xa9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdd4: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdd6: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fddbu); f_006904cc();
L_0069fddb:; BB(0x0069fddb);
    /* 0069fddb: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069fde1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069fde3: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069fdea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069fdec: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x69fdefu); call_ind(t); }
    /* 0069fdef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fdf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf3: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdf7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69fdfcu); f_00694390();
    /* 0069fdfc: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069fe02: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fe07: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069fe0d: mov ecx, esi */ r_ecx = r_esi;
    /* 0069fe0f: call 0x6a8248 */ r_esp -= 4; W32(r_esp, 0x69fe14u); f_006a8248();
    /* 0069fe14: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069fe18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe19: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fe1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe1d: call 0x67e0b0 */ r_esp -= 4; W32(r_esp, 0x69fe22u); f_0067e0b0();
    /* 0069fe22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069fe25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069fe26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069fe27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069fe28: ret  */ FN_RET(0x0069fcde); r_esp += 4; return;
}

void f_0069fce9(void)
{
    FN_ENTER(0x0069fce9);
    /* 0069fce9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fceb: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fced: call 0x6a1a60 */ r_esp -= 4; W32(r_esp, 0x69fcf2u); f_006a1a60();
    /* 0069fcf2: jmp 0x69fd08 */ goto L_0069fd08;
L_0069fd08:; BB(0x0069fd08);
    /* 0069fd08: movzx ebx, word ptr [edi + 0x4f8] */ r_ebx = (u32)R16((u32)(r_edi+0x4f8u));
    /* 0069fd0f: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd15: lea esi, [edi + 0x4e4] */ r_esi = (u32)(r_edi+0x4e4u);
    /* 0069fd1b: je 0x69fd77 */ if (fZ) goto L_0069fd77;
L_0069fd1d:; BB(0x0069fd1d);
    /* 0069fd1d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd1e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69fd23u); f_007b4d18();
    /* 0069fd23: mov ecx, eax */ r_ecx = r_eax;
    /* 0069fd25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd28: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd2a: jne 0x69fd3f */ if (!fZ) goto L_0069fd3f;
L_0069fd2c:; BB(0x0069fd2c);
    /* 0069fd2c: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0069fd31: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0069fd36: mov word ptr [edi + 0x4f8], ax */ W16((u32)(r_edi+0x4f8u), (u16)r_eax);
    /* 0069fd3d: jmp 0x69fd77 */ goto L_0069fd77;
L_0069fd3f:; BB(0x0069fd3f);
    /* 0069fd3f: movsx eax, word ptr [edi + 0x4fa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x4fau));
    /* 0069fd46: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0069fd49: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd51: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd53: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 0069fd59: mov ecx, dword ptr [eax + edx*4 + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cu));
    /* 0069fd5d: mov dword ptr [edi + 0x820], ecx */ W32((u32)(r_edi+0x820u), r_ecx);
    /* 0069fd63: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0069fd67: mov dword ptr [edi + 0x824], ecx */ W32((u32)(r_edi+0x824u), r_ecx);
    /* 0069fd6d: mov eax, dword ptr [eax + edx*4 + 0x24] */ r_eax = R32((u32)(r_eax+r_edx*4+0x24u));
    /* 0069fd71: mov dword ptr [edi + 0x828], eax */ W32((u32)(r_edi+0x828u), r_eax);
L_0069fd77:; BB(0x0069fd77);
    /* 0069fd77: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd7d: jne 0x69fd8a */ if (!fZ) goto L_0069fd8a;
L_0069fd7f:; BB(0x0069fd7f);
    /* 0069fd7f: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0069fd82: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
    /* 0069fd88: jmp 0x69fda3 */ goto L_0069fda3;
L_0069fd8a:; BB(0x0069fd8a);
    /* 0069fd8a: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0069fd8d: lea eax, [edi + 0x820] */ r_eax = (u32)(r_edi+0x820u);
    /* 0069fd93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd95: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x69fd9au); f_007a90a8();
    /* 0069fd9a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd9d: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
L_0069fda3:; BB(0x0069fda3);
    /* 0069fda3: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069fda6: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fdab: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069fdae: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdb0: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69fdb5u); f_0077774c();
    /* 0069fdb5: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069fdbc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fdbf: jne 0x69fdcf */ if (!fZ) goto L_0069fdcf;
L_0069fdc1:; BB(0x0069fdc1);
    /* 0069fdc1: push 0xab */ { u32 v = 0xabu; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdc6: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdc8: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fdcdu); f_006904cc();
    /* 0069fdcd: jmp 0x69fddb */ goto L_0069fddb;
L_0069fdcf:; BB(0x0069fdcf);
    /* 0069fdcf: push 0xa9 */ { u32 v = 0xa9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdd4: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdd6: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fddbu); f_006904cc();
L_0069fddb:; BB(0x0069fddb);
    /* 0069fddb: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069fde1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069fde3: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069fdea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069fdec: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x69fdefu); call_ind(t); }
    /* 0069fdef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fdf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf3: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdf7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69fdfcu); f_00694390();
    /* 0069fdfc: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069fe02: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fe07: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069fe0d: mov ecx, esi */ r_ecx = r_esi;
    /* 0069fe0f: call 0x6a8248 */ r_esp -= 4; W32(r_esp, 0x69fe14u); f_006a8248();
    /* 0069fe14: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069fe18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe19: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fe1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe1d: call 0x67e0b0 */ r_esp -= 4; W32(r_esp, 0x69fe22u); f_0067e0b0();
    /* 0069fe22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069fe25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069fe26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069fe27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069fe28: ret  */ FN_RET(0x0069fce9); r_esp += 4; return;
}

void f_0069fcf4(void)
{
    FN_ENTER(0x0069fcf4);
    /* 0069fcf4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fcf6: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fcf8: call 0x69b93c */ r_esp -= 4; W32(r_esp, 0x69fcfdu); f_0069b93c();
    /* 0069fcfd: jmp 0x69fd08 */ goto L_0069fd08;
L_0069fd08:; BB(0x0069fd08);
    /* 0069fd08: movzx ebx, word ptr [edi + 0x4f8] */ r_ebx = (u32)R16((u32)(r_edi+0x4f8u));
    /* 0069fd0f: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd15: lea esi, [edi + 0x4e4] */ r_esi = (u32)(r_edi+0x4e4u);
    /* 0069fd1b: je 0x69fd77 */ if (fZ) goto L_0069fd77;
L_0069fd1d:; BB(0x0069fd1d);
    /* 0069fd1d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd1e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69fd23u); f_007b4d18();
    /* 0069fd23: mov ecx, eax */ r_ecx = r_eax;
    /* 0069fd25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd28: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd2a: jne 0x69fd3f */ if (!fZ) goto L_0069fd3f;
L_0069fd2c:; BB(0x0069fd2c);
    /* 0069fd2c: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0069fd31: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0069fd36: mov word ptr [edi + 0x4f8], ax */ W16((u32)(r_edi+0x4f8u), (u16)r_eax);
    /* 0069fd3d: jmp 0x69fd77 */ goto L_0069fd77;
L_0069fd3f:; BB(0x0069fd3f);
    /* 0069fd3f: movsx eax, word ptr [edi + 0x4fa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x4fau));
    /* 0069fd46: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0069fd49: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd51: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd53: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 0069fd59: mov ecx, dword ptr [eax + edx*4 + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cu));
    /* 0069fd5d: mov dword ptr [edi + 0x820], ecx */ W32((u32)(r_edi+0x820u), r_ecx);
    /* 0069fd63: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0069fd67: mov dword ptr [edi + 0x824], ecx */ W32((u32)(r_edi+0x824u), r_ecx);
    /* 0069fd6d: mov eax, dword ptr [eax + edx*4 + 0x24] */ r_eax = R32((u32)(r_eax+r_edx*4+0x24u));
    /* 0069fd71: mov dword ptr [edi + 0x828], eax */ W32((u32)(r_edi+0x828u), r_eax);
L_0069fd77:; BB(0x0069fd77);
    /* 0069fd77: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd7d: jne 0x69fd8a */ if (!fZ) goto L_0069fd8a;
L_0069fd7f:; BB(0x0069fd7f);
    /* 0069fd7f: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0069fd82: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
    /* 0069fd88: jmp 0x69fda3 */ goto L_0069fda3;
L_0069fd8a:; BB(0x0069fd8a);
    /* 0069fd8a: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0069fd8d: lea eax, [edi + 0x820] */ r_eax = (u32)(r_edi+0x820u);
    /* 0069fd93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd95: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x69fd9au); f_007a90a8();
    /* 0069fd9a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd9d: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
L_0069fda3:; BB(0x0069fda3);
    /* 0069fda3: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069fda6: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fdab: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069fdae: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdb0: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69fdb5u); f_0077774c();
    /* 0069fdb5: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069fdbc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fdbf: jne 0x69fdcf */ if (!fZ) goto L_0069fdcf;
L_0069fdc1:; BB(0x0069fdc1);
    /* 0069fdc1: push 0xab */ { u32 v = 0xabu; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdc6: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdc8: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fdcdu); f_006904cc();
    /* 0069fdcd: jmp 0x69fddb */ goto L_0069fddb;
L_0069fdcf:; BB(0x0069fdcf);
    /* 0069fdcf: push 0xa9 */ { u32 v = 0xa9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdd4: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdd6: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fddbu); f_006904cc();
L_0069fddb:; BB(0x0069fddb);
    /* 0069fddb: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069fde1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069fde3: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069fdea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069fdec: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x69fdefu); call_ind(t); }
    /* 0069fdef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fdf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf3: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdf7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69fdfcu); f_00694390();
    /* 0069fdfc: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069fe02: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fe07: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069fe0d: mov ecx, esi */ r_ecx = r_esi;
    /* 0069fe0f: call 0x6a8248 */ r_esp -= 4; W32(r_esp, 0x69fe14u); f_006a8248();
    /* 0069fe14: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069fe18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe19: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fe1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe1d: call 0x67e0b0 */ r_esp -= 4; W32(r_esp, 0x69fe22u); f_0067e0b0();
    /* 0069fe22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069fe25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069fe26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069fe27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069fe28: ret  */ FN_RET(0x0069fcf4); r_esp += 4; return;
}

void f_0069fcff(void)
{
    FN_ENTER(0x0069fcff);
    /* 0069fcff: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd01: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fd03: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x69fd08u); f_006a1ac0();
    /* 0069fd08: movzx ebx, word ptr [edi + 0x4f8] */ r_ebx = (u32)R16((u32)(r_edi+0x4f8u));
    /* 0069fd0f: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd15: lea esi, [edi + 0x4e4] */ r_esi = (u32)(r_edi+0x4e4u);
    /* 0069fd1b: je 0x69fd77 */ if (fZ) goto L_0069fd77;
L_0069fd1d:; BB(0x0069fd1d);
    /* 0069fd1d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd1e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69fd23u); f_007b4d18();
    /* 0069fd23: mov ecx, eax */ r_ecx = r_eax;
    /* 0069fd25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd28: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd2a: jne 0x69fd3f */ if (!fZ) goto L_0069fd3f;
L_0069fd2c:; BB(0x0069fd2c);
    /* 0069fd2c: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0069fd31: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0069fd36: mov word ptr [edi + 0x4f8], ax */ W16((u32)(r_edi+0x4f8u), (u16)r_eax);
    /* 0069fd3d: jmp 0x69fd77 */ goto L_0069fd77;
L_0069fd3f:; BB(0x0069fd3f);
    /* 0069fd3f: movsx eax, word ptr [edi + 0x4fa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x4fau));
    /* 0069fd46: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0069fd49: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd51: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd53: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 0069fd59: mov ecx, dword ptr [eax + edx*4 + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cu));
    /* 0069fd5d: mov dword ptr [edi + 0x820], ecx */ W32((u32)(r_edi+0x820u), r_ecx);
    /* 0069fd63: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0069fd67: mov dword ptr [edi + 0x824], ecx */ W32((u32)(r_edi+0x824u), r_ecx);
    /* 0069fd6d: mov eax, dword ptr [eax + edx*4 + 0x24] */ r_eax = R32((u32)(r_eax+r_edx*4+0x24u));
    /* 0069fd71: mov dword ptr [edi + 0x828], eax */ W32((u32)(r_edi+0x828u), r_eax);
L_0069fd77:; BB(0x0069fd77);
    /* 0069fd77: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd7d: jne 0x69fd8a */ if (!fZ) goto L_0069fd8a;
L_0069fd7f:; BB(0x0069fd7f);
    /* 0069fd7f: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0069fd82: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
    /* 0069fd88: jmp 0x69fda3 */ goto L_0069fda3;
L_0069fd8a:; BB(0x0069fd8a);
    /* 0069fd8a: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0069fd8d: lea eax, [edi + 0x820] */ r_eax = (u32)(r_edi+0x820u);
    /* 0069fd93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd95: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x69fd9au); f_007a90a8();
    /* 0069fd9a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd9d: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
L_0069fda3:; BB(0x0069fda3);
    /* 0069fda3: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069fda6: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fdab: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069fdae: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdb0: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69fdb5u); f_0077774c();
    /* 0069fdb5: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069fdbc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fdbf: jne 0x69fdcf */ if (!fZ) goto L_0069fdcf;
L_0069fdc1:; BB(0x0069fdc1);
    /* 0069fdc1: push 0xab */ { u32 v = 0xabu; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdc6: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdc8: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fdcdu); f_006904cc();
    /* 0069fdcd: jmp 0x69fddb */ goto L_0069fddb;
L_0069fdcf:; BB(0x0069fdcf);
    /* 0069fdcf: push 0xa9 */ { u32 v = 0xa9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdd4: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdd6: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fddbu); f_006904cc();
L_0069fddb:; BB(0x0069fddb);
    /* 0069fddb: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069fde1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069fde3: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069fdea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069fdec: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x69fdefu); call_ind(t); }
    /* 0069fdef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fdf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf3: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdf7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69fdfcu); f_00694390();
    /* 0069fdfc: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069fe02: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fe07: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069fe0d: mov ecx, esi */ r_ecx = r_esi;
    /* 0069fe0f: call 0x6a8248 */ r_esp -= 4; W32(r_esp, 0x69fe14u); f_006a8248();
    /* 0069fe14: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069fe18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe19: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fe1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe1d: call 0x67e0b0 */ r_esp -= 4; W32(r_esp, 0x69fe22u); f_0067e0b0();
    /* 0069fe22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069fe25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069fe26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069fe27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069fe28: ret  */ FN_RET(0x0069fcff); r_esp += 4; return;
}

void f_0069fd08(void)
{
    FN_ENTER(0x0069fd08);
    /* 0069fd08: movzx ebx, word ptr [edi + 0x4f8] */ r_ebx = (u32)R16((u32)(r_edi+0x4f8u));
    /* 0069fd0f: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd15: lea esi, [edi + 0x4e4] */ r_esi = (u32)(r_edi+0x4e4u);
    /* 0069fd1b: je 0x69fd77 */ if (fZ) goto L_0069fd77;
L_0069fd1d:; BB(0x0069fd1d);
    /* 0069fd1d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd1e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x69fd23u); f_007b4d18();
    /* 0069fd23: mov ecx, eax */ r_ecx = r_eax;
    /* 0069fd25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd28: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd2a: jne 0x69fd3f */ if (!fZ) goto L_0069fd3f;
L_0069fd2c:; BB(0x0069fd2c);
    /* 0069fd2c: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0069fd31: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 0069fd36: mov word ptr [edi + 0x4f8], ax */ W16((u32)(r_edi+0x4f8u), (u16)r_eax);
    /* 0069fd3d: jmp 0x69fd77 */ goto L_0069fd77;
L_0069fd3f:; BB(0x0069fd3f);
    /* 0069fd3f: movsx eax, word ptr [edi + 0x4fa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x4fau));
    /* 0069fd46: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0069fd49: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd4f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd51: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069fd53: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 0069fd59: mov ecx, dword ptr [eax + edx*4 + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cu));
    /* 0069fd5d: mov dword ptr [edi + 0x820], ecx */ W32((u32)(r_edi+0x820u), r_ecx);
    /* 0069fd63: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0069fd67: mov dword ptr [edi + 0x824], ecx */ W32((u32)(r_edi+0x824u), r_ecx);
    /* 0069fd6d: mov eax, dword ptr [eax + edx*4 + 0x24] */ r_eax = R32((u32)(r_eax+r_edx*4+0x24u));
    /* 0069fd71: mov dword ptr [edi + 0x828], eax */ W32((u32)(r_edi+0x828u), r_eax);
L_0069fd77:; BB(0x0069fd77);
    /* 0069fd77: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fd7d: jne 0x69fd8a */ if (!fZ) goto L_0069fd8a;
L_0069fd7f:; BB(0x0069fd7f);
    /* 0069fd7f: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0069fd82: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
    /* 0069fd88: jmp 0x69fda3 */ goto L_0069fda3;
L_0069fd8a:; BB(0x0069fd8a);
    /* 0069fd8a: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0069fd8d: lea eax, [edi + 0x820] */ r_eax = (u32)(r_edi+0x820u);
    /* 0069fd93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fd95: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x69fd9au); f_007a90a8();
    /* 0069fd9a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fd9d: mov dword ptr [edi + 0x3fc], eax */ W32((u32)(r_edi+0x3fcu), r_eax);
L_0069fda3:; BB(0x0069fda3);
    /* 0069fda3: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0069fda6: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fdab: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0069fdae: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdb0: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x69fdb5u); f_0077774c();
    /* 0069fdb5: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0069fdbc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fdbf: jne 0x69fdcf */ if (!fZ) goto L_0069fdcf;
L_0069fdc1:; BB(0x0069fdc1);
    /* 0069fdc1: push 0xab */ { u32 v = 0xabu; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdc6: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdc8: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fdcdu); f_006904cc();
    /* 0069fdcd: jmp 0x69fddb */ goto L_0069fddb;
L_0069fdcf:; BB(0x0069fdcf);
    /* 0069fdcf: push 0xa9 */ { u32 v = 0xa9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdd4: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdd6: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x69fddbu); f_006904cc();
L_0069fddb:; BB(0x0069fddb);
    /* 0069fddb: mov ecx, dword ptr [edi + 0x38c] */ r_ecx = R32((u32)(r_edi+0x38cu));
    /* 0069fde1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069fde3: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0069fdea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069fdec: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x69fdefu); call_ind(t); }
    /* 0069fdef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fdf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf3: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0069fdf5: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fdf7: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x69fdfcu); f_00694390();
    /* 0069fdfc: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069fe02: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069fe07: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069fe0d: mov ecx, esi */ r_ecx = r_esi;
    /* 0069fe0f: call 0x6a8248 */ r_esp -= 4; W32(r_esp, 0x69fe14u); f_006a8248();
    /* 0069fe14: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0069fe18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe19: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fe1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe1d: call 0x67e0b0 */ r_esp -= 4; W32(r_esp, 0x69fe22u); f_0067e0b0();
    /* 0069fe22: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069fe25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069fe26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069fe27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069fe28: ret  */ FN_RET(0x0069fd08); r_esp += 4; return;
}

void f_0069fe2c(void) /* sub_69FE2C */
{
    FN_ENTER(0x0069fe2c);
    /* 0069fe2c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe2d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe2e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe2f: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069fe32: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0069fe34: movsx eax, word ptr [esp + 0x50] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x50u));
    /* 0069fe39: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0069fe3c: ja 0x6a0078 */ if ((!fC&&!fZ)) goto L_006a0078;
L_0069fe42:; BB(0x0069fe42);
    /* 0069fe42: mov eax, dword ptr [eax*4 + 0x93d4c4] */ r_eax = R32((u32)(r_eax*4+0x93d4c4u));
    /* 0069fe49: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006a0078:; BB(0x006a0078);
    /* 006a0078: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a007b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a007c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a007d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a007e: ret 4 */ FN_RET(0x0069fe2c); r_esp += 8; return;
}

void f_0069fe4b(void)
{
    FN_ENTER(0x0069fe4b);
    /* 0069fe4b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069fe4d: call 0x6a0084 */ r_esp -= 4; W32(r_esp, 0x69fe52u); f_006a0084();
    /* 0069fe52: jmp 0x6a0078 */ goto L_006a0078;
L_006a0078:; BB(0x006a0078);
    /* 006a0078: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a007b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a007c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a007d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a007e: ret 4 */ FN_RET(0x0069fe4b); r_esp += 8; return;
}

void f_0069fe57(void)
{
    FN_ENTER(0x0069fe57);
    /* 0069fe57: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069fe59: call 0x69b720 */ r_esp -= 4; W32(r_esp, 0x69fe5eu); f_0069b720();
    /* 0069fe5e: jmp 0x6a0078 */ goto L_006a0078;
L_006a0078:; BB(0x006a0078);
    /* 006a0078: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a007b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a007c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a007d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a007e: ret 4 */ FN_RET(0x0069fe57); r_esp += 8; return;
}

void f_0069fe63(void)
{
    FN_ENTER(0x0069fe63);
    /* 0069fe63: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069fe65: call 0x6a2a90 */ r_esp -= 4; W32(r_esp, 0x69fe6au); f_006a2a90();
    /* 0069fe6a: jmp 0x6a0078 */ goto L_006a0078;
L_006a0078:; BB(0x006a0078);
    /* 006a0078: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a007b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a007c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a007d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a007e: ret 4 */ FN_RET(0x0069fe63); r_esp += 8; return;
}

void f_0069fe6f(void)
{
    FN_ENTER(0x0069fe6f);
    /* 0069fe6f: lea edi, [ebp + 0x460] */ r_edi = (u32)(r_ebp+0x460u);
    /* 0069fe75: mov ecx, edi */ r_ecx = r_edi;
    /* 0069fe77: call 0x6acf24 */ r_esp -= 4; W32(r_esp, 0x69fe7cu); f_006acf24();
    /* 0069fe7c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe7d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069fe80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fe81: call 0x6e1a48 */ r_esp -= 4; W32(r_esp, 0x69fe86u); f_006e1a48();
    /* 0069fe86: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fe89: mov ecx, dword ptr [ebp + 0x45c] */ r_ecx = R32((u32)(r_ebp+0x45cu));
    /* 0069fe8f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fe91: je 0x69fea8 */ if (fZ) goto L_0069fea8;
L_0069fe93:; BB(0x0069fe93);
    /* 0069fe93: movzx edx, word ptr [ebp + 0x480] */ r_edx = (u32)R16((u32)(r_ebp+0x480u));
    /* 0069fe9a: movsx eax, word ptr [ebp + 0x482] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x482u));
    /* 0069fea1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fea2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fea3: call 0x7a4118 */ r_esp -= 4; W32(r_esp, 0x69fea8u); f_007a4118();
L_0069fea8:; BB(0x0069fea8);
    /* 0069fea8: mov ecx, edi */ r_ecx = r_edi;
    /* 0069feaa: call 0x6acf24 */ r_esp -= 4; W32(r_esp, 0x69feafu); f_006acf24();
    /* 0069feaf: mov ebx, eax */ r_ebx = r_eax;
    /* 0069feb1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069feb2: mov ecx, edi */ r_ecx = r_edi;
    /* 0069feb4: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x69feb9u); f_006ad17c();
    /* 0069feb9: mov ecx, eax */ r_ecx = r_eax;
    /* 0069febb: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 0069febf: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0069fec2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fec3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069fec4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069fec5: call 0x6ad238 */ r_esp -= 4; W32(r_esp, 0x69fecau); f_006ad238();
    /* 0069feca: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069fecd: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fecf: je 0x69fee1 */ if (fZ) goto L_0069fee1;
L_0069fed1:; BB(0x0069fed1);
    /* 0069fed1: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0069fed8: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069fedb: je 0x6a0078 */ if (fZ) goto L_006a0078;
L_0069fee1:; BB(0x0069fee1);
    /* 0069fee1: mov byte ptr [esp + 8], 0x8d */ W8((u32)(r_esp+0x8u), 0x8du);
    /* 0069fee6: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0069feea: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069feec: mov byte ptr [esp + 0xd], dl */ W8((u32)(r_esp+0xdu), (u8)r_edx);
    /* 0069fef0: mov byte ptr [esp + 9], 2 */ W8((u32)(r_esp+0x9u), 0x2u);
    /* 0069fef5: mov word ptr [esp + 0xe], dx */ W16((u32)(r_esp+0xeu), (u16)r_edx);
    /* 0069fefa: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0069fefe: mov word ptr [esp + 0xa], dx */ W16((u32)(r_esp+0xau), (u16)r_edx);
    /* 0069ff03: movzx edx, byte ptr [esp] */ r_edx = (u32)R8((u32)(r_esp));
    /* 0069ff07: mov byte ptr [esp + 0xc], dl */ W8((u32)(r_esp+0xcu), (u8)r_edx);
    /* 0069ff0b: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x69ff10u); f_008003e0();
    /* 0069ff10: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0069ff14: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069ff16: mov byte ptr [esp + 0x17], dl */ W8((u32)(r_esp+0x17u), (u8)r_edx);
    /* 0069ff1a: mov byte ptr [esp + 0x15], dl */ W8((u32)(r_esp+0x15u), (u8)r_edx);
    /* 0069ff1e: mov edx, 0xa */ r_edx = 0xau;
L_0069ff23:; BB(0x0069ff23);
    /* 0069ff23: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 0069ff28: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 0069ff2b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0069ff2d: mov word ptr [eax + 2], cx */ W16((u32)(r_eax+0x2u), (u16)r_ecx);
    /* 0069ff31: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069ff34: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0069ff37: jne 0x69ff23 */ if (!fZ) goto L_0069ff23;
L_0069ff39:; BB(0x0069ff39);
    /* 0069ff39: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 0069ff3e: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0069ff42: mov word ptr [esp + 0x12], dx */ W16((u32)(r_esp+0x12u), (u16)r_edx);
    /* 0069ff47: mov ecx, edi */ r_ecx = r_edi;
    /* 0069ff49: mov byte ptr [esp + 0x14], bl */ W8((u32)(r_esp+0x14u), (u8)r_ebx);
    /* 0069ff4d: mov byte ptr [esp + 0x10], 0x47 */ W8((u32)(r_esp+0x10u), 0x47u);
    /* 0069ff52: mov byte ptr [esp + 0x16], al */ W8((u32)(r_esp+0x16u), (u8)r_eax);
    /* 0069ff56: mov byte ptr [esp + 0x11], 0xc */ W8((u32)(r_esp+0x11u), 0xcu);
    /* 0069ff5b: call 0x6ad204 */ r_esp -= 4; W32(r_esp, 0x69ff60u); f_006ad204();
    /* 0069ff60: lea ebx, [esp + 0x18] */ r_ebx = (u32)(r_esp+0x18u);
    /* 0069ff64: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069ff67: mov byte ptr [esp + 0x17], al */ W8((u32)(r_esp+0x17u), (u8)r_eax);
    /* 0069ff6b: add ebp, 0x480 */ {  u32 a = r_ebp; u32 b = 0x480u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0069ff71: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0069ff73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069ff75: jle 0x69ffe7 */ if ((fZ||fS!=fO)) goto L_0069ffe7;
L_0069ff77:; BB(0x0069ff77);
    /* 0069ff77: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069ff7a: jl 0x69ffcb */ if ((fS!=fO)) goto L_0069ffcb;
L_0069ff7c:; BB(0x0069ff7c);
    /* 0069ff7c: lea edx, [eax - 5] */ r_edx = (u32)(r_eax+0xfffffffbu);
L_0069ff7f:; BB(0x0069ff7f);
    /* 0069ff7f: movzx edi, word ptr [ebp] */ r_edi = (u32)R16((u32)(r_ebp));
    /* 0069ff83: mov word ptr [ebx], di */ W16((u32)(r_ebx), (u16)r_edi);
    /* 0069ff86: movzx edi, word ptr [ebp + 2] */ r_edi = (u32)R16((u32)(r_ebp+0x2u));
    /* 0069ff8a: mov word ptr [ebx + 2], di */ W16((u32)(r_ebx+0x2u), (u16)r_edi);
    /* 0069ff8e: movzx edi, word ptr [ebp + 4] */ r_edi = (u32)R16((u32)(r_ebp+0x4u));
    /* 0069ff92: mov word ptr [ebx + 4], di */ W16((u32)(r_ebx+0x4u), (u16)r_edi);
    /* 0069ff96: movzx edi, word ptr [ebp + 6] */ r_edi = (u32)R16((u32)(r_ebp+0x6u));
    /* 0069ff9a: mov word ptr [ebx + 6], di */ W16((u32)(r_ebx+0x6u), (u16)r_edi);
    /* 0069ff9e: movzx edi, word ptr [ebp + 8] */ r_edi = (u32)R16((u32)(r_ebp+0x8u));
    /* 0069ffa2: mov word ptr [ebx + 8], di */ W16((u32)(r_ebx+0x8u), (u16)r_edi);
    /* 0069ffa6: movzx edi, word ptr [ebp + 0xa] */ r_edi = (u32)R16((u32)(r_ebp+0xau));
    /* 0069ffaa: mov word ptr [ebx + 0xa], di */ W16((u32)(r_ebx+0xau), (u16)r_edi);
    /* 0069ffae: movzx edi, word ptr [ebp + 0xc] */ r_edi = (u32)R16((u32)(r_ebp+0xcu));
    /* 0069ffb2: mov word ptr [ebx + 0xc], di */ W16((u32)(r_ebx+0xcu), (u16)r_edi);
    /* 0069ffb6: movzx edi, word ptr [ebp + 0xe] */ r_edi = (u32)R16((u32)(r_ebp+0xeu));
    /* 0069ffba: mov word ptr [ebx + 0xe], di */ W16((u32)(r_ebx+0xeu), (u16)r_edi);
    /* 0069ffbe: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069ffc1: add ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0069ffc4: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0069ffc7: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069ffc9: jle 0x69ff7f */ if ((fZ||fS!=fO)) goto L_0069ff7f;
L_0069ffcb:; BB(0x0069ffcb);
    /* 0069ffcb: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 0069ffcf: mov word ptr [ebx], dx */ W16((u32)(r_ebx), (u16)r_edx);
    /* 0069ffd2: movzx edi, word ptr [ebp + 2] */ r_edi = (u32)R16((u32)(r_ebp+0x2u));
    /* 0069ffd6: mov word ptr [ebx + 2], di */ W16((u32)(r_ebx+0x2u), (u16)r_edi);
    /* 0069ffda: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069ffdd: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0069ffe0: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0069ffe3: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069ffe5: jl 0x69ffcb */ if ((fS!=fO)) goto L_0069ffcb;
L_0069ffe7:; BB(0x0069ffe7);
    /* 0069ffe7: movsx ebp, byte ptr [esp + 0x17] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esp+0x17u));
    /* 0069ffec: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 0069fff0: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0069fff2: lea eax, [ebp + ebp + 0x14] */ r_eax = (u32)(r_ebp+r_ebp+0x14u);
    /* 0069fff6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069fff8: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069fffa: add eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069fffd: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006a0000: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006a0003: mov byte ptr [esp + 0x11], al */ W8((u32)(r_esp+0x11u), (u8)r_eax);
    /* 006a0007: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6a000cu); f_008003e0();
    /* 006a000c: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a000f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a0010: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a0011: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a0012: ret 4 */ FN_RET(0x0069fe6f); r_esp += 8; return;
L_006a0078:; BB(0x006a0078);
    /* 006a0078: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a007b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a007c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a007d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a007e: ret 4 */ FN_RET(0x0069fe6f); r_esp += 8; return;
}

