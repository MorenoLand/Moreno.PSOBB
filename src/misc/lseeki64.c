#include "protos.h"

void f_008691b9(void) /* __lseeki64_lk */
{
    FN_ENTER(0x008691b9);
    /* 008691b9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008691ba: mov ebp, esp */ r_ebp = r_esp;
    /* 008691bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008691bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008691be: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008691c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008691c2: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008691c5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008691c8: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008691cb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008691cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008691cd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008691d0: call 0x863ad0 */ r_esp -= 4; W32(r_esp, 0x8691d5u); f_00863ad0();
    /* 008691d5: or edi, 0xffffffff */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008691d8: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008691da: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008691db: jne 0x8691ea */ if (!fZ) goto L_008691ea;
L_008691dd:; BB(0x008691dd);
    /* 008691dd: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8691e2u); f_00859dd6();
    /* 008691e2: mov dword ptr [eax], 9 */ W32((u32)(r_eax), 0x9u);
    /* 008691e8: jmp 0x869213 */ goto L_00869213;
L_008691ea:; BB(0x008691ea);
    /* 008691ea: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008691ed: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 008691f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008691f1: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008691f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008691f5: call dword ptr [0x8f81a0] */ { u32 t = R32((u32)(0x8f81a0u)); r_esp -= 4; W32(r_esp, 0x8691fbu); call_ind(t); }
    /* 008691fb: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008691fd: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00869200: jne 0x869219 */ if (!fZ) goto L_00869219;
L_00869202:; BB(0x00869202);
    /* 00869202: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x869208u); call_ind(t); }
    /* 00869208: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086920a: je 0x869219 */ if (fZ) goto L_00869219;
L_0086920c:; BB(0x0086920c);
    /* 0086920c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086920d: call 0x859de8 */ r_esp -= 4; W32(r_esp, 0x869212u); f_00859de8();
    /* 00869212: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00869213:; BB(0x00869213);
    /* 00869213: mov eax, edi */ r_eax = r_edi;
    /* 00869215: mov edx, edi */ r_edx = r_edi;
    /* 00869217: jmp 0x869238 */ goto L_00869238;
L_00869219:; BB(0x00869219);
    /* 00869219: mov eax, esi */ r_eax = r_esi;
    /* 0086921b: sar eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0086921e: mov eax, dword ptr [eax*4 + 0xaf0a80] */ r_eax = R32((u32)(r_eax*4+0xaf0a80u));
    /* 00869225: and esi, 0x1f */ {  u32 a = r_esi; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00869228: lea ecx, [esi + esi*8] */ r_ecx = (u32)(r_esi+r_esi*8);
    /* 0086922b: lea eax, [eax + ecx*4 + 4] */ r_eax = (u32)(r_eax+r_ecx*4+0x4u);
    /* 0086922f: and byte ptr [eax], 0xfd */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0xfdu; u32 r = (a & b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00869232: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00869235: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
L_00869238:; BB(0x00869238);
    /* 00869238: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00869239: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086923a: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0086923b: ret  */ FN_RET(0x008691b9); r_esp += 4; return;
}

