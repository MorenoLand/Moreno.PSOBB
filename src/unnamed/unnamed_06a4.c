#include "protos.h"

void f_006a40c0(void) /* sub_6A40C0 */
{
    FN_ENTER(0x006a40c0);
    /* 006a40c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a40c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006a40c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006a40c5: push 0x8eb8d0 */ { u32 v = 0x8eb8d0u; r_esp -= 4; W32(r_esp, v); }
    /* 006a40ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006a40d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a40d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006a40d8: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a40db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006a40de: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006a40e1: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006a40e4: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006a40e7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006a40ea: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a40ed: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a40f0: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a40f3: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a40f6: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 006a40f9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006a40fc: call 0x6a3eb4 */ r_esp -= 4; W32(r_esp, 0x6a4101u); f_006a3eb4();
    /* 006a4101: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006a4108: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006a410b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006a410e: mov dword ptr [ecx], 0xb39d04 */ W32((u32)(r_ecx), 0xb39d04u);
    /* 006a4114: mov dword ptr [ecx + 0x54], eax */ W32((u32)(r_ecx+0x54u), r_eax);
    /* 006a4117: mov byte ptr [ecx + 0x1d], 1 */ W8((u32)(r_ecx+0x1du), 0x1u);
    /* 006a411b: call 0x6a6e00 */ r_esp -= 4; W32(r_esp, 0x6a4120u); f_006a6e00();
    /* 006a4120: call 0x6a47ec */ r_esp -= 4; W32(r_esp, 0x6a4125u); f_006a47ec();
    /* 006a4125: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a4127: jne 0x6a4131 */ if (!fZ) goto L_006a4131;
L_006a4129:; BB(0x006a4129);
    /* 006a4129: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006a412c: jmp 0x6a4291 */ goto L_006a4291;
L_006a4131:; BB(0x006a4131);
    /* 006a4131: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006a4136: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006a4139: movsx eax, byte ptr [esi + 0x1c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x1cu));
    /* 006a413d: mov esi, dword ptr [esi + 0x54] */ r_esi = R32((u32)(r_esi+0x54u));
    /* 006a4140: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a4142: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a4144: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 006a4147: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006a4149: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006a414b: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006a414d: mov ebx, dword ptr [esi + edi + 0xac] */ r_ebx = R32((u32)(r_esi+r_edi+0xacu));
    /* 006a4154: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x6a4159u); f_006c1bcc();
    /* 006a4159: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a415a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a415c: je 0x6a4394 */ if (fZ) goto L_006a4394;
L_006a4162:; BB(0x006a4162);
    /* 006a4162: cmp ebx, dword ptr [eax + 0x18] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4165: je 0x6a42aa */ if (fZ) goto L_006a42aa;
L_006a416b:; BB(0x006a416b);
    /* 006a416b: cmp ebx, dword ptr [eax + 0x34] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a416e: je 0x6a42aa */ if (fZ) goto L_006a42aa;
L_006a4174:; BB(0x006a4174);
    /* 006a4174: cmp ebx, dword ptr [eax + 0x50] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x50u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4177: je 0x6a42aa */ if (fZ) goto L_006a42aa;
L_006a417d:; BB(0x006a417d);
    /* 006a417d: cmp ebx, dword ptr [eax + 0x6c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x6cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4180: je 0x6a42aa */ if (fZ) goto L_006a42aa;
L_006a4186:; BB(0x006a4186);
    /* 006a4186: cmp ebx, dword ptr [eax + 0x88] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x88u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a418c: je 0x6a42aa */ if (fZ) goto L_006a42aa;
L_006a4192:; BB(0x006a4192);
    /* 006a4192: cmp ebx, dword ptr [eax + 0xa4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0xa4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4198: je 0x6a42aa */ if (fZ) goto L_006a42aa;
L_006a419e:; BB(0x006a419e);
    /* 006a419e: cmp ebx, dword ptr [eax + 0xc0] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0xc0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a41a4: je 0x6a42aa */ if (fZ) goto L_006a42aa;
L_006a41aa:; BB(0x006a41aa);
    /* 006a41aa: cmp ebx, dword ptr [eax + 0xdc] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0xdcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a41b0: je 0x6a42aa */ if (fZ) goto L_006a42aa;
L_006a41b6:; BB(0x006a41b6);
    /* 006a41b6: cmp ebx, dword ptr [eax + 0xf8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0xf8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a41bc: je 0x6a42aa */ if (fZ) goto L_006a42aa;
L_006a41c2:; BB(0x006a41c2);
    /* 006a41c2: cmp ebx, dword ptr [eax + 0x114] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x114u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a41c8: je 0x6a42aa */ if (fZ) goto L_006a42aa;
L_006a41ce:; BB(0x006a41ce);
    /* 006a41ce: cmp ebx, dword ptr [eax + 0x130] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x130u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a41d4: je 0x6a42aa */ if (fZ) goto L_006a42aa;
L_006a41da:; BB(0x006a41da);
    /* 006a41da: cmp ebx, dword ptr [eax + 0x14c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x14cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a41e0: je 0x6a42aa */ if (fZ) goto L_006a42aa;
L_006a41e6:; BB(0x006a41e6);
    /* 006a41e6: cmp ebx, dword ptr [eax + 0x168] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x168u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a41ec: je 0x6a42aa */ if (fZ) goto L_006a42aa;
L_006a41f2:; BB(0x006a41f2);
    /* 006a41f2: cmp ebx, dword ptr [eax + 0x184] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x184u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a41f8: je 0x6a42aa */ if (fZ) goto L_006a42aa;
L_006a41fe:; BB(0x006a41fe);
    /* 006a41fe: cmp ebx, dword ptr [eax + 0x1a0] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x1a0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4204: je 0x6a42aa */ if (fZ) goto L_006a42aa;
L_006a420a:; BB(0x006a420a);
    /* 006a420a: cmp ebx, dword ptr [eax + 0x1bc] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x1bcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4210: je 0x6a42aa */ if (fZ) goto L_006a42aa;
L_006a4216:; BB(0x006a4216);
    /* 006a4216: cmp ebx, dword ptr [eax + 0x1d8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x1d8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a421c: je 0x6a42aa */ if (fZ) goto L_006a42aa;
L_006a4222:; BB(0x006a4222);
    /* 006a4222: cmp ebx, dword ptr [eax + 0x1f4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x1f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4228: je 0x6a42aa */ if (fZ) goto L_006a42aa;
L_006a422e:; BB(0x006a422e);
    /* 006a422e: cmp ebx, dword ptr [eax + 0x210] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x210u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4234: je 0x6a42aa */ if (fZ) goto L_006a42aa;
L_006a4236:; BB(0x006a4236);
    /* 006a4236: cmp ebx, dword ptr [eax + 0x22c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x22cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a423c: je 0x6a42aa */ if (fZ) goto L_006a42aa;
L_006a423e:; BB(0x006a423e);
    /* 006a423e: cmp ebx, dword ptr [eax + 0x248] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x248u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4244: je 0x6a42aa */ if (fZ) goto L_006a42aa;
L_006a4246:; BB(0x006a4246);
    /* 006a4246: cmp ebx, dword ptr [eax + 0x264] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x264u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a424c: je 0x6a42aa */ if (fZ) goto L_006a42aa;
L_006a424e:; BB(0x006a424e);
    /* 006a424e: cmp ebx, dword ptr [eax + 0x280] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x280u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4254: je 0x6a42aa */ if (fZ) goto L_006a42aa;
L_006a4256:; BB(0x006a4256);
    /* 006a4256: cmp ebx, dword ptr [eax + 0x29c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x29cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a425c: je 0x6a42aa */ if (fZ) goto L_006a42aa;
L_006a425e:; BB(0x006a425e);
    /* 006a425e: cmp ebx, dword ptr [eax + 0x2b8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x2b8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4264: je 0x6a42aa */ if (fZ) goto L_006a42aa;
L_006a4266:; BB(0x006a4266);
    /* 006a4266: cmp ebx, dword ptr [eax + 0x2d4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x2d4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a426c: je 0x6a42aa */ if (fZ) goto L_006a42aa;
L_006a426e:; BB(0x006a426e);
    /* 006a426e: cmp ebx, dword ptr [eax + 0x2f0] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x2f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4274: je 0x6a42aa */ if (fZ) goto L_006a42aa;
L_006a4276:; BB(0x006a4276);
    /* 006a4276: cmp ebx, dword ptr [eax + 0x30c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x30cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a427c: je 0x6a42aa */ if (fZ) goto L_006a42aa;
L_006a427e:; BB(0x006a427e);
    /* 006a427e: cmp ebx, dword ptr [eax + 0x328] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x328u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4284: je 0x6a42aa */ if (fZ) goto L_006a42aa;
L_006a4286:; BB(0x006a4286);
    /* 006a4286: cmp ebx, dword ptr [eax + 0x344] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x344u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a428c: je 0x6a42aa */ if (fZ) goto L_006a42aa;
L_006a428e:; BB(0x006a428e);
    /* 006a428e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
L_006a4291:; BB(0x006a4291);
    /* 006a4291: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a4294: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a4297: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006a429a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a429d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a42a4: mov esp, ebp */ r_esp = r_ebp;
    /* 006a42a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a42a7: ret 0x14 */ FN_RET(0x006a40c0); r_esp += 24; return;
L_006a42aa:; BB(0x006a42aa);
    /* 006a42aa: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006a42af: mov ebx, dword ptr [esi + edi + 0xac] */ r_ebx = R32((u32)(r_esi+r_edi+0xacu));
    /* 006a42b6: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x6a42bbu); f_006c1bcc();
    /* 006a42bb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006a42be: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a42c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a42c3: je 0x6a42e3 */ if (fZ) goto L_006a42e3;
L_006a42c5:; BB(0x006a42c5);
    /* 006a42c5: lea edi, [eax + 4] */ r_edi = (u32)(r_eax+0x4u);
    /* 006a42c8: movzx eax, byte ptr [eax] */ r_eax = (u32)R8((u32)(r_eax));
    /* 006a42cb: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006a42ce: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006a42d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006a42d2: jle 0x6a42e3 */ if ((fZ||fS!=fO)) goto L_006a42e3;
L_006a42d4:; BB(0x006a42d4);
    /* 006a42d4: cmp ebx, dword ptr [edi + 0x14] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a42d7: je 0x6a4322 */ if (fZ) goto L_006a4322;
L_006a42d9:; BB(0x006a42d9);
    /* 006a42d9: add edi, 0x1c */ {  u32 a = r_edi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006a42dc: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006a42df: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006a42e1: jl 0x6a42d4 */ if ((fS!=fO)) goto L_006a42d4;
L_006a42e3:; BB(0x006a42e3);
    /* 006a42e3: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6a42e8u); f_006dc358();
    /* 006a42e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a42ea: jne 0x6a42f8 */ if (!fZ) goto L_006a42f8;
L_006a42ec:; BB(0x006a42ec);
    /* 006a42ec: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006a42ef: mov dword ptr [eax + 0x50], 1 */ W32((u32)(r_eax+0x50u), 0x1u);
    /* 006a42f6: jmp 0x6a4291 */ goto L_006a4291;
L_006a42f8:; BB(0x006a42f8);
    /* 006a42f8: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006a42fb: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a42fe: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a4301: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006a4304: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 006a4308: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a430e: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 006a4312: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a4315: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a431c: mov esp, ebp */ r_esp = r_ebp;
    /* 006a431e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a431f: ret 0x14 */ FN_RET(0x006a40c0); r_esp += 24; return;
L_006a4322:; BB(0x006a4322);
    /* 006a4322: movzx edx, byte ptr [edi + 8] */ r_edx = (u32)R8((u32)(r_edi+0x8u));
    /* 006a4326: lea ecx, [edi + 8] */ r_ecx = (u32)(r_edi+0x8u);
    /* 006a4329: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a432c: je 0x6a4384 */ if (fZ) goto L_006a4384;
L_006a432e:; BB(0x006a432e);
    /* 006a432e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a4330:; BB(0x006a4330);
    /* 006a4330: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4332: je 0x6a4342 */ if (fZ) goto L_006a4342;
L_006a4334:; BB(0x006a4334);
    /* 006a4334: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006a4337: call 0x6c1a08 */ r_esp -= 4; W32(r_esp, 0x6a433cu); f_006c1a08();
    /* 006a433c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006a433f: movzx eax, byte ptr [eax] */ r_eax = (u32)R8((u32)(r_eax));
L_006a4342:; BB(0x006a4342);
    /* 006a4342: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006a4345: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a4348: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 006a434a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a434d: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006a434f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006a4351: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006a4354: jle 0x6a4376 */ if ((fZ||fS!=fO)) goto L_006a4376;
L_006a4356:; BB(0x006a4356);
    /* 006a4356: lea ecx, [edi + 0x1c] */ r_ecx = (u32)(r_edi+0x1cu);
    /* 006a4359: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a435b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a435d: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006a4360: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a4362: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a4364: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006a4366: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a4367: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006a4368: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a4369: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6a436eu); f_0086b6b8();
    /* 006a436e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a4371: jmp 0x6a42e3 */ goto L_006a42e3;
L_006a4376:; BB(0x006a4376);
    /* 006a4376: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a4377: mov eax, edi */ r_eax = r_edi;
    /* 006a4379: call 0x6a43a0 */ r_esp -= 4; W32(r_esp, 0x6a437eu); f_006a43a0();
    /* 006a437e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a437f: jmp 0x6a42e3 */ goto L_006a42e3;
L_006a4384:; BB(0x006a4384);
    /* 006a4384: movzx edx, byte ptr [ecx + 1] */ r_edx = (u32)R8((u32)(r_ecx+0x1u));
    /* 006a4388: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a438b: jne 0x6a432e */ if (!fZ) goto L_006a432e;
L_006a438d:; BB(0x006a438d);
    /* 006a438d: mov edx, 1 */ r_edx = 0x1u;
    /* 006a4392: jmp 0x6a4330 */ goto L_006a4330;
L_006a4394:; BB(0x006a4394);
    /* 006a4394: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006a4397: jmp 0x6a4291 */ goto L_006a4291;
}

void f_006a439c(void) /* sub_6A439C */
{
    FN_ENTER(0x006a439c);
    /* 006a439c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006a43a0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a43a2: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 006a43a4: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 006a43a7: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 006a43aa: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 006a43ad: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 006a43b0: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 006a43b3: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 006a43b6: ret  */ FN_RET(0x006a439c); r_esp += 4; return;
}

void f_006a43a0(void) /* sub_6A43A0 */
{
    FN_ENTER(0x006a43a0);
    /* 006a43a0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a43a2: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 006a43a4: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 006a43a7: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 006a43aa: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 006a43ad: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 006a43b0: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 006a43b3: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 006a43b6: ret  */ FN_RET(0x006a43a0); r_esp += 4; return;
}

void f_006a43b8(void) /* sub_6A43B8 */
{
    FN_ENTER(0x006a43b8);
    /* 006a43b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a43b9: mov ebp, esp */ r_ebp = r_esp;
    /* 006a43bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006a43bd: push 0x8eb8f8 */ { u32 v = 0x8eb8f8u; r_esp -= 4; W32(r_esp, v); }
    /* 006a43c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006a43c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a43c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006a43d0: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a43d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006a43d6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006a43d9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006a43dc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006a43df: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 006a43e2: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006a43e5: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
    /* 006a43e8: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006a43eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a43ed: jne 0x6a4479 */ if (!fZ) goto L_006a4479;
L_006a43f3:; BB(0x006a43f3);
    /* 006a43f3: mov eax, ecx */ r_eax = r_ecx;
    /* 006a43f5: mov dword ptr [eax + 8], 1 */ W32((u32)(r_eax+0x8u), 0x1u);
    /* 006a43fc: mov dword ptr [eax + 0xac], ebx */ W32((u32)(r_eax+0xacu), r_ebx);
    /* 006a4402: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 006a4404: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006a440b: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 006a440d: mov dword ptr [eax + 0xb0], ecx */ W32((u32)(r_eax+0xb0u), r_ecx);
    /* 006a4413: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 006a4416: mov dword ptr [eax + 0xb4], ebx */ W32((u32)(r_eax+0xb4u), r_ebx);
    /* 006a441c: mov esi, dword ptr [edx + 8] */ r_esi = R32((u32)(r_edx+0x8u));
    /* 006a441f: mov dword ptr [eax + 0xb8], esi */ W32((u32)(r_eax+0xb8u), r_esi);
    /* 006a4425: mov edi, dword ptr [edx + 0xc] */ r_edi = R32((u32)(r_edx+0xcu));
    /* 006a4428: mov dword ptr [eax + 0xbc], edi */ W32((u32)(r_eax+0xbcu), r_edi);
    /* 006a442e: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 006a4431: mov dword ptr [eax + 0xc0], edx */ W32((u32)(r_eax+0xc0u), r_edx);
    /* 006a4437: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6a443cu); f_005caba4();
    /* 006a443c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a443d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006a4440: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4442: je 0x6a4472 */ if (fZ) goto L_006a4472;
L_006a4444:; BB(0x006a4444);
    /* 006a4444: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 006a444b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006a4452: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006a4455: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006a4457: mov ecx, eax */ r_ecx = r_eax;
    /* 006a4459: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a445c: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006a445f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a4460: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a4466: call 0x6a40c0 */ r_esp -= 4; W32(r_esp, 0x6a446bu); f_006a40c0();
    /* 006a446b: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_006a4472:; BB(0x006a4472);
    /* 006a4472: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006a4475: add dword ptr [eax + 4], 1 */ { u32 ad = (u32)(r_eax+0x4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006a4479:; BB(0x006a4479);
    /* 006a4479: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a447c: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006a447f: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a4482: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a4485: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a448c: mov esp, ebp */ r_esp = r_ebp;
    /* 006a448e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a448f: ret 0x10 */ FN_RET(0x006a43b8); r_esp += 20; return;
}

void f_006a4494(void) /* sub_6A4494 */
{
    FN_ENTER(0x006a4494);
    /* 006a4494: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a4495: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a4497: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a4499: call 0x6a44fc */ r_esp -= 4; W32(r_esp, 0x6a449eu); f_006a44fc();
    /* 006a449e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a44a0: je 0x6a44f9 */ if (fZ) goto L_006a44f9;
L_006a44a2:; BB(0x006a44a2);
    /* 006a44a2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a44a5: jne 0x6a44d6 */ if (!fZ) goto L_006a44d6;
L_006a44a7:; BB(0x006a44a7);
    /* 006a44a7: mov eax, dword ptr [ebx + 0x54] */ r_eax = R32((u32)(r_ebx+0x54u));
    /* 006a44aa: movsx edx, byte ptr [ebx + 0x1c] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x1cu));
    /* 006a44ae: mov dword ptr [eax + edx*4 + 8], 2 */ W32((u32)(r_eax+r_edx*4+0x8u), 0x2u);
    /* 006a44b6: movsx edx, byte ptr [ebx + 0x1c] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x1cu));
    /* 006a44ba: mov eax, dword ptr [ebx + 0x54] */ r_eax = R32((u32)(r_ebx+0x54u));
    /* 006a44bd: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 006a44c0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a44c2: mov dword ptr [eax + edx*8 + 0x2c], ecx */ W32((u32)(r_eax+r_edx*8+0x2cu), r_ecx);
    /* 006a44c6: mov ecx, dword ptr [ebx + 0x48] */ r_ecx = R32((u32)(r_ebx+0x48u));
    /* 006a44c9: mov dword ptr [eax + edx*8 + 0x30], ecx */ W32((u32)(r_eax+r_edx*8+0x30u), r_ecx);
    /* 006a44cd: mov ecx, dword ptr [ebx + 0x4c] */ r_ecx = R32((u32)(r_ebx+0x4cu));
    /* 006a44d0: mov dword ptr [eax + edx*8 + 0x34], ecx */ W32((u32)(r_eax+r_edx*8+0x34u), r_ecx);
    /* 006a44d4: jmp 0x6a44ea */ goto L_006a44ea;
L_006a44d6:; BB(0x006a44d6);
    /* 006a44d6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a44d9: jne 0x6a44ea */ if (!fZ) goto L_006a44ea;
L_006a44db:; BB(0x006a44db);
    /* 006a44db: mov eax, dword ptr [ebx + 0x54] */ r_eax = R32((u32)(r_ebx+0x54u));
    /* 006a44de: movsx edx, byte ptr [ebx + 0x1c] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x1cu));
    /* 006a44e2: mov dword ptr [eax + edx*4 + 8], 3 */ W32((u32)(r_eax+r_edx*4+0x8u), 0x3u);
L_006a44ea:; BB(0x006a44ea);
    /* 006a44ea: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006a44ee: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a44f3: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006a44f7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a44f8: ret  */ FN_RET(0x006a4494); r_esp += 4; return;
L_006a44f9:; BB(0x006a44f9);
    /* 006a44f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a44fa: ret  */ FN_RET(0x006a4494); r_esp += 4; return;
}

void f_006a44fc(void) /* sub_6A44FC */
{
    FN_ENTER(0x006a44fc);
    /* 006a44fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a44fd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a44fe: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a4501: mov edi, ecx */ r_edi = r_ecx;
    /* 006a4503: call 0x6a47ec */ r_esp -= 4; W32(r_esp, 0x6a4508u); f_006a47ec();
    /* 006a4508: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a450a: je 0x6a4545 */ if (fZ) goto L_006a4545;
L_006a450c:; BB(0x006a450c);
    /* 006a450c: mov eax, dword ptr [edi + 0x50] */ r_eax = R32((u32)(r_edi+0x50u));
    /* 006a450f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4511: je 0x6a4545 */ if (fZ) goto L_006a4545;
L_006a4513:; BB(0x006a4513);
    /* 006a4513: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6a4518u); f_00415cec();
    /* 006a4518: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006a451b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a451c: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x6a4521u); f_0082c204();
    /* 006a4521: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a4522: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4525: je 0x6a4545 */ if (fZ) goto L_006a4545;
L_006a4527:; BB(0x006a4527);
    /* 006a4527: call 0x7a0118 */ r_esp -= 4; W32(r_esp, 0x6a452cu); f_007a0118();
    /* 006a452c: movzx edx, word ptr [edi + 8] */ r_edx = (u32)R16((u32)(r_edi+0x8u));
    /* 006a4530: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006a4536: mov word ptr [edi + 8], dx */ W16((u32)(r_edi+0x8u), (u16)r_edx);
    /* 006a453a: mov eax, 2 */ r_eax = 0x2u;
    /* 006a453f: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a4542: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a4543: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a4544: ret  */ FN_RET(0x006a44fc); r_esp += 4; return;
L_006a4545:; BB(0x006a4545);
    /* 006a4545: movsx edx, byte ptr [edi + 0x1d] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi+0x1du));
    /* 006a4549: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006a454c: jg 0x6a47c3 */ if ((!fZ&&fS==fO)) goto L_006a47c3;
L_006a4552:; BB(0x006a4552);
    /* 006a4552: mov al, byte ptr [edi + 0x1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+0x1eu))) & 0xffu);
    /* 006a4555: cmp al, byte ptr [edi + 0x1f] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_edi+0x1fu)); u32 r = (a - b) & 0xffu;  fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 006a4558: jge 0x6a47b1 */ if ((fS==fO)) goto L_006a47b1;
L_006a455e:; BB(0x006a455e);
    /* 006a455e: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006a4561: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x6a4566u); f_0082dcbc();
    /* 006a4566: fld dword ptr [edi + 0x34] */ FPUSH(R_F32((u32)(r_edi+0x34u)));
    /* 006a4569: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006a456b: fadd dword ptr [edi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x38u));
    /* 006a456e: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 006a4571: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006a4574: fstp dword ptr [edi + 0x44] */ W_F32((u32)(r_edi+0x44u), ST(0)); FPOP();
    /* 006a4577: mov dword ptr [edi + 0x48], eax */ W32((u32)(r_edi+0x48u), r_eax);
    /* 006a457a: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x6a457fu); f_0082ddd8();
    /* 006a457f: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 006a4581: fld dword ptr [edi + 0x34] */ FPUSH(R_F32((u32)(r_edi+0x34u)));
    /* 006a4584: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006a4586: fadd dword ptr [edi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x40u));
    /* 006a4589: fstp dword ptr [edi + 0x4c] */ W_F32((u32)(r_edi+0x4cu), ST(0)); FPOP();
    /* 006a458c: lea ebp, [edi + 0x44] */ r_ebp = (u32)(r_edi+0x44u);
    /* 006a458f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a4590: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x6a4595u); f_00780630();
    /* 006a4595: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a4598: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a459a: je 0x6a47d9 */ if (fZ) goto L_006a47d9;
L_006a45a0:; BB(0x006a45a0);
    /* 006a45a0: fld dword ptr [0x93db84] */ FPUSH(R_F32((u32)(0x93db84u)));
    /* 006a45a6: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 006a45a9: fadd dword ptr [eax + 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4u));
    /* 006a45ac: movzx edx, word ptr [edi + 0x20] */ r_edx = (u32)R16((u32)(r_edi+0x20u));
    /* 006a45b0: fstp dword ptr [edi + 0x48] */ W_F32((u32)(r_edi+0x48u), ST(0)); FPOP();
    /* 006a45b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a45b4: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6a45b9u); f_007b4d18();
    /* 006a45b9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a45ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a45bc: je 0x6a4615 */ if (fZ) goto L_006a4615;
L_006a45be:; BB(0x006a45be);
    /* 006a45be: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 006a45c1: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 006a45c5: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 006a45c8: mov ecx, eax */ r_ecx = r_eax;
    /* 006a45ca: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 006a45ce: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 006a45d1: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 006a45d5: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 006a45d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006a45db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a45dc: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x6a45e1u); f_007b4c58();
    /* 006a45e1: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 006a45e5: fadd dword ptr [0x93db84] */ ST(0) = ST(0) + R_F32((u32)(0x93db84u));
    /* 006a45eb: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 006a45ef: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 006a45f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006a45f5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a45f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a45f7: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x6a45fcu); f_0077fffc();
    /* 006a45fc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a45ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4601: je 0x6a4615 */ if (fZ) goto L_006a4615;
L_006a4603:; BB(0x006a4603);
    /* 006a4603: mov edx, dword ptr [edi + 0x2c] */ r_edx = R32((u32)(r_edi+0x2cu));
    /* 006a4606: add dword ptr [edi + 0x30], edx */ { u32 ad = (u32)(r_edi+0x30u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006a4609: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a460b: add byte ptr [edi + 0x1e], 1 */ { u32 ad = (u32)(r_edi+0x1eu);  u32 a = R8(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006a460f: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a4612: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a4613: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a4614: ret  */ FN_RET(0x006a44fc); r_esp += 4; return;
L_006a4615:; BB(0x006a4615);
    /* 006a4615: mov eax, dword ptr [edi + 0x44] */ r_eax = R32((u32)(r_edi+0x44u));
    /* 006a4618: mov edx, dword ptr [edi + 0x48] */ r_edx = R32((u32)(r_edi+0x48u));
    /* 006a461b: mov ebp, dword ptr [edi + 0x4c] */ r_ebp = R32((u32)(r_edi+0x4cu));
    /* 006a461e: mov dword ptr [0x9cba40], eax */ W32((u32)(0x9cba40u), r_eax);
    /* 006a4623: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 006a4628: mov dword ptr [0x9cba5c], 0x40400000 */ W32((u32)(0x9cba5cu), 0x40400000u);
    /* 006a4632: mov dword ptr [0x9cba44], edx */ W32((u32)(0x9cba44u), r_edx);
    /* 006a4638: mov dword ptr [0x9cba64], 0 */ W32((u32)(0x9cba64u), 0x0u);
    /* 006a4642: mov dword ptr [0x9cba48], ebp */ W32((u32)(0x9cba48u), r_ebp);
    /* 006a4648: mov ebp, dword ptr [0xaae168] */ r_ebp = R32((u32)(0xaae168u));
    /* 006a464e: add ebp, dword ptr [0xaae164] */ {  u32 a = r_ebp; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006a4654: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006a4656: mov dword ptr [0x9cba68], 0x31f03 */ W32((u32)(0x9cba68u), 0x31f03u);
    /* 006a4660: jge 0x6a475f */ if ((fS==fO)) goto L_006a475f;
L_006a4666:; BB(0x006a4666);
    /* 006a4666: mov dword ptr [esp + 0x54], ebx */ W32((u32)(r_esp+0x54u), r_ebx);
    /* 006a466a: mov dword ptr [esp + 0x58], esi */ W32((u32)(r_esp+0x58u), r_esi);
    /* 006a466e: mov esi, eax */ r_esi = r_eax;
L_006a4670:; BB(0x006a4670);
    /* 006a4670: mov ebx, dword ptr [ebp*4 + 0xaad720] */ r_ebx = R32((u32)(r_ebp*4+0xaad720u));
    /* 006a4677: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4679: je 0x6a474c */ if (fZ) goto L_006a474c;
L_006a467f:; BB(0x006a467f);
    /* 006a467f: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 006a4685: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4687: je 0x6a474c */ if (fZ) goto L_006a474c;
L_006a468d:; BB(0x006a468d);
    /* 006a468d: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 006a4690: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4696: jne 0x6a474c */ if (!fZ) goto L_006a474c;
L_006a469c:; BB(0x006a469c);
    /* 006a469c: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 006a469f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a46a0: push 0x9cba40 */ { u32 v = 0x9cba40u; r_esp -= 4; W32(r_esp, v); }
    /* 006a46a5: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x6a46aau); f_007a9180();
    /* 006a46aa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a46ad: fcomp dword ptr [0x93db88] */ fx_compare(ST(0), R_F32((u32)(0x93db88u))); FPOP();
    /* 006a46b3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006a46b5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006a46b6: jae 0x6a474c */ if (!fC) goto L_006a474c;
L_006a46bc:; BB(0x006a46bc);
    /* 006a46bc: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 006a46c2: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 006a46c6: mov eax, dword ptr [ebx + 0xa8] */ r_eax = R32((u32)(r_ebx+0xa8u));
    /* 006a46cc: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 006a46d0: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 006a46d3: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006a46d7: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 006a46da: mov edx, esp */ r_edx = r_esp;
    /* 006a46dc: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 006a46e0: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 006a46e3: mov ebx, dword ptr [ebx + 0x60] */ r_ebx = R32((u32)(r_ebx+0x60u));
    /* 006a46e6: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 006a46ea: mov dword ptr [esp + 0x50], ebx */ W32((u32)(r_esp+0x50u), r_ebx);
    /* 006a46ee: lea eax, [0x9cba38] */ r_eax = (u32)(0x9cba38u);
    /* 006a46f4: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 006a46f6: mov dword ptr [edx], ebx */ W32((u32)(r_edx), r_ebx);
    /* 006a46f8: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 006a46fb: mov dword ptr [edx + 4], ebx */ W32((u32)(r_edx+0x4u), r_ebx);
    /* 006a46fe: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 006a4701: mov dword ptr [edx + 8], ebx */ W32((u32)(r_edx+0x8u), r_ebx);
    /* 006a4704: mov ebx, dword ptr [eax + 0xc] */ r_ebx = R32((u32)(r_eax+0xcu));
    /* 006a4707: mov dword ptr [edx + 0xc], ebx */ W32((u32)(r_edx+0xcu), r_ebx);
    /* 006a470a: mov ebx, dword ptr [eax + 0x10] */ r_ebx = R32((u32)(r_eax+0x10u));
    /* 006a470d: mov dword ptr [edx + 0x10], ebx */ W32((u32)(r_edx+0x10u), r_ebx);
    /* 006a4710: mov ebx, dword ptr [eax + 0x14] */ r_ebx = R32((u32)(r_eax+0x14u));
    /* 006a4713: mov dword ptr [edx + 0x14], ebx */ W32((u32)(r_edx+0x14u), r_ebx);
    /* 006a4716: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 006a471a: lea ebx, [esp + 0x18] */ r_ebx = (u32)(r_esp+0x18u);
    /* 006a471e: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 006a4720: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 006a4724: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 006a4727: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 006a472b: mov dword ptr [ebx + 8], edx */ W32((u32)(r_ebx+0x8u), r_edx);
    /* 006a472e: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 006a4732: mov dword ptr [ebx + 0xc], edx */ W32((u32)(r_ebx+0xcu), r_edx);
    /* 006a4735: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 006a4739: mov dword ptr [ebx + 0x10], edx */ W32((u32)(r_ebx+0x10u), r_edx);
    /* 006a473c: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 006a4740: mov dword ptr [ebx + 0x14], edx */ W32((u32)(r_ebx+0x14u), r_edx);
    /* 006a4743: call 0x7b5318 */ r_esp -= 4; W32(r_esp, 0x6a4748u); f_007b5318();
    /* 006a4748: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a474a: jne 0x6a4795 */ if (!fZ) goto L_006a4795;
L_006a474c:; BB(0x006a474c);
    /* 006a474c: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006a474f: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006a4751: jl 0x6a4670 */ if ((fS!=fO)) goto L_006a4670;
L_006a4757:; BB(0x006a4757);
    /* 006a4757: mov ebx, dword ptr [esp + 0x54] */ r_ebx = R32((u32)(r_esp+0x54u));
    /* 006a475b: mov esi, dword ptr [esp + 0x58] */ r_esi = R32((u32)(r_esp+0x58u));
L_006a475f:; BB(0x006a475f);
    /* 006a475f: call 0x6a47ec */ r_esp -= 4; W32(r_esp, 0x6a4764u); f_006a47ec();
    /* 006a4764: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4766: je 0x6a478a */ if (fZ) goto L_006a478a;
L_006a4768:; BB(0x006a4768);
    /* 006a4768: mov eax, dword ptr [edi + 0x50] */ r_eax = R32((u32)(r_edi+0x50u));
    /* 006a476b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a476d: je 0x6a478a */ if (fZ) goto L_006a478a;
L_006a476f:; BB(0x006a476f);
    /* 006a476f: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6a4774u); f_00415cec();
    /* 006a4774: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006a4777: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a4778: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6a477du); f_006dc358();
    /* 006a477d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a477e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4780: je 0x6a478a */ if (fZ) goto L_006a478a;
L_006a4782:; BB(0x006a4782);
    /* 006a4782: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a4784: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a4787: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a4788: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a4789: ret  */ FN_RET(0x006a44fc); r_esp += 4; return;
L_006a478a:; BB(0x006a478a);
    /* 006a478a: mov eax, 1 */ r_eax = 0x1u;
    /* 006a478f: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a4792: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a4793: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a4794: ret  */ FN_RET(0x006a44fc); r_esp += 4; return;
L_006a4795:; BB(0x006a4795);
    /* 006a4795: mov ebx, dword ptr [esp + 0x54] */ r_ebx = R32((u32)(r_esp+0x54u));
    /* 006a4799: mov esi, dword ptr [esp + 0x58] */ r_esi = R32((u32)(r_esp+0x58u));
    /* 006a479d: je 0x6a475f */ if (fZ) goto L_006a475f;
L_006a479f:; BB(0x006a479f);
    /* 006a479f: mov edx, dword ptr [edi + 0x2c] */ r_edx = R32((u32)(r_edi+0x2cu));
    /* 006a47a2: add dword ptr [edi + 0x30], edx */ { u32 ad = (u32)(r_edi+0x30u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006a47a5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a47a7: add byte ptr [edi + 0x1e], 1 */ { u32 ad = (u32)(r_edi+0x1eu);  u32 a = R8(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006a47ab: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a47ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a47af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a47b0: ret  */ FN_RET(0x006a44fc); r_esp += 4; return;
L_006a47b1:; BB(0x006a47b1);
    /* 006a47b1: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a47b4: mov byte ptr [edi + 0x1d], dl */ W8((u32)(r_edi+0x1du), (u8)r_edx);
    /* 006a47b7: mov ecx, edi */ r_ecx = r_edi;
    /* 006a47b9: call 0x6a6e00 */ r_esp -= 4; W32(r_esp, 0x6a47beu); f_006a6e00();
    /* 006a47be: jmp 0x6a455e */ goto L_006a455e;
L_006a47c3:; BB(0x006a47c3);
    /* 006a47c3: mov byte ptr [edi + 0x1d], 1 */ W8((u32)(r_edi+0x1du), 0x1u);
    /* 006a47c7: mov ecx, edi */ r_ecx = r_edi;
    /* 006a47c9: call 0x6a6e00 */ r_esp -= 4; W32(r_esp, 0x6a47ceu); f_006a6e00();
    /* 006a47ce: mov eax, 2 */ r_eax = 0x2u;
    /* 006a47d3: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a47d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a47d7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a47d8: ret  */ FN_RET(0x006a44fc); r_esp += 4; return;
L_006a47d9:; BB(0x006a47d9);
    /* 006a47d9: mov edx, dword ptr [edi + 0x2c] */ r_edx = R32((u32)(r_edi+0x2cu));
    /* 006a47dc: add dword ptr [edi + 0x30], edx */ { u32 ad = (u32)(r_edi+0x30u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006a47df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a47e1: add byte ptr [edi + 0x1e], 1 */ { u32 ad = (u32)(r_edi+0x1eu);  u32 a = R8(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006a47e5: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a47e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a47e9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a47ea: ret  */ FN_RET(0x006a44fc); r_esp += 4; return;
}

void f_006a47ec(void) /* sub_6A47EC */
{
    FN_ENTER(0x006a47ec);
    /* 006a47ec: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x6a47f1u); f_007a61a4();
    /* 006a47f1: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a47f4: je 0x6a480f */ if (fZ) goto L_006a480f;
L_006a47f6:; BB(0x006a47f6);
    /* 006a47f6: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6a47fbu); f_00687c48();
    /* 006a47fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a47fd: jne 0x6a480f */ if (!fZ) goto L_006a480f;
L_006a47ff:; BB(0x006a47ff);
    /* 006a47ff: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 006a4804: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a4807: je 0x6a4812 */ if (fZ) goto L_006a4812;
L_006a4809:; BB(0x006a4809);
    /* 006a4809: mov eax, dword ptr [0xa95db0] */ r_eax = R32((u32)(0xa95db0u));
    /* 006a480e: ret  */ FN_RET(0x006a47ec); r_esp += 4; return;
L_006a480f:; BB(0x006a480f);
    /* 006a480f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a4811: ret  */ FN_RET(0x006a47ec); r_esp += 4; return;
L_006a4812:; BB(0x006a4812);
    /* 006a4812: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x6a4817u); f_0078b1c4();
    /* 006a4817: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a481a: je 0x6a480f */ if (fZ) goto L_006a480f;
L_006a481c:; BB(0x006a481c);
    /* 006a481c: jmp 0x6a4809 */ goto L_006a4809;
}

void f_006a4820(void) /* sub_6A4820 */
{
    FN_ENTER(0x006a4820);
    /* 006a4820: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a4821: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a4822: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a4823: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a4824: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a4827: mov edi, ecx */ r_edi = r_ecx;
    /* 006a4829: mov ecx, edi */ r_ecx = r_edi;
    /* 006a482b: call 0x6a44fc */ r_esp -= 4; W32(r_esp, 0x6a4830u); f_006a44fc();
    /* 006a4830: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4832: je 0x6a4952 */ if (fZ) goto L_006a4952;
L_006a4838:; BB(0x006a4838);
    /* 006a4838: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a483b: jne 0x6a4929 */ if (!fZ) goto L_006a4929;
L_006a4841:; BB(0x006a4841);
    /* 006a4841: mov ebp, dword ptr [edi + 0x54] */ r_ebp = R32((u32)(r_edi+0x54u));
    /* 006a4844: movsx esi, byte ptr [edi + 0x1c] */ r_esi = (u32)(i32)(i8)R8((u32)(r_edi+0x1cu));
    /* 006a4848: mov dword ptr [ebp + esi*4 + 8], 2 */ W32((u32)(r_ebp+r_esi*4+0x8u), 0x2u);
    /* 006a4850: movsx esi, byte ptr [edi + 0x1c] */ r_esi = (u32)(i32)(i8)R8((u32)(r_edi+0x1cu));
    /* 006a4854: mov ebp, dword ptr [edi + 0x54] */ r_ebp = R32((u32)(r_edi+0x54u));
    /* 006a4857: mov eax, dword ptr [edi + 0x44] */ r_eax = R32((u32)(r_edi+0x44u));
    /* 006a485a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006a485c: mov dword ptr [ebp + esi*8 + 0x2c], eax */ W32((u32)(r_ebp+r_esi*8+0x2cu), r_eax);
    /* 006a4860: mov edx, dword ptr [edi + 0x48] */ r_edx = R32((u32)(r_edi+0x48u));
    /* 006a4863: mov dword ptr [ebp + esi*8 + 0x30], edx */ W32((u32)(r_ebp+r_esi*8+0x30u), r_edx);
    /* 006a4867: mov eax, dword ptr [edi + 0x4c] */ r_eax = R32((u32)(r_edi+0x4cu));
    /* 006a486a: mov dword ptr [ebp + esi*8 + 0x34], eax */ W32((u32)(r_ebp+r_esi*8+0x34u), r_eax);
    /* 006a486e: movsx eax, byte ptr [edi + 0x1c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x1cu));
    /* 006a4872: mov ebp, dword ptr [edi + 0x54] */ r_ebp = R32((u32)(r_edi+0x54u));
    /* 006a4875: lea ebx, [edi + 0x44] */ r_ebx = (u32)(r_edi+0x44u);
    /* 006a4878: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 006a487b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a487d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a487f: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 006a4882: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006a4884: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006a4886: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006a4888: movzx eax, word ptr [edi + 0x20] */ r_eax = (u32)R16((u32)(r_edi+0x20u));
    /* 006a488c: lea ebx, [esi + ebp + 0xa8] */ r_ebx = (u32)(r_esi+r_ebp+0xa8u);
    /* 006a4893: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a4894: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6a4899u); f_0068d5a8();
    /* 006a4899: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006a489d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a48a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a48a2: je 0x6a493d */ if (fZ) goto L_006a493d;
L_006a48a8:; BB(0x006a48a8);
    /* 006a48a8: mov eax, dword ptr [ebp + esi + 0xbc] */ r_eax = R32((u32)(r_ebp+r_esi+0xbcu));
    /* 006a48af: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a48b2: jne 0x6a48fe */ if (!fZ) goto L_006a48fe;
L_006a48b4:; BB(0x006a48b4);
    /* 006a48b4: mov eax, dword ptr [ebp + esi + 0xac] */ r_eax = R32((u32)(r_ebp+r_esi+0xacu));
    /* 006a48bb: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a48be: je 0x6a495a */ if (fZ) goto L_006a495a;
L_006a48c4:; BB(0x006a48c4);
    /* 006a48c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a48c5: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006a48c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a48ca: movzx edx, word ptr [edi + 0x20] */ r_edx = (u32)R16((u32)(r_edi+0x20u));
    /* 006a48ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a48cf: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006a48d2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a48d3: call 0x5c4c4c */ r_esp -= 4; W32(r_esp, 0x6a48d8u); f_005c4c4c();
    /* 006a48d8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a48db: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a48dd: call 0x5d29b0 */ r_esp -= 4; W32(r_esp, 0x6a48e2u); f_005d29b0();
    /* 006a48e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a48e3: push dword ptr [ebp + esi + 0xac] */ { u32 v = R32((u32)(r_ebp+r_esi+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 006a48ea: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 006a48ee: call 0x68ee54 */ r_esp -= 4; W32(r_esp, 0x6a48f3u); f_0068ee54();
    /* 006a48f3: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 006a48f7: call 0x685514 */ r_esp -= 4; W32(r_esp, 0x6a48fcu); f_00685514();
    /* 006a48fc: jmp 0x6a493d */ goto L_006a493d;
L_006a48fe:; BB(0x006a48fe);
    /* 006a48fe: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006a4901: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a4903: call 0x5d29b0 */ r_esp -= 4; W32(r_esp, 0x6a4908u); f_005d29b0();
    /* 006a4908: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a4909: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006a490d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a490e: push dword ptr [ebp + esi + 0xac] */ { u32 v = R32((u32)(r_ebp+r_esi+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 006a4915: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 006a4919: call 0x68f090 */ r_esp -= 4; W32(r_esp, 0x6a491eu); f_0068f090();
    /* 006a491e: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 006a4922: call 0x685514 */ r_esp -= 4; W32(r_esp, 0x6a4927u); f_00685514();
    /* 006a4927: jmp 0x6a493d */ goto L_006a493d;
L_006a4929:; BB(0x006a4929);
    /* 006a4929: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a492c: jne 0x6a493d */ if (!fZ) goto L_006a493d;
L_006a492e:; BB(0x006a492e);
    /* 006a492e: mov eax, dword ptr [edi + 0x54] */ r_eax = R32((u32)(r_edi+0x54u));
    /* 006a4931: movsx edx, byte ptr [edi + 0x1c] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi+0x1cu));
    /* 006a4935: mov dword ptr [eax + edx*4 + 8], 3 */ W32((u32)(r_eax+r_edx*4+0x8u), 0x3u);
L_006a493d:; BB(0x006a493d);
    /* 006a493d: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006a4941: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a4946: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 006a494a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a494d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a494e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a494f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a4950: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a4951: ret  */ FN_RET(0x006a4820); r_esp += 4; return;
L_006a4952:; BB(0x006a4952);
    /* 006a4952: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a4955: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a4956: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a4957: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a4958: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a4959: ret  */ FN_RET(0x006a4820); r_esp += 4; return;
L_006a495a:; BB(0x006a495a);
    /* 006a495a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a495b: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006a495f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a4960: movzx edx, word ptr [edi + 0x20] */ r_edx = (u32)R16((u32)(r_edi+0x20u));
    /* 006a4964: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a4965: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006a4968: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a4969: call 0x5c4c4c */ r_esp -= 4; W32(r_esp, 0x6a496eu); f_005c4c4c();
    /* 006a496e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a4971: push dword ptr [ebp + esi + 0xc0] */ { u32 v = R32((u32)(r_ebp+r_esi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a4978: push dword ptr [ebp + esi + 0xac] */ { u32 v = R32((u32)(r_ebp+r_esi+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 006a497f: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 006a4983: call 0x68ee54 */ r_esp -= 4; W32(r_esp, 0x6a4988u); f_0068ee54();
    /* 006a4988: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 006a498c: call 0x685514 */ r_esp -= 4; W32(r_esp, 0x6a4991u); f_00685514();
    /* 006a4991: jmp 0x6a493d */ goto L_006a493d;
}

void f_006a4994(void) /* sub_6A4994 */
{
    FN_ENTER(0x006a4994);
    /* 006a4994: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a4995: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a4996: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a4997: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a4999: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a499d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a499f: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6a49a4u); f_008193cc();
    /* 006a49a4: mov dword ptr [ebx], 0xb39d14 */ W32((u32)(r_ebx), 0xb39d14u);
    /* 006a49aa: lea edx, [ebx + 0x28] */ r_edx = (u32)(r_ebx+0x28u);
    /* 006a49ad: mov eax, 8 */ r_eax = 0x8u;
L_006a49b2:; BB(0x006a49b2);
    /* 006a49b2: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 006a49b8: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a49bb: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006a49be: jne 0x6a49b2 */ if (!fZ) goto L_006a49b2;
L_006a49c0:; BB(0x006a49c0);
    /* 006a49c0: mov dword ptr [ebx + 0x24], 0 */ W32((u32)(r_ebx+0x24u), 0x0u);
    /* 006a49c7: lea ecx, [ebx + 0x48] */ r_ecx = (u32)(r_ebx+0x48u);
    /* 006a49ca: mov edx, 8 */ r_edx = 0x8u;
    /* 006a49cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a49d1: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 006a49d3: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_006a49d5:; BB(0x006a49d5);
    /* 006a49d5: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 006a49db: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 006a49de: mov dword ptr [ecx + 8], ebp */ W32((u32)(r_ecx+0x8u), r_ebp);
    /* 006a49e1: mov dword ptr [ecx + 4], edi */ W32((u32)(r_ecx+0x4u), r_edi);
    /* 006a49e4: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006a49e7: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 006a49ea: jne 0x6a49d5 */ if (!fZ) goto L_006a49d5;
L_006a49ec:; BB(0x006a49ec);
    /* 006a49ec: mov dword ptr [ebx + 0x20], 0xb39ce0 */ W32((u32)(r_ebx+0x20u), 0xb39ce0u);
    /* 006a49f3: lea edx, [ebx + 0xc8] */ r_edx = (u32)(r_ebx+0xc8u);
    /* 006a49f9: mov eax, 9 */ r_eax = 0x9u;
L_006a49fe:; BB(0x006a49fe);
    /* 006a49fe: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 006a4a04: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a4a07: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006a4a0a: jne 0x6a49fe */ if (!fZ) goto L_006a49fe;
L_006a4a0c:; BB(0x006a4a0c);
    /* 006a4a0c: mov edx, dword ptr [0x9cba30] */ r_edx = R32((u32)(0x9cba30u));
    /* 006a4a12: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 006a4a15: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a4a17: mov word ptr [ebx + 0x1c], ax */ W16((u32)(r_ebx+0x1cu), (u16)r_eax);
    /* 006a4a1b: mov word ptr [ebx + 0x1e], ax */ W16((u32)(r_ebx+0x1eu), (u16)r_eax);
    /* 006a4a1f: mov eax, ebx */ r_eax = r_ebx;
    /* 006a4a21: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a4a22: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a4a23: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a4a24: ret 4 */ FN_RET(0x006a4994); r_esp += 8; return;
}

void f_006a4a28(void) /* sub_6A4A28 */
{
    FN_ENTER(0x006a4a28);
    /* 006a4a28: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a4a2b: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 006a4a2f: mov edx, dword ptr [ecx + 0x1c4] */ r_edx = R32((u32)(r_ecx+0x1c4u));
    /* 006a4a35: mov dword ptr [0xa94378], eax */ W32((u32)(0xa94378u), r_eax);
    /* 006a4a3a: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 006a4a3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4a3f: je 0x6a4ac0 */ if (fZ) goto L_006a4ac0;
L_006a4a45:; BB(0x006a4a45);
    /* 006a4a45: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 006a4a48: mov ebx, eax */ r_ebx = r_eax;
L_006a4a4a:; BB(0x006a4a4a);
    /* 006a4a4a: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 006a4a4d: cmp edx, dword ptr [0x9cba2c] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4a53: jne 0x6a4a6b */ if (!fZ) goto L_006a4a6b;
L_006a4a55:; BB(0x006a4a55);
    /* 006a4a55: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a4a57: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a4a5cu); f_008173b4();
    /* 006a4a5c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4a5e: je 0x6a4a67 */ if (fZ) goto L_006a4a67;
L_006a4a60:; BB(0x006a4a60);
    /* 006a4a60: mov edx, 1 */ r_edx = 0x1u;
    /* 006a4a65: jmp 0x6a4a6d */ goto L_006a4a6d;
L_006a4a67:; BB(0x006a4a67);
    /* 006a4a67: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a4a69: jmp 0x6a4a6d */ goto L_006a4a6d;
L_006a4a6b:; BB(0x006a4a6b);
    /* 006a4a6b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a4a6d:; BB(0x006a4a6d);
    /* 006a4a6d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4a6f: je 0x6a4aab */ if (fZ) goto L_006a4aab;
L_006a4a71:; BB(0x006a4a71);
    /* 006a4a71: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 006a4a74: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a4a79u); f_008173b4();
    /* 006a4a79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4a7b: jne 0x6a4a81 */ if (!fZ) goto L_006a4a81;
L_006a4a7d:; BB(0x006a4a7d);
    /* 006a4a7d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006a4a7f: jmp 0x6a4a84 */ goto L_006a4a84;
L_006a4a81:; BB(0x006a4a81);
    /* 006a4a81: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
L_006a4a84:; BB(0x006a4a84);
    /* 006a4a84: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4a86: je 0x6a4aab */ if (fZ) goto L_006a4aab;
L_006a4a88:; BB(0x006a4a88);
    /* 006a4a88: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006a4a8c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a4a8d: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x6a4a92u); f_005c425c();
    /* 006a4a92: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006a4a96: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006a4a98: push dword ptr [0xa94378] */ { u32 v = R32((u32)(0xa94378u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a4a9e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a4a9f: call 0x5ca59c */ r_esp -= 4; W32(r_esp, 0x6a4aa4u); f_005ca59c();
    /* 006a4aa4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a4aa7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4aa9: jne 0x6a4acd */ if (!fZ) goto L_006a4acd;
L_006a4aab:; BB(0x006a4aab);
    /* 006a4aab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a4aad: call 0x6a4ad4 */ r_esp -= 4; W32(r_esp, 0x6a4ab2u); f_006a4ad4();
    /* 006a4ab2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4ab4: jne 0x6a4ac4 */ if (!fZ) goto L_006a4ac4;
L_006a4ab6:; BB(0x006a4ab6);
    /* 006a4ab6: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 006a4ab9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4abb: jne 0x6a4a4a */ if (!fZ) goto L_006a4a4a;
L_006a4abd:; BB(0x006a4abd);
    /* 006a4abd: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_006a4ac0:; BB(0x006a4ac0);
    /* 006a4ac0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a4ac2: jmp 0x6a4ac7 */ goto L_006a4ac7;
L_006a4ac4:; BB(0x006a4ac4);
    /* 006a4ac4: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_006a4ac7:; BB(0x006a4ac7);
    /* 006a4ac7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a4aca: ret 4 */ FN_RET(0x006a4a28); r_esp += 8; return;
L_006a4acd:; BB(0x006a4acd);
    /* 006a4acd: mov eax, ebx */ r_eax = r_ebx;
    /* 006a4acf: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 006a4ad2: jmp 0x6a4ac7 */ goto L_006a4ac7;
}

void f_006a4ad4(void) /* sub_6A4AD4 */
{
    FN_ENTER(0x006a4ad4);
    /* 006a4ad4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a4ad7: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 006a4ada: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4adc: je 0x6a4b5d */ if (fZ) goto L_006a4b5d;
L_006a4ae2:; BB(0x006a4ae2);
    /* 006a4ae2: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 006a4ae5: mov ebx, eax */ r_ebx = r_eax;
L_006a4ae7:; BB(0x006a4ae7);
    /* 006a4ae7: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 006a4aea: cmp edx, dword ptr [0x9cba2c] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4af0: jne 0x6a4b08 */ if (!fZ) goto L_006a4b08;
L_006a4af2:; BB(0x006a4af2);
    /* 006a4af2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a4af4: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a4af9u); f_008173b4();
    /* 006a4af9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4afb: je 0x6a4b04 */ if (fZ) goto L_006a4b04;
L_006a4afd:; BB(0x006a4afd);
    /* 006a4afd: mov edx, 1 */ r_edx = 0x1u;
    /* 006a4b02: jmp 0x6a4b0a */ goto L_006a4b0a;
L_006a4b04:; BB(0x006a4b04);
    /* 006a4b04: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a4b06: jmp 0x6a4b0a */ goto L_006a4b0a;
L_006a4b08:; BB(0x006a4b08);
    /* 006a4b08: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a4b0a:; BB(0x006a4b0a);
    /* 006a4b0a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4b0c: je 0x6a4b48 */ if (fZ) goto L_006a4b48;
L_006a4b0e:; BB(0x006a4b0e);
    /* 006a4b0e: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 006a4b11: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a4b16u); f_008173b4();
    /* 006a4b16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4b18: jne 0x6a4b1e */ if (!fZ) goto L_006a4b1e;
L_006a4b1a:; BB(0x006a4b1a);
    /* 006a4b1a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006a4b1c: jmp 0x6a4b21 */ goto L_006a4b21;
L_006a4b1e:; BB(0x006a4b1e);
    /* 006a4b1e: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
L_006a4b21:; BB(0x006a4b21);
    /* 006a4b21: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4b23: je 0x6a4b48 */ if (fZ) goto L_006a4b48;
L_006a4b25:; BB(0x006a4b25);
    /* 006a4b25: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006a4b29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a4b2a: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x6a4b2fu); f_005c425c();
    /* 006a4b2f: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006a4b33: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006a4b35: push dword ptr [0xa94378] */ { u32 v = R32((u32)(0xa94378u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a4b3b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a4b3c: call 0x5ca59c */ r_esp -= 4; W32(r_esp, 0x6a4b41u); f_005ca59c();
    /* 006a4b41: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a4b44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4b46: jne 0x6a4b6a */ if (!fZ) goto L_006a4b6a;
L_006a4b48:; BB(0x006a4b48);
    /* 006a4b48: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a4b4a: call 0x6a4ad4 */ r_esp -= 4; W32(r_esp, 0x6a4b4fu); f_006a4ad4();
    /* 006a4b4f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4b51: jne 0x6a4b63 */ if (!fZ) goto L_006a4b63;
L_006a4b53:; BB(0x006a4b53);
    /* 006a4b53: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 006a4b56: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4b58: jne 0x6a4ae7 */ if (!fZ) goto L_006a4ae7;
L_006a4b5a:; BB(0x006a4b5a);
    /* 006a4b5a: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_006a4b5d:; BB(0x006a4b5d);
    /* 006a4b5d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a4b5f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a4b62: ret  */ FN_RET(0x006a4ad4); r_esp += 4; return;
L_006a4b63:; BB(0x006a4b63);
    /* 006a4b63: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 006a4b66: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a4b69: ret  */ FN_RET(0x006a4ad4); r_esp += 4; return;
L_006a4b6a:; BB(0x006a4b6a);
    /* 006a4b6a: mov eax, ebx */ r_eax = r_ebx;
    /* 006a4b6c: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 006a4b6f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a4b72: ret  */ FN_RET(0x006a4ad4); r_esp += 4; return;
}

void f_006a4b74(void) /* sub_6A4B74 */
{
    FN_ENTER(0x006a4b74);
    /* 006a4b74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a4b75: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a4b76: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a4b79: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a4b7b: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 006a4b7f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a4b81: call 0x5d24b0 */ r_esp -= 4; W32(r_esp, 0x6a4b86u); f_005d24b0();
    /* 006a4b86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4b88: jne 0x6a4cdb */ if (!fZ) goto L_006a4cdb;
L_006a4b8e:; BB(0x006a4b8e);
    /* 006a4b8e: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 006a4b92: mov dword ptr [0xa94378], ebp */ W32((u32)(0xa94378u), r_ebp);
    /* 006a4b98: mov dword ptr [0xa9437c], 0 */ W32((u32)(0xa9437cu), 0x0u);
    /* 006a4ba2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a4ba4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4ba6: je 0x6a4c4f */ if (fZ) goto L_006a4c4f;
L_006a4bac:; BB(0x006a4bac);
    /* 006a4bac: mov edx, dword ptr [ebx + 0x1c4] */ r_edx = R32((u32)(r_ebx+0x1c4u));
    /* 006a4bb2: mov ebx, dword ptr [edx + 0x18] */ r_ebx = R32((u32)(r_edx+0x18u));
    /* 006a4bb5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4bb7: je 0x6a4cd3 */ if (fZ) goto L_006a4cd3;
L_006a4bbd:; BB(0x006a4bbd);
    /* 006a4bbd: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 006a4bc0: cmp eax, dword ptr [0x9cba2c] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4bc6: jne 0x6a4bde */ if (!fZ) goto L_006a4bde;
L_006a4bc8:; BB(0x006a4bc8);
    /* 006a4bc8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a4bca: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a4bcfu); f_008173b4();
    /* 006a4bcf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4bd1: je 0x6a4bda */ if (fZ) goto L_006a4bda;
L_006a4bd3:; BB(0x006a4bd3);
    /* 006a4bd3: mov eax, 1 */ r_eax = 0x1u;
    /* 006a4bd8: jmp 0x6a4be0 */ goto L_006a4be0;
L_006a4bda:; BB(0x006a4bda);
    /* 006a4bda: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a4bdc: jmp 0x6a4be0 */ goto L_006a4be0;
L_006a4bde:; BB(0x006a4bde);
    /* 006a4bde: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a4be0:; BB(0x006a4be0);
    /* 006a4be0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4be2: je 0x6a4c30 */ if (fZ) goto L_006a4c30;
L_006a4be4:; BB(0x006a4be4);
    /* 006a4be4: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 006a4be7: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a4becu); f_008173b4();
    /* 006a4bec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4bee: jne 0x6a4bf4 */ if (!fZ) goto L_006a4bf4;
L_006a4bf0:; BB(0x006a4bf0);
    /* 006a4bf0: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 006a4bf2: jmp 0x6a4bf7 */ goto L_006a4bf7;
L_006a4bf4:; BB(0x006a4bf4);
    /* 006a4bf4: mov ebp, dword ptr [ebx + 0x1c] */ r_ebp = R32((u32)(r_ebx+0x1cu));
L_006a4bf7:; BB(0x006a4bf7);
    /* 006a4bf7: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4bf9: je 0x6a4c30 */ if (fZ) goto L_006a4c30;
L_006a4bfb:; BB(0x006a4bfb);
    /* 006a4bfb: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 006a4bff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a4c00: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a4c02: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x6a4c07u); f_005c425c();
    /* 006a4c07: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 006a4c0b: push dword ptr [0xa94378] */ { u32 v = R32((u32)(0xa94378u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a4c11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a4c12: call 0x5ca70c */ r_esp -= 4; W32(r_esp, 0x6a4c17u); f_005ca70c();
    /* 006a4c17: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a4c1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4c1c: je 0x6a4c30 */ if (fZ) goto L_006a4c30;
L_006a4c1e:; BB(0x006a4c1e);
    /* 006a4c1e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a4c20: call 0x5c443c */ r_esp -= 4; W32(r_esp, 0x6a4c25u); f_005c443c();
    /* 006a4c25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4c27: jne 0x6a4c30 */ if (!fZ) goto L_006a4c30;
L_006a4c29:; BB(0x006a4c29);
    /* 006a4c29: add dword ptr [0xa9437c], 1 */ { u32 ad = (u32)(0xa9437cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_006a4c30:; BB(0x006a4c30);
    /* 006a4c30: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a4c32: call 0x6a4dac */ r_esp -= 4; W32(r_esp, 0x6a4c37u); f_006a4dac();
    /* 006a4c37: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 006a4c3a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4c3c: jne 0x6a4bbd */ if (!fZ) goto L_006a4bbd;
L_006a4c42:; BB(0x006a4c42);
    /* 006a4c42: mov eax, dword ptr [0xa9437c] */ r_eax = R32((u32)(0xa9437cu));
    /* 006a4c47: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a4c4a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a4c4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a4c4c: ret 8 */ FN_RET(0x006a4b74); r_esp += 12; return;
L_006a4c4f:; BB(0x006a4c4f);
    /* 006a4c4f: mov edx, dword ptr [ebx + 0x1c4] */ r_edx = R32((u32)(r_ebx+0x1c4u));
    /* 006a4c55: mov ebx, dword ptr [edx + 0x18] */ r_ebx = R32((u32)(r_edx+0x18u));
    /* 006a4c58: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4c5a: je 0x6a4cd3 */ if (fZ) goto L_006a4cd3;
L_006a4c5c:; BB(0x006a4c5c);
    /* 006a4c5c: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 006a4c5f: cmp eax, dword ptr [0x9cba2c] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4c65: jne 0x6a4c7d */ if (!fZ) goto L_006a4c7d;
L_006a4c67:; BB(0x006a4c67);
    /* 006a4c67: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a4c69: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a4c6eu); f_008173b4();
    /* 006a4c6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4c70: je 0x6a4c79 */ if (fZ) goto L_006a4c79;
L_006a4c72:; BB(0x006a4c72);
    /* 006a4c72: mov eax, 1 */ r_eax = 0x1u;
    /* 006a4c77: jmp 0x6a4c7f */ goto L_006a4c7f;
L_006a4c79:; BB(0x006a4c79);
    /* 006a4c79: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a4c7b: jmp 0x6a4c7f */ goto L_006a4c7f;
L_006a4c7d:; BB(0x006a4c7d);
    /* 006a4c7d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a4c7f:; BB(0x006a4c7f);
    /* 006a4c7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4c81: je 0x6a4cc0 */ if (fZ) goto L_006a4cc0;
L_006a4c83:; BB(0x006a4c83);
    /* 006a4c83: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 006a4c86: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a4c8bu); f_008173b4();
    /* 006a4c8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4c8d: jne 0x6a4c93 */ if (!fZ) goto L_006a4c93;
L_006a4c8f:; BB(0x006a4c8f);
    /* 006a4c8f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006a4c91: jmp 0x6a4c96 */ goto L_006a4c96;
L_006a4c93:; BB(0x006a4c93);
    /* 006a4c93: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
L_006a4c96:; BB(0x006a4c96);
    /* 006a4c96: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4c98: je 0x6a4cc0 */ if (fZ) goto L_006a4cc0;
L_006a4c9a:; BB(0x006a4c9a);
    /* 006a4c9a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006a4c9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a4c9e: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x6a4ca3u); f_005c425c();
    /* 006a4ca3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006a4ca6: push dword ptr [0xa94378] */ { u32 v = R32((u32)(0xa94378u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a4cac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a4cad: call 0x5ca70c */ r_esp -= 4; W32(r_esp, 0x6a4cb2u); f_005ca70c();
    /* 006a4cb2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a4cb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4cb7: je 0x6a4cc0 */ if (fZ) goto L_006a4cc0;
L_006a4cb9:; BB(0x006a4cb9);
    /* 006a4cb9: add dword ptr [0xa9437c], 1 */ { u32 ad = (u32)(0xa9437cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_006a4cc0:; BB(0x006a4cc0);
    /* 006a4cc0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a4cc2: call 0x6a4d1c */ r_esp -= 4; W32(r_esp, 0x6a4cc7u); f_006a4d1c();
    /* 006a4cc7: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 006a4cca: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4ccc: jne 0x6a4c5c */ if (!fZ) goto L_006a4c5c;
L_006a4cce:; BB(0x006a4cce);
    /* 006a4cce: mov eax, dword ptr [0xa9437c] */ r_eax = R32((u32)(0xa9437cu));
L_006a4cd3:; BB(0x006a4cd3);
    /* 006a4cd3: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a4cd6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a4cd7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a4cd8: ret 8 */ FN_RET(0x006a4b74); r_esp += 12; return;
L_006a4cdb:; BB(0x006a4cdb);
    /* 006a4cdb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a4cdc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a4cde: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x6a4ce3u); f_006a4e50();
    /* 006a4ce3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4ce5: je 0x6a4cff */ if (fZ) goto L_006a4cff;
L_006a4ce7:; BB(0x006a4ce7);
    /* 006a4ce7: mov ecx, eax */ r_ecx = r_eax;
    /* 006a4ce9: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x6a4ceeu); f_006a60dc();
    /* 006a4cee: mov ebx, eax */ r_ebx = r_eax;
    /* 006a4cf0: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4cf2: je 0x6a4cff */ if (fZ) goto L_006a4cff;
L_006a4cf4:; BB(0x006a4cf4);
    /* 006a4cf4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a4cf6: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a4cfbu); f_008173b4();
    /* 006a4cfb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4cfd: jne 0x6a4d09 */ if (!fZ) goto L_006a4d09;
L_006a4cff:; BB(0x006a4cff);
    /* 006a4cff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a4d01: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a4d04: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a4d05: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a4d06: ret 8 */ FN_RET(0x006a4b74); r_esp += 12; return;
L_006a4d09:; BB(0x006a4d09);
    /* 006a4d09: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006a4d0b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a4d0d: call dword ptr [edx + 0x88] */ { u32 t = R32((u32)(r_edx+0x88u)); r_esp -= 4; W32(r_esp, 0x6a4d13u); call_ind(t); }
    /* 006a4d13: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a4d16: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a4d17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a4d18: ret 8 */ FN_RET(0x006a4b74); r_esp += 12; return;
}

void f_006a4d1c(void) /* sub_6A4D1C */
{
    FN_ENTER(0x006a4d1c);
    /* 006a4d1c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a4d1f: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 006a4d22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4d24: je 0x6a4da6 */ if (fZ) goto L_006a4da6;
L_006a4d2a:; BB(0x006a4d2a);
    /* 006a4d2a: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 006a4d2e: mov ebx, eax */ r_ebx = r_eax;
L_006a4d30:; BB(0x006a4d30);
    /* 006a4d30: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 006a4d33: cmp edx, dword ptr [0x9cba2c] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4d39: jne 0x6a4d51 */ if (!fZ) goto L_006a4d51;
L_006a4d3b:; BB(0x006a4d3b);
    /* 006a4d3b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a4d3d: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a4d42u); f_008173b4();
    /* 006a4d42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4d44: je 0x6a4d4d */ if (fZ) goto L_006a4d4d;
L_006a4d46:; BB(0x006a4d46);
    /* 006a4d46: mov edx, 1 */ r_edx = 0x1u;
    /* 006a4d4b: jmp 0x6a4d53 */ goto L_006a4d53;
L_006a4d4d:; BB(0x006a4d4d);
    /* 006a4d4d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a4d4f: jmp 0x6a4d53 */ goto L_006a4d53;
L_006a4d51:; BB(0x006a4d51);
    /* 006a4d51: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a4d53:; BB(0x006a4d53);
    /* 006a4d53: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4d55: je 0x6a4d94 */ if (fZ) goto L_006a4d94;
L_006a4d57:; BB(0x006a4d57);
    /* 006a4d57: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 006a4d5a: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a4d5fu); f_008173b4();
    /* 006a4d5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4d61: jne 0x6a4d67 */ if (!fZ) goto L_006a4d67;
L_006a4d63:; BB(0x006a4d63);
    /* 006a4d63: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006a4d65: jmp 0x6a4d6a */ goto L_006a4d6a;
L_006a4d67:; BB(0x006a4d67);
    /* 006a4d67: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
L_006a4d6a:; BB(0x006a4d6a);
    /* 006a4d6a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4d6c: je 0x6a4d94 */ if (fZ) goto L_006a4d94;
L_006a4d6e:; BB(0x006a4d6e);
    /* 006a4d6e: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006a4d71: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a4d72: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x6a4d77u); f_005c425c();
    /* 006a4d77: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006a4d7a: push dword ptr [0xa94378] */ { u32 v = R32((u32)(0xa94378u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a4d80: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a4d81: call 0x5ca70c */ r_esp -= 4; W32(r_esp, 0x6a4d86u); f_005ca70c();
    /* 006a4d86: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a4d89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4d8b: je 0x6a4d94 */ if (fZ) goto L_006a4d94;
L_006a4d8d:; BB(0x006a4d8d);
    /* 006a4d8d: add dword ptr [0xa9437c], 1 */ { u32 ad = (u32)(0xa9437cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_006a4d94:; BB(0x006a4d94);
    /* 006a4d94: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a4d96: call 0x6a4d1c */ r_esp -= 4; W32(r_esp, 0x6a4d9bu); f_006a4d1c();
    /* 006a4d9b: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 006a4d9e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4da0: jne 0x6a4d30 */ if (!fZ) goto L_006a4d30;
L_006a4da2:; BB(0x006a4da2);
    /* 006a4da2: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
L_006a4da6:; BB(0x006a4da6);
    /* 006a4da6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a4da9: ret  */ FN_RET(0x006a4d1c); r_esp += 4; return;
}

void f_006a4dac(void) /* sub_6A4DAC */
{
    FN_ENTER(0x006a4dac);
    /* 006a4dac: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a4daf: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 006a4db2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4db4: je 0x6a4e4b */ if (fZ) goto L_006a4e4b;
L_006a4dba:; BB(0x006a4dba);
    /* 006a4dba: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 006a4dbe: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 006a4dc2: mov esi, eax */ r_esi = r_eax;
L_006a4dc4:; BB(0x006a4dc4);
    /* 006a4dc4: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 006a4dc7: cmp edx, dword ptr [0x9cba2c] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4dcd: jne 0x6a4de5 */ if (!fZ) goto L_006a4de5;
L_006a4dcf:; BB(0x006a4dcf);
    /* 006a4dcf: mov ecx, esi */ r_ecx = r_esi;
    /* 006a4dd1: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a4dd6u); f_008173b4();
    /* 006a4dd6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4dd8: je 0x6a4de1 */ if (fZ) goto L_006a4de1;
L_006a4dda:; BB(0x006a4dda);
    /* 006a4dda: mov edx, 1 */ r_edx = 0x1u;
    /* 006a4ddf: jmp 0x6a4de7 */ goto L_006a4de7;
L_006a4de1:; BB(0x006a4de1);
    /* 006a4de1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a4de3: jmp 0x6a4de7 */ goto L_006a4de7;
L_006a4de5:; BB(0x006a4de5);
    /* 006a4de5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a4de7:; BB(0x006a4de7);
    /* 006a4de7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4de9: je 0x6a4e35 */ if (fZ) goto L_006a4e35;
L_006a4deb:; BB(0x006a4deb);
    /* 006a4deb: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 006a4dee: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a4df3u); f_008173b4();
    /* 006a4df3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4df5: jne 0x6a4dfb */ if (!fZ) goto L_006a4dfb;
L_006a4df7:; BB(0x006a4df7);
    /* 006a4df7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006a4df9: jmp 0x6a4dfe */ goto L_006a4dfe;
L_006a4dfb:; BB(0x006a4dfb);
    /* 006a4dfb: mov ebx, dword ptr [esi + 0x1c] */ r_ebx = R32((u32)(r_esi+0x1cu));
L_006a4dfe:; BB(0x006a4dfe);
    /* 006a4dfe: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4e00: je 0x6a4e35 */ if (fZ) goto L_006a4e35;
L_006a4e02:; BB(0x006a4e02);
    /* 006a4e02: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006a4e05: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a4e06: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a4e08: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x6a4e0du); f_005c425c();
    /* 006a4e0d: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006a4e10: push dword ptr [0xa94378] */ { u32 v = R32((u32)(0xa94378u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a4e16: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a4e17: call 0x5ca70c */ r_esp -= 4; W32(r_esp, 0x6a4e1cu); f_005ca70c();
    /* 006a4e1c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a4e1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4e21: je 0x6a4e35 */ if (fZ) goto L_006a4e35;
L_006a4e23:; BB(0x006a4e23);
    /* 006a4e23: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a4e25: call 0x5c443c */ r_esp -= 4; W32(r_esp, 0x6a4e2au); f_005c443c();
    /* 006a4e2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4e2c: jne 0x6a4e35 */ if (!fZ) goto L_006a4e35;
L_006a4e2e:; BB(0x006a4e2e);
    /* 006a4e2e: add dword ptr [0xa9437c], 1 */ { u32 ad = (u32)(0xa9437cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_006a4e35:; BB(0x006a4e35);
    /* 006a4e35: mov ecx, esi */ r_ecx = r_esi;
    /* 006a4e37: call 0x6a4dac */ r_esp -= 4; W32(r_esp, 0x6a4e3cu); f_006a4dac();
    /* 006a4e3c: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 006a4e3f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4e41: jne 0x6a4dc4 */ if (!fZ) goto L_006a4dc4;
L_006a4e43:; BB(0x006a4e43);
    /* 006a4e43: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 006a4e47: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
L_006a4e4b:; BB(0x006a4e4b);
    /* 006a4e4b: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a4e4e: ret  */ FN_RET(0x006a4dac); r_esp += 4; return;
}

void f_006a4e50(void) /* sub_6A4E50 */
{
    FN_ENTER(0x006a4e50);
    /* 006a4e50: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a4e53: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 006a4e57: mov edx, dword ptr [ecx + 0x1c4] */ r_edx = R32((u32)(r_ecx+0x1c4u));
    /* 006a4e5d: mov dword ptr [0xa94378], eax */ W32((u32)(0xa94378u), r_eax);
    /* 006a4e62: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 006a4e65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4e67: je 0x6a4ee2 */ if (fZ) goto L_006a4ee2;
L_006a4e69:; BB(0x006a4e69);
    /* 006a4e69: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 006a4e6c: mov ebx, eax */ r_ebx = r_eax;
L_006a4e6e:; BB(0x006a4e6e);
    /* 006a4e6e: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 006a4e71: cmp edx, dword ptr [0x9cba2c] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4e77: jne 0x6a4e8f */ if (!fZ) goto L_006a4e8f;
L_006a4e79:; BB(0x006a4e79);
    /* 006a4e79: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a4e7b: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a4e80u); f_008173b4();
    /* 006a4e80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4e82: je 0x6a4e8b */ if (fZ) goto L_006a4e8b;
L_006a4e84:; BB(0x006a4e84);
    /* 006a4e84: mov edx, 1 */ r_edx = 0x1u;
    /* 006a4e89: jmp 0x6a4e91 */ goto L_006a4e91;
L_006a4e8b:; BB(0x006a4e8b);
    /* 006a4e8b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a4e8d: jmp 0x6a4e91 */ goto L_006a4e91;
L_006a4e8f:; BB(0x006a4e8f);
    /* 006a4e8f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a4e91:; BB(0x006a4e91);
    /* 006a4e91: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4e93: je 0x6a4ecd */ if (fZ) goto L_006a4ecd;
L_006a4e95:; BB(0x006a4e95);
    /* 006a4e95: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 006a4e98: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a4e9du); f_008173b4();
    /* 006a4e9d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4e9f: jne 0x6a4ea5 */ if (!fZ) goto L_006a4ea5;
L_006a4ea1:; BB(0x006a4ea1);
    /* 006a4ea1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006a4ea3: jmp 0x6a4ea8 */ goto L_006a4ea8;
L_006a4ea5:; BB(0x006a4ea5);
    /* 006a4ea5: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
L_006a4ea8:; BB(0x006a4ea8);
    /* 006a4ea8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4eaa: je 0x6a4ecd */ if (fZ) goto L_006a4ecd;
L_006a4eac:; BB(0x006a4eac);
    /* 006a4eac: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006a4eb0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a4eb1: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x6a4eb6u); f_005c425c();
    /* 006a4eb6: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006a4eba: push dword ptr [0xa94378] */ { u32 v = R32((u32)(0xa94378u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a4ec0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a4ec1: call 0x5ca70c */ r_esp -= 4; W32(r_esp, 0x6a4ec6u); f_005ca70c();
    /* 006a4ec6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a4ec9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4ecb: jne 0x6a4eef */ if (!fZ) goto L_006a4eef;
L_006a4ecd:; BB(0x006a4ecd);
    /* 006a4ecd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a4ecf: call 0x6a4ef8 */ r_esp -= 4; W32(r_esp, 0x6a4ed4u); f_006a4ef8();
    /* 006a4ed4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4ed6: jne 0x6a4ee6 */ if (!fZ) goto L_006a4ee6;
L_006a4ed8:; BB(0x006a4ed8);
    /* 006a4ed8: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 006a4edb: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4edd: jne 0x6a4e6e */ if (!fZ) goto L_006a4e6e;
L_006a4edf:; BB(0x006a4edf);
    /* 006a4edf: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_006a4ee2:; BB(0x006a4ee2);
    /* 006a4ee2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a4ee4: jmp 0x6a4ee9 */ goto L_006a4ee9;
L_006a4ee6:; BB(0x006a4ee6);
    /* 006a4ee6: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_006a4ee9:; BB(0x006a4ee9);
    /* 006a4ee9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a4eec: ret 4 */ FN_RET(0x006a4e50); r_esp += 8; return;
L_006a4eef:; BB(0x006a4eef);
    /* 006a4eef: mov eax, ebx */ r_eax = r_ebx;
    /* 006a4ef1: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 006a4ef4: jmp 0x6a4ee9 */ goto L_006a4ee9;
}

void f_006a4ef8(void) /* sub_6A4EF8 */
{
    FN_ENTER(0x006a4ef8);
    /* 006a4ef8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a4efb: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 006a4efe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4f00: je 0x6a4f7b */ if (fZ) goto L_006a4f7b;
L_006a4f02:; BB(0x006a4f02);
    /* 006a4f02: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 006a4f05: mov ebx, eax */ r_ebx = r_eax;
L_006a4f07:; BB(0x006a4f07);
    /* 006a4f07: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 006a4f0a: cmp edx, dword ptr [0x9cba2c] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4f10: jne 0x6a4f28 */ if (!fZ) goto L_006a4f28;
L_006a4f12:; BB(0x006a4f12);
    /* 006a4f12: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a4f14: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a4f19u); f_008173b4();
    /* 006a4f19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4f1b: je 0x6a4f24 */ if (fZ) goto L_006a4f24;
L_006a4f1d:; BB(0x006a4f1d);
    /* 006a4f1d: mov edx, 1 */ r_edx = 0x1u;
    /* 006a4f22: jmp 0x6a4f2a */ goto L_006a4f2a;
L_006a4f24:; BB(0x006a4f24);
    /* 006a4f24: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a4f26: jmp 0x6a4f2a */ goto L_006a4f2a;
L_006a4f28:; BB(0x006a4f28);
    /* 006a4f28: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a4f2a:; BB(0x006a4f2a);
    /* 006a4f2a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4f2c: je 0x6a4f66 */ if (fZ) goto L_006a4f66;
L_006a4f2e:; BB(0x006a4f2e);
    /* 006a4f2e: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 006a4f31: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a4f36u); f_008173b4();
    /* 006a4f36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4f38: jne 0x6a4f3e */ if (!fZ) goto L_006a4f3e;
L_006a4f3a:; BB(0x006a4f3a);
    /* 006a4f3a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006a4f3c: jmp 0x6a4f41 */ goto L_006a4f41;
L_006a4f3e:; BB(0x006a4f3e);
    /* 006a4f3e: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
L_006a4f41:; BB(0x006a4f41);
    /* 006a4f41: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4f43: je 0x6a4f66 */ if (fZ) goto L_006a4f66;
L_006a4f45:; BB(0x006a4f45);
    /* 006a4f45: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006a4f49: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a4f4a: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x6a4f4fu); f_005c425c();
    /* 006a4f4f: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006a4f53: push dword ptr [0xa94378] */ { u32 v = R32((u32)(0xa94378u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a4f59: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a4f5a: call 0x5ca70c */ r_esp -= 4; W32(r_esp, 0x6a4f5fu); f_005ca70c();
    /* 006a4f5f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a4f62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4f64: jne 0x6a4f88 */ if (!fZ) goto L_006a4f88;
L_006a4f66:; BB(0x006a4f66);
    /* 006a4f66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a4f68: call 0x6a4ef8 */ r_esp -= 4; W32(r_esp, 0x6a4f6du); f_006a4ef8();
    /* 006a4f6d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4f6f: jne 0x6a4f81 */ if (!fZ) goto L_006a4f81;
L_006a4f71:; BB(0x006a4f71);
    /* 006a4f71: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 006a4f74: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4f76: jne 0x6a4f07 */ if (!fZ) goto L_006a4f07;
L_006a4f78:; BB(0x006a4f78);
    /* 006a4f78: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_006a4f7b:; BB(0x006a4f7b);
    /* 006a4f7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a4f7d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a4f80: ret  */ FN_RET(0x006a4ef8); r_esp += 4; return;
L_006a4f81:; BB(0x006a4f81);
    /* 006a4f81: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 006a4f84: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a4f87: ret  */ FN_RET(0x006a4ef8); r_esp += 4; return;
L_006a4f88:; BB(0x006a4f88);
    /* 006a4f88: mov eax, ebx */ r_eax = r_ebx;
    /* 006a4f8a: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 006a4f8d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a4f90: ret  */ FN_RET(0x006a4ef8); r_esp += 4; return;
}

void f_006a4f94(void) /* sub_6A4F94 */
{
    FN_ENTER(0x006a4f94);
    /* 006a4f94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a4f95: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a4f98: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006a4f9a: mov edx, dword ptr [ebp + 0x1c4] */ r_edx = R32((u32)(r_ebp+0x1c4u));
    /* 006a4fa0: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 006a4fa3: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006a4fa7: mov dword ptr [0xa94374], 0 */ W32((u32)(0xa94374u), 0x0u);
    /* 006a4fb1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4fb3: mov dword ptr [0xa94380], eax */ W32((u32)(0xa94380u), r_eax);
    /* 006a4fb8: je 0x6a502e */ if (fZ) goto L_006a502e;
L_006a4fba:; BB(0x006a4fba);
    /* 006a4fba: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006a4fbd: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 006a4fc1: mov edi, ecx */ r_edi = r_ecx;
L_006a4fc3:; BB(0x006a4fc3);
    /* 006a4fc3: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 006a4fc6: cmp eax, dword ptr [0x9cba2c] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4fcc: jne 0x6a4fe4 */ if (!fZ) goto L_006a4fe4;
L_006a4fce:; BB(0x006a4fce);
    /* 006a4fce: mov ecx, edi */ r_ecx = r_edi;
    /* 006a4fd0: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a4fd5u); f_008173b4();
    /* 006a4fd5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4fd7: je 0x6a4fe0 */ if (fZ) goto L_006a4fe0;
L_006a4fd9:; BB(0x006a4fd9);
    /* 006a4fd9: mov eax, 1 */ r_eax = 0x1u;
    /* 006a4fde: jmp 0x6a4fe6 */ goto L_006a4fe6;
L_006a4fe0:; BB(0x006a4fe0);
    /* 006a4fe0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a4fe2: jmp 0x6a4fe6 */ goto L_006a4fe6;
L_006a4fe4:; BB(0x006a4fe4);
    /* 006a4fe4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a4fe6:; BB(0x006a4fe6);
    /* 006a4fe6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4fe8: je 0x6a5013 */ if (fZ) goto L_006a5013;
L_006a4fea:; BB(0x006a4fea);
    /* 006a4fea: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 006a4fed: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a4ff2u); f_008173b4();
    /* 006a4ff2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4ff4: jne 0x6a4ffa */ if (!fZ) goto L_006a4ffa;
L_006a4ff6:; BB(0x006a4ff6);
    /* 006a4ff6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006a4ff8: jmp 0x6a4ffd */ goto L_006a4ffd;
L_006a4ffa:; BB(0x006a4ffa);
    /* 006a4ffa: mov esi, dword ptr [edi + 0x1c] */ r_esi = R32((u32)(r_edi+0x1cu));
L_006a4ffd:; BB(0x006a4ffd);
    /* 006a4ffd: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a4fff: je 0x6a5013 */ if (fZ) goto L_006a5013;
L_006a5001:; BB(0x006a5001);
    /* 006a5001: mov ecx, esi */ r_ecx = r_esi;
    /* 006a5003: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a5008u); f_008173b4();
    /* 006a5008: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a500a: je 0x6a5013 */ if (fZ) goto L_006a5013;
L_006a500c:; BB(0x006a500c);
    /* 006a500c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006a500e: mov ecx, esi */ r_ecx = r_esi;
    /* 006a5010: call dword ptr [eax + 0x6c] */ { u32 t = R32((u32)(r_eax+0x6cu)); r_esp -= 4; W32(r_esp, 0x6a5013u); call_ind(t); }
L_006a5013:; BB(0x006a5013);
    /* 006a5013: mov ecx, edi */ r_ecx = r_edi;
    /* 006a5015: call 0x6a5080 */ r_esp -= 4; W32(r_esp, 0x6a501au); f_006a5080();
    /* 006a501a: mov edi, dword ptr [edi + 0x10] */ r_edi = R32((u32)(r_edi+0x10u));
    /* 006a501d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a501f: jne 0x6a4fc3 */ if (!fZ) goto L_006a4fc3;
L_006a5021:; BB(0x006a5021);
    /* 006a5021: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 006a5024: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 006a5028: mov edx, dword ptr [ebp + 0x1c4] */ r_edx = R32((u32)(r_ebp+0x1c4u));
L_006a502e:; BB(0x006a502e);
    /* 006a502e: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006a5032: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a5037: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006a503b: mov ecx, dword ptr [ebp + 0x1c8] */ r_ecx = R32((u32)(r_ebp+0x1c8u));
    /* 006a5041: mov dword ptr [ebp + 0x1c4], 0 */ W32((u32)(r_ebp+0x1c4u), 0x0u);
    /* 006a504b: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x6a5050u); f_00817574();
    /* 006a5050: mov ecx, dword ptr [ebp + 0x1c8] */ r_ecx = R32((u32)(r_ebp+0x1c8u));
    /* 006a5056: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x6a505bu); f_00817574();
    /* 006a505b: mov edx, dword ptr [ebp + 0x1c8] */ r_edx = R32((u32)(r_ebp+0x1c8u));
    /* 006a5061: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006a5065: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a506a: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006a506e: mov dword ptr [ebp + 0x1c8], 0 */ W32((u32)(r_ebp+0x1c8u), 0x0u);
    /* 006a5078: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a507b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a507c: ret 4 */ FN_RET(0x006a4f94); r_esp += 8; return;
}

