#include "protos.h"

void f_0075401f(void)
{
    FN_ENTER(0x0075401f);
    /* 0075401f: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00754021: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00754023: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x754028u); f_00792fe8();
    /* 00754028: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075402b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075402c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075402e: call 0x737ae4 */ r_esp -= 4; W32(r_esp, 0x754033u); f_00737ae4();
    /* 00754033: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00754035: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00754037: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x75403cu); f_00792fe8();
    /* 0075403c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075403f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00754041: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00754042: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00754044: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x754049u); f_00714d34();
    /* 00754049: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0075404b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075404d: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x754052u); f_00792fe8();
    /* 00754052: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00754055: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00754057: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00754058: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075405a: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x75405fu); f_00714d34();
    /* 0075405f: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00754061: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00754063: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x754068u); f_00792fe8();
    /* 00754068: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075406b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0075406d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075406e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00754070: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x754075u); f_00714d34();
    /* 00754075: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00754078: call 0x7be250 */ r_esp -= 4; W32(r_esp, 0x75407du); f_007be250();
    /* 0075407d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075407e: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00754081: jmp 0x75417b */ goto L_0075417b;
L_0075417b:; BB(0x0075417b);
    /* 0075417b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075417c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075417e: call 0x714e5c */ r_esp -= 4; W32(r_esp, 0x754183u); f_00714e5c();
    /* 00754183: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00754185: movzx edx, word ptr [ebx + 0x84] */ r_edx = (u32)R16((u32)(r_ebx+0x84u));
    /* 0075418c: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00754192: mov word ptr [ebx + 0x84], dx */ W16((u32)(r_ebx+0x84u), (u16)r_edx);
    /* 00754199: mov ecx, dword ptr [esi + 0x28] */ r_ecx = R32((u32)(r_esi+0x28u));
    /* 0075419c: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x7541a1u); f_007336fc();
    /* 007541a1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007541a2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007541a5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007541a7: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x7541acu); f_00712624();
    /* 007541ac: mov eax, ebx */ r_eax = r_ebx;
    /* 007541ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007541af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007541b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007541b1: ret 4 */ FN_RET(0x0075401f); r_esp += 8; return;
}

void f_00754086(void)
{
    FN_ENTER(0x00754086);
    /* 00754086: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00754088: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075408a: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x75408fu); f_00792fe8();
    /* 0075408f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00754092: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00754093: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00754095: call 0x737ae4 */ r_esp -= 4; W32(r_esp, 0x75409au); f_00737ae4();
    /* 0075409a: push 0xc4 */ { u32 v = 0xc4u; r_esp -= 4; W32(r_esp, v); }
    /* 0075409f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7540a4u); f_0079317c();
    /* 007540a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007540a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007540a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007540a8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007540aa: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x7540afu); f_00714d34();
    /* 007540af: push 0xc5 */ { u32 v = 0xc5u; r_esp -= 4; W32(r_esp, v); }
    /* 007540b4: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7540b9u); f_0079317c();
    /* 007540b9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007540ba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007540bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007540bd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007540bf: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x7540c4u); f_00714d34();
    /* 007540c4: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 007540c9: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 007540cc: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x7540d1u); f_007be19c();
    /* 007540d1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007540d4: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 007540d7: jmp 0x75417b */ goto L_0075417b;
L_0075417b:; BB(0x0075417b);
    /* 0075417b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075417c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075417e: call 0x714e5c */ r_esp -= 4; W32(r_esp, 0x754183u); f_00714e5c();
    /* 00754183: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00754185: movzx edx, word ptr [ebx + 0x84] */ r_edx = (u32)R16((u32)(r_ebx+0x84u));
    /* 0075418c: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00754192: mov word ptr [ebx + 0x84], dx */ W16((u32)(r_ebx+0x84u), (u16)r_edx);
    /* 00754199: mov ecx, dword ptr [esi + 0x28] */ r_ecx = R32((u32)(r_esi+0x28u));
    /* 0075419c: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x7541a1u); f_007336fc();
    /* 007541a1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007541a2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007541a5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007541a7: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x7541acu); f_00712624();
    /* 007541ac: mov eax, ebx */ r_eax = r_ebx;
    /* 007541ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007541af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007541b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007541b1: ret 4 */ FN_RET(0x00754086); r_esp += 8; return;
}

void f_007540dc(void)
{
    FN_ENTER(0x007540dc);
    /* 007540dc: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007540de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007540e0: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7540e5u); f_00792fe8();
    /* 007540e5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007540e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007540e9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007540eb: call 0x737ae4 */ r_esp -= 4; W32(r_esp, 0x7540f0u); f_00737ae4();
    /* 007540f0: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007540f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007540f4: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7540f9u); f_00792fe8();
    /* 007540f9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007540fc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007540fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007540ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00754101: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x754106u); f_00714d34();
    /* 00754106: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00754108: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075410a: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x75410fu); f_00792fe8();
    /* 0075410f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00754112: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00754114: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00754115: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00754117: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x75411cu); f_00714d34();
    /* 0075411c: push 0x2000000 */ { u32 v = 0x2000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00754121: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00754124: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x754129u); f_007be19c();
    /* 00754129: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075412c: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0075412f: jmp 0x75417b */ goto L_0075417b;
L_0075417b:; BB(0x0075417b);
    /* 0075417b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075417c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075417e: call 0x714e5c */ r_esp -= 4; W32(r_esp, 0x754183u); f_00714e5c();
    /* 00754183: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00754185: movzx edx, word ptr [ebx + 0x84] */ r_edx = (u32)R16((u32)(r_ebx+0x84u));
    /* 0075418c: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00754192: mov word ptr [ebx + 0x84], dx */ W16((u32)(r_ebx+0x84u), (u16)r_edx);
    /* 00754199: mov ecx, dword ptr [esi + 0x28] */ r_ecx = R32((u32)(r_esi+0x28u));
    /* 0075419c: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x7541a1u); f_007336fc();
    /* 007541a1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007541a2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007541a5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007541a7: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x7541acu); f_00712624();
    /* 007541ac: mov eax, ebx */ r_eax = r_ebx;
    /* 007541ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007541af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007541b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007541b1: ret 4 */ FN_RET(0x007540dc); r_esp += 8; return;
}

void f_00754131(void)
{
    FN_ENTER(0x00754131);
    /* 00754131: push 0x79 */ { u32 v = 0x79u; r_esp -= 4; W32(r_esp, v); }
    /* 00754133: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x754138u); f_0079317c();
    /* 00754138: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00754139: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075413a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075413c: call 0x737ae4 */ r_esp -= 4; W32(r_esp, 0x754141u); f_00737ae4();
    /* 00754141: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 00754146: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75414bu); f_0079317c();
    /* 0075414b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075414c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075414e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075414f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00754151: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x754156u); f_00714d34();
    /* 00754156: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 0075415b: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x754160u); f_0079317c();
    /* 00754160: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00754161: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00754163: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00754164: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00754166: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x75416bu); f_00714d34();
    /* 0075416b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075416d: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00754170: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x754175u); f_007be19c();
    /* 00754175: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00754178: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0075417b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075417c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075417e: call 0x714e5c */ r_esp -= 4; W32(r_esp, 0x754183u); f_00714e5c();
    /* 00754183: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00754185: movzx edx, word ptr [ebx + 0x84] */ r_edx = (u32)R16((u32)(r_ebx+0x84u));
    /* 0075418c: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00754192: mov word ptr [ebx + 0x84], dx */ W16((u32)(r_ebx+0x84u), (u16)r_edx);
    /* 00754199: mov ecx, dword ptr [esi + 0x28] */ r_ecx = R32((u32)(r_esi+0x28u));
    /* 0075419c: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x7541a1u); f_007336fc();
    /* 007541a1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007541a2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007541a5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007541a7: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x7541acu); f_00712624();
    /* 007541ac: mov eax, ebx */ r_eax = r_ebx;
    /* 007541ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007541af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007541b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007541b1: ret 4 */ FN_RET(0x00754131); r_esp += 8; return;
}

void f_0075417b(void)
{
    FN_ENTER(0x0075417b);
    /* 0075417b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075417c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075417e: call 0x714e5c */ r_esp -= 4; W32(r_esp, 0x754183u); f_00714e5c();
    /* 00754183: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00754185: movzx edx, word ptr [ebx + 0x84] */ r_edx = (u32)R16((u32)(r_ebx+0x84u));
    /* 0075418c: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00754192: mov word ptr [ebx + 0x84], dx */ W16((u32)(r_ebx+0x84u), (u16)r_edx);
    /* 00754199: mov ecx, dword ptr [esi + 0x28] */ r_ecx = R32((u32)(r_esi+0x28u));
    /* 0075419c: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x7541a1u); f_007336fc();
    /* 007541a1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007541a2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007541a5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007541a7: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x7541acu); f_00712624();
    /* 007541ac: mov eax, ebx */ r_eax = r_ebx;
    /* 007541ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007541af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007541b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007541b1: ret 4 */ FN_RET(0x0075417b); r_esp += 8; return;
}

void f_007541b4(void) /* sub_7541B4 */
{
    FN_ENTER(0x007541b4);
    /* 007541b4: mov dword ptr [0xa9ac64], 0x3f800000 */ W32((u32)(0xa9ac64u), 0x3f800000u);
    /* 007541be: mov dword ptr [0xa9ac68], 0x41000000 */ W32((u32)(0xa9ac68u), 0x41000000u);
    /* 007541c8: mov dword ptr [0xa9ac6c], 0x3fc00000 */ W32((u32)(0xa9ac6cu), 0x3fc00000u);
    /* 007541d2: ret  */ FN_RET(0x007541b4); r_esp += 4; return;
}

void f_007541d4(void) /* sub_7541D4 */
{
    FN_ENTER(0x007541d4);
    /* 007541d4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007541d5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007541d7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007541d9: call 0x7541f8 */ r_esp -= 4; W32(r_esp, 0x7541deu); f_007541f8();
    /* 007541de: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007541e2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007541e4: jne 0x7541ea */ if (!fZ) goto L_007541ea;
L_007541e6:; BB(0x007541e6);
    /* 007541e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007541e7: ret 4 */ FN_RET(0x007541d4); r_esp += 8; return;
L_007541ea:; BB(0x007541ea);
    /* 007541ea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007541eb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7541f0u); f_005c2f74();
    /* 007541f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007541f1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007541f2: ret 4 */ FN_RET(0x007541d4); r_esp += 8; return;
}

