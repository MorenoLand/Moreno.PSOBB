#include "protos.h"

void f_0069efd4(void) /* sub_69EFD4 */
{
    FN_ENTER(0x0069efd4);
    /* 0069efd4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069efd5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0069efd7: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0069efde: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0069efe1: mov dword ptr [ebx + 0x348], 0xc */ W32((u32)(r_ebx+0x348u), 0xcu);
    /* 0069efeb: ja 0x69f116 */ if ((!fC&&!fZ)) goto L_0069f116;
L_0069eff1:; BB(0x0069eff1);
    /* 0069eff1: mov eax, dword ptr [eax*4 + 0x93d280] */ r_eax = R32((u32)(r_eax*4+0x93d280u));
    /* 0069eff8: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
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
    /* 0069f147: ret  */ FN_RET(0x0069efd4); r_esp += 4; return;
}

void f_0069effa(void)
{
    FN_ENTER(0x0069effa);
    /* 0069effa: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069effc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069effe: call 0x69bdf0 */ r_esp -= 4; W32(r_esp, 0x69f003u); f_0069bdf0();
    /* 0069f003: jmp 0x69f116 */ goto L_0069f116;
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
    /* 0069f147: ret  */ FN_RET(0x0069effa); r_esp += 4; return;
}

