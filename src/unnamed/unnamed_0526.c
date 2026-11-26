#include "protos.h"

void f_00526008(void) /* sub_526008 */
{
    FN_ENTER(0x00526008);
    /* 00526008: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00526009: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052600a: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052600d: mov esi, ecx */ r_esi = r_ecx;
    /* 0052600f: mov ecx, esi */ r_ecx = r_esi;
    /* 00526011: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x526016u); f_007aa094();
    /* 00526016: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00526019: test eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052601e: je 0x526089 */ if (fZ) goto L_00526089;
L_00526020:; BB(0x00526020);
    /* 00526020: movzx eax, word ptr [esi + 0x37c] */ r_eax = (u32)R16((u32)(r_esi+0x37cu));
    /* 00526027: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00526029: jne 0x526089 */ if (!fZ) goto L_00526089;
L_0052602b:; BB(0x0052602b);
    /* 0052602b: mov ecx, esi */ r_ecx = r_esi;
    /* 0052602d: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x526032u); f_00770738();
    /* 00526032: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526034: je 0x526089 */ if (fZ) goto L_00526089;
L_00526036:; BB(0x00526036);
    /* 00526036: push dword ptr [eax + 0x308] */ { u32 v = R32((u32)(r_eax+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052603c: push dword ptr [eax + 0x304] */ { u32 v = R32((u32)(r_eax+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 00526042: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 00526048: mov ecx, esi */ r_ecx = r_esi;
    /* 0052604a: push dword ptr [eax + 0x300] */ { u32 v = R32((u32)(r_eax+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 00526050: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00526053: call 0x7723e0 */ r_esp -= 4; W32(r_esp, 0x526058u); f_007723e0();
    /* 00526058: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0052605a: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 00526060: lea eax, [esi + 0x30c] */ r_eax = (u32)(r_esi+0x30cu);
    /* 00526066: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00526067: mov ecx, esi */ r_ecx = r_esi;
    /* 00526069: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052606c: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x526071u); f_00771858();
    /* 00526071: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00526073: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00526075: mov ecx, esi */ r_ecx = r_esi;
    /* 00526077: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x52607cu); f_00772b44();
    /* 0052607c: mov ecx, esi */ r_ecx = r_esi;
    /* 0052607e: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x526083u); f_007b6880();
    /* 00526083: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00526086: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00526087: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00526088: ret  */ FN_RET(0x00526008); r_esp += 4; return;
L_00526089:; BB(0x00526089);
    /* 00526089: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 0052608f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526092: jne 0x5263e7 */ if (!fZ) goto L_005263e7;
L_00526098:; BB(0x00526098);
    /* 00526098: mov ecx, esi */ r_ecx = r_esi;
    /* 0052609a: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52609fu); f_00770738();
    /* 0052609f: movsx edx, word ptr [esi + 0x382] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x382u));
    /* 005260a6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005260a8: je 0x526593 */ if (fZ) goto L_00526593;
L_005260ae:; BB(0x005260ae);
    /* 005260ae: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005260b1: je 0x52634a */ if (fZ) goto L_0052634a;
L_005260b7:; BB(0x005260b7);
    /* 005260b7: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005260ba: jne 0x5261b6 */ if (!fZ) goto L_005261b6;
L_005260c0:; BB(0x005260c0);
    /* 005260c0: push dword ptr [esi + 0x398] */ { u32 v = R32((u32)(r_esi+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 005260c6: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005260c9: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x5260ceu); f_007a8cb8();
    /* 005260ce: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005260d1: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 005260d4: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 005260da: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005260dd: jne 0x526144 */ if (!fZ) goto L_00526144;
L_005260df:; BB(0x005260df);
    /* 005260df: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005260e2: and eax, 0xfbffffff */ {  u32 a = r_eax; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005260e7: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 005260ea: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 005260ef: mov edx, 4 */ r_edx = 0x4u;
    /* 005260f4: mov word ptr [esi + 0x382], dx */ W16((u32)(r_esi+0x382u), (u16)r_edx);
    /* 005260fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005260fd: jl 0x526144 */ if ((fS!=fO)) goto L_00526144;
L_005260ff:; BB(0x005260ff);
    /* 005260ff: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00526102: jle 0x526127 */ if ((fZ||fS!=fO)) goto L_00526127;
L_00526104:; BB(0x00526104);
    /* 00526104: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526107: jne 0x526144 */ if (!fZ) goto L_00526144;
L_00526109:; BB(0x00526109);
    /* 00526109: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x52610eu); f_00807ac0();
    /* 0052610e: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 00526111: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00526113: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00526114: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00526115: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00526116: push dword ptr [eax*4 + 0x9bbd08] */ { u32 v = R32((u32)(r_eax*4+0x9bbd08u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052611d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x526122u); f_00814298();
    /* 00526122: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00526125: jmp 0x526144 */ goto L_00526144;
L_00526127:; BB(0x00526127);
    /* 00526127: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00526129: push 0xcb */ { u32 v = 0xcbu; r_esp -= 4; W32(r_esp, v); }
    /* 0052612e: call 0x52d204 */ r_esp -= 4; W32(r_esp, 0x526133u); f_0052d204();
    /* 00526133: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 00526136: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00526138: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00526139: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052613a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052613b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052613c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x526141u); f_00814298();
    /* 00526141: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00526144:; BB(0x00526144);
    /* 00526144: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00526149: mov ecx, esi */ r_ecx = r_esi;
    /* 0052614b: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x526150u); f_007aaa30();
    /* 00526150: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526152: je 0x5263e7 */ if (fZ) goto L_005263e7;
L_00526158:; BB(0x00526158);
    /* 00526158: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 0052615d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0052615f: jl 0x5263e7 */ if ((fS!=fO)) goto L_005263e7;
L_00526165:; BB(0x00526165);
    /* 00526165: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00526168: jle 0x526194 */ if ((fZ||fS!=fO)) goto L_00526194;
L_0052616a:; BB(0x0052616a);
    /* 0052616a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052616d: jne 0x5263e7 */ if (!fZ) goto L_005263e7;
L_00526173:; BB(0x00526173);
    /* 00526173: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x526178u); f_00807ac0();
    /* 00526178: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 0052617b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052617d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052617e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052617f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00526180: push dword ptr [eax*4 + 0x9bbce4] */ { u32 v = R32((u32)(r_eax*4+0x9bbce4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00526187: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x52618cu); f_00814298();
    /* 0052618c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052618f: jmp 0x5263e7 */ goto L_005263e7;
L_00526194:; BB(0x00526194);
    /* 00526194: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00526196: push 0xca */ { u32 v = 0xcau; r_esp -= 4; W32(r_esp, v); }
    /* 0052619b: call 0x52d204 */ r_esp -= 4; W32(r_esp, 0x5261a0u); f_0052d204();
    /* 005261a0: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 005261a3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005261a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005261a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005261a7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005261a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005261a9: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5261aeu); f_00814298();
    /* 005261ae: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005261b1: jmp 0x5263e7 */ goto L_005263e7;
L_005261b6:; BB(0x005261b6);
    /* 005261b6: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005261b9: jne 0x5263e7 */ if (!fZ) goto L_005263e7;
L_005261bf:; BB(0x005261bf);
    /* 005261bf: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 005261c5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005261c8: jne 0x526333 */ if (!fZ) goto L_00526333;
L_005261ce:; BB(0x005261ce);
    /* 005261ce: mov ebx, dword ptr [esi] */ r_ebx = R32((u32)(r_esi));
    /* 005261d0: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 005261d6: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 005261d9: fmul dword ptr [0x921be8] */ ST(0) = ST(0) * R_F32((u32)(0x921be8u));
    /* 005261df: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 005261e2: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005261e5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005261e8: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005261ec: mov ecx, esi */ r_ecx = r_esi;
    /* 005261ee: call dword ptr [ebx + 0x48] */ { u32 t = R32((u32)(r_ebx+0x48u)); r_esp -= 4; W32(r_esp, 0x5261f1u); call_ind(t); }
    /* 005261f1: movsx eax, word ptr [esi + 0x39c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x39cu));
    /* 005261f8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005261fb: mov word ptr [esi + 0x39c], ax */ W16((u32)(r_esi+0x39cu), (u16)r_eax);
    /* 00526202: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00526205: cmp edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00526208: jle 0x52629c */ if ((fZ||fS!=fO)) goto L_0052629c;
L_0052620e:; BB(0x0052620e);
    /* 0052620e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00526211: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00526212: mov ecx, esi */ r_ecx = r_esi;
    /* 00526214: push 0x43960000 */ { u32 v = 0x43960000u; r_esp -= 4; W32(r_esp, v); }
    /* 00526219: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x52621eu); f_007714cc();
    /* 0052621e: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00526221: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526226: je 0x52629c */ if (fZ) goto L_0052629c;
L_00526228:; BB(0x00526228);
    /* 00526228: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0052622b: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0052622f: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00526231: fmul qword ptr [0x921b28] */ ST(0) = ST(0) * R_F64((u32)(0x921b28u));
    /* 00526237: fdiv qword ptr [0x921b20] */ ST(0) = ST(0) / R_F64((u32)(0x921b20u));
    /* 0052623d: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 00526241: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 00526246: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052624b: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0052624f: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 00526253: fistp dword ptr [esp + 0x40] */ W32((u32)(r_esp+0x40u), (u32)fx_int32(ST(0))); FPOP();
    /* 00526257: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 0052625b: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0052625f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00526260: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00526263: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x526268u); f_007a9018();
    /* 00526268: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052626b: cmp eax, 0xaaa */ {  u32 a = r_eax; u32 b = 0xaaau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00526270: jge 0x52629c */ if ((fS==fO)) goto L_0052629c;
L_00526272:; BB(0x00526272);
    /* 00526272: mov ecx, esi */ r_ecx = r_esi;
    /* 00526274: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x526279u); f_007751b0();
    /* 00526279: fcomp dword ptr [0x921be0] */ fx_compare(ST(0), R_F32((u32)(0x921be0u))); FPOP();
    /* 0052627f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00526281: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00526282: jb 0x52628b */ if (fC) goto L_0052628b;
L_00526284:; BB(0x00526284);
    /* 00526284: mov eax, 0xffffc000 */ r_eax = 0xffffc000u;
    /* 00526289: jmp 0x526290 */ goto L_00526290;
L_0052628b:; BB(0x0052628b);
    /* 0052628b: mov eax, 0x4000 */ r_eax = 0x4000u;
L_00526290:; BB(0x00526290);
    /* 00526290: add dword ptr [esi + 0x60], eax */ { u32 ad = (u32)(r_esi+0x60u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00526293: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00526295: mov word ptr [esi + 0x39c], ax */ W16((u32)(r_esi+0x39cu), (u16)r_eax);
L_0052629c:; BB(0x0052629c);
    /* 0052629c: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 005262a0: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 005262a3: mov ebx, dword ptr [esi + 0x3c] */ r_ebx = R32((u32)(r_esi+0x3cu));
    /* 005262a6: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 005262a9: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 005262ac: mov dword ptr [esi + 0x48], ebx */ W32((u32)(r_esi+0x48u), r_ebx);
    /* 005262af: mov dword ptr [esi + 0x4c], eax */ W32((u32)(r_esi+0x4cu), r_eax);
    /* 005262b2: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 005262b8: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005262bc: mov eax, dword ptr [esi + 0x304] */ r_eax = R32((u32)(r_esi+0x304u));
    /* 005262c2: lea ebx, [esi + 0x30c] */ r_ebx = (u32)(r_esi+0x30cu);
    /* 005262c8: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005262cc: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 005262d2: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005262d6: mov edx, ebx */ r_edx = r_ebx;
    /* 005262d8: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5262ddu); f_0082ebac();
    /* 005262dd: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005262df: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005262e1: mov ecx, esi */ r_ecx = r_esi;
    /* 005262e3: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x5262e6u); call_ind(t); }
    /* 005262e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005262e8: je 0x526309 */ if (fZ) goto L_00526309;
L_005262ea:; BB(0x005262ea);
    /* 005262ea: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005262ee: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005262f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005262f1: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 005262f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005262f8: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x5262fdu); f_0077fffc();
    /* 005262fd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00526300: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526302: jne 0x526320 */ if (!fZ) goto L_00526320;
L_00526304:; BB(0x00526304);
    /* 00526304: jmp 0x5263ff */ goto L_005263ff;
L_00526309:; BB(0x00526309);
    /* 00526309: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0052630d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052630f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00526310: mov ecx, esi */ r_ecx = r_esi;
    /* 00526312: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x526317u); f_007b4c58();
    /* 00526317: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052631a: je 0x52655d */ if (fZ) goto L_0052655d;
L_00526320:; BB(0x00526320);
    /* 00526320: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 00526324: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00526329: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0052632d: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00526330: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00526331: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00526332: ret  */ FN_RET(0x00526008); r_esp += 4; return;
L_00526333:; BB(0x00526333);
    /* 00526333: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00526335: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00526337: mov ecx, esi */ r_ecx = r_esi;
    /* 00526339: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x52633eu); f_00772b44();
    /* 0052633e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052633f: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x526344u); f_007b999c();
    /* 00526344: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00526347: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00526348: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00526349: ret  */ FN_RET(0x00526008); r_esp += 4; return;
L_0052634a:; BB(0x0052634a);
    /* 0052634a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052634c: je 0x5263d7 */ if (fZ) goto L_005263d7;
L_00526352:; BB(0x00526352);
    /* 00526352: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00526354: push dword ptr [eax + 0x308] */ { u32 v = R32((u32)(r_eax+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052635a: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 00526360: mov ecx, esi */ r_ecx = r_esi;
    /* 00526362: push dword ptr [eax + 0x304] */ { u32 v = R32((u32)(r_eax+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 00526368: push dword ptr [eax + 0x300] */ { u32 v = R32((u32)(r_eax+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052636e: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00526371: call 0x771bf4 */ r_esp -= 4; W32(r_esp, 0x526376u); f_00771bf4();
    /* 00526376: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0052637a: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 0052637e: fcomp dword ptr [0x921bd8] */ fx_compare(ST(0), R_F32((u32)(0x921bd8u))); FPOP();
    /* 00526384: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00526386: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00526387: jbe 0x526392 */ if ((fC||fZ)) goto L_00526392;
L_00526389:; BB(0x00526389);
    /* 00526389: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052638b: mov word ptr [esi + 0x382], ax */ W16((u32)(r_esi+0x382u), (u16)r_eax);
L_00526392:; BB(0x00526392);
    /* 00526392: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 00526398: lea eax, [esi + 0x30c] */ r_eax = (u32)(r_esi+0x30cu);
    /* 0052639e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052639f: mov ecx, esi */ r_ecx = r_esi;
    /* 005263a1: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005263a4: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x5263a9u); f_00771858();
    /* 005263a9: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 005263af: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 005263b1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005263b3: fcomp dword ptr [esp + 0x50] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x50u))); FPOP();
    /* 005263b7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005263b9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005263ba: jb 0x5263cc */ if (fC) goto L_005263cc;
L_005263bc:; BB(0x005263bc);
    /* 005263bc: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 005263c0: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 005263c3: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005263c5: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005263c7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005263c9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005263ca: jbe 0x5263e0 */ if ((fC||fZ)) goto L_005263e0;
L_005263cc:; BB(0x005263cc);
    /* 005263cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005263ce: mov ecx, esi */ r_ecx = r_esi;
    /* 005263d0: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5263d5u); f_007706b0();
    /* 005263d5: jmp 0x5263e0 */ goto L_005263e0;
L_005263d7:; BB(0x005263d7);
    /* 005263d7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005263d9: mov word ptr [esi + 0x382], ax */ W16((u32)(r_esi+0x382u), (u16)r_eax);
L_005263e0:; BB(0x005263e0);
    /* 005263e0: mov ecx, esi */ r_ecx = r_esi;
    /* 005263e2: call 0x526684 */ r_esp -= 4; W32(r_esp, 0x5263e7u); f_00526684();
L_005263e7:; BB(0x005263e7);
    /* 005263e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005263e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005263eb: mov ecx, esi */ r_ecx = r_esi;
    /* 005263ed: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x5263f2u); f_00772b44();
    /* 005263f2: mov ecx, esi */ r_ecx = r_esi;
    /* 005263f4: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5263f9u); f_007b6880();
    /* 005263f9: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005263fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005263fd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005263fe: ret  */ FN_RET(0x00526008); r_esp += 4; return;
L_005263ff:; BB(0x005263ff);
    /* 005263ff: mov ecx, esi */ r_ecx = r_esi;
    /* 00526401: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x526406u); f_007751b0();
    /* 00526406: fcomp dword ptr [0x921be0] */ fx_compare(ST(0), R_F32((u32)(0x921be0u))); FPOP();
    /* 0052640c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052640e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052640f: jae 0x526418 */ if (!fC) goto L_00526418;
L_00526411:; BB(0x00526411);
    /* 00526411: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00526416: jmp 0x52641d */ goto L_0052641d;
L_00526418:; BB(0x00526418);
    /* 00526418: mov eax, 1 */ r_eax = 0x1u;
L_0052641d:; BB(0x0052641d);
    /* 0052641d: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 00526421: mov dword ptr [esp + 0x48], ebp */ W32((u32)(r_esp+0x48u), r_ebp);
    /* 00526425: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00526427: shl eax, 0xc */ { u32 c = (12u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0052642a: mov ebp, eax */ r_ebp = r_eax;
    /* 0052642c: mov edi, edx */ r_edi = r_edx;
L_0052642e:; BB(0x0052642e);
    /* 0052642e: mov eax, dword ptr [esi + 0x30c] */ r_eax = R32((u32)(r_esi+0x30cu));
    /* 00526434: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00526438: mov eax, dword ptr [esi + 0x310] */ r_eax = R32((u32)(r_esi+0x310u));
    /* 0052643e: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00526442: mov eax, dword ptr [esi + 0x314] */ r_eax = R32((u32)(r_esi+0x314u));
    /* 00526448: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
L_0052644c:; BB(0x0052644c);
    /* 0052644c: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00526450: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00526454: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00526457: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0052645b: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 0052645e: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00526462: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 00526465: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00526469: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x52646eu); f_0082ebac();
    /* 0052646e: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 00526472: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00526474: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00526475: mov ecx, esi */ r_ecx = r_esi;
    /* 00526477: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x52647cu); f_007b4c58();
    /* 0052647c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052647f: je 0x5264ca */ if (fZ) goto L_005264ca;
L_00526481:; BB(0x00526481);
    /* 00526481: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00526484: cmp edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00526487: jge 0x5264bd */ if ((fS==fO)) goto L_005264bd;
L_00526489:; BB(0x00526489);
    /* 00526489: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052648b: je 0x52642e */ if (fZ) goto L_0052642e;
L_0052648d:; BB(0x0052648d);
    /* 0052648d: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00526492: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x526497u); f_0082d990();
    /* 00526497: mov edx, edi */ r_edx = r_edi;
    /* 00526499: imul edx, ebp */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ebp; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0052649c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052649e: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5264a3u); f_0082d8bc();
    /* 005264a3: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 005264a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005264a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005264aa: mov edx, ebx */ r_edx = r_ebx;
    /* 005264ac: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5264b1u); f_0082eab8();
    /* 005264b1: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005264b6: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x5264bbu); f_0082eb80();
    /* 005264bb: jmp 0x52644c */ goto L_0052644c;
L_005264bd:; BB(0x005264bd);
    /* 005264bd: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 005264c1: mov ebp, dword ptr [esp + 0x48] */ r_ebp = R32((u32)(r_esp+0x48u));
    /* 005264c5: jmp 0x526320 */ goto L_00526320;
L_005264ca:; BB(0x005264ca);
    /* 005264ca: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 005264ce: mov ebp, dword ptr [esp + 0x48] */ r_ebp = R32((u32)(r_esp+0x48u));
    /* 005264d2: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 005264d6: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 005264da: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 005264de: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 005264e1: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 005264e4: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 005264e7: mov dword ptr [esi + 0x30c], eax */ W32((u32)(r_esi+0x30cu), r_eax);
    /* 005264ed: mov dword ptr [esi + 0x310], edx */ W32((u32)(r_esi+0x310u), r_edx);
    /* 005264f3: mov dword ptr [esi + 0x314], ecx */ W32((u32)(r_esi+0x314u), r_ecx);
    /* 005264f9: lea edx, [esi + 0x44] */ r_edx = (u32)(r_esi+0x44u);
    /* 005264fc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005264fe: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x526503u); f_0082f9c4();
L_00526503:; BB(0x00526503);
    /* 00526503: movsx eax, word ptr [esi + 0x39e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x39eu));
    /* 0052650a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052650d: mov word ptr [esi + 0x39e], ax */ W16((u32)(r_esi+0x39eu), (u16)r_eax);
    /* 00526514: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00526517: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00526519: jl 0x52653e */ if ((fS!=fO)) goto L_0052653e;
L_0052651b:; BB(0x0052651b);
    /* 0052651b: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
L_0052651e:; BB(0x0052651e);
    /* 0052651e: push 0xcb */ { u32 v = 0xcbu; r_esp -= 4; W32(r_esp, v); }
    /* 00526523: mov ecx, esi */ r_ecx = r_esi;
    /* 00526525: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x52652au); f_007879b8();
    /* 0052652a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052652c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052652d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052652e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052652f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00526530: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00526531: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x526536u); f_008144b0();
    /* 00526536: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00526539: jmp 0x526333 */ goto L_00526333;
L_0052653e:; BB(0x0052653e);
    /* 0052653e: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 00526543: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 00526546: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00526547: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x52654cu); f_0050b510();
    /* 0052654c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052654f: mov eax, 2 */ r_eax = 0x2u;
    /* 00526554: mov word ptr [esi + 0x39e], ax */ W16((u32)(r_esi+0x39eu), (u16)r_eax);
    /* 0052655b: jmp 0x52651e */ goto L_0052651e;
L_0052655d:; BB(0x0052655d);
    /* 0052655d: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00526561: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00526565: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00526569: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 0052656c: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 0052656f: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 00526572: mov dword ptr [esi + 0x30c], eax */ W32((u32)(r_esi+0x30cu), r_eax);
    /* 00526578: mov dword ptr [esi + 0x310], edx */ W32((u32)(r_esi+0x310u), r_edx);
    /* 0052657e: mov dword ptr [esi + 0x314], ecx */ W32((u32)(r_esi+0x314u), r_ecx);
    /* 00526584: lea edx, [esi + 0x44] */ r_edx = (u32)(r_esi+0x44u);
    /* 00526587: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00526589: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x52658eu); f_0082f9c4();
    /* 0052658e: jmp 0x526503 */ goto L_00526503;
L_00526593:; BB(0x00526593);
    /* 00526593: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526595: je 0x52665b */ if (fZ) goto L_0052665b;
L_0052659b:; BB(0x0052659b);
    /* 0052659b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052659d: push dword ptr [eax + 0x308] */ { u32 v = R32((u32)(r_eax+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 005265a3: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 005265a9: mov ecx, esi */ r_ecx = r_esi;
    /* 005265ab: push dword ptr [eax + 0x304] */ { u32 v = R32((u32)(r_eax+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 005265b1: push dword ptr [eax + 0x300] */ { u32 v = R32((u32)(r_eax+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 005265b7: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005265ba: call 0x771bf4 */ r_esp -= 4; W32(r_esp, 0x5265bfu); f_00771bf4();
    /* 005265bf: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 005265c3: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005265c6: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005265c8: jne 0x52660c */ if (!fZ) goto L_0052660c;
L_005265ca:; BB(0x005265ca);
    /* 005265ca: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 005265ce: fcomp dword ptr [0x921bcc] */ fx_compare(ST(0), R_F32((u32)(0x921bccu))); FPOP();
    /* 005265d4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005265d6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005265d7: jae 0x52660c */ if (!fC) goto L_0052660c;
L_005265d9:; BB(0x005265d9);
    /* 005265d9: mov dword ptr [esi + 0x3a0], 0 */ W32((u32)(r_esi+0x3a0u), 0x0u);
    /* 005265e3: mov eax, 1 */ r_eax = 0x1u;
    /* 005265e8: mov word ptr [esi + 0x382], ax */ W16((u32)(r_esi+0x382u), (u16)r_eax);
    /* 005265ef: mov ecx, esi */ r_ecx = r_esi;
    /* 005265f1: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5265f6u); f_007751b0();
    /* 005265f6: fld dword ptr [0x921be0] */ FPUSH(R_F32((u32)(0x921be0u)));
    /* 005265fc: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 005265fe: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00526600: fmul dword ptr [0x921bc8] */ ST(0) = ST(0) * R_F32((u32)(0x921bc8u));
    /* 00526606: fstp dword ptr [esi + 0x3a4] */ W_F32((u32)(r_esi+0x3a4u), ST(0)); FPOP();
L_0052660c:; BB(0x0052660c);
    /* 0052660c: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 00526612: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00526614: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00526616: fcomp dword ptr [esp + 0x50] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x50u))); FPOP();
    /* 0052661a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052661c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052661d: jb 0x52662f */ if (fC) goto L_0052662f;
L_0052661f:; BB(0x0052661f);
    /* 0052661f: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 00526623: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00526626: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00526628: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0052662a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052662c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052662d: jbe 0x52663e */ if ((fC||fZ)) goto L_0052663e;
L_0052662f:; BB(0x0052662f);
    /* 0052662f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00526631: mov ecx, esi */ r_ecx = r_esi;
    /* 00526633: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x526638u); f_007706b0();
    /* 00526638: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
L_0052663e:; BB(0x0052663e);
    /* 0052663e: lea eax, [esi + 0x30c] */ r_eax = (u32)(r_esi+0x30cu);
    /* 00526644: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00526645: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00526648: mov ecx, esi */ r_ecx = r_esi;
    /* 0052664a: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x52664fu); f_00771858();
    /* 0052664f: mov ecx, esi */ r_ecx = r_esi;
    /* 00526651: call 0x526684 */ r_esp -= 4; W32(r_esp, 0x526656u); f_00526684();
    /* 00526656: jmp 0x5263e7 */ goto L_005263e7;
L_0052665b:; BB(0x0052665b);
    /* 0052665b: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 00526661: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00526664: mov ecx, esi */ r_ecx = r_esi;
    /* 00526666: push 0x42480000 */ { u32 v = 0x42480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052666b: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00526670: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00526673: call 0x772054 */ r_esp -= 4; W32(r_esp, 0x526678u); f_00772054();
    /* 00526678: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0052667a: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 00526680: jmp 0x52663e */ goto L_0052663e;
}

void f_00526684(void) /* sub_526684 */
{
    FN_ENTER(0x00526684);
    /* 00526684: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00526685: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00526687: movsx eax, word ptr [ebp + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 0052668e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00526691: je 0x526695 */ if (fZ) goto L_00526695;
L_00526693:; BB(0x00526693);
    /* 00526693: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00526694: ret  */ FN_RET(0x00526684); r_esp += 4; return;
L_00526695:; BB(0x00526695);
    /* 00526695: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052669a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052669c: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5266a1u); f_007aaa30();
    /* 005266a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005266a3: jne 0x5266b5 */ if (!fZ) goto L_005266b5;
L_005266a5:; BB(0x005266a5);
    /* 005266a5: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005266aa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005266ac: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5266b1u); f_007aaa30();
    /* 005266b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005266b3: je 0x526693 */ if (fZ) goto L_00526693;
L_005266b5:; BB(0x005266b5);
    /* 005266b5: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 005266ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005266bc: jl 0x526693 */ if ((fS!=fO)) goto L_00526693;
L_005266be:; BB(0x005266be);
    /* 005266be: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005266c1: jle 0x5266e6 */ if ((fZ||fS!=fO)) goto L_005266e6;
L_005266c3:; BB(0x005266c3);
    /* 005266c3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005266c6: jne 0x526693 */ if (!fZ) goto L_00526693;
L_005266c8:; BB(0x005266c8);
    /* 005266c8: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5266cdu); f_00807ac0();
    /* 005266cd: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005266d0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005266d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005266d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005266d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005266d5: push dword ptr [eax*4 + 0x9bbc54] */ { u32 v = R32((u32)(r_eax*4+0x9bbc54u)); r_esp -= 4; W32(r_esp, v); }
    /* 005266dc: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5266e1u); f_00814298();
    /* 005266e1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005266e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005266e5: ret  */ FN_RET(0x00526684); r_esp += 4; return;
L_005266e6:; BB(0x005266e6);
    /* 005266e6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005266e8: push 0xc5 */ { u32 v = 0xc5u; r_esp -= 4; W32(r_esp, v); }
    /* 005266ed: call 0x52d204 */ r_esp -= 4; W32(r_esp, 0x5266f2u); f_0052d204();
    /* 005266f2: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005266f5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005266f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005266f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005266f9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005266fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005266fb: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x526700u); f_00814298();
    /* 00526700: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00526703: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00526704: ret  */ FN_RET(0x00526684); r_esp += 4; return;
}

void f_00526708(void) /* sub_526708 */
{
    FN_ENTER(0x00526708);
    /* 00526708: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00526709: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052670c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0052670e: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00526711: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00526713: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00526715: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x526718u); call_ind(t); }
    /* 00526718: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052671a: je 0x526799 */ if (fZ) goto L_00526799;
L_0052671c:; BB(0x0052671c);
    /* 0052671c: movsx eax, byte ptr [ebp + 0x381] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x381u));
    /* 00526723: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526725: je 0x526733 */ if (fZ) goto L_00526733;
L_00526727:; BB(0x00526727);
    /* 00526727: fld dword ptr [0x921bb8] */ FPUSH(R_F32((u32)(0x921bb8u)));
    /* 0052672d: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00526731: jmp 0x52673d */ goto L_0052673d;
L_00526733:; BB(0x00526733);
    /* 00526733: fld dword ptr [0x921bbc] */ FPUSH(R_F32((u32)(0x921bbcu)));
    /* 00526739: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
L_0052673d:; BB(0x0052673d);
    /* 0052673d: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 00526740: lea eax, [ebp + 0x50] */ r_eax = (u32)(r_ebp+0x50u);
    /* 00526743: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00526744: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00526745: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x52674au); f_0078ea50();
    /* 0052674a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052674d: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00526751: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00526753: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00526755: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00526757: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00526758: jae 0x526774 */ if (!fC) goto L_00526774;
L_0052675a:; BB(0x0052675a);
    /* 0052675a: mov byte ptr [ebp + 0x380], 2 */ W8((u32)(r_ebp+0x380u), 0x2u);
    /* 00526761: mov eax, 3 */ r_eax = 0x3u;
    /* 00526766: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0052676d: mov edx, 2 */ r_edx = 0x2u;
    /* 00526772: jmp 0x5267a0 */ goto L_005267a0;
L_00526774:; BB(0x00526774);
    /* 00526774: movsx edx, byte ptr [ebp + 0x380] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0x380u));
    /* 0052677b: movsx eax, byte ptr [ebp + 0x381] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x381u));
    /* 00526782: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526784: je 0x5267a0 */ if (fZ) goto L_005267a0;
L_00526786:; BB(0x00526786);
    /* 00526786: mov byte ptr [ebp + 0x380], al */ W8((u32)(r_ebp+0x380u), (u8)r_eax);
    /* 0052678c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052678e: mov word ptr [ebp + 0x330], dx */ W16((u32)(r_ebp+0x330u), (u16)r_edx);
    /* 00526795: mov edx, eax */ r_edx = r_eax;
    /* 00526797: jmp 0x5267a0 */ goto L_005267a0;
L_00526799:; BB(0x00526799);
    /* 00526799: movsx edx, byte ptr [ebp + 0x380] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0x380u));
L_005267a0:; BB(0x005267a0);
    /* 005267a0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005267a2: je 0x526827 */ if (fZ) goto L_00526827;
L_005267a8:; BB(0x005267a8);
    /* 005267a8: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005267ab: jne 0x5267de */ if (!fZ) goto L_005267de;
L_005267ad:; BB(0x005267ad);
    /* 005267ad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005267af: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005267b6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005267b8: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5267bdu); f_007aa094();
    /* 005267bd: movsx eax, word ptr [ebp + 0x386] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x386u));
    /* 005267c4: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005267c7: mov word ptr [ebp + 0x386], ax */ W16((u32)(r_ebp+0x386u), (u16)r_eax);
    /* 005267ce: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 005267d1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005267d3: jl 0x526917 */ if ((fS!=fO)) goto L_00526917;
L_005267d9:; BB(0x005267d9);
    /* 005267d9: jmp 0x5268d1 */ goto L_005268d1;
L_005267de:; BB(0x005267de);
    /* 005267de: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005267e1: jne 0x5268d1 */ if (!fZ) goto L_005268d1;
L_005267e7:; BB(0x005267e7);
    /* 005267e7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005267e9: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5267eeu); f_007aa094();
    /* 005267ee: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005267f0: push dword ptr [ebp + 0x58] */ { u32 v = R32((u32)(r_ebp+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 005267f3: mov edx, dword ptr [ebp + 0x358] */ r_edx = R32((u32)(r_ebp+0x358u));
    /* 005267f9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005267fb: push dword ptr [ebp + 0x54] */ { u32 v = R32((u32)(r_ebp+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 005267fe: push dword ptr [ebp + 0x50] */ { u32 v = R32((u32)(r_ebp+0x50u)); r_esp -= 4; W32(r_esp, v); }
    /* 00526801: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00526804: call 0x771bf4 */ r_esp -= 4; W32(r_esp, 0x526809u); f_00771bf4();
    /* 00526809: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0052680b: mov edx, dword ptr [ebp + 0x358] */ r_edx = R32((u32)(r_ebp+0x358u));
    /* 00526811: lea eax, [ebp + 0x30c] */ r_eax = (u32)(r_ebp+0x30cu);
    /* 00526817: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00526818: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052681a: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052681d: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x526822u); f_00771858();
    /* 00526822: jmp 0x5268d1 */ goto L_005268d1;
L_00526827:; BB(0x00526827);
    /* 00526827: movsx eax, word ptr [ebp + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x330u));
    /* 0052682e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526830: je 0x526a2e */ if (fZ) goto L_00526a2e;
L_00526836:; BB(0x00526836);
    /* 00526836: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526839: je 0x5268ae */ if (fZ) goto L_005268ae;
L_0052683b:; BB(0x0052683b);
    /* 0052683b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052683e: jne 0x52685f */ if (!fZ) goto L_0052685f;
L_00526840:; BB(0x00526840);
    /* 00526840: mov dword ptr [ebp + 0x394], 0x41f00000 */ W32((u32)(r_ebp+0x394u), 0x41f00000u);
    /* 0052684a: mov eax, 3 */ r_eax = 0x3u;
    /* 0052684f: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 00526856: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 0052685d: jmp 0x526864 */ goto L_00526864;
L_0052685f:; BB(0x0052685f);
    /* 0052685f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526862: jne 0x5268ca */ if (!fZ) goto L_005268ca;
L_00526864:; BB(0x00526864);
    /* 00526864: mov edx, dword ptr [ebp + 0x358] */ r_edx = R32((u32)(r_ebp+0x358u));
    /* 0052686a: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052686d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052686f: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00526874: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00526879: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052687c: call 0x772054 */ r_esp -= 4; W32(r_esp, 0x526881u); f_00772054();
    /* 00526881: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00526883: mov edx, dword ptr [ebp + 0x358] */ r_edx = R32((u32)(r_ebp+0x358u));
    /* 00526889: fld dword ptr [ebp + 0x394] */ FPUSH(R_F32((u32)(r_ebp+0x394u)));
    /* 0052688f: fsub dword ptr [edx + 4] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x4u));
    /* 00526892: fcom dword ptr [0x921ba8] */ fx_compare(ST(0), R_F32((u32)(0x921ba8u))); 
    /* 00526898: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052689a: fstp dword ptr [ebp + 0x394] */ W_F32((u32)(r_ebp+0x394u), ST(0)); FPOP();
    /* 005268a0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005268a1: jae 0x5268ca */ if (!fC) goto L_005268ca;
L_005268a3:; BB(0x005268a3);
    /* 005268a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005268a5: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 005268ac: jmp 0x5268ca */ goto L_005268ca;
L_005268ae:; BB(0x005268ae);
    /* 005268ae: movsx eax, word ptr [ebp + 0x386] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x386u));
L_005268b5:; BB(0x005268b5);
    /* 005268b5: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005268b8: mov word ptr [ebp + 0x386], ax */ W16((u32)(r_ebp+0x386u), (u16)r_eax);
    /* 005268bf: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005268c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005268c4: jl 0x5269cb */ if ((fS!=fO)) goto L_005269cb;
L_005268ca:; BB(0x005268ca);
    /* 005268ca: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005268cc: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5268d1u); f_007aa094();
L_005268d1:; BB(0x005268d1);
    /* 005268d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005268d2: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x5268d7u); f_007b999c();
    /* 005268d7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005268d8: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 005268db: test ecx, 0x800000 */ {  u32 a = r_ecx; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005268e1: jne 0x5268f1 */ if (!fZ) goto L_005268f1;
L_005268e3:; BB(0x005268e3);
    /* 005268e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005268e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005268e7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005268e9: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x5268eeu); f_00772b44();
    /* 005268ee: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
L_005268f1:; BB(0x005268f1);
    /* 005268f1: test ecx, 0x40000 */ {  u32 a = r_ecx; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005268f7: je 0x526912 */ if (fZ) goto L_00526912;
L_005268f9:; BB(0x005268f9);
    /* 005268f9: movsx eax, word ptr [ebp + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x344u));
    /* 00526900: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 00526903: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00526905: jl 0x5269af */ if ((fS!=fO)) goto L_005269af;
L_0052690b:; BB(0x0052690b);
    /* 0052690b: mov word ptr [ebp + 0x344], dx */ W16((u32)(r_ebp+0x344u), (u16)r_edx);
L_00526912:; BB(0x00526912);
    /* 00526912: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00526915: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00526916: ret  */ FN_RET(0x00526708); r_esp += 4; return;
L_00526917:; BB(0x00526917);
    /* 00526917: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 0052691c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0052691e: jl 0x526969 */ if ((fS!=fO)) goto L_00526969;
L_00526920:; BB(0x00526920);
    /* 00526920: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00526923: jle 0x52694a */ if ((fZ||fS!=fO)) goto L_0052694a;
L_00526925:; BB(0x00526925);
    /* 00526925: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526928: jne 0x526969 */ if (!fZ) goto L_00526969;
L_0052692a:; BB(0x0052692a);
    /* 0052692a: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x52692fu); f_00807ac0();
    /* 0052692f: mov ecx, eax */ r_ecx = r_eax;
    /* 00526931: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 00526934: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00526936: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00526937: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00526938: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00526939: push dword ptr [ecx*4 + 0x9bbc30] */ { u32 v = R32((u32)(r_ecx*4+0x9bbc30u)); r_esp -= 4; W32(r_esp, v); }
    /* 00526940: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x526945u); f_00814298();
    /* 00526945: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00526948: jmp 0x526969 */ goto L_00526969;
L_0052694a:; BB(0x0052694a);
    /* 0052694a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0052694c: push 0xc4 */ { u32 v = 0xc4u; r_esp -= 4; W32(r_esp, v); }
    /* 00526951: call 0x52d204 */ r_esp -= 4; W32(r_esp, 0x526956u); f_0052d204();
    /* 00526956: mov ecx, eax */ r_ecx = r_eax;
    /* 00526958: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0052695b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052695d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052695e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052695f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00526960: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00526961: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x526966u); f_00814298();
    /* 00526966: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00526969:; BB(0x00526969);
    /* 00526969: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052696b: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x526970u); f_007751b0();
    /* 00526970: fld dword ptr [0x921bb4] */ FPUSH(R_F32((u32)(0x921bb4u)));
    /* 00526976: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00526978: fmul dword ptr [0x921bb0] */ ST(0) = ST(0) * R_F32((u32)(0x921bb0u));
    /* 0052697e: fmul dword ptr [0x921bac] */ ST(0) = ST(0) * R_F32((u32)(0x921bacu));
    /* 00526984: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00526987: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0052698b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00526990: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00526994: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00526998: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0052699c: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0052699f: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005269a3: mov word ptr [ebp + 0x386], ax */ W16((u32)(r_ebp+0x386u), (u16)r_eax);
    /* 005269aa: jmp 0x5268d1 */ goto L_005268d1;
L_005269af:; BB(0x005269af);
    /* 005269af: movzx eax, word ptr [ebp + 0x342] */ r_eax = (u32)R16((u32)(r_ebp+0x342u));
    /* 005269b6: and ecx, 0xfffbffff */ {  u32 a = r_ecx; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005269bc: mov dword ptr [ebp + 0x30], ecx */ W32((u32)(r_ebp+0x30u), r_ecx);
    /* 005269bf: mov word ptr [ebp + 0x344], ax */ W16((u32)(r_ebp+0x344u), (u16)r_eax);
    /* 005269c6: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005269c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005269ca: ret  */ FN_RET(0x00526708); r_esp += 4; return;
L_005269cb:; BB(0x005269cb);
    /* 005269cb: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 005269d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005269d2: jl 0x526a1d */ if ((fS!=fO)) goto L_00526a1d;
L_005269d4:; BB(0x005269d4);
    /* 005269d4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005269d7: jle 0x5269fe */ if ((fZ||fS!=fO)) goto L_005269fe;
L_005269d9:; BB(0x005269d9);
    /* 005269d9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005269dc: jne 0x526a1d */ if (!fZ) goto L_00526a1d;
L_005269de:; BB(0x005269de);
    /* 005269de: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5269e3u); f_00807ac0();
    /* 005269e3: mov ecx, eax */ r_ecx = r_eax;
    /* 005269e5: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 005269e8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005269ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005269eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005269ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005269ed: push dword ptr [ecx*4 + 0x9bbc30] */ { u32 v = R32((u32)(r_ecx*4+0x9bbc30u)); r_esp -= 4; W32(r_esp, v); }
    /* 005269f4: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5269f9u); f_00814298();
    /* 005269f9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005269fc: jmp 0x526a1d */ goto L_00526a1d;
L_005269fe:; BB(0x005269fe);
    /* 005269fe: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00526a00: push 0xc4 */ { u32 v = 0xc4u; r_esp -= 4; W32(r_esp, v); }
    /* 00526a05: call 0x52d204 */ r_esp -= 4; W32(r_esp, 0x526a0au); f_0052d204();
    /* 00526a0a: mov ecx, eax */ r_ecx = r_eax;
    /* 00526a0c: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 00526a0f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00526a11: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00526a12: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00526a13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00526a14: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00526a15: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x526a1au); f_00814298();
    /* 00526a1a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00526a1d:; BB(0x00526a1d);
    /* 00526a1d: mov eax, 2 */ r_eax = 0x2u;
    /* 00526a22: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 00526a29: jmp 0x5268ca */ goto L_005268ca;
L_00526a2e:; BB(0x00526a2e);
    /* 00526a2e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00526a30: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x526a35u); f_007751b0();
    /* 00526a35: fld dword ptr [0x921bb4] */ FPUSH(R_F32((u32)(0x921bb4u)));
    /* 00526a3b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00526a3d: fmul dword ptr [0x921ba4] */ ST(0) = ST(0) * R_F32((u32)(0x921ba4u));
    /* 00526a43: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00526a46: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00526a4a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00526a4f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00526a53: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00526a57: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00526a5b: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00526a5e: mov edx, 1 */ r_edx = 0x1u;
    /* 00526a63: movsx eax, word ptr [esp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 00526a68: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
    /* 00526a6f: mov word ptr [ebp + 0x330], dx */ W16((u32)(r_ebp+0x330u), (u16)r_edx);
    /* 00526a76: jmp 0x5268b5 */ goto L_005268b5;
}

void f_00526a7c(void) /* sub_526A7C */
{
    FN_ENTER(0x00526a7c);
    /* 00526a7c: mov eax, dword ptr [ecx + 0x370] */ r_eax = R32((u32)(r_ecx+0x370u));
    /* 00526a82: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00526a85: jge 0x526ab6 */ if ((fS==fO)) goto L_00526ab6;
L_00526a87:; BB(0x00526a87);
    /* 00526a87: mov edx, dword ptr [eax*4 + 0xa72f74] */ r_edx = R32((u32)(r_eax*4+0xa72f74u));
    /* 00526a8e: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 00526a94: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00526a96: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 00526a99: mov ecx, dword ptr [ecx + 0x370] */ r_ecx = R32((u32)(r_ecx+0x370u));
    /* 00526a9f: mov edx, dword ptr [ecx*4 + 0xa72f74] */ r_edx = R32((u32)(r_ecx*4+0xa72f74u));
    /* 00526aa6: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00526aa9: mov dword ptr [0x9bbc88], eax */ W32((u32)(0x9bbc88u), r_eax);
    /* 00526aae: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00526ab1: mov dword ptr [0x9bbca8], eax */ W32((u32)(0x9bbca8u), r_eax);
L_00526ab6:; BB(0x00526ab6);
    /* 00526ab6: ret  */ FN_RET(0x00526a7c); r_esp += 4; return;
}

void f_00526ab8(void) /* sub_526AB8 */
{
    FN_ENTER(0x00526ab8);
    /* 00526ab8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00526ab9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00526aba: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00526abc: mov edx, dword ptr [ebp + 0x370] */ r_edx = R32((u32)(r_ebp+0x370u));
    /* 00526ac2: mov ebx, dword ptr [edx*4 + 0xa72f40] */ r_ebx = R32((u32)(r_edx*4+0xa72f40u));
    /* 00526ac9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526acb: je 0x526af1 */ if (fZ) goto L_00526af1;
L_00526acd:; BB(0x00526acd);
    /* 00526acd: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 00526ad2: cmp eax, dword ptr [edx*4 + 0xa72f38] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx*4+0xa72f38u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526ad9: je 0x526af1 */ if (fZ) goto L_00526af1;
L_00526adb:; BB(0x00526adb);
    /* 00526adb: mov dword ptr [edx*4 + 0xa72f38], eax */ W32((u32)(r_edx*4+0xa72f38u), r_eax);
    /* 00526ae2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00526ae4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00526ae6: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00526ae8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00526ae9: call 0x81a2b0 */ r_esp -= 4; W32(r_esp, 0x526aeeu); f_0081a2b0();
    /* 00526aee: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00526af1:; BB(0x00526af1);
    /* 00526af1: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00526af4: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00526af9: jne 0x526c23 */ if (!fZ) goto L_00526c23;
L_00526aff:; BB(0x00526aff);
    /* 00526aff: mov edx, dword ptr [0xa72f94] */ r_edx = R32((u32)(0xa72f94u));
    /* 00526b05: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526b07: je 0x526b1c */ if (fZ) goto L_00526b1c;
L_00526b09:; BB(0x00526b09);
    /* 00526b09: movzx eax, word ptr [ebp + 0x37c] */ r_eax = (u32)R16((u32)(r_ebp+0x37cu));
    /* 00526b10: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00526b12: je 0x526b19 */ if (fZ) goto L_00526b19;
L_00526b14:; BB(0x00526b14);
    /* 00526b14: and dword ptr [edx], 0xfffffff7 */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00526b17: jmp 0x526b1c */ goto L_00526b1c;
L_00526b19:; BB(0x00526b19);
    /* 00526b19: or dword ptr [edx], 8 */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00526b1c:; BB(0x00526b1c);
    /* 00526b1c: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00526b21: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00526b23: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00526b26: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00526b2b: push 0x43160000 */ { u32 v = 0x43160000u; r_esp -= 4; W32(r_esp, v); }
    /* 00526b30: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x526b33u); call_ind(t); }
    /* 00526b33: mov ebx, eax */ r_ebx = r_eax;
    /* 00526b35: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00526b37: je 0x526c23 */ if (fZ) goto L_00526c23;
L_00526b3d:; BB(0x00526b3d);
    /* 00526b3d: mov eax, dword ptr [ebp + 0x370] */ r_eax = R32((u32)(r_ebp+0x370u));
    /* 00526b43: mov edx, dword ptr [eax*4 + 0xa72f6c] */ r_edx = R32((u32)(r_eax*4+0xa72f6cu));
    /* 00526b4a: mov ecx, dword ptr [eax*4 + 0xa72f64] */ r_ecx = R32((u32)(r_eax*4+0xa72f64u));
    /* 00526b51: mov dword ptr [ebp + 0x34], edx */ W32((u32)(r_ebp+0x34u), r_edx);
    /* 00526b54: mov dword ptr [ebp + 0x24], ecx */ W32((u32)(r_ebp+0x24u), r_ecx);
    /* 00526b57: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x526b5cu); f_00829cc8();
    /* 00526b5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00526b5d: call 0x794548 */ r_esp -= 4; W32(r_esp, 0x526b62u); f_00794548();
    /* 00526b62: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00526b63: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x526b68u); f_00578b38();
    /* 00526b68: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x526b6du); f_0082d7b0();
    /* 00526b6d: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 00526b70: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x526b75u); f_0082d838();
    /* 00526b75: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00526b78: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00526b7a: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x526b7fu); f_0082d8bc();
    /* 00526b7f: movzx edx, word ptr [ebp + 0x37c] */ r_edx = (u32)R16((u32)(r_ebp+0x37cu));
    /* 00526b86: test edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526b8c: jne 0x526c3a */ if (!fZ) goto L_00526c3a;
L_00526b92:; BB(0x00526b92);
    /* 00526b92: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 00526b98: and edx, 0xfffffbff */ {  u32 a = r_edx; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00526b9e: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 00526ba4: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x526ba9u); f_0082fa9c();
    /* 00526ba9: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x526baeu); f_004f7c84();
    /* 00526bae: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526bb1: je 0x526c2f */ if (fZ) goto L_00526c2f;
L_00526bb3:; BB(0x00526bb3);
    /* 00526bb3: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 00526bb9: or edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00526bbf: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 00526bc5: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526bc8: je 0x526c26 */ if (fZ) goto L_00526c26;
L_00526bca:; BB(0x00526bca);
    /* 00526bca: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00526bcc: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x526bd1u); f_007aa7b8();
L_00526bd1:; BB(0x00526bd1);
    /* 00526bd1: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00526bd6: and eax, 0xfeffffff */ {  u32 a = r_eax; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00526bdb: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
L_00526be0:; BB(0x00526be0);
    /* 00526be0: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x526be5u); f_0082faac();
    /* 00526be5: movzx eax, word ptr [ebp + 0x37c] */ r_eax = (u32)R16((u32)(r_ebp+0x37cu));
    /* 00526bec: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526bf1: je 0x526bf8 */ if (fZ) goto L_00526bf8;
L_00526bf3:; BB(0x00526bf3);
    /* 00526bf3: call 0x520e88 */ r_esp -= 4; W32(r_esp, 0x526bf8u); f_00520e88();
L_00526bf8:; BB(0x00526bf8);
    /* 00526bf8: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x526bfdu); f_0082da80();
    /* 00526bfd: call 0x794750 */ r_esp -= 4; W32(r_esp, 0x526c02u); f_00794750();
    /* 00526c02: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x526c07u); f_0082dab0();
    /* 00526c07: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00526c0a: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00526c0f: jne 0x526c23 */ if (!fZ) goto L_00526c23;
L_00526c11:; BB(0x00526c11);
    /* 00526c11: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00526c16: je 0x526c23 */ if (fZ) goto L_00526c23;
L_00526c18:; BB(0x00526c18);
    /* 00526c18: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00526c1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00526c1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00526c1c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00526c1e: call 0x779d4c */ r_esp -= 4; W32(r_esp, 0x526c23u); f_00779d4c();
L_00526c23:; BB(0x00526c23);
    /* 00526c23: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00526c24: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00526c25: ret  */ FN_RET(0x00526ab8); r_esp += 4; return;
L_00526c26:; BB(0x00526c26);
    /* 00526c26: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00526c28: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x526c2du); f_007aa668();
    /* 00526c2d: jmp 0x526bd1 */ goto L_00526bd1;
L_00526c2f:; BB(0x00526c2f);
    /* 00526c2f: push dword ptr [ebp + 0x34] */ { u32 v = R32((u32)(r_ebp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00526c32: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x526c37u); f_0082e1e8();
    /* 00526c37: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00526c38: jmp 0x526be0 */ goto L_00526be0;
L_00526c3a:; BB(0x00526c3a);
    /* 00526c3a: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00526c3f: push 0x3fc00000 */ { u32 v = 0x3fc00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00526c44: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00526c49: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00526c4b: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x526c50u); f_0082fa0c();
    /* 00526c50: push dword ptr [0xa72f28] */ { u32 v = R32((u32)(0xa72f28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00526c56: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x526c5bu); f_0061cdb0();
    /* 00526c5b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00526c5c: jmp 0x526b92 */ goto L_00526b92;
}

void f_00526c64(void) /* sub_526C64 */
{
    FN_ENTER(0x00526c64);
    /* 00526c64: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 00526c69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00526c6b: jne 0x526c94 */ if (!fZ) goto L_00526c94;
L_00526c6d:; BB(0x00526c6d);
    /* 00526c6d: mov ecx, dword ptr [0xa72f68] */ r_ecx = R32((u32)(0xa72f68u));
    /* 00526c73: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526c75: je 0x526ca5 */ if (fZ) goto L_00526ca5;
L_00526c77:; BB(0x00526c77);
    /* 00526c77: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x526c7cu); f_00829de0();
    /* 00526c7c: push dword ptr [0xa72f68] */ { u32 v = R32((u32)(0xa72f68u)); r_esp -= 4; W32(r_esp, v); }
    /* 00526c82: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x526c87u); f_0082e960();
    /* 00526c87: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00526c88: mov dword ptr [0xa72f68], 0 */ W32((u32)(0xa72f68u), 0x0u);
    /* 00526c92: jmp 0x526ca5 */ goto L_00526ca5;
L_00526c94:; BB(0x00526c94);
    /* 00526c94: jle 0x526ca5 */ if ((fZ||fS!=fO)) goto L_00526ca5;
L_00526c96:; BB(0x00526c96);
    /* 00526c96: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00526c99: jg 0x526ca5 */ if ((!fZ&&fS==fO)) goto L_00526ca5;
L_00526c9b:; BB(0x00526c9b);
    /* 00526c9b: mov dword ptr [0xa72f68], 0 */ W32((u32)(0xa72f68u), 0x0u);
L_00526ca5:; BB(0x00526ca5);
    /* 00526ca5: mov ecx, dword ptr [0xa72f48] */ r_ecx = R32((u32)(0xa72f48u));
    /* 00526cab: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00526cad: je 0x526cc2 */ if (fZ) goto L_00526cc2;
L_00526caf:; BB(0x00526caf);
    /* 00526caf: je 0x526cb8 */ if (fZ) goto L_00526cb8;
L_00526cb1:; BB(0x00526cb1);
    /* 00526cb1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00526cb3: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x526cb8u); f_004066a8();
L_00526cb8:; BB(0x00526cb8);
    /* 00526cb8: mov dword ptr [0xa72f48], 0 */ W32((u32)(0xa72f48u), 0x0u);
L_00526cc2:; BB(0x00526cc2);
    /* 00526cc2: ret  */ FN_RET(0x00526c64); r_esp += 4; return;
}

void f_00526cc4(void)
{
    FN_ENTER(0x00526cc4);
    /* 00526cc4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00526cc5: mov ebp, esp */ r_ebp = r_esp;
    /* 00526cc7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00526cc9: push 0x8d4a16 */ { u32 v = 0x8d4a16u; r_esp -= 4; W32(r_esp, v); }
    /* 00526cce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00526cd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00526cd5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00526cdc: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00526cdf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00526ce2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00526ce5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00526ce8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00526ceb: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00526ced: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00526cf4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x526cf9u); f_005caba4();
    /* 00526cf9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00526cfa: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00526cfd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526cff: je 0x526d87 */ if (fZ) goto L_00526d87;
L_00526d05:; BB(0x00526d05);
    /* 00526d05: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00526d0c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00526d13: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00526d19: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00526d1c: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x526d21u); f_00787a4c();
    /* 00526d21: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00526d24: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00526d2b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00526d2e:; BB(0x00526d2e);
    /* 00526d2e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00526d35: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00526d3c: push 0x3ac */ { u32 v = 0x3acu; r_esp -= 4; W32(r_esp, v); }
    /* 00526d41: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x526d46u); f_005caba4();
    /* 00526d46: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00526d47: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00526d4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526d4c: je 0x526d83 */ if (fZ) goto L_00526d83;
L_00526d4e:; BB(0x00526d4e);
    /* 00526d4e: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00526d55: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00526d5c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00526d5f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00526d62: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00526d65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00526d66: call 0x526d90 */ r_esp -= 4; W32(r_esp, 0x526d6bu); f_00526d90();
    /* 00526d6b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00526d6e: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00526d75:; BB(0x00526d75);
    /* 00526d75: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00526d78: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00526d7f: mov esp, ebp */ r_esp = r_ebp;
    /* 00526d81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00526d82: ret  */ FN_RET(0x00526cc4); r_esp += 4; return;
L_00526d83:; BB(0x00526d83);
    /* 00526d83: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00526d85: jmp 0x526d75 */ goto L_00526d75;
L_00526d87:; BB(0x00526d87);
    /* 00526d87: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00526d89: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00526d8c: jmp 0x526d2e */ goto L_00526d2e;
}

void f_00526d90(void) /* sub_526D90 */
{
    FN_ENTER(0x00526d90);
    /* 00526d90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00526d91: mov ebp, esp */ r_ebp = r_esp;
    /* 00526d93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00526d95: push 0x8d4a30 */ { u32 v = 0x8d4a30u; r_esp -= 4; W32(r_esp, v); }
    /* 00526d9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00526da0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00526da1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00526da8: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00526dab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00526dae: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00526db1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00526db4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00526db7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00526dba: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00526dbd: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00526dc0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00526dc3: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x526dc8u); f_007865e8();
    /* 00526dc8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00526dcf: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00526dd2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00526dd5: mov dword ptr [ecx], 0xb00da0 */ W32((u32)(r_ecx), 0xb00da0u);
    /* 00526ddb: mov eax, dword ptr [0x9bc140] */ r_eax = R32((u32)(0x9bc140u));
    /* 00526de0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00526de1: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00526de4: call dword ptr [0xb00eec] */ { u32 t = R32((u32)(0xb00eecu)); r_esp -= 4; W32(r_esp, 0x526deau); call_ind(t); }
    /* 00526dea: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00526ded: mov edx, dword ptr [0xa72f48] */ r_edx = R32((u32)(0xa72f48u));
    /* 00526df3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00526df6: mov ebx, dword ptr [edx + 0x430] */ r_ebx = R32((u32)(r_edx+0x430u));
    /* 00526dfc: mov dword ptr [ecx + 0xdc], ebx */ W32((u32)(r_ecx+0xdcu), r_ebx);
    /* 00526e02: mov esi, dword ptr [eax + 0x10] */ r_esi = R32((u32)(r_eax+0x10u));
    /* 00526e05: mov dword ptr [ecx + 0x38], esi */ W32((u32)(r_ecx+0x38u), r_esi);
    /* 00526e08: mov edi, dword ptr [eax + 0x14] */ r_edi = R32((u32)(r_eax+0x14u));
    /* 00526e0b: mov dword ptr [ecx + 0x3c], edi */ W32((u32)(r_ecx+0x3cu), r_edi);
    /* 00526e0e: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00526e11: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 00526e14: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00526e17: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 00526e1a: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00526e1d: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 00526e20: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00526e23: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 00526e26: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00526e29: mov dword ptr [ecx + 0x35c], edx */ W32((u32)(r_ecx+0x35cu), r_edx);
    /* 00526e2f: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00526e32: mov dword ptr [ecx + 0x360], edx */ W32((u32)(r_ecx+0x360u), r_edx);
    /* 00526e38: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00526e3b: mov dword ptr [ecx + 0x364], edx */ W32((u32)(r_ecx+0x364u), r_edx);
    /* 00526e41: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00526e44: mov dword ptr [ecx + 0x368], edx */ W32((u32)(r_ecx+0x368u), r_edx);
    /* 00526e4a: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00526e4d: mov dword ptr [ecx + 0x36c], edx */ W32((u32)(r_ecx+0x36cu), r_edx);
    /* 00526e53: movzx eax, word ptr [eax + 0x3c] */ r_eax = (u32)R16((u32)(r_eax+0x3cu));
    /* 00526e57: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00526e59: jne 0x526e5f */ if (!fZ) goto L_00526e5f;
L_00526e5b:; BB(0x00526e5b);
    /* 00526e5b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00526e5d: jmp 0x526e64 */ goto L_00526e64;
L_00526e5f:; BB(0x00526e5f);
    /* 00526e5f: mov edx, 1 */ r_edx = 0x1u;
L_00526e64:; BB(0x00526e64);
    /* 00526e64: mov dword ptr [ecx + 0x370], edx */ W32((u32)(r_ecx+0x370u), r_edx);
    /* 00526e6a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00526e6c: je 0x527120 */ if (fZ) goto L_00527120;
L_00526e72:; BB(0x00526e72);
    /* 00526e72: push dword ptr [edx*4 + 0xa72f54] */ { u32 v = R32((u32)(r_edx*4+0xa72f54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00526e79: mov eax, dword ptr [edx*4 + 0xa72f5c] */ r_eax = R32((u32)(r_edx*4+0xa72f5cu));
    /* 00526e80: mov dword ptr [0xa72f94], eax */ W32((u32)(0xa72f94u), r_eax);
    /* 00526e85: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x526e8au); f_00787550();
    /* 00526e8a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00526e8d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00526e90: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00526e92: mov esi, dword ptr [ecx + 0x370] */ r_esi = R32((u32)(r_ecx+0x370u));
    /* 00526e98: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 00526e9b: push 0x9bc17c */ { u32 v = 0x9bc17cu; r_esp -= 4; W32(r_esp, v); }
    /* 00526ea0: mov edi, dword ptr [esi*4 + 0xa72f4c] */ r_edi = R32((u32)(r_esi*4+0xa72f4cu));
    /* 00526ea7: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 00526eaa: fld dword ptr [ecx + 0x35c] */ FPUSH(R_F32((u32)(r_ecx+0x35cu)));
    /* 00526eb0: or dword ptr [ecx + 0x2e8], edi */ { u32 ad = (u32)(r_ecx+0x2e8u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00526eb6: movsx eax, word ptr [eax + 0x3e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x3eu));
    /* 00526eba: mov dword ptr [ecx + 0x374], eax */ W32((u32)(r_ecx+0x374u), r_eax);
    /* 00526ec0: mov eax, 0xf */ r_eax = 0xfu;
    /* 00526ec5: mov dword ptr [ecx + 0x358], 0x9bc144 */ W32((u32)(r_ecx+0x358u), 0x9bc144u);
    /* 00526ecf: mov word ptr [ecx + 0x342], ax */ W16((u32)(r_ecx+0x342u), (u16)r_eax);
    /* 00526ed6: mov word ptr [ecx + 0x344], ax */ W16((u32)(r_ecx+0x344u), (u16)r_eax);
    /* 00526edd: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 00526ee0: mov dword ptr [ecx + 0x44], eax */ W32((u32)(r_ecx+0x44u), r_eax);
    /* 00526ee3: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 00526ee6: mov dword ptr [ecx + 0x4c], ebx */ W32((u32)(r_ecx+0x4cu), r_ebx);
    /* 00526ee9: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
    /* 00526eec: mov dword ptr [ecx + 0x54], edx */ W32((u32)(r_ecx+0x54u), r_edx);
    /* 00526eef: mov dword ptr [ecx + 0x58], ebx */ W32((u32)(r_ecx+0x58u), r_ebx);
    /* 00526ef2: mov dword ptr [ecx + 0x298], eax */ W32((u32)(r_ecx+0x298u), r_eax);
    /* 00526ef8: mov dword ptr [ecx + 0x29c], edx */ W32((u32)(r_ecx+0x29cu), r_edx);
    /* 00526efe: mov dword ptr [ecx + 0x2a0], ebx */ W32((u32)(r_ecx+0x2a0u), r_ebx);
    /* 00526f04: mov dword ptr [ecx + 0x2a4], eax */ W32((u32)(r_ecx+0x2a4u), r_eax);
    /* 00526f0a: mov dword ptr [ecx + 0x2a8], edx */ W32((u32)(r_ecx+0x2a8u), r_edx);
    /* 00526f10: mov dword ptr [ecx + 0x2ac], ebx */ W32((u32)(r_ecx+0x2acu), r_ebx);
    /* 00526f16: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00526f18: mov word ptr [ecx + 0x37c], bx */ W16((u32)(r_ecx+0x37cu), (u16)r_ebx);
    /* 00526f1f: mov word ptr [ecx + 0x39e], bx */ W16((u32)(r_ecx+0x39eu), (u16)r_ebx);
    /* 00526f26: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00526f2b: mov word ptr [ecx + 0x38a], ax */ W16((u32)(r_ecx+0x38au), (u16)r_eax);
    /* 00526f32: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 00526f35: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 00526f39: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00526f3e: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00526f41: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 00526f44: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00526f47: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00526f4a: movsx edx, word ptr [ebp - 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 00526f4e: mov word ptr [ecx + 0x38c], bx */ W16((u32)(r_ecx+0x38cu), (u16)r_ebx);
    /* 00526f55: mov word ptr [ecx + 0x388], bx */ W16((u32)(r_ecx+0x388u), (u16)r_ebx);
    /* 00526f5c: mov eax, 1 */ r_eax = 0x1u;
    /* 00526f61: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00526f64: mov word ptr [ecx + 0x382], bx */ W16((u32)(r_ecx+0x382u), (u16)r_ebx);
    /* 00526f6b: jl 0x526f6f */ if ((fS!=fO)) goto L_00526f6f;
L_00526f6d:; BB(0x00526f6d);
    /* 00526f6d: mov edx, eax */ r_edx = r_eax;
L_00526f6f:; BB(0x00526f6f);
    /* 00526f6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00526f71: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00526f73: jg 0x526f77 */ if ((!fZ&&fS==fO)) goto L_00526f77;
L_00526f75:; BB(0x00526f75);
    /* 00526f75: mov edx, eax */ r_edx = r_eax;
L_00526f77:; BB(0x00526f77);
    /* 00526f77: mov byte ptr [ecx + 0x380], dl */ W8((u32)(r_ecx+0x380u), (u8)r_edx);
    /* 00526f7d: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x526f82u); f_007b9a88();
    /* 00526f82: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00526f85: movsx edx, word ptr [eax + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0xau));
    /* 00526f89: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00526f8b: jle 0x526fc5 */ if ((fZ||fS!=fO)) goto L_00526fc5;
L_00526f8d:; BB(0x00526f8d);
    /* 00526f8d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00526f90: movzx eax, word ptr [ecx + 0x37c] */ r_eax = (u32)R16((u32)(r_ecx+0x37cu));
    /* 00526f97: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00526f9a: mov esi, dword ptr [ecx + 0xa4] */ r_esi = R32((u32)(r_ecx+0xa4u));
    /* 00526fa0: or eax, 0xffff0060 */ {  u32 a = r_eax; u32 b = 0xffff0060u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00526fa5: mov word ptr [ecx + 0x37c], ax */ W16((u32)(r_ecx+0x37cu), (u16)r_eax);
    /* 00526fac: mov byte ptr [ecx + 0x380], 1 */ W8((u32)(r_ecx+0x380u), 0x1u);
    /* 00526fb3: and edx, 0xff7fffff */ {  u32 a = r_edx; u32 b = 0xff7fffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00526fb9: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 00526fbc: mov ebx, dword ptr [esi + 0x18] */ r_ebx = R32((u32)(r_esi+0x18u));
    /* 00526fbf: and ebx, 0xfffffffe */ {  u32 a = r_ebx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00526fc2: mov dword ptr [esi + 0x18], ebx */ W32((u32)(r_esi+0x18u), r_ebx);
L_00526fc5:; BB(0x00526fc5);
    /* 00526fc5: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00526fc8: mov eax, dword ptr [ecx + 0x370] */ r_eax = R32((u32)(r_ecx+0x370u));
    /* 00526fce: push dword ptr [eax*4 + 0xa72f7c] */ { u32 v = R32((u32)(r_eax*4+0xa72f7cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00526fd5: push dword ptr [eax*4 + 0xa72f84] */ { u32 v = R32((u32)(r_eax*4+0xa72f84u)); r_esp -= 4; W32(r_esp, v); }
    /* 00526fdc: push dword ptr [eax*4 + 0xa72f8c] */ { u32 v = R32((u32)(r_eax*4+0xa72f8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00526fe3: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x526fe8u); f_007868f8();
    /* 00526fe8: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00526feb: call 0x526a7c */ r_esp -= 4; W32(r_esp, 0x526ff0u); f_00526a7c();
    /* 00526ff0: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00526ff3: movsx edx, word ptr [ecx + 0x2bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2bcu));
    /* 00526ffa: movzx eax, word ptr [ecx + 0x2be] */ r_eax = (u32)R16((u32)(r_ecx+0x2beu));
    /* 00527001: mov word ptr [ecx + 0x334], dx */ W16((u32)(r_ecx+0x334u), (u16)r_edx);
    /* 00527008: mov word ptr [ecx + 0x336], ax */ W16((u32)(r_ecx+0x336u), (u16)r_eax);
    /* 0052700f: mov word ptr [ecx + 0x346], dx */ W16((u32)(r_ecx+0x346u), (u16)r_edx);
    /* 00527016: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x52701bu); f_0078730c();
    /* 0052701b: mov esi, dword ptr [ebp - 0x3c] */ r_esi = R32((u32)(r_ebp+0xffffffc4u));
    /* 0052701e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00527021: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 00527027: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0052702d: mov ebx, dword ptr [esi + 0x308] */ r_ebx = R32((u32)(r_esi+0x308u));
    /* 00527033: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 00527036: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 00527039: mov dword ptr [esi + 0x7c], ebx */ W32((u32)(r_esi+0x7cu), r_ebx);
    /* 0052703c: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x527041u); f_007b4f54();
    /* 00527041: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00527044: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x527049u); f_007751b0();
    /* 00527049: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0052704c: fld dword ptr [0x921b88] */ FPUSH(R_F32((u32)(0x921b88u)));
    /* 00527052: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00527055: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00527057: fmul dword ptr [0x921b84] */ ST(0) = ST(0) * R_F32((u32)(0x921b84u));
    /* 0052705d: fmul dword ptr [0x921b80] */ ST(0) = ST(0) * R_F32((u32)(0x921b80u));
    /* 00527063: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 00527066: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 0052706a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052706f: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00527072: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 00527075: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00527078: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0052707b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0052707e: mov dword ptr [ecx + 0xd8], 0x9bbc20 */ W32((u32)(r_ecx+0xd8u), 0x9bbc20u);
    /* 00527088: mov word ptr [ecx + 0x386], ax */ W16((u32)(r_ecx+0x386u), (u16)r_eax);
    /* 0052708f: or edx, 0x40000 */ {  u32 a = r_edx; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00527095: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 00527098: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0052709a: mov word ptr [ecx + 0xb8], bx */ W16((u32)(r_ecx+0xb8u), (u16)r_ebx);
    /* 005270a1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005270a2: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x5270a7u); f_007aa4c8();
    /* 005270a7: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005270aa: movzx esi, word ptr [edx + 0xb8] */ r_esi = (u32)R16((u32)(r_edx+0xb8u));
    /* 005270b1: movzx eax, byte ptr [edx + 0x380] */ r_eax = (u32)R8((u32)(r_edx+0x380u));
    /* 005270b8: mov word ptr [edx + 0xb8], si */ W16((u32)(r_edx+0xb8u), (u16)r_esi);
    /* 005270bf: mov byte ptr [edx + 0x381], al */ W8((u32)(r_edx+0x381u), (u8)r_eax);
    /* 005270c5: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x5270cau); f_00520e6c();
    /* 005270ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005270cc: jne 0x5270d3 */ if (!fZ) goto L_005270d3;
L_005270ce:; BB(0x005270ce);
    /* 005270ce: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005270d1: jmp 0x5270fc */ goto L_005270fc;
L_005270d3:; BB(0x005270d3);
    /* 005270d3: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005270d6: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5270dbu); f_007751b0();
    /* 005270db: fcomp dword ptr [0x921b7c] */ fx_compare(ST(0), R_F32((u32)(0x921b7cu))); FPOP();
    /* 005270e1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005270e3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005270e4: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005270e7: jae 0x5270fc */ if (!fC) goto L_005270fc;
L_005270e9:; BB(0x005270e9);
    /* 005270e9: movzx eax, word ptr [ecx + 0x37c] */ r_eax = (u32)R16((u32)(r_ecx+0x37cu));
    /* 005270f0: or eax, 0xffff0400 */ {  u32 a = r_eax; u32 b = 0xffff0400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005270f5: mov word ptr [ecx + 0x37c], ax */ W16((u32)(r_ecx+0x37cu), (u16)r_eax);
L_005270fc:; BB(0x005270fc);
    /* 005270fc: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005270fe: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x527104u); call_ind(t); }
    /* 00527104: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00527107: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0052710a: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052710d: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00527110: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00527113: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0052711a: mov esp, ebp */ r_esp = r_ebp;
    /* 0052711c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052711d: ret 8 */ FN_RET(0x00526d90); r_esp += 12; return;
L_00527120:; BB(0x00527120);
    /* 00527120: movsx eax, word ptr [ecx + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x2cu));
    /* 00527124: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00527125: call 0x813038 */ r_esp -= 4; W32(r_esp, 0x52712au); f_00813038();
    /* 0052712a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052712b: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0052712e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00527130: je 0x527146 */ if (fZ) goto L_00527146;
L_00527132:; BB(0x00527132);
    /* 00527132: mov dword ptr [ecx + 0x370], 1 */ W32((u32)(r_ecx+0x370u), 0x1u);
    /* 0052713c: mov edx, 1 */ r_edx = 0x1u;
    /* 00527141: jmp 0x526e72 */ goto L_00526e72;
L_00527146:; BB(0x00527146);
    /* 00527146: mov edx, dword ptr [ecx + 0x370] */ r_edx = R32((u32)(r_ecx+0x370u));
    /* 0052714c: jmp 0x526e72 */ goto L_00526e72;
}