void f_007541f8(void) /* sub_7541F8 */
{
    FN_ENTER(0x007541f8);
    /* 007541f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007541f9: mov ebp, esp */ r_ebp = r_esp;
    /* 007541fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007541fd: push 0x8f2e3c */ { u32 v = 0x8f2e3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00754202: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00754208: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00754209: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00754210: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00754213: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00754216: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00754219: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0075421c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0075421f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00754222: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00754229: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075422c: mov dword ptr [eax], 0xb42600 */ W32((u32)(r_eax), 0xb42600u);
    /* 00754232: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 00754238: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075423a: je 0x75424c */ if (fZ) goto L_0075424c;
L_0075423c:; BB(0x0075423c);
    /* 0075423c: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 00754240: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00754245: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
    /* 00754249: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0075424c:; BB(0x0075424c);
    /* 0075424c: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0075424f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00754251: je 0x754262 */ if (fZ) goto L_00754262;
L_00754253:; BB(0x00754253);
    /* 00754253: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x754258u); f_007127b0();
    /* 00754258: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075425b: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
L_00754262:; BB(0x00754262);
    /* 00754262: call 0x7917b8 */ r_esp -= 4; W32(r_esp, 0x754267u); f_007917b8();
    /* 00754267: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0075426a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075426d: je 0x754277 */ if (fZ) goto L_00754277;
L_0075426f:; BB(0x0075426f);
    /* 0075426f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00754271: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x754276u); f_00791748();
    /* 00754276: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00754277:; BB(0x00754277);
    /* 00754277: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075427e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00754281: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x754286u); f_008171e8();
    /* 00754286: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00754289: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00754290: mov esp, ebp */ r_esp = r_ebp;
    /* 00754292: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00754293: ret  */ FN_RET(0x007541f8); r_esp += 4; return;
}

void f_00754294(void) /* sub_754294 */
{
    FN_ENTER(0x00754294);
    /* 00754294: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00754295: mov ebp, esp */ r_ebp = r_esp;
    /* 00754297: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00754299: push 0x8f2e72 */ { u32 v = 0x8f2e72u; r_esp -= 4; W32(r_esp, v); }
    /* 0075429e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007542a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007542a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007542ac: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007542af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007542b2: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 007542b5: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 007542b8: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 007542bb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 007542be: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 007542c1: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 007542c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007542c5: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 007542c8: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007542cb: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7542d0u); f_008193cc();
    /* 007542d0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007542d7: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 007542da: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007542dd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007542e0: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 007542e2: mov dword ptr [ebx + 0x24], edx */ W32((u32)(r_ebx+0x24u), r_edx);
    /* 007542e5: mov dword ptr [ebx], 0xb42600 */ W32((u32)(r_ebx), 0xb42600u);
    /* 007542eb: mov eax, dword ptr [0x9f4504] */ r_eax = R32((u32)(0x9f4504u));
    /* 007542f0: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 007542f3: mov dword ptr [ebx + 0x20], ecx */ W32((u32)(r_ebx+0x20u), r_ecx);
    /* 007542f6: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 007542fd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x754302u); f_005caba4();
    /* 00754302: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00754305: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00754308: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0075430b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075430d: je 0x754378 */ if (fZ) goto L_00754378;
L_0075430f:; BB(0x0075430f);
    /* 0075430f: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00754316: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0075431d: mov ecx, eax */ r_ecx = r_eax;
    /* 0075431f: call 0x7544f8 */ r_esp -= 4; W32(r_esp, 0x754324u); f_007544f8();
    /* 00754324: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0075432b:; BB(0x0075432b);
    /* 0075432b: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075432e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754331: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00754334: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075433b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075433d: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00754340: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 00754343: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 00754349: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075434b: je 0x75435a */ if (fZ) goto L_0075435a;
L_0075434d:; BB(0x0075434d);
    /* 0075434d: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 00754351: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00754356: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
L_0075435a:; BB(0x0075435a);
    /* 0075435a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075435c: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x754361u); f_00791748();
    /* 00754361: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00754362: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00754365: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00754368: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075436b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00754372: mov esp, ebp */ r_esp = r_ebp;
    /* 00754374: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00754375: ret 8 */ FN_RET(0x00754294); r_esp += 12; return;
L_00754378:; BB(0x00754378);
    /* 00754378: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075437a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0075437d: jmp 0x75432b */ goto L_0075432b;
}

void f_00754380(void) /* sub_754380 */
{
    FN_ENTER(0x00754380);
    /* 00754380: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00754381: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00754383: movzx eax, byte ptr [ebx + 0x1c] */ r_eax = (u32)R8((u32)(r_ebx+0x1cu));
    /* 00754387: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00754389: jge 0x75438d */ if ((fS==fO)) goto L_0075438d;
L_0075438b:; BB(0x0075438b);
    /* 0075438b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075438c: ret  */ FN_RET(0x00754380); r_esp += 4; return;
L_0075438d:; BB(0x0075438d);
    /* 0075438d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00754390: jle 0x7543e8 */ if ((fZ||fS!=fO)) goto L_007543e8;
L_00754392:; BB(0x00754392);
    /* 00754392: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00754395: je 0x7543fb */ if (fZ) goto L_007543fb;
L_00754397:; BB(0x00754397);
    /* 00754397: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075439a: jne 0x7543c0 */ if (!fZ) goto L_007543c0;
L_0075439c:; BB(0x0075439c);
    /* 0075439c: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0075439f: movsx edx, byte ptr [eax + 0x61] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+0x61u));
    /* 007543a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007543a5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007543a7: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007543aa: push dword ptr [edx + eax*8 + 0xa95920] */ { u32 v = R32((u32)(r_edx+r_eax*8+0xa95920u)); r_esp -= 4; W32(r_esp, v); }
    /* 007543b1: call 0x6bcdec */ r_esp -= 4; W32(r_esp, 0x7543b6u); f_006bcdec();
    /* 007543b6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007543b7: mov byte ptr [ebx + 0x1c], 4 */ W8((u32)(r_ebx+0x1cu), 0x4u);
    /* 007543bb: mov dword ptr [ebx + 0x2c], eax */ W32((u32)(r_ebx+0x2cu), r_eax);
    /* 007543be: jmp 0x7543c8 */ goto L_007543c8;
L_007543c0:; BB(0x007543c0);
    /* 007543c0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007543c3: jne 0x75438b */ if (!fZ) goto L_0075438b;
L_007543c5:; BB(0x007543c5);
    /* 007543c5: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
L_007543c8:; BB(0x007543c8);
    /* 007543c8: mov ecx, eax */ r_ecx = r_eax;
    /* 007543ca: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x7543cfu); f_008173b4();
    /* 007543cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007543d1: jne 0x75438b */ if (!fZ) goto L_0075438b;
L_007543d3:; BB(0x007543d3);
    /* 007543d3: mov dword ptr [ebx + 0x2c], 0 */ W32((u32)(r_ebx+0x2cu), 0x0u);
    /* 007543da: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007543dc: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x7543e1u); f_00791748();
    /* 007543e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007543e2: mov byte ptr [ebx + 0x1c], 1 */ W8((u32)(r_ebx+0x1cu), 0x1u);
    /* 007543e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007543e7: ret  */ FN_RET(0x00754380); r_esp += 4; return;
L_007543e8:; BB(0x007543e8);
    /* 007543e8: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 007543eb: movzx eax, byte ptr [edx + 0x60] */ r_eax = (u32)R8((u32)(r_edx+0x60u));
    /* 007543ef: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007543f4: mov byte ptr [edx + 0x60], al */ W8((u32)(r_edx+0x60u), (u8)r_eax);
    /* 007543f7: mov byte ptr [ebx + 0x1c], 2 */ W8((u32)(r_ebx+0x1cu), 0x2u);
L_007543fb:; BB(0x007543fb);
    /* 007543fb: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 007543fe: movsx eax, byte ptr [eax + 0x60] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x60u));
    /* 00754402: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00754404: je 0x754414 */ if (fZ) goto L_00754414;
L_00754406:; BB(0x00754406);
    /* 00754406: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 00754409: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0075440b: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x75440eu); call_ind(t); }
    /* 0075440e: mov byte ptr [ebx + 0x1c], 5 */ W8((u32)(r_ebx+0x1cu), 0x5u);
    /* 00754412: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00754413: ret  */ FN_RET(0x00754380); r_esp += 4; return;
L_00754414:; BB(0x00754414);
    /* 00754414: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00754416: je 0x75438b */ if (fZ) goto L_0075438b;
L_0075441c:; BB(0x0075441c);
    /* 0075441c: mov byte ptr [ebx + 0x1c], 3 */ W8((u32)(r_ebx+0x1cu), 0x3u);
    /* 00754420: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00754421: ret  */ FN_RET(0x00754380); r_esp += 4; return;
}

void f_00754424(void) /* sub_754424 */
{
    FN_ENTER(0x00754424);
    /* 00754424: mov dword ptr [0xa9ac74], 0x3f800000 */ W32((u32)(0xa9ac74u), 0x3f800000u);
    /* 0075442e: mov dword ptr [0xa9ac78], 0x41000000 */ W32((u32)(0xa9ac78u), 0x41000000u);
    /* 00754438: mov dword ptr [0xa9ac7c], 0x3fc00000 */ W32((u32)(0xa9ac7cu), 0x3fc00000u);
    /* 00754442: ret  */ FN_RET(0x00754424); r_esp += 4; return;
}

void f_00754444(void) /* sub_754444 */
{
    FN_ENTER(0x00754444);
    /* 00754444: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00754445: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00754447: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00754449: call 0x754468 */ r_esp -= 4; W32(r_esp, 0x75444eu); f_00754468();
    /* 0075444e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00754452: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00754454: jne 0x75445a */ if (!fZ) goto L_0075445a;
L_00754456:; BB(0x00754456);
    /* 00754456: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00754457: ret 4 */ FN_RET(0x00754444); r_esp += 8; return;
L_0075445a:; BB(0x0075445a);
    /* 0075445a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075445b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x754460u); f_005c2f74();
    /* 00754460: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00754461: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00754462: ret 4 */ FN_RET(0x00754444); r_esp += 8; return;
}

void f_00754468(void) /* sub_754468 */
{
    FN_ENTER(0x00754468);
    /* 00754468: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00754469: mov ebp, esp */ r_ebp = r_esp;
    /* 0075446b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0075446d: push 0x8f2e8c */ { u32 v = 0x8f2e8cu; r_esp -= 4; W32(r_esp, v); }
    /* 00754472: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00754478: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00754479: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00754480: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00754483: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00754486: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00754489: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0075448c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0075448f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00754492: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00754499: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075449c: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0075449f: mov dword ptr [eax], 0xb42668 */ W32((u32)(r_eax), 0xb42668u);
    /* 007544a5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007544a7: je 0x7544b3 */ if (fZ) goto L_007544b3;
L_007544a9:; BB(0x007544a9);
    /* 007544a9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007544ab: call 0x728a10 */ r_esp -= 4; W32(r_esp, 0x7544b0u); f_00728a10();
    /* 007544b0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_007544b3:; BB(0x007544b3);
    /* 007544b3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007544ba: mov ecx, eax */ r_ecx = r_eax;
    /* 007544bc: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x7544c1u); f_00710c28();
    /* 007544c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007544c4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007544cb: mov esp, ebp */ r_esp = r_ebp;
    /* 007544cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007544ce: ret  */ FN_RET(0x00754468); r_esp += 4; return;
}

void f_007544d0(void) /* sub_7544D0 */
{
    FN_ENTER(0x007544d0);
    /* 007544d0: movsx eax, byte ptr [esp + 4] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esp+0x4u));
    /* 007544d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007544d7: jl 0x7544de */ if ((fS!=fO)) goto L_007544de;
L_007544d9:; BB(0x007544d9);
    /* 007544d9: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007544dc: jle 0x7544e3 */ if ((fZ||fS!=fO)) goto L_007544e3;
L_007544de:; BB(0x007544de);
    /* 007544de: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007544e0: ret 4 */ FN_RET(0x007544d0); r_esp += 8; return;
L_007544e3:; BB(0x007544e3);
    /* 007544e3: lea eax, [eax + 0x4a] */ r_eax = (u32)(r_eax+0x4au);
    /* 007544e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007544e7: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007544ed: call 0x6bc260 */ r_esp -= 4; W32(r_esp, 0x7544f2u); f_006bc260();
    /* 007544f2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007544f5: ret 4 */ FN_RET(0x007544d0); r_esp += 8; return;
}

void f_007544f8(void) /* sub_7544F8 */
{
    FN_ENTER(0x007544f8);
    /* 007544f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007544f9: mov ebp, esp */ r_ebp = r_esp;
    /* 007544fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007544fd: push 0x8f2ec2 */ { u32 v = 0x8f2ec2u; r_esp -= 4; W32(r_esp, v); }
    /* 00754502: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00754508: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00754509: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00754510: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00754513: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00754516: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00754519: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0075451c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0075451f: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00754522: push 0x73 */ { u32 v = 0x73u; r_esp -= 4; W32(r_esp, v); }
    /* 00754524: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x754529u); f_0073ec50();
    /* 00754529: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075452a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0075452d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075452e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00754530: push 0x9f4684 */ { u32 v = 0x9f4684u; r_esp -= 4; W32(r_esp, v); }
    /* 00754535: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x75453au); f_00710d30();
    /* 0075453a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00754541: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00754544: mov dword ptr [edx], 0xb42668 */ W32((u32)(r_edx), 0xb42668u);
    /* 0075454a: mov eax, dword ptr [0x9f4680] */ r_eax = R32((u32)(0x9f4680u));
    /* 0075454f: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00754556: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00754558: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0075455b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x754560u); f_008581c5();
    /* 00754560: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00754563: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00754566: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00754569: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075456b: je 0x754720 */ if (fZ) goto L_00754720;
L_00754571:; BB(0x00754571);
    /* 00754571: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00754578: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0075457f: push 0x3e */ { u32 v = 0x3eu; r_esp -= 4; W32(r_esp, v); }
    /* 00754581: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x754586u); f_0079317c();
    /* 00754586: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00754587: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0075458a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075458d: movsx ebx, word ptr [edx + 0x20] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x20u));
    /* 00754591: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00754592: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00754593: call 0x761320 */ r_esp -= 4; W32(r_esp, 0x754598u); f_00761320();
    /* 00754598: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0075459f:; BB(0x0075459f);
    /* 0075459f: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 007545a2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007545a5: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 007545a8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007545af: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 007545b2: mov byte ptr [edx + 0x60], 0 */ W8((u32)(r_edx+0x60u), 0x0u);
    /* 007545b6: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 007545b8: call 0x6bc290 */ r_esp -= 4; W32(r_esp, 0x7545bdu); f_006bc290();
    /* 007545bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007545bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007545c0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007545c2: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x7545c7u); f_0072db60();
    /* 007545c7: push dword ptr [ebx + 0x20] */ { u32 v = R32((u32)(r_ebx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 007545ca: call 0x7ac344 */ r_esp -= 4; W32(r_esp, 0x7545cfu); f_007ac344();
    /* 007545cf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007545d0: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 007545d3: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 007545d6: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007545d9: fadd dword ptr [eax*4 + 0x973f48] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x973f48u));
    /* 007545e0: fmul dword ptr [0x973f84] */ ST(0) = ST(0) * R_F32((u32)(0x973f84u));
    /* 007545e6: fadd dword ptr [0x973f88] */ ST(0) = ST(0) + R_F32((u32)(0x973f88u));
    /* 007545ec: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 007545ef: fstp dword ptr [ebx + 8] */ W_F32((u32)(r_ebx+0x8u), ST(0)); FPOP();
    /* 007545f2: mov edi, 1 */ r_edi = 0x1u;
    /* 007545f7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007545f9: mov byte ptr [eax + 0x61], 0xff */ W8((u32)(r_eax+0x61u), 0xffu);
L_007545fd:; BB(0x007545fd);
    /* 007545fd: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 00754600: mov esi, dword ptr [eax + ebx*4 + 8] */ r_esi = R32((u32)(r_eax+r_ebx*4+0x8u));
    /* 00754604: movsx eax, bl */ r_eax = (u32)(i32)(i8)(u8)r_ebx;
    /* 00754607: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00754609: jl 0x754626 */ if ((fS!=fO)) goto L_00754626;
L_0075460b:; BB(0x0075460b);
    /* 0075460b: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075460e: jg 0x754626 */ if ((!fZ&&fS==fO)) goto L_00754626;
L_00754610:; BB(0x00754610);
    /* 00754610: add eax, 0x4a */ {  u32 a = r_eax; u32 b = 0x4au; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00754613: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00754614: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075461a: call 0x6bc260 */ r_esp -= 4; W32(r_esp, 0x75461fu); f_006bc260();
    /* 0075461f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00754622: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00754624: jne 0x754635 */ if (!fZ) goto L_00754635;
L_00754626:; BB(0x00754626);
    /* 00754626: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 0075462a: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075462f: mov word ptr [esi + 4], ax */ W16((u32)(r_esi+0x4u), (u16)r_eax);
    /* 00754633: jmp 0x754644 */ goto L_00754644;
L_00754635:; BB(0x00754635);
    /* 00754635: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 00754639: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075463e: mov word ptr [esi + 4], ax */ W16((u32)(r_esi+0x4u), (u16)r_eax);
    /* 00754642: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00754644:; BB(0x00754644);
    /* 00754644: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00754647: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075464a: jge 0x754651 */ if ((fS==fO)) goto L_00754651;
L_0075464c:; BB(0x0075464c);
    /* 0075464c: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0075464f: jmp 0x7545fd */ goto L_007545fd;
L_00754651:; BB(0x00754651);
    /* 00754651: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00754654: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 00754657: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0075465a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075465c: je 0x75467e */ if (fZ) goto L_0075467e;
L_0075465e:; BB(0x0075465e);
    /* 0075465e: mov byte ptr [edx + 0x61], 0xff */ W8((u32)(r_edx+0x61u), 0xffu);
    /* 00754662: movzx eax, word ptr [ecx + 4] */ r_eax = (u32)R16((u32)(r_ecx+0x4u));
    /* 00754666: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075466b: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
    /* 0075466f: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00754672: movsx eax, byte ptr [ecx + 0x60] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x60u));
    /* 00754676: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00754679: mov byte ptr [ecx + 0x60], al */ W8((u32)(r_ecx+0x60u), (u8)r_eax);
    /* 0075467c: jmp 0x75469e */ goto L_0075469e;
L_0075467e:; BB(0x0075467e);
    /* 0075467e: movzx esi, word ptr [ecx + 4] */ r_esi = (u32)R16((u32)(r_ecx+0x4u));
    /* 00754682: and esi, 0xfffd */ {  u32 a = r_esi; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00754688: mov word ptr [ecx + 4], si */ W16((u32)(r_ecx+0x4u), (u16)r_esi);
    /* 0075468c: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0075468f: movzx eax, byte ptr [ecx + 0x60] */ r_eax = (u32)R8((u32)(r_ecx+0x60u));
    /* 00754693: and eax, 0xfb */ {  u32 a = r_eax; u32 b = 0xfbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00754698: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0075469b: mov byte ptr [ecx + 0x60], al */ W8((u32)(r_ecx+0x60u), (u8)r_eax);
L_0075469e:; BB(0x0075469e);
    /* 0075469e: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007546a0: jne 0x7546f5 */ if (!fZ) goto L_007546f5;
L_007546a2:; BB(0x007546a2);
    /* 007546a2: movsx eax, byte ptr [ecx + 0x61] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x61u));
    /* 007546a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007546a7: call 0x7544d0 */ r_esp -= 4; W32(r_esp, 0x7546acu); f_007544d0();
    /* 007546ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007546ae: jne 0x75471b */ if (!fZ) goto L_0075471b;
L_007546b0:; BB(0x007546b0);
    /* 007546b0: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 007546b3: movsx ecx, byte ptr [edx + 0x61] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x61u));
L_007546b7:; BB(0x007546b7);
    /* 007546b7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007546ba: movsx eax, cl */ r_eax = (u32)(i32)(i8)(u8)r_ecx;
    /* 007546bd: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007546c0: jle 0x7546ca */ if ((fZ||fS!=fO)) goto L_007546ca;
L_007546c2:; BB(0x007546c2);
    /* 007546c2: add eax, -6 */ {  u32 a = r_eax; u32 b = 0xfffffffau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007546c5: movsx ecx, al */ r_ecx = (u32)(i32)(i8)(u8)r_eax;
    /* 007546c8: mov eax, ecx */ r_eax = r_ecx;
L_007546ca:; BB(0x007546ca);
    /* 007546ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007546cc: jl 0x7546b7 */ if ((fS!=fO)) goto L_007546b7;
L_007546ce:; BB(0x007546ce);
    /* 007546ce: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007546d1: jg 0x7546b7 */ if ((!fZ&&fS==fO)) goto L_007546b7;
L_007546d3:; BB(0x007546d3);
    /* 007546d3: mov byte ptr [edx + 0x61], cl */ W8((u32)(r_edx+0x61u), (u8)r_ecx);
    /* 007546d6: add eax, 0x4a */ {  u32 a = r_eax; u32 b = 0x4au; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007546d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007546da: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007546e0: call 0x6bc260 */ r_esp -= 4; W32(r_esp, 0x7546e5u); f_006bc260();
    /* 007546e5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007546e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007546ea: jne 0x75470e */ if (!fZ) goto L_0075470e;
L_007546ec:; BB(0x007546ec);
    /* 007546ec: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 007546ef: movsx ecx, byte ptr [edx + 0x61] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x61u));
    /* 007546f3: jmp 0x7546b7 */ goto L_007546b7;
L_007546f5:; BB(0x007546f5);
    /* 007546f5: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007546f8: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007546fb: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007546fe: mov eax, ecx */ r_eax = r_ecx;
    /* 00754700: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00754703: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075470a: mov esp, ebp */ r_esp = r_ebp;
    /* 0075470c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075470d: ret  */ FN_RET(0x007544f8); r_esp += 4; return;
L_0075470e:; BB(0x0075470e);
    /* 0075470e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00754711: call 0x754954 */ r_esp -= 4; W32(r_esp, 0x754716u); f_00754954();
    /* 00754716: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00754719: jmp 0x7546f5 */ goto L_007546f5;
L_0075471b:; BB(0x0075471b);
    /* 0075471b: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0075471e: jmp 0x7546f5 */ goto L_007546f5;
L_00754720:; BB(0x00754720);
    /* 00754720: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00754722: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00754725: jmp 0x75459f */ goto L_0075459f;
}

void f_0075472c(void) /* sub_75472C */
{
    FN_ENTER(0x0075472c);
    /* 0075472c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075472d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075472e: mov edi, ecx */ r_edi = r_ecx;
    /* 00754730: movsx eax, byte ptr [edi + 0x60] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x60u));
    /* 00754734: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00754736: jne 0x7548ed */ if (!fZ) goto L_007548ed;
L_0075473c:; BB(0x0075473c);
    /* 0075473c: and eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0075473f: jne 0x754798 */ if (!fZ) goto L_00754798;
L_00754741:; BB(0x00754741);
    /* 00754741: movsx eax, byte ptr [edi + 0x61] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x61u));
    /* 00754745: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00754746: mov ecx, edi */ r_ecx = r_edi;
    /* 00754748: call 0x7544d0 */ r_esp -= 4; W32(r_esp, 0x75474du); f_007544d0();
    /* 0075474d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075474f: jne 0x754939 */ if (!fZ) goto L_00754939;
L_00754755:; BB(0x00754755);
    /* 00754755: movsx eax, byte ptr [edi + 0x61] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x61u));
L_00754759:; BB(0x00754759);
    /* 00754759: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075475c: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 0075475f: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00754762: jle 0x75476c */ if ((fZ||fS!=fO)) goto L_0075476c;
L_00754764:; BB(0x00754764);
    /* 00754764: add edx, -6 */ {  u32 a = r_edx; u32 b = 0xfffffffau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00754767: movsx eax, dl */ r_eax = (u32)(i32)(i8)(u8)r_edx;
    /* 0075476a: mov edx, eax */ r_edx = r_eax;
L_0075476c:; BB(0x0075476c);
    /* 0075476c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0075476e: jl 0x754759 */ if ((fS!=fO)) goto L_00754759;
L_00754770:; BB(0x00754770);
    /* 00754770: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00754773: jg 0x754759 */ if ((!fZ&&fS==fO)) goto L_00754759;
L_00754775:; BB(0x00754775);
    /* 00754775: mov byte ptr [edi + 0x61], al */ W8((u32)(r_edi+0x61u), (u8)r_eax);
    /* 00754778: add edx, 0x4a */ {  u32 a = r_edx; u32 b = 0x4au; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075477b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075477c: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00754782: call 0x6bc260 */ r_esp -= 4; W32(r_esp, 0x754787u); f_006bc260();
    /* 00754787: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075478a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075478c: jne 0x754926 */ if (!fZ) goto L_00754926;
L_00754792:; BB(0x00754792);
    /* 00754792: movsx eax, byte ptr [edi + 0x61] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x61u));
    /* 00754796: jmp 0x754759 */ goto L_00754759;
L_00754798:; BB(0x00754798);
    /* 00754798: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075479a: jne 0x75488d */ if (!fZ) goto L_0075488d;
L_007547a0:; BB(0x007547a0);
    /* 007547a0: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x7547a5u); f_00694c6c();
    /* 007547a5: mov edx, dword ptr [0xa0f670] */ r_edx = R32((u32)(0xa0f670u));
    /* 007547ab: or edx, dword ptr [0xa0f66c] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f66cu)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007547b1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007547b3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007547b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007547b6: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 007547b9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007547bb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007547bd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007547bf: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 007547c6: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x7547cbu); f_007c09fc();
    /* 007547cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007547cd: je 0x75488d */ if (fZ) goto L_0075488d;
L_007547d3:; BB(0x007547d3);
    /* 007547d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007547d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007547d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007547d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007547d8: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 007547dd: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x7547e2u); f_00814298();
    /* 007547e2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007547e5: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007547e7: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x7547ecu); f_00694c6c();
    /* 007547ec: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007547ee: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007547f0: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 007547f3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007547f5: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 007547fb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007547fd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007547ff: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00754806: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x75480bu); f_007c09fc();
    /* 0075480b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075480d: je 0x754814 */ if (fZ) goto L_00754814;
L_0075480f:; BB(0x0075480f);
    /* 0075480f: mov esi, 1 */ r_esi = 0x1u;
L_00754814:; BB(0x00754814);
    /* 00754814: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x754819u); f_00694c6c();
    /* 00754819: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0075481b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075481d: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00754820: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00754822: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00754828: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075482a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075482c: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00754833: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x754838u); f_007c09fc();
    /* 00754838: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075483a: je 0x75483f */ if (fZ) goto L_0075483f;
L_0075483c:; BB(0x0075483c);
    /* 0075483c: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0075483f:; BB(0x0075483f);
    /* 0075483f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00754841: je 0x75488d */ if (fZ) goto L_0075488d;
L_00754843:; BB(0x00754843);
    /* 00754843: movsx eax, byte ptr [edi + 0x61] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x61u));
L_00754847:; BB(0x00754847);
    /* 00754847: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00754849: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0075484c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0075484e: jge 0x754856 */ if ((fS==fO)) goto L_00754856;
L_00754850:; BB(0x00754850);
    /* 00754850: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00754853: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
L_00754856:; BB(0x00754856);
    /* 00754856: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00754859: jl 0x754861 */ if ((fS!=fO)) goto L_00754861;
L_0075485b:; BB(0x0075485b);
    /* 0075485b: add eax, -6 */ {  u32 a = r_eax; u32 b = 0xfffffffau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075485e: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
L_00754861:; BB(0x00754861);
    /* 00754861: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00754863: jl 0x754847 */ if ((fS!=fO)) goto L_00754847;
L_00754865:; BB(0x00754865);
    /* 00754865: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00754868: jg 0x754847 */ if ((!fZ&&fS==fO)) goto L_00754847;
L_0075486a:; BB(0x0075486a);
    /* 0075486a: mov byte ptr [edi + 0x61], al */ W8((u32)(r_edi+0x61u), (u8)r_eax);
    /* 0075486d: add eax, 0x4a */ {  u32 a = r_eax; u32 b = 0x4au; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00754870: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00754871: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00754877: call 0x6bc260 */ r_esp -= 4; W32(r_esp, 0x75487cu); f_006bc260();
    /* 0075487c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075487f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00754881: jne 0x754945 */ if (!fZ) goto L_00754945;
L_00754887:; BB(0x00754887);
    /* 00754887: movsx eax, byte ptr [edi + 0x61] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x61u));
    /* 0075488b: jmp 0x754847 */ goto L_00754847;
L_0075488d:; BB(0x0075488d);
    /* 0075488d: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x754892u); f_00694c6c();
    /* 00754892: mov edx, dword ptr [0xa0f674] */ r_edx = R32((u32)(0xa0f674u));
    /* 00754898: or edx, dword ptr [0xa0f698] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075489e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075489f: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 007548a2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007548a4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007548a6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007548a8: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 007548af: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x7548b4u); f_007c1160();
    /* 007548b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007548b6: je 0x7548bf */ if (fZ) goto L_007548bf;
L_007548b8:; BB(0x007548b8);
    /* 007548b8: mov ecx, edi */ r_ecx = r_edi;
    /* 007548ba: call 0x754998 */ r_esp -= 4; W32(r_esp, 0x7548bfu); f_00754998();
L_007548bf:; BB(0x007548bf);
    /* 007548bf: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x7548c4u); f_00694c6c();
    /* 007548c4: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 007548ca: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 007548cd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007548cf: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007548d1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007548d3: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007548d5: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 007548dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007548dd: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x7548e2u); f_007c1160();
    /* 007548e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007548e4: je 0x7548ed */ if (fZ) goto L_007548ed;
L_007548e6:; BB(0x007548e6);
    /* 007548e6: mov ecx, edi */ r_ecx = r_edi;
    /* 007548e8: call 0x74943c */ r_esp -= 4; W32(r_esp, 0x7548edu); f_0074943c();
L_007548ed:; BB(0x007548ed);
    /* 007548ed: mov ecx, edi */ r_ecx = r_edi;
    /* 007548ef: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x7548f4u); f_00710db4();
    /* 007548f4: fild dword ptr [edi + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x5cu)));
    /* 007548f7: fcomp dword ptr [0x973f80] */ fx_compare(ST(0), R_F32((u32)(0x973f80u))); FPOP();
    /* 007548fd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007548ff: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00754900: jb 0x754911 */ if (fC) goto L_00754911;
L_00754902:; BB(0x00754902);
    /* 00754902: mov ecx, dword ptr [edi + 0x64] */ r_ecx = R32((u32)(r_edi+0x64u));
    /* 00754905: mov dword ptr [edi + 0x5c], 0x186a0 */ W32((u32)(r_edi+0x5cu), 0x186a0u);
    /* 0075490c: call 0x761388 */ r_esp -= 4; W32(r_esp, 0x754911u); f_00761388();
L_00754911:; BB(0x00754911);
    /* 00754911: mov ecx, edi */ r_ecx = r_edi;
    /* 00754913: call 0x710ee4 */ r_esp -= 4; W32(r_esp, 0x754918u); f_00710ee4();
    /* 00754918: lea eax, [edi + 0x24] */ r_eax = (u32)(r_edi+0x24u);
    /* 0075491b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075491c: mov ecx, edi */ r_ecx = r_edi;
    /* 0075491e: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x754923u); f_0072a5ec();
    /* 00754923: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00754924: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00754925: ret  */ FN_RET(0x0075472c); r_esp += 4; return;
L_00754926:; BB(0x00754926);
    /* 00754926: mov ecx, edi */ r_ecx = r_edi;
    /* 00754928: call 0x754954 */ r_esp -= 4; W32(r_esp, 0x75492du); f_00754954();
    /* 0075492d: movzx eax, byte ptr [edi + 0x60] */ r_eax = (u32)R8((u32)(r_edi+0x60u));
    /* 00754931: and eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00754934: jmp 0x754798 */ goto L_00754798;
L_00754939:; BB(0x00754939);
    /* 00754939: movzx eax, byte ptr [edi + 0x60] */ r_eax = (u32)R8((u32)(r_edi+0x60u));
    /* 0075493d: and eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00754940: jmp 0x754798 */ goto L_00754798;
L_00754945:; BB(0x00754945);
    /* 00754945: mov ecx, edi */ r_ecx = r_edi;
    /* 00754947: call 0x754954 */ r_esp -= 4; W32(r_esp, 0x75494cu); f_00754954();
    /* 0075494c: jmp 0x75488d */ goto L_0075488d;
}

void f_00754954(void) /* sub_754954 */
{
    FN_ENTER(0x00754954);
    /* 00754954: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00754955: movsx eax, byte ptr [ecx + 0x61] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x61u));
    /* 00754959: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075495b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075495d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075495f: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00754962: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00754964: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00754966: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00754968: lea edx, [eax + edx + 0xa958e0] */ r_edx = (u32)(r_eax+r_edx+0xa958e0u);
    /* 0075496f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00754970: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 00754973: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 00754976: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00754978: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x75497du); f_0072db60();
    /* 0075497d: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 00754982: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00754984: call 0x72ddf4 */ r_esp -= 4; W32(r_esp, 0x754989u); f_0072ddf4();
    /* 00754989: fld dword ptr [0x973f78] */ FPUSH(R_F32((u32)(0x973f78u)));
    /* 0075498f: fsub dword ptr [ebx + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x10u));
    /* 00754992: fstp dword ptr [ebx + 8] */ W_F32((u32)(r_ebx+0x8u), ST(0)); FPOP();
    /* 00754995: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00754996: ret  */ FN_RET(0x00754954); r_esp += 4; return;
}

void f_00754998(void) /* sub_754998 */
{
    FN_ENTER(0x00754998);
    /* 00754998: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00754999: mov edi, ecx */ r_edi = r_ecx;
    /* 0075499b: movzx eax, byte ptr [edi + 0x60] */ r_eax = (u32)R8((u32)(r_edi+0x60u));
    /* 0075499f: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007549a1: je 0x7549a5 */ if (fZ) goto L_007549a5;
L_007549a3:; BB(0x007549a3);
    /* 007549a3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007549a4: ret  */ FN_RET(0x00754998); r_esp += 4; return;
L_007549a5:; BB(0x007549a5);
    /* 007549a5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007549a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007549a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007549a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007549aa: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 007549af: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x7549b4u); f_00814298();
    /* 007549b4: movzx eax, byte ptr [edi + 0x60] */ r_eax = (u32)R8((u32)(r_edi+0x60u));
    /* 007549b8: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007549bd: mov byte ptr [edi + 0x60], al */ W8((u32)(r_edi+0x60u), (u8)r_eax);
    /* 007549c0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007549c3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007549c4: ret  */ FN_RET(0x00754998); r_esp += 4; return;
}

void f_007549c8(void) /* sub_7549C8 */
{
    FN_ENTER(0x007549c8);
    /* 007549c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007549c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007549ca: mov edi, ecx */ r_edi = r_ecx;
    /* 007549cc: mov ecx, edi */ r_ecx = r_edi;
    /* 007549ce: call 0x712644 */ r_esp -= 4; W32(r_esp, 0x7549d3u); f_00712644();
    /* 007549d3: mov esi, eax */ r_esi = r_eax;
    /* 007549d5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007549d6: mov ecx, edi */ r_ecx = r_edi;
    /* 007549d8: call 0x710f80 */ r_esp -= 4; W32(r_esp, 0x7549ddu); f_00710f80();
    /* 007549dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007549de: mov ecx, dword ptr [edi + 0x64] */ r_ecx = R32((u32)(r_edi+0x64u));
    /* 007549e1: call 0x761390 */ r_esp -= 4; W32(r_esp, 0x7549e6u); f_00761390();
    /* 007549e6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007549e7: mov ecx, edi */ r_ecx = r_edi;
    /* 007549e9: call 0x754a00 */ r_esp -= 4; W32(r_esp, 0x7549eeu); f_00754a00();
    /* 007549ee: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007549ef: lea edx, [edi + 0x24] */ r_edx = (u32)(r_edi+0x24u);
    /* 007549f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007549f3: mov ecx, edi */ r_ecx = r_edi;
    /* 007549f5: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x7549fau); f_0072a648();
    /* 007549fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007549fb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007549fc: ret  */ FN_RET(0x007549c8); r_esp += 4; return;
}

void f_00754a00(void) /* sub_754A00 */
{
    FN_ENTER(0x00754a00);
    /* 00754a00: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00754a01: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00754a02: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00754a03: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00754a06: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00754a08: mov esi, dword ptr [esp + 0x74] */ r_esi = R32((u32)(r_esp+0x74u));
    /* 00754a0c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00754a0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00754a11: jl 0x754b57 */ if ((fS!=fO)) goto L_00754b57;
L_00754a17:; BB(0x00754a17);
    /* 00754a17: movsx eax, byte ptr [ebx + 0x61] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x61u));
    /* 00754a1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00754a1c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00754a1e: call 0x7544d0 */ r_esp -= 4; W32(r_esp, 0x754a23u); f_007544d0();
    /* 00754a23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00754a25: jne 0x754a30 */ if (!fZ) goto L_00754a30;
L_00754a27:; BB(0x00754a27);
    /* 00754a27: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00754a2a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00754a2b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00754a2c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00754a2d: ret 4 */ FN_RET(0x00754a00); r_esp += 8; return;
L_00754a30:; BB(0x00754a30);
    /* 00754a30: push 0x3e99999a */ { u32 v = 0x3e99999au; r_esp -= 4; W32(r_esp, v); }
    /* 00754a35: push 0x42600000 */ { u32 v = 0x42600000u; r_esp -= 4; W32(r_esp, v); }
    /* 00754a3a: movsx eax, byte ptr [ebx + 0x61] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x61u));
    /* 00754a3e: mov edi, dword ptr [ebx + 0x28] */ r_edi = R32((u32)(r_ebx+0x28u));
    /* 00754a41: mov edi, dword ptr [edi + eax*4 + 8] */ r_edi = R32((u32)(r_edi+r_eax*4+0x8u));
    /* 00754a45: lea edx, [edi + 8] */ r_edx = (u32)(r_edi+0x8u);
    /* 00754a48: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00754a49: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00754a4a: call 0x75afb8 */ r_esp -= 4; W32(r_esp, 0x754a4fu); f_0075afb8();
    /* 00754a4f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00754a52: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 00754a55: fadd dword ptr [edi + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x8u));
    /* 00754a58: fld dword ptr [esi + 0x14] */ FPUSH(R_F32((u32)(r_esi+0x14u)));
    /* 00754a5b: fadd dword ptr [edi + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xcu));
    /* 00754a5e: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00754a61: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00754a64: jge 0x754aa2 */ if ((fS==fO)) goto L_00754aa2;
L_00754a66:; BB(0x00754a66);
    /* 00754a66: mov edx, eax */ r_edx = r_eax;
    /* 00754a68: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00754a6b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00754a6d: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 00754a71: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 00754a75: fmul dword ptr [0x973f6c] */ ST(0) = ST(0) * R_F32((u32)(0x973f6cu));
    /* 00754a7b: fnstcw word ptr [esp + 0x4c] */ W16((u32)(r_esp+0x4cu), fcw);
    /* 00754a7f: movzx eax, word ptr [esp + 0x4c] */ r_eax = (u32)R16((u32)(r_esp+0x4cu));
    /* 00754a84: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00754a89: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 00754a8d: fldcw word ptr [esp + 0x54] */ fcw = R16((u32)(r_esp+0x54u));
    /* 00754a91: fistp qword ptr [esp + 0x5c] */ W64((u32)(r_esp+0x5cu), (u64)fx_int64(ST(0))); FPOP();
    /* 00754a95: fldcw word ptr [esp + 0x4c] */ fcw = R16((u32)(r_esp+0x4cu));
    /* 00754a99: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 00754a9d: shl edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00754aa0: jmp 0x754aa7 */ goto L_00754aa7;
L_00754aa2:; BB(0x00754aa2);
    /* 00754aa2: mov edx, 0xff000000 */ r_edx = 0xff000000u;
L_00754aa7:; BB(0x00754aa7);
    /* 00754aa7: fld dword ptr [0x973f68] */ FPUSH(R_F32((u32)(0x973f68u)));
    /* 00754aad: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 00754ab0: fld dword ptr [0x973f64] */ FPUSH(R_F32((u32)(0x973f64u)));
    /* 00754ab6: fld dword ptr [0x973f60] */ FPUSH(R_F32((u32)(0x973f60u)));
    /* 00754abc: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 00754abf: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00754ac2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00754ac4: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00754ac8: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00754aca: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00754acc: lea ebx, [esp + 0x20] */ r_ebx = (u32)(r_esp+0x20u);
    /* 00754ad0: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 00754ad8: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00754adc: lea edi, [esp + 0x38] */ r_edi = (u32)(r_esp+0x38u);
    /* 00754ae0: mov dword ptr [esp + 0xc], 2 */ W32((u32)(r_esp+0xcu), 0x2u);
    /* 00754ae8: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 00754aec: or edx, 0xff7e00 */ {  u32 a = r_edx; u32 b = 0xff7e00u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00754af2: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 00754af6: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00754afa: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00754afe: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00754b00: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00754b03: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00754b05: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00754b09: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00754b0d: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 00754b10: fld dword ptr [esi + 0x14] */ FPUSH(R_F32((u32)(r_esi+0x14u)));
    /* 00754b13: lea esi, [esp + 0x10] */ r_esi = (u32)(r_esp+0x10u);
    /* 00754b17: mov edx, 3 */ r_edx = 0x3u;
    /* 00754b1c: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00754b20: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00754b22: fadd dword ptr [eax + 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x8u));
    /* 00754b25: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00754b27: fadd dword ptr [eax + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0xcu));
    /* 00754b2a: fadd dword ptr [0x973f5c] */ ST(0) = ST(0) + R_F32((u32)(0x973f5cu));
    /* 00754b30: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00754b32: fst dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0));
    /* 00754b36: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00754b38: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
    /* 00754b3c: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 00754b3f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00754b41: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00754b45: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00754b47: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00754b4b: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00754b4e: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00754b52: call 0x82b558 */ r_esp -= 4; W32(r_esp, 0x754b57u); f_0082b558();
L_00754b57:; BB(0x00754b57);
    /* 00754b57: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00754b5a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00754b5b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00754b5c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00754b5d: ret 4 */ FN_RET(0x00754a00); r_esp += 8; return;
}

void f_00754b60(void) /* sub_754B60 */
{
    FN_ENTER(0x00754b60);
    /* 00754b60: mov dword ptr [0xa9ac84], 0x3f800000 */ W32((u32)(0xa9ac84u), 0x3f800000u);
    /* 00754b6a: mov dword ptr [0xa9ac88], 0x41000000 */ W32((u32)(0xa9ac88u), 0x41000000u);
    /* 00754b74: mov dword ptr [0xa9ac8c], 0x3fc00000 */ W32((u32)(0xa9ac8cu), 0x3fc00000u);
    /* 00754b7e: ret  */ FN_RET(0x00754b60); r_esp += 4; return;
}

void f_00754b80(void) /* sub_754B80 */
{
    FN_ENTER(0x00754b80);
    /* 00754b80: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00754b81: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00754b83: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00754b85: call 0x754ba4 */ r_esp -= 4; W32(r_esp, 0x754b8au); f_00754ba4();
    /* 00754b8a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00754b8e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00754b90: jne 0x754b96 */ if (!fZ) goto L_00754b96;
L_00754b92:; BB(0x00754b92);
    /* 00754b92: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00754b93: ret 4 */ FN_RET(0x00754b80); r_esp += 8; return;
L_00754b96:; BB(0x00754b96);
    /* 00754b96: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00754b97: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x754b9cu); f_005c2f74();
    /* 00754b9c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00754b9d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00754b9e: ret 4 */ FN_RET(0x00754b80); r_esp += 8; return;
}

void f_00754ba4(void) /* sub_754BA4 */
{
    FN_ENTER(0x00754ba4);
    /* 00754ba4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00754ba5: mov ebp, esp */ r_ebp = r_esp;
    /* 00754ba7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00754ba9: push 0x8f2edc */ { u32 v = 0x8f2edcu; r_esp -= 4; W32(r_esp, v); }
    /* 00754bae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00754bb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00754bb5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00754bbc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00754bbf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00754bc2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00754bc5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00754bc8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00754bcb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00754bce: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00754bd5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00754bd8: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 00754bdb: mov dword ptr [ecx], 0xb426d0 */ W32((u32)(r_ecx), 0xb426d0u);
    /* 00754be1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00754be3: je 0x754bfc */ if (fZ) goto L_00754bfc;
L_00754be5:; BB(0x00754be5);
    /* 00754be5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00754be8: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00754bec: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00754bf1: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00754bf5: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
L_00754bfc:; BB(0x00754bfc);
    /* 00754bfc: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 00754bff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00754c01: je 0x754c14 */ if (fZ) goto L_00754c14;
L_00754c03:; BB(0x00754c03);
    /* 00754c03: mov ecx, eax */ r_ecx = r_eax;
    /* 00754c05: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x754c0au); f_0073d160();
    /* 00754c0a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00754c0d: mov dword ptr [ecx + 0x38], 0 */ W32((u32)(r_ecx+0x38u), 0x0u);
L_00754c14:; BB(0x00754c14);
    /* 00754c14: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 00754c17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00754c19: je 0x754c2c */ if (fZ) goto L_00754c2c;
L_00754c1b:; BB(0x00754c1b);
    /* 00754c1b: mov ecx, eax */ r_ecx = r_eax;
    /* 00754c1d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x754c22u); f_007127b0();
    /* 00754c22: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00754c25: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
L_00754c2c:; BB(0x00754c2c);
    /* 00754c2c: mov eax, dword ptr [ecx + 0x34] */ r_eax = R32((u32)(r_ecx+0x34u));
    /* 00754c2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00754c31: je 0x754c44 */ if (fZ) goto L_00754c44;
L_00754c33:; BB(0x00754c33);
    /* 00754c33: mov ecx, eax */ r_ecx = r_eax;
    /* 00754c35: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x754c3au); f_007127b0();
    /* 00754c3a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00754c3d: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
L_00754c44:; BB(0x00754c44);
    /* 00754c44: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00754c47: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00754c49: je 0x754c5c */ if (fZ) goto L_00754c5c;
L_00754c4b:; BB(0x00754c4b);
    /* 00754c4b: mov ecx, eax */ r_ecx = r_eax;
    /* 00754c4d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x754c52u); f_007127b0();
    /* 00754c52: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00754c55: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
L_00754c5c:; BB(0x00754c5c);
    /* 00754c5c: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 00754c5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00754c61: je 0x754c71 */ if (fZ) goto L_00754c71;
L_00754c63:; BB(0x00754c63);
    /* 00754c63: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 00754c69: call 0x7f2820 */ r_esp -= 4; W32(r_esp, 0x754c6eu); f_007f2820();
    /* 00754c6e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_00754c71:; BB(0x00754c71);
    /* 00754c71: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00754c78: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x754c7du); f_008171e8();
    /* 00754c7d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00754c80: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00754c87: mov esp, ebp */ r_esp = r_ebp;
    /* 00754c89: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00754c8a: ret  */ FN_RET(0x00754ba4); r_esp += 4; return;
}

void f_00754c8c(void) /* sub_754C8C */
{
    FN_ENTER(0x00754c8c);
    /* 00754c8c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00754c8d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00754c8e: mov edi, ecx */ r_edi = r_ecx;
    /* 00754c90: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00754c94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00754c95: mov ecx, edi */ r_ecx = r_edi;
    /* 00754c97: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x754c9cu); f_008193cc();
    /* 00754c9c: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00754ca0: mov dword ptr [edi], 0xb426d0 */ W32((u32)(r_edi), 0xb426d0u);
    /* 00754ca6: mov edx, dword ptr [0x9f46a0] */ r_edx = R32((u32)(0x9f46a0u));
    /* 00754cac: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 00754caf: mov dword ptr [edi + 0x2c], ebp */ W32((u32)(r_edi+0x2cu), r_ebp);
    /* 00754cb2: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 00754cb5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00754cb7: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00754cba: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 00754cbd: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 00754cc0: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 00754cc3: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 00754cc6: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 00754cc9: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 00754ccc: mov byte ptr [edi + 0x1c], al */ W8((u32)(r_edi+0x1cu), (u8)r_eax);
    /* 00754ccf: mov eax, edi */ r_eax = r_edi;
    /* 00754cd1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00754cd2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00754cd3: ret 8 */ FN_RET(0x00754c8c); r_esp += 12; return;
}

void f_00754cd8(void) /* sub_754CD8 */
{
    FN_ENTER(0x00754cd8);
    /* 00754cd8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00754cd9: mov ebp, esp */ r_ebp = r_esp;
    /* 00754cdb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00754cdd: push 0x8f2f1e */ { u32 v = 0x8f2f1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00754ce2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00754ce8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00754ce9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00754cf0: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00754cf3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00754cf6: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00754cf9: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00754cfc: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00754cff: movzx eax, byte ptr [ecx + 0x1c] */ r_eax = (u32)R8((u32)(r_ecx+0x1cu));
    /* 00754d03: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00754d06: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00754d09: ja 0x75506e */ if ((!fC&&!fZ)) goto L_0075506e;
L_00754d0f:; BB(0x00754d0f);
    /* 00754d0f: mov eax, dword ptr [eax*4 + 0x973f90] */ r_eax = R32((u32)(r_eax*4+0x973f90u));
    /* 00754d16: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0075506e:; BB(0x0075506e);
    /* 0075506e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00755071: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00755074: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075507b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075507d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075507e: ret  */ FN_RET(0x00754cd8); r_esp += 4; return;
}

void f_00754d18(void)
{
    FN_ENTER(0x00754d18);
    /* 00754d18: mov eax, ecx */ r_eax = r_ecx;
    /* 00754d1a: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00754d1d: jmp 0x754d3e */ goto L_00754d3e;
L_00754d3e:; BB(0x00754d3e);
    /* 00754d3e: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x754d43u); f_0073d114();
    /* 00754d43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00754d45: je 0x754d5c */ if (fZ) goto L_00754d5c;
L_00754d47:; BB(0x00754d47);
    /* 00754d47: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754d4a: mov byte ptr [eax + 0x1c], 3 */ W8((u32)(r_eax+0x1cu), 0x3u);
    /* 00754d4e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00754d51: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00754d58: mov esp, ebp */ r_esp = r_ebp;
    /* 00754d5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00754d5b: ret  */ FN_RET(0x00754d18); r_esp += 4; return;
L_00754d5c:; BB(0x00754d5c);
    /* 00754d5c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754d5f: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00754d62: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x754d67u); f_0073ce50();
    /* 00754d67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00754d69: je 0x75506e */ if (fZ) goto L_0075506e;
L_00754d6f:; BB(0x00754d6f);
    /* 00754d6f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754d72: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00754d75: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x754d7au); f_0073d134();
    /* 00754d7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00754d7c: je 0x754d8a */ if (fZ) goto L_00754d8a;
L_00754d7e:; BB(0x00754d7e);
    /* 00754d7e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754d81: mov byte ptr [eax + 0x1c], 3 */ W8((u32)(r_eax+0x1cu), 0x3u);
    /* 00754d85: jmp 0x75506e */ goto L_0075506e;
L_00754d8a:; BB(0x00754d8a);
    /* 00754d8a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754d8d: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00754d90: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x754d95u); f_00737d90();
    /* 00754d95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00754d96: call 0x77d6bc */ r_esp -= 4; W32(r_esp, 0x754d9bu); f_0077d6bc();
    /* 00754d9b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00754d9c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754d9f: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00754da3: jmp 0x75506e */ goto L_0075506e;
L_0075506e:; BB(0x0075506e);
    /* 0075506e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00755071: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00755074: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075507b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075507d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075507e: ret  */ FN_RET(0x00754d18); r_esp += 4; return;
}

void f_00754d1f(void)
{
    FN_ENTER(0x00754d1f);
    /* 00754d1f: mov eax, ecx */ r_eax = r_ecx;
    /* 00754d21: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00754d24: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x754d29u); f_0073600c();
    /* 00754d29: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754d2c: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00754d2f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00754d31: je 0x75507f */ if (fZ) goto L_0075507f;
L_00754d37:; BB(0x00754d37);
    /* 00754d37: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754d3a: mov byte ptr [eax + 0x1c], 0xa */ W8((u32)(r_eax+0x1cu), 0xau);
    /* 00754d3e: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x754d43u); f_0073d114();
    /* 00754d43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00754d45: je 0x754d5c */ if (fZ) goto L_00754d5c;
L_00754d47:; BB(0x00754d47);
    /* 00754d47: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754d4a: mov byte ptr [eax + 0x1c], 3 */ W8((u32)(r_eax+0x1cu), 0x3u);
    /* 00754d4e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00754d51: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00754d58: mov esp, ebp */ r_esp = r_ebp;
    /* 00754d5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00754d5b: ret  */ FN_RET(0x00754d1f); r_esp += 4; return;
L_00754d5c:; BB(0x00754d5c);
    /* 00754d5c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754d5f: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00754d62: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x754d67u); f_0073ce50();
    /* 00754d67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00754d69: je 0x75506e */ if (fZ) goto L_0075506e;
L_00754d6f:; BB(0x00754d6f);
    /* 00754d6f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754d72: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00754d75: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x754d7au); f_0073d134();
    /* 00754d7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00754d7c: je 0x754d8a */ if (fZ) goto L_00754d8a;
L_00754d7e:; BB(0x00754d7e);
    /* 00754d7e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754d81: mov byte ptr [eax + 0x1c], 3 */ W8((u32)(r_eax+0x1cu), 0x3u);
    /* 00754d85: jmp 0x75506e */ goto L_0075506e;
L_00754d8a:; BB(0x00754d8a);
    /* 00754d8a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754d8d: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00754d90: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x754d95u); f_00737d90();
    /* 00754d95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00754d96: call 0x77d6bc */ r_esp -= 4; W32(r_esp, 0x754d9bu); f_0077d6bc();
    /* 00754d9b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00754d9c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754d9f: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00754da3: jmp 0x75506e */ goto L_0075506e;
L_0075506e:; BB(0x0075506e);
    /* 0075506e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00755071: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00755074: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075507b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075507d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075507e: ret  */ FN_RET(0x00754d1f); r_esp += 4; return;
L_0075507f:; BB(0x0075507f);
    /* 0075507f: mov ecx, eax */ r_ecx = r_eax;
    /* 00755081: call 0x7552bc */ r_esp -= 4; W32(r_esp, 0x755086u); f_007552bc();
    /* 00755086: mov ecx, eax */ r_ecx = r_eax;
    /* 00755088: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075508b: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 0075508e: jmp 0x754d37 */ goto L_00754d37;
}

void f_00754da8(void)
{
    FN_ENTER(0x00754da8);
    /* 00754da8: mov eax, ecx */ r_eax = r_ecx;
    /* 00754daa: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00754dad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00754daf: je 0x754dc7 */ if (fZ) goto L_00754dc7;
L_00754db1:; BB(0x00754db1);
    /* 00754db1: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00754db5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00754dba: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00754dbe: mov edx, ecx */ r_edx = r_ecx;
    /* 00754dc0: mov dword ptr [edx + 0x3c], 0 */ W32((u32)(r_edx+0x3cu), 0x0u);
L_00754dc7:; BB(0x00754dc7);
    /* 00754dc7: mov eax, ecx */ r_eax = r_ecx;
    /* 00754dc9: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00754dcc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00754dce: je 0x7550a5 */ if (fZ) goto L_007550a5;
L_00754dd4:; BB(0x00754dd4);
    /* 00754dd4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754dd7: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00754dda: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00754ddc: je 0x755093 */ if (fZ) goto L_00755093;
L_00754de2:; BB(0x00754de2);
    /* 00754de2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00754de4: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x754de9u); f_00791748();
    /* 00754de9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00754dea: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754ded: mov byte ptr [eax + 0x1c], 8 */ W8((u32)(r_eax+0x1cu), 0x8u);
    /* 00754df1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754df4: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00754df7: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x754dfcu); f_0073d114();
    /* 00754dfc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00754dfe: je 0x754e18 */ if (fZ) goto L_00754e18;
L_00754e00:; BB(0x00754e00);
    /* 00754e00: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754e03: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00754e06: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00754e0a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00754e0d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00754e14: mov esp, ebp */ r_esp = r_ebp;
    /* 00754e16: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00754e17: ret  */ FN_RET(0x00754da8); r_esp += 4; return;
L_00754e18:; BB(0x00754e18);
    /* 00754e18: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754e1b: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00754e1e: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x754e23u); f_0073ce50();
    /* 00754e23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00754e25: je 0x75506e */ if (fZ) goto L_0075506e;
L_00754e2b:; BB(0x00754e2b);
    /* 00754e2b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754e2e: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00754e31: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x754e36u); f_0073d134();
    /* 00754e36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00754e38: je 0x754e46 */ if (fZ) goto L_00754e46;
L_00754e3a:; BB(0x00754e3a);
    /* 00754e3a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754e3d: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00754e41: jmp 0x75506e */ goto L_0075506e;
L_00754e46:; BB(0x00754e46);
    /* 00754e46: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00754e49: lea eax, [edx + 0x44] */ r_eax = (u32)(r_edx+0x44u);
    /* 00754e4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00754e4d: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00754e50: call 0x77d694 */ r_esp -= 4; W32(r_esp, 0x754e55u); f_0077d694();
    /* 00754e55: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00754e58: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754e5b: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00754e5f: jmp 0x75506e */ goto L_0075506e;
L_0075506e:; BB(0x0075506e);
    /* 0075506e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00755071: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00755074: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075507b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075507d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075507e: ret  */ FN_RET(0x00754da8); r_esp += 4; return;
L_00755093:; BB(0x00755093);
    /* 00755093: mov ecx, eax */ r_ecx = r_eax;
    /* 00755095: call 0x755274 */ r_esp -= 4; W32(r_esp, 0x75509au); f_00755274();
    /* 0075509a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075509d: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 007550a0: jmp 0x754de2 */ goto L_00754de2;
L_007550a5:; BB(0x007550a5);
    /* 007550a5: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 007550ac: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 007550ae: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7550b3u); f_005caba4();
    /* 007550b3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007550b6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007550b9: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 007550bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007550be: je 0x755105 */ if (fZ) goto L_00755105;
L_007550c0:; BB(0x007550c0);
    /* 007550c0: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 007550c7: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007550ce: push 0x76 */ { u32 v = 0x76u; r_esp -= 4; W32(r_esp, v); }
    /* 007550d0: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7550d5u); f_0073ec50();
    /* 007550d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007550d6: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 007550d9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007550dc: lea edx, [ebx + 0x44] */ r_edx = (u32)(r_ebx+0x44u);
    /* 007550df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007550e0: push dword ptr [ebx + 0x24] */ { u32 v = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007550e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007550e4: call 0x7401dc */ r_esp -= 4; W32(r_esp, 0x7550e9u); f_007401dc();
    /* 007550e9: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_007550f0:; BB(0x007550f0);
    /* 007550f0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007550f3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007550f6: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 007550f9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00755100: jmp 0x754dd4 */ goto L_00754dd4;
L_00755105:; BB(0x00755105);
    /* 00755105: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00755107: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0075510a: jmp 0x7550f0 */ goto L_007550f0;
}

void f_00754df1(void)
{
    FN_ENTER(0x00754df1);
    /* 00754df1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754df4: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00754df7: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x754dfcu); f_0073d114();
    /* 00754dfc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00754dfe: je 0x754e18 */ if (fZ) goto L_00754e18;
L_00754e00:; BB(0x00754e00);
    /* 00754e00: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754e03: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00754e06: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00754e0a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00754e0d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00754e14: mov esp, ebp */ r_esp = r_ebp;
    /* 00754e16: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00754e17: ret  */ FN_RET(0x00754df1); r_esp += 4; return;
L_00754e18:; BB(0x00754e18);
    /* 00754e18: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754e1b: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00754e1e: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x754e23u); f_0073ce50();
    /* 00754e23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00754e25: je 0x75506e */ if (fZ) goto L_0075506e;
L_00754e2b:; BB(0x00754e2b);
    /* 00754e2b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754e2e: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00754e31: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x754e36u); f_0073d134();
    /* 00754e36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00754e38: je 0x754e46 */ if (fZ) goto L_00754e46;
L_00754e3a:; BB(0x00754e3a);
    /* 00754e3a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754e3d: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00754e41: jmp 0x75506e */ goto L_0075506e;
L_00754e46:; BB(0x00754e46);
    /* 00754e46: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00754e49: lea eax, [edx + 0x44] */ r_eax = (u32)(r_edx+0x44u);
    /* 00754e4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00754e4d: push dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00754e50: call 0x77d694 */ r_esp -= 4; W32(r_esp, 0x754e55u); f_0077d694();
    /* 00754e55: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00754e58: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754e5b: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00754e5f: jmp 0x75506e */ goto L_0075506e;
L_0075506e:; BB(0x0075506e);
    /* 0075506e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00755071: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00755074: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075507b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075507d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075507e: ret  */ FN_RET(0x00754df1); r_esp += 4; return;
}

void f_00754e64(void)
{
    FN_ENTER(0x00754e64);
    /* 00754e64: mov eax, ecx */ r_eax = r_ecx;
    /* 00754e66: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00754e69: jmp 0x754eb9 */ goto L_00754eb9;
L_00754eb9:; BB(0x00754eb9);
    /* 00754eb9: movzx eax, word ptr [edx + 0x1e] */ r_eax = (u32)R16((u32)(r_edx+0x1eu));
    /* 00754ebd: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00754ebf: je 0x754ed6 */ if (fZ) goto L_00754ed6;
L_00754ec1:; BB(0x00754ec1);
    /* 00754ec1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754ec4: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00754ec8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00754ecb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00754ed2: mov esp, ebp */ r_esp = r_ebp;
    /* 00754ed4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00754ed5: ret  */ FN_RET(0x00754e64); r_esp += 4; return;
L_00754ed6:; BB(0x00754ed6);
    /* 00754ed6: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00754ed8: je 0x75506e */ if (fZ) goto L_0075506e;
L_00754ede:; BB(0x00754ede);
    /* 00754ede: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754ee1: mov byte ptr [eax + 0x1c], 7 */ W8((u32)(r_eax+0x1cu), 0x7u);
    /* 00754ee5: jmp 0x75506e */ goto L_0075506e;
L_0075506e:; BB(0x0075506e);
    /* 0075506e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00755071: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00755074: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075507b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075507d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075507e: ret  */ FN_RET(0x00754e64); r_esp += 4; return;
}

void f_00754e6b(void)
{
    FN_ENTER(0x00754e6b);
    /* 00754e6b: mov eax, ecx */ r_eax = r_ecx;
    /* 00754e6d: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00754e70: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00754e72: je 0x754e83 */ if (fZ) goto L_00754e83;
L_00754e74:; BB(0x00754e74);
    /* 00754e74: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x754e79u); f_007127b0();
    /* 00754e79: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754e7c: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_00754e83:; BB(0x00754e83);
    /* 00754e83: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00754e86: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00754e88: je 0x754ea7 */ if (fZ) goto L_00754ea7;
L_00754e8a:; BB(0x00754e8a);
    /* 00754e8a: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x754e8fu); f_00737d90();
    /* 00754e8f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00754e92: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 00754e95: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00754e98: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x754e9du); f_007127b0();
    /* 00754e9d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754ea0: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_00754ea7:; BB(0x00754ea7);
    /* 00754ea7: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00754eaa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00754eac: je 0x75510c */ if (fZ) goto L_0075510c;
L_00754eb2:; BB(0x00754eb2);
    /* 00754eb2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754eb5: mov byte ptr [eax + 0x1c], 6 */ W8((u32)(r_eax+0x1cu), 0x6u);
    /* 00754eb9: movzx eax, word ptr [edx + 0x1e] */ r_eax = (u32)R16((u32)(r_edx+0x1eu));
    /* 00754ebd: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00754ebf: je 0x754ed6 */ if (fZ) goto L_00754ed6;
L_00754ec1:; BB(0x00754ec1);
    /* 00754ec1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754ec4: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00754ec8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00754ecb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00754ed2: mov esp, ebp */ r_esp = r_ebp;
    /* 00754ed4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00754ed5: ret  */ FN_RET(0x00754e6b); r_esp += 4; return;
L_00754ed6:; BB(0x00754ed6);
    /* 00754ed6: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00754ed8: je 0x75506e */ if (fZ) goto L_0075506e;
L_00754ede:; BB(0x00754ede);
    /* 00754ede: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754ee1: mov byte ptr [eax + 0x1c], 7 */ W8((u32)(r_eax+0x1cu), 0x7u);
    /* 00754ee5: jmp 0x75506e */ goto L_0075506e;
L_0075506e:; BB(0x0075506e);
    /* 0075506e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00755071: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00755074: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075507b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075507d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075507e: ret  */ FN_RET(0x00754e6b); r_esp += 4; return;
L_0075510c:; BB(0x0075510c);
    /* 0075510c: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00755113: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 00755115: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x75511au); f_005caba4();
    /* 0075511a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0075511d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00755120: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00755123: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755125: je 0x755188 */ if (fZ) goto L_00755188;
L_00755127:; BB(0x00755127);
    /* 00755127: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0075512e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00755135: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00755138: mov ecx, eax */ r_ecx = r_eax;
    /* 0075513a: lea eax, [edx + 0x44] */ r_eax = (u32)(r_edx+0x44u);
    /* 0075513d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075513e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075513f: call 0x713540 */ r_esp -= 4; W32(r_esp, 0x755144u); f_00713540();
    /* 00755144: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0075514b:; BB(0x0075514b);
    /* 0075514b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0075514e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00755151: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 00755154: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075515b: mov ecx, eax */ r_ecx = r_eax;
    /* 0075515d: call 0x78ed3c */ r_esp -= 4; W32(r_esp, 0x755162u); f_0078ed3c();
    /* 00755162: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00755165: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00755168: call 0x7140c8 */ r_esp -= 4; W32(r_esp, 0x75516du); f_007140c8();
    /* 0075516d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00755170: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 00755173: movzx eax, word ptr [edx + 0x1e] */ r_eax = (u32)R16((u32)(r_edx+0x1eu));
    /* 00755177: or eax, 0xffff0080 */ {  u32 a = r_eax; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075517c: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 00755180: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 00755183: jmp 0x754eb2 */ goto L_00754eb2;
L_00755188:; BB(0x00755188);
    /* 00755188: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075518a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0075518d: jmp 0x75514b */ goto L_0075514b;
}

void f_00754eea(void)
{
    FN_ENTER(0x00754eea);
    /* 00754eea: mov eax, ecx */ r_eax = r_ecx;
    /* 00754eec: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00754eef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00754ef1: je 0x754f02 */ if (fZ) goto L_00754f02;
L_00754ef3:; BB(0x00754ef3);
    /* 00754ef3: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x754ef8u); f_0073d160();
    /* 00754ef8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754efb: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_00754f02:; BB(0x00754f02);
    /* 00754f02: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00754f05: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00754f07: je 0x75518f */ if (fZ) goto L_0075518f;
L_00754f0d:; BB(0x00754f0d);
    /* 00754f0d: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00754f14: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00754f19: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 00754f1c: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 00754f23: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00754f25: je 0x754f2e */ if (fZ) goto L_00754f2e;
L_00754f27:; BB(0x00754f27);
    /* 00754f27: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00754f29: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x754f2eu); f_00760acc();
L_00754f2e:; BB(0x00754f2e);
    /* 00754f2e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754f31: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00754f34: call 0x73605c */ r_esp -= 4; W32(r_esp, 0x754f39u); f_0073605c();
    /* 00754f39: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754f3c: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 00754f40: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754f43: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00754f46: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00754f4d: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00754f4f: je 0x754f66 */ if (fZ) goto L_00754f66;
L_00754f51:; BB(0x00754f51);
    /* 00754f51: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754f54: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00754f58: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00754f5b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00754f62: mov esp, ebp */ r_esp = r_ebp;
    /* 00754f64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00754f65: ret  */ FN_RET(0x00754eea); r_esp += 4; return;
L_00754f66:; BB(0x00754f66);
    /* 00754f66: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00754f68: je 0x75506e */ if (fZ) goto L_0075506e;
L_00754f6e:; BB(0x00754f6e);
    /* 00754f6e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754f71: mov dword ptr [eax + 0x28], 1 */ W32((u32)(r_eax+0x28u), 0x1u);
    /* 00754f78: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x754f7du); f_007365f4();
    /* 00754f7d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00754f80: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 00754f83: jmp 0x75506e */ goto L_0075506e;
L_0075506e:; BB(0x0075506e);
    /* 0075506e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00755071: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00755074: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075507b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075507d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075507e: ret  */ FN_RET(0x00754eea); r_esp += 4; return;
L_0075518f:; BB(0x0075518f);
    /* 0075518f: mov ecx, eax */ r_ecx = r_eax;
    /* 00755191: call 0x7551d0 */ r_esp -= 4; W32(r_esp, 0x755196u); f_007551d0();
    /* 00755196: mov edx, eax */ r_edx = r_eax;
    /* 00755198: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075519b: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0075519e: jmp 0x754f0d */ goto L_00754f0d;
}

void f_00754f40(void)
{
    FN_ENTER(0x00754f40);
    /* 00754f40: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754f43: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00754f46: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00754f4d: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00754f4f: je 0x754f66 */ if (fZ) goto L_00754f66;
L_00754f51:; BB(0x00754f51);
    /* 00754f51: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754f54: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00754f58: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00754f5b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00754f62: mov esp, ebp */ r_esp = r_ebp;
    /* 00754f64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00754f65: ret  */ FN_RET(0x00754f40); r_esp += 4; return;
L_00754f66:; BB(0x00754f66);
    /* 00754f66: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00754f68: je 0x75506e */ if (fZ) goto L_0075506e;
L_00754f6e:; BB(0x00754f6e);
    /* 00754f6e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754f71: mov dword ptr [eax + 0x28], 1 */ W32((u32)(r_eax+0x28u), 0x1u);
    /* 00754f78: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x754f7du); f_007365f4();
    /* 00754f7d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00754f80: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 00754f83: jmp 0x75506e */ goto L_0075506e;
L_0075506e:; BB(0x0075506e);
    /* 0075506e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00755071: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00755074: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075507b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075507d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075507e: ret  */ FN_RET(0x00754f40); r_esp += 4; return;
}

void f_00754f88(void)
{
    FN_ENTER(0x00754f88);
    /* 00754f88: mov eax, ecx */ r_eax = r_ecx;
    /* 00754f8a: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00754f8d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00754f8f: je 0x754fa7 */ if (fZ) goto L_00754fa7;
L_00754f91:; BB(0x00754f91);
    /* 00754f91: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00754f95: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00754f9a: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00754f9e: mov edx, ecx */ r_edx = r_ecx;
    /* 00754fa0: mov dword ptr [edx + 0x3c], 0 */ W32((u32)(r_edx+0x3cu), 0x0u);
L_00754fa7:; BB(0x00754fa7);
    /* 00754fa7: mov eax, ecx */ r_eax = r_ecx;
    /* 00754fa9: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00754fac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00754fae: je 0x754fbf */ if (fZ) goto L_00754fbf;
L_00754fb0:; BB(0x00754fb0);
    /* 00754fb0: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x754fb5u); f_0073d160();
    /* 00754fb5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754fb8: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_00754fbf:; BB(0x00754fbf);
    /* 00754fbf: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00754fc2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00754fc4: je 0x754fd5 */ if (fZ) goto L_00754fd5;
L_00754fc6:; BB(0x00754fc6);
    /* 00754fc6: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x754fcbu); f_007127b0();
    /* 00754fcb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754fce: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
L_00754fd5:; BB(0x00754fd5);
    /* 00754fd5: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00754fd8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00754fda: je 0x754feb */ if (fZ) goto L_00754feb;
L_00754fdc:; BB(0x00754fdc);
    /* 00754fdc: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x754fe1u); f_007127b0();
    /* 00754fe1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754fe4: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_00754feb:; BB(0x00754feb);
    /* 00754feb: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00754fee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00754ff0: je 0x7551a3 */ if (fZ) goto L_007551a3;
L_00754ff6:; BB(0x00754ff6);
    /* 00754ff6: call 0x755640 */ r_esp -= 4; W32(r_esp, 0x754ffbu); f_00755640();
    /* 00754ffb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00754ffe: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00755001: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 00755008: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0075500e: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 00755015: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 00755018: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075501a: je 0x755023 */ if (fZ) goto L_00755023;
L_0075501c:; BB(0x0075501c);
    /* 0075501c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075501e: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x755023u); f_00760acc();
L_00755023:; BB(0x00755023);
    /* 00755023: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00755025: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x75502au); f_00791748();
    /* 0075502a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075502b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075502e: mov byte ptr [eax + 0x1c], 2 */ W8((u32)(r_eax+0x1cu), 0x2u);
    /* 00755032: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00755035: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00755038: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0075503f: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00755041: je 0x755063 */ if (fZ) goto L_00755063;
L_00755043:; BB(0x00755043);
    /* 00755043: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00755046: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00755049: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0075504b: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x75504eu); call_ind(t); }
    /* 0075504e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00755051: mov byte ptr [eax + 0x1c], 0xb */ W8((u32)(r_eax+0x1cu), 0xbu);
    /* 00755055: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00755058: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075505f: mov esp, ebp */ r_esp = r_ebp;
    /* 00755061: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755062: ret  */ FN_RET(0x00754f88); r_esp += 4; return;
L_00755063:; BB(0x00755063);
    /* 00755063: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00755065: je 0x75506e */ if (fZ) goto L_0075506e;
L_00755067:; BB(0x00755067);
    /* 00755067: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075506a: mov byte ptr [eax + 0x1c], 3 */ W8((u32)(r_eax+0x1cu), 0x3u);
L_0075506e:; BB(0x0075506e);
    /* 0075506e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00755071: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00755074: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075507b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075507d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075507e: ret  */ FN_RET(0x00754f88); r_esp += 4; return;
L_007551a3:; BB(0x007551a3);
    /* 007551a3: mov ecx, eax */ r_ecx = r_eax;
    /* 007551a5: call 0x7551b8 */ r_esp -= 4; W32(r_esp, 0x7551aau); f_007551b8();
    /* 007551aa: mov ecx, eax */ r_ecx = r_eax;
    /* 007551ac: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007551af: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 007551b2: jmp 0x754ff6 */ goto L_00754ff6;
}

