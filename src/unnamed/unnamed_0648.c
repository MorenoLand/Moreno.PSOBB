#include "protos.h"

void f_00648050(void) /* sub_648050 */
{
    FN_ENTER(0x00648050);
    /* 00648050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00648051: mov ebp, esp */ r_ebp = r_esp;
    /* 00648053: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00648055: push 0x8e5e7e */ { u32 v = 0x8e5e7eu; r_esp -= 4; W32(r_esp, v); }
    /* 0064805a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00648060: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00648061: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00648068: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064806b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064806e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00648071: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00648074: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00648077: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0064807a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064807d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00648080: mov dword ptr [ebp - 0x60], 0x41b40000 */ W32((u32)(r_ebp+0xffffffa0u), 0x41b40000u);
    /* 00648087: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064808a: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 0064808d: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x648092u); f_007b4b48();
    /* 00648092: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00648099: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064809c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0064809f: mov dword ptr [ecx], 0xb2fe28 */ W32((u32)(r_ecx), 0xb2fe28u);
    /* 006480a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006480a6: call dword ptr [0xb2fe3c] */ { u32 t = R32((u32)(0xb2fe3cu)); r_esp -= 4; W32(r_esp, 0x6480acu); call_ind(t); }
    /* 006480ac: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006480af: mov eax, dword ptr [0xa8f4bc] */ r_eax = R32((u32)(0xa8f4bcu));
    /* 006480b4: mov dword ptr [ecx + 0xac], 2 */ W32((u32)(r_ecx+0xacu), 0x2u);
    /* 006480be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006480c0: je 0x648129 */ if (fZ) goto L_00648129;
L_006480c2:; BB(0x006480c2);
    /* 006480c2: mov eax, dword ptr [0x935c40] */ r_eax = R32((u32)(0x935c40u));
    /* 006480c7: mov edx, dword ptr [0x935c44] */ r_edx = R32((u32)(0x935c44u));
    /* 006480cd: mov ebx, dword ptr [ebp - 0x60] */ r_ebx = R32((u32)(r_ebp+0xffffffa0u));
    /* 006480d0: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 006480d3: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 006480da: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 006480dd: mov dword ptr [ebp - 0x50], ebx */ W32((u32)(r_ebp+0xffffffb0u), r_ebx);
    /* 006480e0: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 006480e7: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 006480ee: lea esi, [ebp - 0x5c] */ r_esi = (u32)(r_ebp+0xffffffa4u);
    /* 006480f1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006480f3: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 006480fa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006480fb: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 00648102: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 00648109: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00648110: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00648117: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x64811cu); f_007b9a88();
    /* 0064811c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064811f: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x648124u); f_007b4f54();
    /* 00648124: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00648127: jmp 0x648133 */ goto L_00648133;
L_00648129:; BB(0x00648129);
    /* 00648129: mov dword ptr [ecx + 0xa4], 0 */ W32((u32)(r_ecx+0xa4u), 0x0u);
L_00648133:; BB(0x00648133);
    /* 00648133: mov dword ptr [ecx + 0xb0], 0 */ W32((u32)(r_ecx+0xb0u), 0x0u);
    /* 0064813d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00648144: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00648147: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 0064814d: mov dword ptr [eax], 0xb2feb8 */ W32((u32)(r_eax), 0xb2feb8u);
    /* 00648153: mov edx, dword ptr [0x9c713c] */ r_edx = R32((u32)(0x9c713cu));
    /* 00648159: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0064815c: mov ebx, dword ptr [ecx*4 + 0xa8f4b4] */ r_ebx = R32((u32)(r_ecx*4+0xa8f4b4u));
    /* 00648163: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00648165: je 0x6481a3 */ if (fZ) goto L_006481a3;
L_00648167:; BB(0x00648167);
    /* 00648167: lea ebx, [ebp - 0x30] */ r_ebx = (u32)(r_ebp+0xffffffd0u);
    /* 0064816a: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 0064816f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00648170: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00648173: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00648176: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 00648179: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0064817c: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0064817f: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 00648182: fadd dword ptr [0x935c1c] */ ST(0) = ST(0) + R_F32((u32)(0x935c1cu));
    /* 00648188: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 0064818b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0064818e: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x648193u); f_00509590();
    /* 00648193: mov edx, eax */ r_edx = r_eax;
    /* 00648195: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00648198: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064819b: mov dword ptr [eax + 0xb4], edx */ W32((u32)(r_eax+0xb4u), r_edx);
    /* 006481a1: jmp 0x6481ad */ goto L_006481ad;
L_006481a3:; BB(0x006481a3);
    /* 006481a3: mov dword ptr [eax + 0xb4], 0 */ W32((u32)(r_eax+0xb4u), 0x0u);
L_006481ad:; BB(0x006481ad);
    /* 006481ad: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006481b0: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006481b3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006481b6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006481bd: mov esp, ebp */ r_esp = r_ebp;
    /* 006481bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006481c0: ret 8 */ FN_RET(0x00648050); r_esp += 12; return;
}

void f_006481c4(void) /* sub_6481C4 */
{
    FN_ENTER(0x006481c4);
    /* 006481c4: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006481c7: mov eax, dword ptr [ecx + 0xac] */ r_eax = R32((u32)(r_ecx+0xacu));
    /* 006481cd: mov eax, dword ptr [eax*4 + 0xa8f4b4] */ r_eax = R32((u32)(r_eax*4+0xa8f4b4u));
    /* 006481d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006481d6: je 0x64821e */ if (fZ) goto L_0064821e;
L_006481d8:; BB(0x006481d8);
    /* 006481d8: fld dword ptr [0x935bf4] */ FPUSH(R_F32((u32)(0x935bf4u)));
    /* 006481de: fadd dword ptr [ecx + 0xb0] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xb0u));
    /* 006481e4: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 006481ea: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 006481ed: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 006481f0: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006481f3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006481f6: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006481f9: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006481fc: fadd dword ptr [eax*4 + 0x935b40] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x935b40u));
    /* 00648203: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00648205: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00648207: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00648208: ja 0x648216 */ if ((!fC&&!fZ)) goto L_00648216;
L_0064820a:; BB(0x0064820a);
    /* 0064820a: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0064820c: fstp dword ptr [ecx + 0xb0] */ W_F32((u32)(r_ecx+0xb0u), ST(0)); FPOP();
    /* 00648212: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00648215: ret  */ FN_RET(0x006481c4); r_esp += 4; return;
L_00648216:; BB(0x00648216);
    /* 00648216: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00648218: fstp dword ptr [ecx + 0xb0] */ W_F32((u32)(r_ecx+0xb0u), ST(0)); FPOP();
L_0064821e:; BB(0x0064821e);
    /* 0064821e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00648221: ret  */ FN_RET(0x006481c4); r_esp += 4; return;
}

void f_00648224(void) /* sub_648224 */
{
    FN_ENTER(0x00648224);
    /* 00648224: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00648225: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00648226: mov esi, ecx */ r_esi = r_ecx;
    /* 00648228: mov eax, dword ptr [esi + 0xac] */ r_eax = R32((u32)(r_esi+0xacu));
    /* 0064822e: mov ebx, dword ptr [eax*4 + 0xa8f4b4] */ r_ebx = R32((u32)(r_eax*4+0xa8f4b4u));
    /* 00648235: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00648237: je 0x6482db */ if (fZ) goto L_006482db;
L_0064823d:; BB(0x0064823d);
    /* 0064823d: push 0x42480000 */ { u32 v = 0x42480000u; r_esp -= 4; W32(r_esp, v); }
    /* 00648242: mov ecx, esi */ r_ecx = r_esi;
    /* 00648244: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00648246: push 0x44480000 */ { u32 v = 0x44480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064824b: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x64824eu); call_ind(t); }
    /* 0064824e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00648250: jne 0x648255 */ if (!fZ) goto L_00648255;
