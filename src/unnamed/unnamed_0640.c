#include "protos.h"

void f_00640000(void)
{
    FN_ENTER(0x00640000);
    /* 00640000: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00640003: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x640008u); f_005b8610();
    /* 00640008: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064000b: mov ecx, dword ptr [0xa8f268] */ r_ecx = R32((u32)(0xa8f268u));
    /* 00640011: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00640013: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00640016: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x64001bu); f_005b8624();
    /* 0064001b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064001e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640020: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00640023: push 0x9c6ca8 */ { u32 v = 0x9c6ca8u; r_esp -= 4; W32(r_esp, v); }
    /* 00640028: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x64002du); f_007b9a88();
    /* 0064002d: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00640032: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00640035: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640037: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x64003cu); f_007b52c4();
    /* 0064003c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064003f: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x640044u); f_007b4f54();
    /* 00640044: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00640047: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 0064004a: mov esi, dword ptr [ecx + 0x84] */ r_esi = R32((u32)(r_ecx+0x84u));
    /* 00640050: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00640052: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00640059: add esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0064005f: mov dword ptr [ecx + 0x33c], 0x44480000 */ W32((u32)(r_ecx+0x33cu), 0x44480000u);
    /* 00640069: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 0064006c: fld dword ptr [ebx + 0x14] */ FPUSH(R_F32((u32)(r_ebx+0x14u)));
    /* 0064006f: fadd dword ptr [0x934780] */ ST(0) = ST(0) + R_F32((u32)(0x934780u));
    /* 00640075: mov dword ptr [ecx + 0x344], esi */ W32((u32)(r_ecx+0x344u), r_esi);
    /* 0064007b: fstp dword ptr [ecx + 0x340] */ W_F32((u32)(r_ecx+0x340u), ST(0)); FPOP();
    /* 00640081: add ecx, 0x348 */ {  u32 a = r_ecx; u32 b = 0x348u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00640087: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x64008cu); f_0057739c();
    /* 0064008c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064008f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00640092: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00640095: mov dword ptr [eax + 0x364], 1 */ W32((u32)(r_eax+0x364u), 0x1u);
    /* 0064009f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006400a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006400a9: mov esp, ebp */ r_esp = r_ebp;
    /* 006400ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006400ac: ret 4 */ FN_RET(0x00640000); r_esp += 8; return;
}

void f_00640020(void)
{
    FN_ENTER(0x00640020);
    /* 00640020: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00640023: push 0x9c6ca8 */ { u32 v = 0x9c6ca8u; r_esp -= 4; W32(r_esp, v); }
    /* 00640028: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x64002du); f_007b9a88();
    /* 0064002d: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00640032: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00640035: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640037: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x64003cu); f_007b52c4();
    /* 0064003c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064003f: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x640044u); f_007b4f54();
    /* 00640044: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00640047: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 0064004a: mov esi, dword ptr [ecx + 0x84] */ r_esi = R32((u32)(r_ecx+0x84u));
    /* 00640050: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00640052: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00640059: add esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0064005f: mov dword ptr [ecx + 0x33c], 0x44480000 */ W32((u32)(r_ecx+0x33cu), 0x44480000u);
    /* 00640069: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 0064006c: fld dword ptr [ebx + 0x14] */ FPUSH(R_F32((u32)(r_ebx+0x14u)));
    /* 0064006f: fadd dword ptr [0x934780] */ ST(0) = ST(0) + R_F32((u32)(0x934780u));
    /* 00640075: mov dword ptr [ecx + 0x344], esi */ W32((u32)(r_ecx+0x344u), r_esi);
    /* 0064007b: fstp dword ptr [ecx + 0x340] */ W_F32((u32)(r_ecx+0x340u), ST(0)); FPOP();
    /* 00640081: add ecx, 0x348 */ {  u32 a = r_ecx; u32 b = 0x348u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00640087: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x64008cu); f_0057739c();
    /* 0064008c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064008f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00640092: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00640095: mov dword ptr [eax + 0x364], 1 */ W32((u32)(r_eax+0x364u), 0x1u);
    /* 0064009f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006400a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006400a9: mov esp, ebp */ r_esp = r_ebp;
    /* 006400ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006400ac: ret 4 */ FN_RET(0x00640020); r_esp += 8; return;
}

void f_00640025(void)
{
    FN_ENTER(0x00640025);
    /* 00640025: insb byte ptr es:[edi], dx */ UNSUP(0x00640025, "insb byte ptr es:[edi], dx");
    /* 00640026: pushfd  */ { u32 v = 0x202u | rt_eflags_extra | (u32)fC | ((u32)fP << 2) | ((u32)fA << 4) | ((u32)fZ << 6) | ((u32)fS << 7) | ((u32)fO << 11); r_esp -= 4; W32(r_esp, v); }
    /* 00640027: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00640029: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064002a: lcall 0, 0x680017 */ UNSUP(0x0064002a, "lcall 0, 0x680017");
    /* 00640031: or byte ptr [ebx + 0x6adc4d], cl */ { u32 ad = (u32)(r_ebx+0x6adc4du);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 00640037: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x64003cu); f_007b52c4();
    /* 0064003c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064003f: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x640044u); f_007b4f54();
    /* 00640044: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00640047: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 0064004a: mov esi, dword ptr [ecx + 0x84] */ r_esi = R32((u32)(r_ecx+0x84u));
    /* 00640050: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00640052: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00640059: add esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0064005f: mov dword ptr [ecx + 0x33c], 0x44480000 */ W32((u32)(r_ecx+0x33cu), 0x44480000u);
    /* 00640069: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 0064006c: fld dword ptr [ebx + 0x14] */ FPUSH(R_F32((u32)(r_ebx+0x14u)));
    /* 0064006f: fadd dword ptr [0x934780] */ ST(0) = ST(0) + R_F32((u32)(0x934780u));
    /* 00640075: mov dword ptr [ecx + 0x344], esi */ W32((u32)(r_ecx+0x344u), r_esi);
    /* 0064007b: fstp dword ptr [ecx + 0x340] */ W_F32((u32)(r_ecx+0x340u), ST(0)); FPOP();
    /* 00640081: add ecx, 0x348 */ {  u32 a = r_ecx; u32 b = 0x348u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00640087: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x64008cu); f_0057739c();
    /* 0064008c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064008f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00640092: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00640095: mov dword ptr [eax + 0x364], 1 */ W32((u32)(r_eax+0x364u), 0x1u);
    /* 0064009f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006400a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006400a9: mov esp, ebp */ r_esp = r_ebp;
    /* 006400ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006400ac: ret 4 */ FN_RET(0x00640025); r_esp += 8; return;
}

void f_00640031(void)
{
    FN_ENTER(0x00640031);
    /* 00640031: or byte ptr [ebx + 0x6adc4d], cl */ { u32 ad = (u32)(r_ebx+0x6adc4du);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 00640037: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x64003cu); f_007b52c4();
    /* 0064003c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064003f: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x640044u); f_007b4f54();
    /* 00640044: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00640047: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 0064004a: mov esi, dword ptr [ecx + 0x84] */ r_esi = R32((u32)(r_ecx+0x84u));
    /* 00640050: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00640052: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00640059: add esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0064005f: mov dword ptr [ecx + 0x33c], 0x44480000 */ W32((u32)(r_ecx+0x33cu), 0x44480000u);
    /* 00640069: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 0064006c: fld dword ptr [ebx + 0x14] */ FPUSH(R_F32((u32)(r_ebx+0x14u)));
    /* 0064006f: fadd dword ptr [0x934780] */ ST(0) = ST(0) + R_F32((u32)(0x934780u));
    /* 00640075: mov dword ptr [ecx + 0x344], esi */ W32((u32)(r_ecx+0x344u), r_esi);
    /* 0064007b: fstp dword ptr [ecx + 0x340] */ W_F32((u32)(r_ecx+0x340u), ST(0)); FPOP();
    /* 00640081: add ecx, 0x348 */ {  u32 a = r_ecx; u32 b = 0x348u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00640087: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x64008cu); f_0057739c();
    /* 0064008c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064008f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00640092: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00640095: mov dword ptr [eax + 0x364], 1 */ W32((u32)(r_eax+0x364u), 0x1u);
    /* 0064009f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006400a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006400a9: mov esp, ebp */ r_esp = r_ebp;
    /* 006400ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006400ac: ret 4 */ FN_RET(0x00640031); r_esp += 8; return;
}

void f_00640032(void)
{
    FN_ENTER(0x00640032);
    /* 00640032: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00640035: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640037: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x64003cu); f_007b52c4();
    /* 0064003c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064003f: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x640044u); f_007b4f54();
    /* 00640044: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00640047: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 0064004a: mov esi, dword ptr [ecx + 0x84] */ r_esi = R32((u32)(r_ecx+0x84u));
    /* 00640050: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00640052: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00640059: add esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0064005f: mov dword ptr [ecx + 0x33c], 0x44480000 */ W32((u32)(r_ecx+0x33cu), 0x44480000u);
    /* 00640069: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 0064006c: fld dword ptr [ebx + 0x14] */ FPUSH(R_F32((u32)(r_ebx+0x14u)));
    /* 0064006f: fadd dword ptr [0x934780] */ ST(0) = ST(0) + R_F32((u32)(0x934780u));
    /* 00640075: mov dword ptr [ecx + 0x344], esi */ W32((u32)(r_ecx+0x344u), r_esi);
    /* 0064007b: fstp dword ptr [ecx + 0x340] */ W_F32((u32)(r_ecx+0x340u), ST(0)); FPOP();
    /* 00640081: add ecx, 0x348 */ {  u32 a = r_ecx; u32 b = 0x348u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00640087: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x64008cu); f_0057739c();
    /* 0064008c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064008f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00640092: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00640095: mov dword ptr [eax + 0x364], 1 */ W32((u32)(r_eax+0x364u), 0x1u);
    /* 0064009f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006400a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006400a9: mov esp, ebp */ r_esp = r_ebp;
    /* 006400ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006400ac: ret 4 */ FN_RET(0x00640032); r_esp += 8; return;
}

