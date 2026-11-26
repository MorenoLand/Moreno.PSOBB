#include "protos.h"

void f_008a4070(void) /* sub_8A4070 */
{
    FN_ENTER(0x008a4070);
    /* 008a4070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a4071: mov ebp, esp */ r_ebp = r_esp;
    /* 008a4073: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a4074: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4075: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008a4078: mov al, byte ptr [esi + 0x11c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x11cu))) & 0xffu);
    /* 008a407e: cmp al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 008a4080: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4081: jae 0x8a40e7 */ if (!fC) goto L_008a40e7;
L_008a4083:; BB(0x008a4083);
    /* 008a4083: movzx ebx, al */ r_ebx = (u32)(u8)r_eax;
    /* 008a4086: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008a4089: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 008a408b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a408c: sub edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a408e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a408f: lea eax, [ebx + eax + 0x20] */ r_eax = (u32)(r_ebx+r_eax+0x20u);
    /* 008a4093: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a4094: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4095: call 0x8a6258 */ r_esp -= 4; W32(r_esp, 0x8a409au); f_008a6258();
    /* 008a409a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008a409d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a409e: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a40a1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a40a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a40a3: mov byte ptr [esi + 0x11c], 8 */ W8((u32)(r_esi+0x11cu), 0x8u);
    /* 008a40aa: call 0x8a62bf */ r_esp -= 4; W32(r_esp, 0x8a40afu); f_008a62bf();
    /* 008a40af: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a40b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a40b4: je 0x8a40e7 */ if (fZ) goto L_008a40e7;
L_008a40b6:; BB(0x008a40b6);
    /* 008a40b6: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a40b9: jae 0x8a40da */ if (!fC) goto L_008a40da;
L_008a40bb:; BB(0x008a40bb);
    /* 008a40bb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008a40be: add edi, -4 */ {  u32 a = r_edi; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a40c1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a40c2: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a40c5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a40c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a40c7: call 0x8a62bf */ r_esp -= 4; W32(r_esp, 0x8a40ccu); f_008a62bf();
    /* 008a40cc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a40cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a40d1: je 0x8a40da */ if (fZ) goto L_008a40da;
L_008a40d3:; BB(0x008a40d3);
    /* 008a40d3: push 0x99d8a8 */ { u32 v = 0x99d8a8u; r_esp -= 4; W32(r_esp, v); }
    /* 008a40d8: jmp 0x8a40df */ goto L_008a40df;
L_008a40da:; BB(0x008a40da);
    /* 008a40da: push 0x99d880 */ { u32 v = 0x99d880u; r_esp -= 4; W32(r_esp, v); }
L_008a40df:; BB(0x008a40df);
    /* 008a40df: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a40e0: call 0x8a3ef0 */ r_esp -= 4; W32(r_esp, 0x8a40e5u); f_008a3ef0();
    /* 008a40e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a40e6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a40e7:; BB(0x008a40e7);
    /* 008a40e7: lea ebx, [esi + 0x10c] */ r_ebx = (u32)(r_esi+0x10cu);
L_008a40ed:; BB(0x008a40ed);
    /* 008a40ed: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008a40ef: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 008a40f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a40f3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a40f4: call 0x8a6258 */ r_esp -= 4; W32(r_esp, 0x8a40f9u); f_008a6258();
    /* 008a40f9: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 008a40fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a40fd: call 0x8aa942 */ r_esp -= 4; W32(r_esp, 0x8a4102u); f_008aa942();
    /* 008a4102: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4103: mov edi, eax */ r_edi = r_eax;
    /* 008a4105: call 0x8a635f */ r_esp -= 4; W32(r_esp, 0x8a410au); f_008a635f();
    /* 008a410a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008a410c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a410d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a410e: call 0x8aa965 */ r_esp -= 4; W32(r_esp, 0x8a4113u); f_008aa965();
    /* 008a4113: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 008a4115: mov eax, 0x99d794 */ r_eax = 0x99d794u;
    /* 008a411a: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a411d: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a411f: jne 0x8a412d */ if (!fZ) goto L_008a412d;
L_008a4121:; BB(0x008a4121);
    /* 008a4121: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4122: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a4125: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4126: call 0x8ab2c1 */ r_esp -= 4; W32(r_esp, 0x8a412bu); f_008ab2c1();
    /* 008a412b: jmp 0x8a419d */ goto L_008a419d;
L_008a412d:; BB(0x008a412d);
    /* 008a412d: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 008a412f: mov eax, 0x99d7ac */ r_eax = 0x99d7acu;
    /* 008a4134: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a4136: jne 0x8a4144 */ if (!fZ) goto L_008a4144;
L_008a4138:; BB(0x008a4138);
    /* 008a4138: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4139: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a413c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a413d: call 0x8ab4b7 */ r_esp -= 4; W32(r_esp, 0x8a4142u); f_008ab4b7();
    /* 008a4142: jmp 0x8a419d */ goto L_008a419d;
L_008a4144:; BB(0x008a4144);
    /* 008a4144: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 008a4146: mov eax, 0x99d7a4 */ r_eax = 0x99d7a4u;
    /* 008a414b: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a414d: jne 0x8a415b */ if (!fZ) goto L_008a415b;
L_008a414f:; BB(0x008a414f);
    /* 008a414f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4150: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a4153: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4154: call 0x8ab5e1 */ r_esp -= 4; W32(r_esp, 0x8a4159u); f_008ab5e1();
    /* 008a4159: jmp 0x8a419d */ goto L_008a419d;
L_008a415b:; BB(0x008a415b);
    /* 008a415b: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 008a415d: mov eax, 0x99d79c */ r_eax = 0x99d79cu;
    /* 008a4162: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a4164: je 0x8a41ac */ if (fZ) goto L_008a41ac;
L_008a4166:; BB(0x008a4166);
    /* 008a4166: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4167: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a416a: mov eax, 0x99d7b4 */ r_eax = 0x99d7b4u;
    /* 008a416f: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a4171: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4172: jne 0x8a417b */ if (!fZ) goto L_008a417b;
L_008a4174:; BB(0x008a4174);
    /* 008a4174: call 0x8ab62b */ r_esp -= 4; W32(r_esp, 0x8a4179u); f_008ab62b();
    /* 008a4179: jmp 0x8a419d */ goto L_008a419d;
L_008a417b:; BB(0x008a417b);
    /* 008a417b: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 008a417d: mov eax, 0x99d7bc */ r_eax = 0x99d7bcu;
    /* 008a4182: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a4184: jne 0x8a418d */ if (!fZ) goto L_008a418d;
L_008a4186:; BB(0x008a4186);
    /* 008a4186: call 0x8ab736 */ r_esp -= 4; W32(r_esp, 0x8a418bu); f_008ab736();
    /* 008a418b: jmp 0x8a419d */ goto L_008a419d;
L_008a418d:; BB(0x008a418d);
    /* 008a418d: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 008a418f: mov eax, 0x99d7c4 */ r_eax = 0x99d7c4u;
    /* 008a4194: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a4196: jne 0x8a41a5 */ if (!fZ) goto L_008a41a5;
L_008a4198:; BB(0x008a4198);
    /* 008a4198: call 0x8ab825 */ r_esp -= 4; W32(r_esp, 0x8a419du); f_008ab825();
L_008a419d:; BB(0x008a419d);
    /* 008a419d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a41a0: jmp 0x8a40ed */ goto L_008a40ed;
L_008a41a5:; BB(0x008a41a5);
    /* 008a41a5: call 0x8ab9dc */ r_esp -= 4; W32(r_esp, 0x8a41aau); f_008ab9dc();
    /* 008a41aa: jmp 0x8a419d */ goto L_008a419d;
L_008a41ac:; BB(0x008a41ac);
    /* 008a41ac: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 008a41af: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a41b1: jne 0x8a41ba */ if (!fZ) goto L_008a41ba;
L_008a41b3:; BB(0x008a41b3);
    /* 008a41b3: push 0x99d864 */ { u32 v = 0x99d864u; r_esp -= 4; W32(r_esp, v); }
    /* 008a41b8: jmp 0x8a41cc */ goto L_008a41cc;
L_008a41ba:; BB(0x008a41ba);
    /* 008a41ba: cmp byte ptr [esi + 0x116], 3 */ {  u32 a = R8((u32)(r_esi+0x116u)); u32 b = 0x3u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a41c1: jne 0x8a41d4 */ if (!fZ) goto L_008a41d4;
L_008a41c3:; BB(0x008a41c3);
    /* 008a41c3: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a41c5: jne 0x8a41d4 */ if (!fZ) goto L_008a41d4;
L_008a41c7:; BB(0x008a41c7);
    /* 008a41c7: push 0x99d848 */ { u32 v = 0x99d848u; r_esp -= 4; W32(r_esp, v); }
L_008a41cc:; BB(0x008a41cc);
    /* 008a41cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a41cd: call 0x8a3ef0 */ r_esp -= 4; W32(r_esp, 0x8a41d2u); f_008a3ef0();
    /* 008a41d2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a41d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a41d4:; BB(0x008a41d4);
    /* 008a41d4: or dword ptr [esi + 0x58], 4 */ { u32 ad = (u32)(r_esi+0x58u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a41d8: mov dword ptr [esi + 0xfc], edi */ W32((u32)(r_esi+0xfcu), r_edi);
    /* 008a41de: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a41df: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a41e0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a41e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008a41e2: ret  */ FN_RET(0x008a4070); r_esp += 4; return;
}

void f_008a41e3(void) /* sub_8A41E3 */
{
    FN_ENTER(0x008a41e3);
    /* 008a41e3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a41e4: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 008a41e8: test byte ptr [esi + 0x5c], 0x40 */ {  u32 a = R8((u32)(r_esi+0x5cu)); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a41ec: jne 0x8a41f5 */ if (!fZ) goto L_008a41f5;
L_008a41ee:; BB(0x008a41ee);
    /* 008a41ee: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a41ef: call 0x8ab099 */ r_esp -= 4; W32(r_esp, 0x8a41f4u); f_008ab099();
    /* 008a41f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a41f5:; BB(0x008a41f5);
    /* 008a41f5: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a41f9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a41fa: call 0x8a4b65 */ r_esp -= 4; W32(r_esp, 0x8a41ffu); f_008a4b65();
    /* 008a41ff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a4200: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a4201: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a4202: ret  */ FN_RET(0x008a41e3); r_esp += 4; return;
}

void f_008a4203(void) /* sub_8A4203 */
{
    FN_ENTER(0x008a4203);
    /* 008a4203: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a4204: mov ebp, esp */ r_ebp = r_esp;
    /* 008a4206: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4207: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008a420a: test byte ptr [esi + 0x5c], 0x40 */ {  u32 a = R8((u32)(r_esi+0x5cu)); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a420e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a420f: jne 0x8a4218 */ if (!fZ) goto L_008a4218;
L_008a4211:; BB(0x008a4211);
    /* 008a4211: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4212: call 0x8ab099 */ r_esp -= 4; W32(r_esp, 0x8a4217u); f_008ab099();
    /* 008a4217: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a4218:; BB(0x008a4218);
    /* 008a4218: cmp byte ptr [esi + 0x113], 0 */ {  u32 a = R8((u32)(r_esi+0x113u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a421f: je 0x8a4331 */ if (fZ) goto L_008a4331;
L_008a4225:; BB(0x008a4225);
    /* 008a4225: test byte ptr [esi + 0x60], 2 */ {  u32 a = R8((u32)(r_esi+0x60u)); u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a4229: je 0x8a4331 */ if (fZ) goto L_008a4331;
L_008a422f:; BB(0x008a422f);
    /* 008a422f: movzx eax, byte ptr [esi + 0x114] */ r_eax = (u32)R8((u32)(r_esi+0x114u));
    /* 008a4236: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008a4238: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008a423a: je 0x8a4309 */ if (fZ) goto L_008a4309;
L_008a4240:; BB(0x008a4240);
    /* 008a4240: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008a4241: je 0x8a42ea */ if (fZ) goto L_008a42ea;
L_008a4247:; BB(0x008a4247);
    /* 008a4247: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008a4248: je 0x8a42d1 */ if (fZ) goto L_008a42d1;
L_008a424e:; BB(0x008a424e);
    /* 008a424e: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008a424f: je 0x8a42b6 */ if (fZ) goto L_008a42b6;
L_008a4251:; BB(0x008a4251);
    /* 008a4251: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008a4252: je 0x8a4299 */ if (fZ) goto L_008a4299;
L_008a4254:; BB(0x008a4254);
    /* 008a4254: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008a4255: je 0x8a4277 */ if (fZ) goto L_008a4277;
L_008a4257:; BB(0x008a4257);
    /* 008a4257: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008a4258: jne 0x8a4333 */ if (!fZ) goto L_008a4333;
L_008a425e:; BB(0x008a425e);
    /* 008a425e: test byte ptr [esi + 0xd4], 1 */ {  u32 a = R8((u32)(r_esi+0xd4u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a4265: jne 0x8a4333 */ if (!fZ) goto L_008a4333;
L_008a426b:; BB(0x008a426b);
    /* 008a426b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a426c: call 0x8aba26 */ r_esp -= 4; W32(r_esp, 0x8a4271u); f_008aba26();
    /* 008a4271: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a4272: jmp 0x8a45a6 */ goto L_008a45a6;
L_008a4277:; BB(0x008a4277);
    /* 008a4277: test byte ptr [esi + 0xd4], 1 */ {  u32 a = R8((u32)(r_esi+0xd4u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a427e: jne 0x8a428d */ if (!fZ) goto L_008a428d;
L_008a4280:; BB(0x008a4280);
    /* 008a4280: cmp dword ptr [esi + 0xb8], 2 */ {  u32 a = R32((u32)(r_esi+0xb8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a4287: jae 0x8a4333 */ if (!fC) goto L_008a4333;
L_008a428d:; BB(0x008a428d);
    /* 008a428d: cmp dword ptr [ebp + 0x10], edi */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a4290: je 0x8a426b */ if (fZ) goto L_008a426b;
L_008a4292:; BB(0x008a4292);
    /* 008a4292: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 008a4294: jmp 0x8a4320 */ goto L_008a4320;
L_008a4299:; BB(0x008a4299);
    /* 008a4299: mov eax, dword ptr [esi + 0xd4] */ r_eax = R32((u32)(r_esi+0xd4u));
    /* 008a429f: mov ecx, eax */ r_ecx = r_eax;
    /* 008a42a1: and cl, 3 */ {  u32 a = (u8)r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008a42a4: cmp cl, 2 */ {  u32 a = (u8)r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a42a7: je 0x8a4333 */ if (fZ) goto L_008a4333;
L_008a42ad:; BB(0x008a42ad);
    /* 008a42ad: cmp dword ptr [ebp + 0x10], edi */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a42b0: je 0x8a426b */ if (fZ) goto L_008a426b;
L_008a42b2:; BB(0x008a42b2);
    /* 008a42b2: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a42b4: jmp 0x8a4315 */ goto L_008a4315;
L_008a42b6:; BB(0x008a42b6);
    /* 008a42b6: test byte ptr [esi + 0xd4], 3 */ {  u32 a = R8((u32)(r_esi+0xd4u)); u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a42bd: jne 0x8a42c8 */ if (!fZ) goto L_008a42c8;
L_008a42bf:; BB(0x008a42bf);
    /* 008a42bf: cmp dword ptr [esi + 0xb8], 3 */ {  u32 a = R32((u32)(r_esi+0xb8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a42c6: jae 0x8a4333 */ if (!fC) goto L_008a4333;
L_008a42c8:; BB(0x008a42c8);
    /* 008a42c8: cmp dword ptr [ebp + 0x10], edi */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a42cb: je 0x8a426b */ if (fZ) goto L_008a426b;
L_008a42cd:; BB(0x008a42cd);
    /* 008a42cd: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 008a42cf: jmp 0x8a4320 */ goto L_008a4320;
L_008a42d1:; BB(0x008a42d1);
    /* 008a42d1: mov eax, dword ptr [esi + 0xd4] */ r_eax = R32((u32)(r_esi+0xd4u));
    /* 008a42d7: mov ecx, eax */ r_ecx = r_eax;
    /* 008a42d9: and cl, 7 */ {  u32 a = (u8)r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008a42dc: cmp cl, 4 */ {  u32 a = (u8)r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a42df: je 0x8a4333 */ if (fZ) goto L_008a4333;
L_008a42e1:; BB(0x008a42e1);
    /* 008a42e1: cmp dword ptr [ebp + 0x10], edi */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a42e4: je 0x8a426b */ if (fZ) goto L_008a426b;
L_008a42e6:; BB(0x008a42e6);
    /* 008a42e6: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a42e8: jmp 0x8a4315 */ goto L_008a4315;
L_008a42ea:; BB(0x008a42ea);
    /* 008a42ea: test byte ptr [esi + 0xd4], 7 */ {  u32 a = R8((u32)(r_esi+0xd4u)); u32 b = 0x7u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a42f1: jne 0x8a42fc */ if (!fZ) goto L_008a42fc;
L_008a42f3:; BB(0x008a42f3);
    /* 008a42f3: cmp dword ptr [esi + 0xb8], 5 */ {  u32 a = R32((u32)(r_esi+0xb8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a42fa: jae 0x8a4333 */ if (!fC) goto L_008a4333;
L_008a42fc:; BB(0x008a42fc);
    /* 008a42fc: cmp dword ptr [ebp + 0x10], edi */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a42ff: je 0x8a426b */ if (fZ) goto L_008a426b;
L_008a4305:; BB(0x008a4305);
    /* 008a4305: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 008a4307: jmp 0x8a4320 */ goto L_008a4320;
L_008a4309:; BB(0x008a4309);
    /* 008a4309: test byte ptr [esi + 0xd4], 7 */ {  u32 a = R8((u32)(r_esi+0xd4u)); u32 b = 0x7u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a4310: je 0x8a4333 */ if (fZ) goto L_008a4333;
L_008a4312:; BB(0x008a4312);
    /* 008a4312: cmp dword ptr [ebp + 0x10], edi */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
L_008a4315:; BB(0x008a4315);
    /* 008a4315: je 0x8a426b */ if (fZ) goto L_008a426b;
L_008a431b:; BB(0x008a431b);
    /* 008a431b: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
L_008a4320:; BB(0x008a4320);
    /* 008a4320: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a4323: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4324: call 0x8aaa3f */ r_esp -= 4; W32(r_esp, 0x8a4329u); f_008aaa3f();
    /* 008a4329: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a432c: jmp 0x8a426b */ goto L_008a426b;
L_008a4331:; BB(0x008a4331);
    /* 008a4331: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_008a4333:; BB(0x008a4333);
    /* 008a4333: test byte ptr [esi + 0x58], 4 */ {  u32 a = R8((u32)(r_esi+0x58u)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a4337: jne 0x8a4346 */ if (!fZ) goto L_008a4346;
L_008a4339:; BB(0x008a4339);
    /* 008a4339: push 0x99d8fc */ { u32 v = 0x99d8fcu; r_esp -= 4; W32(r_esp, v); }
    /* 008a433e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a433f: call 0x8a3ef0 */ r_esp -= 4; W32(r_esp, 0x8a4344u); f_008a3ef0();
    /* 008a4344: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a4345: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a4346:; BB(0x008a4346);
    /* 008a4346: mov eax, dword ptr [esi + 0xdc] */ r_eax = R32((u32)(r_esi+0xdcu));
    /* 008a434c: mov dword ptr [esi + 0x70], eax */ W32((u32)(r_esi+0x70u), r_eax);
    /* 008a434f: mov eax, dword ptr [esi + 0xcc] */ r_eax = R32((u32)(r_esi+0xccu));
    /* 008a4355: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a4356: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 008a4359: lea ebx, [esi + 0x64] */ r_ebx = (u32)(r_esi+0x64u);
L_008a435c:; BB(0x008a435c);
    /* 008a435c: cmp dword ptr [esi + 0x68], edi */ {  u32 a = R32((u32)(r_esi+0x68u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a435f: jne 0x8a43ff */ if (!fZ) goto L_008a43ff;
L_008a4365:; BB(0x008a4365);
    /* 008a4365: cmp dword ptr [esi + 0xfc], edi */ {  u32 a = R32((u32)(r_esi+0xfcu)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a436b: jne 0x8a43cb */ if (!fZ) goto L_008a43cb;
L_008a436d:; BB(0x008a436d);
    /* 008a436d: lea edi, [esi + 0x10c] */ r_edi = (u32)(r_esi+0x10cu);
L_008a4373:; BB(0x008a4373);
    /* 008a4373: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008a4375: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4376: call 0x8ab235 */ r_esp -= 4; W32(r_esp, 0x8a437bu); f_008ab235();
    /* 008a437b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008a437d: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 008a4380: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a4381: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4382: call 0x8a6258 */ r_esp -= 4; W32(r_esp, 0x8a4387u); f_008a6258();
    /* 008a4387: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 008a438a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a438b: call 0x8aa942 */ r_esp -= 4; W32(r_esp, 0x8a4390u); f_008aa942();
    /* 008a4390: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4391: mov dword ptr [esi + 0xfc], eax */ W32((u32)(r_esi+0xfcu), r_eax);
    /* 008a4397: call 0x8a635f */ r_esp -= 4; W32(r_esp, 0x8a439cu); f_008a635f();
    /* 008a439c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008a439e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a439f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a43a0: call 0x8aa965 */ r_esp -= 4; W32(r_esp, 0x8a43a5u); f_008aa965();
    /* 008a43a5: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 008a43a7: mov eax, 0x99d79c */ r_eax = 0x99d79cu;
    /* 008a43ac: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a43af: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a43b1: je 0x8a43c0 */ if (fZ) goto L_008a43c0;
L_008a43b3:; BB(0x008a43b3);
    /* 008a43b3: push 0x99d8e4 */ { u32 v = 0x99d8e4u; r_esp -= 4; W32(r_esp, v); }
    /* 008a43b8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a43b9: call 0x8a3ef0 */ r_esp -= 4; W32(r_esp, 0x8a43beu); f_008a3ef0();
    /* 008a43be: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a43bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a43c0:; BB(0x008a43c0);
    /* 008a43c0: cmp dword ptr [esi + 0xfc], 0 */ {  u32 a = R32((u32)(r_esi+0xfcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a43c7: je 0x8a4373 */ if (fZ) goto L_008a4373;
L_008a43c9:; BB(0x008a43c9);
    /* 008a43c9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_008a43cb:; BB(0x008a43cb);
    /* 008a43cb: mov eax, dword ptr [esi + 0xa0] */ r_eax = R32((u32)(r_esi+0xa0u));
    /* 008a43d1: mov edx, dword ptr [esi + 0xfc] */ r_edx = R32((u32)(r_esi+0xfcu));
    /* 008a43d7: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a43d9: mov ecx, dword ptr [esi + 0x9c] */ r_ecx = R32((u32)(r_esi+0x9cu));
    /* 008a43df: mov dword ptr [esi + 0x68], eax */ W32((u32)(r_esi+0x68u), r_eax);
    /* 008a43e2: mov dword ptr [ebx], ecx */ W32((u32)(r_ebx), r_ecx);
    /* 008a43e4: jbe 0x8a43e9 */ if ((fC||fZ)) goto L_008a43e9;
L_008a43e6:; BB(0x008a43e6);
    /* 008a43e6: mov dword ptr [esi + 0x68], edx */ W32((u32)(r_esi+0x68u), r_edx);
L_008a43e9:; BB(0x008a43e9);
    /* 008a43e9: push dword ptr [esi + 0x68] */ { u32 v = R32((u32)(r_esi+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a43ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a43ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a43ee: call 0x8aa965 */ r_esp -= 4; W32(r_esp, 0x8a43f3u); f_008aa965();
    /* 008a43f3: mov eax, dword ptr [esi + 0x68] */ r_eax = R32((u32)(r_esi+0x68u));
    /* 008a43f6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a43f9: sub dword ptr [esi + 0xfc], eax */ { u32 ad = (u32)(r_esi+0xfcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_008a43ff:; BB(0x008a43ff);
    /* 008a43ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008a4401: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a4402: call 0x8aa4e9 */ r_esp -= 4; W32(r_esp, 0x8a4407u); f_008aa4e9();
    /* 008a4407: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a440a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a440b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a440c: je 0x8a4432 */ if (fZ) goto L_008a4432;
L_008a440e:; BB(0x008a440e);
    /* 008a440e: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a4410: je 0x8a4427 */ if (fZ) goto L_008a4427;
L_008a4412:; BB(0x008a4412);
    /* 008a4412: mov eax, dword ptr [esi + 0x7c] */ r_eax = R32((u32)(r_esi+0x7cu));
    /* 008a4415: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a4417: jne 0x8a441e */ if (!fZ) goto L_008a441e;
L_008a4419:; BB(0x008a4419);
    /* 008a4419: mov eax, 0x99d8d0 */ r_eax = 0x99d8d0u;
L_008a441e:; BB(0x008a441e);
    /* 008a441e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a441f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4420: call 0x8a3ef0 */ r_esp -= 4; W32(r_esp, 0x8a4425u); f_008a3ef0();
    /* 008a4425: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a4426: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a4427:; BB(0x008a4427);
    /* 008a4427: cmp dword ptr [esi + 0x74], edi */ {  u32 a = R32((u32)(r_esi+0x74u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a442a: jne 0x8a435c */ if (!fZ) goto L_008a435c;
L_008a4430:; BB(0x008a4430);
    /* 008a4430: jmp 0x8a4459 */ goto L_008a4459;
L_008a4432:; BB(0x008a4432);
    /* 008a4432: cmp dword ptr [esi + 0x74], edi */ {  u32 a = R32((u32)(r_esi+0x74u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a4435: jne 0x8a4444 */ if (!fZ) goto L_008a4444;
L_008a4437:; BB(0x008a4437);
    /* 008a4437: cmp dword ptr [esi + 0x68], edi */ {  u32 a = R32((u32)(r_esi+0x68u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a443a: jne 0x8a4444 */ if (!fZ) goto L_008a4444;
L_008a443c:; BB(0x008a443c);
    /* 008a443c: cmp dword ptr [esi + 0xfc], edi */ {  u32 a = R32((u32)(r_esi+0xfcu)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a4442: je 0x8a4451 */ if (fZ) goto L_008a4451;
L_008a4444:; BB(0x008a4444);
    /* 008a4444: push 0x99d8b8 */ { u32 v = 0x99d8b8u; r_esp -= 4; W32(r_esp, v); }
    /* 008a4449: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a444a: call 0x8a3ef0 */ r_esp -= 4; W32(r_esp, 0x8a444fu); f_008a3ef0();
    /* 008a444f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a4450: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a4451:; BB(0x008a4451);
    /* 008a4451: or dword ptr [esi + 0x58], 8 */ { u32 ad = (u32)(r_esi+0x58u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008a4455: or dword ptr [esi + 0x5c], 0x20 */ { u32 ad = (u32)(r_esi+0x5cu);  u32 a = R32(ad); u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_008a4459:; BB(0x008a4459);
    /* 008a4459: mov cl, byte ptr [esi + 0x11a] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi+0x11au))) & 0xffu);
    /* 008a445f: mov al, byte ptr [esi + 0x116] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x116u))) & 0xffu);
    /* 008a4465: mov byte ptr [esi + 0xfa], cl */ W8((u32)(r_esi+0xfau), (u8)r_ecx);
    /* 008a446b: mov cl, byte ptr [esi + 0x117] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi+0x117u))) & 0xffu);
    /* 008a4471: mov byte ptr [esi + 0xf9], cl */ W8((u32)(r_esi+0xf9u), (u8)r_ecx);
    /* 008a4477: mov cl, byte ptr [esi + 0x119] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi+0x119u))) & 0xffu);
    /* 008a447d: mov byte ptr [esi + 0xfb], cl */ W8((u32)(r_esi+0xfbu), (u8)r_ecx);
    /* 008a4483: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 008a4486: mov byte ptr [esi + 0xf8], al */ W8((u32)(r_esi+0xf8u), (u8)r_eax);
    /* 008a448c: mov eax, dword ptr [esi + 0xd0] */ r_eax = R32((u32)(r_esi+0xd0u));
    /* 008a4492: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a4495: add ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a4498: shr ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008a449b: lea edi, [esi + 0xf0] */ r_edi = (u32)(r_esi+0xf0u);
    /* 008a44a1: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 008a44a3: mov eax, dword ptr [esi + 0xdc] */ r_eax = R32((u32)(r_esi+0xdcu));
    /* 008a44a9: mov dword ptr [esi + 0xf4], ecx */ W32((u32)(r_esi+0xf4u), r_ecx);
    /* 008a44af: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 008a44b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a44b3: mov ecx, dword ptr [esi + 0xd8] */ r_ecx = R32((u32)(r_esi+0xd8u));
    /* 008a44b9: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a44ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a44bb: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a44bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a44bd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a44be: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a44bf: call 0x8aaf1e */ r_esp -= 4; W32(r_esp, 0x8a44c4u); f_008aaf1e();
    /* 008a44c4: mov eax, dword ptr [esi + 0xc8] */ r_eax = R32((u32)(r_esi+0xc8u));
    /* 008a44ca: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a44cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a44cc: push dword ptr [esi + 0xdc] */ { u32 v = R32((u32)(r_esi+0xdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a44d2: push dword ptr [esi + 0xd8] */ { u32 v = R32((u32)(r_esi+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a44d8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a44d9: call 0x8aa8ee */ r_esp -= 4; W32(r_esp, 0x8a44deu); f_008aa8ee();
    /* 008a44de: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008a44e0: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a44e3: cmp dword ptr [esi + 0x60], ebx */ {  u32 a = R32((u32)(r_esi+0x60u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a44e6: je 0x8a44ef */ if (fZ) goto L_008a44ef;
L_008a44e8:; BB(0x008a44e8);
    /* 008a44e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a44e9: call 0x8a5f25 */ r_esp -= 4; W32(r_esp, 0x8a44eeu); f_008a5f25();
    /* 008a44ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a44ef:; BB(0x008a44ef);
    /* 008a44ef: cmp byte ptr [esi + 0x113], 0 */ {  u32 a = R8((u32)(r_esi+0x113u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a44f6: je 0x8a4557 */ if (fZ) goto L_008a4557;
L_008a44f8:; BB(0x008a44f8);
    /* 008a44f8: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 008a44fb: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a44fd: je 0x8a4557 */ if (fZ) goto L_008a4557;
L_008a44ff:; BB(0x008a44ff);
    /* 008a44ff: mov cl, byte ptr [esi + 0x114] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi+0x114u))) & 0xffu);
    /* 008a4505: cmp cl, 6 */ {  u32 a = (u8)r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 008a4508: jae 0x8a4520 */ if (!fC) goto L_008a4520;
L_008a450a:; BB(0x008a450a);
    /* 008a450a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a450b: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
    /* 008a450e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a450f: mov eax, dword ptr [esi + 0xdc] */ r_eax = R32((u32)(r_esi+0xdcu));
    /* 008a4515: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a4516: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a4517: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4518: call 0x8aac55 */ r_esp -= 4; W32(r_esp, 0x8a451du); f_008aac55();
    /* 008a451d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008a4520:; BB(0x008a4520);
    /* 008a4520: cmp dword ptr [ebp + 0x10], ebx */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a4523: je 0x8a453f */ if (fZ) goto L_008a453f;
L_008a4525:; BB(0x008a4525);
    /* 008a4525: movzx eax, byte ptr [esi + 0x114] */ r_eax = (u32)R8((u32)(r_esi+0x114u));
    /* 008a452c: push dword ptr [eax*4 + 0x99d778] */ { u32 v = R32((u32)(r_eax*4+0x99d778u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a4533: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a4536: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4537: call 0x8aaa3f */ r_esp -= 4; W32(r_esp, 0x8a453cu); f_008aaa3f();
    /* 008a453c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008a453f:; BB(0x008a453f);
    /* 008a453f: cmp dword ptr [ebp + 0xc], ebx */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a4542: je 0x8a4580 */ if (fZ) goto L_008a4580;
L_008a4544:; BB(0x008a4544);
    /* 008a4544: movzx eax, byte ptr [esi + 0x114] */ r_eax = (u32)R8((u32)(r_esi+0x114u));
    /* 008a454b: push dword ptr [eax*4 + 0x99d75c] */ { u32 v = R32((u32)(r_eax*4+0x99d75cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a4552: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a4555: jmp 0x8a4577 */ goto L_008a4577;
L_008a4557:; BB(0x008a4557);
    /* 008a4557: cmp dword ptr [ebp + 0xc], ebx */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a455a: mov edi, 0xff */ r_edi = 0xffu;
    /* 008a455f: je 0x8a456e */ if (fZ) goto L_008a456e;
L_008a4561:; BB(0x008a4561);
    /* 008a4561: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4562: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a4565: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4566: call 0x8aaa3f */ r_esp -= 4; W32(r_esp, 0x8a456bu); f_008aaa3f();
    /* 008a456b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008a456e:; BB(0x008a456e);
    /* 008a456e: cmp dword ptr [ebp + 0x10], ebx */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a4571: je 0x8a4580 */ if (fZ) goto L_008a4580;
L_008a4573:; BB(0x008a4573);
    /* 008a4573: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4574: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
L_008a4577:; BB(0x008a4577);
    /* 008a4577: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4578: call 0x8aaa3f */ r_esp -= 4; W32(r_esp, 0x8a457du); f_008aaa3f();
    /* 008a457d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008a4580:; BB(0x008a4580);
    /* 008a4580: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4581: call 0x8aba26 */ r_esp -= 4; W32(r_esp, 0x8a4586u); f_008aba26();
    /* 008a4586: mov eax, dword ptr [esi + 0x16c] */ r_eax = R32((u32)(r_esi+0x16cu));
    /* 008a458c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a458d: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a458f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a4590: je 0x8a45a6 */ if (fZ) goto L_008a45a6;
L_008a4592:; BB(0x008a4592);
    /* 008a4592: movzx ecx, byte ptr [esi + 0x114] */ r_ecx = (u32)R8((u32)(r_esi+0x114u));
    /* 008a4599: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a459a: push dword ptr [esi + 0xd4] */ { u32 v = R32((u32)(r_esi+0xd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a45a0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a45a1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x8a45a3u); call_ind(t); }
    /* 008a45a3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_008a45a6:; BB(0x008a45a6);
    /* 008a45a6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a45a7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a45a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008a45a9: ret  */ FN_RET(0x008a4203); r_esp += 4; return;
}

void f_008a45aa(void) /* sub_8A45AA */
{
    FN_ENTER(0x008a45aa);
    /* 008a45aa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a45ab: mov ebp, esp */ r_ebp = r_esp;
    /* 008a45ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a45ae: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a45af: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008a45b2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a45b3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a45b4: call 0x8a49d4 */ r_esp -= 4; W32(r_esp, 0x8a45b9u); f_008a49d4();
    /* 008a45b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a45bb: mov edi, dword ptr [esi + 0xbc] */ r_edi = R32((u32)(r_esi+0xbcu));
    /* 008a45c1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a45c2: mov dword ptr [esi + 0xc0], edi */ W32((u32)(r_esi+0xc0u), r_edi);
    /* 008a45c8: jle 0x8a45f3 */ if ((fZ||fS!=fO)) goto L_008a45f3;
L_008a45ca:; BB(0x008a45ca);
    /* 008a45ca: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008a45cd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
L_008a45ce:; BB(0x008a45ce);
    /* 008a45ce: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 008a45d0: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 008a45d3: jbe 0x8a45ed */ if ((fC||fZ)) goto L_008a45ed;
L_008a45d5:; BB(0x008a45d5);
    /* 008a45d5: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
L_008a45d8:; BB(0x008a45d8);
    /* 008a45d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008a45da: push dword ptr [ebx] */ { u32 v = R32((u32)(r_ebx)); r_esp -= 4; W32(r_esp, v); }
    /* 008a45dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a45dd: call 0x8a4203 */ r_esp -= 4; W32(r_esp, 0x8a45e2u); f_008a4203();
    /* 008a45e2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a45e5: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fC = (r < a); }
    /* 008a45e8: dec dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008a45eb: jne 0x8a45d8 */ if (!fZ) goto L_008a45d8;
L_008a45ed:; BB(0x008a45ed);
    /* 008a45ed: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a45f0: jne 0x8a45ce */ if (!fZ) goto L_008a45ce;
L_008a45f2:; BB(0x008a45f2);
    /* 008a45f2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008a45f3:; BB(0x008a45f3);
    /* 008a45f3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a45f4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a45f5: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a45f6: ret  */ FN_RET(0x008a45aa); r_esp += 4; return;
}

void f_008a45f7(void) /* sub_8A45F7 */
{
    FN_ENTER(0x008a45f7);
    /* 008a45f7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a45f8: mov ebp, esp */ r_ebp = r_esp;
    /* 008a45fa: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008a45fd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a45fe: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008a4601: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4602: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4603: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008a4605: cmp dword ptr [ebp + 0xc], edi */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a4608: je 0x8a4615 */ if (fZ) goto L_008a4615;
L_008a460a:; BB(0x008a460a);
    /* 008a460a: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a460d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a460e: call 0x8a63b6 */ r_esp -= 4; W32(r_esp, 0x8a4613u); f_008a63b6();
    /* 008a4613: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a4614: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a4615:; BB(0x008a4615);
    /* 008a4615: cmp dword ptr [ebp + 0x10], edi */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a4618: je 0x8a4625 */ if (fZ) goto L_008a4625;
L_008a461a:; BB(0x008a461a);
    /* 008a461a: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a461d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a461e: call 0x8a63b6 */ r_esp -= 4; W32(r_esp, 0x8a4623u); f_008a63b6();
    /* 008a4623: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a4624: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a4625:; BB(0x008a4625);
    /* 008a4625: push dword ptr [ebx + 0x9c] */ { u32 v = R32((u32)(r_ebx+0x9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a462b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a462c: call 0x8aa8d5 */ r_esp -= 4; W32(r_esp, 0x8a4631u); f_008aa8d5();
    /* 008a4631: push dword ptr [ebx + 0xdc] */ { u32 v = R32((u32)(r_ebx+0xdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a4637: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a4638: call 0x8aa8d5 */ r_esp -= 4; W32(r_esp, 0x8a463du); f_008aa8d5();
    /* 008a463d: push dword ptr [ebx + 0xd8] */ { u32 v = R32((u32)(r_ebx+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a4643: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a4644: call 0x8aa8d5 */ r_esp -= 4; W32(r_esp, 0x8a4649u); f_008aa8d5();
    /* 008a4649: push dword ptr [ebx + 0x174] */ { u32 v = R32((u32)(r_ebx+0x174u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a464f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a4650: call 0x8aa8d5 */ r_esp -= 4; W32(r_esp, 0x8a4655u); f_008aa8d5();
    /* 008a4655: push dword ptr [ebx + 0x178] */ { u32 v = R32((u32)(r_ebx+0x178u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a465b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a465c: call 0x8aa8d5 */ r_esp -= 4; W32(r_esp, 0x8a4661u); f_008aa8d5();
    /* 008a4661: push dword ptr [ebx + 0x138] */ { u32 v = R32((u32)(r_ebx+0x138u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a4667: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a4668: call 0x8aa8d5 */ r_esp -= 4; W32(r_esp, 0x8a466du); f_008aa8d5();
    /* 008a466d: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a4670: test byte ptr [ebx + 0x5d], 0x10 */ {  u32 a = R8((u32)(r_ebx+0x5du)); u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a4674: je 0x8a4684 */ if (fZ) goto L_008a4684;
L_008a4676:; BB(0x008a4676);
    /* 008a4676: push dword ptr [ebx + 0x104] */ { u32 v = R32((u32)(r_ebx+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a467c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a467d: call 0x8a635a */ r_esp -= 4; W32(r_esp, 0x8a4682u); f_008a635a();
    /* 008a4682: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a4683: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a4684:; BB(0x008a4684);
    /* 008a4684: test byte ptr [ebx + 0x5d], 0x20 */ {  u32 a = R8((u32)(r_ebx+0x5du)); u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a4688: je 0x8a4698 */ if (fZ) goto L_008a4698;
L_008a468a:; BB(0x008a468a);
    /* 008a468a: push dword ptr [ebx + 0x15c] */ { u32 v = R32((u32)(r_ebx+0x15cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a4690: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a4691: call 0x8aa8d5 */ r_esp -= 4; W32(r_esp, 0x8a4696u); f_008aa8d5();
    /* 008a4696: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a4697: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a4698:; BB(0x008a4698);
    /* 008a4698: cmp dword ptr [ebx + 0x144], edi */ {  u32 a = R32((u32)(r_ebx+0x144u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a469e: je 0x8a46d6 */ if (fZ) goto L_008a46d6;
L_008a46a0:; BB(0x008a46a0);
    /* 008a46a0: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 008a46a2: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008a46a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a46a5: sub ecx, dword ptr [ebx + 0x12c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0x12cu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); }
    /* 008a46ab: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008a46ac: shl esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 008a46ae: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a46b0: jle 0x8a46c8 */ if ((fZ||fS!=fO)) goto L_008a46c8;
L_008a46b2:; BB(0x008a46b2);
    /* 008a46b2: mov eax, dword ptr [ebx + 0x144] */ r_eax = R32((u32)(r_ebx+0x144u));
    /* 008a46b8: push dword ptr [eax + edi*4] */ { u32 v = R32((u32)(r_eax+r_edi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 008a46bb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a46bc: call 0x8aa8d5 */ r_esp -= 4; W32(r_esp, 0x8a46c1u); f_008aa8d5();
    /* 008a46c1: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a46c2: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a46c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a46c5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a46c6: jl 0x8a46b2 */ if ((fS!=fO)) goto L_008a46b2;
L_008a46c8:; BB(0x008a46c8);
    /* 008a46c8: push dword ptr [ebx + 0x144] */ { u32 v = R32((u32)(r_ebx+0x144u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a46ce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a46cf: call 0x8aa8d5 */ r_esp -= 4; W32(r_esp, 0x8a46d4u); f_008aa8d5();
    /* 008a46d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a46d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a46d6:; BB(0x008a46d6);
    /* 008a46d6: lea eax, [ebx + 0x64] */ r_eax = (u32)(r_ebx+0x64u);
    /* 008a46d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a46da: call 0x8aa3af */ r_esp -= 4; W32(r_esp, 0x8a46dfu); f_008aa3af();
    /* 008a46df: mov eax, dword ptr [ebx + 0x48] */ r_eax = R32((u32)(r_ebx+0x48u));
    /* 008a46e2: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 008a46e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a46e6: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008a46e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a46e9: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 008a46eb: mov esi, ebx */ r_esi = r_ebx;
    /* 008a46ed: lea edi, [ebp - 0x40] */ r_edi = (u32)(r_ebp+0xffffffc0u);
    /* 008a46f0: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008a46f2: mov esi, dword ptr [ebx + 0x44] */ r_esi = R32((u32)(r_ebx+0x44u));
    /* 008a46f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a46f6: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 008a46f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a46fb: mov edi, ebx */ r_edi = r_ebx;
    /* 008a46fd: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008a46ff: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008a4702: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008a4704: mov dword ptr [ebx + 0x44], esi */ W32((u32)(r_ebx+0x44u), r_esi);
    /* 008a4707: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a4708: mov edi, ebx */ r_edi = r_ebx;
    /* 008a470a: lea esi, [ebp - 0x40] */ r_esi = (u32)(r_ebp+0xffffffc0u);
    /* 008a470d: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008a470f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a4710: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a4711: mov dword ptr [ebx + 0x40], edx */ W32((u32)(r_ebx+0x40u), r_edx);
    /* 008a4714: mov dword ptr [ebx + 0x48], eax */ W32((u32)(r_ebx+0x48u), r_eax);
    /* 008a4717: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a4718: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a4719: ret  */ FN_RET(0x008a45f7); r_esp += 4; return;
}

void f_008a471a(void) /* sub_8A471A */
{
    FN_ENTER(0x008a471a);
    /* 008a471a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a471b: mov ebp, esp */ r_ebp = r_esp;
    /* 008a471d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a471e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a471f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a4722: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a4723: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008a4725: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4726: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008a4728: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a472a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a472b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 008a472e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 008a4731: je 0x8a4738 */ if (fZ) goto L_008a4738;
L_008a4733:; BB(0x008a4733);
    /* 008a4733: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008a4735: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a4738:; BB(0x008a4738);
    /* 008a4738: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 008a473b: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a473d: je 0x8a4741 */ if (fZ) goto L_008a4741;
L_008a473f:; BB(0x008a473f);
    /* 008a473f: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
L_008a4741:; BB(0x008a4741);
    /* 008a4741: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 008a4744: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a4746: je 0x8a474d */ if (fZ) goto L_008a474d;
L_008a4748:; BB(0x008a4748);
    /* 008a4748: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008a474a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_008a474d:; BB(0x008a474d);
    /* 008a474d: cmp dword ptr [ebp - 4], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a4750: je 0x8a4761 */ if (fZ) goto L_008a4761;
L_008a4752:; BB(0x008a4752);
    /* 008a4752: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a4755: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4756: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a4759: call 0x8a45f7 */ r_esp -= 4; W32(r_esp, 0x8a475eu); f_008a45f7();
    /* 008a475e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008a4761:; BB(0x008a4761);
    /* 008a4761: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a4763: je 0x8a476f */ if (fZ) goto L_008a476f;
L_008a4765:; BB(0x008a4765);
    /* 008a4765: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4766: call 0x8aa892 */ r_esp -= 4; W32(r_esp, 0x8a476bu); f_008aa892();
    /* 008a476b: and dword ptr [edi], 0 */ { u32 ad = (u32)(r_edi);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a476e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a476f:; BB(0x008a476f);
    /* 008a476f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a4773: je 0x8a4781 */ if (fZ) goto L_008a4781;
L_008a4775:; BB(0x008a4775);
    /* 008a4775: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a4778: call 0x8aa892 */ r_esp -= 4; W32(r_esp, 0x8a477du); f_008aa892();
    /* 008a477d: and dword ptr [ebx], 0 */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a4780: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a4781:; BB(0x008a4781);
    /* 008a4781: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a4785: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a4786: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a4787: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a4788: je 0x8a4799 */ if (fZ) goto L_008a4799;
L_008a478a:; BB(0x008a478a);
    /* 008a478a: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a478d: call 0x8aa892 */ r_esp -= 4; W32(r_esp, 0x8a4792u); f_008aa892();
    /* 008a4792: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a4795: and dword ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a4798: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a4799:; BB(0x008a4799);
    /* 008a4799: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a479a: ret  */ FN_RET(0x008a471a); r_esp += 4; return;
}

void f_008a479b(void) /* sub_8A479B */
{
    FN_ENTER(0x008a479b);
    /* 008a479b: cmp dword ptr [esp + 4], 0 */ {  u32 a = R32((u32)(r_esp+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a47a0: je 0x8a47b2 */ if (fZ) goto L_008a47b2;
L_008a47a2:; BB(0x008a47a2);
    /* 008a47a2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008a47a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a47a8: je 0x8a47b2 */ if (fZ) goto L_008a47b2;
L_008a47aa:; BB(0x008a47aa);
    /* 008a47aa: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 008a47ad: and eax, dword ptr [esp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a47b1: ret  */ FN_RET(0x008a479b); r_esp += 4; return;
L_008a47b2:; BB(0x008a47b2);
    /* 008a47b2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a47b4: ret  */ FN_RET(0x008a479b); r_esp += 4; return;
}

void f_008a47b5(void) /* sub_8A47B5 */
{
    FN_ENTER(0x008a47b5);
    /* 008a47b5: cmp dword ptr [esp + 4], 0 */ {  u32 a = R32((u32)(r_esp+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a47ba: je 0x8a47c8 */ if (fZ) goto L_008a47c8;
L_008a47bc:; BB(0x008a47bc);
    /* 008a47bc: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008a47c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a47c2: je 0x8a47c8 */ if (fZ) goto L_008a47c8;
L_008a47c4:; BB(0x008a47c4);
    /* 008a47c4: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 008a47c7: ret  */ FN_RET(0x008a47b5); r_esp += 4; return;
L_008a47c8:; BB(0x008a47c8);
    /* 008a47c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a47ca: ret  */ FN_RET(0x008a47b5); r_esp += 4; return;
}

void f_008a47cb(void) /* sub_8A47CB */
{
    FN_ENTER(0x008a47cb);
    /* 008a47cb: cmp dword ptr [esp + 4], 0 */ {  u32 a = R32((u32)(r_esp+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a47d0: je 0x8a47de */ if (fZ) goto L_008a47de;
L_008a47d2:; BB(0x008a47d2);
    /* 008a47d2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008a47d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a47d8: je 0x8a47de */ if (fZ) goto L_008a47de;
L_008a47da:; BB(0x008a47da);
    /* 008a47da: mov al, byte ptr [eax + 0x1d] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x1du))) & 0xffu);
    /* 008a47dd: ret  */ FN_RET(0x008a47cb); r_esp += 4; return;
L_008a47de:; BB(0x008a47de);
    /* 008a47de: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a47e0: ret  */ FN_RET(0x008a47cb); r_esp += 4; return;
}

void f_008a47e1(void) /* sub_8A47E1 */
{
    FN_ENTER(0x008a47e1);
    /* 008a47e1: cmp dword ptr [esp + 4], 0 */ {  u32 a = R32((u32)(r_esp+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a47e6: je 0x8a4807 */ if (fZ) goto L_008a4807;
L_008a47e8:; BB(0x008a47e8);
    /* 008a47e8: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008a47ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a47ee: je 0x8a4807 */ if (fZ) goto L_008a4807;
L_008a47f0:; BB(0x008a47f0);
    /* 008a47f0: test byte ptr [eax + 8], 1 */ {  u32 a = R8((u32)(r_eax+0x8u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a47f4: je 0x8a4807 */ if (fZ) goto L_008a4807;
L_008a47f6:; BB(0x008a47f6);
    /* 008a47f6: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008a47fa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a47fc: je 0x8a4807 */ if (fZ) goto L_008a4807;
L_008a47fe:; BB(0x008a47fe);
    /* 008a47fe: fld dword ptr [eax + 0x28] */ FPUSH(R_F32((u32)(r_eax+0x28u)));
    /* 008a4801: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 008a4803: fstp qword ptr [ecx] */ W_F64((u32)(r_ecx), ST(0)); FPOP();
    /* 008a4805: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008a4806: ret  */ FN_RET(0x008a47e1); r_esp += 4; return;
L_008a4807:; BB(0x008a4807);
    /* 008a4807: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a4809: ret  */ FN_RET(0x008a47e1); r_esp += 4; return;
}

void f_008a480a(void) /* sub_8A480A */
{
    FN_ENTER(0x008a480a);
    /* 008a480a: cmp dword ptr [esp + 4], 0 */ {  u32 a = R32((u32)(r_esp+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a480f: je 0x8a4832 */ if (fZ) goto L_008a4832;
L_008a4811:; BB(0x008a4811);
    /* 008a4811: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008a4815: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a4817: je 0x8a4832 */ if (fZ) goto L_008a4832;
L_008a4819:; BB(0x008a4819);
    /* 008a4819: mov eax, 0x800 */ r_eax = 0x800u;
    /* 008a481e: test dword ptr [ecx + 8], eax */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a4821: je 0x8a4832 */ if (fZ) goto L_008a4832;
L_008a4823:; BB(0x008a4823);
    /* 008a4823: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008a4827: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a4829: je 0x8a4832 */ if (fZ) goto L_008a4832;
L_008a482b:; BB(0x008a482b);
    /* 008a482b: movzx ecx, byte ptr [ecx + 0x2c] */ r_ecx = (u32)R8((u32)(r_ecx+0x2cu));
    /* 008a482f: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 008a4831: ret  */ FN_RET(0x008a480a); r_esp += 4; return;
L_008a4832:; BB(0x008a4832);
    /* 008a4832: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a4834: ret  */ FN_RET(0x008a480a); r_esp += 4; return;
}

void f_008a4835(void) /* sub_8A4835 */
{
    FN_ENTER(0x008a4835);
    /* 008a4835: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a4836: mov ebp, esp */ r_ebp = r_esp;
    /* 008a4838: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a483c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a483d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a483e: je 0x8a4900 */ if (fZ) goto L_008a4900;
L_008a4844:; BB(0x008a4844);
    /* 008a4844: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008a4847: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a4849: je 0x8a4900 */ if (fZ) goto L_008a4900;
L_008a484f:; BB(0x008a484f);
    /* 008a484f: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 008a4852: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a4854: je 0x8a4900 */ if (fZ) goto L_008a4900;
L_008a485a:; BB(0x008a485a);
    /* 008a485a: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 008a485d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a485f: je 0x8a4900 */ if (fZ) goto L_008a4900;
L_008a4865:; BB(0x008a4865);
    /* 008a4865: mov esi, dword ptr [ebp + 0x18] */ r_esi = R32((u32)(r_ebp+0x18u));
    /* 008a4868: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a486a: je 0x8a4900 */ if (fZ) goto L_008a4900;
L_008a4870:; BB(0x008a4870);
    /* 008a4870: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 008a4873: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a4875: je 0x8a4900 */ if (fZ) goto L_008a4900;
L_008a487b:; BB(0x008a487b);
    /* 008a487b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a487c: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 008a487e: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 008a4880: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 008a4883: mov dword ptr [edx], ebx */ W32((u32)(r_edx), r_ebx);
    /* 008a4885: movzx edx, byte ptr [eax + 0x18] */ r_edx = (u32)R8((u32)(r_eax+0x18u));
    /* 008a4889: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 008a488b: movzx edx, byte ptr [eax + 0x19] */ r_edx = (u32)R8((u32)(r_eax+0x19u));
    /* 008a488f: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 008a4891: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 008a4894: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a4896: je 0x8a489e */ if (fZ) goto L_008a489e;
L_008a4898:; BB(0x008a4898);
    /* 008a4898: movzx ebx, byte ptr [eax + 0x1a] */ r_ebx = (u32)R8((u32)(r_eax+0x1au));
    /* 008a489c: mov dword ptr [edx], ebx */ W32((u32)(r_edx), r_ebx);
L_008a489e:; BB(0x008a489e);
    /* 008a489e: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 008a48a1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a48a3: je 0x8a48ab */ if (fZ) goto L_008a48ab;
L_008a48a5:; BB(0x008a48a5);
    /* 008a48a5: movzx ebx, byte ptr [eax + 0x1b] */ r_ebx = (u32)R8((u32)(r_eax+0x1bu));
    /* 008a48a9: mov dword ptr [edx], ebx */ W32((u32)(r_edx), r_ebx);
L_008a48ab:; BB(0x008a48ab);
    /* 008a48ab: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 008a48ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a48b0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a48b1: je 0x8a48b9 */ if (fZ) goto L_008a48b9;
L_008a48b3:; BB(0x008a48b3);
    /* 008a48b3: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 008a48b7: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_008a48b9:; BB(0x008a48b9);
    /* 008a48b9: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 008a48bb: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a48be: jne 0x8a48c5 */ if (!fZ) goto L_008a48c5;
L_008a48c0:; BB(0x008a48c0);
    /* 008a48c0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a48c2: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a48c3: jmp 0x8a48ce */ goto L_008a48ce;
L_008a48c5:; BB(0x008a48c5);
    /* 008a48c5: movsx eax, cl */ r_eax = (u32)(i32)(i8)(u8)r_ecx;
    /* 008a48c8: and eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008a48cb: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_008a48ce:; BB(0x008a48ce);
    /* 008a48ce: test cl, 4 */ {  u32 a = (u8)r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a48d1: je 0x8a48d4 */ if (fZ) goto L_008a48d4;
L_008a48d3:; BB(0x008a48d3);
    /* 008a48d3: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_008a48d4:; BB(0x008a48d4);
    /* 008a48d4: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008a48d6: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a48d9: add ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a48dc: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008a48df: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008a48e1: mov eax, 0x7fffffff */ r_eax = 0x7fffffffu;
    /* 008a48e6: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x008a48e6, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x008a48e6, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008a48e8: cmp dword ptr [edi], eax */ {  u32 a = R32((u32)(r_edi)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a48ea: jbe 0x8a48fb */ if ((fC||fZ)) goto L_008a48fb;
L_008a48ec:; BB(0x008a48ec);
    /* 008a48ec: push 0x99d920 */ { u32 v = 0x99d920u; r_esp -= 4; W32(r_esp, v); }
    /* 008a48f1: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a48f4: call 0x8a3f0e */ r_esp -= 4; W32(r_esp, 0x8a48f9u); f_008a3f0e();
    /* 008a48f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a48fa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a48fb:; BB(0x008a48fb);
    /* 008a48fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 008a48fd: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008a48fe: jmp 0x8a4902 */ goto L_008a4902;
L_008a4900:; BB(0x008a4900);
    /* 008a4900: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008a4902:; BB(0x008a4902);
    /* 008a4902: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a4903: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a4904: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008a4905: ret  */ FN_RET(0x008a4835); r_esp += 4; return;
}

void f_008a4906(void) /* sub_8A4906 */
{
    FN_ENTER(0x008a4906);
    /* 008a4906: cmp dword ptr [esp + 4], 0 */ {  u32 a = R32((u32)(r_esp+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a490b: je 0x8a4936 */ if (fZ) goto L_008a4936;
L_008a490d:; BB(0x008a490d);
    /* 008a490d: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008a4911: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a4913: je 0x8a4936 */ if (fZ) goto L_008a4936;
L_008a4915:; BB(0x008a4915);
    /* 008a4915: test byte ptr [eax + 8], 8 */ {  u32 a = R8((u32)(r_eax+0x8u)); u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a4919: je 0x8a4936 */ if (fZ) goto L_008a4936;
L_008a491b:; BB(0x008a491b);
    /* 008a491b: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008a491f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a4921: je 0x8a4936 */ if (fZ) goto L_008a4936;
L_008a4923:; BB(0x008a4923);
    /* 008a4923: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 008a4926: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 008a4928: movzx eax, word ptr [eax + 0x14] */ r_eax = (u32)R16((u32)(r_eax+0x14u));
    /* 008a492c: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 008a4930: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 008a4932: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 008a4934: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 008a4935: ret  */ FN_RET(0x008a4906); r_esp += 4; return;
L_008a4936:; BB(0x008a4936);
    /* 008a4936: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a4938: ret  */ FN_RET(0x008a4906); r_esp += 4; return;
}

void f_008a4939(void) /* sub_8A4939 */
{
    FN_ENTER(0x008a4939);
    /* 008a4939: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a493a: mov ebp, esp */ r_ebp = r_esp;
    /* 008a493c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a493e: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a4941: je 0x8a499e */ if (fZ) goto L_008a499e;
L_008a4943:; BB(0x008a4943);
    /* 008a4943: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008a4946: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a4948: je 0x8a499e */ if (fZ) goto L_008a499e;
L_008a494a:; BB(0x008a494a);
    /* 008a494a: test byte ptr [ecx + 8], 0x10 */ {  u32 a = R8((u32)(r_ecx+0x8u)); u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a494e: je 0x8a499e */ if (fZ) goto L_008a499e;
L_008a4950:; BB(0x008a4950);
    /* 008a4950: cmp byte ptr [ecx + 0x19], 3 */ {  u32 a = R8((u32)(r_ecx+0x19u)); u32 b = 0x3u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a4954: jne 0x8a4975 */ if (!fZ) goto L_008a4975;
L_008a4956:; BB(0x008a4956);
    /* 008a4956: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 008a4959: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a495b: je 0x8a4965 */ if (fZ) goto L_008a4965;
L_008a495d:; BB(0x008a495d);
    /* 008a495d: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 008a4960: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008a4962: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008a4964: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
L_008a4965:; BB(0x008a4965);
    /* 008a4965: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 008a4968: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a496a: je 0x8a498e */ if (fZ) goto L_008a498e;
L_008a496c:; BB(0x008a496c);
    /* 008a496c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a496d: lea esi, [ecx + 0x34] */ r_esi = (u32)(r_ecx+0x34u);
    /* 008a4970: mov dword ptr [edx], esi */ W32((u32)(r_edx), r_esi);
    /* 008a4972: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a4973: jmp 0x8a498e */ goto L_008a498e;
L_008a4975:; BB(0x008a4975);
    /* 008a4975: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 008a4978: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a497a: je 0x8a4984 */ if (fZ) goto L_008a4984;
L_008a497c:; BB(0x008a497c);
    /* 008a497c: lea eax, [ecx + 0x34] */ r_eax = (u32)(r_ecx+0x34u);
    /* 008a497f: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008a4981: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008a4983: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
L_008a4984:; BB(0x008a4984);
    /* 008a4984: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 008a4987: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a4989: je 0x8a498e */ if (fZ) goto L_008a498e;
L_008a498b:; BB(0x008a498b);
    /* 008a498b: and dword ptr [edx], 0 */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_008a498e:; BB(0x008a498e);
    /* 008a498e: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 008a4991: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a4993: je 0x8a499e */ if (fZ) goto L_008a499e;
L_008a4995:; BB(0x008a4995);
    /* 008a4995: movzx ecx, word ptr [ecx + 0x16] */ r_ecx = (u32)R16((u32)(r_ecx+0x16u));
    /* 008a4999: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 008a499b: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008a499e:; BB(0x008a499e);
    /* 008a499e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008a499f: ret  */ FN_RET(0x008a4939); r_esp += 4; return;
}

void f_008a49a0(void) /* sub_8A49A0 */
{
    FN_ENTER(0x008a49a0);
    /* 008a49a0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008a49a4: or dword ptr [eax + 0x60], 1 */ { u32 ad = (u32)(r_eax+0x60u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a49a8: ret  */ FN_RET(0x008a49a0); r_esp += 4; return;
}

void f_008a49a9(void) /* sub_8A49A9 */
{
    FN_ENTER(0x008a49a9);
    /* 008a49a9: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008a49ad: cmp byte ptr [eax + 0x117], 0x10 */ {  u32 a = R8((u32)(r_eax+0x117u)); u32 b = 0x10u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008a49b4: jne 0x8a49ba */ if (!fZ) goto L_008a49ba;
L_008a49b6:; BB(0x008a49b6);
    /* 008a49b6: or dword ptr [eax + 0x60], 0x10 */ { u32 ad = (u32)(r_eax+0x60u);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008a49ba:; BB(0x008a49ba);
    /* 008a49ba: ret  */ FN_RET(0x008a49a9); r_esp += 4; return;
}

void f_008a49bb(void) /* sub_8A49BB */
{
    FN_ENTER(0x008a49bb);
    /* 008a49bb: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008a49bf: cmp byte ptr [eax + 0x117], 8 */ {  u32 a = R8((u32)(r_eax+0x117u)); u32 b = 0x8u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008a49c6: jae 0x8a49d3 */ if (!fC) goto L_008a49d3;
L_008a49c8:; BB(0x008a49c8);
    /* 008a49c8: or dword ptr [eax + 0x60], 4 */ { u32 ad = (u32)(r_eax+0x60u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a49cc: mov byte ptr [eax + 0x118], 8 */ W8((u32)(r_eax+0x118u), 0x8u);
L_008a49d3:; BB(0x008a49d3);
    /* 008a49d3: ret  */ FN_RET(0x008a49bb); r_esp += 4; return;
}

void f_008a49d4(void) /* sub_8A49D4 */
{
    FN_ENTER(0x008a49d4);
    /* 008a49d4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008a49d8: cmp byte ptr [eax + 0x113], 0 */ {  u32 a = R8((u32)(r_eax+0x113u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a49df: je 0x8a49e9 */ if (fZ) goto L_008a49e9;
L_008a49e1:; BB(0x008a49e1);
    /* 008a49e1: or dword ptr [eax + 0x60], 2 */ { u32 ad = (u32)(r_eax+0x60u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a49e5: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 008a49e7: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 008a49e8: ret  */ FN_RET(0x008a49d4); r_esp += 4; return;
L_008a49e9:; BB(0x008a49e9);
    /* 008a49e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 008a49eb: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008a49ec: ret  */ FN_RET(0x008a49d4); r_esp += 4; return;
}

void f_008a49ed(void) /* sub_8A49ED */
{
    FN_ENTER(0x008a49ed);
    /* 008a49ed: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008a49f1: movzx cx, byte ptr [esp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | (((u32)R8((u32)(r_esp+0x8u))) & 0xffffu);
    /* 008a49f7: or byte ptr [eax + 0x61], 0x80 */ { u32 ad = (u32)(r_eax+0x61u);  u32 a = R8(ad); u32 b = 0x80u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 008a49fb: cmp dword ptr [esp + 0xc], 1 */ {  u32 a = R32((u32)(r_esp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a4a00: mov word ptr [eax + 0x11e], cx */ W16((u32)(r_eax+0x11eu), (u16)r_ecx);
    /* 008a4a07: jne 0x8a4a0f */ if (!fZ) goto L_008a4a0f;
L_008a4a09:; BB(0x008a4a09);
    /* 008a4a09: or byte ptr [eax + 0x5c], 0x80 */ { u32 ad = (u32)(r_eax+0x5cu);  u32 a = R8(ad); u32 b = 0x80u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 008a4a0d: jmp 0x8a4a13 */ goto L_008a4a13;
L_008a4a0f:; BB(0x008a4a0f);
    /* 008a4a0f: and byte ptr [eax + 0x5c], 0x7f */ { u32 ad = (u32)(r_eax+0x5cu);  u32 a = R8(ad); u32 b = 0x7fu; u32 r = (a & b) & 0xffu; W8(ad, r);  }
L_008a4a13:; BB(0x008a4a13);
    /* 008a4a13: mov cl, byte ptr [eax + 0x116] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x116u))) & 0xffu);
    /* 008a4a19: cmp cl, 2 */ {  u32 a = (u8)r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a4a1c: jne 0x8a4a25 */ if (!fZ) goto L_008a4a25;
L_008a4a1e:; BB(0x008a4a1e);
    /* 008a4a1e: mov byte ptr [eax + 0x11b], 4 */ W8((u32)(r_eax+0x11bu), 0x4u);
L_008a4a25:; BB(0x008a4a25);
    /* 008a4a25: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a4a27: jne 0x8a4a39 */ if (!fZ) goto L_008a4a39;
L_008a4a29:; BB(0x008a4a29);
    /* 008a4a29: cmp byte ptr [eax + 0x117], 8 */ {  u32 a = R8((u32)(r_eax+0x117u)); u32 b = 0x8u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008a4a30: jb 0x8a4a39 */ if (fC) goto L_008a4a39;
L_008a4a32:; BB(0x008a4a32);
    /* 008a4a32: mov byte ptr [eax + 0x11b], 2 */ W8((u32)(r_eax+0x11bu), 0x2u);
L_008a4a39:; BB(0x008a4a39);
    /* 008a4a39: ret  */ FN_RET(0x008a49ed); r_esp += 4; return;
}

void f_008a4a3a(void) /* sub_8A4A3A */
{
    FN_ENTER(0x008a4a3a);
    /* 008a4a3a: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 008a4a3e: cmp byte ptr [edx + 9], 0x10 */ {  u32 a = R8((u32)(r_edx+0x9u)); u32 b = 0x10u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008a4a42: jne 0x8a4a66 */ if (!fZ) goto L_008a4a66;
L_008a4a44:; BB(0x008a4a44);
    /* 008a4a44: movzx ecx, byte ptr [edx + 0xa] */ r_ecx = (u32)R8((u32)(r_edx+0xau));
    /* 008a4a48: imul ecx, dword ptr [edx] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_edx)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a4a4b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a4a4d: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008a4a51: jbe 0x8a4a66 */ if ((fC||fZ)) goto L_008a4a66;
L_008a4a53:; BB(0x008a4a53);
    /* 008a4a53: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4a54: mov esi, ecx */ r_esi = r_ecx;
L_008a4a56:; BB(0x008a4a56);
    /* 008a4a56: mov dl, byte ptr [eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008a4a58: mov cl, byte ptr [eax + 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 008a4a5b: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 008a4a5d: mov byte ptr [eax + 1], dl */ W8((u32)(r_eax+0x1u), (u8)r_edx);
    /* 008a4a60: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a4a61: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a4a62: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a4a63: jne 0x8a4a56 */ if (!fZ) goto L_008a4a56;
L_008a4a65:; BB(0x008a4a65);
    /* 008a4a65: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_008a4a66:; BB(0x008a4a66);
    /* 008a4a66: ret  */ FN_RET(0x008a4a3a); r_esp += 4; return;
}

void f_008a4a67(void) /* sub_8A4A67 */
{
    FN_ENTER(0x008a4a67);
    /* 008a4a67: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a4a68: mov ebp, esp */ r_ebp = r_esp;
    /* 008a4a6a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a4a6d: mov dl, byte ptr [eax + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x8u))) & 0xffu);
    /* 008a4a70: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a4a73: je 0x8a4b24 */ if (fZ) goto L_008a4b24;
L_008a4a79:; BB(0x008a4a79);
    /* 008a4a79: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a4a7b: mov al, byte ptr [eax + 9] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x9u))) & 0xffu);
    /* 008a4a7e: cmp al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a4a80: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4a81: jne 0x8a4ac7 */ if (!fZ) goto L_008a4ac7;
L_008a4a83:; BB(0x008a4a83);
    /* 008a4a83: cmp dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a4a86: jne 0x8a4aa7 */ if (!fZ) goto L_008a4aa7;
L_008a4a88:; BB(0x008a4a88);
    /* 008a4a88: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a4a8a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008a4a8d: jbe 0x8a4b23 */ if ((fC||fZ)) goto L_008a4b23;
L_008a4a93:; BB(0x008a4a93);
    /* 008a4a93: mov esi, ecx */ r_esi = r_ecx;
L_008a4a95:; BB(0x008a4a95);
    /* 008a4a95: mov dl, byte ptr [eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008a4a97: mov cl, byte ptr [eax + 2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x2u))) & 0xffu);
    /* 008a4a9a: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 008a4a9c: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
    /* 008a4a9f: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 008a4aa2: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a4aa3: jne 0x8a4a95 */ if (!fZ) goto L_008a4a95;
L_008a4aa5:; BB(0x008a4aa5);
    /* 008a4aa5: jmp 0x8a4b23 */ goto L_008a4b23;
L_008a4aa7:; BB(0x008a4aa7);
    /* 008a4aa7: cmp dl, 6 */ {  u32 a = (u8)r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008a4aaa: jne 0x8a4b23 */ if (!fZ) goto L_008a4b23;
L_008a4aac:; BB(0x008a4aac);
    /* 008a4aac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a4aae: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008a4ab1: jbe 0x8a4b23 */ if ((fC||fZ)) goto L_008a4b23;
L_008a4ab3:; BB(0x008a4ab3);
    /* 008a4ab3: mov esi, ecx */ r_esi = r_ecx;
L_008a4ab5:; BB(0x008a4ab5);
    /* 008a4ab5: mov dl, byte ptr [eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008a4ab7: mov cl, byte ptr [eax + 2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x2u))) & 0xffu);
    /* 008a4aba: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 008a4abc: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
    /* 008a4abf: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 008a4ac2: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a4ac3: jne 0x8a4ab5 */ if (!fZ) goto L_008a4ab5;
L_008a4ac5:; BB(0x008a4ac5);
    /* 008a4ac5: jmp 0x8a4b23 */ goto L_008a4b23;
L_008a4ac7:; BB(0x008a4ac7);
    /* 008a4ac7: cmp al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008a4ac9: jne 0x8a4b23 */ if (!fZ) goto L_008a4b23;
L_008a4acb:; BB(0x008a4acb);
    /* 008a4acb: cmp dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a4ace: jne 0x8a4af8 */ if (!fZ) goto L_008a4af8;
L_008a4ad0:; BB(0x008a4ad0);
    /* 008a4ad0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a4ad2: jbe 0x8a4b23 */ if ((fC||fZ)) goto L_008a4b23;
L_008a4ad4:; BB(0x008a4ad4);
    /* 008a4ad4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008a4ad7: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a4ad8: mov esi, ecx */ r_esi = r_ecx;
L_008a4ada:; BB(0x008a4ada);
    /* 008a4ada: mov cl, byte ptr [eax - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0xffffffffu))) & 0xffu);
    /* 008a4add: mov dl, byte ptr [eax + 3] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x3u))) & 0xffu);
    /* 008a4ae0: mov byte ptr [eax - 1], dl */ W8((u32)(r_eax+0xffffffffu), (u8)r_edx);
    /* 008a4ae3: mov dl, byte ptr [eax + 4] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x4u))) & 0xffu);
    /* 008a4ae6: mov byte ptr [eax + 3], cl */ W8((u32)(r_eax+0x3u), (u8)r_ecx);
    /* 008a4ae9: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008a4aeb: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 008a4aed: mov byte ptr [eax + 4], cl */ W8((u32)(r_eax+0x4u), (u8)r_ecx);
    /* 008a4af0: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 008a4af3: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a4af4: jne 0x8a4ada */ if (!fZ) goto L_008a4ada;
L_008a4af6:; BB(0x008a4af6);
    /* 008a4af6: jmp 0x8a4b23 */ goto L_008a4b23;
L_008a4af8:; BB(0x008a4af8);
    /* 008a4af8: cmp dl, 6 */ {  u32 a = (u8)r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008a4afb: jne 0x8a4b23 */ if (!fZ) goto L_008a4b23;
L_008a4afd:; BB(0x008a4afd);
    /* 008a4afd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a4aff: jbe 0x8a4b23 */ if ((fC||fZ)) goto L_008a4b23;
L_008a4b01:; BB(0x008a4b01);
    /* 008a4b01: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008a4b04: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a4b05: mov esi, ecx */ r_esi = r_ecx;
L_008a4b07:; BB(0x008a4b07);
    /* 008a4b07: mov cl, byte ptr [eax - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0xffffffffu))) & 0xffu);
    /* 008a4b0a: mov dl, byte ptr [eax + 3] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x3u))) & 0xffu);
    /* 008a4b0d: mov byte ptr [eax - 1], dl */ W8((u32)(r_eax+0xffffffffu), (u8)r_edx);
    /* 008a4b10: mov dl, byte ptr [eax + 4] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x4u))) & 0xffu);
    /* 008a4b13: mov byte ptr [eax + 3], cl */ W8((u32)(r_eax+0x3u), (u8)r_ecx);
    /* 008a4b16: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008a4b18: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 008a4b1a: mov byte ptr [eax + 4], cl */ W8((u32)(r_eax+0x4u), (u8)r_ecx);
    /* 008a4b1d: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 008a4b20: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a4b21: jne 0x8a4b07 */ if (!fZ) goto L_008a4b07;
L_008a4b23:; BB(0x008a4b23);
    /* 008a4b23: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_008a4b24:; BB(0x008a4b24);
    /* 008a4b24: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008a4b25: ret  */ FN_RET(0x008a4a67); r_esp += 4; return;
}

void f_008a4b26(void) /* sub_8A4B26 */
{
    FN_ENTER(0x008a4b26);
    /* 008a4b26: fld qword ptr [esp + 8] */ FPUSH(R_F64((u32)(r_esp+0x8u)));
    /* 008a4b2a: fld qword ptr [esp + 0x10] */ FPUSH(R_F64((u32)(r_esp+0x10u)));
    /* 008a4b2e: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008a4b30: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008a4b32: fsub qword ptr [0x998178] */ ST(0) = ST(0) - R_F64((u32)(0x998178u));
    /* 008a4b38: fabs  */ ST(0) = fabsl(ST(0));
    /* 008a4b3a: fcomp qword ptr [0x99d958] */ fx_compare(ST(0), R_F64((u32)(0x99d958u))); FPOP();
    /* 008a4b40: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a4b42: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a4b45: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008a4b49: jne 0x8a4b4f */ if (!fZ) goto L_008a4b4f;
L_008a4b4b:; BB(0x008a4b4b);
    /* 008a4b4b: or byte ptr [eax + 0x61], 0x20 */ { u32 ad = (u32)(r_eax+0x61u);  u32 a = R8(ad); u32 b = 0x20u; u32 r = (a | b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008a4b4f:; BB(0x008a4b4f);
    /* 008a4b4f: fstp dword ptr [eax + 0x130] */ W_F32((u32)(r_eax+0x130u), ST(0)); FPOP();
    /* 008a4b55: fstp dword ptr [eax + 0x134] */ W_F32((u32)(r_eax+0x134u), ST(0)); FPOP();
    /* 008a4b5b: ret  */ FN_RET(0x008a4b26); r_esp += 4; return;
}

void f_008a4b5c(void) /* sub_8A4B5C */
{
    FN_ENTER(0x008a4b5c);
    /* 008a4b5c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008a4b60: or byte ptr [eax + 0x61], 0x10 */ { u32 ad = (u32)(r_eax+0x61u);  u32 a = R8(ad); u32 b = 0x10u; u32 r = (a | b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a4b64: ret  */ FN_RET(0x008a4b5c); r_esp += 4; return;
}

void f_008a4b65(void) /* sub_8A4B65 */
{
    FN_ENTER(0x008a4b65);
    /* 008a4b65: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008a4b69: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008a4b6d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a4b6e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008a4b70: test byte ptr [eax + 0x61], 0x10 */ {  u32 a = R8((u32)(r_eax+0x61u)); u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a4b74: je 0x8a4bb1 */ if (fZ) goto L_008a4bb1;
L_008a4b76:; BB(0x008a4b76);
    /* 008a4b76: mov dl, byte ptr [ecx + 0x19] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x19u))) & 0xffu);
    /* 008a4b79: cmp dl, 3 */ {  u32 a = (u8)r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a4b7c: jne 0x8a4b94 */ if (!fZ) goto L_008a4b94;
L_008a4b7e:; BB(0x008a4b7e);
    /* 008a4b7e: cmp word ptr [eax + 0x10a], bx */ {  u32 a = R16((u32)(r_eax+0x10au)); u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008a4b85: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 008a4b88: lea edx, [edx*4 + 2] */ r_edx = (u32)(r_edx*4+0x2u);
    /* 008a4b8f: mov byte ptr [ecx + 0x19], dl */ W8((u32)(r_ecx+0x19u), (u8)r_edx);
    /* 008a4b92: jmp 0x8a4ba9 */ goto L_008a4ba9;
L_008a4b94:; BB(0x008a4b94);
    /* 008a4b94: cmp word ptr [eax + 0x10a], bx */ {  u32 a = R16((u32)(r_eax+0x10au)); u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008a4b9b: je 0x8a4ba3 */ if (fZ) goto L_008a4ba3;
L_008a4b9d:; BB(0x008a4b9d);
    /* 008a4b9d: or dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008a4ba0: mov byte ptr [ecx + 0x19], dl */ W8((u32)(r_ecx+0x19u), (u8)r_edx);
L_008a4ba3:; BB(0x008a4ba3);
    /* 008a4ba3: cmp byte ptr [ecx + 0x18], 8 */ {  u32 a = R8((u32)(r_ecx+0x18u)); u32 b = 0x8u; u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 008a4ba7: jae 0x8a4bad */ if (!fC) goto L_008a4bad;
L_008a4ba9:; BB(0x008a4ba9);
    /* 008a4ba9: mov byte ptr [ecx + 0x18], 8 */ W8((u32)(r_ecx+0x18u), 0x8u);
L_008a4bad:; BB(0x008a4bad);
    /* 008a4bad: mov word ptr [ecx + 0x16], bx */ W16((u32)(r_ecx+0x16u), (u16)r_ebx);
L_008a4bb1:; BB(0x008a4bb1);
    /* 008a4bb1: test byte ptr [eax + 0x61], 0x20 */ {  u32 a = R8((u32)(r_eax+0x61u)); u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a4bb5: je 0x8a4bc0 */ if (fZ) goto L_008a4bc0;
L_008a4bb7:; BB(0x008a4bb7);
    /* 008a4bb7: mov edx, dword ptr [eax + 0x130] */ r_edx = R32((u32)(r_eax+0x130u));
    /* 008a4bbd: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
L_008a4bc0:; BB(0x008a4bc0);
    /* 008a4bc0: test byte ptr [eax + 0x61], 4 */ {  u32 a = R8((u32)(r_eax+0x61u)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a4bc4: je 0x8a4bd0 */ if (fZ) goto L_008a4bd0;
L_008a4bc6:; BB(0x008a4bc6);
    /* 008a4bc6: cmp byte ptr [ecx + 0x18], 0x10 */ {  u32 a = R8((u32)(r_ecx+0x18u)); u32 b = 0x10u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a4bca: jne 0x8a4bd0 */ if (!fZ) goto L_008a4bd0;
L_008a4bcc:; BB(0x008a4bcc);
    /* 008a4bcc: mov byte ptr [ecx + 0x18], 8 */ W8((u32)(r_ecx+0x18u), 0x8u);
L_008a4bd0:; BB(0x008a4bd0);
    /* 008a4bd0: test byte ptr [eax + 0x60], 0x40 */ {  u32 a = R8((u32)(r_eax+0x60u)); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a4bd4: je 0x8a4bf5 */ if (fZ) goto L_008a4bf5;
L_008a4bd6:; BB(0x008a4bd6);
    /* 008a4bd6: mov dl, byte ptr [ecx + 0x19] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x19u))) & 0xffu);
    /* 008a4bd9: cmp dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a4bdc: je 0x8a4be3 */ if (fZ) goto L_008a4be3;
L_008a4bde:; BB(0x008a4bde);
    /* 008a4bde: cmp dl, 6 */ {  u32 a = (u8)r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a4be1: jne 0x8a4bf5 */ if (!fZ) goto L_008a4bf5;
L_008a4be3:; BB(0x008a4be3);
    /* 008a4be3: cmp dword ptr [eax + 0x174], ebx */ {  u32 a = R32((u32)(r_eax+0x174u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a4be9: je 0x8a4bf5 */ if (fZ) goto L_008a4bf5;
L_008a4beb:; BB(0x008a4beb);
    /* 008a4beb: cmp byte ptr [ecx + 0x18], 8 */ {  u32 a = R8((u32)(r_ecx+0x18u)); u32 b = 0x8u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a4bef: jne 0x8a4bf5 */ if (!fZ) goto L_008a4bf5;
L_008a4bf1:; BB(0x008a4bf1);
    /* 008a4bf1: mov byte ptr [ecx + 0x19], 3 */ W8((u32)(r_ecx+0x19u), 0x3u);
L_008a4bf5:; BB(0x008a4bf5);
    /* 008a4bf5: test byte ptr [eax + 0x60], 4 */ {  u32 a = R8((u32)(r_eax+0x60u)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a4bf9: je 0x8a4c05 */ if (fZ) goto L_008a4c05;
L_008a4bfb:; BB(0x008a4bfb);
    /* 008a4bfb: cmp byte ptr [ecx + 0x18], 8 */ {  u32 a = R8((u32)(r_ecx+0x18u)); u32 b = 0x8u; u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 008a4bff: jae 0x8a4c05 */ if (!fC) goto L_008a4c05;
L_008a4c01:; BB(0x008a4c01);
    /* 008a4c01: mov byte ptr [ecx + 0x18], 8 */ W8((u32)(r_ecx+0x18u), 0x8u);
L_008a4c05:; BB(0x008a4c05);
    /* 008a4c05: mov dl, byte ptr [ecx + 0x19] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x19u))) & 0xffu);
    /* 008a4c08: cmp dl, 3 */ {  u32 a = (u8)r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a4c0b: je 0x8a4c18 */ if (fZ) goto L_008a4c18;
L_008a4c0d:; BB(0x008a4c0d);
    /* 008a4c0d: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a4c10: je 0x8a4c18 */ if (fZ) goto L_008a4c18;
L_008a4c12:; BB(0x008a4c12);
    /* 008a4c12: mov byte ptr [ecx + 0x1d], 3 */ W8((u32)(r_ecx+0x1du), 0x3u);
    /* 008a4c16: jmp 0x8a4c1c */ goto L_008a4c1c;
L_008a4c18:; BB(0x008a4c18);
    /* 008a4c18: mov byte ptr [ecx + 0x1d], 1 */ W8((u32)(r_ecx+0x1du), 0x1u);
L_008a4c1c:; BB(0x008a4c1c);
    /* 008a4c1c: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a4c1f: je 0x8a4c24 */ if (fZ) goto L_008a4c24;
L_008a4c21:; BB(0x008a4c21);
    /* 008a4c21: inc byte ptr [ecx + 0x1d] */ { u32 ad = (u32)(r_ecx+0x1du); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_008a4c24:; BB(0x008a4c24);
    /* 008a4c24: test byte ptr [eax + 0x61], 0x80 */ {  u32 a = R8((u32)(r_eax+0x61u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a4c28: je 0x8a4c36 */ if (fZ) goto L_008a4c36;
L_008a4c2a:; BB(0x008a4c2a);
    /* 008a4c2a: cmp dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a4c2d: je 0x8a4c33 */ if (fZ) goto L_008a4c33;
L_008a4c2f:; BB(0x008a4c2f);
    /* 008a4c2f: cmp dl, bl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a4c31: jne 0x8a4c36 */ if (!fZ) goto L_008a4c36;
L_008a4c33:; BB(0x008a4c33);
    /* 008a4c33: inc byte ptr [ecx + 0x1d] */ { u32 ad = (u32)(r_ecx+0x1du); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_008a4c36:; BB(0x008a4c36);
    /* 008a4c36: mov al, byte ptr [ecx + 0x18] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+0x18u))) & 0xffu);
    /* 008a4c39: imul byte ptr [ecx + 0x1d] */ { i32 t = (i32)(i8)r_eax * (i32)(i8)R8((u32)(r_ecx+0x1du)); r_eax = (r_eax & 0xffff0000u) | ((u32)t & 0xffffu); fC = fO = (t != (i32)(i8)t); }
    /* 008a4c3c: mov byte ptr [ecx + 0x1e], al */ W8((u32)(r_ecx+0x1eu), (u8)r_eax);
    /* 008a4c3f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 008a4c42: imul eax, dword ptr [ecx] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ecx)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a4c45: add eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 008a4c48: shr eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 008a4c4b: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 008a4c4e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a4c4f: ret  */ FN_RET(0x008a4b65); r_esp += 4; return;
}

void f_008a4c50(void) /* sub_8A4C50 */
{
    FN_ENTER(0x008a4c50);
    /* 008a4c50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a4c51: mov ebp, esp */ r_ebp = r_esp;
    /* 008a4c53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a4c54: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a4c55: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008a4c58: mov cl, byte ptr [ebx + 9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebx+0x9u))) & 0xffu);
    /* 008a4c5b: cmp cl, 8 */ {  u32 a = (u8)r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008a4c5e: jae 0x8a4d5d */ if (!fC) goto L_008a4d5d;
L_008a4c64:; BB(0x008a4c64);
    /* 008a4c64: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008a4c66: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 008a4c69: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a4c6a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4c6b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4c6c: je 0x8a4d04 */ if (fZ) goto L_008a4d04;
L_008a4c72:; BB(0x008a4c72);
    /* 008a4c72: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a4c73: je 0x8a4cc3 */ if (fZ) goto L_008a4cc3;
L_008a4c75:; BB(0x008a4c75);
    /* 008a4c75: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a4c76: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 008a4c77: jne 0x8a4d43 */ if (!fZ) goto L_008a4d43;
L_008a4c7d:; BB(0x008a4c7d);
    /* 008a4c7d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 008a4c80: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 008a4c83: mov esi, ecx */ r_esi = r_ecx;
    /* 008a4c85: shr esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 008a4c87: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a4c89: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a4c8c: lea edi, [eax + edx - 1] */ r_edi = (u32)(r_eax+r_edx+0xffffffffu);
    /* 008a4c90: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008a4c92: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008a4c95: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 008a4c96: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008a4c98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a4c9a: jbe 0x8a4d43 */ if ((fC||fZ)) goto L_008a4d43;
L_008a4ca0:; BB(0x008a4ca0);
    /* 008a4ca0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a4ca3:; BB(0x008a4ca3);
    /* 008a4ca3: mov bl, byte ptr [esi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008a4ca5: mov cl, dl */ r_ecx = (r_ecx & 0xffffff00u) | (((u8)r_edx) & 0xffu);
    /* 008a4ca7: shr bl, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u8)r_ebx; u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 008a4ca9: and bl, 0xf */ {  u32 a = (u8)r_ebx; u32 b = 0xfu; u32 r = (a & b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008a4cac: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a4caf: mov byte ptr [edi], bl */ W8((u32)(r_edi), (u8)r_ebx);
    /* 008a4cb1: jne 0x8a4cb8 */ if (!fZ) goto L_008a4cb8;
L_008a4cb3:; BB(0x008a4cb3);
    /* 008a4cb3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fC = 0; }
    /* 008a4cb5: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008a4cb6: jmp 0x8a4cbb */ goto L_008a4cbb;
L_008a4cb8:; BB(0x008a4cb8);
    /* 008a4cb8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008a4cba: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
L_008a4cbb:; BB(0x008a4cbb);
    /* 008a4cbb: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a4cbc: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a4cbf: jne 0x8a4ca3 */ if (!fZ) goto L_008a4ca3;
L_008a4cc1:; BB(0x008a4cc1);
    /* 008a4cc1: jmp 0x8a4d40 */ goto L_008a4d40;
L_008a4cc3:; BB(0x008a4cc3);
    /* 008a4cc3: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 008a4cc6: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 008a4cc9: mov esi, ecx */ r_esi = r_ecx;
    /* 008a4ccb: shr esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 008a4cce: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a4cd0: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a4cd3: lea edi, [eax + edx - 1] */ r_edi = (u32)(r_eax+r_edx+0xffffffffu);
    /* 008a4cd7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 008a4cd9: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008a4cdb: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 008a4cdc: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008a4cde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a4ce0: jbe 0x8a4d43 */ if ((fC||fZ)) goto L_008a4d43;
L_008a4ce2:; BB(0x008a4ce2);
    /* 008a4ce2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a4ce5:; BB(0x008a4ce5);
    /* 008a4ce5: mov bl, byte ptr [esi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008a4ce7: mov cl, dl */ r_ecx = (r_ecx & 0xffffff00u) | (((u8)r_edx) & 0xffu);
    /* 008a4ce9: shr bl, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u8)r_ebx; u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 008a4ceb: and bl, 3 */ {  u32 a = (u8)r_ebx; u32 b = 0x3u; u32 r = (a & b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008a4cee: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a4cf1: mov byte ptr [edi], bl */ W8((u32)(r_edi), (u8)r_ebx);
    /* 008a4cf3: jne 0x8a4cfa */ if (!fZ) goto L_008a4cfa;
L_008a4cf5:; BB(0x008a4cf5);
    /* 008a4cf5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fC = 0; }
    /* 008a4cf7: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008a4cf8: jmp 0x8a4cfc */ goto L_008a4cfc;
L_008a4cfa:; BB(0x008a4cfa);
    /* 008a4cfa: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008a4cfb: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_008a4cfc:; BB(0x008a4cfc);
    /* 008a4cfc: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a4cfd: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a4d00: jne 0x8a4ce5 */ if (!fZ) goto L_008a4ce5;
L_008a4d02:; BB(0x008a4d02);
    /* 008a4d02: jmp 0x8a4d40 */ goto L_008a4d40;
L_008a4d04:; BB(0x008a4d04);
    /* 008a4d04: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 008a4d07: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 008a4d0a: mov esi, ecx */ r_esi = r_ecx;
    /* 008a4d0c: shr esi, 3 */ { u32 c = (3u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 008a4d0f: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a4d11: lea edi, [eax + edx - 1] */ r_edi = (u32)(r_eax+r_edx+0xffffffffu);
    /* 008a4d15: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 008a4d17: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a4d1a: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 008a4d1b: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008a4d1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a4d1f: jbe 0x8a4d43 */ if ((fC||fZ)) goto L_008a4d43;
L_008a4d21:; BB(0x008a4d21);
    /* 008a4d21: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a4d24:; BB(0x008a4d24);
    /* 008a4d24: mov bl, byte ptr [esi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008a4d26: mov cl, dl */ r_ecx = (r_ecx & 0xffffff00u) | (((u8)r_edx) & 0xffu);
    /* 008a4d28: shr bl, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u8)r_ebx; u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 008a4d2a: and bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008a4d2d: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a4d30: mov byte ptr [edi], bl */ W8((u32)(r_edi), (u8)r_ebx);
    /* 008a4d32: jne 0x8a4d39 */ if (!fZ) goto L_008a4d39;
L_008a4d34:; BB(0x008a4d34);
    /* 008a4d34: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fC = 0; }
    /* 008a4d36: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008a4d37: jmp 0x8a4d3a */ goto L_008a4d3a;
L_008a4d39:; BB(0x008a4d39);
    /* 008a4d39: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_008a4d3a:; BB(0x008a4d3a);
    /* 008a4d3a: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a4d3b: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a4d3e: jne 0x8a4d24 */ if (!fZ) goto L_008a4d24;
L_008a4d40:; BB(0x008a4d40);
    /* 008a4d40: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
L_008a4d43:; BB(0x008a4d43);
    /* 008a4d43: mov cl, byte ptr [ebx + 0xa] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebx+0xau))) & 0xffu);
    /* 008a4d46: mov dl, cl */ r_edx = (r_edx & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 008a4d48: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 008a4d4b: shl dl, 3 */ { u32 c = (3u) & 31; u32 a = (u8)r_edx; u32 r = a; if (c) { r = (a << c) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = (r >> 7) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 008a4d4e: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a4d51: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a4d52: mov byte ptr [ebx + 9], 8 */ W8((u32)(r_ebx+0x9u), 0x8u);
    /* 008a4d56: mov byte ptr [ebx + 0xb], dl */ W8((u32)(r_ebx+0xbu), (u8)r_edx);
    /* 008a4d59: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 008a4d5c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_008a4d5d:; BB(0x008a4d5d);
    /* 008a4d5d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a4d5e: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a4d5f: ret  */ FN_RET(0x008a4c50); r_esp += 4; return;
}

void f_008a4d60(void) /* sub_8A4D60 */
{
    FN_ENTER(0x008a4d60);
    /* 008a4d60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a4d61: mov ebp, esp */ r_ebp = r_esp;
    /* 008a4d63: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008a4d66: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4d67: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008a4d6a: mov al, byte ptr [esi + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x8u))) & 0xffu);
    /* 008a4d6d: cmp al, 3 */ {  u32 a = (u8)r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008a4d6f: je 0x8a4ed4 */ if (fZ) goto L_008a4ed4;
L_008a4d75:; BB(0x008a4d75);
    /* 008a4d75: and dword ptr [ebp + 8], 0 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a4d79: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a4d7a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4d7b: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 008a4d7d: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a4d7f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008a4d82: je 0x8a4daa */ if (fZ) goto L_008a4daa;
L_008a4d84:; BB(0x008a4d84);
    /* 008a4d84: movzx ecx, byte ptr [esi + 9] */ r_ecx = (u32)R8((u32)(r_esi+0x9u));
    /* 008a4d88: movzx ebx, byte ptr [eax] */ r_ebx = (u32)R8((u32)(r_eax));
    /* 008a4d8b: mov edx, ecx */ r_edx = r_ecx;
    /* 008a4d8d: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008a4d8f: movzx ebx, byte ptr [eax + 1] */ r_ebx = (u32)R8((u32)(r_eax+0x1u));
    /* 008a4d93: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a4d95: movzx ebx, byte ptr [eax + 2] */ r_ebx = (u32)R8((u32)(r_eax+0x2u));
    /* 008a4d99: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 008a4d9c: movzx ecx, byte ptr [esi + 9] */ r_ecx = (u32)R8((u32)(r_esi+0x9u));
    /* 008a4da0: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a4da2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008a4da4: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 008a4da7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a4da8: jmp 0x8a4db7 */ goto L_008a4db7;
L_008a4daa:; BB(0x008a4daa);
    /* 008a4daa: movzx edx, byte ptr [esi + 9] */ r_edx = (u32)R8((u32)(r_esi+0x9u));
    /* 008a4dae: movzx ecx, byte ptr [eax + 3] */ r_ecx = (u32)R8((u32)(r_eax+0x3u));
    /* 008a4db2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008a4db4: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008a4db6: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_008a4db7:; BB(0x008a4db7);
    /* 008a4db7: test byte ptr [esi + 8], 4 */ {  u32 a = R8((u32)(r_esi+0x8u)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a4dbb: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 008a4dbe: je 0x8a4dd2 */ if (fZ) goto L_008a4dd2;
L_008a4dc0:; BB(0x008a4dc0);
    /* 008a4dc0: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 008a4dc4: movzx eax, byte ptr [esi + 9] */ r_eax = (u32)R8((u32)(r_esi+0x9u));
    /* 008a4dc8: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008a4dca: mov dword ptr [ebp + ebx*4 - 0x14], eax */ W32((u32)(r_ebp+r_ebx*4+0xffffffecu), r_eax);
    /* 008a4dce: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 008a4dd1: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_008a4dd2:; BB(0x008a4dd2);
    /* 008a4dd2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008a4dd4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a4dd6: jle 0x8a4ed2 */ if ((fZ||fS!=fO)) goto L_008a4ed2;
L_008a4ddc:; BB(0x008a4ddc);
    /* 008a4ddc: lea eax, [ebp + ecx*4 - 0x14] */ r_eax = (u32)(r_ebp+r_ecx*4+0xffffffecu);
    /* 008a4de0: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a4de3: jg 0x8a4ded */ if ((!fZ&&fS==fO)) goto L_008a4ded;
L_008a4de5:; BB(0x008a4de5);
    /* 008a4de5: and dword ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a4de8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 008a4deb: jmp 0x8a4df4 */ goto L_008a4df4;
L_008a4ded:; BB(0x008a4ded);
    /* 008a4ded: mov dword ptr [ebp + 8], 1 */ W32((u32)(r_ebp+0x8u), 0x1u);
L_008a4df4:; BB(0x008a4df4);
    /* 008a4df4: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a4df5: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a4df7: jl 0x8a4ddc */ if ((fS!=fO)) goto L_008a4ddc;
L_008a4df9:; BB(0x008a4df9);
    /* 008a4df9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008a4dfb: cmp word ptr [ebp + 8], cx */ {  u32 a = R16((u32)(r_ebp+0x8u)); u32 b = (u16)r_ecx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 008a4dff: je 0x8a4ed2 */ if (fZ) goto L_008a4ed2;
L_008a4e05:; BB(0x008a4e05);
    /* 008a4e05: movzx eax, byte ptr [esi + 9] */ r_eax = (u32)R8((u32)(r_esi+0x9u));
    /* 008a4e09: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008a4e0a: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008a4e0b: je 0x8a4ebb */ if (fZ) goto L_008a4ebb;
L_008a4e11:; BB(0x008a4e11);
    /* 008a4e11: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008a4e12: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a4e13: je 0x8a4e8f */ if (fZ) goto L_008a4e8f;
L_008a4e15:; BB(0x008a4e15);
    /* 008a4e15: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008a4e18: je 0x8a4e6a */ if (fZ) goto L_008a4e6a;
L_008a4e1a:; BB(0x008a4e1a);
    /* 008a4e1a: sub eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a4e1d: jne 0x8a4ed2 */ if (!fZ) goto L_008a4ed2;
L_008a4e23:; BB(0x008a4e23);
    /* 008a4e23: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 008a4e26: imul edi, ebx */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_ebx; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a4e29: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a4e2b: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 008a4e2e: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 008a4e31: jbe 0x8a4ed2 */ if ((fC||fZ)) goto L_008a4ed2;
L_008a4e37:; BB(0x008a4e37);
    /* 008a4e37: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a4e3a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008a4e3c: div ebx */ { u32 d = r_ebx; if (!d) UNSUP(0x008a4e3c, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x008a4e3c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008a4e3e: movzx ax, byte ptr [esi] */ r_eax = (r_eax & 0xffff0000u) | (((u32)R8((u32)(r_esi))) & 0xffffu);
    /* 008a4e42: lea edi, [esi + 1] */ r_edi = (u32)(r_esi+0x1u);
    /* 008a4e45: movzx cx, byte ptr [edi] */ r_ecx = (r_ecx & 0xffff0000u) | (((u32)R8((u32)(r_edi))) & 0xffffu);
    /* 008a4e49: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008a4e4c: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008a4e4e: mov cx, word ptr [ebp + edx*4 - 0x14] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+r_edx*4+0xffffffecu))) & 0xffffu);
    /* 008a4e53: shr ax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u16)r_eax; u32 r = a; if (c) { r = (c >= 16) ? 0 : (a >> c); r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  } }
    /* 008a4e56: mov byte ptr [esi], ah */ W8((u32)(r_esi), (u8)(r_eax>>8));
    /* 008a4e58: mov esi, edi */ r_esi = r_edi;
    /* 008a4e5a: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 008a4e5c: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a4e5d: inc dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a4e60: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a4e63: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a4e66: jb 0x8a4e37 */ if (fC) goto L_008a4e37;
L_008a4e68:; BB(0x008a4e68);
    /* 008a4e68: jmp 0x8a4ed2 */ goto L_008a4ed2;
L_008a4e6a:; BB(0x008a4e6a);
    /* 008a4e6a: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 008a4e6d: imul edi, ebx */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_ebx; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a4e70: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 008a4e73: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008a4e75: cmp dword ptr [ebp + 8], ecx */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a4e78: jbe 0x8a4ed2 */ if ((fC||fZ)) goto L_008a4ed2;
L_008a4e7a:; BB(0x008a4e7a);
    /* 008a4e7a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 008a4e7c: mov eax, edi */ r_eax = r_edi;
    /* 008a4e7e: div ebx */ { u32 d = r_ebx; if (!d) UNSUP(0x008a4e7e, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x008a4e7e, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008a4e80: mov cl, byte ptr [ebp + edx*4 - 0x14] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+r_edx*4+0xffffffecu))) & 0xffu);
    /* 008a4e84: shr byte ptr [esi], cl */ { u32 ad = (u32)(r_esi); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); W8(ad, r);  } }
    /* 008a4e86: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a4e87: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a4e88: cmp edi, dword ptr [ebp + 8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a4e8b: jb 0x8a4e7a */ if (fC) goto L_008a4e7a;
L_008a4e8d:; BB(0x008a4e8d);
    /* 008a4e8d: jmp 0x8a4ed2 */ goto L_008a4ed2;
L_008a4e8f:; BB(0x008a4e8f);
    /* 008a4e8f: mov esi, dword ptr [esi + 4] */ r_esi = R32((u32)(r_esi+0x4u));
    /* 008a4e92: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 008a4e95: mov ecx, edx */ r_ecx = r_edx;
    /* 008a4e97: mov eax, 0xf0 */ r_eax = 0xf0u;
    /* 008a4e9c: sar eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r; fC = ((i32)a >> ((c > 31 ? 31 : c - 1))) & 1; fO = 0; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 008a4e9e: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 008a4ea0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a4ea1: sar ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008a4ea3: and al, 0xf0 */ {  u32 a = (u8)r_eax; u32 b = 0xf0u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008a4ea5: or al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008a4ea7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a4ea9: jbe 0x8a4ed2 */ if ((fC||fZ)) goto L_008a4ed2;
L_008a4eab:; BB(0x008a4eab);
    /* 008a4eab: mov bl, byte ptr [edi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 008a4ead: mov cl, dl */ r_ecx = (r_ecx & 0xffffff00u) | (((u8)r_edx) & 0xffu);
    /* 008a4eaf: shr bl, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u8)r_ebx; u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 008a4eb1: and bl, al */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu); fC = 0; }
    /* 008a4eb3: mov byte ptr [edi], bl */ W8((u32)(r_edi), (u8)r_ebx);
    /* 008a4eb5: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a4eb6: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a4eb7: jne 0x8a4eab */ if (!fZ) goto L_008a4eab;
L_008a4eb9:; BB(0x008a4eb9);
    /* 008a4eb9: jmp 0x8a4ed2 */ goto L_008a4ed2;
L_008a4ebb:; BB(0x008a4ebb);
    /* 008a4ebb: mov esi, dword ptr [esi + 4] */ r_esi = R32((u32)(r_esi+0x4u));
    /* 008a4ebe: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a4ec0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008a4ec3: jbe 0x8a4ed2 */ if ((fC||fZ)) goto L_008a4ed2;
L_008a4ec5:; BB(0x008a4ec5);
    /* 008a4ec5: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008a4ec7: shr cl, 1 */ { u32 c = (1u) & 31; u32 a = (u8)r_ecx; u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 008a4ec9: and cl, 0x55 */ {  u32 a = (u8)r_ecx; u32 b = 0x55u; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu); fC = 0; }
    /* 008a4ecc: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 008a4ece: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a4ecf: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a4ed0: jne 0x8a4ec5 */ if (!fZ) goto L_008a4ec5;
L_008a4ed2:; BB(0x008a4ed2);
    /* 008a4ed2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a4ed3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008a4ed4:; BB(0x008a4ed4);
    /* 008a4ed4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a4ed5: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a4ed6: ret  */ FN_RET(0x008a4d60); r_esp += 4; return;
}

void f_008a4ed7(void) /* sub_8A4ED7 */
{
    FN_ENTER(0x008a4ed7);
    /* 008a4ed7: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008a4edb: cmp byte ptr [eax + 9], 0x10 */ {  u32 a = R8((u32)(r_eax+0x9u)); u32 b = 0x10u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008a4edf: jne 0x8a4f1a */ if (!fZ) goto L_008a4f1a;
L_008a4ee1:; BB(0x008a4ee1);
    /* 008a4ee1: movzx ecx, byte ptr [eax + 0xa] */ r_ecx = (u32)R8((u32)(r_eax+0xau));
    /* 008a4ee5: imul ecx, dword ptr [eax] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_eax)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a4ee8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); fC = 0; }
    /* 008a4eea: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4eeb: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 008a4eef: mov edx, esi */ r_edx = r_esi;
    /* 008a4ef1: jbe 0x8a4f01 */ if ((fC||fZ)) goto L_008a4f01;
L_008a4ef3:; BB(0x008a4ef3);
    /* 008a4ef3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4ef4: mov edi, ecx */ r_edi = r_ecx;
L_008a4ef6:; BB(0x008a4ef6);
    /* 008a4ef6: mov cl, byte ptr [edx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 008a4ef8: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008a4ef9: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008a4efa: mov byte ptr [esi], cl */ W8((u32)(r_esi), (u8)r_ecx);
    /* 008a4efc: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a4efd: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 008a4efe: jne 0x8a4ef6 */ if (!fZ) goto L_008a4ef6;
L_008a4f00:; BB(0x008a4f00);
    /* 008a4f00: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_008a4f01:; BB(0x008a4f01);
    /* 008a4f01: mov cl, byte ptr [eax + 0xa] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0xau))) & 0xffu);
    /* 008a4f04: mov dl, cl */ r_edx = (r_edx & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 008a4f06: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 008a4f09: shl dl, 3 */ { u32 c = (3u) & 31; u32 a = (u8)r_edx; u32 r = a; if (c) { r = (a << c) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = (r >> 7) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 008a4f0c: imul ecx, dword ptr [eax] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_eax)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a4f0f: mov byte ptr [eax + 9], 8 */ W8((u32)(r_eax+0x9u), 0x8u);
    /* 008a4f13: mov byte ptr [eax + 0xb], dl */ W8((u32)(r_eax+0xbu), (u8)r_edx);
    /* 008a4f16: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 008a4f19: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_008a4f1a:; BB(0x008a4f1a);
    /* 008a4f1a: ret  */ FN_RET(0x008a4ed7); r_esp += 4; return;
}

void f_008a4f1b(void) /* sub_8A4F1B */
{
    FN_ENTER(0x008a4f1b);
    /* 008a4f1b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a4f1c: mov ebp, esp */ r_ebp = r_esp;
    /* 008a4f1e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a4f1f: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 008a4f22: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a4f23: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4f24: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008a4f27: mov cl, byte ptr [esi + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi+0x8u))) & 0xffu);
    /* 008a4f2a: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a4f2c: mov ebx, edx */ r_ebx = r_edx;
    /* 008a4f2e: shr ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 008a4f31: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a4f33: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4f34: mov byte ptr [ebp + 0xb], bl */ W8((u32)(r_ebp+0xbu), (u8)r_ebx);
    /* 008a4f37: jne 0x8a501e */ if (!fZ) goto L_008a501e;
L_008a4f3d:; BB(0x008a4f3d);
    /* 008a4f3d: mov cl, byte ptr [esi + 9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi+0x9u))) & 0xffu);
    /* 008a4f40: cmp cl, 8 */ {  u32 a = (u8)r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a4f43: jne 0x8a4f95 */ if (!fZ) goto L_008a4f95;
L_008a4f45:; BB(0x008a4f45);
    /* 008a4f45: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008a4f48: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a4f4a: test byte ptr [ebp + 0x14], 0x80 */ {  u32 a = R8((u32)(r_ebp+0x14u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a4f4e: lea edi, [ecx + eax] */ r_edi = (u32)(r_ecx+r_eax);
    /* 008a4f51: je 0x8a4f71 */ if (fZ) goto L_008a4f71;
L_008a4f53:; BB(0x008a4f53);
    /* 008a4f53: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a4f56: jbe 0x8a4f6c */ if ((fC||fZ)) goto L_008a4f6c;
L_008a4f58:; BB(0x008a4f58);
    /* 008a4f58: lea ebx, [eax - 1] */ r_ebx = (u32)(r_eax+0xffffffffu);
    /* 008a4f5b: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
L_008a4f5e:; BB(0x008a4f5e);
    /* 008a4f5e: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a4f5f: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a4f60: mov byte ptr [edi], dl */ W8((u32)(r_edi), (u8)r_edx);
    /* 008a4f62: mov bl, byte ptr [ecx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 008a4f64: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a4f65: dec dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008a4f68: mov byte ptr [edi], bl */ W8((u32)(r_edi), (u8)r_ebx);
    /* 008a4f6a: jne 0x8a4f5e */ if (!fZ) goto L_008a4f5e;
L_008a4f6c:; BB(0x008a4f6c);
    /* 008a4f6c: mov byte ptr [edi - 1], dl */ W8((u32)(r_edi+0xffffffffu), (u8)r_edx);
    /* 008a4f6f: jmp 0x8a4f86 */ goto L_008a4f86;
L_008a4f71:; BB(0x008a4f71);
    /* 008a4f71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 008a4f73: jbe 0x8a4f86 */ if ((fC||fZ)) goto L_008a4f86;
L_008a4f75:; BB(0x008a4f75);
    /* 008a4f75: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_008a4f78:; BB(0x008a4f78);
    /* 008a4f78: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a4f79: mov bl, byte ptr [ecx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 008a4f7b: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a4f7c: mov byte ptr [edi], bl */ W8((u32)(r_edi), (u8)r_ebx);
    /* 008a4f7e: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a4f7f: dec dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008a4f82: mov byte ptr [edi], dl */ W8((u32)(r_edi), (u8)r_edx);
    /* 008a4f84: jne 0x8a4f78 */ if (!fZ) goto L_008a4f78;
L_008a4f86:; BB(0x008a4f86);
    /* 008a4f86: mov byte ptr [esi + 0xa], 2 */ W8((u32)(r_esi+0xau), 0x2u);
    /* 008a4f8a: mov byte ptr [esi + 0xb], 0x10 */ W8((u32)(r_esi+0xbu), 0x10u);
    /* 008a4f8e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008a4f90: jmp 0x8a514b */ goto L_008a514b;
L_008a4f95:; BB(0x008a4f95);
    /* 008a4f95: cmp cl, 0x10 */ {  u32 a = (u8)r_ecx; u32 b = 0x10u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008a4f98: jne 0x8a514e */ if (!fZ) goto L_008a514e;
L_008a4f9e:; BB(0x008a4f9e);
    /* 008a4f9e: test byte ptr [ebp + 0x14], 0x80 */ {  u32 a = R8((u32)(r_ebp+0x14u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a4fa2: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008a4fa5: je 0x8a4fde */ if (fZ) goto L_008a4fde;
L_008a4fa7:; BB(0x008a4fa7);
    /* 008a4fa7: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a4fa9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 008a4fac: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a4fae: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a4fb1: jbe 0x8a4fd6 */ if ((fC||fZ)) goto L_008a4fd6;
L_008a4fb3:; BB(0x008a4fb3);
    /* 008a4fb3: lea edi, [eax - 1] */ r_edi = (u32)(r_eax+0xffffffffu);
    /* 008a4fb6: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 008a4fb9: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
L_008a4fbc:; BB(0x008a4fbc);
    /* 008a4fbc: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a4fbd: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008a4fbf: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a4fc0: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008a4fc2: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a4fc3: mov bl, byte ptr [edi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 008a4fc5: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a4fc6: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008a4fc8: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a4fc9: mov bl, byte ptr [edi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 008a4fcb: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a4fcc: dec dword ptr [ebp + 0x10] */ { u32 ad = (u32)(r_ebp+0x10u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008a4fcf: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008a4fd1: mov bl, byte ptr [ebp + 0xb] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ebp+0xbu))) & 0xffu);
    /* 008a4fd4: jne 0x8a4fbc */ if (!fZ) goto L_008a4fbc;
L_008a4fd6:; BB(0x008a4fd6);
    /* 008a4fd6: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 008a4fd7: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008a4fd9: mov byte ptr [ecx - 1], dl */ W8((u32)(r_ecx+0xffffffffu), (u8)r_edx);
    /* 008a4fdc: jmp 0x8a500e */ goto L_008a500e;
L_008a4fde:; BB(0x008a4fde);
    /* 008a4fde: lea edi, [eax + ecx] */ r_edi = (u32)(r_eax+r_ecx);
    /* 008a4fe1: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 008a4fe4: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a4fe6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); fC = 0; }
    /* 008a4fe8: jbe 0x8a500e */ if ((fC||fZ)) goto L_008a500e;
L_008a4fea:; BB(0x008a4fea);
    /* 008a4fea: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
L_008a4fed:; BB(0x008a4fed);
    /* 008a4fed: dec dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a4ff0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008a4ff3: mov cl, byte ptr [ecx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 008a4ff5: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a4ff6: dec dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a4ff9: mov byte ptr [edi], cl */ W8((u32)(r_edi), (u8)r_ecx);
    /* 008a4ffb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008a4ffe: mov cl, byte ptr [ecx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 008a5000: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a5001: mov byte ptr [edi], cl */ W8((u32)(r_edi), (u8)r_ecx);
    /* 008a5003: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a5004: mov byte ptr [edi], bl */ W8((u32)(r_edi), (u8)r_ebx);
    /* 008a5006: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a5007: dec dword ptr [ebp + 0x10] */ { u32 ad = (u32)(r_ebp+0x10u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 008a500a: mov byte ptr [edi], dl */ W8((u32)(r_edi), (u8)r_edx);
    /* 008a500c: jne 0x8a4fed */ if (!fZ) goto L_008a4fed;
L_008a500e:; BB(0x008a500e);
    /* 008a500e: mov byte ptr [esi + 0xa], 2 */ W8((u32)(r_esi+0xau), 0x2u);
    /* 008a5012: mov byte ptr [esi + 0xb], 0x20 */ W8((u32)(r_esi+0xbu), 0x20u);
    /* 008a5016: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r; fC = (c <= 32) ? ((a >> (32 - c)) & 1) : 0; fO = ((r >> 31) & 1) ^ fC; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 008a5019: jmp 0x8a514b */ goto L_008a514b;
L_008a501e:; BB(0x008a501e);
    /* 008a501e: cmp cl, 2 */ {  u32 a = (u8)r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008a5021: jne 0x8a514e */ if (!fZ) goto L_008a514e;
L_008a5027:; BB(0x008a5027);
    /* 008a5027: mov cl, byte ptr [esi + 9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi+0x9u))) & 0xffu);
    /* 008a502a: cmp cl, 8 */ {  u32 a = (u8)r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a502d: jne 0x8a50a3 */ if (!fZ) goto L_008a50a3;
L_008a502f:; BB(0x008a502f);
    /* 008a502f: test byte ptr [ebp + 0x14], 0x80 */ {  u32 a = R8((u32)(r_ebp+0x14u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a5033: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008a5036: je 0x8a506c */ if (fZ) goto L_008a506c;
L_008a5038:; BB(0x008a5038);
    /* 008a5038: lea edi, [ecx + eax*2] */ r_edi = (u32)(r_ecx+r_eax*2);
    /* 008a503b: mov ecx, eax */ r_ecx = r_eax;
    /* 008a503d: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a503f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); fC = (a < b); }
    /* 008a5042: lea edi, [ecx + eax] */ r_edi = (u32)(r_ecx+r_eax);
    /* 008a5045: jbe 0x8a5067 */ if ((fC||fZ)) goto L_008a5067;
L_008a5047:; BB(0x008a5047);
    /* 008a5047: lea ebx, [eax - 1] */ r_ebx = (u32)(r_eax+0xffffffffu);
    /* 008a504a: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
L_008a504d:; BB(0x008a504d);
    /* 008a504d: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a504e: mov byte ptr [edi], dl */ W8((u32)(r_edi), (u8)r_edx);
    /* 008a5050: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a5051: mov bl, byte ptr [ecx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 008a5053: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a5054: mov byte ptr [edi], bl */ W8((u32)(r_edi), (u8)r_ebx);
    /* 008a5056: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a5057: mov bl, byte ptr [ecx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 008a5059: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a505a: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a505b: mov byte ptr [edi], bl */ W8((u32)(r_edi), (u8)r_ebx);
    /* 008a505d: mov bl, byte ptr [ecx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 008a505f: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a5060: dec dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 008a5063: mov byte ptr [edi], bl */ W8((u32)(r_edi), (u8)r_ebx);
    /* 008a5065: jne 0x8a504d */ if (!fZ) goto L_008a504d;
L_008a5067:; BB(0x008a5067);
    /* 008a5067: mov byte ptr [edi - 1], dl */ W8((u32)(r_edi+0xffffffffu), (u8)r_edx);
    /* 008a506a: jmp 0x8a5097 */ goto L_008a5097;
L_008a506c:; BB(0x008a506c);
    /* 008a506c: lea ecx, [ecx + eax*2] */ r_ecx = (u32)(r_ecx+r_eax*2);
    /* 008a506f: mov edi, eax */ r_edi = r_eax;
    /* 008a5071: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a5073: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); fC = 0; }
    /* 008a5075: lea ecx, [edi + eax] */ r_ecx = (u32)(r_edi+r_eax);
    /* 008a5078: jbe 0x8a5097 */ if ((fC||fZ)) goto L_008a5097;
L_008a507a:; BB(0x008a507a);
    /* 008a507a: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_008a507d:; BB(0x008a507d);
    /* 008a507d: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a507e: mov bl, byte ptr [edi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 008a5080: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a5081: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008a5083: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a5084: mov bl, byte ptr [edi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 008a5086: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a5087: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008a5089: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a508a: mov bl, byte ptr [edi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 008a508c: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a508d: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008a508f: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a5090: dec dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 008a5093: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008a5095: jne 0x8a507d */ if (!fZ) goto L_008a507d;
L_008a5097:; BB(0x008a5097);
    /* 008a5097: mov byte ptr [esi + 0xb], 0x20 */ W8((u32)(r_esi+0xbu), 0x20u);
    /* 008a509b: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r; fC = (c <= 32) ? ((a >> (32 - c)) & 1) : 0; fO = ((r >> 31) & 1) ^ fC; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 008a509e: jmp 0x8a5147 */ goto L_008a5147;
L_008a50a3:; BB(0x008a50a3);
    /* 008a50a3: cmp cl, 0x10 */ {  u32 a = (u8)r_ecx; u32 b = 0x10u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008a50a6: jne 0x8a514e */ if (!fZ) goto L_008a514e;
L_008a50ac:; BB(0x008a50ac);
    /* 008a50ac: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008a50af: lea ecx, [ecx + eax*2] */ r_ecx = (u32)(r_ecx+r_eax*2);
    /* 008a50b2: mov edi, eax */ r_edi = r_eax;
    /* 008a50b4: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a50b6: test byte ptr [ebp + 0x14], 0x80 */ {  u32 a = R8((u32)(r_ebp+0x14u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a50ba: lea ecx, [edi + eax] */ r_ecx = (u32)(r_edi+r_eax);
    /* 008a50bd: je 0x8a5107 */ if (fZ) goto L_008a5107;
L_008a50bf:; BB(0x008a50bf);
    /* 008a50bf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a50c2: jbe 0x8a50ff */ if ((fC||fZ)) goto L_008a50ff;
L_008a50c4:; BB(0x008a50c4);
    /* 008a50c4: lea ebx, [eax - 1] */ r_ebx = (u32)(r_eax+0xffffffffu);
    /* 008a50c7: mov dword ptr [ebp + 0x10], ebx */ W32((u32)(r_ebp+0x10u), r_ebx);
L_008a50ca:; BB(0x008a50ca);
    /* 008a50ca: mov bl, byte ptr [ebp + 0xb] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ebp+0xbu))) & 0xffu);
    /* 008a50cd: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a50ce: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008a50d0: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a50d1: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008a50d3: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a50d4: mov bl, byte ptr [edi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 008a50d6: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a50d7: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008a50d9: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a50da: mov bl, byte ptr [edi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 008a50dc: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a50dd: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008a50df: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a50e0: mov bl, byte ptr [edi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 008a50e2: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a50e3: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008a50e5: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a50e6: mov bl, byte ptr [edi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 008a50e8: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a50e9: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008a50eb: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a50ec: mov bl, byte ptr [edi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 008a50ee: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a50ef: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a50f0: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008a50f2: mov bl, byte ptr [edi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 008a50f4: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a50f5: dec dword ptr [ebp + 0x10] */ { u32 ad = (u32)(r_ebp+0x10u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008a50f8: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008a50fa: jne 0x8a50ca */ if (!fZ) goto L_008a50ca;
L_008a50fc:; BB(0x008a50fc);
    /* 008a50fc: mov bl, byte ptr [ebp + 0xb] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ebp+0xbu))) & 0xffu);
L_008a50ff:; BB(0x008a50ff);
    /* 008a50ff: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 008a5100: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008a5102: mov byte ptr [ecx - 1], dl */ W8((u32)(r_ecx+0xffffffffu), (u8)r_edx);
    /* 008a5105: jmp 0x8a5140 */ goto L_008a5140;
L_008a5107:; BB(0x008a5107);
    /* 008a5107: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); fC = 0; }
    /* 008a5109: jbe 0x8a5140 */ if ((fC||fZ)) goto L_008a5140;
L_008a510b:; BB(0x008a510b);
    /* 008a510b: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
L_008a510e:; BB(0x008a510e);
    /* 008a510e: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a510f: mov bl, byte ptr [edi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 008a5111: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a5112: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008a5114: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a5115: mov bl, byte ptr [edi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 008a5117: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a5118: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008a511a: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a511b: mov bl, byte ptr [edi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 008a511d: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a511e: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008a5120: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a5121: mov bl, byte ptr [edi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 008a5123: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a5124: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008a5126: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a5127: mov bl, byte ptr [edi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 008a5129: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a512a: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008a512c: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a512d: mov bl, byte ptr [edi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 008a512f: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a5130: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008a5132: mov bl, byte ptr [ebp + 0xb] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ebp+0xbu))) & 0xffu);
    /* 008a5135: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a5136: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008a5138: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a5139: dec dword ptr [ebp + 0x10] */ { u32 ad = (u32)(r_ebp+0x10u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 008a513c: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008a513e: jne 0x8a510e */ if (!fZ) goto L_008a510e;
L_008a5140:; BB(0x008a5140);
    /* 008a5140: mov byte ptr [esi + 0xb], 0x40 */ W8((u32)(r_esi+0xbu), 0x40u);
    /* 008a5144: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r; fC = (c <= 32) ? ((a >> (32 - c)) & 1) : 0; fO = ((r >> 31) & 1) ^ fC; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
L_008a5147:; BB(0x008a5147);
    /* 008a5147: mov byte ptr [esi + 0xa], 4 */ W8((u32)(r_esi+0xau), 0x4u);
L_008a514b:; BB(0x008a514b);
    /* 008a514b: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
L_008a514e:; BB(0x008a514e);
    /* 008a514e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a514f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a5150: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a5151: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a5152: ret  */ FN_RET(0x008a4f1b); r_esp += 4; return;
}

