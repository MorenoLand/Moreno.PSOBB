#include "protos.h"

void f_00858094(void) /* __getdcwd_lk */
{
    FN_ENTER(0x00858094);
    /* 00858094: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00858095: mov ebp, esp */ r_ebp = r_esp;
    /* 00858097: sub esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0085809d: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 008580a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008580a3: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008580a6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008580a8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008580ab: je 0x85810c */ if (fZ) goto L_0085810c;
L_008580ad:; BB(0x008580ad);
    /* 008580ad: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008580ae: call 0x85805d */ r_esp -= 4; W32(r_esp, 0x8580b3u); f_0085805d();
    /* 008580b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008580b5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008580b6: jne 0x8580db */ if (!fZ) goto L_008580db;
L_008580b8:; BB(0x008580b8);
    /* 008580b8: call 0x859ddf */ r_esp -= 4; W32(r_esp, 0x8580bdu); f_00859ddf();
    /* 008580bd: mov dword ptr [eax], 0xf */ W32((u32)(r_eax), 0xfu);
    /* 008580c3: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8580c8u); f_00859dd6();
    /* 008580c8: mov dword ptr [eax], 0xd */ W32((u32)(r_eax), 0xdu);
L_008580ce:; BB(0x008580ce);
    /* 008580ce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008580d0:; BB(0x008580d0);
    /* 008580d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008580d3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008580d4: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x8580d9u); f_0085e419();
    /* 008580d9: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008580da: ret  */ FN_RET(0x00858094); r_esp += 4; return;
L_008580db:; BB(0x008580db);
    /* 008580db: lea eax, [ebp - 0x10c] */ r_eax = (u32)(r_ebp+0xfffffef4u);
    /* 008580e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008580e2: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 008580e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008580e9: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 008580ee: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 008580f1: add bl, 0x40 */ {  u32 a = (u8)r_ebx; u32 b = 0x40u; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008580f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008580f5: mov byte ptr [ebp + 8], bl */ W8((u32)(r_ebp+0x8u), (u8)r_ebx);
    /* 008580f8: mov byte ptr [ebp + 9], 0x3a */ W8((u32)(r_ebp+0x9u), 0x3au);
    /* 008580fc: mov byte ptr [ebp + 0xa], 0x2e */ W8((u32)(r_ebp+0xau), 0x2eu);
    /* 00858100: mov byte ptr [ebp + 0xb], 0 */ W8((u32)(r_ebp+0xbu), 0x0u);
    /* 00858104: call dword ptr [0x8f81d4] */ { u32 t = R32((u32)(0x8f81d4u)); r_esp -= 4; W32(r_esp, 0x85810au); call_ind(t); }
    /* 0085810a: jmp 0x85811e */ goto L_0085811e;
L_0085810c:; BB(0x0085810c);
    /* 0085810c: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 00858112: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00858113: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 00858118: call dword ptr [0x8f81d0] */ { u32 t = R32((u32)(0x8f81d0u)); r_esp -= 4; W32(r_esp, 0x85811eu); call_ind(t); }
L_0085811e:; BB(0x0085811e);
    /* 0085811e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00858120: je 0x8580ce */ if (fZ) goto L_008580ce;
L_00858122:; BB(0x00858122);
    /* 00858122: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00858123: cmp eax, 0x104 */ {  u32 a = r_eax; u32 b = 0x104u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00858128: ja 0x8580ce */ if ((!fC&&!fZ)) goto L_008580ce;
L_0085812a:; BB(0x0085812a);
    /* 0085812a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0085812d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085812f: jne 0x858156 */ if (!fZ) goto L_00858156;
L_00858131:; BB(0x00858131);
    /* 00858131: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00858134: jg 0x858139 */ if ((!fZ&&fS==fO)) goto L_00858139;
L_00858136:; BB(0x00858136);
    /* 00858136: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
L_00858139:; BB(0x00858139);
    /* 00858139: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085813a: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x85813fu); f_00859c55();
    /* 0085813f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00858140: mov ecx, eax */ r_ecx = r_eax;
    /* 00858142: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00858144: jne 0x85816b */ if (!fZ) goto L_0085816b;
L_00858146:; BB(0x00858146);
    /* 00858146: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x85814bu); f_00859dd6();
    /* 0085814b: mov dword ptr [eax], 0xc */ W32((u32)(r_eax), 0xcu);
    /* 00858151: jmp 0x8580ce */ goto L_008580ce;
L_00858156:; BB(0x00858156);
    /* 00858156: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00858159: jle 0x85816b */ if ((fZ||fS!=fO)) goto L_0085816b;
L_0085815b:; BB(0x0085815b);
    /* 0085815b: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x858160u); f_00859dd6();
    /* 00858160: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
    /* 00858166: jmp 0x8580ce */ goto L_008580ce;
L_0085816b:; BB(0x0085816b);
    /* 0085816b: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 00858171: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00858172: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00858173: call 0x85e2f0 */ r_esp -= 4; W32(r_esp, 0x858178u); f_0085e2f0();
    /* 00858178: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00858179: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085817a: jmp 0x8580d0 */ goto L_008580d0;
}

