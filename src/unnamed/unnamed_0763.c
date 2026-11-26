#include "protos.h"

void f_0076300c(void) /* sub_76300C */
{
    FN_ENTER(0x0076300c);
    /* 0076300c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076300d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076300e: mov edi, ecx */ r_edi = r_ecx;
    /* 00763010: mov ecx, edi */ r_ecx = r_edi;
    /* 00763012: call 0x712644 */ r_esp -= 4; W32(r_esp, 0x763017u); f_00712644();
    /* 00763017: mov esi, eax */ r_esi = r_eax;
    /* 00763019: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076301a: mov ecx, edi */ r_ecx = r_edi;
    /* 0076301c: call 0x710f80 */ r_esp -= 4; W32(r_esp, 0x763021u); f_00710f80();
    /* 00763021: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00763022: lea edx, [edi + 0x24] */ r_edx = (u32)(r_edi+0x24u);
    /* 00763025: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00763026: mov ecx, edi */ r_ecx = r_edi;
    /* 00763028: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x76302du); f_0072a648();
    /* 0076302d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076302e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076302f: ret  */ FN_RET(0x0076300c); r_esp += 4; return;
}

void f_00763030(void) /* sub_763030 */
{
    FN_ENTER(0x00763030);
    /* 00763030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00763031: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00763033: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00763035: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00763037: call 0x84c390 */ r_esp -= 4; W32(r_esp, 0x76303cu); f_0084c390();
    /* 0076303c: mov eax, ebp */ r_eax = r_ebp;
    /* 0076303e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076303f: ret  */ FN_RET(0x00763030); r_esp += 4; return;
}

void f_00763040(void) /* sub_763040 */
{
    FN_ENTER(0x00763040);
    /* 00763040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00763041: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00763043: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00763047: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00763049: call 0x84c390 */ r_esp -= 4; W32(r_esp, 0x76304eu); f_0084c390();
    /* 0076304e: mov eax, ebp */ r_eax = r_ebp;
    /* 00763050: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00763051: ret 4 */ FN_RET(0x00763040); r_esp += 8; return;
}