L_00648252:; BB(0x00648252);
    /* 00648252: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00648253: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00648254: ret  */ FN_RET(0x00648224); r_esp += 4; return;
L_00648255:; BB(0x00648255);
    /* 00648255: mov ecx, dword ptr [0xa8f4a4] */ r_ecx = R32((u32)(0xa8f4a4u));
    /* 0064825b: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x648260u); f_00829cc8();
    /* 00648260: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x648265u); f_0082d7b0();
    /* 00648265: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 00648268: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x64826du); f_0082d838();
    /* 0064826d: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00648270: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00648272: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x648277u); f_0082d8bc();
    /* 00648277: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 0064827d: push dword ptr [eax + 0x98] */ { u32 v = R32((u32)(r_eax+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 00648283: call 0x82e760 */ r_esp -= 4; W32(r_esp, 0x648288u); f_0082e760();
    /* 00648288: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 0064828e: push dword ptr [eax + 0x88] */ { u32 v = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, v); }
    /* 00648294: call 0x82e760 */ r_esp -= 4; W32(r_esp, 0x648299u); f_0082e760();
    /* 00648299: push dword ptr [esi + 0xb0] */ { u32 v = R32((u32)(r_esi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064829f: mov edx, dword ptr [ebx + 0x42c] */ r_edx = R32((u32)(r_ebx+0x42cu));
    /* 006482a5: mov eax, dword ptr [ebx + 0x430] */ r_eax = R32((u32)(r_ebx+0x430u));
    /* 006482ab: push dword ptr [eax + 0xc] */ { u32 v = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006482ae: push dword ptr [edx + 0x78] */ { u32 v = R32((u32)(r_edx+0x78u)); r_esp -= 4; W32(r_esp, v); }
    /* 006482b1: call 0x830a28 */ r_esp -= 4; W32(r_esp, 0x6482b6u); f_00830a28();
    /* 006482b6: push dword ptr [esi + 0xb0] */ { u32 v = R32((u32)(r_esi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006482bc: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 006482c2: mov ebx, dword ptr [ebx + 0x430] */ r_ebx = R32((u32)(r_ebx+0x430u));
    /* 006482c8: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006482cb: push dword ptr [eax + 0x68] */ { u32 v = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 006482ce: call 0x830a28 */ r_esp -= 4; W32(r_esp, 0x6482d3u); f_00830a28();
    /* 006482d3: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006482d6: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6482dbu); f_0082da80();
L_006482db:; BB(0x006482db);
    /* 006482db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006482dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006482dd: ret  */ FN_RET(0x00648224); r_esp += 4; return;
}

void f_006482e0(void)
{
    FN_ENTER(0x006482e0);
    /* 006482e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006482e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006482e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006482e5: push 0x8e5ea4 */ { u32 v = 0x8e5ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 006482ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006482f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006482f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006482f8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006482fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006482fe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00648301: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00648304: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00648307: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 0064830c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00648313: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x648318u); f_005caba4();
    /* 00648318: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00648319: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0064831c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064831e: je 0x648357 */ if (fZ) goto L_00648357;
L_00648320:; BB(0x00648320);
    /* 00648320: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00648327: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064832e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00648331: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00648337: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064833a: call 0x64835c */ r_esp -= 4; W32(r_esp, 0x64833fu); f_0064835c();
    /* 0064833f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00648342: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00648349:; BB(0x00648349);
    /* 00648349: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064834c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00648353: mov esp, ebp */ r_esp = r_ebp;
    /* 00648355: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00648356: ret  */ FN_RET(0x006482e0); r_esp += 4; return;
L_00648357:; BB(0x00648357);
    /* 00648357: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00648359: jmp 0x648349 */ goto L_00648349;
}

void f_0064835c(void) /* sub_64835C */
{
    FN_ENTER(0x0064835c);
    /* 0064835c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064835d: mov ebp, esp */ r_ebp = r_esp;
    /* 0064835f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00648361: push 0x8e5ec0 */ { u32 v = 0x8e5ec0u; r_esp -= 4; W32(r_esp, v); }
    /* 00648366: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064836c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064836d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00648374: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00648377: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064837a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0064837d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00648380: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00648383: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00648386: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00648389: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0064838c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064838f: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x648394u); f_007ba278();
    /* 00648394: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064839b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064839e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006483a1: mov dword ptr [ecx], 0xb2fee8 */ W32((u32)(r_ecx), 0xb2fee8u);
    /* 006483a7: mov eax, dword ptr [0x9c7140] */ r_eax = R32((u32)(0x9c7140u));
    /* 006483ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006483ad: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006483b0: call dword ptr [0xb2fefc] */ { u32 t = R32((u32)(0xb2fefcu)); r_esp -= 4; W32(r_esp, 0x6483b6u); call_ind(t); }
    /* 006483b6: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006483b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006483bc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006483c3: mov esp, ebp */ r_esp = r_ebp;
    /* 006483c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006483c6: ret 8 */ FN_RET(0x0064835c); r_esp += 12; return;
}

void f_006483cc(void) /* sub_6483CC */
{
    FN_ENTER(0x006483cc);
    /* 006483cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006483cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006483ce: mov esi, ecx */ r_esi = r_ecx;
    /* 006483d0: mov edi, dword ptr [0xa8f4bc] */ r_edi = R32((u32)(0xa8f4bcu));
    /* 006483d6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006483d8: je 0x648428 */ if (fZ) goto L_00648428;
L_006483da:; BB(0x006483da);
    /* 006483da: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 006483df: mov ecx, esi */ r_ecx = r_esi;
    /* 006483e1: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006483e3: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 006483e8: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x6483ebu); call_ind(t); }
    /* 006483eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006483ed: jne 0x6483f2 */ if (!fZ) goto L_006483f2;
L_006483ef:; BB(0x006483ef);
    /* 006483ef: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006483f0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006483f1: ret  */ FN_RET(0x006483cc); r_esp += 4; return;
L_006483f2:; BB(0x006483f2);
    /* 006483f2: mov ecx, dword ptr [0xa8f4a4] */ r_ecx = R32((u32)(0xa8f4a4u));
    /* 006483f8: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6483fdu); f_00829cc8();
    /* 006483fd: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x648402u); f_0082d7b0();
    /* 00648402: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 00648405: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x64840au); f_0082d838();
    /* 0064840a: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0064840d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064840f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x648414u); f_0082d8bc();
    /* 00648414: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 0064841a: push dword ptr [eax + 0x58] */ { u32 v = R32((u32)(r_eax+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064841d: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x648422u); f_0082e1e8();
    /* 00648422: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00648423: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x648428u); f_0082da80();
L_00648428:; BB(0x00648428);
    /* 00648428: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00648429: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064842a: ret  */ FN_RET(0x006483cc); r_esp += 4; return;
}

void f_0064842c(void)
{
    FN_ENTER(0x0064842c);
    /* 0064842c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064842d: mov ebp, esp */ r_ebp = r_esp;
    /* 0064842f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00648431: push 0x8e5ee8 */ { u32 v = 0x8e5ee8u; r_esp -= 4; W32(r_esp, v); }
    /* 00648436: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064843c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064843d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00648444: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00648447: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064844a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0064844d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00648450: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00648453: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 00648458: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0064845f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x648464u); f_005caba4();
    /* 00648464: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00648465: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00648468: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064846a: je 0x6484a3 */ if (fZ) goto L_006484a3;
L_0064846c:; BB(0x0064846c);
    /* 0064846c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00648473: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064847a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064847d: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00648483: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00648486: call 0x6484a8 */ r_esp -= 4; W32(r_esp, 0x64848bu); f_006484a8();
    /* 0064848b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064848e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00648495:; BB(0x00648495);
    /* 00648495: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00648498: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064849f: mov esp, ebp */ r_esp = r_ebp;
    /* 006484a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006484a2: ret  */ FN_RET(0x0064842c); r_esp += 4; return;
L_006484a3:; BB(0x006484a3);
    /* 006484a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006484a5: jmp 0x648495 */ goto L_00648495;
}

void f_006484a8(void) /* sub_6484A8 */
{
    FN_ENTER(0x006484a8);
    /* 006484a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006484a9: mov ebp, esp */ r_ebp = r_esp;
    /* 006484ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006484ad: push 0x8e5f04 */ { u32 v = 0x8e5f04u; r_esp -= 4; W32(r_esp, v); }
    /* 006484b2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006484b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006484b9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006484c0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006484c3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006484c6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006484c9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006484cc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006484cf: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006484d2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006484d5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006484d8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006484db: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x6484e0u); f_007ba278();
    /* 006484e0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006484e7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006484ea: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006484ed: mov dword ptr [ecx], 0xb2ff14 */ W32((u32)(r_ecx), 0xb2ff14u);
    /* 006484f3: mov eax, dword ptr [0x9c7144] */ r_eax = R32((u32)(0x9c7144u));
    /* 006484f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006484f9: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006484fc: call dword ptr [0xb2ff28] */ { u32 t = R32((u32)(0xb2ff28u)); r_esp -= 4; W32(r_esp, 0x648502u); call_ind(t); }
    /* 00648502: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00648505: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00648508: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064850f: mov esp, ebp */ r_esp = r_ebp;
    /* 00648511: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00648512: ret 8 */ FN_RET(0x006484a8); r_esp += 12; return;
}

void f_00648518(void) /* sub_648518 */
{
    FN_ENTER(0x00648518);
    /* 00648518: mov eax, dword ptr [0xa8f4c0] */ r_eax = R32((u32)(0xa8f4c0u));
    /* 0064851d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064851f: je 0x64852a */ if (fZ) goto L_0064852a;
L_00648521:; BB(0x00648521);
    /* 00648521: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 00648524: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00648527: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
L_0064852a:; BB(0x0064852a);
    /* 0064852a: ret  */ FN_RET(0x00648518); r_esp += 4; return;
}

void f_0064852c(void) /* sub_64852C */
{
    FN_ENTER(0x0064852c);
    /* 0064852c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064852d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064852e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00648530: mov esi, dword ptr [0xa8f4c0] */ r_esi = R32((u32)(0xa8f4c0u));
    /* 00648536: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00648538: je 0x648588 */ if (fZ) goto L_00648588;
L_0064853a:; BB(0x0064853a);
    /* 0064853a: push 0x42a00000 */ { u32 v = 0x42a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064853f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00648541: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00648544: push 0x44480000 */ { u32 v = 0x44480000u; r_esp -= 4; W32(r_esp, v); }
    /* 00648549: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x64854cu); call_ind(t); }
    /* 0064854c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064854e: jne 0x648553 */ if (!fZ) goto L_00648553;
L_00648550:; BB(0x00648550);
    /* 00648550: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00648551: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00648552: ret  */ FN_RET(0x0064852c); r_esp += 4; return;
L_00648553:; BB(0x00648553);
    /* 00648553: mov ecx, dword ptr [0xa8f4a8] */ r_ecx = R32((u32)(0xa8f4a8u));
    /* 00648559: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x64855eu); f_00829cc8();
    /* 0064855e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x648563u); f_0082d7b0();
    /* 00648563: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 00648566: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x64856bu); f_0082d838();
    /* 0064856b: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0064856e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00648570: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x648575u); f_0082d8bc();
    /* 00648575: mov eax, dword ptr [esi + 0x42c] */ r_eax = R32((u32)(r_esi+0x42cu));
    /* 0064857b: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0064857e: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x648583u); f_00831758();
    /* 00648583: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x648588u); f_0082da80();
L_00648588:; BB(0x00648588);
    /* 00648588: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00648589: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064858a: ret  */ FN_RET(0x0064852c); r_esp += 4; return;
}

void f_0064858c(void)
{
    FN_ENTER(0x0064858c);
    /* 0064858c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064858d: mov ebp, esp */ r_ebp = r_esp;
    /* 0064858f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00648591: push 0x8e5f2c */ { u32 v = 0x8e5f2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00648596: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064859c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064859d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006485a4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006485a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006485aa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006485ad: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006485b0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006485b3: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 006485b8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006485bf: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6485c4u); f_005caba4();
    /* 006485c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006485c5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006485c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006485ca: je 0x648603 */ if (fZ) goto L_00648603;
L_006485cc:; BB(0x006485cc);
    /* 006485cc: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006485d3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006485da: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006485dd: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006485e3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006485e6: call 0x648608 */ r_esp -= 4; W32(r_esp, 0x6485ebu); f_00648608();
    /* 006485eb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006485ee: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006485f5:; BB(0x006485f5);
    /* 006485f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006485f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006485ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00648601: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00648602: ret  */ FN_RET(0x0064858c); r_esp += 4; return;
L_00648603:; BB(0x00648603);
    /* 00648603: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00648605: jmp 0x6485f5 */ goto L_006485f5;
}

void f_00648608(void) /* sub_648608 */
{
    FN_ENTER(0x00648608);
    /* 00648608: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00648609: mov ebp, esp */ r_ebp = r_esp;
    /* 0064860b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064860d: push 0x8e5f56 */ { u32 v = 0x8e5f56u; r_esp -= 4; W32(r_esp, v); }
    /* 00648612: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00648618: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00648619: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00648620: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00648623: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00648626: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00648629: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0064862c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0064862f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00648632: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00648635: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00648638: mov dword ptr [ebp - 0x60], 0x41b80000 */ W32((u32)(r_ebp+0xffffffa0u), 0x41b80000u);
    /* 0064863f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00648642: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 00648645: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x64864au); f_007b4b48();
    /* 0064864a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00648651: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00648654: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00648657: mov dword ptr [ecx], 0xb2fe28 */ W32((u32)(r_ecx), 0xb2fe28u);
    /* 0064865d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064865e: call dword ptr [0xb2fe3c] */ { u32 t = R32((u32)(0xb2fe3cu)); r_esp -= 4; W32(r_esp, 0x648664u); call_ind(t); }
    /* 00648664: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00648667: mov eax, dword ptr [0xa8f4c4] */ r_eax = R32((u32)(0xa8f4c4u));
    /* 0064866c: mov dword ptr [ecx + 0xac], 4 */ W32((u32)(r_ecx+0xacu), 0x4u);
    /* 00648676: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648678: je 0x6486e1 */ if (fZ) goto L_006486e1;
L_0064867a:; BB(0x0064867a);
    /* 0064867a: mov eax, dword ptr [0x935c40] */ r_eax = R32((u32)(0x935c40u));
    /* 0064867f: mov edx, dword ptr [0x935c44] */ r_edx = R32((u32)(0x935c44u));
    /* 00648685: mov ebx, dword ptr [ebp - 0x60] */ r_ebx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00648688: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0064868b: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 00648692: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00648695: mov dword ptr [ebp - 0x50], ebx */ W32((u32)(r_ebp+0xffffffb0u), r_ebx);
    /* 00648698: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 0064869f: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 006486a6: lea esi, [ebp - 0x5c] */ r_esi = (u32)(r_ebp+0xffffffa4u);
    /* 006486a9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006486ab: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 006486b2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006486b3: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 006486ba: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 006486c1: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006486c8: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006486cf: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6486d4u); f_007b9a88();
    /* 006486d4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006486d7: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x6486dcu); f_007b4f54();
    /* 006486dc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006486df: jmp 0x6486eb */ goto L_006486eb;
L_006486e1:; BB(0x006486e1);
    /* 006486e1: mov dword ptr [ecx + 0xa4], 0 */ W32((u32)(r_ecx+0xa4u), 0x0u);
L_006486eb:; BB(0x006486eb);
    /* 006486eb: mov dword ptr [ecx + 0xb0], 0 */ W32((u32)(r_ecx+0xb0u), 0x0u);
    /* 006486f5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006486fc: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006486ff: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 00648705: mov dword ptr [eax], 0xb2ff40 */ W32((u32)(r_eax), 0xb2ff40u);
    /* 0064870b: mov edx, dword ptr [0x9c7148] */ r_edx = R32((u32)(0x9c7148u));
    /* 00648711: mov dword ptr [eax + 0xb4], 0 */ W32((u32)(r_eax+0xb4u), 0x0u);
    /* 0064871b: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0064871e: mov ebx, dword ptr [ecx*4 + 0xa8f4b4] */ r_ebx = R32((u32)(r_ecx*4+0xa8f4b4u));
    /* 00648725: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00648727: je 0x648765 */ if (fZ) goto L_00648765;
L_00648729:; BB(0x00648729);
    /* 00648729: fld dword ptr [0x935bd4] */ FPUSH(R_F32((u32)(0x935bd4u)));
    /* 0064872f: lea ebx, [ebp - 0x30] */ r_ebx = (u32)(r_ebp+0xffffffd0u);
    /* 00648732: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 00648737: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0064873a: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0064873d: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 00648740: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00648743: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00648744: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00648747: fadd dword ptr [ebp - 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffd4u));
    /* 0064874a: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 0064874d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00648750: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x648755u); f_00509590();
    /* 00648755: mov edx, eax */ r_edx = r_eax;
    /* 00648757: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064875a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064875d: mov dword ptr [eax + 0xb8], edx */ W32((u32)(r_eax+0xb8u), r_edx);
    /* 00648763: jmp 0x64876f */ goto L_0064876f;
L_00648765:; BB(0x00648765);
    /* 00648765: mov dword ptr [eax + 0xb8], 0 */ W32((u32)(r_eax+0xb8u), 0x0u);
L_0064876f:; BB(0x0064876f);
    /* 0064876f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00648772: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00648775: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00648778: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064877f: mov esp, ebp */ r_esp = r_ebp;
    /* 00648781: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00648782: ret 8 */ FN_RET(0x00648608); r_esp += 12; return;
}

void f_00648788(void) /* sub_648788 */
{
    FN_ENTER(0x00648788);
    /* 00648788: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064878b: mov eax, dword ptr [ecx + 0xac] */ r_eax = R32((u32)(r_ecx+0xacu));
    /* 00648791: mov eax, dword ptr [eax*4 + 0xa8f4b4] */ r_eax = R32((u32)(r_eax*4+0xa8f4b4u));
    /* 00648798: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064879a: je 0x648806 */ if (fZ) goto L_00648806;
L_0064879c:; BB(0x0064879c);
    /* 0064879c: fld dword ptr [0x935bcc] */ FPUSH(R_F32((u32)(0x935bccu)));
    /* 006487a2: fadd dword ptr [ecx + 0xb0] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xb0u));
    /* 006487a8: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 006487ae: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006487b1: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 006487b4: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006487b7: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006487ba: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006487bd: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006487c0: fadd dword ptr [eax*4 + 0x935b38] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x935b38u));
    /* 006487c7: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006487c9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006487cb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006487cc: ja 0x6487d8 */ if ((!fC&&!fZ)) goto L_006487d8;
L_006487ce:; BB(0x006487ce);
    /* 006487ce: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 006487d0: fstp dword ptr [ecx + 0xb0] */ W_F32((u32)(r_ecx+0xb0u), ST(0)); FPOP();
    /* 006487d6: jmp 0x6487e0 */ goto L_006487e0;
L_006487d8:; BB(0x006487d8);
    /* 006487d8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006487da: fstp dword ptr [ecx + 0xb0] */ W_F32((u32)(r_ecx+0xb0u), ST(0)); FPOP();
L_006487e0:; BB(0x006487e0);
    /* 006487e0: mov edx, dword ptr [ecx + 0xb4] */ r_edx = R32((u32)(r_ecx+0xb4u));
    /* 006487e6: lea eax, [edx + 2] */ r_eax = (u32)(r_edx+0x2u);
    /* 006487e9: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006487ee: jge 0x6487fa */ if ((fS==fO)) goto L_006487fa;
L_006487f0:; BB(0x006487f0);
    /* 006487f0: mov dword ptr [ecx + 0xb4], eax */ W32((u32)(r_ecx+0xb4u), r_eax);
    /* 006487f6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006487f9: ret  */ FN_RET(0x00648788); r_esp += 4; return;
L_006487fa:; BB(0x006487fa);
    /* 006487fa: add edx, 0xffffff03 */ {  u32 a = r_edx; u32 b = 0xffffff03u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00648800: mov dword ptr [ecx + 0xb4], edx */ W32((u32)(r_ecx+0xb4u), r_edx);
L_00648806:; BB(0x00648806);
    /* 00648806: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00648809: ret  */ FN_RET(0x00648788); r_esp += 4; return;
}

void f_0064880c(void) /* sub_64880C */
{
    FN_ENTER(0x0064880c);
    /* 0064880c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064880d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064880e: mov esi, ecx */ r_esi = r_ecx;
    /* 00648810: mov eax, dword ptr [esi + 0xac] */ r_eax = R32((u32)(r_esi+0xacu));
    /* 00648816: mov ebp, dword ptr [eax*4 + 0xa8f4b4] */ r_ebp = R32((u32)(r_eax*4+0xa8f4b4u));
    /* 0064881d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064881f: je 0x6488a7 */ if (fZ) goto L_006488a7;
L_00648825:; BB(0x00648825);
    /* 00648825: push 0x42700000 */ { u32 v = 0x42700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064882a: mov ecx, esi */ r_ecx = r_esi;
    /* 0064882c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0064882e: push 0x44480000 */ { u32 v = 0x44480000u; r_esp -= 4; W32(r_esp, v); }
    /* 00648833: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x648836u); call_ind(t); }
    /* 00648836: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00648838: jne 0x64883d */ if (!fZ) goto L_0064883d;
L_0064883a:; BB(0x0064883a);
    /* 0064883a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064883b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064883c: ret  */ FN_RET(0x0064880c); r_esp += 4; return;
L_0064883d:; BB(0x0064883d);
    /* 0064883d: mov ecx, dword ptr [0xa8f4ac] */ r_ecx = R32((u32)(0xa8f4acu));
    /* 00648843: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x648848u); f_00829cc8();
    /* 00648848: mov ecx, dword ptr [0xa8f498] */ r_ecx = R32((u32)(0xa8f498u));
    /* 0064884e: movsx eax, word ptr [esi + 0xb4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xb4u));
    /* 00648855: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00648856: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00648858: call 0x52ddac */ r_esp -= 4; W32(r_esp, 0x64885du); f_0052ddac();
    /* 0064885d: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x648862u); f_0082d7b0();
    /* 00648862: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 00648865: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x64886au); f_0082d838();
    /* 0064886a: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0064886d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064886f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x648874u); f_0082d8bc();
    /* 00648874: mov eax, dword ptr [ebp + 0x42c] */ r_eax = R32((u32)(r_ebp+0x42cu));
    /* 0064887a: push dword ptr [eax + 0x18] */ { u32 v = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064887d: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x648882u); f_0082e1e8();
    /* 00648882: push dword ptr [esi + 0xb0] */ { u32 v = R32((u32)(r_esi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00648888: mov eax, dword ptr [ebp + 0x42c] */ r_eax = R32((u32)(r_ebp+0x42cu));
    /* 0064888e: mov ebp, dword ptr [ebp + 0x430] */ r_ebp = R32((u32)(r_ebp+0x430u));
    /* 00648894: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00648897: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064889a: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x64889fu); f_0083046c();
    /* 0064889f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006488a2: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6488a7u); f_0082da80();
L_006488a7:; BB(0x006488a7);
    /* 006488a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006488a8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006488a9: ret  */ FN_RET(0x0064880c); r_esp += 4; return;
}

void f_006488ac(void)
{
    FN_ENTER(0x006488ac);
    /* 006488ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006488ad: mov ebp, esp */ r_ebp = r_esp;
    /* 006488af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006488b1: push 0x8e5f7c */ { u32 v = 0x8e5f7cu; r_esp -= 4; W32(r_esp, v); }
    /* 006488b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006488bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006488bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006488c4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006488c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006488ca: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006488cd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006488d0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006488d3: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 006488d8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006488df: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6488e4u); f_005caba4();
    /* 006488e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006488e5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006488e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006488ea: je 0x648923 */ if (fZ) goto L_00648923;
L_006488ec:; BB(0x006488ec);
    /* 006488ec: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006488f3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006488fa: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006488fd: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00648903: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00648906: call 0x648928 */ r_esp -= 4; W32(r_esp, 0x64890bu); f_00648928();
    /* 0064890b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064890e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00648915:; BB(0x00648915);
    /* 00648915: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00648918: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064891f: mov esp, ebp */ r_esp = r_ebp;
    /* 00648921: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00648922: ret  */ FN_RET(0x006488ac); r_esp += 4; return;
L_00648923:; BB(0x00648923);
    /* 00648923: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00648925: jmp 0x648915 */ goto L_00648915;
}

void f_00648928(void) /* sub_648928 */
{
    FN_ENTER(0x00648928);
    /* 00648928: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00648929: mov ebp, esp */ r_ebp = r_esp;
    /* 0064892b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064892d: push 0x8e5f98 */ { u32 v = 0x8e5f98u; r_esp -= 4; W32(r_esp, v); }
    /* 00648932: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00648938: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00648939: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00648940: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00648943: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00648946: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00648949: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0064894c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0064894f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00648952: mov dword ptr [ebp - 0x50], 0x40400000 */ W32((u32)(r_ebp+0xffffffb0u), 0x40400000u);
    /* 00648959: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0064895c: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 0064895f: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x648964u); f_007b4b48();
    /* 00648964: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064896b: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0064896e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00648971: mov dword ptr [ecx], 0xb2fe28 */ W32((u32)(r_ecx), 0xb2fe28u);
    /* 00648977: call dword ptr [0xb2fe3c] */ { u32 t = R32((u32)(0xb2fe3cu)); r_esp -= 4; W32(r_esp, 0x64897du); call_ind(t); }
    /* 0064897d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00648980: mov edx, dword ptr [0xa8f4c8] */ r_edx = R32((u32)(0xa8f4c8u));
    /* 00648986: mov dword ptr [eax + 0xac], 5 */ W32((u32)(r_eax+0xacu), 0x5u);
    /* 00648990: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00648992: je 0x6489fb */ if (fZ) goto L_006489fb;
L_00648994:; BB(0x00648994);
    /* 00648994: mov eax, dword ptr [0x935c40] */ r_eax = R32((u32)(0x935c40u));
    /* 00648999: mov edx, dword ptr [0x935c44] */ r_edx = R32((u32)(0x935c44u));
    /* 0064899f: mov ebx, dword ptr [ebp - 0x50] */ r_ebx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006489a2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006489a5: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 006489a8: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 006489af: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 006489b2: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 006489b9: mov dword ptr [ebp - 0x40], ebx */ W32((u32)(r_ebp+0xffffffc0u), r_ebx);
    /* 006489bc: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 006489c3: lea esi, [ebp - 0x4c] */ r_esi = (u32)(r_ebp+0xffffffb4u);
    /* 006489c6: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 006489cd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006489cf: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006489d6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006489d7: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006489de: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006489e5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006489ec: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6489f1u); f_007b9a88();
    /* 006489f1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006489f4: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x6489f9u); f_007b4f54();
    /* 006489f9: jmp 0x648a05 */ goto L_00648a05;
L_006489fb:; BB(0x006489fb);
    /* 006489fb: mov dword ptr [eax + 0xa4], 0 */ W32((u32)(r_eax+0xa4u), 0x0u);
L_00648a05:; BB(0x00648a05);
    /* 00648a05: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00648a08: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00648a0b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00648a0e: mov dword ptr [eax + 0xb0], 0 */ W32((u32)(r_eax+0xb0u), 0x0u);
    /* 00648a18: mov dword ptr [eax], 0xb2ff70 */ W32((u32)(r_eax), 0xb2ff70u);
    /* 00648a1e: mov edx, dword ptr [0x9c714c] */ r_edx = R32((u32)(0x9c714cu));
    /* 00648a24: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00648a27: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00648a2a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00648a31: mov esp, ebp */ r_esp = r_ebp;
    /* 00648a33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00648a34: ret 8 */ FN_RET(0x00648928); r_esp += 12; return;
}

void f_00648a38(void) /* sub_648A38 */
{
    FN_ENTER(0x00648a38);
    /* 00648a38: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00648a39: mov edi, ecx */ r_edi = r_ecx;
    /* 00648a3b: mov ecx, edi */ r_ecx = r_edi;
    /* 00648a3d: call 0x648a54 */ r_esp -= 4; W32(r_esp, 0x648a42u); f_00648a54();
    /* 00648a42: push 0x3e99999a */ { u32 v = 0x3e99999au; r_esp -= 4; W32(r_esp, v); }
    /* 00648a47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00648a48: mov ecx, edi */ r_ecx = r_edi;
    /* 00648a4a: call 0x648a6c */ r_esp -= 4; W32(r_esp, 0x648a4fu); f_00648a6c();
    /* 00648a4f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00648a50: ret  */ FN_RET(0x00648a38); r_esp += 4; return;
}

void f_00648a54(void) /* sub_648A54 */
{
    FN_ENTER(0x00648a54);
    /* 00648a54: mov eax, dword ptr [ecx + 0x84] */ r_eax = R32((u32)(r_ecx+0x84u));
    /* 00648a5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00648a5c: jl 0x648a69 */ if ((fS!=fO)) goto L_00648a69;
L_00648a5e:; BB(0x00648a5e);
    /* 00648a5e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00648a61: jl 0x648a6b */ if ((fS!=fO)) goto L_00648a6b;
L_00648a63:; BB(0x00648a63);
    /* 00648a63: mov eax, 3 */ r_eax = 0x3u;
    /* 00648a68: ret  */ FN_RET(0x00648a54); r_esp += 4; return;
L_00648a69:; BB(0x00648a69);
    /* 00648a69: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00648a6b:; BB(0x00648a6b);
    /* 00648a6b: ret  */ FN_RET(0x00648a54); r_esp += 4; return;
}

void f_00648a6c(void) /* sub_648A6C */
{
    FN_ENTER(0x00648a6c);
    /* 00648a6c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00648a6f: mov eax, dword ptr [ecx + 0xac] */ r_eax = R32((u32)(r_ecx+0xacu));
    /* 00648a75: mov eax, dword ptr [eax*4 + 0xa8f4b4] */ r_eax = R32((u32)(r_eax*4+0xa8f4b4u));
    /* 00648a7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648a7e: je 0x648ad2 */ if (fZ) goto L_00648ad2;
L_00648a80:; BB(0x00648a80);
    /* 00648a80: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00648a86: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00648a8a: mov eax, dword ptr [edx + eax*8 + 4] */ r_eax = R32((u32)(r_edx+r_eax*8+0x4u));
    /* 00648a8e: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00648a91: fld dword ptr [ecx + 0xb0] */ FPUSH(R_F32((u32)(r_ecx+0xb0u)));
    /* 00648a97: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 00648a9b: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00648a9e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00648aa1: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00648aa4: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00648aa7: fadd dword ptr [eax*4 + 0x935b30] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x935b30u));
    /* 00648aae: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00648ab0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00648ab2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00648ab3: ja 0x648abf */ if ((!fC&&!fZ)) goto L_00648abf;
L_00648ab5:; BB(0x00648ab5);
    /* 00648ab5: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00648ab7: fstp dword ptr [ecx + 0xb0] */ W_F32((u32)(r_ecx+0xb0u), ST(0)); FPOP();
    /* 00648abd: jmp 0x648ac7 */ goto L_00648ac7;
L_00648abf:; BB(0x00648abf);
    /* 00648abf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00648ac1: fstp dword ptr [ecx + 0xb0] */ W_F32((u32)(r_ecx+0xb0u), ST(0)); FPOP();
L_00648ac7:; BB(0x00648ac7);
    /* 00648ac7: mov eax, 1 */ r_eax = 0x1u;
    /* 00648acc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00648acf: ret 8 */ FN_RET(0x00648a6c); r_esp += 12; return;
L_00648ad2:; BB(0x00648ad2);
    /* 00648ad2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00648ad4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00648ad7: ret 8 */ FN_RET(0x00648a6c); r_esp += 12; return;
}

void f_00648adc(void) /* sub_648ADC */
{
    FN_ENTER(0x00648adc);
    /* 00648adc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00648add: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00648ade: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00648adf: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00648ae2: mov esi, ecx */ r_esi = r_ecx;
    /* 00648ae4: mov eax, dword ptr [esi + 0xac] */ r_eax = R32((u32)(r_esi+0xacu));
    /* 00648aea: mov ebp, dword ptr [eax*4 + 0xa8f4b4] */ r_ebp = R32((u32)(r_eax*4+0xa8f4b4u));
    /* 00648af1: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648af3: je 0x648bd5 */ if (fZ) goto L_00648bd5;
L_00648af9:; BB(0x00648af9);
    /* 00648af9: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00648afe: mov ecx, esi */ r_ecx = r_esi;
    /* 00648b00: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00648b02: push 0x44480000 */ { u32 v = 0x44480000u; r_esp -= 4; W32(r_esp, v); }
    /* 00648b07: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x648b0au); call_ind(t); }
    /* 00648b0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648b0c: jne 0x648b15 */ if (!fZ) goto L_00648b15;
L_00648b0e:; BB(0x00648b0e);
    /* 00648b0e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00648b11: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00648b12: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00648b13: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00648b14: ret  */ FN_RET(0x00648adc); r_esp += 4; return;
L_00648b15:; BB(0x00648b15);
    /* 00648b15: mov ecx, dword ptr [0xa8f4b0] */ r_ecx = R32((u32)(0xa8f4b0u));
    /* 00648b1b: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x648b20u); f_00829cc8();
    /* 00648b20: mov ecx, esi */ r_ecx = r_esi;
    /* 00648b22: call 0x648a54 */ r_esp -= 4; W32(r_esp, 0x648b27u); f_00648a54();
    /* 00648b27: mov ebx, eax */ r_ebx = r_eax;
    /* 00648b29: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x648b2eu); f_0082d7b0();
    /* 00648b2e: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 00648b31: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x648b36u); f_0082d838();
    /* 00648b36: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00648b39: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00648b3b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x648b40u); f_0082d8bc();
    /* 00648b40: push dword ptr [esi + 0xb0] */ { u32 v = R32((u32)(r_esi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00648b46: mov edx, dword ptr [ebp + 0x42c] */ r_edx = R32((u32)(r_ebp+0x42cu));
    /* 00648b4c: mov ebp, dword ptr [ebp + 0x430] */ r_ebp = R32((u32)(r_ebp+0x430u));
    /* 00648b52: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00648b55: push dword ptr [ebp + ebx*8 + 4] */ { u32 v = R32((u32)(r_ebp+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00648b59: push dword ptr [edx + eax*8 + 8] */ { u32 v = R32((u32)(r_edx+r_eax*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00648b5d: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x648b62u); f_0083046c();
    /* 00648b62: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00648b65: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x648b6au); f_0082da80();
    /* 00648b6a: fld dword ptr [0x935bac] */ FPUSH(R_F32((u32)(0x935bacu)));
    /* 00648b70: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00648b73: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00648b76: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00648b79: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00648b7c: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00648b84: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00648b88: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 00648b8c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00648b90: mov dword ptr [esp + 0x10], 0x3f800000 */ W32((u32)(r_esp+0x10u), 0x3f800000u);
    /* 00648b98: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00648b9c: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00648ba4: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00648ba7: mov dword ptr [esp + 0x18], 0x3f800000 */ W32((u32)(r_esp+0x18u), 0x3f800000u);
    /* 00648baf: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00648bb3: lea ebp, [esp + 0x18] */ r_ebp = (u32)(r_esp+0x18u);
    /* 00648bb7: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00648bbf: mov dword ptr [esp + 0x20], 0x3fa66666 */ W32((u32)(r_esp+0x20u), 0x3fa66666u);
    /* 00648bc7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00648bc8: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00648bcb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00648bcc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00648bcd: call 0x520d18 */ r_esp -= 4; W32(r_esp, 0x648bd2u); f_00520d18();
    /* 00648bd2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00648bd5:; BB(0x00648bd5);
    /* 00648bd5: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00648bd8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00648bd9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00648bda: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00648bdb: ret  */ FN_RET(0x00648adc); r_esp += 4; return;
}

void f_00648bdc(void) /* sub_648BDC */
{
    FN_ENTER(0x00648bdc);
    /* 00648bdc: push 0x935c60 */ { u32 v = 0x935c60u; r_esp -= 4; W32(r_esp, v); }
    /* 00648be1: push 0x130020 */ { u32 v = 0x130020u; r_esp -= 4; W32(r_esp, v); }
    /* 00648be6: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x648bebu); f_0061cdb0();
    /* 00648beb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00648bee: ret  */ FN_RET(0x00648bdc); r_esp += 4; return;
}

void f_00648bf0(void)
{
    FN_ENTER(0x00648bf0);
    /* 00648bf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00648bf1: mov ebp, esp */ r_ebp = r_esp;
    /* 00648bf3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00648bf5: push 0x8e5fc0 */ { u32 v = 0x8e5fc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00648bfa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00648c00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00648c01: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00648c08: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00648c0b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00648c0e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00648c11: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00648c14: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00648c17: push 0x94 */ { u32 v = 0x94u; r_esp -= 4; W32(r_esp, v); }
    /* 00648c1c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00648c23: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x648c28u); f_005caba4();
    /* 00648c28: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00648c29: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00648c2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648c2e: je 0x648c67 */ if (fZ) goto L_00648c67;
L_00648c30:; BB(0x00648c30);
    /* 00648c30: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00648c37: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00648c3e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00648c41: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00648c47: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00648c4a: call 0x648c6c */ r_esp -= 4; W32(r_esp, 0x648c4fu); f_00648c6c();
    /* 00648c4f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00648c52: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00648c59:; BB(0x00648c59);
    /* 00648c59: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00648c5c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00648c63: mov esp, ebp */ r_esp = r_ebp;
    /* 00648c65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00648c66: ret  */ FN_RET(0x00648bf0); r_esp += 4; return;
L_00648c67:; BB(0x00648c67);
    /* 00648c67: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00648c69: jmp 0x648c59 */ goto L_00648c59;
}

void f_00648c6c(void) /* sub_648C6C */
{
    FN_ENTER(0x00648c6c);
    /* 00648c6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00648c6d: mov ebp, esp */ r_ebp = r_esp;
    /* 00648c6f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00648c71: push 0x8e5fdc */ { u32 v = 0x8e5fdcu; r_esp -= 4; W32(r_esp, v); }
    /* 00648c76: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00648c7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00648c7d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00648c84: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00648c87: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00648c8a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00648c8d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00648c90: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00648c93: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00648c96: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00648c99: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00648c9c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00648c9f: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x648ca4u); f_007ba278();
    /* 00648ca4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00648cab: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00648cae: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00648cb1: mov dword ptr [ecx], 0xb2ffa4 */ W32((u32)(r_ecx), 0xb2ffa4u);
    /* 00648cb7: mov eax, dword ptr [0x9c7150] */ r_eax = R32((u32)(0x9c7150u));
    /* 00648cbc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00648cbd: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00648cc0: call dword ptr [0xb2ffb8] */ { u32 t = R32((u32)(0xb2ffb8u)); r_esp -= 4; W32(r_esp, 0x648cc6u); call_ind(t); }
    /* 00648cc6: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00648cc9: mov dword ptr [eax + 0x90], 0 */ W32((u32)(r_eax+0x90u), 0x0u);
    /* 00648cd3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00648cd6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00648cdd: mov esp, ebp */ r_esp = r_ebp;
    /* 00648cdf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00648ce0: ret 8 */ FN_RET(0x00648c6c); r_esp += 12; return;
}

void f_00648ce4(void) /* sub_648CE4 */
{
    FN_ENTER(0x00648ce4);
    /* 00648ce4: mov eax, dword ptr [ecx + 0x90] */ r_eax = R32((u32)(r_ecx+0x90u));
    /* 00648cea: lea edx, [eax + 2] */ r_edx = (u32)(r_eax+0x2u);
    /* 00648ced: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00648cf3: jl 0x648d01 */ if ((fS!=fO)) goto L_00648d01;
L_00648cf5:; BB(0x00648cf5);
    /* 00648cf5: add eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00648cfa: mov dword ptr [ecx + 0x90], eax */ W32((u32)(r_ecx+0x90u), r_eax);
    /* 00648d00: ret  */ FN_RET(0x00648ce4); r_esp += 4; return;
L_00648d01:; BB(0x00648d01);
    /* 00648d01: mov dword ptr [ecx + 0x90], edx */ W32((u32)(r_ecx+0x90u), r_edx);
    /* 00648d07: ret  */ FN_RET(0x00648ce4); r_esp += 4; return;
}

void f_00648d08(void) /* sub_648D08 */
{
    FN_ENTER(0x00648d08);
    /* 00648d08: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00648d09: mov esi, ecx */ r_esi = r_ecx;
    /* 00648d0b: mov eax, dword ptr [0xa8f494] */ r_eax = R32((u32)(0xa8f494u));
    /* 00648d10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00648d12: je 0x648d80 */ if (fZ) goto L_00648d80;
L_00648d14:; BB(0x00648d14);
    /* 00648d14: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 00648d19: mov ecx, esi */ r_ecx = r_esi;
    /* 00648d1b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00648d1d: push 0x44480000 */ { u32 v = 0x44480000u; r_esp -= 4; W32(r_esp, v); }
    /* 00648d22: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x648d25u); call_ind(t); }
    /* 00648d25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00648d27: jne 0x648d2b */ if (!fZ) goto L_00648d2b;
L_00648d29:; BB(0x00648d29);
    /* 00648d29: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00648d2a: ret  */ FN_RET(0x00648d08); r_esp += 4; return;
L_00648d2b:; BB(0x00648d2b);
    /* 00648d2b: mov ecx, dword ptr [0xa8f488] */ r_ecx = R32((u32)(0xa8f488u));
    /* 00648d31: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x648d36u); f_00829cc8();
    /* 00648d36: mov ecx, dword ptr [0xa8f484] */ r_ecx = R32((u32)(0xa8f484u));
    /* 00648d3c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00648d3e: movsx eax, word ptr [esi + 0x90] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x90u));
    /* 00648d45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00648d46: call 0x52ddac */ r_esp -= 4; W32(r_esp, 0x648d4bu); f_0052ddac();
    /* 00648d4b: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x648d50u); f_0082d7b0();
    /* 00648d50: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 00648d53: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x648d58u); f_0082d838();
    /* 00648d58: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00648d5b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00648d5d: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x648d62u); f_0082d8bc();
    /* 00648d62: push dword ptr [0xa8f490] */ { u32 v = R32((u32)(0xa8f490u)); r_esp -= 4; W32(r_esp, v); }
    /* 00648d68: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x648d6du); f_0082e1e8();
    /* 00648d6d: push dword ptr [0xa8f48c] */ { u32 v = R32((u32)(0xa8f48cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00648d73: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x648d78u); f_0082e1e8();
    /* 00648d78: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00648d7b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x648d80u); f_0082da80();
L_00648d80:; BB(0x00648d80);
    /* 00648d80: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00648d81: ret  */ FN_RET(0x00648d08); r_esp += 4; return;
}

void f_00648d84(void)
{
    FN_ENTER(0x00648d84);
    /* 00648d84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00648d85: mov ebp, esp */ r_ebp = r_esp;
    /* 00648d87: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00648d89: push 0x8e6004 */ { u32 v = 0x8e6004u; r_esp -= 4; W32(r_esp, v); }
    /* 00648d8e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00648d94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00648d95: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00648d9c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00648d9f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00648da2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00648da5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00648da8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00648dab: push 0x94 */ { u32 v = 0x94u; r_esp -= 4; W32(r_esp, v); }
    /* 00648db0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00648db7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x648dbcu); f_005caba4();
    /* 00648dbc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00648dbd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00648dc0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648dc2: je 0x648dfb */ if (fZ) goto L_00648dfb;
L_00648dc4:; BB(0x00648dc4);
    /* 00648dc4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00648dcb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00648dd2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00648dd5: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00648ddb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00648dde: call 0x648e00 */ r_esp -= 4; W32(r_esp, 0x648de3u); f_00648e00();
    /* 00648de3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00648de6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00648ded:; BB(0x00648ded);
    /* 00648ded: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00648df0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00648df7: mov esp, ebp */ r_esp = r_ebp;
    /* 00648df9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00648dfa: ret  */ FN_RET(0x00648d84); r_esp += 4; return;
L_00648dfb:; BB(0x00648dfb);
    /* 00648dfb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00648dfd: jmp 0x648ded */ goto L_00648ded;
}

void f_00648e00(void) /* sub_648E00 */
{
    FN_ENTER(0x00648e00);
    /* 00648e00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00648e01: mov ebp, esp */ r_ebp = r_esp;
    /* 00648e03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00648e05: push 0x8e6020 */ { u32 v = 0x8e6020u; r_esp -= 4; W32(r_esp, v); }
    /* 00648e0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00648e10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00648e11: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00648e18: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00648e1b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00648e1e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00648e21: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00648e24: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00648e27: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00648e2a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00648e2d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00648e30: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00648e33: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x648e38u); f_007ba278();
    /* 00648e38: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00648e3f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00648e42: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00648e45: mov dword ptr [ecx], 0xb2ffd0 */ W32((u32)(r_ecx), 0xb2ffd0u);
    /* 00648e4b: mov eax, dword ptr [0x9c7154] */ r_eax = R32((u32)(0x9c7154u));
    /* 00648e50: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00648e51: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00648e54: call dword ptr [0xb2ffe4] */ { u32 t = R32((u32)(0xb2ffe4u)); r_esp -= 4; W32(r_esp, 0x648e5au); call_ind(t); }
    /* 00648e5a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00648e5d: mov dword ptr [eax + 0x90], 0 */ W32((u32)(r_eax+0x90u), 0x0u);
    /* 00648e67: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00648e6a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00648e71: mov esp, ebp */ r_esp = r_ebp;
    /* 00648e73: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00648e74: ret 8 */ FN_RET(0x00648e00); r_esp += 12; return;
}

void f_00648e78(void) /* sub_648E78 */
{
    FN_ENTER(0x00648e78);
    /* 00648e78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00648e79: mov ebp, esp */ r_ebp = r_esp;
    /* 00648e7b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00648e7d: push 0x8e6048 */ { u32 v = 0x8e6048u; r_esp -= 4; W32(r_esp, v); }
    /* 00648e82: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00648e88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00648e89: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00648e90: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00648e93: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00648e96: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 00648e99: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 00648e9c: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 00648e9f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00648ea2: call 0x64948c */ r_esp -= 4; W32(r_esp, 0x648ea7u); f_0064948c();
    /* 00648ea7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00648ea9: je 0x648ec1 */ if (fZ) goto L_00648ec1;
L_00648eab:; BB(0x00648eab);
    /* 00648eab: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00648eae: mov edx, dword ptr [eax + 0x90] */ r_edx = R32((u32)(r_eax+0x90u));
    /* 00648eb4: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00648eb7: mov dword ptr [eax + 0x90], edx */ W32((u32)(r_eax+0x90u), r_edx);
    /* 00648ebd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00648ebf: jl 0x648ed8 */ if ((fS!=fO)) goto L_00648ed8;
L_00648ec1:; BB(0x00648ec1);
    /* 00648ec1: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00648ec4: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00648ec7: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00648eca: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00648ecd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00648ed4: mov esp, ebp */ r_esp = r_ebp;
    /* 00648ed6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00648ed7: ret  */ FN_RET(0x00648e78); r_esp += 4; return;
L_00648ed8:; BB(0x00648ed8);
    /* 00648ed8: mov esi, eax */ r_esi = r_eax;
    /* 00648eda: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 00648ee0: lea ecx, [ebp - 0x68] */ r_ecx = (u32)(r_ebp+0xffffff98u);
    /* 00648ee3: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00648ee6: mov ebx, dword ptr [esi + 0x3c] */ r_ebx = R32((u32)(r_esi+0x3cu));
    /* 00648ee9: mov edi, dword ptr [esi + 0x40] */ r_edi = R32((u32)(r_esi+0x40u));
    /* 00648eec: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00648eef: mov dword ptr [ebp - 0x64], ebx */ W32((u32)(r_ebp+0xffffff9cu), r_ebx);
    /* 00648ef2: mov dword ptr [ebp - 0x60], edi */ W32((u32)(r_ebp+0xffffffa0u), r_edi);
    /* 00648ef5: add edx, 0x178 */ {  u32 a = r_edx; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00648efb: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x648f00u); f_0082f9c4();
    /* 00648f00: lea eax, [ebp - 0x68] */ r_eax = (u32)(r_ebp+0xffffff98u);
    /* 00648f03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00648f04: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x648f09u); f_00782868();
    /* 00648f09: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00648f0a: fcomp dword ptr [0x935b94] */ fx_compare(ST(0), R_F32((u32)(0x935b94u))); FPOP();
    /* 00648f10: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00648f12: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00648f13: jae 0x649011 */ if (!fC) goto L_00649011;
L_00648f19:; BB(0x00648f19);
    /* 00648f19: lea ecx, [ebp - 0x68] */ r_ecx = (u32)(r_ebp+0xffffff98u);
    /* 00648f1c: mov edx, 0xa4878c */ r_edx = 0xa4878cu;
    /* 00648f21: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x648f26u); f_0082f9e0();
    /* 00648f26: fcomp dword ptr [0x935b90] */ fx_compare(ST(0), R_F32((u32)(0x935b90u))); FPOP();
    /* 00648f2c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00648f2e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00648f2f: jbe 0x649011 */ if ((fC||fZ)) goto L_00649011;
L_00648f35:; BB(0x00648f35);
    /* 00648f35: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x648f3au); f_008587a5();
    /* 00648f3a: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00648f3d: fild dword ptr [ebp - 0x48] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb8u)));
    /* 00648f40: fdiv dword ptr [0x935b88] */ ST(0) = ST(0) / R_F32((u32)(0x935b88u));
    /* 00648f46: fadd dword ptr [0x935b8c] */ ST(0) = ST(0) + R_F32((u32)(0x935b8cu));
    /* 00648f4c: mov eax, esi */ r_eax = r_esi;
    /* 00648f4e: fmul dword ptr [0x935b84] */ ST(0) = ST(0) * R_F32((u32)(0x935b84u));
    /* 00648f54: fmul dword ptr [eax + 0x68] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x68u));
    /* 00648f57: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 00648f5a: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x648f5fu); f_008587a5();
    /* 00648f5f: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00648f62: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 00648f65: fdiv dword ptr [0x935b88] */ ST(0) = ST(0) / R_F32((u32)(0x935b88u));
    /* 00648f6b: fadd dword ptr [0x935b8c] */ ST(0) = ST(0) + R_F32((u32)(0x935b8cu));
    /* 00648f71: mov eax, esi */ r_eax = r_esi;
    /* 00648f73: fmul dword ptr [0x935b84] */ ST(0) = ST(0) * R_F32((u32)(0x935b84u));
    /* 00648f79: fmul dword ptr [eax + 0x70] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x70u));
    /* 00648f7c: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 00648f7f: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x648f84u); f_008587a5();
    /* 00648f84: mov ecx, esi */ r_ecx = r_esi;
    /* 00648f86: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 00648f89: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 00648f8c: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00648f8f: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 00648f92: fdiv dword ptr [0x935b88] */ ST(0) = ST(0) / R_F32((u32)(0x935b88u));
    /* 00648f98: fmul dword ptr [0x935b7c] */ ST(0) = ST(0) * R_F32((u32)(0x935b7cu));
    /* 00648f9e: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 00648fa1: fadd dword ptr [ecx + 0x6c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x6cu));
    /* 00648fa4: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00648fa7: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00648fae: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00648fb1: fld dword ptr [ebp - 0x5c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa4u)));
    /* 00648fb4: fadd dword ptr [ebp - 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffe4u));
    /* 00648fb7: fstp dword ptr [ebp - 0x5c] */ W_F32((u32)(r_ebp+0xffffffa4u), ST(0)); FPOP();
    /* 00648fba: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00648fbd: mov dword ptr [ebp - 0x54], ebx */ W32((u32)(r_ebp+0xffffffacu), r_ebx);
    /* 00648fc0: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 00648fc3: fadd dword ptr [ebp - 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffe0u));
    /* 00648fc6: fstp dword ptr [ebp - 0x54] */ W_F32((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 00648fc9: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00648fcb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x648fd0u); f_005caba4();
    /* 00648fd0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00648fd1: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00648fd4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648fd6: je 0x64900a */ if (fZ) goto L_0064900a;
L_00648fd8:; BB(0x00648fd8);
    /* 00648fd8: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 00648fdf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00648fe6: mov edx, esi */ r_edx = r_esi;
    /* 00648fe8: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00648feb: lea ebx, [ebp - 0x5c] */ r_ebx = (u32)(r_ebp+0xffffffa4u);
    /* 00648fee: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00648ff1: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00648ff5: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00648ff8: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00648ffc: mov ecx, eax */ r_ecx = r_eax;
    /* 00648ffe: call 0x64905c */ r_esp -= 4; W32(r_esp, 0x649003u); f_0064905c();
    /* 00649003: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_0064900a:; BB(0x0064900a);
    /* 0064900a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_00649011:; BB(0x00649011);
    /* 00649011: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x649016u); f_008587a5();
    /* 00649016: mov ecx, esi */ r_ecx = r_esi;
    /* 00649018: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 0064901e: add edx, 0x3c */ {  u32 a = r_edx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00649021: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00649024: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 00649027: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0064902a: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 0064902d: fdiv dword ptr [0x935b88] */ ST(0) = ST(0) / R_F32((u32)(0x935b88u));
    /* 00649033: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00649035: fmul dword ptr [0x935b80] */ ST(0) = ST(0) * R_F32((u32)(0x935b80u));
    /* 0064903b: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 0064903e: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 00649042: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00649047: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0064904a: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 0064904d: fistp dword ptr [ecx + 0x90] */ W32((u32)(r_ecx+0x90u), (u32)fx_int32(ST(0))); FPOP();
    /* 00649053: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00649056: jmp 0x648ec1 */ goto L_00648ec1;
}

