#include "protos.h"

void f_007480f8(void) /* sub_7480F8 */
{
    FN_ENTER(0x007480f8);
    /* 007480f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007480f9: mov ebp, esp */ r_ebp = r_esp;
    /* 007480fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007480fd: push 0x8f25b0 */ { u32 v = 0x8f25b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00748102: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00748108: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748109: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00748110: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00748113: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00748116: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00748119: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0074811c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0074811f: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00748121: call 0x73668c */ r_esp -= 4; W32(r_esp, 0x748126u); f_0073668c();
    /* 00748126: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0074812d: push 0xb0 */ { u32 v = 0xb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00748132: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x748137u); f_005caba4();
    /* 00748137: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074813a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0074813d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074813f: je 0x74817d */ if (fZ) goto L_0074817d;
L_00748141:; BB(0x00748141);
    /* 00748141: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00748148: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074814f: movsx eax, byte ptr [ebp + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x14u));
    /* 00748153: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00748156: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748157: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074815a: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0074815d: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00748160: call 0x748184 */ r_esp -= 4; W32(r_esp, 0x748165u); f_00748184();
    /* 00748165: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00748168: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0074816f:; BB(0x0074816f);
    /* 0074816f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00748172: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00748179: mov esp, ebp */ r_esp = r_ebp;
    /* 0074817b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074817c: ret  */ FN_RET(0x007480f8); r_esp += 4; return;
L_0074817d:; BB(0x0074817d);
    /* 0074817d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074817f: jmp 0x74816f */ goto L_0074816f;
}

void f_00748184(void) /* sub_748184 */
{
    FN_ENTER(0x00748184);
    /* 00748184: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00748185: mov ebp, esp */ r_ebp = r_esp;
    /* 00748187: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00748189: push 0x8f25e6 */ { u32 v = 0x8f25e6u; r_esp -= 4; W32(r_esp, v); }
    /* 0074818e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00748194: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748195: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074819c: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074819f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007481a2: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 007481a5: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 007481a8: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 007481ab: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 007481ae: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007481b1: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 007481b4: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 007481b7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007481ba: movzx eax, byte ptr [ebp + 0x14] */ r_eax = (u32)R8((u32)(r_ebp+0x14u));
    /* 007481be: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 007481c1: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 007481c4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007481c6: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007481c8: call 0x7347ac */ r_esp -= 4; W32(r_esp, 0x7481cdu); f_007347ac();
    /* 007481cd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007481d4: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 007481d7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007481da: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007481dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007481de: mov dword ptr [edx], 0xb41a30 */ W32((u32)(r_edx), 0xb41a30u);
    /* 007481e4: mov eax, dword ptr [0x9f3c7c] */ r_eax = R32((u32)(0x9f3c7cu));
    /* 007481e9: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 007481ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007481ed: call 0x781910 */ r_esp -= 4; W32(r_esp, 0x7481f2u); f_00781910();
    /* 007481f2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007481f5: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 007481f8: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 007481fb: fdiv dword ptr [0x9734d4] */ ST(0) = ST(0) / R_F32((u32)(0x9734d4u));
    /* 00748201: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00748202: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00748205: call 0x83a248 */ r_esp -= 4; W32(r_esp, 0x74820au); f_0083a248();
    /* 0074820a: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 0074820d: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 00748211: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00748216: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00748219: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0074821c: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0074821f: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 00748222: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00748225: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00748228: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0074822a: jg 0x748234 */ if ((!fZ&&fS==fO)) goto L_00748234;
L_0074822c:; BB(0x0074822c);
    /* 0074822c: mov eax, 1 */ r_eax = 0x1u;
    /* 00748231: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_00748234:; BB(0x00748234);
    /* 00748234: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 0074823b: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0074823d: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x748242u); f_008581c5();
    /* 00748242: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00748245: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00748248: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0074824b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074824d: je 0x748317 */ if (fZ) goto L_00748317;
L_00748253:; BB(0x00748253);
    /* 00748253: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
    /* 0074825a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00748261: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00748267: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074826a: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 0074826d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00748270: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00748271: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00748273: call 0x73e5d4 */ r_esp -= 4; W32(r_esp, 0x748278u); f_0073e5d4();
    /* 00748278: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_0074827f:; BB(0x0074827f);
    /* 0074827f: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00748282: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00748285: mov dword ptr [ecx + 0x9c], eax */ W32((u32)(r_ecx+0x9cu), r_eax);
    /* 0074828b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00748292: mov esi, ebx */ r_esi = r_ebx;
    /* 00748294: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00748297: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0074829a: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 007482a1: mov dword ptr [ecx + 0xa0], esi */ W32((u32)(r_ecx+0xa0u), r_esi);
    /* 007482a7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007482a9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007482aa: mov dword ptr [ecx + 0xa4], ebx */ W32((u32)(r_ecx+0xa4u), r_ebx);
    /* 007482b0: mov dword ptr [ecx + 0xa8], edi */ W32((u32)(r_ecx+0xa8u), r_edi);
    /* 007482b6: mov byte ptr [ecx + 0xac], al */ W8((u32)(r_ecx+0xacu), (u8)r_eax);
    /* 007482bc: or edx, 0xffff0100 */ {  u32 a = r_edx; u32 b = 0xffff0100u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007482c2: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 007482c9: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x7482ceu); f_00736510();
    /* 007482ce: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 007482d1: call 0x748430 */ r_esp -= 4; W32(r_esp, 0x7482d6u); f_00748430();
    /* 007482d6: push 0x43380000 */ { u32 v = 0x43380000u; r_esp -= 4; W32(r_esp, v); }
    /* 007482db: push 0x435f0000 */ { u32 v = 0x435f0000u; r_esp -= 4; W32(r_esp, v); }
    /* 007482e0: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 007482e3: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 007482ea: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007482ef: mov word ptr [ecx + 0x84], ax */ W16((u32)(r_ecx+0x84u), (u16)r_eax);
    /* 007482f6: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x7482fbu); f_007361d0();
    /* 007482fb: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 007482fe: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00748301: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00748304: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00748307: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074830a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00748311: mov esp, ebp */ r_esp = r_ebp;
    /* 00748313: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00748314: ret 0x10 */ FN_RET(0x00748184); r_esp += 20; return;
L_00748317:; BB(0x00748317);
    /* 00748317: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00748319: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0074831c: jmp 0x74827f */ goto L_0074827f;
}

void f_00748324(void) /* sub_748324 */
{
    FN_ENTER(0x00748324);
    /* 00748324: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00748325: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00748327: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00748329: call 0x7348d8 */ r_esp -= 4; W32(r_esp, 0x74832eu); f_007348d8();
    /* 0074832e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00748330: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x748335u); f_007108f4();
    /* 00748335: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748336: mov ecx, dword ptr [ebp + 0x9c] */ r_ecx = R32((u32)(r_ebp+0x9cu));
    /* 0074833c: call 0x73e60c */ r_esp -= 4; W32(r_esp, 0x748341u); f_0073e60c();
    /* 00748341: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00748343: je 0x748355 */ if (fZ) goto L_00748355;
L_00748345:; BB(0x00748345);
    /* 00748345: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00748347: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00748349: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x74834eu); f_00736510();
    /* 0074834e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00748350: call 0x748430 */ r_esp -= 4; W32(r_esp, 0x748355u); f_00748430();
L_00748355:; BB(0x00748355);
    /* 00748355: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00748356: ret  */ FN_RET(0x00748324); r_esp += 4; return;
}

void f_00748358(void) /* sub_748358 */
{
    FN_ENTER(0x00748358);
    /* 00748358: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00748359: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074835a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074835c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074835e: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x748363u); f_007108f4();
    /* 00748363: mov ebp, eax */ r_ebp = r_eax;
    /* 00748365: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00748366: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00748368: call 0x710f80 */ r_esp -= 4; W32(r_esp, 0x74836du); f_00710f80();
    /* 0074836d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074836e: lea edx, [ebx + 0x24] */ r_edx = (u32)(r_ebx+0x24u);
    /* 00748371: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00748372: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00748374: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x748379u); f_0072a648();
    /* 00748379: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074837a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074837c: call 0x7353e8 */ r_esp -= 4; W32(r_esp, 0x748381u); f_007353e8();
    /* 00748381: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00748382: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00748384: call 0x7483ac */ r_esp -= 4; W32(r_esp, 0x748389u); f_007483ac();
    /* 00748389: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 0074838c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074838e: je 0x748396 */ if (fZ) goto L_00748396;
L_00748390:; BB(0x00748390);
    /* 00748390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00748391: call 0x761390 */ r_esp -= 4; W32(r_esp, 0x748396u); f_00761390();
L_00748396:; BB(0x00748396);
    /* 00748396: mov ecx, dword ptr [ebx + 0x9c] */ r_ecx = R32((u32)(r_ebx+0x9cu));
    /* 0074839c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074839e: je 0x7483a6 */ if (fZ) goto L_007483a6;
L_007483a0:; BB(0x007483a0);
    /* 007483a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007483a1: call 0x73e6b4 */ r_esp -= 4; W32(r_esp, 0x7483a6u); f_0073e6b4();
L_007483a6:; BB(0x007483a6);
    /* 007483a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007483a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007483a8: ret  */ FN_RET(0x00748358); r_esp += 4; return;
}

void f_007483ac(void) /* sub_7483AC */
{
    FN_ENTER(0x007483ac);
    /* 007483ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007483ad: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 007483b2: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007483b4: je 0x7483ba */ if (fZ) goto L_007483ba;
L_007483b6:; BB(0x007483b6);
    /* 007483b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007483b7: ret 4 */ FN_RET(0x007483ac); r_esp += 8; return;
L_007483ba:; BB(0x007483ba);
    /* 007483ba: movzx eax, word ptr [ecx + 0x8e] */ r_eax = (u32)R16((u32)(r_ecx+0x8eu));
    /* 007483c1: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 007483c7: movsx ebx, byte ptr [edx] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 007483ca: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 007483cd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007483cf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007483d1: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007483d3: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007483d5: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007483d7: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 007483da: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007483dc: jl 0x748409 */ if ((fS!=fO)) goto L_00748409;
L_007483de:; BB(0x007483de);
    /* 007483de: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007483e1: jl 0x7483e7 */ if ((fS!=fO)) goto L_007483e7;
L_007483e3:; BB(0x007483e3);
    /* 007483e3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007483e4: ret 4 */ FN_RET(0x007483ac); r_esp += 8; return;
L_007483e7:; BB(0x007483e7);
    /* 007483e7: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 007483ea: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 007483ed: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 007483f1: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007483f4: jne 0x7483fa */ if (!fZ) goto L_007483fa;
L_007483f6:; BB(0x007483f6);
    /* 007483f6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007483f7: ret 4 */ FN_RET(0x007483ac); r_esp += 8; return;
L_007483fa:; BB(0x007483fa);
    /* 007483fa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007483fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007483fd: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00748401: call 0x7120ec */ r_esp -= 4; W32(r_esp, 0x748406u); f_007120ec();
    /* 00748406: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00748409:; BB(0x00748409);
    /* 00748409: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074840a: ret 4 */ FN_RET(0x007483ac); r_esp += 8; return;
}

void f_00748410(void) /* sub_748410 */
{
    FN_ENTER(0x00748410);
    /* 00748410: mov dword ptr [0xa9aabc], 0x3f800000 */ W32((u32)(0xa9aabcu), 0x3f800000u);
    /* 0074841a: mov dword ptr [0xa9aac0], 0x41000000 */ W32((u32)(0xa9aac0u), 0x41000000u);
    /* 00748424: mov dword ptr [0xa9aac4], 0x3fc00000 */ W32((u32)(0xa9aac4u), 0x3fc00000u);
    /* 0074842e: ret  */ FN_RET(0x00748410); r_esp += 4; return;
}

void f_00748430(void) /* sub_748430 */
{
    FN_ENTER(0x00748430);
    /* 00748430: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00748431: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00748432: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00748433: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00748435: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00748437: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x74843cu); f_00736578();
    /* 0074843c: mov edx, dword ptr [ebp + 0x9c] */ r_edx = R32((u32)(r_ebp+0x9cu));
    /* 00748442: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 00748445: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00748448: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0074844a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0074844c: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0074844e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00748450: mov esi, eax */ r_esi = r_eax;
    /* 00748452: mov edi, edx */ r_edi = r_edx;
L_00748454:; BB(0x00748454);
    /* 00748454: cmp edi, dword ptr [ebp + 0xa8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0074845a: jge 0x7484ca */ if ((fS==fO)) goto L_007484ca;
L_0074845c:; BB(0x0074845c);
    /* 0074845c: mov eax, dword ptr [ebp + 0xa0] */ r_eax = R32((u32)(r_ebp+0xa0u));
    /* 00748462: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748464: je 0x748511 */ if (fZ) goto L_00748511;
L_0074846a:; BB(0x0074846a);
    /* 0074846a: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 0074846d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0074846f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00748471: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00748474: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00748476: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00748478: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0074847a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0074847c: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0074847e: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00748480:; BB(0x00748480);
    /* 00748480: movzx edx, byte ptr [eax + 0x104] */ r_edx = (u32)R8((u32)(r_eax+0x104u));
    /* 00748487: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074848a: je 0x7484ca */ if (fZ) goto L_007484ca;
L_0074848c:; BB(0x0074848c);
    /* 0074848c: lea edx, [eax + 4] */ r_edx = (u32)(r_eax+0x4u);
    /* 0074848f: movzx eax, word ptr [eax + 4] */ r_eax = (u32)R16((u32)(r_eax+0x4u));
    /* 00748493: mov ecx, edx */ r_ecx = r_edx;
    /* 00748495: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748497: je 0x7484b4 */ if (fZ) goto L_007484b4;
L_00748499:; BB(0x00748499);
    /* 00748499: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
L_0074849c:; BB(0x0074849c);
    /* 0074849c: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074849f: jne 0x7484a9 */ if (!fZ) goto L_007484a9;
L_007484a1:; BB(0x007484a1);
    /* 007484a1: mov eax, 0x20 */ r_eax = 0x20u;
    /* 007484a6: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
L_007484a9:; BB(0x007484a9);
    /* 007484a9: movzx eax, word ptr [ecx + 2] */ r_eax = (u32)R16((u32)(r_ecx+0x2u));
    /* 007484ad: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007484b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007484b2: jne 0x74849c */ if (!fZ) goto L_0074849c;
L_007484b4:; BB(0x007484b4);
    /* 007484b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007484b5: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007484b7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007484b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007484ba: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7484bfu); f_00735c90();
    /* 007484bf: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007484c2: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007484c5: cmp esi, 7 */ {  u32 a = r_esi; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007484c8: jl 0x748454 */ if ((fS!=fO)) goto L_00748454;
L_007484ca:; BB(0x007484ca);
    /* 007484ca: movsx eax, word ptr [ebp + 0x86] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x86u));
    /* 007484d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007484d3: jle 0x7484d9 */ if ((fZ||fS!=fO)) goto L_007484d9;
L_007484d5:; BB(0x007484d5);
    /* 007484d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007484d6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007484d7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007484d8: ret  */ FN_RET(0x00748430); r_esp += 4; return;
L_007484d9:; BB(0x007484d9);
    /* 007484d9: movsx edx, byte ptr [ebp + 0xac] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xacu));
    /* 007484e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007484e2: jne 0x7484f1 */ if (!fZ) goto L_007484f1;
L_007484e4:; BB(0x007484e4);
    /* 007484e4: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 007484e9: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7484eeu); f_0079317c();
    /* 007484ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007484ef: jmp 0x748501 */ goto L_00748501;
L_007484f1:; BB(0x007484f1);
    /* 007484f1: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007484f4: jne 0x748501 */ if (!fZ) goto L_00748501;
L_007484f6:; BB(0x007484f6);
    /* 007484f6: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 007484fb: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x748500u); f_0079317c();
    /* 00748500: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00748501:; BB(0x00748501);
    /* 00748501: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00748503: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00748505: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00748507: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748508: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x74850du); f_00735ee0();
    /* 0074850d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074850e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074850f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00748510: ret  */ FN_RET(0x00748430); r_esp += 4; return;
L_00748511:; BB(0x00748511);
    /* 00748511: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 00748517: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00748519: je 0x748539 */ if (fZ) goto L_00748539;
L_0074851b:; BB(0x0074851b);
    /* 0074851b: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 0074851e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00748520: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00748522: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00748524: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00748526: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00748528: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0074852a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0074852c: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0074852e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00748530: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00748532: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00748534: jmp 0x748480 */ goto L_00748480;
L_00748539:; BB(0x00748539);
    /* 00748539: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074853a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074853b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074853c: ret  */ FN_RET(0x00748430); r_esp += 4; return;
}

void f_00748540(void) /* sub_748540 */
{
    FN_ENTER(0x00748540);
    /* 00748540: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00748541: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00748543: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00748545: call 0x748564 */ r_esp -= 4; W32(r_esp, 0x74854au); f_00748564();
    /* 0074854a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0074854e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00748550: jne 0x748556 */ if (!fZ) goto L_00748556;
L_00748552:; BB(0x00748552);
    /* 00748552: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00748553: ret 4 */ FN_RET(0x00748540); r_esp += 8; return;
L_00748556:; BB(0x00748556);
    /* 00748556: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00748557: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x74855cu); f_005c2f74();
    /* 0074855c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074855d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074855e: ret 4 */ FN_RET(0x00748540); r_esp += 8; return;
}

void f_00748564(void) /* sub_748564 */
{
    FN_ENTER(0x00748564);
    /* 00748564: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00748565: mov ebp, esp */ r_ebp = r_esp;
    /* 00748567: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00748569: push 0x8f2600 */ { u32 v = 0x8f2600u; r_esp -= 4; W32(r_esp, v); }
    /* 0074856e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00748574: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748575: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074857c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074857f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00748582: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00748585: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00748588: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0074858b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0074858e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00748595: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00748598: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0074859b: mov dword ptr [eax], 0xb41ac0 */ W32((u32)(r_eax), 0xb41ac0u);
    /* 007485a1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007485a3: je 0x7485b4 */ if (fZ) goto L_007485b4;
L_007485a5:; BB(0x007485a5);
    /* 007485a5: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7485aau); f_007127b0();
    /* 007485aa: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007485ad: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_007485b4:; BB(0x007485b4);
    /* 007485b4: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 007485b7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007485b9: je 0x7485ca */ if (fZ) goto L_007485ca;
L_007485bb:; BB(0x007485bb);
    /* 007485bb: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7485c0u); f_007127b0();
    /* 007485c0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007485c3: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_007485ca:; BB(0x007485ca);
    /* 007485ca: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 007485cd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007485cf: je 0x7485e0 */ if (fZ) goto L_007485e0;
L_007485d1:; BB(0x007485d1);
    /* 007485d1: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7485d6u); f_007127b0();
    /* 007485d6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007485d9: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
L_007485e0:; BB(0x007485e0);
    /* 007485e0: call 0x7917b8 */ r_esp -= 4; W32(r_esp, 0x7485e5u); f_007917b8();
    /* 007485e5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007485e8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007485eb: je 0x748630 */ if (fZ) goto L_00748630;
L_007485ed:; BB(0x007485ed);
    /* 007485ed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007485ef: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x7485f4u); f_00791748();
    /* 007485f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007485f5:; BB(0x007485f5);
    /* 007485f5: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007485f8: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 007485fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007485fd: je 0x748614 */ if (fZ) goto L_00748614;
L_007485ff:; BB(0x007485ff);
    /* 007485ff: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 00748605: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748607: je 0x748614 */ if (fZ) goto L_00748614;
L_00748609:; BB(0x00748609);
    /* 00748609: push dword ptr [edx + 0x20] */ { u32 v = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074860c: call 0x7f2a64 */ r_esp -= 4; W32(r_esp, 0x748611u); f_007f2a64();
    /* 00748611: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
L_00748614:; BB(0x00748614);
    /* 00748614: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0074861b: mov ecx, edx */ r_ecx = r_edx;
    /* 0074861d: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x748622u); f_008171e8();
    /* 00748622: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00748625: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074862c: mov esp, ebp */ r_esp = r_ebp;
    /* 0074862e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074862f: ret  */ FN_RET(0x00748564); r_esp += 4; return;
L_00748630:; BB(0x00748630);
    /* 00748630: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00748632: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x748637u); f_00791748();
    /* 00748637: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00748638: jmp 0x7485f5 */ goto L_007485f5;
}

void f_0074863c(void) /* sub_74863C */
{
    FN_ENTER(0x0074863c);
    /* 0074863c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074863d: mov ebp, esp */ r_ebp = r_esp;
    /* 0074863f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00748641: push 0x8f2636 */ { u32 v = 0x8f2636u; r_esp -= 4; W32(r_esp, v); }
    /* 00748646: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0074864c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074864d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00748654: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00748657: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074865a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0074865d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00748660: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00748663: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00748666: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00748669: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0074866c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074866d: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00748670: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00748673: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x748678u); f_008193cc();
    /* 00748678: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074867f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00748682: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00748685: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00748688: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 0074868a: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 0074868d: mov dword ptr [ecx], 0xb41ac0 */ W32((u32)(r_ecx), 0xb41ac0u);
    /* 00748693: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 00748696: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0074869d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7486a2u); f_005caba4();
    /* 007486a2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007486a3: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 007486a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007486a8: je 0x748777 */ if (fZ) goto L_00748777;
L_007486ae:; BB(0x007486ae);
    /* 007486ae: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 007486b5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007486bc: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 007486bf: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 007486c2: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 007486c5: call 0x748d8c */ r_esp -= 4; W32(r_esp, 0x7486cau); f_00748d8c();
    /* 007486ca: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 007486cd: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_007486d4:; BB(0x007486d4);
    /* 007486d4: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 007486d7: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 007486da: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007486e1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007486e3: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 007486e6: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x7486ebu); f_007336fc();
    /* 007486eb: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 007486ee: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 007486f1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007486f2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007486f5: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x7486fau); f_00712624();
    /* 007486fa: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007486fc: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x748701u); f_0073ec50();
    /* 00748701: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00748704: push dword ptr [edx + 0x20] */ { u32 v = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00748707: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00748709: push 0x9734e4 */ { u32 v = 0x9734e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0074870e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074870f: call 0x73aa40 */ r_esp -= 4; W32(r_esp, 0x748714u); f_0073aa40();
    /* 00748714: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00748717: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074871a: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 0074871d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0074871f: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00748722: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x748727u); f_007336fc();
    /* 00748727: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0074872a: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0074872d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074872e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00748731: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x748736u); f_00712624();
    /* 00748736: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00748739: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074873c: push dword ptr [eax + 0x34] */ { u32 v = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074873f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x748744u); f_0061cdb0();
    /* 00748744: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00748747: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00748749: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074874b: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0074874e: mov word ptr [edx + 0x38], ax */ W16((u32)(r_edx+0x38u), (u16)r_eax);
    /* 00748752: mov word ptr [edx + 0x3a], ax */ W16((u32)(r_edx+0x3au), (u16)r_eax);
    /* 00748756: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 00748759: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0074875c: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x748761u); f_00791748();
    /* 00748761: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00748764: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00748767: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074876a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00748771: mov esp, ebp */ r_esp = r_ebp;
    /* 00748773: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00748774: ret 8 */ FN_RET(0x0074863c); r_esp += 12; return;
L_00748777:; BB(0x00748777);
    /* 00748777: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00748779: jmp 0x7486d4 */ goto L_007486d4;
}

void f_00748780(void) /* sub_748780 */
{
    FN_ENTER(0x00748780);
    /* 00748780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00748781: mov ebp, esp */ r_ebp = r_esp;
    /* 00748783: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00748785: push 0x8f265c */ { u32 v = 0x8f265cu; r_esp -= 4; W32(r_esp, v); }
    /* 0074878a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00748790: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748791: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00748798: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074879b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074879e: mov dword ptr [ebp - 0x38], edi */ W32((u32)(r_ebp+0xffffffc8u), r_edi);
    /* 007487a1: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 007487a4: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 007487a7: movzx eax, byte ptr [ecx + 0x1c] */ r_eax = (u32)R8((u32)(r_ecx+0x1cu));
    /* 007487ab: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 007487ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007487b0: jge 0x7487c9 */ if ((fS==fO)) goto L_007487c9;
L_007487b2:; BB(0x007487b2);
    /* 007487b2: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 007487b5: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 007487b8: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 007487bb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007487be: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007487c5: mov esp, ebp */ r_esp = r_ebp;
    /* 007487c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007487c8: ret  */ FN_RET(0x00748780); r_esp += 4; return;
L_007487c9:; BB(0x007487c9);
    /* 007487c9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007487cc: jg 0x748809 */ if ((!fZ&&fS==fO)) goto L_00748809;
L_007487ce:; BB(0x007487ce);
    /* 007487ce: mov eax, ecx */ r_eax = r_ecx;
    /* 007487d0: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 007487d3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007487d5: je 0x7487e6 */ if (fZ) goto L_007487e6;
L_007487d7:; BB(0x007487d7);
    /* 007487d7: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7487dcu); f_007127b0();
    /* 007487dc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007487df: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_007487e6:; BB(0x007487e6);
    /* 007487e6: mov esi, eax */ r_esi = r_eax;
    /* 007487e8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007487ea: mov edx, dword ptr [esi + 0x2c] */ r_edx = R32((u32)(r_esi+0x2cu));
    /* 007487ed: movzx eax, byte ptr [edx + 0x60] */ r_eax = (u32)R8((u32)(r_edx+0x60u));
    /* 007487f1: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 007487f4: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007487f9: mov byte ptr [edx + 0x60], al */ W8((u32)(r_edx+0x60u), (u8)r_eax);
    /* 007487fc: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x748801u); f_00760acc();
    /* 00748801: mov eax, esi */ r_eax = r_esi;
    /* 00748803: mov byte ptr [eax + 0x1c], 2 */ W8((u32)(r_eax+0x1cu), 0x2u);
    /* 00748807: jmp 0x74880e */ goto L_0074880e;
L_00748809:; BB(0x00748809);
    /* 00748809: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074880c: jne 0x74886e */ if (!fZ) goto L_0074886e;
L_0074880e:; BB(0x0074880e);
    /* 0074880e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00748811: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 00748814: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748815: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 00748818: call 0x749fd0 */ r_esp -= 4; W32(r_esp, 0x74881du); f_00749fd0();
    /* 0074881d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00748820: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 00748823: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748824: call 0x748b18 */ r_esp -= 4; W32(r_esp, 0x748829u); f_00748b18();
    /* 00748829: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074882c: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0074882f: movsx eax, byte ptr [edx + 0x60] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x60u));
    /* 00748833: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00748835: je 0x74885a */ if (fZ) goto L_0074885a;
L_00748837:; BB(0x00748837);
    /* 00748837: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074883a: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0074883d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0074883f: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x748842u); call_ind(t); }
    /* 00748842: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00748845: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00748848: mov byte ptr [eax + 0x1c], 5 */ W8((u32)(r_eax+0x1cu), 0x5u);
    /* 0074884c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074884f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00748856: mov esp, ebp */ r_esp = r_ebp;
    /* 00748858: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00748859: ret  */ FN_RET(0x00748780); r_esp += 4; return;
L_0074885a:; BB(0x0074885a);
    /* 0074885a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074885c: je 0x7487b2 */ if (fZ) goto L_007487b2;
L_00748862:; BB(0x00748862);
    /* 00748862: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00748865: mov byte ptr [eax + 0x1c], 3 */ W8((u32)(r_eax+0x1cu), 0x3u);
    /* 00748869: jmp 0x7487b2 */ goto L_007487b2;
L_0074886e:; BB(0x0074886e);
    /* 0074886e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748871: jne 0x7488ec */ if (!fZ) goto L_007488ec;
L_00748873:; BB(0x00748873);
    /* 00748873: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 0074887a: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 0074887f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x748884u); f_005caba4();
    /* 00748884: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00748887: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074888a: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0074888d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074888f: je 0x748ab4 */ if (fZ) goto L_00748ab4;
L_00748895:; BB(0x00748895);
    /* 00748895: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 0074889c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007488a3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007488a6: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 007488a9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007488ac: call 0x74a210 */ r_esp -= 4; W32(r_esp, 0x7488b1u); f_0074a210();
    /* 007488b1: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_007488b8:; BB(0x007488b8);
    /* 007488b8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007488bb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007488be: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 007488c1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007488c8: mov eax, edx */ r_eax = r_edx;
    /* 007488ca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007488cc: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 007488cf: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x7488d4u); f_007336fc();
    /* 007488d4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007488d7: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 007488da: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007488db: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007488de: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x7488e3u); f_00712624();
    /* 007488e3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007488e6: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 007488ea: jmp 0x7488f5 */ goto L_007488f5;
L_007488ec:; BB(0x007488ec);
    /* 007488ec: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007488ef: jne 0x7487b2 */ if (!fZ) goto L_007487b2;
L_007488f5:; BB(0x007488f5);
    /* 007488f5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007488f8: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 007488fb: call 0x74a948 */ r_esp -= 4; W32(r_esp, 0x748900u); f_0074a948();
    /* 00748900: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00748903: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748904: call 0x748b18 */ r_esp -= 4; W32(r_esp, 0x748909u); f_00748b18();
    /* 00748909: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074890c: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0074890f: movsx eax, byte ptr [ecx + 0x87] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x87u));
    /* 00748916: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00748918: je 0x74892d */ if (fZ) goto L_0074892d;
L_0074891a:; BB(0x0074891a);
    /* 0074891a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074891d: mov eax, 1 */ r_eax = 0x1u;
    /* 00748922: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00748925: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 00748928: jmp 0x7487b2 */ goto L_007487b2;
L_0074892d:; BB(0x0074892d);
    /* 0074892d: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074892f: jne 0x748a90 */ if (!fZ) goto L_00748a90;
L_00748935:; BB(0x00748935);
    /* 00748935: mov edi, 0x23 */ r_edi = 0x23u;
    /* 0074893a: mov esi, 4 */ r_esi = 0x4u;
L_0074893f:; BB(0x0074893f);
    /* 0074893f: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x748944u); f_00791b48();
    /* 00748944: mov edx, edi */ r_edx = r_edi;
    /* 00748946: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0074894c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074894d: mov ecx, eax */ r_ecx = r_eax;
    /* 0074894f: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x748954u); f_0078fd68();
    /* 00748954: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748956: je 0x7489da */ if (fZ) goto L_007489da;
L_0074895c:; BB(0x0074895c);
    /* 0074895c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074895f: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00748962: call 0x74a948 */ r_esp -= 4; W32(r_esp, 0x748967u); f_0074a948();
    /* 00748967: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0074896a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074896d: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00748970: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x748975u); f_0068d5a8();
    /* 00748975: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00748978: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074897b: mov ecx, eax */ r_ecx = r_eax;
    /* 0074897d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074897f: call 0x6893f0 */ r_esp -= 4; W32(r_esp, 0x748984u); f_006893f0();
    /* 00748984: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00748987: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748989: je 0x7489d0 */ if (fZ) goto L_007489d0;
L_0074898b:; BB(0x0074898b);
    /* 0074898b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074898d: je 0x7489d0 */ if (fZ) goto L_007489d0;
L_0074898f:; BB(0x0074898f);
    /* 0074898f: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00748992: movzx edx, byte ptr [eax + esi*4 + 4] */ r_edx = (u32)R8((u32)(r_eax+r_esi*4+0x4u));
    /* 00748997: movzx ebx, word ptr [ebx] */ r_ebx = (u32)R16((u32)(r_ebx));
    /* 0074899a: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 0074899d: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074899f: jne 0x7489ee */ if (!fZ) goto L_007489ee;
L_007489a1:; BB(0x007489a1);
    /* 007489a1: movzx ecx, byte ptr [eax + ecx*2 + 5] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx*2+0x5u));
    /* 007489a6: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 007489a9: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 007489ad: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007489af: jne 0x7489ee */ if (!fZ) goto L_007489ee;
L_007489b1:; BB(0x007489b1);
    /* 007489b1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 007489b4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007489b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007489b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007489b8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007489b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007489ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007489bb: call 0x68cde0 */ r_esp -= 4; W32(r_esp, 0x7489c0u); f_0068cde0();
    /* 007489c0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 007489c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007489c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007489c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007489c7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007489c8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007489ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007489cb: call 0x68cde0 */ r_esp -= 4; W32(r_esp, 0x7489d0u); f_0068cde0();
L_007489d0:; BB(0x007489d0);
    /* 007489d0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007489d3: mov dword ptr [eax + 0x24], 1 */ W32((u32)(r_eax+0x24u), 0x1u);
L_007489da:; BB(0x007489da);
    /* 007489da: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007489dd: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007489e0: cmp edi, 0x2c */ {  u32 a = r_edi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007489e3: jle 0x74893f */ if ((fZ||fS!=fO)) goto L_0074893f;
L_007489e9:; BB(0x007489e9);
    /* 007489e9: jmp 0x7487b2 */ goto L_007487b2;
L_007489ee:; BB(0x007489ee);
    /* 007489ee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007489f1: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 007489f4: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7489f9u); f_0068d5a8();
    /* 007489f9: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 007489fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007489ff: mov ecx, eax */ r_ecx = r_eax;
    /* 00748a01: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00748a03: call 0x6893f0 */ r_esp -= 4; W32(r_esp, 0x748a08u); f_006893f0();
    /* 00748a08: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00748a0b: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00748a0e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748a10: je 0x748af1 */ if (fZ) goto L_00748af1;
L_00748a16:; BB(0x00748a16);
    /* 00748a16: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00748a19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748a1b: je 0x748b03 */ if (fZ) goto L_00748b03;
L_00748a21:; BB(0x00748a21);
    /* 00748a21: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00748a24: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 00748a27: movzx ecx, word ptr [edx + 2] */ r_ecx = (u32)R16((u32)(r_edx+0x2u));
    /* 00748a2b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00748a2e: mov ebx, 4 */ r_ebx = 0x4u;
    /* 00748a33: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_00748a36:; BB(0x00748a36);
    /* 00748a36: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00748a39: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00748a3c: movzx edx, byte ptr [edx + ebx*4 + 4] */ r_edx = (u32)R8((u32)(r_edx+r_ebx*4+0x4u));
    /* 00748a41: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00748a44: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748a46: jne 0x748a86 */ if (!fZ) goto L_00748a86;
L_00748a48:; BB(0x00748a48);
    /* 00748a48: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00748a4b: movzx ecx, byte ptr [edx + eax*2 + 5] */ r_ecx = (u32)R8((u32)(r_edx+r_eax*2+0x5u));
    /* 00748a50: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00748a53: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748a55: jne 0x748a86 */ if (!fZ) goto L_00748a86;
L_00748a57:; BB(0x00748a57);
    /* 00748a57: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00748a5a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00748a5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748a5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748a5e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00748a5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748a60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748a61: call 0x68cde0 */ r_esp -= 4; W32(r_esp, 0x748a66u); f_0068cde0();
    /* 00748a66: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00748a69: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00748a6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748a6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748a6d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00748a6e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00748a70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748a71: call 0x68cde0 */ r_esp -= 4; W32(r_esp, 0x748a76u); f_0068cde0();
    /* 00748a76: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00748a79: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 00748a7c: movzx ecx, word ptr [edx + 2] */ r_ecx = (u32)R16((u32)(r_edx+0x2u));
    /* 00748a80: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00748a83: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_00748a86:; BB(0x00748a86);
    /* 00748a86: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00748a89: cmp ebx, 0xd */ {  u32 a = r_ebx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00748a8c: jle 0x748a36 */ if ((fZ||fS!=fO)) goto L_00748a36;
L_00748a8e:; BB(0x00748a8e);
    /* 00748a8e: jmp 0x748abe */ goto L_00748abe;
L_00748a90:; BB(0x00748a90);
    /* 00748a90: call 0x74a948 */ r_esp -= 4; W32(r_esp, 0x748a95u); f_0074a948();
    /* 00748a95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748a96: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00748a99: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00748a9c: call 0x749d98 */ r_esp -= 4; W32(r_esp, 0x748aa1u); f_00749d98();
    /* 00748aa1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00748aa4: mov eax, 1 */ r_eax = 0x1u;
    /* 00748aa9: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00748aac: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 00748aaf: jmp 0x7487b2 */ goto L_007487b2;
L_00748ab4:; BB(0x00748ab4);
    /* 00748ab4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00748ab6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00748ab9: jmp 0x7488b8 */ goto L_007488b8;
L_00748abe:; BB(0x00748abe);
    /* 00748abe: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00748ac1: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00748ac4: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00748ac7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748ac8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00748aca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00748acb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00748acc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00748acd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00748ace: call 0x68cde0 */ r_esp -= 4; W32(r_esp, 0x748ad3u); f_0068cde0();
    /* 00748ad3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00748ad6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00748ad9: movzx ebx, word ptr [eax] */ r_ebx = (u32)R16((u32)(r_eax));
    /* 00748adc: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 00748ae0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00748ae1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00748ae2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00748ae3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00748ae5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00748ae7: call 0x68cde0 */ r_esp -= 4; W32(r_esp, 0x748aecu); f_0068cde0();
    /* 00748aec: jmp 0x7489d0 */ goto L_007489d0;
L_00748af1:; BB(0x00748af1);
    /* 00748af1: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00748af4: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 00748af7: movzx ecx, word ptr [edx + 2] */ r_ecx = (u32)R16((u32)(r_edx+0x2u));
    /* 00748afb: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00748afe: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00748b01: jmp 0x748abe */ goto L_00748abe;
L_00748b03:; BB(0x00748b03);
    /* 00748b03: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00748b06: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 00748b09: movzx ecx, word ptr [edx + 2] */ r_ecx = (u32)R16((u32)(r_edx+0x2u));
    /* 00748b0d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00748b10: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00748b13: jmp 0x748abe */ goto L_00748abe;
}

void f_007487ae(void)
{
    FN_ENTER(0x007487ae);
    /* 007487ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007487b0: jge 0x7487c9 */ if ((fS==fO)) goto L_007487c9;
L_007487b2:; BB(0x007487b2);
    /* 007487b2: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 007487b5: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 007487b8: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 007487bb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007487be: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007487c5: mov esp, ebp */ r_esp = r_ebp;
    /* 007487c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007487c8: ret  */ FN_RET(0x007487ae); r_esp += 4; return;
L_007487c9:; BB(0x007487c9);
    /* 007487c9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007487cc: jg 0x748809 */ if ((!fZ&&fS==fO)) goto L_00748809;
L_007487ce:; BB(0x007487ce);
    /* 007487ce: mov eax, ecx */ r_eax = r_ecx;
    /* 007487d0: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 007487d3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007487d5: je 0x7487e6 */ if (fZ) goto L_007487e6;
L_007487d7:; BB(0x007487d7);
    /* 007487d7: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7487dcu); f_007127b0();
    /* 007487dc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007487df: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_007487e6:; BB(0x007487e6);
    /* 007487e6: mov esi, eax */ r_esi = r_eax;
    /* 007487e8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007487ea: mov edx, dword ptr [esi + 0x2c] */ r_edx = R32((u32)(r_esi+0x2cu));
    /* 007487ed: movzx eax, byte ptr [edx + 0x60] */ r_eax = (u32)R8((u32)(r_edx+0x60u));
    /* 007487f1: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 007487f4: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007487f9: mov byte ptr [edx + 0x60], al */ W8((u32)(r_edx+0x60u), (u8)r_eax);
    /* 007487fc: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x748801u); f_00760acc();
    /* 00748801: mov eax, esi */ r_eax = r_esi;
    /* 00748803: mov byte ptr [eax + 0x1c], 2 */ W8((u32)(r_eax+0x1cu), 0x2u);
    /* 00748807: jmp 0x74880e */ goto L_0074880e;
L_00748809:; BB(0x00748809);
    /* 00748809: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074880c: jne 0x74886e */ if (!fZ) goto L_0074886e;
L_0074880e:; BB(0x0074880e);
    /* 0074880e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00748811: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 00748814: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748815: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 00748818: call 0x749fd0 */ r_esp -= 4; W32(r_esp, 0x74881du); f_00749fd0();
    /* 0074881d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00748820: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 00748823: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748824: call 0x748b18 */ r_esp -= 4; W32(r_esp, 0x748829u); f_00748b18();
    /* 00748829: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074882c: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0074882f: movsx eax, byte ptr [edx + 0x60] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x60u));
    /* 00748833: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00748835: je 0x74885a */ if (fZ) goto L_0074885a;
L_00748837:; BB(0x00748837);
    /* 00748837: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074883a: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0074883d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0074883f: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x748842u); call_ind(t); }
    /* 00748842: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00748845: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00748848: mov byte ptr [eax + 0x1c], 5 */ W8((u32)(r_eax+0x1cu), 0x5u);
    /* 0074884c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074884f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00748856: mov esp, ebp */ r_esp = r_ebp;
    /* 00748858: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00748859: ret  */ FN_RET(0x007487ae); r_esp += 4; return;
L_0074885a:; BB(0x0074885a);
    /* 0074885a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074885c: je 0x7487b2 */ if (fZ) goto L_007487b2;
L_00748862:; BB(0x00748862);
    /* 00748862: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00748865: mov byte ptr [eax + 0x1c], 3 */ W8((u32)(r_eax+0x1cu), 0x3u);
    /* 00748869: jmp 0x7487b2 */ goto L_007487b2;
L_0074886e:; BB(0x0074886e);
    /* 0074886e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748871: jne 0x7488ec */ if (!fZ) goto L_007488ec;
L_00748873:; BB(0x00748873);
    /* 00748873: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 0074887a: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 0074887f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x748884u); f_005caba4();
    /* 00748884: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00748887: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074888a: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0074888d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074888f: je 0x748ab4 */ if (fZ) goto L_00748ab4;
L_00748895:; BB(0x00748895);
    /* 00748895: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 0074889c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007488a3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007488a6: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 007488a9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007488ac: call 0x74a210 */ r_esp -= 4; W32(r_esp, 0x7488b1u); f_0074a210();
    /* 007488b1: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_007488b8:; BB(0x007488b8);
    /* 007488b8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007488bb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007488be: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 007488c1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007488c8: mov eax, edx */ r_eax = r_edx;
    /* 007488ca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007488cc: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 007488cf: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x7488d4u); f_007336fc();
    /* 007488d4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007488d7: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 007488da: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007488db: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007488de: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x7488e3u); f_00712624();
    /* 007488e3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007488e6: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 007488ea: jmp 0x7488f5 */ goto L_007488f5;
L_007488ec:; BB(0x007488ec);
    /* 007488ec: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007488ef: jne 0x7487b2 */ if (!fZ) goto L_007487b2;
L_007488f5:; BB(0x007488f5);
    /* 007488f5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007488f8: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 007488fb: call 0x74a948 */ r_esp -= 4; W32(r_esp, 0x748900u); f_0074a948();
    /* 00748900: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00748903: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748904: call 0x748b18 */ r_esp -= 4; W32(r_esp, 0x748909u); f_00748b18();
    /* 00748909: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074890c: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0074890f: movsx eax, byte ptr [ecx + 0x87] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x87u));
    /* 00748916: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00748918: je 0x74892d */ if (fZ) goto L_0074892d;
L_0074891a:; BB(0x0074891a);
    /* 0074891a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074891d: mov eax, 1 */ r_eax = 0x1u;
    /* 00748922: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00748925: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 00748928: jmp 0x7487b2 */ goto L_007487b2;
L_0074892d:; BB(0x0074892d);
    /* 0074892d: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074892f: jne 0x748a90 */ if (!fZ) goto L_00748a90;
L_00748935:; BB(0x00748935);
    /* 00748935: mov edi, 0x23 */ r_edi = 0x23u;
    /* 0074893a: mov esi, 4 */ r_esi = 0x4u;
L_0074893f:; BB(0x0074893f);
    /* 0074893f: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x748944u); f_00791b48();
    /* 00748944: mov edx, edi */ r_edx = r_edi;
    /* 00748946: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0074894c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074894d: mov ecx, eax */ r_ecx = r_eax;
    /* 0074894f: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x748954u); f_0078fd68();
    /* 00748954: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748956: je 0x7489da */ if (fZ) goto L_007489da;
L_0074895c:; BB(0x0074895c);
    /* 0074895c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074895f: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00748962: call 0x74a948 */ r_esp -= 4; W32(r_esp, 0x748967u); f_0074a948();
    /* 00748967: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0074896a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074896d: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00748970: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x748975u); f_0068d5a8();
    /* 00748975: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00748978: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074897b: mov ecx, eax */ r_ecx = r_eax;
    /* 0074897d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074897f: call 0x6893f0 */ r_esp -= 4; W32(r_esp, 0x748984u); f_006893f0();
    /* 00748984: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00748987: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748989: je 0x7489d0 */ if (fZ) goto L_007489d0;
L_0074898b:; BB(0x0074898b);
    /* 0074898b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074898d: je 0x7489d0 */ if (fZ) goto L_007489d0;
L_0074898f:; BB(0x0074898f);
    /* 0074898f: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00748992: movzx edx, byte ptr [eax + esi*4 + 4] */ r_edx = (u32)R8((u32)(r_eax+r_esi*4+0x4u));
    /* 00748997: movzx ebx, word ptr [ebx] */ r_ebx = (u32)R16((u32)(r_ebx));
    /* 0074899a: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 0074899d: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074899f: jne 0x7489ee */ if (!fZ) goto L_007489ee;
L_007489a1:; BB(0x007489a1);
    /* 007489a1: movzx ecx, byte ptr [eax + ecx*2 + 5] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx*2+0x5u));
    /* 007489a6: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 007489a9: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 007489ad: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007489af: jne 0x7489ee */ if (!fZ) goto L_007489ee;
L_007489b1:; BB(0x007489b1);
    /* 007489b1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 007489b4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007489b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007489b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007489b8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007489b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007489ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007489bb: call 0x68cde0 */ r_esp -= 4; W32(r_esp, 0x7489c0u); f_0068cde0();
    /* 007489c0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 007489c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007489c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007489c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007489c7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007489c8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007489ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007489cb: call 0x68cde0 */ r_esp -= 4; W32(r_esp, 0x7489d0u); f_0068cde0();
L_007489d0:; BB(0x007489d0);
    /* 007489d0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007489d3: mov dword ptr [eax + 0x24], 1 */ W32((u32)(r_eax+0x24u), 0x1u);
L_007489da:; BB(0x007489da);
    /* 007489da: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007489dd: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007489e0: cmp edi, 0x2c */ {  u32 a = r_edi; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007489e3: jle 0x74893f */ if ((fZ||fS!=fO)) goto L_0074893f;
L_007489e9:; BB(0x007489e9);
    /* 007489e9: jmp 0x7487b2 */ goto L_007487b2;
L_007489ee:; BB(0x007489ee);
    /* 007489ee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007489f1: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 007489f4: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7489f9u); f_0068d5a8();
    /* 007489f9: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 007489fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007489ff: mov ecx, eax */ r_ecx = r_eax;
    /* 00748a01: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00748a03: call 0x6893f0 */ r_esp -= 4; W32(r_esp, 0x748a08u); f_006893f0();
    /* 00748a08: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00748a0b: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00748a0e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748a10: je 0x748af1 */ if (fZ) goto L_00748af1;
L_00748a16:; BB(0x00748a16);
    /* 00748a16: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00748a19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748a1b: je 0x748b03 */ if (fZ) goto L_00748b03;
L_00748a21:; BB(0x00748a21);
    /* 00748a21: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00748a24: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 00748a27: movzx ecx, word ptr [edx + 2] */ r_ecx = (u32)R16((u32)(r_edx+0x2u));
    /* 00748a2b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00748a2e: mov ebx, 4 */ r_ebx = 0x4u;
    /* 00748a33: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_00748a36:; BB(0x00748a36);
    /* 00748a36: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00748a39: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00748a3c: movzx edx, byte ptr [edx + ebx*4 + 4] */ r_edx = (u32)R8((u32)(r_edx+r_ebx*4+0x4u));
    /* 00748a41: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00748a44: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748a46: jne 0x748a86 */ if (!fZ) goto L_00748a86;
L_00748a48:; BB(0x00748a48);
    /* 00748a48: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00748a4b: movzx ecx, byte ptr [edx + eax*2 + 5] */ r_ecx = (u32)R8((u32)(r_edx+r_eax*2+0x5u));
    /* 00748a50: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00748a53: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748a55: jne 0x748a86 */ if (!fZ) goto L_00748a86;
L_00748a57:; BB(0x00748a57);
    /* 00748a57: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00748a5a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00748a5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748a5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748a5e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00748a5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748a60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748a61: call 0x68cde0 */ r_esp -= 4; W32(r_esp, 0x748a66u); f_0068cde0();
    /* 00748a66: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00748a69: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00748a6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748a6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748a6d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00748a6e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00748a70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748a71: call 0x68cde0 */ r_esp -= 4; W32(r_esp, 0x748a76u); f_0068cde0();
    /* 00748a76: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00748a79: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 00748a7c: movzx ecx, word ptr [edx + 2] */ r_ecx = (u32)R16((u32)(r_edx+0x2u));
    /* 00748a80: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00748a83: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_00748a86:; BB(0x00748a86);
    /* 00748a86: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00748a89: cmp ebx, 0xd */ {  u32 a = r_ebx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00748a8c: jle 0x748a36 */ if ((fZ||fS!=fO)) goto L_00748a36;
L_00748a8e:; BB(0x00748a8e);
    /* 00748a8e: jmp 0x748abe */ goto L_00748abe;
L_00748a90:; BB(0x00748a90);
    /* 00748a90: call 0x74a948 */ r_esp -= 4; W32(r_esp, 0x748a95u); f_0074a948();
    /* 00748a95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748a96: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00748a99: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00748a9c: call 0x749d98 */ r_esp -= 4; W32(r_esp, 0x748aa1u); f_00749d98();
    /* 00748aa1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00748aa4: mov eax, 1 */ r_eax = 0x1u;
    /* 00748aa9: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00748aac: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 00748aaf: jmp 0x7487b2 */ goto L_007487b2;
L_00748ab4:; BB(0x00748ab4);
    /* 00748ab4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00748ab6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00748ab9: jmp 0x7488b8 */ goto L_007488b8;
L_00748abe:; BB(0x00748abe);
    /* 00748abe: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00748ac1: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00748ac4: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00748ac7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748ac8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00748aca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00748acb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00748acc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00748acd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00748ace: call 0x68cde0 */ r_esp -= 4; W32(r_esp, 0x748ad3u); f_0068cde0();
    /* 00748ad3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00748ad6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00748ad9: movzx ebx, word ptr [eax] */ r_ebx = (u32)R16((u32)(r_eax));
    /* 00748adc: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 00748ae0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00748ae1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00748ae2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00748ae3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00748ae5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00748ae7: call 0x68cde0 */ r_esp -= 4; W32(r_esp, 0x748aecu); f_0068cde0();
    /* 00748aec: jmp 0x7489d0 */ goto L_007489d0;
L_00748af1:; BB(0x00748af1);
    /* 00748af1: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00748af4: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 00748af7: movzx ecx, word ptr [edx + 2] */ r_ecx = (u32)R16((u32)(r_edx+0x2u));
    /* 00748afb: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00748afe: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00748b01: jmp 0x748abe */ goto L_00748abe;
L_00748b03:; BB(0x00748b03);
    /* 00748b03: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00748b06: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 00748b09: movzx ecx, word ptr [edx + 2] */ r_ecx = (u32)R16((u32)(r_edx+0x2u));
    /* 00748b0d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00748b10: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00748b13: jmp 0x748abe */ goto L_00748abe;
}

void f_00748b18(void) /* sub_748B18 */
{
    FN_ENTER(0x00748b18);
    /* 00748b18: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00748b19: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00748b1a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00748b1b: mov esi, ecx */ r_esi = r_ecx;
    /* 00748b1d: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00748b21: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00748b24: push dword ptr [esi + 0x34] */ { u32 v = R32((u32)(r_esi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00748b27: call 0x71ba28 */ r_esp -= 4; W32(r_esp, 0x748b2cu); f_0071ba28();
    /* 00748b2c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00748b2f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00748b31: je 0x748bd7 */ if (fZ) goto L_00748bd7;
L_00748b37:; BB(0x00748b37);
    /* 00748b37: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00748b3a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x748b3fu); f_0068d5a8();
    /* 00748b3f: mov edi, eax */ r_edi = r_eax;
    /* 00748b41: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00748b44: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00748b46: je 0x748bd7 */ if (fZ) goto L_00748bd7;
L_00748b4c:; BB(0x00748b4c);
    /* 00748b4c: movzx edx, word ptr [esi + 0x3a] */ r_edx = (u32)R16((u32)(r_esi+0x3au));
    /* 00748b50: movzx eax, word ptr [ebp + 2] */ r_eax = (u32)R16((u32)(r_ebp+0x2u));
    /* 00748b54: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748b56: jne 0x748cd7 */ if (!fZ) goto L_00748cd7;
L_00748b5c:; BB(0x00748b5c);
    /* 00748b5c: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 00748b60: movzx edx, word ptr [esi + 0x38] */ r_edx = (u32)R16((u32)(r_esi+0x38u));
    /* 00748b64: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00748b66: jne 0x748b6e */ if (!fZ) goto L_00748b6e;
L_00748b68:; BB(0x00748b68);
    /* 00748b68: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00748b69: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00748b6a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00748b6b: ret 4 */ FN_RET(0x00748b18); r_esp += 8; return;
L_00748b6e:; BB(0x00748b6e);
    /* 00748b6e: mov word ptr [esi + 0x38], ax */ W16((u32)(r_esi+0x38u), (u16)r_eax);
    /* 00748b72: movzx edx, word ptr [ebp + 2] */ r_edx = (u32)R16((u32)(r_ebp+0x2u));
    /* 00748b76: mov word ptr [esi + 0x3a], dx */ W16((u32)(r_esi+0x3au), (u16)r_edx);
    /* 00748b7a: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x748b7fu); f_00816d30();
    /* 00748b7f: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00748b83: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748b85: je 0x748bc5 */ if (fZ) goto L_00748bc5;
L_00748b87:; BB(0x00748b87);
    /* 00748b87: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748b8a: je 0x748c8a */ if (fZ) goto L_00748c8a;
L_00748b90:; BB(0x00748b90);
    /* 00748b90: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748b93: je 0x748bdd */ if (fZ) goto L_00748bdd;
L_00748b95:; BB(0x00748b95);
    /* 00748b95: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748b98: jne 0x748bc5 */ if (!fZ) goto L_00748bc5;
L_00748b9a:; BB(0x00748b9a);
    /* 00748b9a: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00748b9d: movzx eax, word ptr [ebp + 2] */ r_eax = (u32)R16((u32)(r_ebp+0x2u));
    /* 00748ba1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748ba2: call 0x70fee8 */ r_esp -= 4; W32(r_esp, 0x748ba7u); f_0070fee8();
    /* 00748ba7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00748baa: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748bad: je 0x748bc5 */ if (fZ) goto L_00748bc5;
L_00748baf:; BB(0x00748baf);
    /* 00748baf: movzx eax, word ptr [ebp + 2] */ r_eax = (u32)R16((u32)(r_ebp+0x2u));
    /* 00748bb3: add eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00748bb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748bb7: call 0x7930b4 */ r_esp -= 4; W32(r_esp, 0x748bbcu); f_007930b4();
    /* 00748bbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748bbd: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x748bc2u); f_00816cb8();
    /* 00748bc2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00748bc5:; BB(0x00748bc5);
    /* 00748bc5: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 00748bca: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 00748bcf: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 00748bd2: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x748bd7u); f_0073ae38();
L_00748bd7:; BB(0x00748bd7);
    /* 00748bd7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00748bd8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00748bd9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00748bda: ret 4 */ FN_RET(0x00748b18); r_esp += 8; return;
L_00748bdd:; BB(0x00748bdd);
    /* 00748bdd: movsx edx, word ptr [ebp + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 00748be1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00748be2: add edi, 0x460 */ {  u32 a = r_edi; u32 b = 0x460u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00748be8: mov ecx, edi */ r_ecx = r_edi;
    /* 00748bea: call 0x6ad158 */ r_esp -= 4; W32(r_esp, 0x748befu); f_006ad158();
    /* 00748bef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748bf1: jne 0x748bc5 */ if (!fZ) goto L_00748bc5;
L_00748bf3:; BB(0x00748bf3);
    /* 00748bf3: movsx edx, word ptr [ebp + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 00748bf7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00748bf8: mov ecx, edi */ r_ecx = r_edi;
    /* 00748bfa: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x748bffu); f_006ad17c();
    /* 00748bff: movzx edx, word ptr [ebp + 2] */ r_edx = (u32)R16((u32)(r_ebp+0x2u));
    /* 00748c03: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00748c04: movzx edi, al */ r_edi = (u32)(u8)r_eax;
    /* 00748c07: call 0x793000 */ r_esp -= 4; W32(r_esp, 0x748c0cu); f_00793000();
    /* 00748c0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748c0d: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x748c12u); f_00816cb8();
    /* 00748c12: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00748c15: movzx edx, word ptr [ebp + 2] */ r_edx = (u32)R16((u32)(r_ebp+0x2u));
    /* 00748c19: cmp edx, 0x11 */ {  u32 a = r_edx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748c1c: je 0x748c4b */ if (fZ) goto L_00748c4b;
L_00748c1e:; BB(0x00748c1e);
    /* 00748c1e: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748c21: je 0x748c4b */ if (fZ) goto L_00748c4b;
L_00748c23:; BB(0x00748c23);
    /* 00748c23: mov edx, dword ptr [0xa9cd44] */ r_edx = R32((u32)(0xa9cd44u));
    /* 00748c29: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748c2b: je 0x748c32 */ if (fZ) goto L_00748c32;
L_00748c2d:; BB(0x00748c2d);
    /* 00748c2d: call 0x816994 */ r_esp -= 4; W32(r_esp, 0x748c32u); f_00816994();
L_00748c32:; BB(0x00748c32);
    /* 00748c32: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 00748c34: call 0x7930b4 */ r_esp -= 4; W32(r_esp, 0x748c39u); f_007930b4();
    /* 00748c39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748c3a: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x748c3fu); f_00816cb8();
    /* 00748c3f: lea edx, [edi + 1] */ r_edx = (u32)(r_edi+0x1u);
    /* 00748c42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00748c43: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x748c48u); f_00815f24();
    /* 00748c48: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00748c4b:; BB(0x00748c4b);
    /* 00748c4b: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 00748c4d: call 0x7930b4 */ r_esp -= 4; W32(r_esp, 0x748c52u); f_007930b4();
    /* 00748c52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748c53: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x748c58u); f_00816cb8();
    /* 00748c58: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00748c5d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00748c5e: movzx edx, word ptr [ebp + 2] */ r_edx = (u32)R16((u32)(r_ebp+0x2u));
    /* 00748c62: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00748c63: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x748c68u); f_006ded14();
    /* 00748c68: movsx eax, word ptr [eax + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x10u));
    /* 00748c6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748c6d: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x748c72u); f_00815f24();
    /* 00748c72: movzx eax, word ptr [ebp + 2] */ r_eax = (u32)R16((u32)(r_ebp+0x2u));
    /* 00748c76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748c77: call 0x7930b4 */ r_esp -= 4; W32(r_esp, 0x748c7cu); f_007930b4();
    /* 00748c7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748c7d: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x748c82u); f_00816cb8();
    /* 00748c82: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00748c85: jmp 0x748bc5 */ goto L_00748bc5;
L_00748c8a:; BB(0x00748c8a);
    /* 00748c8a: movzx edx, word ptr [ebp + 2] */ r_edx = (u32)R16((u32)(r_ebp+0x2u));
    /* 00748c8e: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748c91: je 0x748caa */ if (fZ) goto L_00748caa;
L_00748c93:; BB(0x00748c93);
    /* 00748c93: add edx, 0x13 */ {  u32 a = r_edx; u32 b = 0x13u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00748c96: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00748c97: call 0x7930b4 */ r_esp -= 4; W32(r_esp, 0x748c9cu); f_007930b4();
    /* 00748c9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748c9d: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x748ca2u); f_00816cb8();
    /* 00748ca2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00748ca5: jmp 0x748bc5 */ goto L_00748bc5;
L_00748caa:; BB(0x00748caa);
    /* 00748caa: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00748cac: add edi, 0xdf8 */ {  u32 a = r_edi; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00748cb2: mov ecx, edi */ r_ecx = r_edi;
    /* 00748cb4: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x748cb9u); f_0069792c();
    /* 00748cb9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748cbb: je 0x748bc5 */ if (fZ) goto L_00748bc5;
L_00748cc1:; BB(0x00748cc1);
    /* 00748cc1: mov ecx, eax */ r_ecx = r_eax;
    /* 00748cc3: call 0x5e9534 */ r_esp -= 4; W32(r_esp, 0x748cc8u); f_005e9534();
    /* 00748cc8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748ccb: jne 0x748bc5 */ if (!fZ) goto L_00748bc5;
L_00748cd1:; BB(0x00748cd1);
    /* 00748cd1: movzx edx, word ptr [ebp + 2] */ r_edx = (u32)R16((u32)(r_ebp+0x2u));
    /* 00748cd5: jmp 0x748c93 */ goto L_00748c93;
L_00748cd7:; BB(0x00748cd7);
    /* 00748cd7: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 00748cdb: jmp 0x748b6e */ goto L_00748b6e;
}

void f_00748ce0(void) /* sub_748CE0 */
{
    FN_ENTER(0x00748ce0);
    /* 00748ce0: mov dword ptr [0xa9aacc], 0x3f800000 */ W32((u32)(0xa9aaccu), 0x3f800000u);
    /* 00748cea: mov dword ptr [0xa9aad0], 0x41000000 */ W32((u32)(0xa9aad0u), 0x41000000u);
    /* 00748cf4: mov dword ptr [0xa9aad4], 0x3fc00000 */ W32((u32)(0xa9aad4u), 0x3fc00000u);
    /* 00748cfe: ret  */ FN_RET(0x00748ce0); r_esp += 4; return;
}

void f_00748d00(void) /* sub_748D00 */
{
    FN_ENTER(0x00748d00);
    /* 00748d00: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00748d01: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00748d03: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00748d05: call 0x748d24 */ r_esp -= 4; W32(r_esp, 0x748d0au); f_00748d24();
    /* 00748d0a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00748d0e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00748d10: jne 0x748d16 */ if (!fZ) goto L_00748d16;
L_00748d12:; BB(0x00748d12);
    /* 00748d12: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00748d13: ret 4 */ FN_RET(0x00748d00); r_esp += 8; return;
L_00748d16:; BB(0x00748d16);
    /* 00748d16: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00748d17: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x748d1cu); f_005c2f74();
    /* 00748d1c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00748d1d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00748d1e: ret 4 */ FN_RET(0x00748d00); r_esp += 8; return;
}

void f_00748d24(void) /* sub_748D24 */
{
    FN_ENTER(0x00748d24);
    /* 00748d24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00748d25: mov ebp, esp */ r_ebp = r_esp;
    /* 00748d27: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00748d29: push 0x8f2678 */ { u32 v = 0x8f2678u; r_esp -= 4; W32(r_esp, v); }
    /* 00748d2e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00748d34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748d35: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00748d3c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00748d3f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00748d42: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00748d45: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00748d48: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00748d4b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00748d4e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00748d55: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00748d58: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00748d5b: mov dword ptr [eax], 0xb41b28 */ W32((u32)(r_eax), 0xb41b28u);
    /* 00748d61: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748d63: je 0x748d6f */ if (fZ) goto L_00748d6f;
L_00748d65:; BB(0x00748d65);
    /* 00748d65: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00748d67: call 0x728a10 */ r_esp -= 4; W32(r_esp, 0x748d6cu); f_00728a10();
    /* 00748d6c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_00748d6f:; BB(0x00748d6f);
    /* 00748d6f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00748d76: mov ecx, eax */ r_ecx = r_eax;
    /* 00748d78: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x748d7du); f_00710c28();
    /* 00748d7d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00748d80: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00748d87: mov esp, ebp */ r_esp = r_ebp;
    /* 00748d89: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00748d8a: ret  */ FN_RET(0x00748d24); r_esp += 4; return;
}

void f_00748d8c(void) /* sub_748D8C */
{
    FN_ENTER(0x00748d8c);
    /* 00748d8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00748d8d: mov ebp, esp */ r_ebp = r_esp;
    /* 00748d8f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00748d91: push 0x8f26ae */ { u32 v = 0x8f26aeu; r_esp -= 4; W32(r_esp, v); }
    /* 00748d96: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00748d9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748d9d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00748da4: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00748da7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00748daa: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00748dad: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00748db0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00748db3: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00748db6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00748db9: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00748dbb: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x748dc0u); f_0073ec50();
    /* 00748dc0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00748dc1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00748dc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748dc5: movsx edx, bx */ r_edx = (u32)(i32)(i16)(u16)r_ebx;
    /* 00748dc8: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00748dcb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00748dcc: push 0x9f3f34 */ { u32 v = 0x9f3f34u; r_esp -= 4; W32(r_esp, v); }
    /* 00748dd1: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x748dd6u); f_00710d30();
    /* 00748dd6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00748ddd: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00748de0: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00748de3: mov dword ptr [edx], 0xb41b28 */ W32((u32)(r_edx), 0xb41b28u);
    /* 00748de9: mov esi, dword ptr [0x9f3f30] */ r_esi = R32((u32)(0x9f3f30u));
    /* 00748def: mov dword ptr [edx + 0x68], 0xb300 */ W32((u32)(r_edx+0x68u), 0xb300u);
    /* 00748df6: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 00748df9: mov word ptr [edx + 0x20], di */ W16((u32)(r_edx+0x20u), (u16)r_edi);
    /* 00748dfd: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00748dff: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00748e01: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00748e04: mov byte ptr [edx + 0x60], cl */ W8((u32)(r_edx+0x60u), (u8)r_ecx);
    /* 00748e07: mov eax, 1 */ r_eax = 0x1u;
    /* 00748e0c: mov byte ptr [edx + 0x61], al */ W8((u32)(r_edx+0x61u), (u8)r_eax);
    /* 00748e0f: mov byte ptr [edx + 0x62], cl */ W8((u32)(r_edx+0x62u), (u8)r_ecx);
    /* 00748e12: mov byte ptr [edx + 0x63], cl */ W8((u32)(r_edx+0x63u), (u8)r_ecx);
    /* 00748e15: mov byte ptr [edx + 0x64], cl */ W8((u32)(r_edx+0x64u), (u8)r_ecx);
    /* 00748e18: mov byte ptr [edx + 0x65], al */ W8((u32)(r_edx+0x65u), (u8)r_eax);
    /* 00748e1b: mov word ptr [edx + 0x66], cx */ W16((u32)(r_edx+0x66u), (u16)r_ecx);
    /* 00748e1f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x748e24u); f_008581c5();
    /* 00748e24: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00748e25: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00748e28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748e2a: je 0x748e8b */ if (fZ) goto L_00748e8b;
L_00748e2c:; BB(0x00748e2c);
    /* 00748e2c: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00748e33: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00748e3a: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00748e3c: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x748e41u); f_0079317c();
    /* 00748e41: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00748e42: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00748e45: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00748e48: movsx ebx, word ptr [edx + 0x20] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x20u));
    /* 00748e4c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00748e4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748e4e: call 0x761320 */ r_esp -= 4; W32(r_esp, 0x748e53u); f_00761320();
    /* 00748e53: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00748e56: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00748e5d:; BB(0x00748e5d);
    /* 00748e5d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00748e60: mov dword ptr [ecx + 0x6c], eax */ W32((u32)(r_ecx+0x6cu), r_eax);
    /* 00748e63: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00748e6a: call 0x748e90 */ r_esp -= 4; W32(r_esp, 0x748e6fu); f_00748e90();
    /* 00748e6f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00748e72: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00748e75: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00748e78: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00748e7b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00748e7e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00748e85: mov esp, ebp */ r_esp = r_ebp;
    /* 00748e87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00748e88: ret 4 */ FN_RET(0x00748d8c); r_esp += 8; return;
L_00748e8b:; BB(0x00748e8b);
    /* 00748e8b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00748e8d: jmp 0x748e5d */ goto L_00748e5d;
}

void f_00748e90(void) /* sub_748E90 */
{
    FN_ENTER(0x00748e90);
    /* 00748e90: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00748e91: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00748e92: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00748e93: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00748e94: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00748e97: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00748e99: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 00748e9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748e9e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x748ea3u); f_0068d5a8();
    /* 00748ea3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00748ea4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748ea6: je 0x7491dd */ if (fZ) goto L_007491dd;
L_00748eac:; BB(0x00748eac);
    /* 00748eac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00748eae: mov ecx, eax */ r_ecx = r_eax;
    /* 00748eb0: call 0x6893f0 */ r_esp -= 4; W32(r_esp, 0x748eb5u); f_006893f0();
    /* 00748eb5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00748eb8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748eba: je 0x7491dd */ if (fZ) goto L_007491dd;
L_00748ec0:; BB(0x00748ec0);
    /* 00748ec0: movsx edx, byte ptr [ebx + 0x64] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x64u));
    /* 00748ec4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748ec6: jne 0x748ecd */ if (!fZ) goto L_00748ecd;
L_00748ec8:; BB(0x00748ec8);
    /* 00748ec8: lea eax, [eax + 4] */ r_eax = (u32)(r_eax+0x4u);
    /* 00748ecb: jmp 0x748ed0 */ goto L_00748ed0;
L_00748ecd:; BB(0x00748ecd);
    /* 00748ecd: lea eax, [eax + 0x3c] */ r_eax = (u32)(r_eax+0x3cu);
L_00748ed0:; BB(0x00748ed0);
    /* 00748ed0: movzx edi, byte ptr [eax + 8] */ r_edi = (u32)R8((u32)(r_eax+0x8u));
    /* 00748ed4: jne 0x748ede */ if (!fZ) goto L_00748ede;
L_00748ed6:; BB(0x00748ed6);
    /* 00748ed6: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00748ed9: lea eax, [eax + 4] */ r_eax = (u32)(r_eax+0x4u);
    /* 00748edc: jmp 0x748ee4 */ goto L_00748ee4;
L_00748ede:; BB(0x00748ede);
    /* 00748ede: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00748ee1: lea eax, [eax + 0x3c] */ r_eax = (u32)(r_eax+0x3cu);
L_00748ee4:; BB(0x00748ee4);
    /* 00748ee4: movzx esi, byte ptr [eax + 9] */ r_esi = (u32)R8((u32)(r_eax+0x9u));
    /* 00748ee8: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 00748eec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748eed: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x748ef2u); f_0068d5a8();
    /* 00748ef2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00748ef3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748ef5: je 0x748f40 */ if (fZ) goto L_00748f40;
L_00748ef7:; BB(0x00748ef7);
    /* 00748ef7: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 00748efa: mov ebp, dword ptr [edx + 0x28] */ r_ebp = R32((u32)(r_edx+0x28u));
    /* 00748efd: mov edx, dword ptr [edx + 0x34] */ r_edx = R32((u32)(r_edx+0x34u));
    /* 00748f00: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00748f04: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00748f05: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00748f06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748f07: call 0x6ab474 */ r_esp -= 4; W32(r_esp, 0x748f0cu); f_006ab474();
    /* 00748f0c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00748f0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748f11: je 0x748f1c */ if (fZ) goto L_00748f1c;
L_00748f13:; BB(0x00748f13);
    /* 00748f13: mov dword ptr [ebp + 0x2c], 0xffffffff */ W32((u32)(r_ebp+0x2cu), 0xffffffffu);
    /* 00748f1a: jmp 0x748f23 */ goto L_00748f23;
L_00748f1c:; BB(0x00748f1c);
    /* 00748f1c: mov dword ptr [ebp + 0x2c], 0xff404040 */ W32((u32)(r_ebp+0x2cu), 0xff404040u);
L_00748f23:; BB(0x00748f23);
    /* 00748f23: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00748f24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00748f25: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00748f26: call 0x70ff48 */ r_esp -= 4; W32(r_esp, 0x748f2bu); f_0070ff48();
    /* 00748f2b: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 00748f2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748f30: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00748f31: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00748f32: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00748f33: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00748f37: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00748f38: call 0x70fdd8 */ r_esp -= 4; W32(r_esp, 0x748f3du); f_0070fdd8();
    /* 00748f3d: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00748f40:; BB(0x00748f40);
    /* 00748f40: movsx edx, byte ptr [ebx + 0x64] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x64u));
    /* 00748f44: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748f46: jne 0x748f50 */ if (!fZ) goto L_00748f50;
L_00748f48:; BB(0x00748f48);
    /* 00748f48: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00748f4b: lea eax, [eax + 4] */ r_eax = (u32)(r_eax+0x4u);
    /* 00748f4e: jmp 0x748f56 */ goto L_00748f56;
L_00748f50:; BB(0x00748f50);
    /* 00748f50: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00748f53: lea eax, [eax + 0x3c] */ r_eax = (u32)(r_eax+0x3cu);
L_00748f56:; BB(0x00748f56);
    /* 00748f56: movzx edi, byte ptr [eax + 4] */ r_edi = (u32)R8((u32)(r_eax+0x4u));
    /* 00748f5a: jne 0x748f64 */ if (!fZ) goto L_00748f64;
L_00748f5c:; BB(0x00748f5c);
    /* 00748f5c: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00748f5f: lea eax, [eax + 4] */ r_eax = (u32)(r_eax+0x4u);
    /* 00748f62: jmp 0x748f6a */ goto L_00748f6a;
L_00748f64:; BB(0x00748f64);
    /* 00748f64: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00748f67: lea eax, [eax + 0x3c] */ r_eax = (u32)(r_eax+0x3cu);
L_00748f6a:; BB(0x00748f6a);
    /* 00748f6a: movzx esi, byte ptr [eax + 5] */ r_esi = (u32)R8((u32)(r_eax+0x5u));
    /* 00748f6e: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 00748f72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748f73: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x748f78u); f_0068d5a8();
    /* 00748f78: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00748f79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748f7b: je 0x748fc6 */ if (fZ) goto L_00748fc6;
L_00748f7d:; BB(0x00748f7d);
    /* 00748f7d: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 00748f80: mov ebp, dword ptr [edx + 0x24] */ r_ebp = R32((u32)(r_edx+0x24u));
    /* 00748f83: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 00748f86: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00748f8a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00748f8b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00748f8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748f8d: call 0x6ab474 */ r_esp -= 4; W32(r_esp, 0x748f92u); f_006ab474();
    /* 00748f92: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00748f95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748f97: je 0x748fa2 */ if (fZ) goto L_00748fa2;
L_00748f99:; BB(0x00748f99);
    /* 00748f99: mov dword ptr [ebp + 0x2c], 0xffffffff */ W32((u32)(r_ebp+0x2cu), 0xffffffffu);
    /* 00748fa0: jmp 0x748fa9 */ goto L_00748fa9;
L_00748fa2:; BB(0x00748fa2);
    /* 00748fa2: mov dword ptr [ebp + 0x2c], 0xff404040 */ W32((u32)(r_ebp+0x2cu), 0xff404040u);
L_00748fa9:; BB(0x00748fa9);
    /* 00748fa9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00748faa: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00748fab: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00748fac: call 0x70ff48 */ r_esp -= 4; W32(r_esp, 0x748fb1u); f_0070ff48();
    /* 00748fb1: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 00748fb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748fb6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00748fb7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00748fb8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00748fb9: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00748fbd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00748fbe: call 0x70fdd8 */ r_esp -= 4; W32(r_esp, 0x748fc3u); f_0070fdd8();
    /* 00748fc3: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00748fc6:; BB(0x00748fc6);
    /* 00748fc6: movsx edx, byte ptr [ebx + 0x64] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x64u));
    /* 00748fca: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00748fcc: jne 0x748fd6 */ if (!fZ) goto L_00748fd6;
L_00748fce:; BB(0x00748fce);
    /* 00748fce: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00748fd1: lea eax, [eax + 4] */ r_eax = (u32)(r_eax+0x4u);
    /* 00748fd4: jmp 0x748fdc */ goto L_00748fdc;
L_00748fd6:; BB(0x00748fd6);
    /* 00748fd6: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00748fd9: lea eax, [eax + 0x3c] */ r_eax = (u32)(r_eax+0x3cu);
L_00748fdc:; BB(0x00748fdc);
    /* 00748fdc: movzx edi, byte ptr [eax + 0xc] */ r_edi = (u32)R8((u32)(r_eax+0xcu));
    /* 00748fe0: jne 0x748fea */ if (!fZ) goto L_00748fea;
L_00748fe2:; BB(0x00748fe2);
    /* 00748fe2: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00748fe5: lea eax, [eax + 4] */ r_eax = (u32)(r_eax+0x4u);
    /* 00748fe8: jmp 0x748ff0 */ goto L_00748ff0;
L_00748fea:; BB(0x00748fea);
    /* 00748fea: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00748fed: lea eax, [eax + 0x3c] */ r_eax = (u32)(r_eax+0x3cu);
L_00748ff0:; BB(0x00748ff0);
    /* 00748ff0: movzx esi, byte ptr [eax + 0xd] */ r_esi = (u32)R8((u32)(r_eax+0xdu));
    /* 00748ff4: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 00748ff8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00748ff9: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x748ffeu); f_0068d5a8();
    /* 00748ffe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00748fff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00749001: je 0x74904c */ if (fZ) goto L_0074904c;
L_00749003:; BB(0x00749003);
    /* 00749003: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 00749006: mov ebp, dword ptr [edx + 0x2c] */ r_ebp = R32((u32)(r_edx+0x2cu));
    /* 00749009: mov edx, dword ptr [edx + 0x38] */ r_edx = R32((u32)(r_edx+0x38u));
    /* 0074900c: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00749010: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00749011: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00749012: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00749013: call 0x6ab474 */ r_esp -= 4; W32(r_esp, 0x749018u); f_006ab474();
    /* 00749018: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074901b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074901d: je 0x749028 */ if (fZ) goto L_00749028;
L_0074901f:; BB(0x0074901f);
    /* 0074901f: mov dword ptr [ebp + 0x2c], 0xffffffff */ W32((u32)(r_ebp+0x2cu), 0xffffffffu);
    /* 00749026: jmp 0x74902f */ goto L_0074902f;
L_00749028:; BB(0x00749028);
    /* 00749028: mov dword ptr [ebp + 0x2c], 0xff404040 */ W32((u32)(r_ebp+0x2cu), 0xff404040u);
L_0074902f:; BB(0x0074902f);
    /* 0074902f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00749030: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00749031: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00749032: call 0x70ff48 */ r_esp -= 4; W32(r_esp, 0x749037u); f_0070ff48();
    /* 00749037: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 0074903b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074903c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074903d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074903e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074903f: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00749043: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00749044: call 0x70fdd8 */ r_esp -= 4; W32(r_esp, 0x749049u); f_0070fdd8();
    /* 00749049: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0074904c:; BB(0x0074904c);
    /* 0074904c: movsx edx, byte ptr [ebx + 0x65] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x65u));
    /* 00749050: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00749052: jne 0x74905c */ if (!fZ) goto L_0074905c;
L_00749054:; BB(0x00749054);
    /* 00749054: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00749057: lea eax, [eax + 4] */ r_eax = (u32)(r_eax+0x4u);
    /* 0074905a: jmp 0x749062 */ goto L_00749062;
L_0074905c:; BB(0x0074905c);
    /* 0074905c: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0074905f: lea eax, [eax + 0x3c] */ r_eax = (u32)(r_eax+0x3cu);
L_00749062:; BB(0x00749062);
    /* 00749062: movzx edi, byte ptr [eax + 8] */ r_edi = (u32)R8((u32)(r_eax+0x8u));
    /* 00749066: jne 0x749070 */ if (!fZ) goto L_00749070;
L_00749068:; BB(0x00749068);
    /* 00749068: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0074906b: lea eax, [eax + 4] */ r_eax = (u32)(r_eax+0x4u);
    /* 0074906e: jmp 0x749076 */ goto L_00749076;
L_00749070:; BB(0x00749070);
    /* 00749070: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00749073: lea eax, [eax + 0x3c] */ r_eax = (u32)(r_eax+0x3cu);
L_00749076:; BB(0x00749076);
    /* 00749076: movzx esi, byte ptr [eax + 9] */ r_esi = (u32)R8((u32)(r_eax+0x9u));
    /* 0074907a: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 0074907e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074907f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x749084u); f_0068d5a8();
    /* 00749084: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00749085: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00749087: je 0x7490d2 */ if (fZ) goto L_007490d2;
L_00749089:; BB(0x00749089);
    /* 00749089: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 0074908c: mov ebp, dword ptr [edx + 8] */ r_ebp = R32((u32)(r_edx+0x8u));
    /* 0074908f: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 00749092: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00749096: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00749097: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00749098: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00749099: call 0x6ab474 */ r_esp -= 4; W32(r_esp, 0x74909eu); f_006ab474();
    /* 0074909e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007490a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007490a3: je 0x7490ae */ if (fZ) goto L_007490ae;
L_007490a5:; BB(0x007490a5);
    /* 007490a5: mov dword ptr [ebp + 0x2c], 0xffffffff */ W32((u32)(r_ebp+0x2cu), 0xffffffffu);
    /* 007490ac: jmp 0x7490b5 */ goto L_007490b5;
L_007490ae:; BB(0x007490ae);
    /* 007490ae: mov dword ptr [ebp + 0x2c], 0xff404040 */ W32((u32)(r_ebp+0x2cu), 0xff404040u);
L_007490b5:; BB(0x007490b5);
    /* 007490b5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007490b6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007490b7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007490b8: call 0x70ff48 */ r_esp -= 4; W32(r_esp, 0x7490bdu); f_0070ff48();
    /* 007490bd: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 007490c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007490c2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007490c3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007490c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007490c5: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 007490c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007490ca: call 0x70fdd8 */ r_esp -= 4; W32(r_esp, 0x7490cfu); f_0070fdd8();
    /* 007490cf: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007490d2:; BB(0x007490d2);
    /* 007490d2: movsx edx, byte ptr [ebx + 0x65] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x65u));
    /* 007490d6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007490d8: jne 0x7490e2 */ if (!fZ) goto L_007490e2;
L_007490da:; BB(0x007490da);
    /* 007490da: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 007490dd: lea eax, [eax + 4] */ r_eax = (u32)(r_eax+0x4u);
    /* 007490e0: jmp 0x7490e8 */ goto L_007490e8;
L_007490e2:; BB(0x007490e2);
    /* 007490e2: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 007490e5: lea eax, [eax + 0x3c] */ r_eax = (u32)(r_eax+0x3cu);
L_007490e8:; BB(0x007490e8);
    /* 007490e8: movzx edi, byte ptr [eax + 4] */ r_edi = (u32)R8((u32)(r_eax+0x4u));
    /* 007490ec: jne 0x7490f6 */ if (!fZ) goto L_007490f6;
L_007490ee:; BB(0x007490ee);
    /* 007490ee: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 007490f1: lea eax, [eax + 4] */ r_eax = (u32)(r_eax+0x4u);
    /* 007490f4: jmp 0x7490fc */ goto L_007490fc;
L_007490f6:; BB(0x007490f6);
    /* 007490f6: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 007490f9: lea eax, [eax + 0x3c] */ r_eax = (u32)(r_eax+0x3cu);
L_007490fc:; BB(0x007490fc);
    /* 007490fc: movzx esi, byte ptr [eax + 5] */ r_esi = (u32)R8((u32)(r_eax+0x5u));
    /* 00749100: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 00749104: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00749105: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x74910au); f_0068d5a8();
    /* 0074910a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074910b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074910d: je 0x749158 */ if (fZ) goto L_00749158;
L_0074910f:; BB(0x0074910f);
    /* 0074910f: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 00749112: mov ebp, dword ptr [edx + 4] */ r_ebp = R32((u32)(r_edx+0x4u));
    /* 00749115: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 00749118: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0074911c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074911d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074911e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074911f: call 0x6ab474 */ r_esp -= 4; W32(r_esp, 0x749124u); f_006ab474();
    /* 00749124: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00749127: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00749129: je 0x749134 */ if (fZ) goto L_00749134;
L_0074912b:; BB(0x0074912b);
    /* 0074912b: mov dword ptr [ebp + 0x2c], 0xffffffff */ W32((u32)(r_ebp+0x2cu), 0xffffffffu);
    /* 00749132: jmp 0x74913b */ goto L_0074913b;
L_00749134:; BB(0x00749134);
    /* 00749134: mov dword ptr [ebp + 0x2c], 0xff404040 */ W32((u32)(r_ebp+0x2cu), 0xff404040u);
L_0074913b:; BB(0x0074913b);
    /* 0074913b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074913c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074913d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074913e: call 0x70ff48 */ r_esp -= 4; W32(r_esp, 0x749143u); f_0070ff48();
    /* 00749143: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 00749147: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00749148: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00749149: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074914a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074914b: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0074914f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00749150: call 0x70fdd8 */ r_esp -= 4; W32(r_esp, 0x749155u); f_0070fdd8();
    /* 00749155: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00749158:; BB(0x00749158);
    /* 00749158: movsx edx, byte ptr [ebx + 0x65] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x65u));
    /* 0074915c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074915e: jne 0x749168 */ if (!fZ) goto L_00749168;
L_00749160:; BB(0x00749160);
    /* 00749160: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00749163: lea eax, [eax + 4] */ r_eax = (u32)(r_eax+0x4u);
    /* 00749166: jmp 0x74916e */ goto L_0074916e;
L_00749168:; BB(0x00749168);
    /* 00749168: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0074916b: lea eax, [eax + 0x3c] */ r_eax = (u32)(r_eax+0x3cu);
L_0074916e:; BB(0x0074916e);
    /* 0074916e: movzx edi, byte ptr [eax + 0xc] */ r_edi = (u32)R8((u32)(r_eax+0xcu));
    /* 00749172: jne 0x74917a */ if (!fZ) goto L_0074917a;
L_00749174:; BB(0x00749174);
    /* 00749174: add dword ptr [esp], 4 */ { u32 ad = (u32)(r_esp);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00749178: jmp 0x74917e */ goto L_0074917e;
L_0074917a:; BB(0x0074917a);
    /* 0074917a: add dword ptr [esp], 0x3c */ { u32 ad = (u32)(r_esp);  u32 a = R32(ad); u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0074917e:; BB(0x0074917e);
    /* 0074917e: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00749181: movzx esi, byte ptr [esi + 0xd] */ r_esi = (u32)R8((u32)(r_esi+0xdu));
    /* 00749185: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 00749189: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074918a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x74918fu); f_0068d5a8();
    /* 0074918f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00749190: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00749192: je 0x7491dd */ if (fZ) goto L_007491dd;
L_00749194:; BB(0x00749194);
    /* 00749194: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 00749197: mov ebp, dword ptr [edx + 0xc] */ r_ebp = R32((u32)(r_edx+0xcu));
    /* 0074919a: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 0074919d: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007491a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007491a2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007491a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007491a4: call 0x6ab474 */ r_esp -= 4; W32(r_esp, 0x7491a9u); f_006ab474();
    /* 007491a9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007491ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007491ae: je 0x7491b9 */ if (fZ) goto L_007491b9;
L_007491b0:; BB(0x007491b0);
    /* 007491b0: mov dword ptr [ebp + 0x2c], 0xffffffff */ W32((u32)(r_ebp+0x2cu), 0xffffffffu);
    /* 007491b7: jmp 0x7491c0 */ goto L_007491c0;
L_007491b9:; BB(0x007491b9);
    /* 007491b9: mov dword ptr [ebp + 0x2c], 0xff404040 */ W32((u32)(r_ebp+0x2cu), 0xff404040u);
L_007491c0:; BB(0x007491c0);
    /* 007491c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007491c1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007491c2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007491c3: call 0x70ff48 */ r_esp -= 4; W32(r_esp, 0x7491c8u); f_0070ff48();
    /* 007491c8: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 007491cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007491cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007491ce: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007491cf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007491d0: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 007491d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007491d5: call 0x70fdd8 */ r_esp -= 4; W32(r_esp, 0x7491dau); f_0070fdd8();
    /* 007491da: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007491dd:; BB(0x007491dd);
    /* 007491dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007491e0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007491e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007491e2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007491e3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007491e4: ret  */ FN_RET(0x00748e90); r_esp += 4; return;
}