void f_00763054(void) /* sub_763054 */
{
    FN_ENTER(0x00763054);
    /* 00763054: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00763055: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00763058: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 0076305c: mov ebx, dword ptr [esp + 0x70] */ r_ebx = R32((u32)(r_esp+0x70u));
    /* 00763060: lea eax, [ebx + 3] */ r_eax = (u32)(r_ebx+0x3u);
    /* 00763063: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00763065: shr eax, 0x1e */ { u32 c = (30u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00763068: lea eax, [eax + ebx + 3] */ r_eax = (u32)(r_eax+r_ebx+0x3u);
    /* 0076306c: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0076306f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00763071: jle 0x7633f9 */ if ((fZ||fS!=fO)) goto L_007633f9;
L_00763077:; BB(0x00763077);
    /* 00763077: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0076307b: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0076307f: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00763082: lea eax, [edx + eax*4] */ r_eax = (u32)(r_edx+r_eax*4);
L_00763085:; BB(0x00763085);
    /* 00763085: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00763087: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076308a: cmp ebx, 0x37 */ {  u32 a = r_ebx; u32 b = 0x37u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076308d: jg 0x763096 */ if ((!fZ&&fS==fO)) goto L_00763096;
L_0076308f:; BB(0x0076308f);
    /* 0076308f: mov dword ptr [ecx], ebx */ W32((u32)(r_ecx), r_ebx);
    /* 00763091: jmp 0x7633dd */ goto L_007633dd;
L_00763096:; BB(0x00763096);
    /* 00763096: mov edi, dword ptr [ecx + 8] */ r_edi = R32((u32)(r_ecx+0x8u));
    /* 00763099: sub edi, dword ptr [ecx + 0x84] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+0x84u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0076309f: mov ebx, dword ptr [ecx + 0x14] */ r_ebx = R32((u32)(r_ecx+0x14u));
    /* 007630a2: mov ebp, dword ptr [ecx + 0x18] */ r_ebp = R32((u32)(r_ecx+0x18u));
    /* 007630a5: mov esi, dword ptr [ecx + 0x1c] */ r_esi = R32((u32)(r_ecx+0x1cu));
    /* 007630a8: sub ebx, dword ptr [ecx + 0x90] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0x90u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 007630ae: sub ebp, dword ptr [ecx + 0x94] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ecx+0x94u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 007630b4: sub esi, dword ptr [ecx + 0x98] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x98u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007630ba: mov dword ptr [ecx], 1 */ W32((u32)(r_ecx), 0x1u);
    /* 007630c0: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 007630c4: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 007630c7: sub edx, dword ptr [ecx + 0x8c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007630cd: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007630d1: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 007630d4: sub eax, dword ptr [ecx + 0x88] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x88u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007630da: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 007630de: mov dword ptr [ecx + 8], edi */ W32((u32)(r_ecx+0x8u), r_edi);
    /* 007630e1: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 007630e4: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 007630e7: mov dword ptr [ecx + 0x14], ebx */ W32((u32)(r_ecx+0x14u), r_ebx);
    /* 007630ea: mov dword ptr [ecx + 0x18], ebp */ W32((u32)(r_ecx+0x18u), r_ebp);
    /* 007630ed: mov dword ptr [ecx + 0x1c], esi */ W32((u32)(r_ecx+0x1cu), r_esi);
    /* 007630f0: mov esi, dword ptr [ecx + 0x20] */ r_esi = R32((u32)(r_ecx+0x20u));
    /* 007630f3: sub esi, dword ptr [ecx + 0x9c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x9cu)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007630f9: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 007630fd: mov dword ptr [ecx + 0x20], esi */ W32((u32)(r_ecx+0x20u), r_esi);
    /* 00763100: mov esi, dword ptr [ecx + 0x24] */ r_esi = R32((u32)(r_ecx+0x24u));
    /* 00763103: sub esi, dword ptr [ecx + 0xa0] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xa0u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00763109: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0076310d: mov dword ptr [ecx + 0x24], esi */ W32((u32)(r_ecx+0x24u), r_esi);
    /* 00763110: mov esi, dword ptr [ecx + 0x28] */ r_esi = R32((u32)(r_ecx+0x28u));
    /* 00763113: sub esi, dword ptr [ecx + 0xa4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xa4u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00763119: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 0076311d: mov dword ptr [ecx + 0x28], esi */ W32((u32)(r_ecx+0x28u), r_esi);
    /* 00763120: mov esi, dword ptr [ecx + 0x2c] */ r_esi = R32((u32)(r_ecx+0x2cu));
    /* 00763123: sub esi, dword ptr [ecx + 0xa8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xa8u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00763129: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 0076312d: mov dword ptr [ecx + 0x2c], esi */ W32((u32)(r_ecx+0x2cu), r_esi);
    /* 00763130: mov esi, dword ptr [ecx + 0x30] */ r_esi = R32((u32)(r_ecx+0x30u));
    /* 00763133: sub esi, dword ptr [ecx + 0xac] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xacu)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00763139: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 0076313d: mov dword ptr [ecx + 0x30], esi */ W32((u32)(r_ecx+0x30u), r_esi);
    /* 00763140: mov esi, dword ptr [ecx + 0x34] */ r_esi = R32((u32)(r_ecx+0x34u));
    /* 00763143: sub esi, dword ptr [ecx + 0xb0] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xb0u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00763149: mov dword ptr [esp + 0x2c], esi */ W32((u32)(r_esp+0x2cu), r_esi);
    /* 0076314d: mov dword ptr [ecx + 0x34], esi */ W32((u32)(r_ecx+0x34u), r_esi);
    /* 00763150: mov esi, dword ptr [ecx + 0x38] */ r_esi = R32((u32)(r_ecx+0x38u));
    /* 00763153: sub esi, dword ptr [ecx + 0xb4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xb4u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00763159: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 0076315d: mov dword ptr [ecx + 0x38], esi */ W32((u32)(r_ecx+0x38u), r_esi);
    /* 00763160: mov esi, dword ptr [ecx + 0x3c] */ r_esi = R32((u32)(r_ecx+0x3cu));
    /* 00763163: sub esi, dword ptr [ecx + 0xb8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xb8u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00763169: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 0076316d: mov dword ptr [ecx + 0x3c], esi */ W32((u32)(r_ecx+0x3cu), r_esi);
    /* 00763170: mov esi, dword ptr [ecx + 0x40] */ r_esi = R32((u32)(r_ecx+0x40u));
    /* 00763173: sub esi, dword ptr [ecx + 0xbc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xbcu)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00763179: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 0076317d: mov dword ptr [ecx + 0x40], esi */ W32((u32)(r_ecx+0x40u), r_esi);
    /* 00763180: mov esi, dword ptr [ecx + 0x44] */ r_esi = R32((u32)(r_ecx+0x44u));
    /* 00763183: sub esi, dword ptr [ecx + 0xc0] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xc0u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00763189: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 0076318d: mov dword ptr [ecx + 0x44], esi */ W32((u32)(r_ecx+0x44u), r_esi);
    /* 00763190: mov esi, dword ptr [ecx + 0x48] */ r_esi = R32((u32)(r_ecx+0x48u));
    /* 00763193: sub esi, dword ptr [ecx + 0xc4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xc4u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00763199: mov dword ptr [esp + 0x40], esi */ W32((u32)(r_esp+0x40u), r_esi);
    /* 0076319d: mov dword ptr [ecx + 0x48], esi */ W32((u32)(r_ecx+0x48u), r_esi);
    /* 007631a0: mov esi, dword ptr [ecx + 0x4c] */ r_esi = R32((u32)(r_ecx+0x4cu));
    /* 007631a3: sub esi, dword ptr [ecx + 0xc8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xc8u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007631a9: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 007631ad: mov dword ptr [ecx + 0x4c], esi */ W32((u32)(r_ecx+0x4cu), r_esi);
    /* 007631b0: mov esi, dword ptr [ecx + 0x50] */ r_esi = R32((u32)(r_ecx+0x50u));
    /* 007631b3: sub esi, dword ptr [ecx + 0xcc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xccu)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007631b9: mov dword ptr [esp + 0x48], esi */ W32((u32)(r_esp+0x48u), r_esi);
    /* 007631bd: mov dword ptr [ecx + 0x50], esi */ W32((u32)(r_ecx+0x50u), r_esi);
    /* 007631c0: mov esi, dword ptr [ecx + 0x54] */ r_esi = R32((u32)(r_ecx+0x54u));
    /* 007631c3: sub esi, dword ptr [ecx + 0xd0] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xd0u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007631c9: mov dword ptr [esp + 0x4c], esi */ W32((u32)(r_esp+0x4cu), r_esi);
    /* 007631cd: mov dword ptr [ecx + 0x54], esi */ W32((u32)(r_ecx+0x54u), r_esi);
    /* 007631d0: mov esi, dword ptr [ecx + 0x58] */ r_esi = R32((u32)(r_ecx+0x58u));
    /* 007631d3: sub esi, dword ptr [ecx + 0xd4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xd4u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007631d9: mov dword ptr [esp + 0x50], esi */ W32((u32)(r_esp+0x50u), r_esi);
    /* 007631dd: mov dword ptr [ecx + 0x58], esi */ W32((u32)(r_ecx+0x58u), r_esi);
    /* 007631e0: mov esi, dword ptr [ecx + 0x5c] */ r_esi = R32((u32)(r_ecx+0x5cu));
    /* 007631e3: sub esi, dword ptr [ecx + 0xd8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xd8u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007631e9: mov dword ptr [esp + 0x54], esi */ W32((u32)(r_esp+0x54u), r_esi);
    /* 007631ed: mov dword ptr [ecx + 0x5c], esi */ W32((u32)(r_ecx+0x5cu), r_esi);
    /* 007631f0: mov esi, dword ptr [ecx + 0x60] */ r_esi = R32((u32)(r_ecx+0x60u));
    /* 007631f3: sub esi, dword ptr [ecx + 0xdc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xdcu)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007631f9: mov dword ptr [esp + 0x58], esi */ W32((u32)(r_esp+0x58u), r_esi);
    /* 007631fd: mov dword ptr [ecx + 0x60], esi */ W32((u32)(r_ecx+0x60u), r_esi);
    /* 00763200: mov esi, dword ptr [ecx + 0x64] */ r_esi = R32((u32)(r_ecx+0x64u));
    /* 00763203: sub esi, dword ptr [ecx + 0xe0] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xe0u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00763209: mov dword ptr [esp + 0x5c], esi */ W32((u32)(r_esp+0x5cu), r_esi);
    /* 0076320d: mov dword ptr [ecx + 0x64], esi */ W32((u32)(r_ecx+0x64u), r_esi);
    /* 00763210: mov esi, dword ptr [ecx + 0x68] */ r_esi = R32((u32)(r_ecx+0x68u));
    /* 00763213: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00763215: mov edi, dword ptr [ecx + 0x6c] */ r_edi = R32((u32)(r_ecx+0x6cu));
    /* 00763218: mov dword ptr [ecx + 0x68], esi */ W32((u32)(r_ecx+0x68u), r_esi);
    /* 0076321b: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0076321d: mov eax, dword ptr [ecx + 0x70] */ r_eax = R32((u32)(r_ecx+0x70u));
    /* 00763220: mov dword ptr [ecx + 0x6c], edi */ W32((u32)(r_ecx+0x6cu), r_edi);
    /* 00763223: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00763225: mov edx, dword ptr [ecx + 0x74] */ r_edx = R32((u32)(r_ecx+0x74u));
    /* 00763228: mov dword ptr [ecx + 0x70], eax */ W32((u32)(r_ecx+0x70u), r_eax);
    /* 0076322b: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0076322d: mov ebx, dword ptr [ecx + 0x78] */ r_ebx = R32((u32)(r_ecx+0x78u));
    /* 00763230: mov dword ptr [ecx + 0x74], edx */ W32((u32)(r_ecx+0x74u), r_edx);
    /* 00763233: sub ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00763235: mov ebp, dword ptr [ecx + 0x7c] */ r_ebp = R32((u32)(r_ecx+0x7cu));
    /* 00763238: sub ebp, dword ptr [esp + 0x14] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x14u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0076323c: mov dword ptr [ecx + 0x78], ebx */ W32((u32)(r_ecx+0x78u), r_ebx);
    /* 0076323f: mov dword ptr [esp + 0x60], ebp */ W32((u32)(r_esp+0x60u), r_ebp);
    /* 00763243: mov dword ptr [ecx + 0x7c], ebp */ W32((u32)(r_ecx+0x7cu), r_ebp);
    /* 00763246: mov ebp, dword ptr [ecx + 0x80] */ r_ebp = R32((u32)(r_ecx+0x80u));
    /* 0076324c: sub ebp, dword ptr [esp + 0x18] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763250: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 00763254: mov dword ptr [ecx + 0x80], ebp */ W32((u32)(r_ecx+0x80u), r_ebp);
    /* 0076325a: mov ebp, dword ptr [ecx + 0x84] */ r_ebp = R32((u32)(r_ecx+0x84u));
    /* 00763260: sub ebp, dword ptr [esp + 0x1c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763264: mov dword ptr [ecx + 0x84], ebp */ W32((u32)(r_ecx+0x84u), r_ebp);
    /* 0076326a: mov ebp, dword ptr [ecx + 0x88] */ r_ebp = R32((u32)(r_ecx+0x88u));
    /* 00763270: sub ebp, dword ptr [esp + 0x20] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x20u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763274: mov dword ptr [ecx + 0x88], ebp */ W32((u32)(r_ecx+0x88u), r_ebp);
    /* 0076327a: mov ebp, dword ptr [ecx + 0x8c] */ r_ebp = R32((u32)(r_ecx+0x8cu));
    /* 00763280: sub ebp, dword ptr [esp + 0x24] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763284: mov dword ptr [ecx + 0x8c], ebp */ W32((u32)(r_ecx+0x8cu), r_ebp);
    /* 0076328a: mov ebp, dword ptr [ecx + 0x90] */ r_ebp = R32((u32)(r_ecx+0x90u));
    /* 00763290: sub ebp, dword ptr [esp + 0x28] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763294: mov dword ptr [ecx + 0x90], ebp */ W32((u32)(r_ecx+0x90u), r_ebp);
    /* 0076329a: mov ebp, dword ptr [ecx + 0x94] */ r_ebp = R32((u32)(r_ecx+0x94u));
    /* 007632a0: sub ebp, dword ptr [esp + 0x2c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 007632a4: mov dword ptr [ecx + 0x94], ebp */ W32((u32)(r_ecx+0x94u), r_ebp);
    /* 007632aa: mov ebp, dword ptr [ecx + 0x98] */ r_ebp = R32((u32)(r_ecx+0x98u));
    /* 007632b0: sub ebp, dword ptr [esp + 0x30] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x30u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 007632b4: mov dword ptr [ecx + 0x98], ebp */ W32((u32)(r_ecx+0x98u), r_ebp);
    /* 007632ba: mov ebp, dword ptr [ecx + 0x9c] */ r_ebp = R32((u32)(r_ecx+0x9cu));
    /* 007632c0: sub ebp, dword ptr [esp + 0x34] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 007632c4: mov dword ptr [ecx + 0x9c], ebp */ W32((u32)(r_ecx+0x9cu), r_ebp);
    /* 007632ca: mov ebp, dword ptr [ecx + 0xa0] */ r_ebp = R32((u32)(r_ecx+0xa0u));
    /* 007632d0: sub ebp, dword ptr [esp + 0x38] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 007632d4: mov dword ptr [ecx + 0xa0], ebp */ W32((u32)(r_ecx+0xa0u), r_ebp);
    /* 007632da: mov ebp, dword ptr [ecx + 0xa4] */ r_ebp = R32((u32)(r_ecx+0xa4u));
    /* 007632e0: sub ebp, dword ptr [esp + 0x3c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x3cu)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 007632e4: mov dword ptr [ecx + 0xa4], ebp */ W32((u32)(r_ecx+0xa4u), r_ebp);
    /* 007632ea: mov ebp, dword ptr [ecx + 0xa8] */ r_ebp = R32((u32)(r_ecx+0xa8u));
    /* 007632f0: sub ebp, dword ptr [esp + 0x40] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x40u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 007632f4: mov dword ptr [ecx + 0xa8], ebp */ W32((u32)(r_ecx+0xa8u), r_ebp);
    /* 007632fa: mov ebp, dword ptr [ecx + 0xac] */ r_ebp = R32((u32)(r_ecx+0xacu));
    /* 00763300: sub ebp, dword ptr [esp + 0x44] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x44u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763304: mov dword ptr [ecx + 0xac], ebp */ W32((u32)(r_ecx+0xacu), r_ebp);
    /* 0076330a: mov ebp, dword ptr [ecx + 0xb0] */ r_ebp = R32((u32)(r_ecx+0xb0u));
    /* 00763310: sub ebp, dword ptr [esp + 0x48] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x48u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763314: mov dword ptr [ecx + 0xb0], ebp */ W32((u32)(r_ecx+0xb0u), r_ebp);
    /* 0076331a: mov ebp, dword ptr [ecx + 0xb4] */ r_ebp = R32((u32)(r_ecx+0xb4u));
    /* 00763320: sub ebp, dword ptr [esp + 0x4c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x4cu)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763324: mov dword ptr [ecx + 0xb4], ebp */ W32((u32)(r_ecx+0xb4u), r_ebp);
    /* 0076332a: mov ebp, dword ptr [ecx + 0xb8] */ r_ebp = R32((u32)(r_ecx+0xb8u));
    /* 00763330: sub ebp, dword ptr [esp + 0x50] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x50u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763334: mov dword ptr [ecx + 0xb8], ebp */ W32((u32)(r_ecx+0xb8u), r_ebp);
    /* 0076333a: mov ebp, dword ptr [ecx + 0xbc] */ r_ebp = R32((u32)(r_ecx+0xbcu));
    /* 00763340: sub ebp, dword ptr [esp + 0x54] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x54u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763344: mov dword ptr [ecx + 0xbc], ebp */ W32((u32)(r_ecx+0xbcu), r_ebp);
    /* 0076334a: mov ebp, dword ptr [ecx + 0xc0] */ r_ebp = R32((u32)(r_ecx+0xc0u));
    /* 00763350: sub ebp, dword ptr [esp + 0x58] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x58u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763354: mov dword ptr [ecx + 0xc0], ebp */ W32((u32)(r_ecx+0xc0u), r_ebp);
    /* 0076335a: mov ebp, dword ptr [ecx + 0xc4] */ r_ebp = R32((u32)(r_ecx+0xc4u));
    /* 00763360: sub ebp, dword ptr [esp + 0x5c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x5cu)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763364: mov dword ptr [ecx + 0xc4], ebp */ W32((u32)(r_ecx+0xc4u), r_ebp);
    /* 0076336a: mov ebp, dword ptr [ecx + 0xc8] */ r_ebp = R32((u32)(r_ecx+0xc8u));
    /* 00763370: sub ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763372: mov dword ptr [ecx + 0xc8], ebp */ W32((u32)(r_ecx+0xc8u), r_ebp);
    /* 00763378: mov ebp, dword ptr [ecx + 0xcc] */ r_ebp = R32((u32)(r_ecx+0xccu));
    /* 0076337e: sub ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763380: mov dword ptr [ecx + 0xcc], ebp */ W32((u32)(r_ecx+0xccu), r_ebp);
    /* 00763386: mov ebp, dword ptr [ecx + 0xd0] */ r_ebp = R32((u32)(r_ecx+0xd0u));
    /* 0076338c: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0076338e: mov eax, dword ptr [ecx + 0xd4] */ r_eax = R32((u32)(r_ecx+0xd4u));
    /* 00763394: mov dword ptr [ecx + 0xd0], ebp */ W32((u32)(r_ecx+0xd0u), r_ebp);
    /* 0076339a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0076339c: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007633a0: mov dword ptr [ecx + 0xd4], eax */ W32((u32)(r_ecx+0xd4u), r_eax);
    /* 007633a6: mov eax, dword ptr [ecx + 0xd8] */ r_eax = R32((u32)(r_ecx+0xd8u));
    /* 007633ac: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007633ae: mov dword ptr [ecx + 0xd8], eax */ W32((u32)(r_ecx+0xd8u), r_eax);
    /* 007633b4: mov eax, dword ptr [ecx + 0xdc] */ r_eax = R32((u32)(r_ecx+0xdcu));
    /* 007633ba: mov ebx, 1 */ r_ebx = 0x1u;
    /* 007633bf: sub eax, dword ptr [esp + 0x60] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x60u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007633c3: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
    /* 007633c9: mov eax, dword ptr [ecx + 0xe0] */ r_eax = R32((u32)(r_ecx+0xe0u));
    /* 007633cf: sub eax, dword ptr [esp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x14u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007633d3: mov dword ptr [ecx + 0xe0], eax */ W32((u32)(r_ecx+0xe0u), r_eax);
    /* 007633d9: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
L_007633dd:; BB(0x007633dd);
    /* 007633dd: mov ebx, dword ptr [ecx + ebx*4 + 4] */ r_ebx = R32((u32)(r_ecx+r_ebx*4+0x4u));
    /* 007633e1: xor dword ptr [edx], ebx */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; W32(ad, r);  }
    /* 007633e3: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007633e6: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007633e8: jb 0x763085 */ if (fC) goto L_00763085;
L_007633ee:; BB(0x007633ee);
    /* 007633ee: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 007633f2: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 007633f6: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_007633f9:; BB(0x007633f9);
    /* 007633f9: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007633fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007633fd: ret 8 */ FN_RET(0x00763054); r_esp += 12; return;
}

void f_00763400(void) /* sub_763400 */
{
    FN_ENTER(0x00763400);
    /* 00763400: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00763401: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00763402: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00763403: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00763404: mov esi, ecx */ r_esi = r_ecx;
    /* 00763406: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00763408: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0076340d: mov edx, 2 */ r_edx = 0x2u;
    /* 00763412: mov eax, 3 */ r_eax = 0x3u;
L_00763417:; BB(0x00763417);
    /* 00763417: mov byte ptr [ebx + 0xa9adc0], bl */ W8((u32)(r_ebx+0xa9adc0u), (u8)r_ebx);
    /* 0076341d: mov byte ptr [ebx + 0xa9adc1], cl */ W8((u32)(r_ebx+0xa9adc1u), (u8)r_ecx);
    /* 00763423: mov byte ptr [ebx + 0xa9adc2], dl */ W8((u32)(r_ebx+0xa9adc2u), (u8)r_edx);
    /* 00763429: mov byte ptr [ebx + 0xa9adc3], al */ W8((u32)(r_ebx+0xa9adc3u), (u8)r_eax);
    /* 0076342f: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00763432: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00763435: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00763438: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076343b: cmp ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00763441: jl 0x763417 */ if ((fS!=fO)) goto L_00763417;
L_00763443:; BB(0x00763443);
    /* 00763443: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00763446: mov ebx, 0xff */ r_ebx = 0xffu;
    /* 0076344b: mov eax, 0x100 */ r_eax = 0x100u;
    /* 00763450: mov esi, eax */ r_esi = r_eax;
L_00763452:; BB(0x00763452);
    /* 00763452: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 00763455: movzx edi, si */ r_edi = (u32)(u16)r_esi;
    /* 00763458: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x76345du); f_00763498();
    /* 0076345d: movzx ecx, byte ptr [ebx + 0xa9adc0] */ r_ecx = (u32)R8((u32)(r_ebx+0xa9adc0u));
    /* 00763464: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00763467: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0076346a: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0076346d: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00763470: movzx edx, byte ptr [eax + 0xa9adc0] */ r_edx = (u32)R8((u32)(r_eax+0xa9adc0u));
    /* 00763477: mov byte ptr [eax + 0xa9adc0], cl */ W8((u32)(r_eax+0xa9adc0u), (u8)r_ecx);
    /* 0076347d: mov byte ptr [ebx + 0xa9adc0], dl */ W8((u32)(r_ebx+0xa9adc0u), (u8)r_edx);
    /* 00763483: mov byte ptr [edx + 0xa9aec0], bl */ W8((u32)(r_edx+0xa9aec0u), (u8)r_ebx);
    /* 00763489: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076348c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076348e: jge 0x763452 */ if ((fS==fO)) goto L_00763452;
L_00763490:; BB(0x00763490);
    /* 00763490: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00763491: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00763492: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00763493: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00763494: ret  */ FN_RET(0x00763400); r_esp += 4; return;
}

void f_00763498(void) /* sub_763498 */
{
    FN_ENTER(0x00763498);
    /* 00763498: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00763499: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076349a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076349b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076349c: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076349f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007634a1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007634a4: cmp eax, 0x37 */ {  u32 a = r_eax; u32 b = 0x37u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007634a7: jg 0x7634b0 */ if ((!fZ&&fS==fO)) goto L_007634b0;
L_007634a9:; BB(0x007634a9);
    /* 007634a9: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 007634ab: jmp 0x7637e3 */ goto L_007637e3;
L_007634b0:; BB(0x007634b0);
    /* 007634b0: mov edi, dword ptr [ecx + 8] */ r_edi = R32((u32)(r_ecx+0x8u));
    /* 007634b3: sub edi, dword ptr [ecx + 0x84] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+0x84u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 007634b9: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 007634bc: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 007634bf: mov ebx, dword ptr [ecx + 0x14] */ r_ebx = R32((u32)(r_ecx+0x14u));
    /* 007634c2: sub eax, dword ptr [ecx + 0x88] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x88u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007634c8: sub edx, dword ptr [ecx + 0x8c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007634ce: mov ebp, dword ptr [ecx + 0x18] */ r_ebp = R32((u32)(r_ecx+0x18u));
    /* 007634d1: mov esi, dword ptr [ecx + 0x1c] */ r_esi = R32((u32)(r_ecx+0x1cu));
    /* 007634d4: sub ebx, dword ptr [ecx + 0x90] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0x90u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 007634da: sub ebp, dword ptr [ecx + 0x94] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ecx+0x94u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 007634e0: sub esi, dword ptr [ecx + 0x98] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x98u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007634e6: mov dword ptr [ecx], 1 */ W32((u32)(r_ecx), 0x1u);
    /* 007634ec: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 007634ef: mov dword ptr [ecx + 8], edi */ W32((u32)(r_ecx+0x8u), r_edi);
    /* 007634f2: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 007634f5: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 007634f8: mov dword ptr [ecx + 0x14], ebx */ W32((u32)(r_ecx+0x14u), r_ebx);
    /* 007634fb: mov dword ptr [ecx + 0x18], ebp */ W32((u32)(r_ecx+0x18u), r_ebp);
    /* 007634fe: mov dword ptr [ecx + 0x1c], esi */ W32((u32)(r_ecx+0x1cu), r_esi);
    /* 00763501: mov esi, dword ptr [ecx + 0x20] */ r_esi = R32((u32)(r_ecx+0x20u));
    /* 00763504: sub esi, dword ptr [ecx + 0x9c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x9cu)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0076350a: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0076350e: mov dword ptr [ecx + 0x20], esi */ W32((u32)(r_ecx+0x20u), r_esi);
    /* 00763511: mov esi, dword ptr [ecx + 0x24] */ r_esi = R32((u32)(r_ecx+0x24u));
    /* 00763514: sub esi, dword ptr [ecx + 0xa0] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xa0u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0076351a: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0076351e: mov dword ptr [ecx + 0x24], esi */ W32((u32)(r_ecx+0x24u), r_esi);
    /* 00763521: mov esi, dword ptr [ecx + 0x28] */ r_esi = R32((u32)(r_ecx+0x28u));
    /* 00763524: sub esi, dword ptr [ecx + 0xa4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xa4u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0076352a: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 0076352e: mov dword ptr [ecx + 0x28], esi */ W32((u32)(r_ecx+0x28u), r_esi);
    /* 00763531: mov esi, dword ptr [ecx + 0x2c] */ r_esi = R32((u32)(r_ecx+0x2cu));
    /* 00763534: sub esi, dword ptr [ecx + 0xa8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xa8u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0076353a: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0076353e: mov dword ptr [ecx + 0x2c], esi */ W32((u32)(r_ecx+0x2cu), r_esi);
    /* 00763541: mov esi, dword ptr [ecx + 0x30] */ r_esi = R32((u32)(r_ecx+0x30u));
    /* 00763544: sub esi, dword ptr [ecx + 0xac] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xacu)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0076354a: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 0076354e: mov dword ptr [ecx + 0x30], esi */ W32((u32)(r_ecx+0x30u), r_esi);
    /* 00763551: mov esi, dword ptr [ecx + 0x34] */ r_esi = R32((u32)(r_ecx+0x34u));
    /* 00763554: sub esi, dword ptr [ecx + 0xb0] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xb0u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0076355a: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0076355e: mov dword ptr [ecx + 0x34], esi */ W32((u32)(r_ecx+0x34u), r_esi);
    /* 00763561: mov esi, dword ptr [ecx + 0x38] */ r_esi = R32((u32)(r_ecx+0x38u));
    /* 00763564: sub esi, dword ptr [ecx + 0xb4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xb4u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0076356a: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0076356e: mov dword ptr [ecx + 0x38], esi */ W32((u32)(r_ecx+0x38u), r_esi);
    /* 00763571: mov esi, dword ptr [ecx + 0x3c] */ r_esi = R32((u32)(r_ecx+0x3cu));
    /* 00763574: sub esi, dword ptr [ecx + 0xb8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xb8u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0076357a: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 0076357e: mov dword ptr [ecx + 0x3c], esi */ W32((u32)(r_ecx+0x3cu), r_esi);
    /* 00763581: mov esi, dword ptr [ecx + 0x40] */ r_esi = R32((u32)(r_ecx+0x40u));
    /* 00763584: sub esi, dword ptr [ecx + 0xbc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xbcu)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0076358a: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 0076358e: mov dword ptr [ecx + 0x40], esi */ W32((u32)(r_ecx+0x40u), r_esi);
    /* 00763591: mov esi, dword ptr [ecx + 0x44] */ r_esi = R32((u32)(r_ecx+0x44u));
    /* 00763594: sub esi, dword ptr [ecx + 0xc0] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xc0u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0076359a: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 0076359e: mov dword ptr [ecx + 0x44], esi */ W32((u32)(r_ecx+0x44u), r_esi);
    /* 007635a1: mov esi, dword ptr [ecx + 0x48] */ r_esi = R32((u32)(r_ecx+0x48u));
    /* 007635a4: sub esi, dword ptr [ecx + 0xc4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xc4u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007635aa: mov dword ptr [esp + 0x2c], esi */ W32((u32)(r_esp+0x2cu), r_esi);
    /* 007635ae: mov dword ptr [ecx + 0x48], esi */ W32((u32)(r_ecx+0x48u), r_esi);
    /* 007635b1: mov esi, dword ptr [ecx + 0x4c] */ r_esi = R32((u32)(r_ecx+0x4cu));
    /* 007635b4: sub esi, dword ptr [ecx + 0xc8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xc8u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007635ba: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 007635be: mov dword ptr [ecx + 0x4c], esi */ W32((u32)(r_ecx+0x4cu), r_esi);
    /* 007635c1: mov esi, dword ptr [ecx + 0x50] */ r_esi = R32((u32)(r_ecx+0x50u));
    /* 007635c4: sub esi, dword ptr [ecx + 0xcc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xccu)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007635ca: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 007635ce: mov dword ptr [ecx + 0x50], esi */ W32((u32)(r_ecx+0x50u), r_esi);
    /* 007635d1: mov esi, dword ptr [ecx + 0x54] */ r_esi = R32((u32)(r_ecx+0x54u));
    /* 007635d4: sub esi, dword ptr [ecx + 0xd0] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xd0u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007635da: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 007635de: mov dword ptr [ecx + 0x54], esi */ W32((u32)(r_ecx+0x54u), r_esi);
    /* 007635e1: mov esi, dword ptr [ecx + 0x58] */ r_esi = R32((u32)(r_ecx+0x58u));
    /* 007635e4: sub esi, dword ptr [ecx + 0xd4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xd4u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007635ea: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 007635ee: mov dword ptr [ecx + 0x58], esi */ W32((u32)(r_ecx+0x58u), r_esi);
    /* 007635f1: mov esi, dword ptr [ecx + 0x5c] */ r_esi = R32((u32)(r_ecx+0x5cu));
    /* 007635f4: sub esi, dword ptr [ecx + 0xd8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xd8u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007635fa: mov dword ptr [esp + 0x40], esi */ W32((u32)(r_esp+0x40u), r_esi);
    /* 007635fe: mov dword ptr [ecx + 0x5c], esi */ W32((u32)(r_ecx+0x5cu), r_esi);
    /* 00763601: mov esi, dword ptr [ecx + 0x60] */ r_esi = R32((u32)(r_ecx+0x60u));
    /* 00763604: sub esi, dword ptr [ecx + 0xdc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xdcu)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0076360a: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 0076360e: mov dword ptr [ecx + 0x60], esi */ W32((u32)(r_ecx+0x60u), r_esi);
    /* 00763611: mov esi, dword ptr [ecx + 0x64] */ r_esi = R32((u32)(r_ecx+0x64u));
    /* 00763614: sub esi, dword ptr [ecx + 0xe0] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xe0u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0076361a: mov dword ptr [esp + 0x48], esi */ W32((u32)(r_esp+0x48u), r_esi);
    /* 0076361e: mov dword ptr [ecx + 0x64], esi */ W32((u32)(r_ecx+0x64u), r_esi);
    /* 00763621: mov esi, dword ptr [ecx + 0x68] */ r_esi = R32((u32)(r_ecx+0x68u));
    /* 00763624: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00763626: mov edi, dword ptr [ecx + 0x6c] */ r_edi = R32((u32)(r_ecx+0x6cu));
    /* 00763629: mov dword ptr [ecx + 0x68], esi */ W32((u32)(r_ecx+0x68u), r_esi);
    /* 0076362c: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0076362e: mov eax, dword ptr [ecx + 0x70] */ r_eax = R32((u32)(r_ecx+0x70u));
    /* 00763631: mov dword ptr [ecx + 0x6c], edi */ W32((u32)(r_ecx+0x6cu), r_edi);
    /* 00763634: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00763636: mov edx, dword ptr [ecx + 0x74] */ r_edx = R32((u32)(r_ecx+0x74u));
    /* 00763639: mov dword ptr [ecx + 0x70], eax */ W32((u32)(r_ecx+0x70u), r_eax);
    /* 0076363c: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0076363e: mov ebx, dword ptr [ecx + 0x78] */ r_ebx = R32((u32)(r_ecx+0x78u));
    /* 00763641: mov dword ptr [ecx + 0x74], edx */ W32((u32)(r_ecx+0x74u), r_edx);
    /* 00763644: sub ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00763646: mov ebp, dword ptr [ecx + 0x7c] */ r_ebp = R32((u32)(r_ecx+0x7cu));
    /* 00763649: sub ebp, dword ptr [esp] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0076364c: mov dword ptr [ecx + 0x78], ebx */ W32((u32)(r_ecx+0x78u), r_ebx);
    /* 0076364f: mov dword ptr [esp + 0x4c], ebp */ W32((u32)(r_esp+0x4cu), r_ebp);
    /* 00763653: mov dword ptr [ecx + 0x7c], ebp */ W32((u32)(r_ecx+0x7cu), r_ebp);
    /* 00763656: mov ebp, dword ptr [ecx + 0x80] */ r_ebp = R32((u32)(r_ecx+0x80u));
    /* 0076365c: sub ebp, dword ptr [esp + 4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763660: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00763663: mov dword ptr [ecx + 0x80], ebp */ W32((u32)(r_ecx+0x80u), r_ebp);
    /* 00763669: mov ebp, dword ptr [ecx + 0x84] */ r_ebp = R32((u32)(r_ecx+0x84u));
    /* 0076366f: sub ebp, dword ptr [esp + 8] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763673: mov dword ptr [ecx + 0x84], ebp */ W32((u32)(r_ecx+0x84u), r_ebp);
    /* 00763679: mov ebp, dword ptr [ecx + 0x88] */ r_ebp = R32((u32)(r_ecx+0x88u));
    /* 0076367f: sub ebp, dword ptr [esp + 0xc] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763683: mov dword ptr [ecx + 0x88], ebp */ W32((u32)(r_ecx+0x88u), r_ebp);
    /* 00763689: mov ebp, dword ptr [ecx + 0x8c] */ r_ebp = R32((u32)(r_ecx+0x8cu));
    /* 0076368f: sub ebp, dword ptr [esp + 0x10] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763693: mov dword ptr [ecx + 0x8c], ebp */ W32((u32)(r_ecx+0x8cu), r_ebp);
    /* 00763699: mov ebp, dword ptr [ecx + 0x90] */ r_ebp = R32((u32)(r_ecx+0x90u));
    /* 0076369f: sub ebp, dword ptr [esp + 0x14] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x14u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 007636a3: mov dword ptr [ecx + 0x90], ebp */ W32((u32)(r_ecx+0x90u), r_ebp);
    /* 007636a9: mov ebp, dword ptr [ecx + 0x94] */ r_ebp = R32((u32)(r_ecx+0x94u));
    /* 007636af: sub ebp, dword ptr [esp + 0x18] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 007636b3: mov dword ptr [ecx + 0x94], ebp */ W32((u32)(r_ecx+0x94u), r_ebp);
    /* 007636b9: mov ebp, dword ptr [ecx + 0x98] */ r_ebp = R32((u32)(r_ecx+0x98u));
    /* 007636bf: sub ebp, dword ptr [esp + 0x1c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 007636c3: mov dword ptr [ecx + 0x98], ebp */ W32((u32)(r_ecx+0x98u), r_ebp);
    /* 007636c9: mov ebp, dword ptr [ecx + 0x9c] */ r_ebp = R32((u32)(r_ecx+0x9cu));
    /* 007636cf: sub ebp, dword ptr [esp + 0x20] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x20u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 007636d3: mov dword ptr [ecx + 0x9c], ebp */ W32((u32)(r_ecx+0x9cu), r_ebp);
    /* 007636d9: mov ebp, dword ptr [ecx + 0xa0] */ r_ebp = R32((u32)(r_ecx+0xa0u));
    /* 007636df: sub ebp, dword ptr [esp + 0x24] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 007636e3: mov dword ptr [ecx + 0xa0], ebp */ W32((u32)(r_ecx+0xa0u), r_ebp);
    /* 007636e9: mov ebp, dword ptr [ecx + 0xa4] */ r_ebp = R32((u32)(r_ecx+0xa4u));
    /* 007636ef: sub ebp, dword ptr [esp + 0x28] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 007636f3: mov dword ptr [ecx + 0xa4], ebp */ W32((u32)(r_ecx+0xa4u), r_ebp);
    /* 007636f9: mov ebp, dword ptr [ecx + 0xa8] */ r_ebp = R32((u32)(r_ecx+0xa8u));
    /* 007636ff: sub ebp, dword ptr [esp + 0x2c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763703: mov dword ptr [ecx + 0xa8], ebp */ W32((u32)(r_ecx+0xa8u), r_ebp);
    /* 00763709: mov ebp, dword ptr [ecx + 0xac] */ r_ebp = R32((u32)(r_ecx+0xacu));
    /* 0076370f: sub ebp, dword ptr [esp + 0x30] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x30u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763713: mov dword ptr [ecx + 0xac], ebp */ W32((u32)(r_ecx+0xacu), r_ebp);
    /* 00763719: mov ebp, dword ptr [ecx + 0xb0] */ r_ebp = R32((u32)(r_ecx+0xb0u));
    /* 0076371f: sub ebp, dword ptr [esp + 0x34] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763723: mov dword ptr [ecx + 0xb0], ebp */ W32((u32)(r_ecx+0xb0u), r_ebp);
    /* 00763729: mov ebp, dword ptr [ecx + 0xb4] */ r_ebp = R32((u32)(r_ecx+0xb4u));
    /* 0076372f: sub ebp, dword ptr [esp + 0x38] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763733: mov dword ptr [ecx + 0xb4], ebp */ W32((u32)(r_ecx+0xb4u), r_ebp);
    /* 00763739: mov ebp, dword ptr [ecx + 0xb8] */ r_ebp = R32((u32)(r_ecx+0xb8u));
    /* 0076373f: sub ebp, dword ptr [esp + 0x3c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x3cu)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763743: mov dword ptr [ecx + 0xb8], ebp */ W32((u32)(r_ecx+0xb8u), r_ebp);
    /* 00763749: mov ebp, dword ptr [ecx + 0xbc] */ r_ebp = R32((u32)(r_ecx+0xbcu));
    /* 0076374f: sub ebp, dword ptr [esp + 0x40] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x40u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763753: mov dword ptr [ecx + 0xbc], ebp */ W32((u32)(r_ecx+0xbcu), r_ebp);
    /* 00763759: mov ebp, dword ptr [ecx + 0xc0] */ r_ebp = R32((u32)(r_ecx+0xc0u));
    /* 0076375f: sub ebp, dword ptr [esp + 0x44] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x44u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763763: mov dword ptr [ecx + 0xc0], ebp */ W32((u32)(r_ecx+0xc0u), r_ebp);
    /* 00763769: mov ebp, dword ptr [ecx + 0xc4] */ r_ebp = R32((u32)(r_ecx+0xc4u));
    /* 0076376f: sub ebp, dword ptr [esp + 0x48] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x48u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763773: mov dword ptr [ecx + 0xc4], ebp */ W32((u32)(r_ecx+0xc4u), r_ebp);
    /* 00763779: mov ebp, dword ptr [ecx + 0xc8] */ r_ebp = R32((u32)(r_ecx+0xc8u));
    /* 0076377f: sub ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763781: mov dword ptr [ecx + 0xc8], ebp */ W32((u32)(r_ecx+0xc8u), r_ebp);
    /* 00763787: mov ebp, dword ptr [ecx + 0xcc] */ r_ebp = R32((u32)(r_ecx+0xccu));
    /* 0076378d: sub ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0076378f: mov dword ptr [ecx + 0xcc], ebp */ W32((u32)(r_ecx+0xccu), r_ebp);
    /* 00763795: mov ebp, dword ptr [ecx + 0xd0] */ r_ebp = R32((u32)(r_ecx+0xd0u));
    /* 0076379b: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0076379d: mov eax, dword ptr [ecx + 0xd4] */ r_eax = R32((u32)(r_ecx+0xd4u));
    /* 007637a3: mov dword ptr [ecx + 0xd0], ebp */ W32((u32)(r_ecx+0xd0u), r_ebp);
    /* 007637a9: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007637ab: mov dword ptr [ecx + 0xd4], eax */ W32((u32)(r_ecx+0xd4u), r_eax);
    /* 007637b1: mov eax, dword ptr [ecx + 0xd8] */ r_eax = R32((u32)(r_ecx+0xd8u));
    /* 007637b7: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007637b9: mov dword ptr [ecx + 0xd8], eax */ W32((u32)(r_ecx+0xd8u), r_eax);
    /* 007637bf: mov eax, dword ptr [ecx + 0xdc] */ r_eax = R32((u32)(r_ecx+0xdcu));
    /* 007637c5: sub eax, dword ptr [esp + 0x4c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x4cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007637c9: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
    /* 007637cf: mov eax, dword ptr [ecx + 0xe0] */ r_eax = R32((u32)(r_ecx+0xe0u));
    /* 007637d5: sub eax, dword ptr [esp] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007637d8: mov dword ptr [ecx + 0xe0], eax */ W32((u32)(r_ecx+0xe0u), r_eax);
    /* 007637de: mov eax, 1 */ r_eax = 0x1u;
L_007637e3:; BB(0x007637e3);
    /* 007637e3: mov eax, dword ptr [ecx + eax*4 + 4] */ r_eax = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 007637e7: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007637ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007637eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007637ec: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007637ed: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007637ee: ret  */ FN_RET(0x00763498); r_esp += 4; return;
}

void f_007637f0(void) /* sub_7637F0 */
{
    FN_ENTER(0x007637f0);
    /* 007637f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007637f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007637f2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007637f3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007637f6: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 007637fa: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 007637fe: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 00763802: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00763803: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00763804: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00763805: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x76380au); f_0086b6b8();
    /* 0076380a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076380d: shr edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r; fZ = (r == 0); } }
    /* 00763810: mov edx, 0 */ r_edx = 0x0u;
    /* 00763815: je 0x76389a */ if (fZ) goto L_0076389a;
L_0076381b:; BB(0x0076381b);
    /* 0076381b: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0076381f: mov eax, edx */ r_eax = r_edx;
    /* 00763821: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00763824: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00763826: mov ebp, edx */ r_ebp = r_edx;
    /* 00763828: shl ebp, 8 */ { u32 c = (8u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 0076382b: add ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_0076382d:; BB(0x0076382d);
    /* 0076382d: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00763831: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00763834: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00763836:; BB(0x00763836);
    /* 00763836: movzx esi, byte ptr [ecx + 0xa9adc0] */ r_esi = (u32)R8((u32)(r_ecx+0xa9adc0u));
    /* 0076383d: movzx edx, byte ptr [ebp + ecx] */ r_edx = (u32)R8((u32)(r_ebp+r_ecx));
    /* 00763842: mov byte ptr [esi + eax], dl */ W8((u32)(r_esi+r_eax), (u8)r_edx);
    /* 00763845: movzx edx, byte ptr [ebp + ecx + 1] */ r_edx = (u32)R8((u32)(r_ebp+r_ecx+0x1u));
    /* 0076384a: movzx edi, byte ptr [ecx + 0xa9adc1] */ r_edi = (u32)R8((u32)(r_ecx+0xa9adc1u));
    /* 00763851: mov byte ptr [edi + eax], dl */ W8((u32)(r_edi+r_eax), (u8)r_edx);
    /* 00763854: movzx edx, byte ptr [ecx + 0xa9adc2] */ r_edx = (u32)R8((u32)(r_ecx+0xa9adc2u));
    /* 0076385b: movzx ebx, byte ptr [ebp + ecx + 2] */ r_ebx = (u32)R8((u32)(r_ebp+r_ecx+0x2u));
    /* 00763860: mov byte ptr [edx + eax], bl */ W8((u32)(r_edx+r_eax), (u8)r_ebx);
    /* 00763863: movzx ebx, byte ptr [ecx + 0xa9adc3] */ r_ebx = (u32)R8((u32)(r_ecx+0xa9adc3u));
    /* 0076386a: movzx edx, byte ptr [ebp + ecx + 3] */ r_edx = (u32)R8((u32)(r_ebp+r_ecx+0x3u));
    /* 0076386f: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00763872: cmp ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00763878: mov byte ptr [ebx + eax], dl */ W8((u32)(r_ebx+r_eax), (u8)r_edx);
    /* 0076387b: jl 0x763836 */ if ((fS!=fO)) goto L_00763836;
L_0076387d:; BB(0x0076387d);
    /* 0076387d: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00763881: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00763884: add eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00763889: add ebp, 0x100 */ {  u32 a = r_ebp; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0076388f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00763892: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00763894: jb 0x76382d */ if (fC) goto L_0076382d;
L_00763896:; BB(0x00763896);
    /* 00763896: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
L_0076389a:; BB(0x0076389a);
    /* 0076389a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076389d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076389e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076389f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007638a0: ret 0xc */ FN_RET(0x007637f0); r_esp += 16; return;
}

void f_007638a4(void) /* sub_7638A4 */
{
    FN_ENTER(0x007638a4);
    /* 007638a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007638a5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007638a6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007638a7: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007638aa: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 007638ae: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 007638b2: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 007638b6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007638b7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007638b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007638b9: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x7638beu); f_0086b6b8();
    /* 007638be: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007638c1: shr edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r; fZ = (r == 0); } }
    /* 007638c4: mov edx, 0 */ r_edx = 0x0u;
    /* 007638c9: je 0x76394e */ if (fZ) goto L_0076394e;
L_007638cf:; BB(0x007638cf);
    /* 007638cf: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 007638d3: mov eax, edx */ r_eax = r_edx;
    /* 007638d5: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 007638d8: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007638da: mov ebp, edx */ r_ebp = r_edx;
    /* 007638dc: shl ebp, 8 */ { u32 c = (8u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 007638df: add ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_007638e1:; BB(0x007638e1);
    /* 007638e1: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007638e5: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 007638e8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_007638ea:; BB(0x007638ea);
    /* 007638ea: movzx esi, byte ptr [ecx + 0xa9aec0] */ r_esi = (u32)R8((u32)(r_ecx+0xa9aec0u));
    /* 007638f1: movzx edx, byte ptr [ebp + ecx] */ r_edx = (u32)R8((u32)(r_ebp+r_ecx));
    /* 007638f6: mov byte ptr [esi + eax], dl */ W8((u32)(r_esi+r_eax), (u8)r_edx);
    /* 007638f9: movzx edx, byte ptr [ebp + ecx + 1] */ r_edx = (u32)R8((u32)(r_ebp+r_ecx+0x1u));
    /* 007638fe: movzx edi, byte ptr [ecx + 0xa9aec1] */ r_edi = (u32)R8((u32)(r_ecx+0xa9aec1u));
    /* 00763905: mov byte ptr [edi + eax], dl */ W8((u32)(r_edi+r_eax), (u8)r_edx);
    /* 00763908: movzx edx, byte ptr [ecx + 0xa9aec2] */ r_edx = (u32)R8((u32)(r_ecx+0xa9aec2u));
    /* 0076390f: movzx ebx, byte ptr [ebp + ecx + 2] */ r_ebx = (u32)R8((u32)(r_ebp+r_ecx+0x2u));
    /* 00763914: mov byte ptr [edx + eax], bl */ W8((u32)(r_edx+r_eax), (u8)r_ebx);
    /* 00763917: movzx ebx, byte ptr [ecx + 0xa9aec3] */ r_ebx = (u32)R8((u32)(r_ecx+0xa9aec3u));
    /* 0076391e: movzx edx, byte ptr [ebp + ecx + 3] */ r_edx = (u32)R8((u32)(r_ebp+r_ecx+0x3u));
    /* 00763923: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00763926: cmp ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076392c: mov byte ptr [ebx + eax], dl */ W8((u32)(r_ebx+r_eax), (u8)r_edx);
    /* 0076392f: jl 0x7638ea */ if ((fS!=fO)) goto L_007638ea;
L_00763931:; BB(0x00763931);
    /* 00763931: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00763935: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00763938: add eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076393d: add ebp, 0x100 */ {  u32 a = r_ebp; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00763943: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00763946: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00763948: jb 0x7638e1 */ if (fC) goto L_007638e1;
L_0076394a:; BB(0x0076394a);
    /* 0076394a: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
L_0076394e:; BB(0x0076394e);
    /* 0076394e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00763951: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00763952: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00763953: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00763954: ret 0xc */ FN_RET(0x007638a4); r_esp += 16; return;
}

void f_00763958(void) /* sub_763958 */
{
    FN_ENTER(0x00763958);
    /* 00763958: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00763959: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076395c: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 00763960: mov ebx, dword ptr [esp + 0x70] */ r_ebx = R32((u32)(r_esp+0x70u));
    /* 00763964: lea eax, [ebx + 3] */ r_eax = (u32)(r_ebx+0x3u);
    /* 00763967: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00763969: shr eax, 0x1e */ { u32 c = (30u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0076396c: lea eax, [eax + ebx + 3] */ r_eax = (u32)(r_eax+r_ebx+0x3u);
    /* 00763970: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00763973: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00763975: jle 0x763cff */ if ((fZ||fS!=fO)) goto L_00763cff;
L_0076397b:; BB(0x0076397b);
    /* 0076397b: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0076397f: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00763983: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00763986: lea eax, [edx + eax*4] */ r_eax = (u32)(r_edx+r_eax*4);
L_00763989:; BB(0x00763989);
    /* 00763989: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 0076398b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076398e: cmp ebx, 0x37 */ {  u32 a = r_ebx; u32 b = 0x37u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00763991: jg 0x76399a */ if ((!fZ&&fS==fO)) goto L_0076399a;
L_00763993:; BB(0x00763993);
    /* 00763993: mov dword ptr [ecx], ebx */ W32((u32)(r_ecx), r_ebx);
    /* 00763995: jmp 0x763ce1 */ goto L_00763ce1;
L_0076399a:; BB(0x0076399a);
    /* 0076399a: mov edi, dword ptr [ecx + 8] */ r_edi = R32((u32)(r_ecx+0x8u));
    /* 0076399d: sub edi, dword ptr [ecx + 0x84] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+0x84u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 007639a3: mov ebx, dword ptr [ecx + 0x14] */ r_ebx = R32((u32)(r_ecx+0x14u));
    /* 007639a6: mov ebp, dword ptr [ecx + 0x18] */ r_ebp = R32((u32)(r_ecx+0x18u));
    /* 007639a9: mov esi, dword ptr [ecx + 0x1c] */ r_esi = R32((u32)(r_ecx+0x1cu));
    /* 007639ac: sub ebx, dword ptr [ecx + 0x90] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0x90u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 007639b2: sub ebp, dword ptr [ecx + 0x94] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ecx+0x94u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 007639b8: sub esi, dword ptr [ecx + 0x98] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x98u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007639be: mov dword ptr [ecx], 1 */ W32((u32)(r_ecx), 0x1u);
    /* 007639c4: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 007639c8: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 007639cb: sub edx, dword ptr [ecx + 0x8c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007639d1: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007639d5: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 007639d8: sub eax, dword ptr [ecx + 0x88] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x88u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007639de: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 007639e2: mov dword ptr [ecx + 8], edi */ W32((u32)(r_ecx+0x8u), r_edi);
    /* 007639e5: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 007639e8: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 007639eb: mov dword ptr [ecx + 0x14], ebx */ W32((u32)(r_ecx+0x14u), r_ebx);
    /* 007639ee: mov dword ptr [ecx + 0x18], ebp */ W32((u32)(r_ecx+0x18u), r_ebp);
    /* 007639f1: mov dword ptr [ecx + 0x1c], esi */ W32((u32)(r_ecx+0x1cu), r_esi);
    /* 007639f4: mov esi, dword ptr [ecx + 0x20] */ r_esi = R32((u32)(r_ecx+0x20u));
    /* 007639f7: sub esi, dword ptr [ecx + 0x9c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x9cu)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007639fd: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 00763a01: mov dword ptr [ecx + 0x20], esi */ W32((u32)(r_ecx+0x20u), r_esi);
    /* 00763a04: mov esi, dword ptr [ecx + 0x24] */ r_esi = R32((u32)(r_ecx+0x24u));
    /* 00763a07: sub esi, dword ptr [ecx + 0xa0] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xa0u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00763a0d: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 00763a11: mov dword ptr [ecx + 0x24], esi */ W32((u32)(r_ecx+0x24u), r_esi);
    /* 00763a14: mov esi, dword ptr [ecx + 0x28] */ r_esi = R32((u32)(r_ecx+0x28u));
    /* 00763a17: sub esi, dword ptr [ecx + 0xa4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xa4u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00763a1d: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 00763a21: mov dword ptr [ecx + 0x28], esi */ W32((u32)(r_ecx+0x28u), r_esi);
    /* 00763a24: mov esi, dword ptr [ecx + 0x2c] */ r_esi = R32((u32)(r_ecx+0x2cu));
    /* 00763a27: sub esi, dword ptr [ecx + 0xa8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xa8u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00763a2d: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 00763a31: mov dword ptr [ecx + 0x2c], esi */ W32((u32)(r_ecx+0x2cu), r_esi);
    /* 00763a34: mov esi, dword ptr [ecx + 0x30] */ r_esi = R32((u32)(r_ecx+0x30u));
    /* 00763a37: sub esi, dword ptr [ecx + 0xac] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xacu)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00763a3d: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 00763a41: mov dword ptr [ecx + 0x30], esi */ W32((u32)(r_ecx+0x30u), r_esi);
    /* 00763a44: mov esi, dword ptr [ecx + 0x34] */ r_esi = R32((u32)(r_ecx+0x34u));
    /* 00763a47: sub esi, dword ptr [ecx + 0xb0] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xb0u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00763a4d: mov dword ptr [esp + 0x2c], esi */ W32((u32)(r_esp+0x2cu), r_esi);
    /* 00763a51: mov dword ptr [ecx + 0x34], esi */ W32((u32)(r_ecx+0x34u), r_esi);
    /* 00763a54: mov esi, dword ptr [ecx + 0x38] */ r_esi = R32((u32)(r_ecx+0x38u));
    /* 00763a57: sub esi, dword ptr [ecx + 0xb4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xb4u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00763a5d: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 00763a61: mov dword ptr [ecx + 0x38], esi */ W32((u32)(r_ecx+0x38u), r_esi);
    /* 00763a64: mov esi, dword ptr [ecx + 0x3c] */ r_esi = R32((u32)(r_ecx+0x3cu));
    /* 00763a67: sub esi, dword ptr [ecx + 0xb8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xb8u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00763a6d: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 00763a71: mov dword ptr [ecx + 0x3c], esi */ W32((u32)(r_ecx+0x3cu), r_esi);
    /* 00763a74: mov esi, dword ptr [ecx + 0x40] */ r_esi = R32((u32)(r_ecx+0x40u));
    /* 00763a77: sub esi, dword ptr [ecx + 0xbc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xbcu)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00763a7d: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 00763a81: mov dword ptr [ecx + 0x40], esi */ W32((u32)(r_ecx+0x40u), r_esi);
    /* 00763a84: mov esi, dword ptr [ecx + 0x44] */ r_esi = R32((u32)(r_ecx+0x44u));
    /* 00763a87: sub esi, dword ptr [ecx + 0xc0] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xc0u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00763a8d: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 00763a91: mov dword ptr [ecx + 0x44], esi */ W32((u32)(r_ecx+0x44u), r_esi);
    /* 00763a94: mov esi, dword ptr [ecx + 0x48] */ r_esi = R32((u32)(r_ecx+0x48u));
    /* 00763a97: sub esi, dword ptr [ecx + 0xc4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xc4u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00763a9d: mov dword ptr [esp + 0x40], esi */ W32((u32)(r_esp+0x40u), r_esi);
    /* 00763aa1: mov dword ptr [ecx + 0x48], esi */ W32((u32)(r_ecx+0x48u), r_esi);
    /* 00763aa4: mov esi, dword ptr [ecx + 0x4c] */ r_esi = R32((u32)(r_ecx+0x4cu));
    /* 00763aa7: sub esi, dword ptr [ecx + 0xc8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xc8u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00763aad: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 00763ab1: mov dword ptr [ecx + 0x4c], esi */ W32((u32)(r_ecx+0x4cu), r_esi);
    /* 00763ab4: mov esi, dword ptr [ecx + 0x50] */ r_esi = R32((u32)(r_ecx+0x50u));
    /* 00763ab7: sub esi, dword ptr [ecx + 0xcc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xccu)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00763abd: mov dword ptr [esp + 0x48], esi */ W32((u32)(r_esp+0x48u), r_esi);
    /* 00763ac1: mov dword ptr [ecx + 0x50], esi */ W32((u32)(r_ecx+0x50u), r_esi);
    /* 00763ac4: mov esi, dword ptr [ecx + 0x54] */ r_esi = R32((u32)(r_ecx+0x54u));
    /* 00763ac7: sub esi, dword ptr [ecx + 0xd0] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xd0u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00763acd: mov dword ptr [esp + 0x4c], esi */ W32((u32)(r_esp+0x4cu), r_esi);
    /* 00763ad1: mov dword ptr [ecx + 0x54], esi */ W32((u32)(r_ecx+0x54u), r_esi);
    /* 00763ad4: mov esi, dword ptr [ecx + 0x58] */ r_esi = R32((u32)(r_ecx+0x58u));
    /* 00763ad7: sub esi, dword ptr [ecx + 0xd4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xd4u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00763add: mov dword ptr [esp + 0x50], esi */ W32((u32)(r_esp+0x50u), r_esi);
    /* 00763ae1: mov dword ptr [ecx + 0x58], esi */ W32((u32)(r_ecx+0x58u), r_esi);
    /* 00763ae4: mov esi, dword ptr [ecx + 0x5c] */ r_esi = R32((u32)(r_ecx+0x5cu));
    /* 00763ae7: sub esi, dword ptr [ecx + 0xd8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xd8u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00763aed: mov dword ptr [esp + 0x54], esi */ W32((u32)(r_esp+0x54u), r_esi);
    /* 00763af1: mov dword ptr [ecx + 0x5c], esi */ W32((u32)(r_ecx+0x5cu), r_esi);
    /* 00763af4: mov esi, dword ptr [ecx + 0x60] */ r_esi = R32((u32)(r_ecx+0x60u));
    /* 00763af7: sub esi, dword ptr [ecx + 0xdc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xdcu)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00763afd: mov dword ptr [esp + 0x58], esi */ W32((u32)(r_esp+0x58u), r_esi);
    /* 00763b01: mov dword ptr [ecx + 0x60], esi */ W32((u32)(r_ecx+0x60u), r_esi);
    /* 00763b04: mov esi, dword ptr [ecx + 0x64] */ r_esi = R32((u32)(r_ecx+0x64u));
    /* 00763b07: sub esi, dword ptr [ecx + 0xe0] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xe0u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00763b0d: mov dword ptr [esp + 0x5c], esi */ W32((u32)(r_esp+0x5cu), r_esi);
    /* 00763b11: mov dword ptr [ecx + 0x64], esi */ W32((u32)(r_ecx+0x64u), r_esi);
    /* 00763b14: mov esi, dword ptr [ecx + 0x68] */ r_esi = R32((u32)(r_ecx+0x68u));
    /* 00763b17: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00763b19: mov edi, dword ptr [ecx + 0x6c] */ r_edi = R32((u32)(r_ecx+0x6cu));
    /* 00763b1c: mov dword ptr [ecx + 0x68], esi */ W32((u32)(r_ecx+0x68u), r_esi);
    /* 00763b1f: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00763b21: mov eax, dword ptr [ecx + 0x70] */ r_eax = R32((u32)(r_ecx+0x70u));
    /* 00763b24: mov dword ptr [ecx + 0x6c], edi */ W32((u32)(r_ecx+0x6cu), r_edi);
    /* 00763b27: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00763b29: mov edx, dword ptr [ecx + 0x74] */ r_edx = R32((u32)(r_ecx+0x74u));
    /* 00763b2c: mov dword ptr [ecx + 0x70], eax */ W32((u32)(r_ecx+0x70u), r_eax);
    /* 00763b2f: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00763b31: mov ebx, dword ptr [ecx + 0x78] */ r_ebx = R32((u32)(r_ecx+0x78u));
    /* 00763b34: mov dword ptr [ecx + 0x74], edx */ W32((u32)(r_ecx+0x74u), r_edx);
    /* 00763b37: sub ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00763b39: mov ebp, dword ptr [ecx + 0x7c] */ r_ebp = R32((u32)(r_ecx+0x7cu));
    /* 00763b3c: sub ebp, dword ptr [esp + 0x14] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x14u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763b40: mov dword ptr [ecx + 0x78], ebx */ W32((u32)(r_ecx+0x78u), r_ebx);
    /* 00763b43: mov dword ptr [esp + 0x60], ebp */ W32((u32)(r_esp+0x60u), r_ebp);
    /* 00763b47: mov dword ptr [ecx + 0x7c], ebp */ W32((u32)(r_ecx+0x7cu), r_ebp);
    /* 00763b4a: mov ebp, dword ptr [ecx + 0x80] */ r_ebp = R32((u32)(r_ecx+0x80u));
    /* 00763b50: sub ebp, dword ptr [esp + 0x18] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763b54: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 00763b58: mov dword ptr [ecx + 0x80], ebp */ W32((u32)(r_ecx+0x80u), r_ebp);
    /* 00763b5e: mov ebp, dword ptr [ecx + 0x84] */ r_ebp = R32((u32)(r_ecx+0x84u));
    /* 00763b64: sub ebp, dword ptr [esp + 0x1c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763b68: mov dword ptr [ecx + 0x84], ebp */ W32((u32)(r_ecx+0x84u), r_ebp);
    /* 00763b6e: mov ebp, dword ptr [ecx + 0x88] */ r_ebp = R32((u32)(r_ecx+0x88u));
    /* 00763b74: sub ebp, dword ptr [esp + 0x20] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x20u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763b78: mov dword ptr [ecx + 0x88], ebp */ W32((u32)(r_ecx+0x88u), r_ebp);
    /* 00763b7e: mov ebp, dword ptr [ecx + 0x8c] */ r_ebp = R32((u32)(r_ecx+0x8cu));
    /* 00763b84: sub ebp, dword ptr [esp + 0x24] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763b88: mov dword ptr [ecx + 0x8c], ebp */ W32((u32)(r_ecx+0x8cu), r_ebp);
    /* 00763b8e: mov ebp, dword ptr [ecx + 0x90] */ r_ebp = R32((u32)(r_ecx+0x90u));
    /* 00763b94: sub ebp, dword ptr [esp + 0x28] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763b98: mov dword ptr [ecx + 0x90], ebp */ W32((u32)(r_ecx+0x90u), r_ebp);
    /* 00763b9e: mov ebp, dword ptr [ecx + 0x94] */ r_ebp = R32((u32)(r_ecx+0x94u));
    /* 00763ba4: sub ebp, dword ptr [esp + 0x2c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763ba8: mov dword ptr [ecx + 0x94], ebp */ W32((u32)(r_ecx+0x94u), r_ebp);
    /* 00763bae: mov ebp, dword ptr [ecx + 0x98] */ r_ebp = R32((u32)(r_ecx+0x98u));
    /* 00763bb4: sub ebp, dword ptr [esp + 0x30] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x30u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763bb8: mov dword ptr [ecx + 0x98], ebp */ W32((u32)(r_ecx+0x98u), r_ebp);
    /* 00763bbe: mov ebp, dword ptr [ecx + 0x9c] */ r_ebp = R32((u32)(r_ecx+0x9cu));
    /* 00763bc4: sub ebp, dword ptr [esp + 0x34] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763bc8: mov dword ptr [ecx + 0x9c], ebp */ W32((u32)(r_ecx+0x9cu), r_ebp);
    /* 00763bce: mov ebp, dword ptr [ecx + 0xa0] */ r_ebp = R32((u32)(r_ecx+0xa0u));
    /* 00763bd4: sub ebp, dword ptr [esp + 0x38] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763bd8: mov dword ptr [ecx + 0xa0], ebp */ W32((u32)(r_ecx+0xa0u), r_ebp);
    /* 00763bde: mov ebp, dword ptr [ecx + 0xa4] */ r_ebp = R32((u32)(r_ecx+0xa4u));
    /* 00763be4: sub ebp, dword ptr [esp + 0x3c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x3cu)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763be8: mov dword ptr [ecx + 0xa4], ebp */ W32((u32)(r_ecx+0xa4u), r_ebp);
    /* 00763bee: mov ebp, dword ptr [ecx + 0xa8] */ r_ebp = R32((u32)(r_ecx+0xa8u));
    /* 00763bf4: sub ebp, dword ptr [esp + 0x40] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x40u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763bf8: mov dword ptr [ecx + 0xa8], ebp */ W32((u32)(r_ecx+0xa8u), r_ebp);
    /* 00763bfe: mov ebp, dword ptr [ecx + 0xac] */ r_ebp = R32((u32)(r_ecx+0xacu));
    /* 00763c04: sub ebp, dword ptr [esp + 0x44] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x44u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763c08: mov dword ptr [ecx + 0xac], ebp */ W32((u32)(r_ecx+0xacu), r_ebp);
    /* 00763c0e: mov ebp, dword ptr [ecx + 0xb0] */ r_ebp = R32((u32)(r_ecx+0xb0u));
    /* 00763c14: sub ebp, dword ptr [esp + 0x48] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x48u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763c18: mov dword ptr [ecx + 0xb0], ebp */ W32((u32)(r_ecx+0xb0u), r_ebp);
    /* 00763c1e: mov ebp, dword ptr [ecx + 0xb4] */ r_ebp = R32((u32)(r_ecx+0xb4u));
    /* 00763c24: sub ebp, dword ptr [esp + 0x4c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x4cu)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763c28: mov dword ptr [ecx + 0xb4], ebp */ W32((u32)(r_ecx+0xb4u), r_ebp);
    /* 00763c2e: mov ebp, dword ptr [ecx + 0xb8] */ r_ebp = R32((u32)(r_ecx+0xb8u));
    /* 00763c34: sub ebp, dword ptr [esp + 0x50] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x50u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763c38: mov dword ptr [ecx + 0xb8], ebp */ W32((u32)(r_ecx+0xb8u), r_ebp);
    /* 00763c3e: mov ebp, dword ptr [ecx + 0xbc] */ r_ebp = R32((u32)(r_ecx+0xbcu));
    /* 00763c44: sub ebp, dword ptr [esp + 0x54] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x54u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763c48: mov dword ptr [ecx + 0xbc], ebp */ W32((u32)(r_ecx+0xbcu), r_ebp);
    /* 00763c4e: mov ebp, dword ptr [ecx + 0xc0] */ r_ebp = R32((u32)(r_ecx+0xc0u));
    /* 00763c54: sub ebp, dword ptr [esp + 0x58] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x58u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763c58: mov dword ptr [ecx + 0xc0], ebp */ W32((u32)(r_ecx+0xc0u), r_ebp);
    /* 00763c5e: mov ebp, dword ptr [ecx + 0xc4] */ r_ebp = R32((u32)(r_ecx+0xc4u));
    /* 00763c64: sub ebp, dword ptr [esp + 0x5c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x5cu)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763c68: mov dword ptr [ecx + 0xc4], ebp */ W32((u32)(r_ecx+0xc4u), r_ebp);
    /* 00763c6e: mov ebp, dword ptr [ecx + 0xc8] */ r_ebp = R32((u32)(r_ecx+0xc8u));
    /* 00763c74: sub ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763c76: mov dword ptr [ecx + 0xc8], ebp */ W32((u32)(r_ecx+0xc8u), r_ebp);
    /* 00763c7c: mov ebp, dword ptr [ecx + 0xcc] */ r_ebp = R32((u32)(r_ecx+0xccu));
    /* 00763c82: sub ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763c84: mov dword ptr [ecx + 0xcc], ebp */ W32((u32)(r_ecx+0xccu), r_ebp);
    /* 00763c8a: mov ebp, dword ptr [ecx + 0xd0] */ r_ebp = R32((u32)(r_ecx+0xd0u));
    /* 00763c90: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00763c92: mov eax, dword ptr [ecx + 0xd4] */ r_eax = R32((u32)(r_ecx+0xd4u));
    /* 00763c98: mov dword ptr [ecx + 0xd0], ebp */ W32((u32)(r_ecx+0xd0u), r_ebp);
    /* 00763c9e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00763ca0: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00763ca4: mov dword ptr [ecx + 0xd4], eax */ W32((u32)(r_ecx+0xd4u), r_eax);
    /* 00763caa: mov eax, dword ptr [ecx + 0xd8] */ r_eax = R32((u32)(r_ecx+0xd8u));
    /* 00763cb0: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00763cb2: mov dword ptr [ecx + 0xd8], eax */ W32((u32)(r_ecx+0xd8u), r_eax);
    /* 00763cb8: mov eax, dword ptr [ecx + 0xdc] */ r_eax = R32((u32)(r_ecx+0xdcu));
    /* 00763cbe: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00763cc3: sub eax, dword ptr [esp + 0x60] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x60u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00763cc7: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
    /* 00763ccd: mov eax, dword ptr [ecx + 0xe0] */ r_eax = R32((u32)(r_ecx+0xe0u));
    /* 00763cd3: sub eax, dword ptr [esp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x14u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00763cd7: mov dword ptr [ecx + 0xe0], eax */ W32((u32)(r_ecx+0xe0u), r_eax);
    /* 00763cdd: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
L_00763ce1:; BB(0x00763ce1);
    /* 00763ce1: mov ebx, dword ptr [ecx + ebx*4 + 4] */ r_ebx = R32((u32)(r_ecx+r_ebx*4+0x4u));
    /* 00763ce5: sub ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00763ce7: mov dword ptr [edx], ebx */ W32((u32)(r_edx), r_ebx);
    /* 00763ce9: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00763cec: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00763cee: jb 0x763989 */ if (fC) goto L_00763989;
L_00763cf4:; BB(0x00763cf4);
    /* 00763cf4: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00763cf8: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00763cfc: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_00763cff:; BB(0x00763cff);
    /* 00763cff: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00763d02: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00763d03: ret 8 */ FN_RET(0x00763958); r_esp += 12; return;
}

void f_00763d08(void) /* sub_763D08 */
{
    FN_ENTER(0x00763d08);
    /* 00763d08: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00763d09: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00763d0c: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00763d10: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00763d14: mov ebx, eax */ r_ebx = r_eax;
    /* 00763d16: sar ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00763d19: shr ebx, 0x1d */ { u32 c = (29u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00763d1c: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00763d1e: sar ebx, 3 */ { u32 c = (3u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00763d21: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00763d23: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00763d25: jle 0x763e5e */ if ((fZ||fS!=fO)) goto L_00763e5e;
L_00763d2b:; BB(0x00763d2b);
    /* 00763d2b: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 00763d2f: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00763d33: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00763d37: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
L_00763d3a:; BB(0x00763d3a);
    /* 00763d3a: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 00763d3c: xor ebx, dword ptr [ecx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx)); u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00763d3e: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00763d40: shr ebp, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 00763d43: mov ebp, dword ptr [ecx + ebp*4 + 0x48] */ r_ebp = R32((u32)(r_ecx+r_ebp*4+0x48u));
    /* 00763d47: mov esi, ebx */ r_esi = r_ebx;
    /* 00763d49: shr esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00763d4c: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00763d52: add ebp, dword ptr [ecx + esi*4 + 0x448] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ecx+r_esi*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00763d59: mov esi, ebx */ r_esi = r_ebx;
    /* 00763d5b: shr esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00763d5e: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00763d64: xor ebp, dword ptr [ecx + esi*4 + 0x848] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ecx+r_esi*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00763d6b: movzx esi, bl */ r_esi = (u32)(u8)r_ebx;
    /* 00763d6e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00763d71: add ebp, dword ptr [ecx + esi*4 + 0xc48] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ecx+r_esi*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00763d78: xor ebp, dword ptr [ecx + 4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00763d7b: xor ebp, dword ptr [edx + 4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00763d7e: mov edi, ebp */ r_edi = r_ebp;
    /* 00763d80: shr edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00763d83: mov edi, dword ptr [ecx + edi*4 + 0x48] */ r_edi = R32((u32)(r_ecx+r_edi*4+0x48u));
    /* 00763d87: mov esi, ebp */ r_esi = r_ebp;
    /* 00763d89: shr esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00763d8c: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00763d92: add edi, dword ptr [ecx + esi*4 + 0x448] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+r_esi*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00763d99: mov esi, ebp */ r_esi = r_ebp;
    /* 00763d9b: shr esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00763d9e: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00763da4: xor edi, dword ptr [ecx + esi*4 + 0x848] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+r_esi*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00763dab: mov esi, ebp */ r_esi = r_ebp;
    /* 00763dad: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00763db3: add edi, dword ptr [ecx + esi*4 + 0xc48] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+r_esi*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00763dba: xor edi, dword ptr [ecx + 8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00763dbd: xor ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00763dbf: mov esi, ebx */ r_esi = r_ebx;
    /* 00763dc1: shr esi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00763dc4: mov esi, dword ptr [ecx + esi*4 + 0x48] */ r_esi = R32((u32)(r_ecx+r_esi*4+0x48u));
    /* 00763dc8: mov edi, ebx */ r_edi = r_ebx;
    /* 00763dca: shr edi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00763dcd: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00763dd3: add esi, dword ptr [ecx + edi*4 + 0x448] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+r_edi*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00763dda: mov edi, ebx */ r_edi = r_ebx;
    /* 00763ddc: shr edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00763ddf: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00763de5: xor esi, dword ptr [ecx + edi*4 + 0x848] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+r_edi*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00763dec: movzx edi, bl */ r_edi = (u32)(u8)r_ebx;
    /* 00763def: add esi, dword ptr [ecx + edi*4 + 0xc48] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+r_edi*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00763df6: xor esi, dword ptr [ecx + 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00763df9: xor ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00763dfb: mov edi, ebp */ r_edi = r_ebp;
    /* 00763dfd: shr edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00763e00: mov edi, dword ptr [ecx + edi*4 + 0x48] */ r_edi = R32((u32)(r_ecx+r_edi*4+0x48u));
    /* 00763e04: mov esi, ebp */ r_esi = r_ebp;
    /* 00763e06: shr esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00763e09: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00763e0f: add edi, dword ptr [ecx + esi*4 + 0x448] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+r_esi*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00763e16: mov esi, ebp */ r_esi = r_ebp;
    /* 00763e18: shr esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00763e1b: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00763e21: xor edi, dword ptr [ecx + esi*4 + 0x848] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+r_esi*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00763e28: mov esi, ebp */ r_esi = r_ebp;
    /* 00763e2a: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00763e30: add edi, dword ptr [ecx + esi*4 + 0xc48] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+r_esi*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00763e37: xor edi, dword ptr [ecx + 0x10] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00763e3a: xor ebp, dword ptr [ecx + 0x14] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00763e3d: xor ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00763e3f: mov dword ptr [edx], ebp */ W32((u32)(r_edx), r_ebp);
    /* 00763e41: mov dword ptr [edx + 4], ebx */ W32((u32)(r_edx+0x4u), r_ebx);
    /* 00763e44: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 00763e48: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00763e4b: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00763e4d: jl 0x763d3a */ if ((fS!=fO)) goto L_00763d3a;
L_00763e53:; BB(0x00763e53);
    /* 00763e53: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00763e57: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00763e5b: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_00763e5e:; BB(0x00763e5e);
    /* 00763e5e: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00763e60: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00763e62: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00763e64: mov eax, ebx */ r_eax = r_ebx;
    /* 00763e66: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00763e69: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00763e6a: ret 8 */ FN_RET(0x00763d08); r_esp += 12; return;
}

void f_00763e70(void) /* sub_763E70 */
{
    FN_ENTER(0x00763e70);
    /* 00763e70: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00763e71: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00763e74: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00763e78: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00763e7c: mov ebx, eax */ r_ebx = r_eax;
    /* 00763e7e: sar ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00763e81: shr ebx, 0x1d */ { u32 c = (29u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00763e84: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00763e86: sar ebx, 3 */ { u32 c = (3u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00763e89: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00763e8b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00763e8d: jle 0x763fc6 */ if ((fZ||fS!=fO)) goto L_00763fc6;
L_00763e93:; BB(0x00763e93);
    /* 00763e93: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 00763e97: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00763e9b: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00763e9f: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
L_00763ea2:; BB(0x00763ea2);
    /* 00763ea2: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 00763ea4: xor ebx, dword ptr [ecx + 0x14] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00763ea7: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00763ea9: shr ebp, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 00763eac: mov ebp, dword ptr [ecx + ebp*4 + 0x48] */ r_ebp = R32((u32)(r_ecx+r_ebp*4+0x48u));
    /* 00763eb0: mov esi, ebx */ r_esi = r_ebx;
    /* 00763eb2: shr esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00763eb5: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00763ebb: add ebp, dword ptr [ecx + esi*4 + 0x448] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ecx+r_esi*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00763ec2: mov esi, ebx */ r_esi = r_ebx;
    /* 00763ec4: shr esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00763ec7: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00763ecd: xor ebp, dword ptr [ecx + esi*4 + 0x848] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ecx+r_esi*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00763ed4: movzx esi, bl */ r_esi = (u32)(u8)r_ebx;
    /* 00763ed7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00763eda: add ebp, dword ptr [ecx + esi*4 + 0xc48] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ecx+r_esi*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00763ee1: xor ebp, dword ptr [ecx + 0x10] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00763ee4: xor ebp, dword ptr [edx + 4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00763ee7: mov edi, ebp */ r_edi = r_ebp;
    /* 00763ee9: shr edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00763eec: mov edi, dword ptr [ecx + edi*4 + 0x48] */ r_edi = R32((u32)(r_ecx+r_edi*4+0x48u));
    /* 00763ef0: mov esi, ebp */ r_esi = r_ebp;
    /* 00763ef2: shr esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00763ef5: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00763efb: add edi, dword ptr [ecx + esi*4 + 0x448] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+r_esi*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00763f02: mov esi, ebp */ r_esi = r_ebp;
    /* 00763f04: shr esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00763f07: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00763f0d: xor edi, dword ptr [ecx + esi*4 + 0x848] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+r_esi*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00763f14: mov esi, ebp */ r_esi = r_ebp;
    /* 00763f16: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00763f1c: add edi, dword ptr [ecx + esi*4 + 0xc48] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+r_esi*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00763f23: xor edi, dword ptr [ecx + 0xc] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00763f26: xor ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00763f28: mov esi, ebx */ r_esi = r_ebx;
    /* 00763f2a: shr esi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00763f2d: mov esi, dword ptr [ecx + esi*4 + 0x48] */ r_esi = R32((u32)(r_ecx+r_esi*4+0x48u));
    /* 00763f31: mov edi, ebx */ r_edi = r_ebx;
    /* 00763f33: shr edi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00763f36: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00763f3c: add esi, dword ptr [ecx + edi*4 + 0x448] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+r_edi*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00763f43: mov edi, ebx */ r_edi = r_ebx;
    /* 00763f45: shr edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00763f48: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00763f4e: xor esi, dword ptr [ecx + edi*4 + 0x848] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+r_edi*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00763f55: movzx edi, bl */ r_edi = (u32)(u8)r_ebx;
    /* 00763f58: add esi, dword ptr [ecx + edi*4 + 0xc48] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+r_edi*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00763f5f: xor esi, dword ptr [ecx + 8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00763f62: xor ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00763f64: mov edi, ebp */ r_edi = r_ebp;
    /* 00763f66: shr edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00763f69: mov edi, dword ptr [ecx + edi*4 + 0x48] */ r_edi = R32((u32)(r_ecx+r_edi*4+0x48u));
    /* 00763f6d: mov esi, ebp */ r_esi = r_ebp;
    /* 00763f6f: shr esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00763f72: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00763f78: add edi, dword ptr [ecx + esi*4 + 0x448] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+r_esi*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00763f7f: mov esi, ebp */ r_esi = r_ebp;
    /* 00763f81: shr esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00763f84: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00763f8a: xor edi, dword ptr [ecx + esi*4 + 0x848] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+r_esi*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00763f91: mov esi, ebp */ r_esi = r_ebp;
    /* 00763f93: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00763f99: add edi, dword ptr [ecx + esi*4 + 0xc48] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+r_esi*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00763fa0: xor edi, dword ptr [ecx + 4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00763fa3: xor ebp, dword ptr [ecx] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ecx)); u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00763fa5: xor ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00763fa7: mov dword ptr [edx], ebp */ W32((u32)(r_edx), r_ebp);
    /* 00763fa9: mov dword ptr [edx + 4], ebx */ W32((u32)(r_edx+0x4u), r_ebx);
    /* 00763fac: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 00763fb0: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00763fb3: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00763fb5: jl 0x763ea2 */ if ((fS!=fO)) goto L_00763ea2;
L_00763fbb:; BB(0x00763fbb);
    /* 00763fbb: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00763fbf: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00763fc3: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_00763fc6:; BB(0x00763fc6);
    /* 00763fc6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00763fc9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00763fca: ret 8 */ FN_RET(0x00763e70); r_esp += 12; return;
}

void f_00763fd0(void) /* sub_763FD0 */
{
    FN_ENTER(0x00763fd0);
    /* 00763fd0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00763fd1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00763fd2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00763fd3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00763fd4: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00763fd7: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00763fd9: mov eax, 0x976020 */ r_eax = 0x976020u;
    /* 00763fde: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 00763fe2: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00763fe6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00763fe7: mov ecx, 0x12 */ r_ecx = 0x12u;
L_00763fec:; BB(0x00763fec);
    /* 00763fec: mov dx, word ptr [eax] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 00763fef: xchg dh, dl */ { u32 x = (u8)(r_edx>>8); u32 y = (u8)r_edx; r_edx = (r_edx & 0xffff00ffu) | (((y) & 0xffu) << 8); r_edx = (r_edx & 0xffffff00u) | ((x) & 0xffu); }
    /* 00763ff1: mov word ptr [ebp], dx */ W16((u32)(r_ebp), (u16)r_edx);
    /* 00763ff5: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00763ff8: mov dx, word ptr [eax] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 00763ffb: xor dx, word ptr [ebp] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_ebp)); u32 r = (a ^ b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00763fff: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00764002: mov word ptr [ebp], dx */ W16((u32)(r_ebp), (u16)r_edx);
    /* 00764006: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00764009: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0076400c: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0076400d: jne 0x763fec */ if (!fZ) goto L_00763fec;
L_0076400f:; BB(0x0076400f);
    /* 0076400f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00764010: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00764012: jmp 0x764051 */ goto L_00764051;
L_00764051:; BB(0x00764051);
    /* 00764051: push 0x1000 */ { u32 v = 0x1000u; r_esp -= 4; W32(r_esp, v); }
    /* 00764056: push 0x974f20 */ { u32 v = 0x974f20u; r_esp -= 4; W32(r_esp, v); }
    /* 0076405b: lea eax, [ebp + 0x48] */ r_eax = (u32)(r_ebp+0x48u);
    /* 0076405e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076405f: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x764064u); f_0086b6b8();
    /* 00764064: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00764067: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0076406b: mov eax, ebp */ r_eax = r_ebp;
    /* 0076406d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076406f: lea edx, [ebp + 0x48] */ r_edx = (u32)(r_ebp+0x48u);
    /* 00764072: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00764076: mov ebx, eax */ r_ebx = r_eax;
L_00764078:; BB(0x00764078);
    /* 00764078: movzx ebp, byte ptr [ecx + edi] */ r_ebp = (u32)R8((u32)(r_ecx+r_edi));
    /* 0076407c: shl ebp, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 0076407f: lea eax, [ecx + 1] */ r_eax = (u32)(r_ecx+0x1u);
    /* 00764082: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00764083: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x00764083, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00764083, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00764085: movzx eax, byte ptr [edx + edi] */ r_eax = (u32)R8((u32)(r_edx+r_edi));
    /* 00764089: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0076408c: and eax, 0xff0000 */ {  u32 a = r_eax; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00764091: or ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 00764093: and ebp, 0xffff00ff */ {  u32 a = r_ebp; u32 b = 0xffff00ffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00764099: lea eax, [ecx + 2] */ r_eax = (u32)(r_ecx+0x2u);
    /* 0076409c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0076409d: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x0076409d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0076409d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0076409f: movzx eax, byte ptr [edx + edi] */ r_eax = (u32)R8((u32)(r_edx+r_edi));
    /* 007640a3: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 007640a6: and eax, 0xff00 */ {  u32 a = r_eax; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007640ab: or ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 007640ad: and ebp, 0xffffff00 */ {  u32 a = r_ebp; u32 b = 0xffffff00u; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 007640b3: lea eax, [ecx + 3] */ r_eax = (u32)(r_ecx+0x3u);
    /* 007640b6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007640b7: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x007640b7, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007640b7, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007640b9: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007640bc: movzx eax, byte ptr [edx + edi] */ r_eax = (u32)R8((u32)(r_edx+r_edi));
    /* 007640c0: or ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 007640c2: mov eax, ecx */ r_eax = r_ecx;
    /* 007640c4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007640c5: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x007640c5, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007640c5, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007640c7: xor dword ptr [ebx], ebp */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; W32(ad, r);  }
    /* 007640c9: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 007640cd: mov ecx, edx */ r_ecx = r_edx;
    /* 007640cf: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007640d2: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007640d4: ja 0x764078 */ if ((!fC&&!fZ)) goto L_00764078;
L_007640d6:; BB(0x007640d6);
    /* 007640d6: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 007640da: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007640dc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007640de: mov edi, ebp */ r_edi = r_ebp;
    /* 007640e0: lea edx, [ebp + 0x48] */ r_edx = (u32)(r_ebp+0x48u);
L_007640e3:; BB(0x007640e3);
    /* 007640e3: xor esi, dword ptr [ebp] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp)); u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007640e6: mov eax, esi */ r_eax = r_esi;
    /* 007640e8: shr eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007640eb: mov eax, dword ptr [ebp + eax*4 + 0x48] */ r_eax = R32((u32)(r_ebp+r_eax*4+0x48u));
    /* 007640ef: mov ebx, esi */ r_ebx = r_esi;
    /* 007640f1: shr ebx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 007640f4: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 007640f7: add eax, dword ptr [ebp + ebx*4 + 0x448] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_ebx*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007640fe: mov ebx, esi */ r_ebx = r_esi;
    /* 00764100: shr ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00764103: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 00764106: xor eax, dword ptr [ebp + ebx*4 + 0x848] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_ebx*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076410d: mov ebx, esi */ r_ebx = r_esi;
    /* 0076410f: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00764115: add eax, dword ptr [ebp + ebx*4 + 0xc48] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_ebx*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076411c: xor eax, dword ptr [ebp + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x4u)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076411f: xor ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00764121: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00764123: shr ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00764126: mov ebx, dword ptr [ebp + ebx*4 + 0x48] */ r_ebx = R32((u32)(r_ebp+r_ebx*4+0x48u));
    /* 0076412a: mov eax, ecx */ r_eax = r_ecx;
    /* 0076412c: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0076412f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00764132: add ebx, dword ptr [ebp + eax*4 + 0x448] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00764139: mov eax, ecx */ r_eax = r_ecx;
    /* 0076413b: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0076413e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00764141: xor ebx, dword ptr [ebp + eax*4 + 0x848] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00764148: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
    /* 0076414b: add ebx, dword ptr [ebp + eax*4 + 0xc48] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00764152: xor ebx, dword ptr [ebp + 8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00764155: xor esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00764157: mov ebx, esi */ r_ebx = r_esi;
    /* 00764159: shr ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0076415c: mov ebx, dword ptr [ebp + ebx*4 + 0x48] */ r_ebx = R32((u32)(r_ebp+r_ebx*4+0x48u));
    /* 00764160: mov eax, esi */ r_eax = r_esi;
    /* 00764162: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00764165: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00764168: add ebx, dword ptr [ebp + eax*4 + 0x448] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076416f: mov eax, esi */ r_eax = r_esi;
    /* 00764171: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00764174: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00764177: xor ebx, dword ptr [ebp + eax*4 + 0x848] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0076417e: mov eax, esi */ r_eax = r_esi;
    /* 00764180: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00764185: add ebx, dword ptr [ebp + eax*4 + 0xc48] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076418c: xor ebx, dword ptr [ebp + 0xc] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0076418f: xor ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00764191: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00764193: shr ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00764196: mov ebx, dword ptr [ebp + ebx*4 + 0x48] */ r_ebx = R32((u32)(r_ebp+r_ebx*4+0x48u));
    /* 0076419a: mov eax, ecx */ r_eax = r_ecx;
    /* 0076419c: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0076419f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007641a2: add ebx, dword ptr [ebp + eax*4 + 0x448] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007641a9: mov eax, ecx */ r_eax = r_ecx;
    /* 007641ab: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007641ae: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007641b1: xor ebx, dword ptr [ebp + eax*4 + 0x848] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007641b8: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
    /* 007641bb: add ebx, dword ptr [ebp + eax*4 + 0xc48] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007641c2: xor ebx, dword ptr [ebp + 0x10] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007641c5: xor esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007641c7: mov ebx, esi */ r_ebx = r_esi;
    /* 007641c9: shr ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 007641cc: mov ebx, dword ptr [ebp + ebx*4 + 0x48] */ r_ebx = R32((u32)(r_ebp+r_ebx*4+0x48u));
    /* 007641d0: mov eax, esi */ r_eax = r_esi;
    /* 007641d2: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007641d5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007641d8: add ebx, dword ptr [ebp + eax*4 + 0x448] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007641df: mov eax, esi */ r_eax = r_esi;
    /* 007641e1: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007641e4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007641e7: xor ebx, dword ptr [ebp + eax*4 + 0x848] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007641ee: mov eax, esi */ r_eax = r_esi;
    /* 007641f0: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007641f5: add ebx, dword ptr [ebp + eax*4 + 0xc48] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007641fc: xor ebx, dword ptr [ebp + 0x14] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007641ff: xor ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00764201: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00764203: shr ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00764206: mov ebx, dword ptr [ebp + ebx*4 + 0x48] */ r_ebx = R32((u32)(r_ebp+r_ebx*4+0x48u));
    /* 0076420a: mov eax, ecx */ r_eax = r_ecx;
    /* 0076420c: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0076420f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00764212: add ebx, dword ptr [ebp + eax*4 + 0x448] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00764219: mov eax, ecx */ r_eax = r_ecx;
    /* 0076421b: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0076421e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00764221: xor ebx, dword ptr [ebp + eax*4 + 0x848] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00764228: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
    /* 0076422b: add ebx, dword ptr [ebp + eax*4 + 0xc48] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00764232: xor ebx, dword ptr [ebp + 0x18] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00764235: xor esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00764237: mov ebx, esi */ r_ebx = r_esi;
    /* 00764239: shr ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0076423c: mov ebx, dword ptr [ebp + ebx*4 + 0x48] */ r_ebx = R32((u32)(r_ebp+r_ebx*4+0x48u));
    /* 00764240: mov eax, esi */ r_eax = r_esi;
    /* 00764242: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00764245: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00764248: add ebx, dword ptr [ebp + eax*4 + 0x448] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076424f: mov eax, esi */ r_eax = r_esi;
    /* 00764251: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00764254: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00764257: xor ebx, dword ptr [ebp + eax*4 + 0x848] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0076425e: mov eax, esi */ r_eax = r_esi;
    /* 00764260: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00764265: add ebx, dword ptr [ebp + eax*4 + 0xc48] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076426c: xor ebx, dword ptr [ebp + 0x1c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0x1cu)); u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0076426f: xor ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00764271: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00764273: shr ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00764276: mov ebx, dword ptr [ebp + ebx*4 + 0x48] */ r_ebx = R32((u32)(r_ebp+r_ebx*4+0x48u));
    /* 0076427a: mov eax, ecx */ r_eax = r_ecx;
    /* 0076427c: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0076427f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00764282: add ebx, dword ptr [ebp + eax*4 + 0x448] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00764289: mov eax, ecx */ r_eax = r_ecx;
    /* 0076428b: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0076428e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00764291: xor ebx, dword ptr [ebp + eax*4 + 0x848] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00764298: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
    /* 0076429b: add ebx, dword ptr [ebp + eax*4 + 0xc48] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007642a2: xor ebx, dword ptr [ebp + 0x20] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007642a5: xor esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007642a7: mov ebx, esi */ r_ebx = r_esi;
    /* 007642a9: shr ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 007642ac: mov ebx, dword ptr [ebp + ebx*4 + 0x48] */ r_ebx = R32((u32)(r_ebp+r_ebx*4+0x48u));
    /* 007642b0: mov eax, esi */ r_eax = r_esi;
    /* 007642b2: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007642b5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007642b8: add ebx, dword ptr [ebp + eax*4 + 0x448] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007642bf: mov eax, esi */ r_eax = r_esi;
    /* 007642c1: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007642c4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007642c7: xor ebx, dword ptr [ebp + eax*4 + 0x848] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007642ce: mov eax, esi */ r_eax = r_esi;
    /* 007642d0: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007642d5: add ebx, dword ptr [ebp + eax*4 + 0xc48] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007642dc: xor ebx, dword ptr [ebp + 0x24] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0x24u)); u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007642df: xor ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007642e1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007642e3: shr ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 007642e6: mov ebx, dword ptr [ebp + ebx*4 + 0x48] */ r_ebx = R32((u32)(r_ebp+r_ebx*4+0x48u));
    /* 007642ea: mov eax, ecx */ r_eax = r_ecx;
    /* 007642ec: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007642ef: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007642f2: add ebx, dword ptr [ebp + eax*4 + 0x448] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007642f9: mov eax, ecx */ r_eax = r_ecx;
    /* 007642fb: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007642fe: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00764301: xor ebx, dword ptr [ebp + eax*4 + 0x848] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00764308: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
    /* 0076430b: add ebx, dword ptr [ebp + eax*4 + 0xc48] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00764312: xor ebx, dword ptr [ebp + 0x28] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0x28u)); u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00764315: xor esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00764317: mov ebx, esi */ r_ebx = r_esi;
    /* 00764319: shr ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0076431c: mov ebx, dword ptr [ebp + ebx*4 + 0x48] */ r_ebx = R32((u32)(r_ebp+r_ebx*4+0x48u));
    /* 00764320: mov eax, esi */ r_eax = r_esi;
    /* 00764322: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00764325: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00764328: add ebx, dword ptr [ebp + eax*4 + 0x448] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076432f: mov eax, esi */ r_eax = r_esi;
    /* 00764331: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00764334: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00764337: xor ebx, dword ptr [ebp + eax*4 + 0x848] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0076433e: mov eax, esi */ r_eax = r_esi;
    /* 00764340: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00764345: add ebx, dword ptr [ebp + eax*4 + 0xc48] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076434c: xor ebx, dword ptr [ebp + 0x2c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0x2cu)); u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0076434f: xor ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00764351: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00764353: shr ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00764356: mov ebx, dword ptr [ebp + ebx*4 + 0x48] */ r_ebx = R32((u32)(r_ebp+r_ebx*4+0x48u));
    /* 0076435a: mov eax, ecx */ r_eax = r_ecx;
    /* 0076435c: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0076435f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00764362: add ebx, dword ptr [ebp + eax*4 + 0x448] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00764369: mov eax, ecx */ r_eax = r_ecx;
    /* 0076436b: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0076436e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00764371: xor ebx, dword ptr [ebp + eax*4 + 0x848] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00764378: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
    /* 0076437b: add ebx, dword ptr [ebp + eax*4 + 0xc48] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00764382: xor ebx, dword ptr [ebp + 0x30] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0x30u)); u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00764385: xor esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00764387: mov ebx, esi */ r_ebx = r_esi;
    /* 00764389: shr ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0076438c: mov ebx, dword ptr [ebp + ebx*4 + 0x48] */ r_ebx = R32((u32)(r_ebp+r_ebx*4+0x48u));
    /* 00764390: mov eax, esi */ r_eax = r_esi;
    /* 00764392: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00764395: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00764398: add ebx, dword ptr [ebp + eax*4 + 0x448] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076439f: mov eax, esi */ r_eax = r_esi;
    /* 007643a1: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007643a4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007643a7: xor ebx, dword ptr [ebp + eax*4 + 0x848] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007643ae: mov eax, esi */ r_eax = r_esi;
    /* 007643b0: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007643b5: add ebx, dword ptr [ebp + eax*4 + 0xc48] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007643bc: xor ebx, dword ptr [ebp + 0x34] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0x34u)); u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007643bf: xor ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007643c1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007643c3: shr ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 007643c6: mov ebx, dword ptr [ebp + ebx*4 + 0x48] */ r_ebx = R32((u32)(r_ebp+r_ebx*4+0x48u));
    /* 007643ca: mov eax, ecx */ r_eax = r_ecx;
    /* 007643cc: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007643cf: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007643d2: add ebx, dword ptr [ebp + eax*4 + 0x448] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007643d9: mov eax, ecx */ r_eax = r_ecx;
    /* 007643db: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007643de: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007643e1: xor ebx, dword ptr [ebp + eax*4 + 0x848] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007643e8: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
    /* 007643eb: add ebx, dword ptr [ebp + eax*4 + 0xc48] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+r_eax*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007643f2: xor ebx, dword ptr [ebp + 0x38] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0x38u)); u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007643f5: xor esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007643f7: mov eax, esi */ r_eax = r_esi;
    /* 007643f9: shr eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007643fc: mov eax, dword ptr [ebp + eax*4 + 0x48] */ r_eax = R32((u32)(r_ebp+r_eax*4+0x48u));
    /* 00764400: mov ebx, esi */ r_ebx = r_esi;
    /* 00764402: shr ebx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00764405: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 00764408: add eax, dword ptr [ebp + ebx*4 + 0x448] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_ebx*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076440f: mov ebx, esi */ r_ebx = r_esi;
    /* 00764411: shr ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00764414: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 00764417: xor eax, dword ptr [ebp + ebx*4 + 0x848] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_ebx*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076441e: mov ebx, esi */ r_ebx = r_esi;
    /* 00764420: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00764426: add eax, dword ptr [ebp + ebx*4 + 0xc48] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_ebx*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076442d: xor eax, dword ptr [ebp + 0x3c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x3cu)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00764430: xor eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00764432: mov ecx, eax */ r_ecx = r_eax;
    /* 00764434: shr ecx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00764437: mov ecx, dword ptr [ebp + ecx*4 + 0x48] */ r_ecx = R32((u32)(r_ebp+r_ecx*4+0x48u));
    /* 0076443b: mov ebx, eax */ r_ebx = r_eax;
    /* 0076443d: shr ebx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00764440: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 00764443: add ecx, dword ptr [ebp + ebx*4 + 0x448] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+r_ebx*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0076444a: mov ebx, eax */ r_ebx = r_eax;
    /* 0076444c: shr ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0076444f: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 00764452: xor ecx, dword ptr [ebp + ebx*4 + 0x848] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+r_ebx*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00764459: movzx ebx, al */ r_ebx = (u32)(u8)r_eax;
    /* 0076445c: add ecx, dword ptr [ebp + ebx*4 + 0xc48] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+r_ebx*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00764463: xor ecx, dword ptr [ebp + 0x40] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x40u)); u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00764466: xor ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00764468: mov esi, dword ptr [ebp + 0x44] */ r_esi = R32((u32)(r_ebp+0x44u));
    /* 0076446b: xor esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0076446d: mov dword ptr [edi], esi */ W32((u32)(r_edi), r_esi);
    /* 0076446f: mov dword ptr [edi + 4], ecx */ W32((u32)(r_edi+0x4u), r_ecx);
    /* 00764472: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00764475: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00764477: ja 0x7640e3 */ if ((!fC&&!fZ)) goto L_007640e3;
L_0076447d:; BB(0x0076447d);
    /* 0076447d: mov eax, ebp */ r_eax = r_ebp;
    /* 0076447f: lea edx, [ebp + 0x1000] */ r_edx = (u32)(r_ebp+0x1000u);
L_00764485:; BB(0x00764485);
    /* 00764485: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00764489: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0076448c: lea edi, [eax + 0x48] */ r_edi = (u32)(r_eax+0x48u);
    /* 0076448f: lea ebx, [eax + 0x448] */ r_ebx = (u32)(r_eax+0x448u);
L_00764495:; BB(0x00764495);
    /* 00764495: xor esi, dword ptr [ebp] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp)); u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00764498: mov eax, esi */ r_eax = r_esi;
    /* 0076449a: shr eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0076449d: mov eax, dword ptr [ebp + eax*4 + 0x48] */ r_eax = R32((u32)(r_ebp+r_eax*4+0x48u));
    /* 007644a1: mov edx, esi */ r_edx = r_esi;
    /* 007644a3: shr edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 007644a6: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 007644a9: add eax, dword ptr [ebp + edx*4 + 0x448] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_edx*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007644b0: mov edx, esi */ r_edx = r_esi;
    /* 007644b2: shr edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 007644b5: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 007644b8: xor eax, dword ptr [ebp + edx*4 + 0x848] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_edx*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007644bf: mov edx, esi */ r_edx = r_esi;
    /* 007644c1: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007644c7: add eax, dword ptr [ebp + edx*4 + 0xc48] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_edx*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007644ce: xor eax, dword ptr [ebp + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x4u)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007644d1: xor ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007644d3: mov edx, ecx */ r_edx = r_ecx;
    /* 007644d5: shr edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 007644d8: mov edx, dword ptr [ebp + edx*4 + 0x48] */ r_edx = R32((u32)(r_ebp+r_edx*4+0x48u));
    /* 007644dc: mov eax, ecx */ r_eax = r_ecx;
    /* 007644de: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007644e1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007644e4: add edx, dword ptr [ebp + eax*4 + 0x448] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007644eb: mov eax, ecx */ r_eax = r_ecx;
    /* 007644ed: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007644f0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007644f3: xor edx, dword ptr [ebp + eax*4 + 0x848] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007644fa: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
    /* 007644fd: add edx, dword ptr [ebp + eax*4 + 0xc48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00764504: xor edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00764507: xor esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00764509: mov edx, esi */ r_edx = r_esi;
    /* 0076450b: shr edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0076450e: mov edx, dword ptr [ebp + edx*4 + 0x48] */ r_edx = R32((u32)(r_ebp+r_edx*4+0x48u));
    /* 00764512: mov eax, esi */ r_eax = r_esi;
    /* 00764514: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00764517: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0076451a: add edx, dword ptr [ebp + eax*4 + 0x448] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00764521: mov eax, esi */ r_eax = r_esi;
    /* 00764523: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00764526: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00764529: xor edx, dword ptr [ebp + eax*4 + 0x848] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00764530: mov eax, esi */ r_eax = r_esi;
    /* 00764532: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00764537: add edx, dword ptr [ebp + eax*4 + 0xc48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0076453e: xor edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00764541: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00764543: mov edx, ecx */ r_edx = r_ecx;
    /* 00764545: shr edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00764548: mov edx, dword ptr [ebp + edx*4 + 0x48] */ r_edx = R32((u32)(r_ebp+r_edx*4+0x48u));
    /* 0076454c: mov eax, ecx */ r_eax = r_ecx;
    /* 0076454e: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00764551: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00764554: add edx, dword ptr [ebp + eax*4 + 0x448] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0076455b: mov eax, ecx */ r_eax = r_ecx;
    /* 0076455d: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00764560: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00764563: xor edx, dword ptr [ebp + eax*4 + 0x848] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0076456a: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
    /* 0076456d: add edx, dword ptr [ebp + eax*4 + 0xc48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00764574: xor edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00764577: xor esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00764579: mov edx, esi */ r_edx = r_esi;
    /* 0076457b: shr edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0076457e: mov edx, dword ptr [ebp + edx*4 + 0x48] */ r_edx = R32((u32)(r_ebp+r_edx*4+0x48u));
    /* 00764582: mov eax, esi */ r_eax = r_esi;
    /* 00764584: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00764587: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0076458a: add edx, dword ptr [ebp + eax*4 + 0x448] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00764591: mov eax, esi */ r_eax = r_esi;
    /* 00764593: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00764596: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00764599: xor edx, dword ptr [ebp + eax*4 + 0x848] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007645a0: mov eax, esi */ r_eax = r_esi;
    /* 007645a2: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007645a7: add edx, dword ptr [ebp + eax*4 + 0xc48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007645ae: xor edx, dword ptr [ebp + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007645b1: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007645b3: mov edx, ecx */ r_edx = r_ecx;
    /* 007645b5: shr edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 007645b8: mov edx, dword ptr [ebp + edx*4 + 0x48] */ r_edx = R32((u32)(r_ebp+r_edx*4+0x48u));
    /* 007645bc: mov eax, ecx */ r_eax = r_ecx;
    /* 007645be: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007645c1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007645c4: add edx, dword ptr [ebp + eax*4 + 0x448] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007645cb: mov eax, ecx */ r_eax = r_ecx;
    /* 007645cd: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007645d0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007645d3: xor edx, dword ptr [ebp + eax*4 + 0x848] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007645da: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
    /* 007645dd: add edx, dword ptr [ebp + eax*4 + 0xc48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007645e4: xor edx, dword ptr [ebp + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007645e7: xor esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007645e9: mov edx, esi */ r_edx = r_esi;
    /* 007645eb: shr edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 007645ee: mov edx, dword ptr [ebp + edx*4 + 0x48] */ r_edx = R32((u32)(r_ebp+r_edx*4+0x48u));
    /* 007645f2: mov eax, esi */ r_eax = r_esi;
    /* 007645f4: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007645f7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007645fa: add edx, dword ptr [ebp + eax*4 + 0x448] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00764601: mov eax, esi */ r_eax = r_esi;
    /* 00764603: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00764606: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00764609: xor edx, dword ptr [ebp + eax*4 + 0x848] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00764610: mov eax, esi */ r_eax = r_esi;
    /* 00764612: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00764617: add edx, dword ptr [ebp + eax*4 + 0xc48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0076461e: xor edx, dword ptr [ebp + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x1cu)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00764621: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00764623: mov edx, ecx */ r_edx = r_ecx;
    /* 00764625: shr edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00764628: mov edx, dword ptr [ebp + edx*4 + 0x48] */ r_edx = R32((u32)(r_ebp+r_edx*4+0x48u));
    /* 0076462c: mov eax, ecx */ r_eax = r_ecx;
    /* 0076462e: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00764631: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00764634: add edx, dword ptr [ebp + eax*4 + 0x448] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0076463b: mov eax, ecx */ r_eax = r_ecx;
    /* 0076463d: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00764640: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00764643: xor edx, dword ptr [ebp + eax*4 + 0x848] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0076464a: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
    /* 0076464d: add edx, dword ptr [ebp + eax*4 + 0xc48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00764654: xor edx, dword ptr [ebp + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00764657: xor esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00764659: mov edx, esi */ r_edx = r_esi;
    /* 0076465b: shr edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0076465e: mov edx, dword ptr [ebp + edx*4 + 0x48] */ r_edx = R32((u32)(r_ebp+r_edx*4+0x48u));
    /* 00764662: mov eax, esi */ r_eax = r_esi;
    /* 00764664: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00764667: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0076466a: add edx, dword ptr [ebp + eax*4 + 0x448] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00764671: mov eax, esi */ r_eax = r_esi;
    /* 00764673: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00764676: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00764679: xor edx, dword ptr [ebp + eax*4 + 0x848] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00764680: mov eax, esi */ r_eax = r_esi;
    /* 00764682: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00764687: add edx, dword ptr [ebp + eax*4 + 0xc48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0076468e: xor edx, dword ptr [ebp + 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x24u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00764691: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00764693: mov edx, ecx */ r_edx = r_ecx;
    /* 00764695: shr edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00764698: mov edx, dword ptr [ebp + edx*4 + 0x48] */ r_edx = R32((u32)(r_ebp+r_edx*4+0x48u));
    /* 0076469c: mov eax, ecx */ r_eax = r_ecx;
    /* 0076469e: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007646a1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007646a4: add edx, dword ptr [ebp + eax*4 + 0x448] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007646ab: mov eax, ecx */ r_eax = r_ecx;
    /* 007646ad: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007646b0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007646b3: xor edx, dword ptr [ebp + eax*4 + 0x848] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007646ba: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
    /* 007646bd: add edx, dword ptr [ebp + eax*4 + 0xc48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007646c4: xor edx, dword ptr [ebp + 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x28u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007646c7: xor esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007646c9: mov edx, esi */ r_edx = r_esi;
    /* 007646cb: shr edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 007646ce: mov edx, dword ptr [ebp + edx*4 + 0x48] */ r_edx = R32((u32)(r_ebp+r_edx*4+0x48u));
    /* 007646d2: mov eax, esi */ r_eax = r_esi;
    /* 007646d4: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007646d7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007646da: add edx, dword ptr [ebp + eax*4 + 0x448] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007646e1: mov eax, esi */ r_eax = r_esi;
    /* 007646e3: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007646e6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007646e9: xor edx, dword ptr [ebp + eax*4 + 0x848] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007646f0: mov eax, esi */ r_eax = r_esi;
    /* 007646f2: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007646f7: add edx, dword ptr [ebp + eax*4 + 0xc48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007646fe: xor edx, dword ptr [ebp + 0x2c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x2cu)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00764701: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00764703: mov edx, ecx */ r_edx = r_ecx;
    /* 00764705: shr edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00764708: mov edx, dword ptr [ebp + edx*4 + 0x48] */ r_edx = R32((u32)(r_ebp+r_edx*4+0x48u));
    /* 0076470c: mov eax, ecx */ r_eax = r_ecx;
    /* 0076470e: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00764711: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00764714: add edx, dword ptr [ebp + eax*4 + 0x448] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0076471b: mov eax, ecx */ r_eax = r_ecx;
    /* 0076471d: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00764720: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00764723: xor edx, dword ptr [ebp + eax*4 + 0x848] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0076472a: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
    /* 0076472d: add edx, dword ptr [ebp + eax*4 + 0xc48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00764734: xor edx, dword ptr [ebp + 0x30] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x30u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00764737: xor esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00764739: mov edx, esi */ r_edx = r_esi;
    /* 0076473b: shr edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0076473e: mov edx, dword ptr [ebp + edx*4 + 0x48] */ r_edx = R32((u32)(r_ebp+r_edx*4+0x48u));
    /* 00764742: mov eax, esi */ r_eax = r_esi;
    /* 00764744: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00764747: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0076474a: add edx, dword ptr [ebp + eax*4 + 0x448] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00764751: mov eax, esi */ r_eax = r_esi;
    /* 00764753: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00764756: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00764759: xor edx, dword ptr [ebp + eax*4 + 0x848] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00764760: mov eax, esi */ r_eax = r_esi;
    /* 00764762: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00764767: add edx, dword ptr [ebp + eax*4 + 0xc48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0076476e: xor edx, dword ptr [ebp + 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x34u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00764771: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00764773: mov edx, ecx */ r_edx = r_ecx;
    /* 00764775: shr edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00764778: mov edx, dword ptr [ebp + edx*4 + 0x48] */ r_edx = R32((u32)(r_ebp+r_edx*4+0x48u));
    /* 0076477c: mov eax, ecx */ r_eax = r_ecx;
    /* 0076477e: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00764781: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00764784: add edx, dword ptr [ebp + eax*4 + 0x448] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0076478b: mov eax, ecx */ r_eax = r_ecx;
    /* 0076478d: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00764790: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00764793: xor edx, dword ptr [ebp + eax*4 + 0x848] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0076479a: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
    /* 0076479d: add edx, dword ptr [ebp + eax*4 + 0xc48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007647a4: xor edx, dword ptr [ebp + 0x38] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x38u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007647a7: xor esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007647a9: mov eax, esi */ r_eax = r_esi;
    /* 007647ab: shr eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007647ae: mov eax, dword ptr [ebp + eax*4 + 0x48] */ r_eax = R32((u32)(r_ebp+r_eax*4+0x48u));
    /* 007647b2: mov edx, esi */ r_edx = r_esi;
    /* 007647b4: shr edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 007647b7: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 007647ba: add eax, dword ptr [ebp + edx*4 + 0x448] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_edx*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007647c1: mov edx, esi */ r_edx = r_esi;
    /* 007647c3: shr edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 007647c6: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 007647c9: xor eax, dword ptr [ebp + edx*4 + 0x848] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_edx*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007647d0: mov edx, esi */ r_edx = r_esi;
    /* 007647d2: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007647d8: add eax, dword ptr [ebp + edx*4 + 0xc48] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_edx*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007647df: xor eax, dword ptr [ebp + 0x3c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x3cu)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007647e2: xor eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007647e4: mov ecx, eax */ r_ecx = r_eax;
    /* 007647e6: shr ecx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007647e9: mov ecx, dword ptr [ebp + ecx*4 + 0x48] */ r_ecx = R32((u32)(r_ebp+r_ecx*4+0x48u));
    /* 007647ed: mov edx, eax */ r_edx = r_eax;
    /* 007647ef: shr edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 007647f2: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 007647f5: add ecx, dword ptr [ebp + edx*4 + 0x448] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+r_edx*4+0x448u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007647fc: mov edx, eax */ r_edx = r_eax;
    /* 007647fe: shr edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00764801: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00764804: xor ecx, dword ptr [ebp + edx*4 + 0x848] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+r_edx*4+0x848u)); u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076480b: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0076480e: add ecx, dword ptr [ebp + edx*4 + 0xc48] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+r_edx*4+0xc48u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00764815: xor ecx, dword ptr [ebp + 0x40] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x40u)); u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00764818: xor ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076481a: mov esi, dword ptr [ebp + 0x44] */ r_esi = R32((u32)(r_ebp+0x44u));
    /* 0076481d: xor esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0076481f: mov dword ptr [edi], esi */ W32((u32)(r_edi), r_esi);
    /* 00764821: mov dword ptr [edi + 4], ecx */ W32((u32)(r_edi+0x4u), r_ecx);
    /* 00764824: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00764827: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00764829: ja 0x764495 */ if ((!fC&&!fZ)) goto L_00764495;
L_0076482f:; BB(0x0076482f);
    /* 0076482f: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00764833: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00764836: add eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076483b: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076483d: jg 0x764485 */ if ((!fZ&&fS==fO)) goto L_00764485;
L_00764843:; BB(0x00764843);
    /* 00764843: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00764846: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00764847: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00764848: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00764849: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076484a: ret 8 */ FN_RET(0x00763fd0); r_esp += 12; return;
}