void f_00640039(void)
{
    FN_ENTER(0x00640039);
    /* 00640039: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064003a: pop ss */ UNSUP(0x0064003a, "pop ss");
    /* 0064003b: add byte ptr [ebx + 0x10e8dc4d], cl */ { u32 ad = (u32)(r_ebx+0x10e8dc4du);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00640041: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00640042: pop ss */ UNSUP(0x00640042, "pop ss");
    /* 00640043: add byte ptr [ebx + 0x518bdc4d], cl */ { u32 ad = (u32)(r_ebx+0x518bdc4du);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00640049: xor al, 0x8b */ {  u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0064004b: mov cl, 0x84 */ r_ecx = (r_ecx & 0xffffff00u) | ((0x84u) & 0xffu);
    /* 0064004d: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0064004f: add byte ptr [ebx], dh */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00640051: shl byte ptr [esi - 0x77], 0x81 */ { u32 ad = (u32)(r_esi+0xffffff89u); u32 c = (1u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r);  } }
    /* 00640055: add eax, dword ptr cs:[eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00640058: add byte ptr [ecx + 0x100c6], al */ { u32 ad = (u32)(r_ecx+0x100c6u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0064005e: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00640060: cmp dword ptr [ebx + eax], 0 */ {  u32 a = R32((u32)(r_ebx+r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;   }
    /* 00640067: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00640068: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640069: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 0064006c: fld dword ptr [ebx + 0x14] */ FPUSH(R_F32((u32)(r_ebx+0x14u)));
    /* 0064006f: fadd dword ptr [0x934780] */ ST(0) = ST(0) + R_F32((u32)(0x934780u));
    /* 00640075: mov dword ptr [ecx + 0x344], esi */ W32((u32)(r_ecx+0x344u), r_esi);
    /* 0064007b: fstp dword ptr [ecx + 0x340] */ W_F32((u32)(r_ecx+0x340u), ST(0)); FPOP();
    /* 00640081: add ecx, 0x348 */ {  u32 a = r_ecx; u32 b = 0x348u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00640087: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x64008cu); f_0057739c();
    /* 0064008c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064008f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00640092: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00640095: mov dword ptr [eax + 0x364], 1 */ W32((u32)(r_eax+0x364u), 0x1u);
    /* 0064009f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006400a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006400a9: mov esp, ebp */ r_esp = r_ebp;
    /* 006400ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006400ac: ret 4 */ FN_RET(0x00640039); r_esp += 8; return;
}

void f_00640042(void)
{
    FN_ENTER(0x00640042);
    /* 00640042: pop ss */ UNSUP(0x00640042, "pop ss");
    /* 00640043: add byte ptr [ebx + 0x518bdc4d], cl */ { u32 ad = (u32)(r_ebx+0x518bdc4du);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00640049: xor al, 0x8b */ {  u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0064004b: mov cl, 0x84 */ r_ecx = (r_ecx & 0xffffff00u) | ((0x84u) & 0xffu);
    /* 0064004d: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0064004f: add byte ptr [ebx], dh */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00640051: shl byte ptr [esi - 0x77], 0x81 */ { u32 ad = (u32)(r_esi+0xffffff89u); u32 c = (1u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r);  } }
    /* 00640055: add eax, dword ptr cs:[eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00640058: add byte ptr [ecx + 0x100c6], al */ { u32 ad = (u32)(r_ecx+0x100c6u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0064005e: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00640060: cmp dword ptr [ebx + eax], 0 */ {  u32 a = R32((u32)(r_ebx+r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;   }
    /* 00640067: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00640068: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640069: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 0064006c: fld dword ptr [ebx + 0x14] */ FPUSH(R_F32((u32)(r_ebx+0x14u)));
    /* 0064006f: fadd dword ptr [0x934780] */ ST(0) = ST(0) + R_F32((u32)(0x934780u));
    /* 00640075: mov dword ptr [ecx + 0x344], esi */ W32((u32)(r_ecx+0x344u), r_esi);
    /* 0064007b: fstp dword ptr [ecx + 0x340] */ W_F32((u32)(r_ecx+0x340u), ST(0)); FPOP();
    /* 00640081: add ecx, 0x348 */ {  u32 a = r_ecx; u32 b = 0x348u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00640087: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x64008cu); f_0057739c();
    /* 0064008c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064008f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00640092: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00640095: mov dword ptr [eax + 0x364], 1 */ W32((u32)(r_eax+0x364u), 0x1u);
    /* 0064009f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006400a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006400a9: mov esp, ebp */ r_esp = r_ebp;
    /* 006400ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006400ac: ret 4 */ FN_RET(0x00640042); r_esp += 8; return;
}

void f_00640061(void)
{
    FN_ENTER(0x00640061);
    /* 00640061: cmp al, 3 */ {  u32 a = (u8)r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffu;   }
    /* 00640063: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00640065: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00640067: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00640068: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640069: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 0064006c: fld dword ptr [ebx + 0x14] */ FPUSH(R_F32((u32)(r_ebx+0x14u)));
    /* 0064006f: fadd dword ptr [0x934780] */ ST(0) = ST(0) + R_F32((u32)(0x934780u));
    /* 00640075: mov dword ptr [ecx + 0x344], esi */ W32((u32)(r_ecx+0x344u), r_esi);
    /* 0064007b: fstp dword ptr [ecx + 0x340] */ W_F32((u32)(r_ecx+0x340u), ST(0)); FPOP();
    /* 00640081: add ecx, 0x348 */ {  u32 a = r_ecx; u32 b = 0x348u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00640087: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x64008cu); f_0057739c();
    /* 0064008c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064008f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00640092: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00640095: mov dword ptr [eax + 0x364], 1 */ W32((u32)(r_eax+0x364u), 0x1u);
    /* 0064009f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006400a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006400a9: mov esp, ebp */ r_esp = r_ebp;
    /* 006400ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006400ac: ret 4 */ FN_RET(0x00640061); r_esp += 8; return;
}

void f_00640064(void)
{
    FN_ENTER(0x00640064);
    /* 00640064: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00640066: add byte ptr [eax + 0x44], cl */ { u32 ad = (u32)(r_eax+0x44u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00640069: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 0064006c: fld dword ptr [ebx + 0x14] */ FPUSH(R_F32((u32)(r_ebx+0x14u)));
    /* 0064006f: fadd dword ptr [0x934780] */ ST(0) = ST(0) + R_F32((u32)(0x934780u));
    /* 00640075: mov dword ptr [ecx + 0x344], esi */ W32((u32)(r_ecx+0x344u), r_esi);
    /* 0064007b: fstp dword ptr [ecx + 0x340] */ W_F32((u32)(r_ecx+0x340u), ST(0)); FPOP();
    /* 00640081: add ecx, 0x348 */ {  u32 a = r_ecx; u32 b = 0x348u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00640087: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x64008cu); f_0057739c();
    /* 0064008c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064008f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00640092: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00640095: mov dword ptr [eax + 0x364], 1 */ W32((u32)(r_eax+0x364u), 0x1u);
    /* 0064009f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006400a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006400a9: mov esp, ebp */ r_esp = r_ebp;
    /* 006400ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006400ac: ret 4 */ FN_RET(0x00640064); r_esp += 8; return;
}

void f_00640065(void)
{
    FN_ENTER(0x00640065);
    /* 00640065: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00640067: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00640068: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640069: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 0064006c: fld dword ptr [ebx + 0x14] */ FPUSH(R_F32((u32)(r_ebx+0x14u)));
    /* 0064006f: fadd dword ptr [0x934780] */ ST(0) = ST(0) + R_F32((u32)(0x934780u));
    /* 00640075: mov dword ptr [ecx + 0x344], esi */ W32((u32)(r_ecx+0x344u), r_esi);
    /* 0064007b: fstp dword ptr [ecx + 0x340] */ W_F32((u32)(r_ecx+0x340u), ST(0)); FPOP();
    /* 00640081: add ecx, 0x348 */ {  u32 a = r_ecx; u32 b = 0x348u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00640087: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x64008cu); f_0057739c();
    /* 0064008c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064008f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00640092: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00640095: mov dword ptr [eax + 0x364], 1 */ W32((u32)(r_eax+0x364u), 0x1u);
    /* 0064009f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006400a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006400a9: mov esp, ebp */ r_esp = r_ebp;
    /* 006400ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006400ac: ret 4 */ FN_RET(0x00640065); r_esp += 8; return;
}

void f_00640069(void)
{
    FN_ENTER(0x00640069);
    /* 00640069: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 0064006c: fld dword ptr [ebx + 0x14] */ FPUSH(R_F32((u32)(r_ebx+0x14u)));
    /* 0064006f: fadd dword ptr [0x934780] */ ST(0) = ST(0) + R_F32((u32)(0x934780u));
    /* 00640075: mov dword ptr [ecx + 0x344], esi */ W32((u32)(r_ecx+0x344u), r_esi);
    /* 0064007b: fstp dword ptr [ecx + 0x340] */ W_F32((u32)(r_ecx+0x340u), ST(0)); FPOP();
    /* 00640081: add ecx, 0x348 */ {  u32 a = r_ecx; u32 b = 0x348u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00640087: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x64008cu); f_0057739c();
    /* 0064008c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064008f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00640092: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00640095: mov dword ptr [eax + 0x364], 1 */ W32((u32)(r_eax+0x364u), 0x1u);
    /* 0064009f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006400a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006400a9: mov esp, ebp */ r_esp = r_ebp;
    /* 006400ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006400ac: ret 4 */ FN_RET(0x00640069); r_esp += 8; return;
}

void f_0064006b(void)
{
    FN_ENTER(0x0064006b);
    /* 0064006b: add al, 0xd9 */ {  u32 a = (u8)r_eax; u32 b = 0xd9u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = (r < a); }
    /* 0064006d: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0064006e: adc al, 0xd8 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0xd8u; u32 r = (a + b + c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00640070: add eax, 0x934780 */ {  u32 a = r_eax; u32 b = 0x934780u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00640075: mov dword ptr [ecx + 0x344], esi */ W32((u32)(r_ecx+0x344u), r_esi);
    /* 0064007b: fstp dword ptr [ecx + 0x340] */ W_F32((u32)(r_ecx+0x340u), ST(0)); FPOP();
    /* 00640081: add ecx, 0x348 */ {  u32 a = r_ecx; u32 b = 0x348u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00640087: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x64008cu); f_0057739c();
    /* 0064008c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064008f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00640092: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00640095: mov dword ptr [eax + 0x364], 1 */ W32((u32)(r_eax+0x364u), 0x1u);
    /* 0064009f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006400a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006400a9: mov esp, ebp */ r_esp = r_ebp;
    /* 006400ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006400ac: ret 4 */ FN_RET(0x0064006b); r_esp += 8; return;
}

void f_0064006c(void)
{
    FN_ENTER(0x0064006c);
    /* 0064006c: fld dword ptr [ebx + 0x14] */ FPUSH(R_F32((u32)(r_ebx+0x14u)));
    /* 0064006f: fadd dword ptr [0x934780] */ ST(0) = ST(0) + R_F32((u32)(0x934780u));
    /* 00640075: mov dword ptr [ecx + 0x344], esi */ W32((u32)(r_ecx+0x344u), r_esi);
    /* 0064007b: fstp dword ptr [ecx + 0x340] */ W_F32((u32)(r_ecx+0x340u), ST(0)); FPOP();
    /* 00640081: add ecx, 0x348 */ {  u32 a = r_ecx; u32 b = 0x348u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00640087: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x64008cu); f_0057739c();
    /* 0064008c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064008f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00640092: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00640095: mov dword ptr [eax + 0x364], 1 */ W32((u32)(r_eax+0x364u), 0x1u);
    /* 0064009f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006400a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006400a9: mov esp, ebp */ r_esp = r_ebp;
    /* 006400ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006400ac: ret 4 */ FN_RET(0x0064006c); r_esp += 8; return;
}

void f_0064006e(void)
{
    FN_ENTER(0x0064006e);
    /* 0064006e: adc al, 0xd8 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0xd8u; u32 r = (a + b + c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00640070: add eax, 0x934780 */ {  u32 a = r_eax; u32 b = 0x934780u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00640075: mov dword ptr [ecx + 0x344], esi */ W32((u32)(r_ecx+0x344u), r_esi);
    /* 0064007b: fstp dword ptr [ecx + 0x340] */ W_F32((u32)(r_ecx+0x340u), ST(0)); FPOP();
    /* 00640081: add ecx, 0x348 */ {  u32 a = r_ecx; u32 b = 0x348u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00640087: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x64008cu); f_0057739c();
    /* 0064008c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064008f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00640092: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00640095: mov dword ptr [eax + 0x364], 1 */ W32((u32)(r_eax+0x364u), 0x1u);
    /* 0064009f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006400a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006400a9: mov esp, ebp */ r_esp = r_ebp;
    /* 006400ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006400ac: ret 4 */ FN_RET(0x0064006e); r_esp += 8; return;
}

void f_0064006f(void)
{
    FN_ENTER(0x0064006f);
    /* 0064006f: fadd dword ptr [0x934780] */ ST(0) = ST(0) + R_F32((u32)(0x934780u));
    /* 00640075: mov dword ptr [ecx + 0x344], esi */ W32((u32)(r_ecx+0x344u), r_esi);
    /* 0064007b: fstp dword ptr [ecx + 0x340] */ W_F32((u32)(r_ecx+0x340u), ST(0)); FPOP();
    /* 00640081: add ecx, 0x348 */ {  u32 a = r_ecx; u32 b = 0x348u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00640087: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x64008cu); f_0057739c();
    /* 0064008c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064008f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00640092: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00640095: mov dword ptr [eax + 0x364], 1 */ W32((u32)(r_eax+0x364u), 0x1u);
    /* 0064009f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006400a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006400a9: mov esp, ebp */ r_esp = r_ebp;
    /* 006400ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006400ac: ret 4 */ FN_RET(0x0064006f); r_esp += 8; return;
}

void f_00640072(void)
{
    FN_ENTER(0x00640072);
    /* 00640072: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00640073: xchg ebx, eax */ { u32 x = r_ebx; u32 y = r_eax; r_ebx = y; r_eax = x; }
    /* 00640074: add byte ptr [ecx + 0x344b1], cl */ { u32 ad = (u32)(r_ecx+0x344b1u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0064007a: add cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0064007c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0064007d: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064007e: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00640080: add byte ptr [ecx + 0x348c1], al */ { u32 ad = (u32)(r_ecx+0x348c1u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00640086: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = (r < a); }
    /* 00640088: adc byte ptr [ebx - 0xd], dh */ { u32 ad = (u32)(r_ebx+0xfffffff3u); u32 c = fC; u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b + c) & 0xffu; W8(ad, r);  }
    /* 0064008b: dec dword ptr [ebx + 0x758bdc45] */ { u32 ad = (u32)(r_ebx+0x758bdc45u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00640091: in al, 0x8b */ UNSUP(0x00640091, "in al, 0x8b");
    /* 00640093: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00640094: call 0x3c88160 */ r_esp -= 4; W32(r_esp, 0x640099u); f_03c88160();
    /* 00640099: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0064009b: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0064009d: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 0064009f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006400a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006400a9: mov esp, ebp */ r_esp = r_ebp;
    /* 006400ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006400ac: ret 4 */ FN_RET(0x00640072); r_esp += 8; return;
}

void f_006400b0(void) /* sub_6400B0 */
{
    FN_ENTER(0x006400b0);
    /* 006400b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006400b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006400b2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006400b3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006400b4: mov esi, ecx */ r_esi = r_ecx;
    /* 006400b6: lea edi, [esi + 0x348] */ r_edi = (u32)(r_esi+0x348u);
    /* 006400bc: mov ecx, edi */ r_ecx = r_edi;
    /* 006400be: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x6400c3u); f_005771a4();
    /* 006400c3: push dword ptr [esi + 0x340] */ { u32 v = R32((u32)(r_esi+0x340u)); r_esp -= 4; W32(r_esp, v); }
    /* 006400c9: push dword ptr [esi + 0x33c] */ { u32 v = R32((u32)(r_esi+0x33cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006400cf: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006400d1: mov ecx, esi */ r_ecx = r_esi;
    /* 006400d3: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x6400d6u); call_ind(t); }
    /* 006400d6: mov dword ptr [esi + 0x364], eax */ W32((u32)(r_esi+0x364u), r_eax);
    /* 006400dc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006400df: je 0x6400e6 */ if (fZ) goto L_006400e6;
L_006400e1:; BB(0x006400e1);
    /* 006400e1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006400e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006400e3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006400e4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006400e5: ret  */ FN_RET(0x006400b0); r_esp += 4; return;
L_006400e6:; BB(0x006400e6);
    /* 006400e6: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6400ebu); f_006dc358();
    /* 006400eb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006400ee: jne 0x6400f7 */ if (!fZ) goto L_006400f7;
L_006400f0:; BB(0x006400f0);
    /* 006400f0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006400f2: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 006400f5: jmp 0x640137 */ goto L_00640137;
L_006400f7:; BB(0x006400f7);
    /* 006400f7: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 006400fa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006400fb: mov ecx, edi */ r_ecx = r_edi;
    /* 006400fd: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x640102u); f_0057725c();
    /* 00640102: mov ebx, eax */ r_ebx = r_eax;
    /* 00640104: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00640106: je 0x640137 */ if (fZ) goto L_00640137;
L_00640108:; BB(0x00640108);
    /* 00640108: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 0064010e: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 00640114: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 0064011a: mov ecx, edi */ r_ecx = r_edi;
    /* 0064011c: mov dword ptr [0xaab504], edx */ W32((u32)(0xaab504u), r_edx);
    /* 00640122: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 00640128: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 0064012e: mov edx, dword ptr [esi + 0x348] */ r_edx = R32((u32)(r_esi+0x348u));
    /* 00640134: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x640137u); call_ind(t); }
L_00640137:; BB(0x00640137);
    /* 00640137: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x64013cu); f_0082d7b0();
    /* 0064013c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0064013e: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x640143u); f_0082d838();
    /* 00640143: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00640146: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00640148: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x64014du); f_0082d8bc();
    /* 0064014d: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 00640150: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x640155u); f_00829cc8();
    /* 00640155: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 00640158: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x64015du); f_00831758();
    /* 0064015d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x640162u); f_0082da80();
    /* 00640162: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00640164: je 0x6400e1 */ if (fZ) goto L_006400e1;
L_0064016a:; BB(0x0064016a);
    /* 0064016a: mov eax, dword ptr [esi + 0x348] */ r_eax = R32((u32)(r_esi+0x348u));
    /* 00640170: mov ecx, edi */ r_ecx = r_edi;
    /* 00640172: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x640175u); call_ind(t); }
    /* 00640175: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 0064017a: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 00640180: mov ecx, dword ptr [0xaab518] */ r_ecx = R32((u32)(0xaab518u));
    /* 00640186: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 0064018b: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 00640191: mov dword ptr [0xaf034c], ecx */ W32((u32)(0xaf034cu), r_ecx);
    /* 00640197: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00640198: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00640199: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064019a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064019b: ret  */ FN_RET(0x006400b0); r_esp += 4; return;
}

void f_0064019c(void) /* sub_64019C */
{
    FN_ENTER(0x0064019c);
    /* 0064019c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064019d: mov esi, ecx */ r_esi = r_ecx;
    /* 0064019f: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x6401a4u); f_004f7c84();
    /* 006401a4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006401a7: je 0x6401d2 */ if (fZ) goto L_006401d2;
L_006401a9:; BB(0x006401a9);
    /* 006401a9: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 006401b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006401b2: je 0x6401cb */ if (fZ) goto L_006401cb;
L_006401b4:; BB(0x006401b4);
    /* 006401b4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006401b7: jne 0x6401c2 */ if (!fZ) goto L_006401c2;
L_006401b9:; BB(0x006401b9);
    /* 006401b9: mov ecx, esi */ r_ecx = r_esi;
    /* 006401bb: call 0x6401d4 */ r_esp -= 4; W32(r_esp, 0x6401c0u); f_006401d4();
    /* 006401c0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006401c1: ret  */ FN_RET(0x0064019c); r_esp += 4; return;
L_006401c2:; BB(0x006401c2);
    /* 006401c2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006401c4: mov word ptr [esi + 0x32e], ax */ W16((u32)(r_esi+0x32eu), (u16)r_eax);
L_006401cb:; BB(0x006401cb);
    /* 006401cb: mov ecx, esi */ r_ecx = r_esi;
    /* 006401cd: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x6401d2u); f_006401f0();
L_006401d2:; BB(0x006401d2);
    /* 006401d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006401d3: ret  */ FN_RET(0x0064019c); r_esp += 4; return;
}

void f_006401d4(void) /* sub_6401D4 */
{
    FN_ENTER(0x006401d4);
    /* 006401d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006401d5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006401d7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006401d8: call 0x8113bc */ r_esp -= 4; W32(r_esp, 0x6401ddu); f_008113bc();
    /* 006401dd: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 006401e1: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006401e6: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 006401ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006401eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006401ec: ret  */ FN_RET(0x006401d4); r_esp += 4; return;
}

void f_006401f0(void) /* sub_6401F0 */
{
    FN_ENTER(0x006401f0);
    /* 006401f0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006401f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006401f3: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x6401f8u); f_006946a8();
    /* 006401f8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006401fb: ret  */ FN_RET(0x006401f0); r_esp += 4; return;
}

void f_006401fc(void) /* sub_6401FC */
{
    FN_ENTER(0x006401fc);
    /* 006401fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006401fd: mov ebp, esp */ r_ebp = r_esp;
    /* 006401ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00640201: push 0x8e5204 */ { u32 v = 0x8e5204u; r_esp -= 4; W32(r_esp, v); }
    /* 00640206: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064020c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064020d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00640214: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00640217: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064021a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0064021d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00640220: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00640223: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00640226: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00640229: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064022b: je 0x6403e2 */ if (fZ) goto L_006403e2;
L_00640231:; BB(0x00640231);
    /* 00640231: movsx edx, word ptr [eax] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 00640234: mov eax, ecx */ r_eax = r_ecx;
    /* 00640236: mov word ptr [eax + 0x32e], dx */ W16((u32)(r_eax+0x32eu), (u16)r_edx);
L_0064023d:; BB(0x0064023d);
    /* 0064023d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064023f: je 0x640397 */ if (fZ) goto L_00640397;
L_00640245:; BB(0x00640245);
    /* 00640245: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00640248: jne 0x64038c */ if (!fZ) goto L_0064038c;
L_0064024e:; BB(0x0064024e);
    /* 0064024e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00640251: mov dword ptr [eax + 0x344], 0 */ W32((u32)(r_eax+0x344u), 0x0u);
    /* 0064025b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064025d: je 0x640397 */ if (fZ) goto L_00640397;
L_00640263:; BB(0x00640263);
    /* 00640263: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640265: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640267: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x64026cu); f_007b52ec();
    /* 0064026c: mov eax, 7 */ r_eax = 0x7u;
    /* 00640271: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_00640274:; BB(0x00640274);
    /* 00640274: mov eax, 0x9346c0 */ r_eax = 0x9346c0u;
    /* 00640279: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064027b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0064027e: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 00640281: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 00640284: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 00640287: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 0064028a: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0064028d: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 00640290: mov dword ptr [ebp - 0x70], ebx */ W32((u32)(r_ebp+0xffffff90u), r_ebx);
    /* 00640293: mov dword ptr [ebp - 0x6c], esi */ W32((u32)(r_ebp+0xffffff94u), r_esi);
    /* 00640296: mov dword ptr [ebp - 0x68], edi */ W32((u32)(r_ebp+0xffffff98u), r_edi);
    /* 00640299: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0064029c: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0064029f: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 006402a2: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006402a5: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 006402a8: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006402ab: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 006402ae: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006402b1: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 006402b4: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 006402b7: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 006402ba: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 006402bd: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 006402c0: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006402c3: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 006402c6: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 006402c9: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 006402cc: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 006402cf: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 006402d2: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 006402d5: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 006402d8: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 006402db: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 006402de: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 006402e1: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 006402e4: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 006402e7: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006402ea: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 006402ed: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006402f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006402f1: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 006402f7: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 006402fd: mov ecx, dword ptr [0xa8f268] */ r_ecx = R32((u32)(0xa8f268u));
    /* 00640303: mov ebx, dword ptr [esi + 0x308] */ r_ebx = R32((u32)(r_esi+0x308u));
    /* 00640309: mov edi, dword ptr [esi + 0x3c] */ r_edi = R32((u32)(r_esi+0x3cu));
    /* 0064030c: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0064030f: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 00640312: mov dword ptr [ebp - 0x64], ebx */ W32((u32)(r_ebp+0xffffff9cu), r_ebx);
    /* 00640315: mov dword ptr [ebp - 0x40], edi */ W32((u32)(r_ebp+0xffffffc0u), r_edi);
    /* 00640318: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64031du); f_005b8610();
    /* 0064031d: mov ecx, dword ptr [0xa8f268] */ r_ecx = R32((u32)(0xa8f268u));
    /* 00640323: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00640326: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00640329: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064032a: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x64032fu); f_005b8624();
    /* 0064032f: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00640336: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00640339: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 0064033e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x640343u); f_005caba4();
    /* 00640343: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00640344: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00640347: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00640349: je 0x640371 */ if (fZ) goto L_00640371;
L_0064034b:; BB(0x0064034b);
    /* 0064034b: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00640352: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00640359: lea edx, [ebp - 0x78] */ r_edx = (u32)(r_ebp+0xffffff88u);
    /* 0064035c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064035d: mov ecx, eax */ r_ecx = r_eax;
    /* 0064035f: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00640365: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x64036au); f_006441f4();
    /* 0064036a: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00640371:; BB(0x00640371);
    /* 00640371: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00640378: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064037b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064037e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00640381: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00640384: jle 0x640274 */ if ((fZ||fS!=fO)) goto L_00640274;
L_0064038a:; BB(0x0064038a);
    /* 0064038a: jmp 0x6403b0 */ goto L_006403b0;
L_0064038c:; BB(0x0064038c);
    /* 0064038c: mov edx, eax */ r_edx = r_eax;
    /* 0064038e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00640390: mov word ptr [edx + 0x32e], ax */ W16((u32)(r_edx+0x32eu), (u16)r_eax);
L_00640397:; BB(0x00640397);
    /* 00640397: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064039a: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064039d: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006403a0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006403a3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006403aa: mov esp, ebp */ r_esp = r_ebp;
    /* 006403ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006403ad: ret 8 */ FN_RET(0x006401fc); r_esp += 12; return;
L_006403b0:; BB(0x006403b0);
    /* 006403b0: mov eax, esi */ r_eax = r_esi;
    /* 006403b2: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 006403b4: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006403b7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006403ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006403bb: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6403c0u); f_0050b510();
    /* 006403c0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006403c3: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 006403c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006403c6: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6403cbu); f_0050b510();
    /* 006403cb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006403ce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006403d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006403d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006403d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006403d3: push 0x552 */ { u32 v = 0x552u; r_esp -= 4; W32(r_esp, v); }
    /* 006403d8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6403ddu); f_00814298();
    /* 006403dd: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006403e0: jmp 0x640397 */ goto L_00640397;
L_006403e2:; BB(0x006403e2);
    /* 006403e2: mov eax, ecx */ r_eax = r_ecx;
    /* 006403e4: movsx edx, word ptr [eax + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 006403eb: jmp 0x64023d */ goto L_0064023d;
}

void f_00640320(void)
{
    FN_ENTER(0x00640320);
    goto L_00640320;
L_00640274:; BB(0x00640274);
    /* 00640274: mov eax, 0x9346c0 */ r_eax = 0x9346c0u;
    /* 00640279: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064027b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0064027e: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 00640281: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 00640284: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 00640287: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 0064028a: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0064028d: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 00640290: mov dword ptr [ebp - 0x70], ebx */ W32((u32)(r_ebp+0xffffff90u), r_ebx);
    /* 00640293: mov dword ptr [ebp - 0x6c], esi */ W32((u32)(r_ebp+0xffffff94u), r_esi);
    /* 00640296: mov dword ptr [ebp - 0x68], edi */ W32((u32)(r_ebp+0xffffff98u), r_edi);
    /* 00640299: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0064029c: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0064029f: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 006402a2: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006402a5: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 006402a8: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006402ab: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 006402ae: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006402b1: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 006402b4: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 006402b7: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 006402ba: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 006402bd: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 006402c0: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006402c3: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 006402c6: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 006402c9: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 006402cc: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 006402cf: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 006402d2: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 006402d5: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 006402d8: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 006402db: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 006402de: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 006402e1: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 006402e4: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 006402e7: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006402ea: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 006402ed: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006402f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006402f1: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 006402f7: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 006402fd: mov ecx, dword ptr [0xa8f268] */ r_ecx = R32((u32)(0xa8f268u));
    /* 00640303: mov ebx, dword ptr [esi + 0x308] */ r_ebx = R32((u32)(r_esi+0x308u));
    /* 00640309: mov edi, dword ptr [esi + 0x3c] */ r_edi = R32((u32)(r_esi+0x3cu));
    /* 0064030c: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0064030f: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 00640312: mov dword ptr [ebp - 0x64], ebx */ W32((u32)(r_ebp+0xffffff9cu), r_ebx);
    /* 00640315: mov dword ptr [ebp - 0x40], edi */ W32((u32)(r_ebp+0xffffffc0u), r_edi);
    /* 00640318: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64031du); f_005b8610();
    /* 0064031d: mov ecx, dword ptr [0xa8f268] */ r_ecx = R32((u32)(0xa8f268u));
L_00640320:; BB(0x00640320);
    /* 00640320: test al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a & b) & 0xffu;   }
    /* 00640323: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00640326: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00640329: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064032a: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x64032fu); f_005b8624();
    /* 0064032f: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00640336: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00640339: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 0064033e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x640343u); f_005caba4();
    /* 00640343: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00640344: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00640347: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00640349: je 0x640371 */ if (fZ) goto L_00640371;
L_0064034b:; BB(0x0064034b);
    /* 0064034b: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00640352: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00640359: lea edx, [ebp - 0x78] */ r_edx = (u32)(r_ebp+0xffffff88u);
    /* 0064035c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064035d: mov ecx, eax */ r_ecx = r_eax;
    /* 0064035f: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00640365: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x64036au); f_006441f4();
    /* 0064036a: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00640371:; BB(0x00640371);
    /* 00640371: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00640378: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064037b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064037e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00640381: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00640384: jle 0x640274 */ if ((fZ||fS!=fO)) goto L_00640274;
L_0064038a:; BB(0x0064038a);
    /* 0064038a: jmp 0x6403b0 */ goto L_006403b0;
L_00640397:; BB(0x00640397);
    /* 00640397: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064039a: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064039d: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006403a0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006403a3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006403aa: mov esp, ebp */ r_esp = r_ebp;
    /* 006403ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006403ad: ret 8 */ FN_RET(0x00640320); r_esp += 12; return;
L_006403b0:; BB(0x006403b0);
    /* 006403b0: mov eax, esi */ r_eax = r_esi;
    /* 006403b2: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 006403b4: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006403b7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006403ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006403bb: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6403c0u); f_0050b510();
    /* 006403c0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006403c3: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 006403c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006403c6: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6403cbu); f_0050b510();
    /* 006403cb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006403ce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006403d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006403d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006403d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006403d3: push 0x552 */ { u32 v = 0x552u; r_esp -= 4; W32(r_esp, v); }
    /* 006403d8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6403ddu); f_00814298();
    /* 006403dd: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006403e0: jmp 0x640397 */ goto L_00640397;
}

void f_006403f0(void)
{
    FN_ENTER(0x006403f0);
    /* 006403f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006403f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006403f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006403f5: push 0x8e522c */ { u32 v = 0x8e522cu; r_esp -= 4; W32(r_esp, v); }
    /* 006403fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00640400: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640401: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00640408: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064040b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064040e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00640411: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00640414: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00640417: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0064041a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064041c: je 0x640698 */ if (fZ) goto L_00640698;
L_00640422:; BB(0x00640422);
    /* 00640422: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 00640426: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0064042b: je 0x640698 */ if (fZ) goto L_00640698;
L_00640431:; BB(0x00640431);
    /* 00640431: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00640436: jl 0x640698 */ if ((fS!=fO)) goto L_00640698;
L_0064043c:; BB(0x0064043c);
    /* 0064043c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064043d: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x640442u); f_007b4d18();
    /* 00640442: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00640445: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640448: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064044a: je 0x64066a */ if (fZ) goto L_0064066a;
L_00640450:; BB(0x00640450);
    /* 00640450: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00640453: cmp edx, dword ptr [0x9c6d00] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9c6d00u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00640459: jne 0x640698 */ if (!fZ) goto L_00640698;
L_0064045f:; BB(0x0064045f);
    /* 0064045f: movzx eax, word ptr [ebx + 0xc] */ r_eax = (u32)R16((u32)(r_ebx+0xcu));
    /* 00640463: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00640465: jne 0x6404aa */ if (!fZ) goto L_006404aa;
L_00640467:; BB(0x00640467);
    /* 00640467: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0064046a: movsx eax, word ptr [eax + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 00640471: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00640473: je 0x64048c */ if (fZ) goto L_0064048c;
L_00640475:; BB(0x00640475);
    /* 00640475: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00640478: je 0x6405f7 */ if (fZ) goto L_006405f7;
L_0064047e:; BB(0x0064047e);
    /* 0064047e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00640481: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00640483: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00640485: mov word ptr [ecx + 0x32e], dx */ W16((u32)(r_ecx+0x32eu), (u16)r_edx);
L_0064048c:; BB(0x0064048c);
    /* 0064048c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064048f: movzx ecx, word ptr [ebx + 0xe] */ r_ecx = (u32)R16((u32)(r_ebx+0xeu));
    /* 00640493: cmp ecx, dword ptr [edx + 0x344] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x344u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00640499: jge 0x6405f7 */ if ((fS==fO)) goto L_006405f7;
L_0064049f:; BB(0x0064049f);
    /* 0064049f: mov dword ptr [edx + 0x344], ecx */ W32((u32)(r_edx+0x344u), r_ecx);
    /* 006404a5: jmp 0x6405f7 */ f_006405f7(); return;
L_006404aa:; BB(0x006404aa);
    /* 006404aa: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006404ad: jne 0x6405ed */ if (!fZ) goto L_006405ed;
L_006404b3:; BB(0x006404b3);
    /* 006404b3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006404b6: mov eax, 1 */ r_eax = 0x1u;
    /* 006404bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006404bc: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 006404c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006404c5: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x6404cau); f_007b52ec();
    /* 006404ca: mov eax, 7 */ r_eax = 0x7u;
    /* 006404cf: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_006404d2:; BB(0x006404d2);
    /* 006404d2: mov eax, 0x934720 */ r_eax = 0x934720u;
    /* 006404d7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006404d9: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006404dc: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 006404df: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 006404e2: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 006404e5: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 006404e8: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006404eb: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 006404ee: mov dword ptr [ebp - 0x74], ebx */ W32((u32)(r_ebp+0xffffff8cu), r_ebx);
    /* 006404f1: mov dword ptr [ebp - 0x70], esi */ W32((u32)(r_ebp+0xffffff90u), r_esi);
    /* 006404f4: mov dword ptr [ebp - 0x6c], edi */ W32((u32)(r_ebp+0xffffff94u), r_edi);
    /* 006404f7: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 006404fa: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006404fd: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 00640500: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00640503: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 00640506: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00640509: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0064050c: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0064050f: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00640512: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00640515: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 00640518: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0064051b: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0064051e: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00640521: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00640524: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00640527: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0064052a: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0064052d: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00640530: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00640533: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00640536: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00640539: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0064053c: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0064053f: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 00640542: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00640545: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00640548: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0064054b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064054e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064054f: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 00640555: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0064055b: mov ecx, dword ptr [0xa8f268] */ r_ecx = R32((u32)(0xa8f268u));
    /* 00640561: mov ebx, dword ptr [esi + 0x308] */ r_ebx = R32((u32)(r_esi+0x308u));
    /* 00640567: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0064056a: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 0064056d: mov dword ptr [ebp - 0x68], ebx */ W32((u32)(r_ebp+0xffffff98u), r_ebx);
    /* 00640570: mov edi, dword ptr [esi + 0x3c] */ r_edi = R32((u32)(r_esi+0x3cu));
    /* 00640573: mov dword ptr [ebp - 0x44], edi */ W32((u32)(r_ebp+0xffffffbcu), r_edi);
    /* 00640576: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64057bu); f_005b8610();
    /* 0064057b: mov ecx, dword ptr [0xa8f268] */ r_ecx = R32((u32)(0xa8f268u));
    /* 00640581: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00640584: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00640587: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640588: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x64058du); f_005b8624();
    /* 0064058d: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00640594: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00640597: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 0064059c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6405a1u); f_005caba4();
    /* 006405a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006405a2: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006405a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006405a7: je 0x6405cf */ if (fZ) goto L_006405cf;
L_006405a9:; BB(0x006405a9);
    /* 006405a9: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 006405b0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006405b7: lea edx, [ebp - 0x7c] */ r_edx = (u32)(r_ebp+0xffffff84u);
    /* 006405ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006405bb: mov ecx, eax */ r_ecx = r_eax;
    /* 006405bd: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006405c3: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x6405c8u); f_006441f4();
    /* 006405c8: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_006405cf:; BB(0x006405cf);
    /* 006405cf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006405d6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006405d9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006405dc: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006405df: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006405e2: jle 0x6404d2 */ if ((fZ||fS!=fO)) goto L_006404d2;
L_006405e8:; BB(0x006405e8);
    /* 006405e8: jmp 0x6406af */ f_006406af(); return;
L_006405ed:; BB(0x006405ed);
    /* 006405ed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006405f0: movsx eax, word ptr [eax + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
L_006405f7:; BB(0x006405f7);
    /* 006405f7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006405fa: mov esi, dword ptr [edx + 0x80] */ r_esi = R32((u32)(r_edx+0x80u));
    /* 00640600: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00640602: je 0x64062b */ if (fZ) goto L_0064062b;
L_00640604:; BB(0x00640604);
    /* 00640604: movsx ebx, word ptr [esi + 4] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esi+0x4u));
    /* 00640608: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0064060a: jl 0x64062b */ if ((fS!=fO)) goto L_0064062b;
L_0064060c:; BB(0x0064060c);
    /* 0064060c: cmp ebx, 0xb9f */ {  u32 a = r_ebx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00640612: jg 0x64062b */ if ((!fZ&&fS==fO)) goto L_0064062b;
L_00640614:; BB(0x00640614);
    /* 00640614: mov ecx, dword ptr [0xab02bc] */ r_ecx = R32((u32)(0xab02bcu));
    /* 0064061a: movzx edx, word ptr [ecx + ebx*4] */ r_edx = (u32)R16((u32)(r_ecx+r_ebx*4));
    /* 0064061e: mov word ptr [ebp - 0x28], dx */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_edx);
    /* 00640622: movzx ebx, word ptr [ecx + ebx*4 + 2] */ r_ebx = (u32)R16((u32)(r_ecx+r_ebx*4+0x2u));
    /* 00640627: mov word ptr [ebp - 0x26], bx */ W16((u32)(r_ebp+0xffffffdau), (u16)r_ebx);
L_0064062b:; BB(0x0064062b);
    /* 0064062b: mov word ptr [ebp - 0x28], ax */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_eax);
    /* 0064062f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00640631: je 0x64065a */ if (fZ) goto L_0064065a;
L_00640633:; BB(0x00640633);
    /* 00640633: movsx ebx, word ptr [esi + 4] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esi+0x4u));
    /* 00640637: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00640639: jl 0x64065a */ if ((fS!=fO)) goto L_0064065a;
L_0064063b:; BB(0x0064063b);
    /* 0064063b: cmp ebx, 0xb9f */ {  u32 a = r_ebx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00640641: jg 0x64065a */ if ((!fZ&&fS==fO)) goto L_0064065a;
L_00640643:; BB(0x00640643);
    /* 00640643: mov ecx, dword ptr [0xab02bc] */ r_ecx = R32((u32)(0xab02bcu));
    /* 00640649: movzx eax, word ptr [ebp - 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 0064064d: mov word ptr [ecx + ebx*4], ax */ W16((u32)(r_ecx+r_ebx*4), (u16)r_eax);
    /* 00640651: movzx edx, word ptr [ebp - 0x26] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffdau));
    /* 00640655: mov word ptr [ecx + ebx*4 + 2], dx */ W16((u32)(r_ecx+r_ebx*4+0x2u), (u16)r_edx);
L_0064065a:; BB(0x0064065a);
    /* 0064065a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064065d: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 00640660: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640662: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00640664: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640665: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x640668u); call_ind(t); }
    /* 00640668: jmp 0x640698 */ goto L_00640698;
L_0064066a:; BB(0x0064066a);
    /* 0064066a: mov edx, dword ptr [0xab02bc] */ r_edx = R32((u32)(0xab02bcu));
    /* 00640670: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 00640673: movsx ecx, word ptr [edx + esi*4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+r_esi*4));
    /* 00640677: movzx eax, word ptr [edx + esi*4 + 2] */ r_eax = (u32)R16((u32)(r_edx+r_esi*4+0x2u));
    /* 0064067c: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0064067f: je 0x640698 */ if (fZ) goto L_00640698;
L_00640681:; BB(0x00640681);
    /* 00640681: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00640684: movsx ebx, si */ r_ebx = (u32)(i32)(i16)(u16)r_esi;
    /* 00640687: cmp ebx, 0xb9f */ {  u32 a = r_ebx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0064068d: jg 0x640698 */ if ((!fZ&&fS==fO)) goto L_00640698;
L_0064068f:; BB(0x0064068f);
    /* 0064068f: mov word ptr [edx + ebx*4], cx */ W16((u32)(r_edx+r_ebx*4), (u16)r_ecx);
    /* 00640693: mov word ptr [edx + ebx*4 + 2], ax */ W16((u32)(r_edx+r_ebx*4+0x2u), (u16)r_eax);
L_00640698:; BB(0x00640698);
    /* 00640698: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064069b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064069e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006406a1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006406a4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006406ab: mov esp, ebp */ r_esp = r_ebp;
    /* 006406ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006406ae: ret  */ FN_RET(0x006403f0); r_esp += 4; return;
}

void f_006406e4(void) /* sub_6406E4 */
{
    FN_ENTER(0x006406e4);
    /* 006406e4: mov dword ptr [0xa8f25c], 0x3f800000 */ W32((u32)(0xa8f25cu), 0x3f800000u);
    /* 006406ee: mov dword ptr [0xa8f260], 0x41000000 */ W32((u32)(0xa8f260u), 0x41000000u);
    /* 006406f8: mov dword ptr [0xa8f264], 0x3fc00000 */ W32((u32)(0xa8f264u), 0x3fc00000u);
    /* 00640702: ret  */ FN_RET(0x006406e4); r_esp += 4; return;
}

void f_00640704(void) /* sub_640704 */
{
    FN_ENTER(0x00640704);
    /* 00640704: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00640705: mov ebp, esp */ r_ebp = r_esp;
    /* 00640707: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00640709: push 0x8e5254 */ { u32 v = 0x8e5254u; r_esp -= 4; W32(r_esp, v); }
    /* 0064070e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00640714: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640715: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064071c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064071f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00640722: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00640725: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00640728: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064072b: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00640730: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00640737: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x64073cu); f_008581c5();
    /* 0064073c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064073d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00640740: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00640742: je 0x6407b7 */ if (fZ) goto L_006407b7;
L_00640744:; BB(0x00640744);
    /* 00640744: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0064074b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00640752: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00640755: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00640757: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640758: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640759: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064075a: push 0x9c6cd4 */ { u32 v = 0x9c6cd4u; r_esp -= 4; W32(r_esp, v); }
    /* 0064075f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640761: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x640766u); f_005b7a84();
    /* 00640766: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00640769: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00640770:; BB(0x00640770);
    /* 00640770: mov dword ptr [0xa8f268], ecx */ W32((u32)(0xa8f268u), r_ecx);
    /* 00640776: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064077d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0064077f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x640784u); f_005b8610();
    /* 00640784: mov ebx, eax */ r_ebx = r_eax;
    /* 00640786: mov ecx, dword ptr [0xa8f268] */ r_ecx = R32((u32)(0xa8f268u));
    /* 0064078c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0064078e: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x640793u); f_005b8624();
    /* 00640793: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640795: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064079a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064079b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064079c: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 0064079e: call 0x6086e8 */ r_esp -= 4; W32(r_esp, 0x6407a3u); f_006086e8();
    /* 006407a3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006407a6: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006407a9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006407ac: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006407b3: mov esp, ebp */ r_esp = r_ebp;
    /* 006407b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006407b6: ret  */ FN_RET(0x00640704); r_esp += 4; return;
L_006407b7:; BB(0x006407b7);
    /* 006407b7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006407b9: jmp 0x640770 */ goto L_00640770;
}

void f_006407bc(void) /* sub_6407BC */
{
    FN_ENTER(0x006407bc);
    /* 006407bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006407bd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006407bf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006407c1: call 0x6407e0 */ r_esp -= 4; W32(r_esp, 0x6407c6u); f_006407e0();
    /* 006407c6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006407ca: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006407cc: jne 0x6407d2 */ if (!fZ) goto L_006407d2;
L_006407ce:; BB(0x006407ce);
    /* 006407ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006407cf: ret 4 */ FN_RET(0x006407bc); r_esp += 8; return;
L_006407d2:; BB(0x006407d2);
    /* 006407d2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006407d3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6407d8u); f_005c2f74();
    /* 006407d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006407d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006407da: ret 4 */ FN_RET(0x006407bc); r_esp += 8; return;
}

void f_006407e0(void) /* sub_6407E0 */
{
    FN_ENTER(0x006407e0);
    /* 006407e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006407e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006407e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006407e5: push 0x8e5270 */ { u32 v = 0x8e5270u; r_esp -= 4; W32(r_esp, v); }
    /* 006407ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006407f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006407f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006407f8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006407fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006407fe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00640801: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00640804: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00640807: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0064080a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064080d: mov dword ptr [ecx], 0xb2e8e0 */ W32((u32)(r_ecx), 0xb2e8e0u);
    /* 00640813: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064081a: call 0x668560 */ r_esp -= 4; W32(r_esp, 0x64081fu); f_00668560();
    /* 0064081f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00640822: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00640829: mov esp, ebp */ r_esp = r_ebp;
    /* 0064082b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064082c: ret  */ FN_RET(0x006407e0); r_esp += 4; return;
}

void f_00640830(void) /* sub_640830 */
{
    FN_ENTER(0x00640830);
    /* 00640830: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00640831: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00640833: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00640835: call 0x640854 */ r_esp -= 4; W32(r_esp, 0x64083au); f_00640854();
    /* 0064083a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0064083e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00640840: jne 0x640846 */ if (!fZ) goto L_00640846;
L_00640842:; BB(0x00640842);
    /* 00640842: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00640843: ret 4 */ FN_RET(0x00640830); r_esp += 8; return;
L_00640846:; BB(0x00640846);
    /* 00640846: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00640847: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x64084cu); f_005c2f74();
    /* 0064084c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064084d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064084e: ret 4 */ FN_RET(0x00640830); r_esp += 8; return;
}

void f_00640854(void) /* sub_640854 */
{
    FN_ENTER(0x00640854);
    /* 00640854: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00640855: mov ebp, esp */ r_ebp = r_esp;
    /* 00640857: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00640859: push 0x8e528c */ { u32 v = 0x8e528cu; r_esp -= 4; W32(r_esp, v); }
    /* 0064085e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00640864: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640865: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064086c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064086f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00640872: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00640875: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00640878: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064087b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0064087e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00640881: mov dword ptr [ecx], 0xb2e940 */ W32((u32)(r_ecx), 0xb2e940u);
    /* 00640887: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064088e: call 0x66873c */ r_esp -= 4; W32(r_esp, 0x640893u); f_0066873c();
    /* 00640893: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00640896: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064089d: mov esp, ebp */ r_esp = r_ebp;
    /* 0064089f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006408a0: ret  */ FN_RET(0x00640854); r_esp += 4; return;
}

void f_006408a4(void) /* sub_6408A4 */
{
    FN_ENTER(0x006408a4);
    /* 006408a4: push dword ptr [0xa8f2b4] */ { u32 v = R32((u32)(0xa8f2b4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006408aa: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x6408afu); f_00800b5c();
    /* 006408af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006408b0: mov ecx, dword ptr [0xa8f2b8] */ r_ecx = R32((u32)(0xa8f2b8u));
    /* 006408b6: mov dword ptr [0xa8f2b4], 0 */ W32((u32)(0xa8f2b4u), 0x0u);
    /* 006408c0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006408c2: je 0x6408d7 */ if (fZ) goto L_006408d7;
L_006408c4:; BB(0x006408c4);
    /* 006408c4: je 0x6408cd */ if (fZ) goto L_006408cd;
L_006408c6:; BB(0x006408c6);
    /* 006408c6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006408c8: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x6408cdu); f_004066a8();
L_006408cd:; BB(0x006408cd);
    /* 006408cd: mov dword ptr [0xa8f2b8], 0 */ W32((u32)(0xa8f2b8u), 0x0u);
L_006408d7:; BB(0x006408d7);
    /* 006408d7: ret  */ FN_RET(0x006408a4); r_esp += 4; return;
}

void f_006408d8(void) /* sub_6408D8 */
{
    FN_ENTER(0x006408d8);
    /* 006408d8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006408db: mov eax, dword ptr [ecx + 0x88] */ r_eax = R32((u32)(r_ecx+0x88u));
    /* 006408e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006408e3: jl 0x640929 */ if ((fS!=fO)) goto L_00640929;
L_006408e5:; BB(0x006408e5);
    /* 006408e5: fld dword ptr [0x9349d0] */ FPUSH(R_F32((u32)(0x9349d0u)));
    /* 006408eb: fadd dword ptr [ecx + 0x100] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x100u));
    /* 006408f1: mov edx, dword ptr [ecx + 0x11c] */ r_edx = R32((u32)(r_ecx+0x11cu));
    /* 006408f7: fst dword ptr [ecx + 0x100] */ W_F32((u32)(r_ecx+0x100u), ST(0));
    /* 006408fd: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00640900: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00640903: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00640906: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00640909: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0064090c: fadd dword ptr [eax*4 + 0x934998] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x934998u));
    /* 00640913: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00640915: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00640917: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00640918: jae 0x640924 */ if (!fC) goto L_00640924;
L_0064091a:; BB(0x0064091a);
    /* 0064091a: mov dword ptr [ecx + 0x100], 0 */ W32((u32)(r_ecx+0x100u), 0x0u);
L_00640924:; BB(0x00640924);
    /* 00640924: call 0x669048 */ r_esp -= 4; W32(r_esp, 0x640929u); f_00669048();
L_00640929:; BB(0x00640929);
    /* 00640929: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064092c: ret  */ FN_RET(0x006408d8); r_esp += 4; return;
}

void f_00640930(void) /* sub_640930 */
{
    FN_ENTER(0x00640930);
    /* 00640930: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00640931: mov esi, ecx */ r_esi = r_ecx;
    /* 00640933: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00640935: mov ecx, esi */ r_ecx = r_esi;
    /* 00640937: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064093c: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00640941: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x640944u); call_ind(t); }
    /* 00640944: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00640946: jne 0x64094a */ if (!fZ) goto L_0064094a;
L_00640948:; BB(0x00640948);
    /* 00640948: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00640949: ret  */ FN_RET(0x00640930); r_esp += 4; return;
L_0064094a:; BB(0x0064094a);
    /* 0064094a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x64094fu); f_0082d7b0();
    /* 0064094f: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 00640952: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x640957u); f_0082d838();
    /* 00640957: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0064095a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064095c: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x640961u); f_0082d8bc();
    /* 00640961: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x640966u); f_0082dbac();
    /* 00640966: mov eax, dword ptr [esi + 0x88] */ r_eax = R32((u32)(r_esi+0x88u));
    /* 0064096c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0064096e: jl 0x640992 */ if ((fS!=fO)) goto L_00640992;
L_00640970:; BB(0x00640970);
    /* 00640970: mov ecx, dword ptr [esi + 0x110] */ r_ecx = R32((u32)(r_esi+0x110u));
    /* 00640976: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x64097bu); f_00829cc8();
    /* 0064097b: push dword ptr [esi + 0x100] */ { u32 v = R32((u32)(r_esi+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 00640981: mov ecx, dword ptr [esi + 0x104] */ r_ecx = R32((u32)(r_esi+0x104u));
    /* 00640987: mov edx, dword ptr [esi + 0x11c] */ r_edx = R32((u32)(r_esi+0x11cu));
    /* 0064098d: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x640992u); f_0083bd00();
L_00640992:; BB(0x00640992);
    /* 00640992: mov ecx, dword ptr [esi + 0x114] */ r_ecx = R32((u32)(r_esi+0x114u));
    /* 00640998: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x64099du); f_00829cc8();
    /* 0064099d: mov ecx, dword ptr [esi + 0x108] */ r_ecx = R32((u32)(r_esi+0x108u));
    /* 006409a3: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x6409a8u); f_00831758();
    /* 006409a8: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x6409adu); f_0082dab0();
    /* 006409ad: mov ecx, dword ptr [esi + 0x118] */ r_ecx = R32((u32)(r_esi+0x118u));
    /* 006409b3: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6409b8u); f_00829cc8();
    /* 006409b8: mov ecx, dword ptr [esi + 0x10c] */ r_ecx = R32((u32)(r_esi+0x10cu));
    /* 006409be: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x6409c3u); f_00831758();
    /* 006409c3: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6409c8u); f_0082da80();
    /* 006409c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006409c9: ret  */ FN_RET(0x00640930); r_esp += 4; return;
}

void f_006409cc(void) /* sub_6409CC */
{
    FN_ENTER(0x006409cc);
    /* 006409cc: mov eax, dword ptr [ecx + 0x88] */ r_eax = R32((u32)(r_ecx+0x88u));
    /* 006409d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006409d4: jl 0x6409ee */ if ((fS!=fO)) goto L_006409ee;
L_006409d6:; BB(0x006409d6);
    /* 006409d6: call 0x668c58 */ r_esp -= 4; W32(r_esp, 0x6409dbu); f_00668c58();
    /* 006409db: push 0x934b0c */ { u32 v = 0x934b0cu; r_esp -= 4; W32(r_esp, v); }
    /* 006409e0: push 0x130021 */ { u32 v = 0x130021u; r_esp -= 4; W32(r_esp, v); }
    /* 006409e5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6409eau); f_0061cdb0();
    /* 006409ea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006409ed: ret  */ FN_RET(0x006409cc); r_esp += 4; return;
L_006409ee:; BB(0x006409ee);
    /* 006409ee: push 0x934aec */ { u32 v = 0x934aecu; r_esp -= 4; W32(r_esp, v); }
    /* 006409f3: push 0x130021 */ { u32 v = 0x130021u; r_esp -= 4; W32(r_esp, v); }
    /* 006409f8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6409fdu); f_0061cdb0();
    /* 006409fd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00640a00: ret  */ FN_RET(0x006409cc); r_esp += 4; return;
}

void f_00640a04(void)
{
    FN_ENTER(0x00640a04);
    /* 00640a04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00640a05: mov ebp, esp */ r_ebp = r_esp;
    /* 00640a07: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00640a09: push 0x8e52b4 */ { u32 v = 0x8e52b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00640a0e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00640a14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640a15: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00640a1c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00640a1f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00640a22: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00640a25: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00640a28: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00640a2b: push 0x120 */ { u32 v = 0x120u; r_esp -= 4; W32(r_esp, v); }
    /* 00640a30: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00640a37: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x640a3cu); f_005caba4();
    /* 00640a3c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00640a3d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00640a40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00640a42: je 0x640a7b */ if (fZ) goto L_00640a7b;
L_00640a44:; BB(0x00640a44);
    /* 00640a44: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00640a4b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00640a52: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00640a55: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00640a5b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00640a5e: call 0x640a80 */ r_esp -= 4; W32(r_esp, 0x640a63u); f_00640a80();
    /* 00640a63: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00640a66: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00640a6d:; BB(0x00640a6d);
    /* 00640a6d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00640a70: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00640a77: mov esp, ebp */ r_esp = r_ebp;
    /* 00640a79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00640a7a: ret  */ FN_RET(0x00640a04); r_esp += 4; return;
L_00640a7b:; BB(0x00640a7b);
    /* 00640a7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00640a7d: jmp 0x640a6d */ goto L_00640a6d;
}

void f_00640a80(void) /* sub_640A80 */
{
    FN_ENTER(0x00640a80);
    /* 00640a80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00640a81: mov ebp, esp */ r_ebp = r_esp;
    /* 00640a83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00640a85: push 0x8e52d0 */ { u32 v = 0x8e52d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640a8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00640a90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640a91: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00640a98: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00640a9b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00640a9e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00640aa1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00640aa4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00640aa7: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00640aaa: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00640aad: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00640ab0: call 0x668ad8 */ r_esp -= 4; W32(r_esp, 0x640ab5u); f_00668ad8();
    /* 00640ab5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00640abc: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00640abf: mov dword ptr [edx], 0xb2e8e0 */ W32((u32)(r_edx), 0xb2e8e0u);
    /* 00640ac5: mov eax, dword ptr [0x9c6d98] */ r_eax = R32((u32)(0x9c6d98u));
    /* 00640aca: mov ecx, dword ptr [0xa8f2b8] */ r_ecx = R32((u32)(0xa8f2b8u));
    /* 00640ad0: mov dword ptr [edx + 0x100], 0 */ W32((u32)(r_edx+0x100u), 0x0u);
    /* 00640ada: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00640add: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00640adf: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x640ae4u); f_005b8610();
    /* 00640ae4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00640ae7: mov ecx, dword ptr [0xa8f2b8] */ r_ecx = R32((u32)(0xa8f2b8u));
    /* 00640aed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640aef: mov dword ptr [edx + 0x104], eax */ W32((u32)(r_edx+0x104u), r_eax);
    /* 00640af5: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x640afau); f_005b8610();
    /* 00640afa: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00640afd: mov ecx, dword ptr [0xa8f2b8] */ r_ecx = R32((u32)(0xa8f2b8u));
    /* 00640b03: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00640b05: mov dword ptr [edx + 0x108], eax */ W32((u32)(r_edx+0x108u), r_eax);
    /* 00640b0b: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x640b10u); f_005b8610();
    /* 00640b10: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00640b13: mov ecx, dword ptr [0xa8f2b8] */ r_ecx = R32((u32)(0xa8f2b8u));
    /* 00640b19: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00640b1b: mov dword ptr [edx + 0x10c], eax */ W32((u32)(r_edx+0x10cu), r_eax);
    /* 00640b21: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x640b26u); f_005b8624();
    /* 00640b26: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00640b29: mov ecx, dword ptr [0xa8f2b8] */ r_ecx = R32((u32)(0xa8f2b8u));
    /* 00640b2f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640b31: mov dword ptr [edx + 0x110], eax */ W32((u32)(r_edx+0x110u), r_eax);
    /* 00640b37: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x640b3cu); f_005b8624();
    /* 00640b3c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00640b3f: mov ecx, dword ptr [0xa8f2b8] */ r_ecx = R32((u32)(0xa8f2b8u));
    /* 00640b45: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00640b47: mov dword ptr [edx + 0x114], eax */ W32((u32)(r_edx+0x114u), r_eax);
    /* 00640b4d: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x640b52u); f_005b8624();
    /* 00640b52: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00640b55: mov ecx, dword ptr [0xa8f2b8] */ r_ecx = R32((u32)(0xa8f2b8u));
    /* 00640b5b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640b5d: mov dword ptr [edx + 0x118], eax */ W32((u32)(r_edx+0x118u), r_eax);
    /* 00640b63: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x640b68u); f_005b8638();
    /* 00640b68: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00640b6b: mov dword ptr [edx + 0x11c], eax */ W32((u32)(r_edx+0x11cu), r_eax);
    /* 00640b71: mov eax, edx */ r_eax = r_edx;
    /* 00640b73: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00640b76: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00640b7d: mov esp, ebp */ r_esp = r_ebp;
    /* 00640b7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00640b80: ret 8 */ FN_RET(0x00640a80); r_esp += 12; return;
}

void f_00640b84(void) /* sub_640B84 */
{
    FN_ENTER(0x00640b84);
    /* 00640b84: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00640b87: fld dword ptr [0x9349bc] */ FPUSH(R_F32((u32)(0x9349bcu)));
    /* 00640b8d: fadd dword ptr [ecx + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xc8u));
    /* 00640b93: mov edx, dword ptr [ecx + 0xe8] */ r_edx = R32((u32)(r_ecx+0xe8u));
    /* 00640b99: fst dword ptr [ecx + 0xc8] */ W_F32((u32)(r_ecx+0xc8u), ST(0));
    /* 00640b9f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00640ba2: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00640ba5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00640ba8: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00640bab: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00640bae: fadd dword ptr [eax*4 + 0x934990] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x934990u));
    /* 00640bb5: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00640bb7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00640bb9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00640bba: jae 0x640bc6 */ if (!fC) goto L_00640bc6;
L_00640bbc:; BB(0x00640bbc);
    /* 00640bbc: mov dword ptr [ecx + 0xc8], 0 */ W32((u32)(r_ecx+0xc8u), 0x0u);
L_00640bc6:; BB(0x00640bc6);
    /* 00640bc6: fld dword ptr [0x9349b8] */ FPUSH(R_F32((u32)(0x9349b8u)));
    /* 00640bcc: fadd dword ptr [ecx + 0xcc] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xccu));
    /* 00640bd2: mov edx, dword ptr [ecx + 0xec] */ r_edx = R32((u32)(r_ecx+0xecu));
    /* 00640bd8: fst dword ptr [ecx + 0xcc] */ W_F32((u32)(r_ecx+0xccu), ST(0));
    /* 00640bde: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00640be1: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00640be4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00640be8: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00640bec: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00640bef: fadd dword ptr [eax*4 + 0x934990] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x934990u));
    /* 00640bf6: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00640bf8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00640bfa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00640bfb: jae 0x640c07 */ if (!fC) goto L_00640c07;
L_00640bfd:; BB(0x00640bfd);
    /* 00640bfd: mov dword ptr [ecx + 0xcc], 0 */ W32((u32)(r_ecx+0xccu), 0x0u);
L_00640c07:; BB(0x00640c07);
    /* 00640c07: call 0x6698e0 */ r_esp -= 4; W32(r_esp, 0x640c0cu); f_006698e0();
    /* 00640c0c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00640c0f: ret  */ FN_RET(0x00640b84); r_esp += 4; return;
}

void f_00640c10(void) /* sub_640C10 */
{
    FN_ENTER(0x00640c10);
    /* 00640c10: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00640c11: mov esi, ecx */ r_esi = r_ecx;
    /* 00640c13: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00640c15: mov ecx, esi */ r_ecx = r_esi;
    /* 00640c17: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00640c1c: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00640c21: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x640c24u); call_ind(t); }
    /* 00640c24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00640c26: jne 0x640c2a */ if (!fZ) goto L_00640c2a;
L_00640c28:; BB(0x00640c28);
    /* 00640c28: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00640c29: ret  */ FN_RET(0x00640c10); r_esp += 4; return;
L_00640c2a:; BB(0x00640c2a);
    /* 00640c2a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x640c2fu); f_0082d7b0();
    /* 00640c2f: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 00640c32: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x640c37u); f_0082d838();
    /* 00640c37: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00640c3a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00640c3c: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x640c41u); f_0082d8bc();
    /* 00640c41: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x640c46u); f_0082dbac();
    /* 00640c46: mov ecx, dword ptr [esi + 0xdc] */ r_ecx = R32((u32)(r_esi+0xdcu));
    /* 00640c4c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x640c51u); f_00829cc8();
    /* 00640c51: push dword ptr [esi + 0xc8] */ { u32 v = R32((u32)(r_esi+0xc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00640c57: mov ecx, dword ptr [esi + 0xd0] */ r_ecx = R32((u32)(r_esi+0xd0u));
    /* 00640c5d: mov edx, dword ptr [esi + 0xe8] */ r_edx = R32((u32)(r_esi+0xe8u));
    /* 00640c63: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x640c68u); f_0083bd00();
    /* 00640c68: mov ecx, dword ptr [esi + 0xe4] */ r_ecx = R32((u32)(r_esi+0xe4u));
    /* 00640c6e: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x640c73u); f_00829cc8();
    /* 00640c73: push dword ptr [esi + 0xcc] */ { u32 v = R32((u32)(r_esi+0xccu)); r_esp -= 4; W32(r_esp, v); }
    /* 00640c79: mov ecx, dword ptr [esi + 0xd8] */ r_ecx = R32((u32)(r_esi+0xd8u));
    /* 00640c7f: mov edx, dword ptr [esi + 0xec] */ r_edx = R32((u32)(r_esi+0xecu));
    /* 00640c85: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x640c8au); f_0083bd00();
    /* 00640c8a: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x640c8fu); f_0082dab0();
    /* 00640c8f: mov ecx, dword ptr [esi + 0xe0] */ r_ecx = R32((u32)(r_esi+0xe0u));
    /* 00640c95: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x640c9au); f_00829cc8();
    /* 00640c9a: mov ecx, dword ptr [esi + 0xd4] */ r_ecx = R32((u32)(r_esi+0xd4u));
    /* 00640ca0: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x640ca5u); f_00831758();
    /* 00640ca5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x640caau); f_0082da80();
    /* 00640caa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00640cab: ret  */ FN_RET(0x00640c10); r_esp += 4; return;
}

void f_00640cac(void) /* sub_640CAC */
{
    FN_ENTER(0x00640cac);
    /* 00640cac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00640cad: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00640caf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00640cb1: call 0x669bd8 */ r_esp -= 4; W32(r_esp, 0x640cb6u); f_00669bd8();
    /* 00640cb6: mov eax, dword ptr [ebp + 0x8c] */ r_eax = R32((u32)(r_ebp+0x8cu));
    /* 00640cbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00640cbe: jl 0x640ce7 */ if ((fS!=fO)) goto L_00640ce7;
L_00640cc0:; BB(0x00640cc0);
    /* 00640cc0: mov ecx, dword ptr [0xa8f2b8] */ r_ecx = R32((u32)(0xa8f2b8u));
    /* 00640cc6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640cc8: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x640ccdu); f_005b8624();
    /* 00640ccd: push 0x934b48 */ { u32 v = 0x934b48u; r_esp -= 4; W32(r_esp, v); }
    /* 00640cd2: push 0x130022 */ { u32 v = 0x130022u; r_esp -= 4; W32(r_esp, v); }
    /* 00640cd7: mov dword ptr [ebp + 0xdc], eax */ W32((u32)(r_ebp+0xdcu), r_eax);
    /* 00640cdd: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x640ce2u); f_0061cdb0();
    /* 00640ce2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00640ce5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00640ce6: ret  */ FN_RET(0x00640cac); r_esp += 4; return;
L_00640ce7:; BB(0x00640ce7);
    /* 00640ce7: push 0x934b2c */ { u32 v = 0x934b2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00640cec: push 0x130022 */ { u32 v = 0x130022u; r_esp -= 4; W32(r_esp, v); }
    /* 00640cf1: mov eax, dword ptr [0xa8f2b4] */ r_eax = R32((u32)(0xa8f2b4u));
    /* 00640cf6: mov dword ptr [ebp + 0xdc], eax */ W32((u32)(r_ebp+0xdcu), r_eax);
    /* 00640cfc: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x640d01u); f_0061cdb0();
    /* 00640d01: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00640d04: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00640d05: ret  */ FN_RET(0x00640cac); r_esp += 4; return;
}

void f_00640d08(void)
{
    FN_ENTER(0x00640d08);
    /* 00640d08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00640d09: mov ebp, esp */ r_ebp = r_esp;
    /* 00640d0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00640d0d: push 0x8e52f8 */ { u32 v = 0x8e52f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00640d12: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00640d18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640d19: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00640d20: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00640d23: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00640d26: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00640d29: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00640d2c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00640d2f: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640d34: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00640d3b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x640d40u); f_005caba4();
    /* 00640d40: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00640d41: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00640d44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00640d46: je 0x640d7f */ if (fZ) goto L_00640d7f;
L_00640d48:; BB(0x00640d48);
    /* 00640d48: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00640d4f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00640d56: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00640d59: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00640d5f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00640d62: call 0x640d84 */ r_esp -= 4; W32(r_esp, 0x640d67u); f_00640d84();
    /* 00640d67: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00640d6a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00640d71:; BB(0x00640d71);
    /* 00640d71: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00640d74: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00640d7b: mov esp, ebp */ r_esp = r_ebp;
    /* 00640d7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00640d7e: ret  */ FN_RET(0x00640d08); r_esp += 4; return;
L_00640d7f:; BB(0x00640d7f);
    /* 00640d7f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00640d81: jmp 0x640d71 */ goto L_00640d71;
}

void f_00640d84(void) /* sub_640D84 */
{
    FN_ENTER(0x00640d84);
    /* 00640d84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00640d85: mov ebp, esp */ r_ebp = r_esp;
    /* 00640d87: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00640d89: push 0x8e5314 */ { u32 v = 0x8e5314u; r_esp -= 4; W32(r_esp, v); }
    /* 00640d8e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00640d94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640d95: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00640d9c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00640d9f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00640da2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00640da5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00640da8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00640dab: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00640dae: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00640db1: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00640db4: call 0x66982c */ r_esp -= 4; W32(r_esp, 0x640db9u); f_0066982c();
    /* 00640db9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00640dc0: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00640dc3: mov dword ptr [edx], 0xb2e940 */ W32((u32)(r_edx), 0xb2e940u);
    /* 00640dc9: mov eax, dword ptr [0x9c6d9c] */ r_eax = R32((u32)(0x9c6d9cu));
    /* 00640dce: mov ecx, dword ptr [0xa8f2b8] */ r_ecx = R32((u32)(0xa8f2b8u));
    /* 00640dd4: mov dword ptr [edx + 0xcc], 0 */ W32((u32)(r_edx+0xccu), 0x0u);
    /* 00640dde: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00640de1: mov dword ptr [edx + 0xc8], 0 */ W32((u32)(r_edx+0xc8u), 0x0u);
    /* 00640deb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640ded: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x640df2u); f_005b8610();
    /* 00640df2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00640df5: mov ecx, dword ptr [0xa8f2b8] */ r_ecx = R32((u32)(0xa8f2b8u));
    /* 00640dfb: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00640dfd: mov dword ptr [edx + 0xd0], eax */ W32((u32)(r_edx+0xd0u), r_eax);
    /* 00640e03: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x640e08u); f_005b8610();
    /* 00640e08: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00640e0b: mov ecx, dword ptr [0xa8f2b8] */ r_ecx = R32((u32)(0xa8f2b8u));
    /* 00640e11: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00640e13: mov dword ptr [edx + 0xd4], eax */ W32((u32)(r_edx+0xd4u), r_eax);
    /* 00640e19: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x640e1eu); f_005b8610();
    /* 00640e1e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00640e21: mov dword ptr [edx + 0xd8], eax */ W32((u32)(r_edx+0xd8u), r_eax);
    /* 00640e27: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 00640e2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00640e2f: jl 0x640ee7 */ if ((fS!=fO)) goto L_00640ee7;
L_00640e35:; BB(0x00640e35);
    /* 00640e35: mov ecx, dword ptr [0xa8f2b8] */ r_ecx = R32((u32)(0xa8f2b8u));
    /* 00640e3b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640e3d: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x640e42u); f_005b8624();
    /* 00640e42: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00640e45: mov dword ptr [edx + 0xdc], eax */ W32((u32)(r_edx+0xdcu), r_eax);
L_00640e4b:; BB(0x00640e4b);
    /* 00640e4b: mov ecx, dword ptr [0xa8f2b8] */ r_ecx = R32((u32)(0xa8f2b8u));
    /* 00640e51: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00640e53: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x640e58u); f_005b8624();
    /* 00640e58: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00640e5b: mov ecx, dword ptr [0xa8f2b8] */ r_ecx = R32((u32)(0xa8f2b8u));
    /* 00640e61: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00640e63: mov dword ptr [edx + 0xe0], eax */ W32((u32)(r_edx+0xe0u), r_eax);
    /* 00640e69: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x640e6eu); f_005b8624();
    /* 00640e6e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00640e71: mov ecx, dword ptr [0xa8f2b8] */ r_ecx = R32((u32)(0xa8f2b8u));
    /* 00640e77: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640e79: mov dword ptr [edx + 0xe4], eax */ W32((u32)(r_edx+0xe4u), r_eax);
    /* 00640e7f: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x640e84u); f_005b8638();
    /* 00640e84: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00640e87: mov ecx, dword ptr [0xa8f2b8] */ r_ecx = R32((u32)(0xa8f2b8u));
    /* 00640e8d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00640e8f: mov dword ptr [edx + 0xe8], eax */ W32((u32)(r_edx+0xe8u), r_eax);
    /* 00640e95: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x640e9au); f_005b8638();
    /* 00640e9a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00640e9d: mov dword ptr [edx + 0xec], eax */ W32((u32)(r_edx+0xecu), r_eax);
    /* 00640ea3: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x640ea8u); f_0078b1c4();
    /* 00640ea8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00640eab: je 0x640eca */ if (fZ) goto L_00640eca;
L_00640ead:; BB(0x00640ead);
    /* 00640ead: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_00640eb0:; BB(0x00640eb0);
    /* 00640eb0: mov dword ptr [eax + 0xc4], 0 */ W32((u32)(r_eax+0xc4u), 0x0u);
    /* 00640eba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00640ebd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00640ec4: mov esp, ebp */ r_esp = r_ebp;
    /* 00640ec6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00640ec7: ret 8 */ FN_RET(0x00640d84); r_esp += 12; return;
L_00640eca:; BB(0x00640eca);
    /* 00640eca: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00640ecd: mov edx, dword ptr [eax + 0x8c] */ r_edx = R32((u32)(r_eax+0x8cu));
    /* 00640ed3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00640ed5: jl 0x640eb0 */ if ((fS!=fO)) goto L_00640eb0;
L_00640ed7:; BB(0x00640ed7);
    /* 00640ed7: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00640edb: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00640ee1: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00640ee5: jmp 0x640eb0 */ goto L_00640eb0;
L_00640ee7:; BB(0x00640ee7);
    /* 00640ee7: mov eax, dword ptr [0xa8f2b4] */ r_eax = R32((u32)(0xa8f2b4u));
    /* 00640eec: mov dword ptr [edx + 0xdc], eax */ W32((u32)(r_edx+0xdcu), r_eax);
    /* 00640ef2: jmp 0x640e4b */ goto L_00640e4b;
}

void f_00640ef8(void) /* sub_640EF8 */
{
    FN_ENTER(0x00640ef8);
    /* 00640ef8: mov dword ptr [0xa8f2a8], 0x3f800000 */ W32((u32)(0xa8f2a8u), 0x3f800000u);
    /* 00640f02: mov dword ptr [0xa8f2ac], 0x41000000 */ W32((u32)(0xa8f2acu), 0x41000000u);
    /* 00640f0c: mov dword ptr [0xa8f2b0], 0x3fc00000 */ W32((u32)(0xa8f2b0u), 0x3fc00000u);
    /* 00640f16: ret  */ FN_RET(0x00640ef8); r_esp += 4; return;
}

void f_00640f18(void) /* sub_640F18 */
{
    FN_ENTER(0x00640f18);
    /* 00640f18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00640f19: mov ebp, esp */ r_ebp = r_esp;
    /* 00640f1b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00640f1d: push 0x8e533c */ { u32 v = 0x8e533cu; r_esp -= 4; W32(r_esp, v); }
    /* 00640f22: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00640f28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640f29: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00640f30: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00640f33: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00640f36: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00640f39: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00640f3c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00640f3f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00640f44: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00640f4b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x640f50u); f_008581c5();
    /* 00640f50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00640f51: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00640f54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00640f56: je 0x640fae */ if (fZ) goto L_00640fae;
L_00640f58:; BB(0x00640f58);
    /* 00640f58: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00640f5f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00640f66: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00640f69: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00640f6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640f6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640f6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640f6e: push 0x9c6d84 */ { u32 v = 0x9c6d84u; r_esp -= 4; W32(r_esp, v); }
    /* 00640f73: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640f75: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x640f7au); f_005b7a84();
    /* 00640f7a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00640f7d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00640f84:; BB(0x00640f84);
    /* 00640f84: mov dword ptr [0xa8f2b8], eax */ W32((u32)(0xa8f2b8u), r_eax);
    /* 00640f89: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00640f90: push 0x934ad0 */ { u32 v = 0x934ad0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640f95: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x640f9au); f_008009dc();
    /* 00640f9a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00640f9b: mov dword ptr [0xa8f2b4], eax */ W32((u32)(0xa8f2b4u), r_eax);
    /* 00640fa0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00640fa3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00640faa: mov esp, ebp */ r_esp = r_ebp;
    /* 00640fac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00640fad: ret  */ FN_RET(0x00640f18); r_esp += 4; return;
L_00640fae:; BB(0x00640fae);
    /* 00640fae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00640fb0: jmp 0x640f84 */ goto L_00640f84;
}

void f_00640fb4(void) /* sub_640FB4 */
{
    FN_ENTER(0x00640fb4);
    /* 00640fb4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00640fb5: mov edi, ecx */ r_edi = r_ecx;
    /* 00640fb7: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00640fbb: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00640fbf: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00640fc1: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640fc6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00640fc8: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 00640fcb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640fcd: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00640fd0: mov dword ptr [edi + 0xc], edx */ W32((u32)(r_edi+0xcu), r_edx);
    /* 00640fd3: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00640fd6: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 00640fd8: mov dword ptr [edi + 0x24], 0 */ W32((u32)(r_edi+0x24u), 0x0u);
    /* 00640fdf: mov dword ptr [edi + 0x10], eax */ W32((u32)(r_edi+0x10u), r_eax);
    /* 00640fe2: lea eax, [edi + 0x28] */ r_eax = (u32)(r_edi+0x28u);
    /* 00640fe5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640fe6: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x640febu); f_0086b688();
    /* 00640feb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640fee: call 0x691f70 */ r_esp -= 4; W32(r_esp, 0x640ff3u); f_00691f70();
    /* 00640ff3: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 00640ff6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00640ff8: mov dword ptr [edi + 0x14], eax */ W32((u32)(r_edi+0x14u), r_eax);
    /* 00640ffb: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 00640ffe: mov ecx, edi */ r_ecx = r_edi;
    /* 00641000: call 0x641070 */ r_esp -= 4; W32(r_esp, 0x641005u); f_00641070();
    /* 00641005: mov dword ptr [edi + 0x1c], 0 */ W32((u32)(r_edi+0x1cu), 0x0u);
    /* 0064100c: mov eax, edi */ r_eax = r_edi;
    /* 0064100e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064100f: ret 8 */ FN_RET(0x00640fb4); r_esp += 12; return;
}

