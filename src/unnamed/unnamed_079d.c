#include "protos.h"

void f_0079d1cc(void)
{
    FN_ENTER(0x0079d1cc);
    /* 0079d1cc: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 0079d1d2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079d1d4: je 0x79d1e5 */ if (fZ) goto L_0079d1e5;
L_0079d1d6:; BB(0x0079d1d6);
    /* 0079d1d6: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79d1dbu); f_007127b0();
    /* 0079d1db: mov dword ptr [0xaab264], 0 */ W32((u32)(0xaab264u), 0x0u);
L_0079d1e5:; BB(0x0079d1e5);
    /* 0079d1e5: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0079d1ea: call 0x8181c4 */ r_esp -= 4; W32(r_esp, 0x79d1efu); f_008181c4();
    /* 0079d1ef: ret  */ FN_RET(0x0079d1cc); r_esp += 4; return;
}

void f_0079d1f0(void)
{
    FN_ENTER(0x0079d1f0);
    /* 0079d1f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079d1f1: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0079d1f5: cmp eax, 0x1b */ {  u32 a = r_eax; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0079d1f8: ja 0x79d2c9 */ if ((!fC&&!fZ)) goto L_0079d2c9;
L_0079d1fe:; BB(0x0079d1fe);
    /* 0079d1fe: mov eax, dword ptr [eax*4 + 0x97cc60] */ r_eax = R32((u32)(r_eax*4+0x97cc60u));
    /* 0079d205: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0079d2c9:; BB(0x0079d2c9);
    /* 0079d2c9: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0079d2cb: call 0x7a0a7c */ r_esp -= 4; W32(r_esp, 0x79d2d0u); f_007a0a7c();
    /* 0079d2d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079d2d1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079d2d2: ret  */ FN_RET(0x0079d1f0); r_esp += 4; return;
}

void f_0079d207(void)
{
    FN_ENTER(0x0079d207);
    /* 0079d207: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0079d209: call 0x7a0a7c */ r_esp -= 4; W32(r_esp, 0x79d20eu); f_007a0a7c();
    /* 0079d20e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079d20f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079d210: ret  */ FN_RET(0x0079d207); r_esp += 4; return;
}

void f_0079d211(void)
{
    FN_ENTER(0x0079d211);
    /* 0079d211: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0079d213: call 0x7a0a7c */ r_esp -= 4; W32(r_esp, 0x79d218u); f_007a0a7c();
    /* 0079d218: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079d219: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079d21a: ret  */ FN_RET(0x0079d211); r_esp += 4; return;
}

void f_0079d21b(void)
{
    FN_ENTER(0x0079d21b);
    /* 0079d21b: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 0079d21d: call 0x7a0a7c */ r_esp -= 4; W32(r_esp, 0x79d222u); f_007a0a7c();
    /* 0079d222: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079d223: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079d224: ret  */ FN_RET(0x0079d21b); r_esp += 4; return;
}

void f_0079d225(void)
{
    FN_ENTER(0x0079d225);
    /* 0079d225: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0079d227: call 0x7a0a7c */ r_esp -= 4; W32(r_esp, 0x79d22cu); f_007a0a7c();
    /* 0079d22c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079d22d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079d22e: ret  */ FN_RET(0x0079d225); r_esp += 4; return;
}

void f_0079d22f(void)
{
    FN_ENTER(0x0079d22f);
    /* 0079d22f: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0079d231: call 0x7a0a7c */ r_esp -= 4; W32(r_esp, 0x79d236u); f_007a0a7c();
    /* 0079d236: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079d237: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079d238: ret  */ FN_RET(0x0079d22f); r_esp += 4; return;
}

void f_0079d239(void)
{
    FN_ENTER(0x0079d239);
    /* 0079d239: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d23b: call 0x7a0a7c */ r_esp -= 4; W32(r_esp, 0x79d240u); f_007a0a7c();
    /* 0079d240: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079d241: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079d242: ret  */ FN_RET(0x0079d239); r_esp += 4; return;
}

void f_0079d243(void)
{
    FN_ENTER(0x0079d243);
    /* 0079d243: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0079d245: call 0x7a0a7c */ r_esp -= 4; W32(r_esp, 0x79d24au); f_007a0a7c();
    /* 0079d24a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079d24b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079d24c: ret  */ FN_RET(0x0079d243); r_esp += 4; return;
}

void f_0079d24d(void)
{
    FN_ENTER(0x0079d24d);
    /* 0079d24d: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d24f: call 0x7a0a7c */ r_esp -= 4; W32(r_esp, 0x79d254u); f_007a0a7c();
    /* 0079d254: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079d255: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079d256: ret  */ FN_RET(0x0079d24d); r_esp += 4; return;
}

void f_0079d257(void)
{
    FN_ENTER(0x0079d257);
    /* 0079d257: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d259: call 0x7a0a7c */ r_esp -= 4; W32(r_esp, 0x79d25eu); f_007a0a7c();
    /* 0079d25e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079d25f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079d260: ret  */ FN_RET(0x0079d257); r_esp += 4; return;
}

void f_0079d261(void)
{
    FN_ENTER(0x0079d261);
    /* 0079d261: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d263: call 0x7a0a7c */ r_esp -= 4; W32(r_esp, 0x79d268u); f_007a0a7c();
    /* 0079d268: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079d269: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079d26a: ret  */ FN_RET(0x0079d261); r_esp += 4; return;
}

void f_0079d26b(void)
{
    FN_ENTER(0x0079d26b);
    /* 0079d26b: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0079d26d: call 0x7a0a7c */ r_esp -= 4; W32(r_esp, 0x79d272u); f_007a0a7c();
    /* 0079d272: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079d273: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079d274: ret  */ FN_RET(0x0079d26b); r_esp += 4; return;
}

void f_0079d275(void)
{
    FN_ENTER(0x0079d275);
    /* 0079d275: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0079d277: call 0x7a0a7c */ r_esp -= 4; W32(r_esp, 0x79d27cu); f_007a0a7c();
    /* 0079d27c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079d27d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079d27e: ret  */ FN_RET(0x0079d275); r_esp += 4; return;
}

void f_0079d27f(void)
{
    FN_ENTER(0x0079d27f);
    /* 0079d27f: push 0x53 */ { u32 v = 0x53u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d281: call 0x7a0a7c */ r_esp -= 4; W32(r_esp, 0x79d286u); f_007a0a7c();
    /* 0079d286: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079d287: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079d288: ret  */ FN_RET(0x0079d27f); r_esp += 4; return;
}

void f_0079d289(void)
{
    FN_ENTER(0x0079d289);
    /* 0079d289: push 0x52 */ { u32 v = 0x52u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d28b: call 0x7a0a7c */ r_esp -= 4; W32(r_esp, 0x79d290u); f_007a0a7c();
    /* 0079d290: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079d291: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079d292: ret  */ FN_RET(0x0079d289); r_esp += 4; return;
}

void f_0079d293(void)
{
    FN_ENTER(0x0079d293);
    /* 0079d293: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079d299: call 0x7d7be0 */ r_esp -= 4; W32(r_esp, 0x79d29eu); f_007d7be0();
    /* 0079d29e: jmp 0x79d2d1 */ goto L_0079d2d1;
L_0079d2d1:; BB(0x0079d2d1);
    /* 0079d2d1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079d2d2: ret  */ FN_RET(0x0079d293); r_esp += 4; return;
}

void f_0079d2a0(void)
{
    FN_ENTER(0x0079d2a0);
    /* 0079d2a0: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0079d2a5: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x79d2aau); f_006c1bcc();
    /* 0079d2aa: mov esi, eax */ r_esi = r_eax;
    /* 0079d2ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079d2af: call 0x79b844 */ r_esp -= 4; W32(r_esp, 0x79d2b4u); f_0079b844();
    /* 0079d2b4: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079d2ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079d2bb: add esi, 0x370 */ {  u32 a = r_esi; u32 b = 0x370u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0079d2c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079d2c2: call 0x7daf24 */ r_esp -= 4; W32(r_esp, 0x79d2c7u); f_007daf24();
    /* 0079d2c7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079d2c8: ret  */ FN_RET(0x0079d2a0); r_esp += 4; return;
}

void f_0079d2c9(void)
{
    FN_ENTER(0x0079d2c9);
    /* 0079d2c9: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0079d2cb: call 0x7a0a7c */ r_esp -= 4; W32(r_esp, 0x79d2d0u); f_007a0a7c();
    /* 0079d2d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079d2d1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079d2d2: ret  */ FN_RET(0x0079d2c9); r_esp += 4; return;
}

void f_0079d2d4(void)
{
    FN_ENTER(0x0079d2d4);
    /* 0079d2d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079d2d5: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0079d2d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079d2db: je 0x79d311 */ if (fZ) goto L_0079d311;
L_0079d2dd:; BB(0x0079d2dd);
    /* 0079d2dd: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079d2e3: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x79d2e8u); f_0068d5a8();
    /* 0079d2e8: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0079d2ed: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x79d2f2u); f_006c1bcc();
    /* 0079d2f2: mov edi, eax */ r_edi = r_eax;
    /* 0079d2f4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079d2f7: call 0x79b844 */ r_esp -= 4; W32(r_esp, 0x79d2fcu); f_0079b844();
    /* 0079d2fc: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079d302: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079d303: add edi, 0x370 */ {  u32 a = r_edi; u32 b = 0x370u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079d309: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079d30a: call 0x7daf24 */ r_esp -= 4; W32(r_esp, 0x79d30fu); f_007daf24();
    /* 0079d30f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079d310: ret  */ FN_RET(0x0079d2d4); r_esp += 4; return;
L_0079d311:; BB(0x0079d311);
    /* 0079d311: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d313: call 0x7a0a7c */ r_esp -= 4; W32(r_esp, 0x79d318u); f_007a0a7c();
    /* 0079d318: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079d319: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079d31a: ret  */ FN_RET(0x0079d2d4); r_esp += 4; return;
}

void f_0079d31c(void) /* sub_79D31C */
{
    FN_ENTER(0x0079d31c);
    /* 0079d31c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079d31d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079d31e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079d31f: sub esp, 0x74c */ {  u32 a = r_esp; u32 b = 0x74cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079d325: mov eax, 8 */ r_eax = 0x8u;
    /* 0079d32a: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 0079d32e: mov word ptr [esp + 0x78], ax */ W16((u32)(r_esp+0x78u), (u16)r_eax);
    /* 0079d333: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0079d335: mov byte ptr [esp + 2], dl */ W8((u32)(r_esp+0x2u), (u8)r_edx);
    /* 0079d339: mov byte ptr [esp + 3], dl */ W8((u32)(r_esp+0x3u), (u8)r_edx);
    /* 0079d33d: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0079d341: mov byte ptr [esp + 0x7a], dl */ W8((u32)(r_esp+0x7au), (u8)r_edx);
    /* 0079d345: mov byte ptr [esp + 0x7b], dl */ W8((u32)(r_esp+0x7bu), (u8)r_edx);
    /* 0079d349: mov dword ptr [esp + 0x7c], edx */ W32((u32)(r_esp+0x7cu), r_edx);
    /* 0079d34d: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0079d352: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x79d357u); f_006c1bd4();
    /* 0079d357: mov ebp, eax */ r_ebp = r_eax;
    /* 0079d359: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0079d35b: mov dword ptr [esp + 0x484], edx */ W32((u32)(r_esp+0x484u), r_edx);
    /* 0079d362: mov dword ptr [esp + 0x488], edx */ W32((u32)(r_esp+0x488u), r_edx);
    /* 0079d369: mov dword ptr [esp + 0x48c], edx */ W32((u32)(r_esp+0x48cu), r_edx);
    /* 0079d370: mov dword ptr [esp + 0x490], edx */ W32((u32)(r_esp+0x490u), r_edx);
    /* 0079d377: mov dword ptr [esp + 0x494], edx */ W32((u32)(r_esp+0x494u), r_edx);
    /* 0079d37e: mov dword ptr [esp + 0x498], edx */ W32((u32)(r_esp+0x498u), r_edx);
    /* 0079d385: push 0x40000 */ { u32 v = 0x40000u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d38a: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079d390: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x79d395u); f_007be19c();
    /* 0079d395: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079d398: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079d39a: je 0x79d3a9 */ if (fZ) goto L_0079d3a9;
L_0079d39c:; BB(0x0079d39c);
    /* 0079d39c: mov dword ptr [esp + 0x480], 1 */ W32((u32)(r_esp+0x480u), 0x1u);
    /* 0079d3a7: jmp 0x79d3b4 */ goto L_0079d3b4;
L_0079d3a9:; BB(0x0079d3a9);
    /* 0079d3a9: mov dword ptr [esp + 0x480], 0 */ W32((u32)(r_esp+0x480u), 0x0u);
L_0079d3b4:; BB(0x0079d3b4);
    /* 0079d3b4: lea edx, [esp + 0x480] */ r_edx = (u32)(r_esp+0x480u);
    /* 0079d3bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079d3bc: lea ecx, [ebp + 0x2944] */ r_ecx = (u32)(r_ebp+0x2944u);
    /* 0079d3c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0079d3c3: call 0x77f060 */ r_esp -= 4; W32(r_esp, 0x79d3c8u); f_0077f060();
    /* 0079d3c8: lea edx, [esp + 0x4a0] */ r_edx = (u32)(r_esp+0x4a0u);
    /* 0079d3cf: push 0x158 */ { u32 v = 0x158u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d3d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d3d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079d3d7: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x79d3dcu); f_0086b688();
    /* 0079d3dc: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079d3df: call 0x78e050 */ r_esp -= 4; W32(r_esp, 0x79d3e4u); f_0078e050();
    /* 0079d3e4: lea edx, [esp + 0x498] */ r_edx = (u32)(r_esp+0x498u);
    /* 0079d3eb: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 0079d3f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079d3f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079d3f2: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x79d3f7u); f_00857dec();
    /* 0079d3f7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0079d3f9: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0079d3fd: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0079d401: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0079d405: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0079d409: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0079d40d: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0079d411: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0079d415: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0079d419: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0079d41d: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0079d421: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 0079d425: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0079d429: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0079d42d: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0079d431: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 0079d435: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 0079d439: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 0079d43d: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 0079d441: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 0079d445: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 0079d449: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 0079d44d: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 0079d451: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 0079d455: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 0079d459: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 0079d45d: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 0079d461: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 0079d465: mov dword ptr [esp + 0x78], edx */ W32((u32)(r_esp+0x78u), r_edx);
    /* 0079d469: mov dword ptr [esp + 0x7c], edx */ W32((u32)(r_esp+0x7cu), r_edx);
    /* 0079d46d: mov dword ptr [esp + 0x80], edx */ W32((u32)(r_esp+0x80u), r_edx);
    /* 0079d474: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0079d478: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079d479: call 0x782708 */ r_esp -= 4; W32(r_esp, 0x79d47eu); f_00782708();
    /* 0079d47e: lea edx, [esp + 0x88] */ r_edx = (u32)(r_esp+0x88u);
    /* 0079d485: push 0x408 */ { u32 v = 0x408u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d48a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d48c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079d48d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x79d492u); f_0086b688();
    /* 0079d492: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079d495: call 0x77a584 */ r_esp -= 4; W32(r_esp, 0x79d49au); f_0077a584();
    /* 0079d49a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079d49c: je 0x79d4c1 */ if (fZ) goto L_0079d4c1;
L_0079d49e:; BB(0x0079d49e);
    /* 0079d49e: mov dword ptr [esp + 0x7c], 1 */ W32((u32)(r_esp+0x7cu), 0x1u);
    /* 0079d4a6: call 0x77a5b0 */ r_esp -= 4; W32(r_esp, 0x79d4abu); f_0077a5b0();
    /* 0079d4ab: lea edx, [esp + 0x80] */ r_edx = (u32)(r_esp+0x80u);
    /* 0079d4b2: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d4b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079d4b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079d4b9: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x79d4beu); f_00857dec();
    /* 0079d4be: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0079d4c1:; BB(0x0079d4c1);
    /* 0079d4c1: lea edx, [esp + 0x5f0] */ r_edx = (u32)(r_esp+0x5f0u);
    /* 0079d4c8: push 0x15c */ { u32 v = 0x15cu; r_esp -= 4; W32(r_esp, v); }
    /* 0079d4cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d4cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079d4d0: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x79d4d5u); f_0086b688();
    /* 0079d4d5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079d4d8: lea edi, [esp + 0x5f4] */ r_edi = (u32)(r_esp+0x5f4u);
    /* 0079d4df: lea esi, [ebp + 0x27dc] */ r_esi = (u32)(r_ebp+0x27dcu);
    /* 0079d4e5: mov ecx, 0x140 */ r_ecx = 0x140u;
    /* 0079d4ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0079d4eb: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0079d4ee: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0079d4f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079d4f1: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0079d4f4: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0079d4f6: movzx edx, word ptr [ebp + 0x27c0] */ r_edx = (u32)R16((u32)(r_ebp+0x27c0u));
    /* 0079d4fd: movzx ecx, word ptr [ebp + 0x27c2] */ r_ecx = (u32)R16((u32)(r_ebp+0x27c2u));
    /* 0079d504: movzx esi, word ptr [ebp + 0x27c4] */ r_esi = (u32)R16((u32)(r_ebp+0x27c4u));
    /* 0079d50b: movzx edi, word ptr [ebp + 0x27c6] */ r_edi = (u32)R16((u32)(r_ebp+0x27c6u));
    /* 0079d512: mov eax, dword ptr [ebp + 0x27d4] */ r_eax = R32((u32)(r_ebp+0x27d4u));
    /* 0079d518: mov word ptr [esp + 0x734], dx */ W16((u32)(r_esp+0x734u), (u16)r_edx);
    /* 0079d520: movzx edx, word ptr [ebp + 0x27c8] */ r_edx = (u32)R16((u32)(r_ebp+0x27c8u));
    /* 0079d527: mov word ptr [esp + 0x736], cx */ W16((u32)(r_esp+0x736u), (u16)r_ecx);
    /* 0079d52f: mov word ptr [esp + 0x738], si */ W16((u32)(r_esp+0x738u), (u16)r_esi);
    /* 0079d537: mov word ptr [esp + 0x73a], di */ W16((u32)(r_esp+0x73au), (u16)r_edi);
    /* 0079d53f: mov word ptr [esp + 0x73c], dx */ W16((u32)(r_esp+0x73cu), (u16)r_edx);
    /* 0079d547: movzx edx, word ptr [ebp + 0x27ca] */ r_edx = (u32)R16((u32)(r_ebp+0x27cau));
    /* 0079d54e: mov word ptr [esp + 0x73e], dx */ W16((u32)(r_esp+0x73eu), (u16)r_edx);
    /* 0079d556: movzx edx, word ptr [ebp + 0x27cc] */ r_edx = (u32)R16((u32)(r_ebp+0x27ccu));
    /* 0079d55d: mov word ptr [esp + 0x740], dx */ W16((u32)(r_esp+0x740u), (u16)r_edx);
    /* 0079d565: mov edx, dword ptr [ebp + 0x27d0] */ r_edx = R32((u32)(r_ebp+0x27d0u));
    /* 0079d56b: mov dword ptr [esp + 0x744], edx */ W32((u32)(r_esp+0x744u), r_edx);
    /* 0079d572: mov dword ptr [esp + 0x748], eax */ W32((u32)(r_esp+0x748u), r_eax);
    /* 0079d579: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0079d57e: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x79d583u); f_006c1bcc();
    /* 0079d583: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079d584: lea ecx, [esp + 0x5f0] */ r_ecx = (u32)(r_esp+0x5f0u);
    /* 0079d58b: lea edi, [esp + 0x480] */ r_edi = (u32)(r_esp+0x480u);
    /* 0079d592: lea esi, [esp] */ r_esi = (u32)(r_esp);
    /* 0079d595: lea ebp, [esp + 0x78] */ r_ebp = (u32)(r_esp+0x78u);
    /* 0079d599: lea edx, [esp + 0x498] */ r_edx = (u32)(r_esp+0x498u);
    /* 0079d5a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079d5a1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079d5a2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079d5a3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079d5a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0079d5a5: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079d5ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079d5ac: call 0x7e4c60 */ r_esp -= 4; W32(r_esp, 0x79d5b1u); f_007e4c60();
    /* 0079d5b1: add esp, 0x74c */ {  u32 a = r_esp; u32 b = 0x74cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079d5b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079d5b8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079d5b9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079d5ba: ret  */ FN_RET(0x0079d31c); r_esp += 4; return;
}

void f_0079d5bc(void) /* sub_79D5BC */
{
    FN_ENTER(0x0079d5bc);
    /* 0079d5bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079d5bd: mov ebp, esp */ r_ebp = r_esp;
    /* 0079d5bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0079d5c1: push 0x8f57c0 */ { u32 v = 0x8f57c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d5c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0079d5cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079d5cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0079d5d4: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079d5d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0079d5da: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0079d5dd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0079d5e0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0079d5e3: mov edx, dword ptr [0xaab268] */ r_edx = R32((u32)(0xaab268u));
    /* 0079d5e9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079d5eb: je 0x79d604 */ if (fZ) goto L_0079d604;
L_0079d5ed:; BB(0x0079d5ed);
    /* 0079d5ed: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0079d5f1: mov dword ptr [0xaab268], 0 */ W32((u32)(0xaab268u), 0x0u);
    /* 0079d5fb: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079d600: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0079d604:; BB(0x0079d604);
    /* 0079d604: push dword ptr [0x9ff4f4] */ { u32 v = R32((u32)(0x9ff4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079d60a: call 0x73fdc4 */ r_esp -= 4; W32(r_esp, 0x79d60fu); f_0073fdc4();
    /* 0079d60f: mov ecx, eax */ r_ecx = r_eax;
    /* 0079d611: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079d614: mov dword ptr [0xaab268], ecx */ W32((u32)(0xaab268u), r_ecx);
    /* 0079d61a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0079d61c:; BB(0x0079d61c);
    /* 0079d61c: cmp ebx, dword ptr [ebp + 8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079d61f: jge 0x79d694 */ if ((fS==fO)) goto L_0079d694;
L_0079d621:; BB(0x0079d621);
    /* 0079d621: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0079d624: lea eax, [ebx + ebx*4] */ r_eax = (u32)(r_ebx+r_ebx*4);
    /* 0079d627: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079d629: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079d62b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079d62d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079d62f: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0079d631: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079d633: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079d635: lea esi, [edx + eax] */ r_esi = (u32)(r_edx+r_eax);
    /* 0079d638: movzx esi, byte ptr [esi + 9] */ r_esi = (u32)R8((u32)(r_esi+0x9u));
    /* 0079d63c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079d63e: je 0x79d679 */ if (fZ) goto L_0079d679;
L_0079d640:; BB(0x0079d640);
    /* 0079d640: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079d643: jne 0x79d657 */ if (!fZ) goto L_0079d657;
L_0079d645:; BB(0x0079d645);
    /* 0079d645: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0079d648: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079d649: lea esi, [edx + eax + 0x10] */ r_esi = (u32)(r_edx+r_eax+0x10u);
    /* 0079d64d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079d64e: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d650: call 0x740084 */ r_esp -= 4; W32(r_esp, 0x79d655u); f_00740084();
    /* 0079d655: jmp 0x79d689 */ goto L_0079d689;
L_0079d657:; BB(0x0079d657);
    /* 0079d657: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0079d65a: lea edx, [edx + eax + 0x10] */ r_edx = (u32)(r_edx+r_eax+0x10u);
    /* 0079d65e: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079d661: jne 0x79d66e */ if (!fZ) goto L_0079d66e;
L_0079d663:; BB(0x0079d663);
    /* 0079d663: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079d664: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079d665: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0079d667: call 0x740084 */ r_esp -= 4; W32(r_esp, 0x79d66cu); f_00740084();
    /* 0079d66c: jmp 0x79d689 */ goto L_0079d689;
L_0079d66e:; BB(0x0079d66e);
    /* 0079d66e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079d66f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079d670: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d672: call 0x740084 */ r_esp -= 4; W32(r_esp, 0x79d677u); f_00740084();
    /* 0079d677: jmp 0x79d689 */ goto L_0079d689;
L_0079d679:; BB(0x0079d679);
    /* 0079d679: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0079d67c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079d67d: lea esi, [edx + eax + 0x10] */ r_esi = (u32)(r_edx+r_eax+0x10u);
    /* 0079d681: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079d682: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d684: call 0x740084 */ r_esp -= 4; W32(r_esp, 0x79d689u); f_00740084();
L_0079d689:; BB(0x0079d689);
    /* 0079d689: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 0079d68f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079d692: jmp 0x79d61c */ goto L_0079d61c;
L_0079d694:; BB(0x0079d694);
    /* 0079d694: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x79d699u); f_00737cdc();
    /* 0079d699: mov edx, dword ptr [0xaab270] */ r_edx = R32((u32)(0xaab270u));
    /* 0079d69f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079d6a1: je 0x79d6ba */ if (fZ) goto L_0079d6ba;
L_0079d6a3:; BB(0x0079d6a3);
    /* 0079d6a3: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0079d6a7: mov dword ptr [0xaab270], 0 */ W32((u32)(0xaab270u), 0x0u);
    /* 0079d6b1: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079d6b6: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0079d6ba:; BB(0x0079d6ba);
    /* 0079d6ba: mov dword ptr [ebp - 0x30], 0x43700000 */ W32((u32)(r_ebp+0xffffffd0u), 0x43700000u);
    /* 0079d6c1: push 0xdb */ { u32 v = 0xdbu; r_esp -= 4; W32(r_esp, v); }
    /* 0079d6c6: mov dword ptr [ebp - 0x2c], 0x433c0000 */ W32((u32)(r_ebp+0xffffffd4u), 0x433c0000u);
    /* 0079d6cd: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x79d6d2u); f_0073ec50();
    /* 0079d6d2: lea edx, [ebp - 0x30] */ r_edx = (u32)(r_ebp+0xffffffd0u);
    /* 0079d6d5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d6d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079d6d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079d6d9: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x79d6deu); f_0073a8dc();
    /* 0079d6de: mov dword ptr [0xaab270], eax */ W32((u32)(0xaab270u), r_eax);
    /* 0079d6e3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0079d6e6: mov edi, dword ptr [eax + 0x130] */ r_edi = R32((u32)(r_eax+0x130u));
    /* 0079d6ec: mov esi, dword ptr [eax + 0x134] */ r_esi = R32((u32)(r_eax+0x134u));
    /* 0079d6f2: lea ecx, [eax + 0x138] */ r_ecx = (u32)(r_eax+0x138u);
    /* 0079d6f8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0079d6fa: mov ebx, dword ptr [ecx + 4] */ r_ebx = R32((u32)(r_ecx+0x4u));
    /* 0079d6fd: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0079d700: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 0079d703: push dword ptr [ebp - 0x34] */ { u32 v = R32((u32)(r_ebp+0xffffffccu)); r_esp -= 4; W32(r_esp, v); }
    /* 0079d706: push dword ptr [ebp - 0x38] */ { u32 v = R32((u32)(r_ebp+0xffffffc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079d709: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079d70a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079d70b: call 0x6c0114 */ r_esp -= 4; W32(r_esp, 0x79d710u); f_006c0114();
    /* 0079d710: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0079d717: push 0x410 */ { u32 v = 0x410u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d71c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x79d721u); f_008581c5();
    /* 0079d721: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0079d724: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079d727: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0079d72a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079d72c: je 0x79d7a8 */ if (fZ) goto L_0079d7a8;
L_0079d72e:; BB(0x0079d72e);
    /* 0079d72e: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0079d735: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0079d73c: mov ecx, eax */ r_ecx = r_eax;
    /* 0079d73e: call 0x6daefc */ r_esp -= 4; W32(r_esp, 0x79d743u); f_006daefc();
    /* 0079d743: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0079d74a:; BB(0x0079d74a);
    /* 0079d74a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0079d751: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0079d754: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0079d757: lea edx, [eax + 0x50] */ r_edx = (u32)(r_eax+0x50u);
    /* 0079d75a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079d75b: call 0x6db7d0 */ r_esp -= 4; W32(r_esp, 0x79d760u); f_006db7d0();
    /* 0079d760: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 0079d766: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d768: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079d769: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x79d76eu); f_0073ae38();
    /* 0079d76e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0079d771: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079d773: je 0x79d77d */ if (fZ) goto L_0079d77d;
L_0079d775:; BB(0x0079d775);
    /* 0079d775: mov ecx, eax */ r_ecx = r_eax;
    /* 0079d777: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d779: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0079d77b: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x79d77du); call_ind(t); }
L_0079d77d:; BB(0x0079d77d);
    /* 0079d77d: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0079d780: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0079d783: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0079d786: mov dword ptr [0xaab278], 0 */ W32((u32)(0xaab278u), 0x0u);
    /* 0079d790: mov dword ptr [0xaab218], 0x11 */ W32((u32)(0xaab218u), 0x11u);
    /* 0079d79a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0079d79d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0079d7a4: mov esp, ebp */ r_esp = r_ebp;
    /* 0079d7a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079d7a7: ret  */ FN_RET(0x0079d5bc); r_esp += 4; return;
L_0079d7a8:; BB(0x0079d7a8);
    /* 0079d7a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079d7aa: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0079d7ad: jmp 0x79d74a */ goto L_0079d74a;
}

void f_0079d7b0(void) /* sub_79D7B0 */
{
    FN_ENTER(0x0079d7b0);
    /* 0079d7b0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079d7b3: mov ecx, dword ptr [0xaab274] */ r_ecx = R32((u32)(0xaab274u));
    /* 0079d7b9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079d7bb: je 0x79d7cc */ if (fZ) goto L_0079d7cc;
L_0079d7bd:; BB(0x0079d7bd);
    /* 0079d7bd: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79d7c2u); f_007127b0();
    /* 0079d7c2: mov dword ptr [0xaab274], 0 */ W32((u32)(0xaab274u), 0x0u);
L_0079d7cc:; BB(0x0079d7cc);
    /* 0079d7cc: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 0079d7d1: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079d7d4: je 0x79d7da */ if (fZ) goto L_0079d7da;
L_0079d7d6:; BB(0x0079d7d6);
    /* 0079d7d6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079d7d9: ret  */ FN_RET(0x0079d7b0); r_esp += 4; return;
L_0079d7da:; BB(0x0079d7da);
    /* 0079d7da: mov dword ptr [esp], 0x43a60000 */ W32((u32)(r_esp), 0x43a60000u);
    /* 0079d7e1: mov dword ptr [esp + 4], 0x43480000 */ W32((u32)(r_esp+0x4u), 0x43480000u);
    /* 0079d7e9: push 0xdd */ { u32 v = 0xddu; r_esp -= 4; W32(r_esp, v); }
    /* 0079d7ee: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x79d7f3u); f_0073ec50();
    /* 0079d7f3: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0079d7f7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d7f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079d7fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079d7fb: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x79d800u); f_0073a8dc();
    /* 0079d800: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079d803: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0079d807: mov dword ptr [0xaab274], eax */ W32((u32)(0xaab274u), r_eax);
    /* 0079d80c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d80e: lea ecx, [edx + 8] */ r_ecx = (u32)(r_edx+0x8u);
    /* 0079d811: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0079d812: mov ecx, eax */ r_ecx = r_eax;
    /* 0079d814: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x79d819u); f_0073ae38();
    /* 0079d819: push 0x47108800 */ { u32 v = 0x47108800u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d81e: mov ecx, dword ptr [0xaab274] */ r_ecx = R32((u32)(0xaab274u));
    /* 0079d824: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x79d829u); f_00712624();
    /* 0079d829: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079d82c: ret  */ FN_RET(0x0079d7b0); r_esp += 4; return;
}

void f_0079d830(void) /* sub_79D830 */
{
    FN_ENTER(0x0079d830);
    /* 0079d830: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079d831: call 0x6c1eec */ r_esp -= 4; W32(r_esp, 0x79d836u); f_006c1eec();
    /* 0079d836: mov ebx, eax */ r_ebx = r_eax;
    /* 0079d838: call 0x6c1edc */ r_esp -= 4; W32(r_esp, 0x79d83du); f_006c1edc();
    /* 0079d83d: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079d843: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079d844: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079d845: call 0x7d7730 */ r_esp -= 4; W32(r_esp, 0x79d84au); f_007d7730();
    /* 0079d84a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0079d84b: ret  */ FN_RET(0x0079d830); r_esp += 4; return;
}

void f_0079d84c(void) /* sub_79D84C */
{
    FN_ENTER(0x0079d84c);
    /* 0079d84c: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079d850: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079d856: call 0x718350 */ r_esp -= 4; W32(r_esp, 0x79d85bu); f_00718350();
    /* 0079d85b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079d85e: ret  */ FN_RET(0x0079d84c); r_esp += 4; return;
}

void f_0079d860(void)
{
    FN_ENTER(0x0079d860);
    /* 0079d860: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0079d864: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0079d867: mov eax, edx */ r_eax = r_edx;
    /* 0079d869: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079d86b: je 0x79d88d */ if (fZ) goto L_0079d88d;
L_0079d86d:; BB(0x0079d86d);
    /* 0079d86d: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
L_0079d870:; BB(0x0079d870);
    /* 0079d870: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079d873: je 0x79d87a */ if (fZ) goto L_0079d87a;
L_0079d875:; BB(0x0079d875);
    /* 0079d875: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079d878: jne 0x79d882 */ if (!fZ) goto L_0079d882;
L_0079d87a:; BB(0x0079d87a);
    /* 0079d87a: mov ecx, 0x20 */ r_ecx = 0x20u;
    /* 0079d87f: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
L_0079d882:; BB(0x0079d882);
    /* 0079d882: movzx ecx, word ptr [eax + 2] */ r_ecx = (u32)R16((u32)(r_eax+0x2u));
    /* 0079d886: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079d889: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079d88b: jne 0x79d870 */ if (!fZ) goto L_0079d870;
L_0079d88d:; BB(0x0079d88d);
    /* 0079d88d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079d88e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d890: call 0x4830d4 */ r_esp -= 4; W32(r_esp, 0x79d895u); f_004830d4();
    /* 0079d895: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079d898: ret  */ FN_RET(0x0079d860); r_esp += 4; return;
}

void f_0079d89c(void)
{
    FN_ENTER(0x0079d89c);
    /* 0079d89c: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079d8a0: call 0x77bb68 */ r_esp -= 4; W32(r_esp, 0x79d8a5u); f_0077bb68();
    /* 0079d8a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079d8a6: ret  */ FN_RET(0x0079d89c); r_esp += 4; return;
}

void f_0079d8a8(void)
{
    FN_ENTER(0x0079d8a8);
    /* 0079d8a8: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079d8ac: call 0x77ed44 */ r_esp -= 4; W32(r_esp, 0x79d8b1u); f_0077ed44();
    /* 0079d8b1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079d8b2: ret  */ FN_RET(0x0079d8a8); r_esp += 4; return;
}

void f_0079d8b4(void)
{
    FN_ENTER(0x0079d8b4);
    /* 0079d8b4: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079d8b8: call 0x77ed9c */ r_esp -= 4; W32(r_esp, 0x79d8bdu); f_0077ed9c();
    /* 0079d8bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079d8be: ret  */ FN_RET(0x0079d8b4); r_esp += 4; return;
}

void f_0079d8c0(void)
{
    FN_ENTER(0x0079d8c0);
    /* 0079d8c0: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079d8c4: call 0x78e11c */ r_esp -= 4; W32(r_esp, 0x79d8c9u); f_0078e11c();
    /* 0079d8c9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079d8ca: ret  */ FN_RET(0x0079d8c0); r_esp += 4; return;
}

void f_0079d8cc(void) /* sub_79D8CC */
{
    FN_ENTER(0x0079d8cc);
    /* 0079d8cc: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079d8cf: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0079d8d3: lea edx, [ecx + 8] */ r_edx = (u32)(r_ecx+0x8u);
    /* 0079d8d6: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0079d8d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079d8db: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0079d8dd: jbe 0x79d93e */ if ((fC||fZ)) goto L_0079d93e;
L_0079d8df:; BB(0x0079d8df);
    /* 0079d8df: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0079d8e2: mov ebx, eax */ r_ebx = r_eax;
    /* 0079d8e4: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0079d8e8: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0079d8ec: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0079d8f0: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0079d8f4: mov ebp, edx */ r_ebp = r_edx;
L_0079d8f6:; BB(0x0079d8f6);
    /* 0079d8f6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0079d8f8:; BB(0x0079d8f8);
    /* 0079d8f8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079d8f9: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x79d8feu); f_0068d5a8();
    /* 0079d8fe: mov ecx, eax */ r_ecx = r_eax;
    /* 0079d900: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079d903: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079d905: je 0x79d91c */ if (fZ) goto L_0079d91c;
L_0079d907:; BB(0x0079d907);
    /* 0079d907: mov eax, dword ptr [ecx + 0xeb4] */ r_eax = R32((u32)(r_ecx+0xeb4u));
    /* 0079d90d: cmp eax, dword ptr [ebp + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079d910: jne 0x79d91c */ if (!fZ) goto L_0079d91c;
L_0079d912:; BB(0x0079d912);
    /* 0079d912: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0079d916: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079d917: call 0x691e80 */ r_esp -= 4; W32(r_esp, 0x79d91cu); f_00691e80();
L_0079d91c:; BB(0x0079d91c);
    /* 0079d91c: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0079d91f: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079d922: jl 0x79d8f8 */ if ((fS!=fO)) goto L_0079d8f8;
L_0079d924:; BB(0x0079d924);
    /* 0079d924: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0079d927: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079d92a: cmp ebx, dword ptr [edi + 4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0079d92d: jb 0x79d8f6 */ if (fC) goto L_0079d8f6;
L_0079d92f:; BB(0x0079d92f);
    /* 0079d92f: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0079d932: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0079d936: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 0079d93a: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
L_0079d93e:; BB(0x0079d93e);
    /* 0079d93e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079d941: ret  */ FN_RET(0x0079d8cc); r_esp += 4; return;
}

void f_0079d944(void) /* sub_79D944 */
{
    FN_ENTER(0x0079d944);
    /* 0079d944: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079d945: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079d946: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079d947: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079d948: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0079d94c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079d94e: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0079d952: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079d954: jle 0x79d9df */ if ((fZ||fS!=fO)) goto L_0079d9df;
L_0079d95a:; BB(0x0079d95a);
    /* 0079d95a: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0079d95d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079d95f: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0079d961: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079d963: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079d965: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0079d967: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079d969: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079d96b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079d96d: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0079d96f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079d971: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079d973: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0079d976: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079d978: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0079d97a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079d97c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079d97e: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0079d980: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079d982: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079d984: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079d986: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0079d988: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079d98a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079d98c: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079d98e: mov ebp, ecx */ r_ebp = r_ecx;
L_0079d990:; BB(0x0079d990);
    /* 0079d990: mov edi, dword ptr [eax + ebp] */ r_edi = R32((u32)(r_eax+r_ebp));
    /* 0079d993: cmp edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079d996: ja 0x79d9e4 */ if ((!fC&&!fZ)) goto L_0079d9e4;
L_0079d998:; BB(0x0079d998);
    /* 0079d998: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 0079d99b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079d99d: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0079d99f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079d9a1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079d9a3: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0079d9a5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079d9a7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079d9a9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079d9ab: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0079d9ad: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079d9af: mov esi, edx */ r_esi = r_edx;
    /* 0079d9b1: lea edi, [ecx + ecx + 0xaa5c00] */ r_edi = (u32)(r_ecx+r_ecx+0xaa5c00u);
    /* 0079d9b8: mov ecx, 0x15c */ r_ecx = 0x15cu;
    /* 0079d9bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0079d9be: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0079d9c1: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0079d9c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079d9c4: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0079d9c7: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0079d9c9: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0079d9cd: add eax, 0x15c */ {  u32 a = r_eax; u32 b = 0x15cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079d9d2: add edx, 0x15c */ {  u32 a = r_edx; u32 b = 0x15cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079d9d8: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079d9db: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079d9dd: jl 0x79d990 */ if ((fS!=fO)) goto L_0079d990;
L_0079d9df:; BB(0x0079d9df);
    /* 0079d9df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0079d9e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079d9e1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079d9e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079d9e3: ret  */ FN_RET(0x0079d944); r_esp += 4; return;
L_0079d9e4:; BB(0x0079d9e4);
    /* 0079d9e4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0079d9e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079d9e6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079d9e7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079d9e8: ret  */ FN_RET(0x0079d944); r_esp += 4; return;
}

void f_0079d9ec(void) /* sub_79D9EC */
{
    FN_ENTER(0x0079d9ec);
    /* 0079d9ec: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0079d9f0: mov dword ptr [0xaab210], eax */ W32((u32)(0xaab210u), r_eax);
    /* 0079d9f5: ret  */ FN_RET(0x0079d9ec); r_esp += 4; return;
}

void f_0079d9f8(void)
{
    FN_ENTER(0x0079d9f8);
    /* 0079d9f8: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079d9fc: call 0x6bc76c */ r_esp -= 4; W32(r_esp, 0x79da01u); f_006bc76c();
    /* 0079da01: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079da02: ret  */ FN_RET(0x0079d9f8); r_esp += 4; return;
}

void f_0079da04(void) /* sub_79DA04 */
{
    FN_ENTER(0x0079da04);
    /* 0079da04: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079da05: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079da06: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079da07: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0079da0b: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 0079da10: cmp eax, 0x27 */ {  u32 a = r_eax; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079da13: jne 0x79db0c */ if (!fZ) goto L_0079db0c;
L_0079da19:; BB(0x0079da19);
    /* 0079da19: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0079da1b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079da1d: je 0x79da22 */ if (fZ) goto L_0079da22;
L_0079da1f:; BB(0x0079da1f);
    /* 0079da1f: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
L_0079da22:; BB(0x0079da22);
    /* 0079da22: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 0079da28: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0079da2b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079da2d: je 0x79db18 */ if (fZ) goto L_0079db18;
L_0079da33:; BB(0x0079da33);
    /* 0079da33: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079da35: je 0x79db02 */ if (fZ) goto L_0079db02;
L_0079da3b:; BB(0x0079da3b);
    /* 0079da3b: call 0x737d1c */ r_esp -= 4; W32(r_esp, 0x79da40u); f_00737d1c();
    /* 0079da40: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079da42: je 0x79dacc */ if (fZ) goto L_0079dacc;
L_0079da48:; BB(0x0079da48);
    /* 0079da48: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0079da4a: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79da4fu); f_00793168();
    /* 0079da4f: mov edi, eax */ r_edi = r_eax;
    /* 0079da51: push 0x175 */ { u32 v = 0x175u; r_esp -= 4; W32(r_esp, v); }
    /* 0079da56: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x79da5bu); f_0079317c();
    /* 0079da5b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079da5e: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 0079da64: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079da66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079da67: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079da68: call 0x73752c */ r_esp -= 4; W32(r_esp, 0x79da6du); f_0073752c();
    /* 0079da6d: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 0079da73: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 0079da76: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 0079da78: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 0079da7c: and edx, 0xfffe */ {  u32 a = r_edx; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0079da82: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 0079da86: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 0079da89: jne 0x79da9e */ if (!fZ) goto L_0079da9e;
L_0079da8b:; BB(0x0079da8b);
    /* 0079da8b: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 0079da92: or eax, 0xffff0080 */ {  u32 a = r_eax; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079da97: mov word ptr [ecx + 0x84], ax */ W16((u32)(r_ecx+0x84u), (u16)r_eax);
L_0079da9e:; BB(0x0079da9e);
    /* 0079da9e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0079daa0: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0079daa2: jg 0x79daac */ if ((!fZ&&fS==fO)) goto L_0079daac;
L_0079daa4:; BB(0x0079daa4);
    /* 0079daa4: jmp 0x79dad2 */ goto L_0079dad2;
L_0079daa6:; BB(0x0079daa6);
    /* 0079daa6: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
L_0079daac:; BB(0x0079daac);
    /* 0079daac: lea eax, [edi + edi*4] */ r_eax = (u32)(r_edi+r_edi*4);
    /* 0079daaf: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079dab1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079dab3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079dab5: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079dab8: lea edx, [ebx + eax + 0xc] */ r_edx = (u32)(r_ebx+r_eax+0xcu);
    /* 0079dabc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079dabd: push dword ptr [edx + 0x20] */ { u32 v = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079dac0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079dac1: call 0x737568 */ r_esp -= 4; W32(r_esp, 0x79dac6u); f_00737568();
    /* 0079dac6: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079dac8: jl 0x79daa6 */ if ((fS!=fO)) goto L_0079daa6;
L_0079daca:; BB(0x0079daca);
    /* 0079daca: jmp 0x79db10 */ goto L_0079db10;
L_0079dacc:; BB(0x0079dacc);
    /* 0079dacc: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
L_0079dad2:; BB(0x0079dad2);
    /* 0079dad2: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x79dad7u); f_00737cdc();
    /* 0079dad7: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 0079dadd: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 0079dae4: or eax, 0xffff0200 */ {  u32 a = r_eax; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079dae9: mov word ptr [ecx + 0x84], ax */ W16((u32)(r_ecx+0x84u), (u16)r_eax);
    /* 0079daf0: call 0x737da4 */ r_esp -= 4; W32(r_esp, 0x79daf5u); f_00737da4();
    /* 0079daf5: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 0079dafb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079dafd: call 0x737c40 */ r_esp -= 4; W32(r_esp, 0x79db02u); f_00737c40();
L_0079db02:; BB(0x0079db02);
    /* 0079db02: mov dword ptr [0xaab218], 0x28 */ W32((u32)(0xaab218u), 0x28u);
L_0079db0c:; BB(0x0079db0c);
    /* 0079db0c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0079db0d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079db0e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079db0f: ret  */ FN_RET(0x0079da04); r_esp += 4; return;
L_0079db10:; BB(0x0079db10);
    /* 0079db10: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 0079db16: jmp 0x79dad2 */ goto L_0079dad2;
L_0079db18:; BB(0x0079db18);
    /* 0079db18: push 0x59 */ { u32 v = 0x59u; r_esp -= 4; W32(r_esp, v); }
    /* 0079db1a: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79db1fu); f_00793168();
    /* 0079db1f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079db20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079db21: call 0x73ff1c */ r_esp -= 4; W32(r_esp, 0x79db26u); f_0073ff1c();
    /* 0079db26: mov ecx, eax */ r_ecx = r_eax;
    /* 0079db28: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079db2b: mov dword ptr [0xaab268], ecx */ W32((u32)(0xaab268u), r_ecx);
    /* 0079db31: jmp 0x79da33 */ goto L_0079da33;
}

void f_0079db38(void) /* sub_79DB38 */
{
    FN_ENTER(0x0079db38);
    /* 0079db38: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079db39: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079db3a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079db3b: sub esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079db41: mov ebp, dword ptr [esp + 0x118] */ r_ebp = R32((u32)(r_esp+0x118u));
    /* 0079db48: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 0079db4d: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079db50: je 0x79df61 */ if (fZ) goto L_0079df61;
L_0079db56:; BB(0x0079db56);
    /* 0079db56: cmp eax, 0x34 */ {  u32 a = r_eax; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079db59: je 0x79ddf3 */ if (fZ) goto L_0079ddf3;
L_0079db5f:; BB(0x0079db5f);
    /* 0079db5f: cmp eax, 0x3b */ {  u32 a = r_eax; u32 b = 0x3bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079db62: jne 0x79dc9f */ if (!fZ) goto L_0079dc9f;
L_0079db68:; BB(0x0079db68);
    /* 0079db68: mov ecx, dword ptr [0xaab254] */ r_ecx = R32((u32)(0xaab254u));
    /* 0079db6e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0079db70: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x79db75u); f_0073600c();
    /* 0079db75: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 0079db7a: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x79db7fu); f_0073ec50();
    /* 0079db7f: mov edi, eax */ r_edi = r_eax;
    /* 0079db81: push 0x77 */ { u32 v = 0x77u; r_esp -= 4; W32(r_esp, v); }
    /* 0079db83: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79db88u); f_00793168();
    /* 0079db88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079db89: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079db8c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079db8d: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x79db92u); f_00735460();
    /* 0079db92: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079db95: mov dword ptr [0xaab250], eax */ W32((u32)(0xaab250u), r_eax);
    /* 0079db9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079db9c: je 0x79dc90 */ if (fZ) goto L_0079dc90;
L_0079dba2:; BB(0x0079dba2);
    /* 0079dba2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0079dba5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079dba7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0079dba9: jbe 0x79dc35 */ if ((fC||fZ)) goto L_0079dc35;
L_0079dbaf:; BB(0x0079dbaf);
    /* 0079dbaf: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0079dbb3: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0079dbb6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079dbb8: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0079dbba: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079dbbc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079dbbe: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0079dbc0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079dbc2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079dbc4: lea eax, [ebp + eax + 0x10] */ r_eax = (u32)(r_ebp+r_eax+0x10u);
    /* 0079dbc8: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 0079dbcb: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079dbcd: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0079dbcf: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079dbd1: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079dbd3: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0079dbd5: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079dbd7: lea edi, [edi + edi + 0x18] */ r_edi = (u32)(r_edi+r_edi+0x18u);
    /* 0079dbdb: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079dbdd: mov ebx, eax */ r_ebx = r_eax;
    /* 0079dbdf: mov ebp, ecx */ r_ebp = r_ecx;
L_0079dbe1:; BB(0x0079dbe1);
    /* 0079dbe1: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0079dbe3: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0079dbe6: jae 0x79dc20 */ if (!fC) goto L_0079dc20;
L_0079dbe8:; BB(0x0079dbe8);
    /* 0079dbe8: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 0079dbec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079dbed: push dword ptr [ebx - 4] */ { u32 v = R32((u32)(r_ebx+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0079dbf0: push 0x973b6c */ { u32 v = 0x973b6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0079dbf5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079dbf6: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79dbfbu); f_00857e29();
    /* 0079dbfb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079dbfe: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 0079dc04: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 0079dc08: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079dc0b: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0079dc0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079dc0e: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x79dc13u); f_00735c90();
    /* 0079dc13: mov edx, dword ptr [esp + 0x118] */ r_edx = R32((u32)(r_esp+0x118u));
    /* 0079dc1a: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 0079dc1d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0079dc20:; BB(0x0079dc20);
    /* 0079dc20: add ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079dc23: add edi, 0x2c */ {  u32 a = r_edi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079dc26: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0079dc29: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0079dc2b: jb 0x79dbe1 */ if (fC) goto L_0079dbe1;
L_0079dc2d:; BB(0x0079dc2d);
    /* 0079dc2d: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0079dc31: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079dc33: jne 0x79dc50 */ if (!fZ) goto L_0079dc50;
L_0079dc35:; BB(0x0079dc35);
    /* 0079dc35: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079dc3a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x79dc3fu); f_0079317c();
    /* 0079dc3f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079dc40: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 0079dc46: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0079dc48: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079dc49: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079dc4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079dc4b: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x79dc50u); f_00735ee0();
L_0079dc50:; BB(0x0079dc50);
    /* 0079dc50: push dword ptr [0x9ff508] */ { u32 v = R32((u32)(0x9ff508u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079dc56: push dword ptr [0x9ff504] */ { u32 v = R32((u32)(0x9ff504u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079dc5c: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 0079dc62: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x79dc67u); f_007361d0();
    /* 0079dc67: push 0x3f4ccccd */ { u32 v = 0x3f4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0079dc6c: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 0079dc72: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x79dc77u); f_00712624();
    /* 0079dc77: mov edx, dword ptr [0xaab250] */ r_edx = R32((u32)(0xaab250u));
    /* 0079dc7d: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0079dc84: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079dc89: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
L_0079dc90:; BB(0x0079dc90);
    /* 0079dc90: mov dword ptr [0xaab218], 0x3c */ W32((u32)(0xaab218u), 0x3cu);
    /* 0079dc9a: jmp 0x79df2f */ goto L_0079df2f;
L_0079dc9f:; BB(0x0079dc9f);
    /* 0079dc9f: cmp eax, 0x41 */ {  u32 a = r_eax; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079dca2: jne 0x79df2f */ if (!fZ) goto L_0079df2f;
L_0079dca8:; BB(0x0079dca8);
    /* 0079dca8: mov ecx, dword ptr [0xaab254] */ r_ecx = R32((u32)(0xaab254u));
    /* 0079dcae: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0079dcb0: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x79dcb5u); f_0073600c();
    /* 0079dcb5: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 0079dcba: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x79dcbfu); f_0073ec50();
    /* 0079dcbf: mov esi, eax */ r_esi = r_eax;
    /* 0079dcc1: push 0x7b */ { u32 v = 0x7bu; r_esp -= 4; W32(r_esp, v); }
    /* 0079dcc3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79dcc8u); f_00793168();
    /* 0079dcc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079dcc9: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079dccc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079dccd: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x79dcd2u); f_00735460();
    /* 0079dcd2: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079dcd5: mov dword ptr [0xaab250], eax */ W32((u32)(0xaab250u), r_eax);
    /* 0079dcda: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079dcdc: je 0x79dde4 */ if (fZ) goto L_0079dde4;
L_0079dce2:; BB(0x0079dce2);
    /* 0079dce2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0079dce5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079dce7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0079dce9: jbe 0x79dd89 */ if ((fC||fZ)) goto L_0079dd89;
L_0079dcef:; BB(0x0079dcef);
    /* 0079dcef: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0079dcf3: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 0079dcf6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079dcf8: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0079dcfa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079dcfc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079dcfe: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0079dd00: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079dd02: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079dd04: lea edx, [ebp + edx + 0x10] */ r_edx = (u32)(r_ebp+r_edx+0x10u);
    /* 0079dd08: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 0079dd0b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0079dd0d: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0079dd0f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0079dd11: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0079dd13: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0079dd15: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0079dd17: lea esi, [esi + esi + 0x18] */ r_esi = (u32)(r_esi+r_esi+0x18u);
    /* 0079dd1b: add esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0079dd1d: mov ebx, edx */ r_ebx = r_edx;
    /* 0079dd1f: mov ebp, ecx */ r_ebp = r_ecx;
L_0079dd21:; BB(0x0079dd21);
    /* 0079dd21: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0079dd23: cmp edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079dd26: jne 0x79dd74 */ if (!fZ) goto L_0079dd74;
L_0079dd28:; BB(0x0079dd28);
    /* 0079dd28: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0079dd2c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079dd2d: push dword ptr [ebx - 4] */ { u32 v = R32((u32)(r_ebx+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0079dd30: push 0x973b6c */ { u32 v = 0x973b6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0079dd35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079dd36: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79dd3bu); f_00857e29();
    /* 0079dd3b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079dd3e: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0079dd41: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079dd43: mov ebp, eax */ r_ebp = r_eax;
L_0079dd45:; BB(0x0079dd45);
    /* 0079dd45: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079dd46: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x79dd4bu); f_0068d5a8();
    /* 0079dd4b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079dd4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079dd4e: je 0x79dd5f */ if (fZ) goto L_0079dd5f;
L_0079dd50:; BB(0x0079dd50);
    /* 0079dd50: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 0079dd53: cmp edx, dword ptr [eax + 0xeb4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xeb4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079dd59: je 0x79df39 */ if (fZ) goto L_0079df39;
L_0079dd5f:; BB(0x0079dd5f);
    /* 0079dd5f: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0079dd62: cmp ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079dd65: jl 0x79dd45 */ if ((fS!=fO)) goto L_0079dd45;
L_0079dd67:; BB(0x0079dd67);
    /* 0079dd67: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 0079dd6a: mov eax, dword ptr [esp + 0x118] */ r_eax = R32((u32)(r_esp+0x118u));
    /* 0079dd71: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
L_0079dd74:; BB(0x0079dd74);
    /* 0079dd74: add ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079dd77: add esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0079dd7a: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0079dd7d: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0079dd7f: jb 0x79dd21 */ if (fC) goto L_0079dd21;
L_0079dd81:; BB(0x0079dd81);
    /* 0079dd81: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0079dd85: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079dd87: jne 0x79dda4 */ if (!fZ) goto L_0079dda4;
L_0079dd89:; BB(0x0079dd89);
    /* 0079dd89: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079dd8e: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x79dd93u); f_0079317c();
    /* 0079dd93: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079dd94: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 0079dd9a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0079dd9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079dd9d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079dd9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079dd9f: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x79dda4u); f_00735ee0();
L_0079dda4:; BB(0x0079dda4);
    /* 0079dda4: push dword ptr [0x9ff508] */ { u32 v = R32((u32)(0x9ff508u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079ddaa: push dword ptr [0x9ff504] */ { u32 v = R32((u32)(0x9ff504u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079ddb0: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 0079ddb6: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x79ddbbu); f_007361d0();
    /* 0079ddbb: push 0x3f4ccccd */ { u32 v = 0x3f4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0079ddc0: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 0079ddc6: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x79ddcbu); f_00712624();
    /* 0079ddcb: mov edx, dword ptr [0xaab250] */ r_edx = R32((u32)(0xaab250u));
    /* 0079ddd1: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0079ddd8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079dddd: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
L_0079dde4:; BB(0x0079dde4);
    /* 0079dde4: mov dword ptr [0xaab218], 0x42 */ W32((u32)(0xaab218u), 0x42u);
    /* 0079ddee: jmp 0x79df2f */ goto L_0079df2f;
L_0079ddf3:; BB(0x0079ddf3);
    /* 0079ddf3: mov ecx, dword ptr [0xaab254] */ r_ecx = R32((u32)(0xaab254u));
    /* 0079ddf9: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0079ddfb: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x79de00u); f_0073600c();
    /* 0079de00: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 0079de05: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x79de0au); f_0073ec50();
    /* 0079de0a: mov edi, eax */ r_edi = r_eax;
    /* 0079de0c: push 0x72 */ { u32 v = 0x72u; r_esp -= 4; W32(r_esp, v); }
    /* 0079de0e: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79de13u); f_00793168();
    /* 0079de13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079de14: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079de17: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079de18: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x79de1du); f_00735460();
    /* 0079de1d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079de20: mov dword ptr [0xaab250], eax */ W32((u32)(0xaab250u), r_eax);
    /* 0079de25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079de27: je 0x79df25 */ if (fZ) goto L_0079df25;
L_0079de2d:; BB(0x0079de2d);
    /* 0079de2d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0079de30: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079de32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0079de34: jbe 0x79deca */ if ((fC||fZ)) goto L_0079deca;
L_0079de3a:; BB(0x0079de3a);
    /* 0079de3a: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0079de3e: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0079de41: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079de43: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0079de45: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079de47: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079de49: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0079de4b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079de4d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079de4f: lea eax, [ebp + eax + 0x10] */ r_eax = (u32)(r_ebp+r_eax+0x10u);
    /* 0079de53: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 0079de56: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079de58: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0079de5a: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079de5c: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079de5e: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0079de60: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079de62: lea edi, [edi + edi + 0x18] */ r_edi = (u32)(r_edi+r_edi+0x18u);
    /* 0079de66: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079de68: mov ebx, eax */ r_ebx = r_eax;
    /* 0079de6a: mov ebp, ecx */ r_ebp = r_ecx;
L_0079de6c:; BB(0x0079de6c);
    /* 0079de6c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0079de6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0079de70: jbe 0x79deb5 */ if ((fC||fZ)) goto L_0079deb5;
L_0079de72:; BB(0x0079de72);
    /* 0079de72: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0079de75: jae 0x79deb5 */ if (!fC) goto L_0079deb5;
L_0079de77:; BB(0x0079de77);
    /* 0079de77: lea edx, [esp + 0x88] */ r_edx = (u32)(r_esp+0x88u);
    /* 0079de7e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079de7f: push dword ptr [ebx - 4] */ { u32 v = R32((u32)(r_ebx+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0079de82: push 0x973b6c */ { u32 v = 0x973b6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0079de87: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079de88: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79de8du); f_00857e29();
    /* 0079de8d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079de90: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 0079de96: lea edx, [esp + 0x88] */ r_edx = (u32)(r_esp+0x88u);
    /* 0079de9d: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079dea0: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0079dea2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079dea3: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x79dea8u); f_00735c90();
    /* 0079dea8: mov edx, dword ptr [esp + 0x118] */ r_edx = R32((u32)(r_esp+0x118u));
    /* 0079deaf: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 0079deb2: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0079deb5:; BB(0x0079deb5);
    /* 0079deb5: add ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079deb8: add edi, 0x2c */ {  u32 a = r_edi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079debb: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0079debe: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0079dec0: jb 0x79de6c */ if (fC) goto L_0079de6c;
L_0079dec2:; BB(0x0079dec2);
    /* 0079dec2: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0079dec6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079dec8: jne 0x79dee5 */ if (!fZ) goto L_0079dee5;
L_0079deca:; BB(0x0079deca);
    /* 0079deca: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079decf: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x79ded4u); f_0079317c();
    /* 0079ded4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079ded5: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 0079dedb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0079dedd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079dede: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079dedf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079dee0: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x79dee5u); f_00735ee0();
L_0079dee5:; BB(0x0079dee5);
    /* 0079dee5: push dword ptr [0x9ff508] */ { u32 v = R32((u32)(0x9ff508u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079deeb: push dword ptr [0x9ff504] */ { u32 v = R32((u32)(0x9ff504u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079def1: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 0079def7: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x79defcu); f_007361d0();
    /* 0079defc: push 0x3f4ccccd */ { u32 v = 0x3f4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0079df01: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 0079df07: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x79df0cu); f_00712624();
    /* 0079df0c: mov edx, dword ptr [0xaab250] */ r_edx = R32((u32)(0xaab250u));
    /* 0079df12: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0079df19: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079df1e: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
L_0079df25:; BB(0x0079df25);
    /* 0079df25: mov dword ptr [0xaab218], 0x35 */ W32((u32)(0xaab218u), 0x35u);
L_0079df2f:; BB(0x0079df2f);
    /* 0079df2f: add esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079df35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079df36: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079df37: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079df38: ret  */ FN_RET(0x0079db38); r_esp += 4; return;
L_0079df39:; BB(0x0079df39);
    /* 0079df39: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 0079df3c: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 0079df42: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0079df46: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079df47: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0079df49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079df4a: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x79df4fu); f_00735c90();
    /* 0079df4f: mov eax, dword ptr [esp + 0x118] */ r_eax = R32((u32)(r_esp+0x118u));
    /* 0079df56: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0079df59: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079df5c: jmp 0x79dd74 */ goto L_0079dd74;
L_0079df61:; BB(0x0079df61);
    /* 0079df61: mov ecx, dword ptr [0xaab254] */ r_ecx = R32((u32)(0xaab254u));
    /* 0079df67: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x79df6cu); f_0073600c();
    /* 0079df6c: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 0079df71: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x79df76u); f_0073ec50();
    /* 0079df76: mov esi, eax */ r_esi = r_eax;
    /* 0079df78: push 0x6d */ { u32 v = 0x6du; r_esp -= 4; W32(r_esp, v); }
    /* 0079df7a: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79df7fu); f_00793168();
    /* 0079df7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079df80: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079df83: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079df84: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x79df89u); f_00735460();
    /* 0079df89: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079df8c: mov dword ptr [0xaab250], eax */ W32((u32)(0xaab250u), r_eax);
    /* 0079df91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079df93: je 0x79e091 */ if (fZ) goto L_0079e091;
L_0079df99:; BB(0x0079df99);
    /* 0079df99: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0079df9c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0079df9e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079dfa0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0079dfa2: jbe 0x79e036 */ if ((fC||fZ)) goto L_0079e036;
L_0079dfa8:; BB(0x0079dfa8);
    /* 0079dfa8: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0079dfac: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 0079dfaf: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0079dfb1: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0079dfb3: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0079dfb5: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0079dfb7: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0079dfb9: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0079dfbb: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0079dfbd: lea esi, [ebp + esi + 0x10] */ r_esi = (u32)(r_ebp+r_esi+0x10u);
    /* 0079dfc1: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 0079dfc4: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079dfc6: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0079dfc8: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079dfca: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079dfcc: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0079dfce: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079dfd0: lea edi, [edi + edi + 0x18] */ r_edi = (u32)(r_edi+r_edi+0x18u);
    /* 0079dfd4: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079dfd6: mov ebx, edx */ r_ebx = r_edx;
    /* 0079dfd8: mov ebp, ecx */ r_ebp = r_ecx;
L_0079dfda:; BB(0x0079dfda);
    /* 0079dfda: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0079dfdc: cmp edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0079dfdf: jae 0x79e01f */ if (!fC) goto L_0079e01f;
L_0079dfe1:; BB(0x0079dfe1);
    /* 0079dfe1: lea eax, [esp + 0xc8] */ r_eax = (u32)(r_esp+0xc8u);
    /* 0079dfe8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079dfe9: push dword ptr [esi - 4] */ { u32 v = R32((u32)(r_esi+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0079dfec: push 0x973b6c */ { u32 v = 0x973b6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0079dff1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079dff2: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79dff7u); f_00857e29();
    /* 0079dff7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079dffa: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 0079e000: lea eax, [esp + 0xc8] */ r_eax = (u32)(r_esp+0xc8u);
    /* 0079e007: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079e00a: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e00c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e00d: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x79e012u); f_00735c90();
    /* 0079e012: mov eax, dword ptr [esp + 0x118] */ r_eax = R32((u32)(r_esp+0x118u));
    /* 0079e019: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0079e01c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0079e01f:; BB(0x0079e01f);
    /* 0079e01f: add esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0079e022: add edi, 0x2c */ {  u32 a = r_edi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079e025: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0079e028: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0079e02a: jb 0x79dfda */ if (fC) goto L_0079dfda;
L_0079e02c:; BB(0x0079e02c);
    /* 0079e02c: mov edx, ebx */ r_edx = r_ebx;
    /* 0079e02e: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0079e032: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079e034: jne 0x79e051 */ if (!fZ) goto L_0079e051;
L_0079e036:; BB(0x0079e036);
    /* 0079e036: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079e03b: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x79e040u); f_0079317c();
    /* 0079e040: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079e041: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 0079e047: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0079e049: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079e04a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079e04b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079e04c: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x79e051u); f_00735ee0();
L_0079e051:; BB(0x0079e051);
    /* 0079e051: push dword ptr [0x9ff508] */ { u32 v = R32((u32)(0x9ff508u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079e057: push dword ptr [0x9ff504] */ { u32 v = R32((u32)(0x9ff504u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079e05d: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 0079e063: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x79e068u); f_007361d0();
    /* 0079e068: push 0x3f4ccccd */ { u32 v = 0x3f4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0079e06d: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 0079e073: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x79e078u); f_00712624();
    /* 0079e078: mov edx, dword ptr [0xaab250] */ r_edx = R32((u32)(0xaab250u));
    /* 0079e07e: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0079e085: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079e08a: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
L_0079e091:; BB(0x0079e091);
    /* 0079e091: mov dword ptr [0xaab218], 0x2e */ W32((u32)(0xaab218u), 0x2eu);
    /* 0079e09b: jmp 0x79df2f */ goto L_0079df2f;
}

