#include "protos.h"

void f_0088e124(void) /* sub_88E124 */
{
    FN_ENTER(0x0088e124);
    /* 0088e124: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088e125: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088e126: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088e127: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088e128: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088e12b: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0088e12f: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 0088e133: push 0xc88 */ { u32 v = 0xc88u; r_esp -= 4; W32(r_esp, v); }
    /* 0088e138: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0088e13a: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x88e13fu); f_008587c7();
    /* 0088e13f: mov ebp, eax */ r_ebp = r_eax;
    /* 0088e141: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 0088e144: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0088e148: push 0xc88 */ { u32 v = 0xc88u; r_esp -= 4; W32(r_esp, v); }
    /* 0088e14d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0088e14f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088e150: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x88e155u); f_0086b688();
    /* 0088e155: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0088e157: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088e158: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x88e15du); f_00877c98();
    /* 0088e15d: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e160: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088e162: jne 0x88e16d */ if (!fZ) goto L_0088e16d;
L_0088e164:; BB(0x0088e164);
    /* 0088e164: mov dword ptr [ebp], 1 */ W32((u32)(r_ebp), 0x1u);
    /* 0088e16b: jmp 0x88e17c */ goto L_0088e17c;
L_0088e16d:; BB(0x0088e16d);
    /* 0088e16d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0088e16f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088e170: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x88e175u); f_00877c98();
    /* 0088e175: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e178: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088e179: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
L_0088e17c:; BB(0x0088e17c);
    /* 0088e17c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0088e17e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088e17f: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x88e184u); f_00877c98();
    /* 0088e184: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e187: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088e189: je 0x88e221 */ if (fZ) goto L_0088e221;
L_0088e18f:; BB(0x0088e18f);
    /* 0088e18f: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0088e191: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088e192: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x88e197u); f_00877c98();
    /* 0088e197: mov edx, eax */ r_edx = r_eax;
    /* 0088e199: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e19c: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088e19d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088e19f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088e1a1: mov dword ptr [ebp + 0x484], edx */ W32((u32)(r_ebp+0x484u), r_edx);
    /* 0088e1a7: jle 0x88e221 */ if ((fZ||fS!=fO)) goto L_0088e221;
L_0088e1a9:; BB(0x0088e1a9);
    /* 0088e1a9: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 0088e1ac: mov esi, eax */ r_esi = r_eax;
L_0088e1ae:; BB(0x0088e1ae);
    /* 0088e1ae: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088e1b0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088e1b2: je 0x88e1be */ if (fZ) goto L_0088e1be;
L_0088e1b4:; BB(0x0088e1b4);
    /* 0088e1b4: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0088e1b5: je 0x88e1be */ if (fZ) goto L_0088e1be;
L_0088e1b7:; BB(0x0088e1b7);
    /* 0088e1b7: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088e1b8: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0088e1ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088e1bc: jne 0x88e1b7 */ if (!fZ) goto L_0088e1b7;
L_0088e1be:; BB(0x0088e1be);
    /* 0088e1be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088e1bf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088e1c0: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x88e1c5u); f_00877c98();
    /* 0088e1c5: mov edi, eax */ r_edi = r_eax;
    /* 0088e1c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e1ca: mov dword ptr [ebp + esi*4 + 0x488], edi */ W32((u32)(r_ebp+r_esi*4+0x488u), r_edi);
    /* 0088e1d1: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0088e1d5: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 0088e1d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088e1da: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088e1dc: je 0x88e1e8 */ if (fZ) goto L_0088e1e8;
L_0088e1de:; BB(0x0088e1de);
    /* 0088e1de: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0088e1df: je 0x88e1e8 */ if (fZ) goto L_0088e1e8;
L_0088e1e1:; BB(0x0088e1e1);
    /* 0088e1e1: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088e1e2: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0088e1e4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088e1e6: jne 0x88e1e1 */ if (!fZ) goto L_0088e1e1;
L_0088e1e8:; BB(0x0088e1e8);
    /* 0088e1e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088e1e9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088e1ea: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x88e1efu); f_00877c98();
    /* 0088e1ef: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e1f2: mov dword ptr [ebp + esi*4 + 0x888], eax */ W32((u32)(r_ebp+r_esi*4+0x888u), r_eax);
    /* 0088e1f9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088e1fb: jl 0x88e230 */ if ((fS!=fO)) goto L_0088e230;
L_0088e1fd:; BB(0x0088e1fd);
    /* 0088e1fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088e1ff: jl 0x88e230 */ if ((fS!=fO)) goto L_0088e230;
L_0088e201:; BB(0x0088e201);
    /* 0088e201: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088e203: je 0x88e230 */ if (fZ) goto L_0088e230;
L_0088e205:; BB(0x0088e205);
    /* 0088e205: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0088e209: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 0088e20c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088e20e: jge 0x88e230 */ if ((fS==fO)) goto L_0088e230;
L_0088e210:; BB(0x0088e210);
    /* 0088e210: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088e212: jge 0x88e230 */ if ((fS==fO)) goto L_0088e230;
L_0088e214:; BB(0x0088e214);
    /* 0088e214: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088e215: cmp esi, dword ptr [ebp + 0x484] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x484u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088e21b: jl 0x88e1ae */ if ((fS!=fO)) goto L_0088e1ae;
L_0088e21d:; BB(0x0088e21d);
    /* 0088e21d: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
L_0088e221:; BB(0x0088e221);
    /* 0088e221: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0088e223: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088e224: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x88e229u); f_00877c98();
    /* 0088e229: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e22c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088e22e: jle 0x88e241 */ if ((fZ||fS!=fO)) goto L_0088e241;
L_0088e230:; BB(0x0088e230);
    /* 0088e230: mov eax, ebp */ r_eax = r_ebp;
    /* 0088e232: call 0x88e2cc */ r_esp -= 4; W32(r_esp, 0x88e237u); f_0088e2cc();
    /* 0088e237: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088e239: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088e23c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088e23d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088e23e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088e23f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088e240: ret  */ FN_RET(0x0088e124); r_esp += 4; return;
L_0088e241:; BB(0x0088e241);
    /* 0088e241: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0088e244: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088e247: jle 0x88e271 */ if ((fZ||fS!=fO)) goto L_0088e271;
L_0088e249:; BB(0x0088e249);
    /* 0088e249: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088e24b: cmp dword ptr [esi + 4], 0 */ {  u32 a = R32((u32)(r_esi+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088e24f: jle 0x88e271 */ if ((fZ||fS!=fO)) goto L_0088e271;
L_0088e251:; BB(0x0088e251);
    /* 0088e251: mov edi, esi */ r_edi = r_esi;
    /* 0088e253: mov esi, eax */ r_esi = r_eax;
L_0088e255:; BB(0x0088e255);
    /* 0088e255: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0088e257: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088e258: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x88e25du); f_00877c98();
    /* 0088e25d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e260: mov dword ptr [ebp + esi*4 + 4], eax */ W32((u32)(r_ebp+r_esi*4+0x4u), r_eax);
    /* 0088e264: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0088e267: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088e269: jge 0x88e230 */ if ((fS==fO)) goto L_0088e230;
L_0088e26b:; BB(0x0088e26b);
    /* 0088e26b: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088e26c: cmp esi, dword ptr [edi + 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088e26f: jl 0x88e255 */ if ((fS!=fO)) goto L_0088e255;
L_0088e271:; BB(0x0088e271);
    /* 0088e271: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0088e273: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088e275: jle 0x88e2bb */ if ((fZ||fS!=fO)) goto L_0088e2bb;
L_0088e277:; BB(0x0088e277);
    /* 0088e277: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_0088e27b:; BB(0x0088e27b);
    /* 0088e27b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0088e27d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088e27e: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x88e283u); f_00877c98();
    /* 0088e283: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0088e285: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088e286: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x88e28bu); f_00877c98();
    /* 0088e28b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e28e: mov dword ptr [ebp + esi*4 + 0x404], eax */ W32((u32)(r_ebp+r_esi*4+0x404u), r_eax);
    /* 0088e295: cmp eax, dword ptr [edi + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088e298: jge 0x88e230 */ if ((fS==fO)) goto L_0088e230;
L_0088e29a:; BB(0x0088e29a);
    /* 0088e29a: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0088e29c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088e29d: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x88e2a2u); f_00877c98();
    /* 0088e2a2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e2a5: mov dword ptr [ebp + esi*4 + 0x444], eax */ W32((u32)(r_ebp+r_esi*4+0x444u), r_eax);
    /* 0088e2ac: cmp eax, dword ptr [edi + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x14u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088e2af: jge 0x88e230 */ if ((fS==fO)) goto L_0088e230;
L_0088e2b5:; BB(0x0088e2b5);
    /* 0088e2b5: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088e2b6: cmp esi, dword ptr [ebp] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088e2b9: jl 0x88e27b */ if ((fS!=fO)) goto L_0088e27b;
L_0088e2bb:; BB(0x0088e2bb);
    /* 0088e2bb: mov eax, ebp */ r_eax = r_ebp;
    /* 0088e2bd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088e2c0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088e2c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088e2c2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088e2c3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088e2c4: ret  */ FN_RET(0x0088e124); r_esp += 4; return;
}

void f_0088e2c8(void) /* sub_88E2C8 */
{
    FN_ENTER(0x0088e2c8);
    /* 0088e2c8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0088e2cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088e2cd: mov esi, eax */ r_esi = r_eax;
    /* 0088e2cf: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0088e2d1: je 0x88e2e9 */ if (fZ) goto L_0088e2e9;
L_0088e2d3:; BB(0x0088e2d3);
    /* 0088e2d3: push 0xc88 */ { u32 v = 0xc88u; r_esp -= 4; W32(r_esp, v); }
    /* 0088e2d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0088e2da: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088e2db: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x88e2e0u); f_0086b688();
    /* 0088e2e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088e2e1: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x88e2e6u); f_00858882();
    /* 0088e2e6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0088e2e9:; BB(0x0088e2e9);
    /* 0088e2e9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088e2ea: ret  */ FN_RET(0x0088e2c8); r_esp += 4; return;
}

void f_0088e2cc(void) /* sub_88E2CC */
{
    FN_ENTER(0x0088e2cc);
    /* 0088e2cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088e2cd: mov esi, eax */ r_esi = r_eax;
    /* 0088e2cf: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0088e2d1: je 0x88e2e9 */ if (fZ) goto L_0088e2e9;
L_0088e2d3:; BB(0x0088e2d3);
    /* 0088e2d3: push 0xc88 */ { u32 v = 0xc88u; r_esp -= 4; W32(r_esp, v); }
    /* 0088e2d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0088e2da: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088e2db: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x88e2e0u); f_0086b688();
    /* 0088e2e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088e2e1: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x88e2e6u); f_00858882();
    /* 0088e2e6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0088e2e9:; BB(0x0088e2e9);
    /* 0088e2e9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088e2ea: ret  */ FN_RET(0x0088e2cc); r_esp += 4; return;
}

void f_0088e2ec(void) /* sub_88E2EC */
{
    FN_ENTER(0x0088e2ec);
    /* 0088e2ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088e2ed: mov ebp, esp */ r_ebp = r_esp;
    /* 0088e2ef: sub esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088e2f5: mov dword ptr [ebp - 0x40], edi */ W32((u32)(r_ebp+0xffffffc0u), r_edi);
    /* 0088e2f8: mov dword ptr [ebp - 0x44], esi */ W32((u32)(r_ebp+0xffffffbcu), r_esi);
    /* 0088e2fb: mov dword ptr [ebp - 0x48], ebx */ W32((u32)(r_ebp+0xffffffb8u), r_ebx);
    /* 0088e2fe: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0088e301: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 0088e304: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0088e307: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 0088e30a: mov eax, dword ptr [eax + 0x68] */ r_eax = R32((u32)(r_eax+0x68u));
    /* 0088e30d: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0088e310: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 0088e313: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088e315: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 0088e31b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088e31d: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0088e320: mov eax, dword ptr [esi + 0x68] */ r_eax = R32((u32)(r_esi+0x68u));
    /* 0088e323: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0088e326: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 0088e329: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0088e32c: mov eax, ebx */ r_eax = r_ebx;
    /* 0088e32e: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x88e333u); f_00858020();
    /* 0088e333: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0088e336: mov eax, esp */ r_eax = r_esp;
    /* 0088e338: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0088e33b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088e33c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088e33d: call 0x87421c */ r_esp -= 4; W32(r_esp, 0x88e342u); f_0087421c();
    /* 0088e342: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0088e345: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e348: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0088e34b: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0088e34e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088e350: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088e352: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088e353: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088e354: call 0x87421c */ r_esp -= 4; W32(r_esp, 0x88e359u); f_0087421c();
    /* 0088e359: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0088e35c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e35f: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0088e362: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0088e365: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088e367: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088e369: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088e36a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088e36b: call 0x87421c */ r_esp -= 4; W32(r_esp, 0x88e370u); f_0087421c();
    /* 0088e370: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0088e373: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e376: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0088e379: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0088e37c: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0088e37f: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0088e382: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088e384: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088e386: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0088e389: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x88e38eu); f_00858020();
    /* 0088e38e: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0088e391: mov eax, esp */ r_eax = r_esp;
    /* 0088e393: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0088e396: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0088e399: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0088e39c: mov ebx, dword ptr [esi + 0x1c] */ r_ebx = R32((u32)(r_esi+0x1cu));
    /* 0088e39f: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0088e3a5: mov ecx, dword ptr [edx + ebx*4 + 0x220] */ r_ecx = R32((u32)(r_edx+r_ebx*4+0x220u));
    /* 0088e3ac: mov dword ptr [ebp - 0x6c], ebx */ W32((u32)(r_ebp+0xffffff94u), r_ebx);
    /* 0088e3af: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088e3b1: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 0088e3b4: je 0x88e3bd */ if (fZ) goto L_0088e3bd;
L_0088e3b6:; BB(0x0088e3b6);
    /* 0088e3b6: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0088e3bb: jmp 0x88e3bf */ goto L_0088e3bf;
L_0088e3bd:; BB(0x0088e3bd);
    /* 0088e3bd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0088e3bf:; BB(0x0088e3bf);
    /* 0088e3bf: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0088e3c2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088e3c4: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0088e3c6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088e3c8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088e3ca: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088e3cc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088e3ce: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 0088e3d1: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 0088e3d4: add edx, dword ptr [eax + 0x38] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x38u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088e3d7: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088e3d9: sub ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0088e3db: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0088e3de: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088e3e0: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 0088e3e3: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0088e3e6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088e3e8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088e3ea: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088e3ec: mov edi, dword ptr [ebp - 0x6c] */ r_edi = R32((u32)(r_ebp+0xffffff94u));
    /* 0088e3ef: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088e3f1: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0088e3f4: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0088e3f7: mov dword ptr [esi + 0x28], edi */ W32((u32)(r_esi+0x28u), r_edi);
    /* 0088e3fa: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088e3fe: jle 0x88ee3e */ if ((fZ||fS!=fO)) goto L_0088ee3e;
L_0088e404:; BB(0x0088e404);
    /* 0088e404: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0088e407: mov ecx, eax */ r_ecx = r_eax;
    /* 0088e409: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0088e40c: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088e40e: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0088e410: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 0088e413: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 0088e416: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088e418: mov edi, dword ptr [ebp - 0x80] */ r_edi = R32((u32)(r_ebp+0xffffff80u));
    /* 0088e41b: mov dword ptr [ebp - 0x64], ebx */ W32((u32)(r_ebp+0xffffff9cu), r_ebx);
    /* 0088e41e: lea ecx, [edi + 4] */ r_ecx = (u32)(r_edi+0x4u);
    /* 0088e421: lea ebx, [eax - 1] */ r_ebx = (u32)(r_eax+0xffffffffu);
    /* 0088e424: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0088e42a: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0088e42d: fild dword ptr [ebp - 0x94] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff6cu)));
    /* 0088e433: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0088e436: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0088e439: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_0088e43c:; BB(0x0088e43c);
    /* 0088e43c: fld dword ptr [0x99b074] */ FPUSH(R_F32((u32)(0x99b074u)));
    /* 0088e442: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0088e445: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 0088e448: fdiv dword ptr [ebp - 0x10] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0088e44b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0088e44e: fstp dword ptr [ebp - 0x9c] */ W_F32((u32)(r_ebp+0xffffff64u), ST(0)); FPOP();
    /* 0088e454: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0088e456: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 0088e459: mov esi, dword ptr [edx + ecx*4] */ r_esi = R32((u32)(r_edx+r_ecx*4));
    /* 0088e45c: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0088e45f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088e460: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088e461: call 0x87421c */ r_esp -= 4; W32(r_esp, 0x88e466u); f_0087421c();
    /* 0088e466: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e469: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0088e46c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0088e46f: mov dword ptr [edx + ecx*2], eax */ W32((u32)(r_edx+r_ecx*2), r_eax);
    /* 0088e472: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 0088e478: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0088e47d: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0088e483: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0088e486: fild dword ptr [ebp - 0x8c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff74u)));
    /* 0088e48c: fmul dword ptr [0x99b06c] */ ST(0) = ST(0) * R_F32((u32)(0x99b06cu));
    /* 0088e492: fadd dword ptr [0x99b070] */ ST(0) = ST(0) + R_F32((u32)(0x99b070u));
    /* 0088e498: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0088e49b: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088e49e: push dword ptr [eax + 0x1c] */ { u32 v = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0088e4a1: push dword ptr [eax + 0x18] */ { u32 v = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088e4a4: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0088e4aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088e4ab: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0088e4ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088e4af: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088e4b0: call 0x884188 */ r_esp -= 4; W32(r_esp, 0x88e4b5u); f_00884188();
    /* 0088e4b5: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e4b8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0088e4bb: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0088e4be: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0088e4c1: mov ecx, dword ptr [edx + ecx*4 + 0xc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 0088e4c5: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0088e4c8: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0088e4cb: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0088e4ce: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088e4cf: push dword ptr [ecx] */ { u32 v = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, v); }
    /* 0088e4d1: call 0x878b40 */ r_esp -= 4; W32(r_esp, 0x88e4d6u); f_00878b40();
    /* 0088e4d6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e4d9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0088e4dc: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0088e4df: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088e4e1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088e4e3: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0088e4e6: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088e4e8: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0088e4eb: lea eax, [ecx + eax + 0x14] */ r_eax = (u32)(r_ecx+r_eax+0x14u);
    /* 0088e4ef: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088e4f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088e4f1: call 0x8806ec */ r_esp -= 4; W32(r_esp, 0x88e4f6u); f_008806ec();
    /* 0088e4f6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e4f9: fld dword ptr [0x99b070] */ FPUSH(R_F32((u32)(0x99b070u)));
    /* 0088e4ff: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0088e501: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0088e506: fld dword ptr [0x99b06c] */ FPUSH(R_F32((u32)(0x99b06cu)));
    /* 0088e50c: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0088e511: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088e514: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 0088e517: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0088e519: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0088e51f: fild dword ptr [ebp - 0x8c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff74u)));
    /* 0088e525: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0088e527: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0088e529: fst dword ptr [esi] */ W_F32((u32)(r_esi), ST(0));
    /* 0088e52b: jle 0x88ee5a */ if ((fZ||fS!=fO)) goto L_0088ee5a;
L_0088e531:; BB(0x0088e531);
    /* 0088e531: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0088e534: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 0088e537: fstp dword ptr [edi + eax*2] */ W_F32((u32)(r_edi+r_eax*2), ST(0)); FPOP();
    /* 0088e53a: fld dword ptr [0x99b068] */ FPUSH(R_F32((u32)(0x99b068u)));
    /* 0088e540: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 0088e543: jmp 0x88e54b */ goto L_0088e54b;
L_0088e545:; BB(0x0088e545);
    /* 0088e545: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0088e548: fstp dword ptr [edi + eax*2] */ W_F32((u32)(r_edi+r_eax*2), ST(0)); FPOP();
L_0088e54b:; BB(0x0088e54b);
    /* 0088e54b: fld dword ptr [esi + ecx*4 + 4] */ FPUSH(R_F32((u32)(r_esi+r_ecx*4+0x4u)));
    /* 0088e54f: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0088e551: fld dword ptr [esi + ecx*4] */ FPUSH(R_F32((u32)(r_esi+r_ecx*4)));
    /* 0088e554: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0088e556: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0088e558: fstp dword ptr [ebp - 0x98] */ W_F32((u32)(r_ebp+0xffffff68u), ST(0)); FPOP();
    /* 0088e55e: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 0088e564: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0088e569: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0088e56f: mov eax, edx */ r_eax = r_edx;
    /* 0088e571: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0088e573: fild dword ptr [ebp - 0x8c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff74u)));
    /* 0088e579: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0088e57b: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 0088e57d: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0088e57f: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0088e581: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088e584: fst dword ptr [esi + eax*4] */ W_F32((u32)(r_esi+r_eax*4), ST(0));
    /* 0088e587: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0088e58a: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088e58d: fst dword ptr [ebp - 0x98] */ W_F32((u32)(r_ebp+0xffffff68u), ST(0));
    /* 0088e593: fld dword ptr [edi + eax*4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4)));
    /* 0088e596: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0088e598: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088e59a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088e59b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0088e59d: ja 0x88e5a1 */ if ((!fC&&!fZ)) goto L_0088e5a1;
L_0088e59f:; BB(0x0088e59f);
    /* 0088e59f: fst st(1) */ ST(1) = ST(0);
L_0088e5a1:; BB(0x0088e5a1);
    /* 0088e5a1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088e5a3: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088e5a5: jl 0x88e545 */ if ((fS!=fO)) goto L_0088e545;
L_0088e5a7:; BB(0x0088e5a7);
    /* 0088e5a7: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 0088e5a9: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 0088e5ab: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088e5ad: fstp st(1) */ ST(1) = ST(0); FPOP();
L_0088e5af:; BB(0x0088e5af);
    /* 0088e5af: fld dword ptr [0x99b064] */ FPUSH(R_F32((u32)(0x99b064u)));
    /* 0088e5b5: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0088e5b7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088e5b9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088e5ba: ja 0x88e5be */ if ((!fC&&!fZ)) goto L_0088e5be;
L_0088e5bc:; BB(0x0088e5bc);
    /* 0088e5bc: fst st(1) */ ST(1) = ST(0);
L_0088e5be:; BB(0x0088e5be);
    /* 0088e5be: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088e5c0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0088e5c3: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0088e5c6: fst dword ptr [edi + edx*4] */ W_F32((u32)(r_edi+r_edx*4), ST(0));
    /* 0088e5c9: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088e5ca: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0088e5cd: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0088e5cf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088e5d1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088e5d2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0088e5d4: jae 0x88e5d8 */ if (!fC) goto L_0088e5d8;
L_0088e5d6:; BB(0x0088e5d6);
    /* 0088e5d6: fst st(1) */ ST(1) = ST(0);
L_0088e5d8:; BB(0x0088e5d8);
    /* 0088e5d8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088e5da: cmp edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088e5dd: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0088e5e0: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0088e5e3: jl 0x88e43c */ if ((fS!=fO)) goto L_0088e43c;
L_0088e5e9:; BB(0x0088e5e9);
    /* 0088e5e9: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
L_0088e5ec:; BB(0x0088e5ec);
    /* 0088e5ec: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0088e5ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088e5f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088e5f1: call 0x87421c */ r_esp -= 4; W32(r_esp, 0x88e5f6u); f_0087421c();
    /* 0088e5f6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0088e5f9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e5fc: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0088e5ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088e600: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088e601: call 0x87421c */ r_esp -= 4; W32(r_esp, 0x88e606u); f_0087421c();
    /* 0088e606: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e609: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0088e60b: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0088e60e: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088e612: jle 0x88e9e4 */ if ((fZ||fS!=fO)) goto L_0088e9e4;
L_0088e618:; BB(0x0088e618);
    /* 0088e618: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0088e61b: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0088e61e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088e620: lea edx, [edx - 6] */ r_edx = (u32)(r_edx+0xfffffffau);
    /* 0088e623: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0088e626: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0088e629: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_0088e62c:; BB(0x0088e62c);
    /* 0088e62c: mov edi, dword ptr [ebp - 0x68] */ r_edi = R32((u32)(r_ebp+0xffffff98u));
    /* 0088e62f: mov esi, dword ptr [edi + ebx*4 + 4] */ r_esi = R32((u32)(r_edi+r_ebx*4+0x4u));
    /* 0088e633: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0088e636: mov dword ptr [ebp - 0x58], esi */ W32((u32)(r_ebp+0xffffffa8u), r_esi);
    /* 0088e639: mov ecx, dword ptr [edx + ebx*4] */ r_ecx = R32((u32)(r_edx+r_ebx*4));
    /* 0088e63c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0088e63f: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 0088e642: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0088e644: mov edi, dword ptr [edx + ebx*4] */ r_edi = R32((u32)(r_edx+r_ebx*4));
    /* 0088e647: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0088e64a: lea esi, [edx + edi] */ r_esi = (u32)(r_edx+r_edi);
    /* 0088e64d: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0088e650: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 0088e653: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0088e655: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088e656: call 0x87421c */ r_esp -= 4; W32(r_esp, 0x88e65bu); f_0087421c();
    /* 0088e65b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e65e: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 0088e661: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088e663: mov dword ptr [edx + ebx*4], eax */ W32((u32)(r_edx+r_ebx*4), r_eax);
    /* 0088e666: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0088e668: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0088e66b: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0088e66e: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 0088e671: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 0088e674: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 0088e677: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 0088e67a: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 0088e67d: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 0088e680: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 0088e683: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
    /* 0088e686: mov dword ptr [eax + 0x2c], ecx */ W32((u32)(r_eax+0x2cu), r_ecx);
    /* 0088e689: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 0088e68c: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
    /* 0088e68f: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 0088e692: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088e694: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0088e697: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088e699: jle 0x88e79f */ if ((fZ||fS!=fO)) goto L_0088e79f;
L_0088e69f:; BB(0x0088e69f);
    /* 0088e69f: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088e6a2: jl 0x88ee2d */ if ((fS!=fO)) goto L_0088ee2d;
L_0088e6a8:; BB(0x0088e6a8);
    /* 0088e6a8: fld dword ptr [0x99b070] */ FPUSH(R_F32((u32)(0x99b070u)));
    /* 0088e6ae: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0088e6b1: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0088e6b4: fld dword ptr [0x99b06c] */ FPUSH(R_F32((u32)(0x99b06cu)));
    /* 0088e6ba: mov dword ptr [ebp - 0x50], ebx */ W32((u32)(r_ebp+0xffffffb0u), r_ebx);
    /* 0088e6bd: jmp 0x88e6c3 */ goto L_0088e6c3;
L_0088e6bf:; BB(0x0088e6bf);
    /* 0088e6bf: fstp dword ptr [esi + ecx*4 - 4] */ W_F32((u32)(r_esi+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
L_0088e6c3:; BB(0x0088e6c3);
    /* 0088e6c3: mov ebx, dword ptr [eax + ecx*4] */ r_ebx = R32((u32)(r_eax+r_ecx*4));
    /* 0088e6c6: and ebx, 0x7fffffff */ {  u32 a = r_ebx; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0088e6cc: mov dword ptr [ebp - 0x8c], ebx */ W32((u32)(r_ebp+0xffffff74u), r_ebx);
    /* 0088e6d2: fild dword ptr [ebp - 0x8c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff74u)));
    /* 0088e6d8: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0088e6da: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0088e6dc: fstp dword ptr [esi + ecx*4] */ W_F32((u32)(r_esi+r_ecx*4), ST(0)); FPOP();
    /* 0088e6df: mov ebx, dword ptr [eax + ecx*4 + 4] */ r_ebx = R32((u32)(r_eax+r_ecx*4+0x4u));
    /* 0088e6e3: and ebx, 0x7fffffff */ {  u32 a = r_ebx; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0088e6e9: mov dword ptr [ebp - 0x8c], ebx */ W32((u32)(r_ebp+0xffffff74u), r_ebx);
    /* 0088e6ef: fild dword ptr [ebp - 0x8c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff74u)));
    /* 0088e6f5: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0088e6f7: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0088e6f9: fstp dword ptr [esi + ecx*4 + 4] */ W_F32((u32)(r_esi+r_ecx*4+0x4u), ST(0)); FPOP();
    /* 0088e6fd: mov ebx, dword ptr [eax + ecx*4 + 8] */ r_ebx = R32((u32)(r_eax+r_ecx*4+0x8u));
    /* 0088e701: and ebx, 0x7fffffff */ {  u32 a = r_ebx; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0088e707: mov dword ptr [ebp - 0x8c], ebx */ W32((u32)(r_ebp+0xffffff74u), r_ebx);
    /* 0088e70d: fild dword ptr [ebp - 0x8c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff74u)));
    /* 0088e713: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0088e715: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0088e717: fstp dword ptr [esi + ecx*4 + 8] */ W_F32((u32)(r_esi+r_ecx*4+0x8u), ST(0)); FPOP();
    /* 0088e71b: mov ebx, dword ptr [eax + ecx*4 + 0xc] */ r_ebx = R32((u32)(r_eax+r_ecx*4+0xcu));
    /* 0088e71f: and ebx, 0x7fffffff */ {  u32 a = r_ebx; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0088e725: mov dword ptr [ebp - 0x8c], ebx */ W32((u32)(r_ebp+0xffffff74u), r_ebx);
    /* 0088e72b: fild dword ptr [ebp - 0x8c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff74u)));
    /* 0088e731: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0088e733: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0088e735: fstp dword ptr [esi + ecx*4 + 0xc] */ W_F32((u32)(r_esi+r_ecx*4+0xcu), ST(0)); FPOP();
    /* 0088e739: mov ebx, dword ptr [eax + ecx*4 + 0x10] */ r_ebx = R32((u32)(r_eax+r_ecx*4+0x10u));
    /* 0088e73d: and ebx, 0x7fffffff */ {  u32 a = r_ebx; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0088e743: mov dword ptr [ebp - 0x8c], ebx */ W32((u32)(r_ebp+0xffffff74u), r_ebx);
    /* 0088e749: fild dword ptr [ebp - 0x8c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff74u)));
    /* 0088e74f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0088e751: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0088e753: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088e756: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088e758: jle 0x88e6bf */ if ((fZ||fS!=fO)) goto L_0088e6bf;
L_0088e75e:; BB(0x0088e75e);
    /* 0088e75e: fstp dword ptr [esi + ecx*4 - 4] */ W_F32((u32)(r_esi+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
    /* 0088e762: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0088e765: mov ebx, dword ptr [ebp - 0x50] */ r_ebx = R32((u32)(r_ebp+0xffffffb0u));
L_0088e768:; BB(0x0088e768);
    /* 0088e768: mov dword ptr [ebp - 0x50], ebx */ W32((u32)(r_ebp+0xffffffb0u), r_ebx);
    /* 0088e76b: mov ebx, dword ptr [ebp - 0x4c] */ r_ebx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0088e76e: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0088e771: jmp 0x88e777 */ goto L_0088e777;
L_0088e773:; BB(0x0088e773);
    /* 0088e773: fstp dword ptr [esi + ecx*4 - 4] */ W_F32((u32)(r_esi+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
L_0088e777:; BB(0x0088e777);
    /* 0088e777: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 0088e77a: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0088e77f: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0088e785: fild dword ptr [ebp - 0x8c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff74u)));
    /* 0088e78b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0088e78d: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0088e78f: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088e790: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088e792: jl 0x88e773 */ if ((fS!=fO)) goto L_0088e773;
L_0088e794:; BB(0x0088e794);
    /* 0088e794: fstp dword ptr [esi + ecx*4 - 4] */ W_F32((u32)(r_esi+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
    /* 0088e798: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0088e79a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088e79c: mov ebx, dword ptr [ebp - 0x50] */ r_ebx = R32((u32)(r_ebp+0xffffffb0u));
L_0088e79f:; BB(0x0088e79f);
    /* 0088e79f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0088e7a2: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0088e7a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088e7a6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088e7a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088e7a8: call 0x879420 */ r_esp -= 4; W32(r_esp, 0x88e7adu); f_00879420();
    /* 0088e7ad: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e7b0: add esp, -0x14 */ {  u32 a = r_esp; u32 b = 0xffffffecu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e7b3: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0088e7b6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0088e7b9: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0088e7bc: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0088e7bf: mov eax, dword ptr [ecx + ebx*4] */ r_eax = R32((u32)(r_ecx+r_ebx*4));
    /* 0088e7c2: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0088e7c6: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0088e7ca: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0088e7cd: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0088e7d1: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0088e7d5: call 0x87a9dc */ r_esp -= 4; W32(r_esp, 0x88e7dau); f_0087a9dc();
    /* 0088e7da: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e7dd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088e7de: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0088e7e1: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0088e7e4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0088e7e6: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0088e7e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088e7ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088e7eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088e7ec: call 0x87b2f8 */ r_esp -= 4; W32(r_esp, 0x88e7f1u); f_0087b2f8();
    /* 0088e7f1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e7f4: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0088e7f7: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0088e7fa: mov eax, dword ptr [eax + edx*4 + 0x404] */ r_eax = R32((u32)(r_eax+r_edx*4+0x404u));
    /* 0088e801: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0088e807: mov edx, dword ptr [ecx + eax*4 + 0x320] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x320u));
    /* 0088e80e: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0088e811: je 0x88e825 */ if (fZ) goto L_0088e825;
L_0088e813:; BB(0x0088e813);
    /* 0088e813: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0088e818: mov ebx, dword ptr [ebp - 0x48] */ r_ebx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0088e81b: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 0088e81e: mov edi, dword ptr [ebp - 0x40] */ r_edi = R32((u32)(r_ebp+0xffffffc0u));
    /* 0088e821: mov esp, ebp */ r_esp = r_ebp;
    /* 0088e823: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088e824: ret  */ FN_RET(0x0088e2ec); r_esp += 4; return;
L_0088e825:; BB(0x0088e825);
    /* 0088e825: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0088e828: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 0088e82b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088e82c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088e82d: push dword ptr [ecx + eax*4] */ { u32 v = R32((u32)(r_ecx+r_eax*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0088e830: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0088e833: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088e834: call 0x887a24 */ r_esp -= 4; W32(r_esp, 0x88e839u); f_00887a24();
    /* 0088e839: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e83c: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 0088e83f: mov ecx, dword ptr [edx + ebx*4] */ r_ecx = R32((u32)(r_edx+r_ebx*4));
    /* 0088e842: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 0088e845: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0088e848: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088e849: call 0x8806d0 */ r_esp -= 4; W32(r_esp, 0x88e84eu); f_008806d0();
    /* 0088e84e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0088e84f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088e851: je 0x88e9d4 */ if (fZ) goto L_0088e9d4;
L_0088e857:; BB(0x0088e857);
    /* 0088e857: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0088e85a: mov edx, dword ptr [eax + ebx*4] */ r_edx = R32((u32)(r_eax+r_ebx*4));
    /* 0088e85d: cmp dword ptr [edx + 0x1c], 0 */ {  u32 a = R32((u32)(r_edx+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088e861: je 0x88e9d4 */ if (fZ) goto L_0088e9d4;
L_0088e867:; BB(0x0088e867);
    /* 0088e867: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088e868: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0088e86b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0088e86e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0088e870: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0088e873: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088e874: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088e875: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088e876: call 0x87b2f8 */ r_esp -= 4; W32(r_esp, 0x88e87bu); f_0087b2f8();
    /* 0088e87b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e87e: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0088e881: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0088e884: mov edx, dword ptr [eax + edx*4 + 0x404] */ r_edx = R32((u32)(r_eax+r_edx*4+0x404u));
    /* 0088e88b: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0088e88e: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0088e891: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088e892: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088e893: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0088e896: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0088e899: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088e89a: call 0x887a24 */ r_esp -= 4; W32(r_esp, 0x88e89fu); f_00887a24();
    /* 0088e89f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e8a2: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 0088e8a5: mov ecx, dword ptr [edx + ebx*4] */ r_ecx = R32((u32)(r_edx+r_ebx*4));
    /* 0088e8a8: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 0088e8ab: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0088e8ae: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088e8af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0088e8b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088e8b2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0088e8b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088e8b6: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0088e8b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088e8ba: call 0x87b2f8 */ r_esp -= 4; W32(r_esp, 0x88e8bfu); f_0087b2f8();
    /* 0088e8bf: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e8c2: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0088e8c5: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0088e8c8: mov edx, dword ptr [eax + edx*4 + 0x404] */ r_edx = R32((u32)(r_eax+r_edx*4+0x404u));
    /* 0088e8cf: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0088e8d2: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0088e8d5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088e8d6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088e8d7: push dword ptr [eax + edx*4] */ { u32 v = R32((u32)(r_eax+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0088e8da: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0088e8dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088e8de: call 0x887a24 */ r_esp -= 4; W32(r_esp, 0x88e8e3u); f_00887a24();
    /* 0088e8e3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e8e6: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 0088e8e9: mov ecx, dword ptr [edx + ebx*4] */ r_ecx = R32((u32)(r_edx+r_ebx*4));
    /* 0088e8ec: mov edi, 1 */ r_edi = 0x1u;
    /* 0088e8f1: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0088e8f3: mov esi, 0x10000 */ r_esi = 0x10000u;
    /* 0088e8f8: mov dword ptr [ebp - 0x50], ebx */ W32((u32)(r_ebp+0xffffffb0u), r_ebx);
L_0088e8fb:; BB(0x0088e8fb);
    /* 0088e8fb: mov dword ptr [ebp - 0x54], edi */ W32((u32)(r_ebp+0xffffffacu), r_edi);
    /* 0088e8fe: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0088e901: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0088e904: mov edi, dword ptr [eax + edx*4] */ r_edi = R32((u32)(r_eax+r_edx*4));
    /* 0088e907: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0088e90a: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0088e90d: mov ebx, dword ptr [eax + edx*4 + 0x404] */ r_ebx = R32((u32)(r_eax+r_edx*4+0x404u));
    /* 0088e914: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 0088e917: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0088e91a: mov eax, 0x92492493 */ r_eax = 0x92492493u;
    /* 0088e91f: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088e921: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088e923: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0088e926: mov eax, esi */ r_eax = r_esi;
    /* 0088e928: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0088e92b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0088e92d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088e92e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0088e931: push dword ptr [edi + 0x1c] */ { u32 v = R32((u32)(r_edi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0088e934: push dword ptr [edi] */ { u32 v = R32((u32)(r_edi)); r_esp -= 4; W32(r_esp, v); }
    /* 0088e936: push dword ptr [ecx + ebx*4] */ { u32 v = R32((u32)(r_ecx+r_ebx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0088e939: mov edi, dword ptr [ebp - 0x54] */ r_edi = R32((u32)(r_ebp+0xffffffacu));
    /* 0088e93c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088e93d: call 0x88a1a4 */ r_esp -= 4; W32(r_esp, 0x88e942u); f_0088a1a4();
    /* 0088e942: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e945: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 0088e948: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0088e94b: mov ebx, dword ptr [edx + ecx*4] */ r_ebx = R32((u32)(r_edx+r_ecx*4));
    /* 0088e94e: mov dword ptr [ebx + edi*4], eax */ W32((u32)(r_ebx+r_edi*4), r_eax);
    /* 0088e951: add esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088e957: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088e958: cmp edi, 7 */ {  u32 a = r_edi; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088e95b: jl 0x88e8fb */ if ((fS!=fO)) goto L_0088e8fb;
L_0088e95d:; BB(0x0088e95d);
    /* 0088e95d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0088e95f: mov eax, 8 */ r_eax = 0x8u;
    /* 0088e964: mov esi, 0x10000 */ r_esi = 0x10000u;
    /* 0088e969: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0088e96c: mov dword ptr [ebp - 0x50], ebx */ W32((u32)(r_ebp+0xffffffb0u), r_ebx);
L_0088e96f:; BB(0x0088e96f);
    /* 0088e96f: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0088e972: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0088e975: mov edi, dword ptr [eax + edx*4] */ r_edi = R32((u32)(r_eax+r_edx*4));
    /* 0088e978: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0088e97b: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0088e97e: mov ebx, dword ptr [eax + edx*4 + 0x404] */ r_ebx = R32((u32)(r_eax+r_edx*4+0x404u));
    /* 0088e985: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 0088e988: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0088e98b: mov eax, 0x92492493 */ r_eax = 0x92492493u;
    /* 0088e990: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088e992: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088e994: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0088e997: mov eax, esi */ r_eax = r_esi;
    /* 0088e999: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0088e99c: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0088e99e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0088e9a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088e9a2: push dword ptr [edi + 0x38] */ { u32 v = R32((u32)(r_edi+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088e9a5: push dword ptr [edi + 0x1c] */ { u32 v = R32((u32)(r_edi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0088e9a8: push dword ptr [ecx + ebx*4] */ { u32 v = R32((u32)(r_ecx+r_ebx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0088e9ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088e9ac: call 0x88a1a4 */ r_esp -= 4; W32(r_esp, 0x88e9b1u); f_0088a1a4();
    /* 0088e9b1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088e9b4: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 0088e9b7: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0088e9ba: mov ebx, dword ptr [edx + ecx*4] */ r_ebx = R32((u32)(r_edx+r_ecx*4));
    /* 0088e9bd: mov edi, dword ptr [ebp - 0x54] */ r_edi = R32((u32)(r_ebp+0xffffffacu));
    /* 0088e9c0: add esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088e9c6: mov dword ptr [ebx + edi*4], eax */ W32((u32)(r_ebx+r_edi*4), r_eax);
    /* 0088e9c9: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088e9ca: cmp edi, 0xe */ {  u32 a = r_edi; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088e9cd: mov dword ptr [ebp - 0x54], edi */ W32((u32)(r_ebp+0xffffffacu), r_edi);
    /* 0088e9d0: jl 0x88e96f */ if ((fS!=fO)) goto L_0088e96f;
L_0088e9d2:; BB(0x0088e9d2);
    /* 0088e9d2: mov ebx, ecx */ r_ebx = r_ecx;
L_0088e9d4:; BB(0x0088e9d4);
    /* 0088e9d4: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088e9d5: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0088e9d8: cmp ebx, dword ptr [eax + 4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088e9db: jl 0x88e62c */ if ((fS!=fO)) goto L_0088e62c;
L_0088e9e1:; BB(0x0088e9e1);
    /* 0088e9e1: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
L_0088e9e4:; BB(0x0088e9e4);
    /* 0088e9e4: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0088e9e7: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0088e9ea: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0088e9ed: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 0088e9f0: mov ebx, dword ptr [ecx + 4] */ r_ebx = R32((u32)(r_ecx+0x4u));
    /* 0088e9f3: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088e9f5: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088e9f7: mov eax, ebx */ r_eax = r_ebx;
    /* 0088e9f9: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x88e9feu); f_00858020();
    /* 0088e9fe: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0088ea01: mov eax, esp */ r_eax = r_esp;
    /* 0088ea03: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0088ea06: mov eax, ebx */ r_eax = r_ebx;
    /* 0088ea08: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x88ea0du); f_00858020();
    /* 0088ea0d: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0088ea10: mov eax, esp */ r_eax = r_esp;
    /* 0088ea12: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0088ea15: mov eax, ebx */ r_eax = r_ebx;
    /* 0088ea17: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x88ea1cu); f_00858020();
    /* 0088ea1c: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0088ea1f: mov eax, esp */ r_eax = r_esp;
    /* 0088ea21: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0088ea24: mov eax, ebx */ r_eax = r_ebx;
    /* 0088ea26: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x88ea2bu); f_00858020();
    /* 0088ea2b: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0088ea2e: mov eax, esp */ r_eax = r_esp;
    /* 0088ea30: mov edi, eax */ r_edi = r_eax;
    /* 0088ea32: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0088ea35: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0088ea38: cmp dword ptr [edx + 0x484], 0 */ {  u32 a = R32((u32)(r_edx+0x484u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088ea3f: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 0088ea42: je 0x88ea89 */ if (fZ) goto L_0088ea89;
L_0088ea44:; BB(0x0088ea44);
    /* 0088ea44: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0088ea4a: lea eax, [edx + 0xb34] */ r_eax = (u32)(r_edx+0xb34u);
    /* 0088ea50: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0088ea53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088ea54: mov ebx, dword ptr [ebp - 0x68] */ r_ebx = R32((u32)(r_ebp+0xffffff98u));
    /* 0088ea57: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0088ea5a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088ea5b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088ea5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088ea5d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088ea5e: call 0x87b448 */ r_esp -= 4; W32(r_esp, 0x88ea63u); f_0087b448();
    /* 0088ea63: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0088ea66: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088ea69: mov edx, eax */ r_edx = r_eax;
    /* 0088ea6b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0088ea6d: mov ebx, dword ptr [ebp - 0x38] */ r_ebx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0088ea70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088ea71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088ea72: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088ea73: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088ea74: call 0x87b6b0 */ r_esp -= 4; W32(r_esp, 0x88ea79u); f_0087b6b0();
    /* 0088ea79: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0088ea7c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088ea7f: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0088ea82: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 0088ea85: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088ea87: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0088ea89:; BB(0x0088ea89);
    /* 0088ea89: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088ea8a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0088ea8c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088ea8d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x88ea92u); f_0086b688();
    /* 0088ea92: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088ea95: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0088ea98: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0088ea9b: mov ebx, dword ptr [edx + ecx*8 + 4] */ r_ebx = R32((u32)(r_edx+r_ecx*8+0x4u));
    /* 0088ea9f: cmp dword ptr [ebx + 0x1f4], 0 */ {  u32 a = R32((u32)(r_ebx+0x1f4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088eaa6: je 0x88eaef */ if (fZ) goto L_0088eaef;
L_0088eaa8:; BB(0x0088eaa8);
    /* 0088eaa8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0088eaaa: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0088eaad: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088eab1: jle 0x88eaef */ if ((fZ||fS!=fO)) goto L_0088eaef;
L_0088eab3:; BB(0x0088eab3);
    /* 0088eab3: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0088eab6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088eab8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088eaba: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0088eabc: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
L_0088eabf:; BB(0x0088eabf);
    /* 0088eabf: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 0088eac2: mov esi, dword ptr [esi + ebx*4] */ r_esi = R32((u32)(r_esi+r_ebx*4));
    /* 0088eac5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0088eac8: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x88eacdu); f_00858020();
    /* 0088eacd: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0088ead0: mov eax, esp */ r_eax = r_esp;
    /* 0088ead2: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0088ead5: mov dword ptr [edi + ebx*4], eax */ W32((u32)(r_edi+r_ebx*4), r_eax);
    /* 0088ead8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088ead9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088eada: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088eadb: call 0x87bd34 */ r_esp -= 4; W32(r_esp, 0x88eae0u); f_0087bd34();
    /* 0088eae0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088eae3: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088eae4: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0088eae7: cmp ebx, dword ptr [edx + 4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088eaea: jl 0x88eabf */ if ((fS!=fO)) goto L_0088eabf;
L_0088eaec:; BB(0x0088eaec);
    /* 0088eaec: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
L_0088eaef:; BB(0x0088eaef);
    /* 0088eaef: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088eaf0: call 0x8806d0 */ r_esp -= 4; W32(r_esp, 0x88eaf5u); f_008806d0();
    /* 0088eaf5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0088eaf6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088eaf8: je 0x88eafe */ if (fZ) goto L_0088eafe;
L_0088eafa:; BB(0x0088eafa);
    /* 0088eafa: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0088eafc: jmp 0x88eb03 */ goto L_0088eb03;
L_0088eafe:; BB(0x0088eafe);
    /* 0088eafe: mov ebx, 7 */ r_ebx = 0x7u;
L_0088eb03:; BB(0x0088eb03);
    /* 0088eb03: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088eb04: call 0x8806d0 */ r_esp -= 4; W32(r_esp, 0x88eb09u); f_008806d0();
    /* 0088eb09: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0088eb0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088eb0c: je 0x88eb15 */ if (fZ) goto L_0088eb15;
L_0088eb0e:; BB(0x0088eb0e);
    /* 0088eb0e: mov edx, 0xe */ r_edx = 0xeu;
    /* 0088eb13: jmp 0x88eb1a */ goto L_0088eb1a;
L_0088eb15:; BB(0x0088eb15);
    /* 0088eb15: mov edx, 7 */ r_edx = 0x7u;
L_0088eb1a:; BB(0x0088eb1a);
    /* 0088eb1a: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088eb1c: jg 0x88ee11 */ if ((!fZ&&fS==fO)) goto L_0088ee11;
L_0088eb22:; BB(0x0088eb22);
    /* 0088eb22: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0088eb25: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088eb27: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088eb29: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0088eb2c: lea eax, [esi + 4] */ r_eax = (u32)(r_esi+0x4u);
    /* 0088eb2f: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0088eb35: lea edx, [ecx + 0xb34] */ r_edx = (u32)(r_ecx+0xb34u);
    /* 0088eb3b: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0088eb3e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0088eb41: mov edi, eax */ r_edi = r_eax;
L_0088eb43:; BB(0x0088eb43);
    /* 0088eb43: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0088eb45: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0088eb47: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088eb48: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x88eb4du); f_008779d8();
    /* 0088eb4d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088eb50: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0088eb53: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0088eb56: push dword ptr [edx + 0x2c] */ { u32 v = R32((u32)(r_edx+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0088eb59: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088eb5a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088eb5b: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x88eb60u); f_008779d8();
    /* 0088eb60: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088eb63: cmp dword ptr [esi + 0x1c], 0 */ {  u32 a = R32((u32)(r_esi+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088eb67: je 0x88eb85 */ if (fZ) goto L_0088eb85;
L_0088eb69:; BB(0x0088eb69);
    /* 0088eb69: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0088eb6b: push dword ptr [esi + 0x18] */ { u32 v = R32((u32)(r_esi+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088eb6e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088eb6f: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x88eb74u); f_008779d8();
    /* 0088eb74: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088eb77: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0088eb79: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088eb7c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088eb7d: call 0x8779d8 */ r_esp -= 4; W32(r_esp, 0x88eb82u); f_008779d8();
    /* 0088eb82: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0088eb85:; BB(0x0088eb85);
    /* 0088eb85: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088eb87: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0088eb8a: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088eb8e: jle 0x88ee20 */ if ((fZ||fS!=fO)) goto L_0088ee20;
L_0088eb94:; BB(0x0088eb94);
    /* 0088eb94: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 0088eb97: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088eb99: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0088eb9f: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0088eba2: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
    /* 0088eba5: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0088eba8: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 0088ebab: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 0088ebae: mov ebx, eax */ r_ebx = r_eax;
L_0088ebb0:; BB(0x0088ebb0);
    /* 0088ebb0: mov edi, dword ptr [ebp - 0x68] */ r_edi = R32((u32)(r_ebp+0xffffff98u));
    /* 0088ebb3: mov edx, dword ptr [edi + ebx*4 + 4] */ r_edx = R32((u32)(r_edi+r_ebx*4+0x4u));
    /* 0088ebb7: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0088ebba: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0088ebbd: mov esi, dword ptr [ecx + ebx*4] */ r_esi = R32((u32)(r_ecx+r_ebx*4));
    /* 0088ebc0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0088ebc3: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0088ebc6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0088ebc8: mov edi, dword ptr [edx + ebx*4] */ r_edi = R32((u32)(r_edx+r_ebx*4));
    /* 0088ebcb: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0088ebce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088ebcf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088ebd0: call 0x87421c */ r_esp -= 4; W32(r_esp, 0x88ebd5u); f_0087421c();
    /* 0088ebd5: mov esi, eax */ r_esi = r_eax;
    /* 0088ebd7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088ebda: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 0088ebdd: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0088ebe0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0088ebe3: mov dword ptr [edx + ebx*4], esi */ W32((u32)(r_edx+r_ebx*4), r_esi);
    /* 0088ebe6: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0088ebe9: mov eax, dword ptr [edx + ecx*4 + 0x404] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x404u));
    /* 0088ebf0: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0088ebf3: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 0088ebf6: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 0088ebf9: mov edx, dword ptr [edx + ebx*4] */ r_edx = R32((u32)(r_edx+r_ebx*4));
    /* 0088ebfc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088ebfd: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0088ec00: push dword ptr [edx + esi] */ { u32 v = R32((u32)(r_edx+r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 0088ec03: push dword ptr [ecx + eax*4] */ { u32 v = R32((u32)(r_ecx+r_eax*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0088ec06: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0088ec09: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0088ec0c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088ec0d: call 0x88a26c */ r_esp -= 4; W32(r_esp, 0x88ec12u); f_0088a26c();
    /* 0088ec12: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088ec15: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 0088ec18: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0088ec1b: mov dword ptr [edx + ebx*4], eax */ W32((u32)(r_edx+r_ebx*4), r_eax);
    /* 0088ec1e: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0088ec21: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088ec23: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088ec25: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0088ec28: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088ec2a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088ec2c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088ec2e: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088ec30: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0088ec33: push dword ptr [ecx + edx + 0xca8] */ { u32 v = R32((u32)(r_ecx+r_edx+0xca8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088ec3a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088ec3b: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0088ec3e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088ec3f: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0088ec42: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088ec43: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088ec44: call 0x8791a0 */ r_esp -= 4; W32(r_esp, 0x88ec49u); f_008791a0();
    /* 0088ec49: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088ec4c: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0088ec4f: lea esi, [edx + edi] */ r_esi = (u32)(r_edx+r_edi);
    /* 0088ec52: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0088ec55: push dword ptr [ecx + ebx*4] */ { u32 v = R32((u32)(r_ecx+r_ebx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0088ec58: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088ec59: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088ec5a: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0088ec5d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088ec5e: call 0x87c20c */ r_esp -= 4; W32(r_esp, 0x88ec63u); f_0087c20c();
    /* 0088ec63: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088ec66: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088ec67: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0088ec6a: cmp ebx, dword ptr [edx + 4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088ec6d: jl 0x88ebb0 */ if ((fS!=fO)) goto L_0088ebb0;
L_0088ec73:; BB(0x0088ec73);
    /* 0088ec73: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0088ec76: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0088ec79: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
L_0088ec7c:; BB(0x0088ec7c);
    /* 0088ec7c: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0088ec7f: cmp dword ptr [edx + 0x484], 0 */ {  u32 a = R32((u32)(r_edx+0x484u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088ec86: je 0x88ecd4 */ if (fZ) goto L_0088ecd4;
L_0088ec88:; BB(0x0088ec88);
    /* 0088ec88: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0088ec8e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0088ec91: lea eax, [edx + ecx] */ r_eax = (u32)(r_edx+r_ecx);
    /* 0088ec94: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 0088ec97: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088ec99: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088ec9b: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0088ec9e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088eca0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088eca2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088eca4: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088eca6: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 0088eca9: push dword ptr [ecx + eax + 0xca8] */ { u32 v = R32((u32)(r_ecx+r_eax+0xca8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088ecb0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088ecb1: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0088ecb4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088ecb5: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0088ecb8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088ecb9: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0088ecbc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088ecbd: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 0088ecbf: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0088ecc2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088ecc3: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0088ecc6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088ecc7: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0088ecca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088eccb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088eccc: call 0x87c4c8 */ r_esp -= 4; W32(r_esp, 0x88ecd1u); f_0087c4c8();
    /* 0088ecd1: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0088ecd4:; BB(0x0088ecd4);
    /* 0088ecd4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088ecd6: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0088ecd9: cmp dword ptr [edx], 0 */ {  u32 a = R32((u32)(r_edx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088ecdc: jle 0x88edd9 */ if ((fZ||fS!=fO)) goto L_0088edd9;
L_0088ece2:; BB(0x0088ece2);
    /* 0088ece2: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 0088ece5: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 0088ece8: mov ebx, eax */ r_ebx = r_eax;
L_0088ecea:; BB(0x0088ecea);
    /* 0088ecea: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0088ecec: mov edi, dword ptr [ebp - 0x68] */ r_edi = R32((u32)(r_ebp+0xffffff98u));
    /* 0088ecef: mov edi, dword ptr [edi + ebx*4 + 0x444] */ r_edi = R32((u32)(r_edi+r_ebx*4+0x444u));
    /* 0088ecf6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088ecf8: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0088ecfb: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 0088ecfe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088ed00: jle 0x88ed61 */ if ((fZ||fS!=fO)) goto L_0088ed61;
L_0088ed02:; BB(0x0088ed02);
    /* 0088ed02: mov dword ptr [ebp - 0x14], edi */ W32((u32)(r_ebp+0xffffffecu), r_edi);
    /* 0088ed05: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0088ed08: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
L_0088ed0b:; BB(0x0088ed0b);
    /* 0088ed0b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0088ed0e: mov edi, dword ptr [ebp - 0x68] */ r_edi = R32((u32)(r_ebp+0xffffff98u));
    /* 0088ed11: cmp ebx, dword ptr [edi + eax*4 + 4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+r_eax*4+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088ed15: jne 0x88ed56 */ if (!fZ) goto L_0088ed56;
L_0088ed17:; BB(0x0088ed17);
    /* 0088ed17: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 0088ed1a: mov ebx, dword ptr [ebp - 0x58] */ r_ebx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0088ed1d: mov edi, dword ptr [ebp - 0x78] */ r_edi = R32((u32)(r_ebp+0xffffff88u));
    /* 0088ed20: mov dword ptr [ebx + esi*4], 0 */ W32((u32)(r_ebx+r_esi*4), 0x0u);
    /* 0088ed27: cmp dword ptr [edi + eax*4], 0 */ {  u32 a = R32((u32)(r_edi+r_eax*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088ed2b: je 0x88ed34 */ if (fZ) goto L_0088ed34;
L_0088ed2d:; BB(0x0088ed2d);
    /* 0088ed2d: mov dword ptr [ebx + esi*4], 1 */ W32((u32)(r_ebx+r_esi*4), 0x1u);
L_0088ed34:; BB(0x0088ed34);
    /* 0088ed34: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 0088ed36: mov edi, dword ptr [ebx + eax*4] */ r_edi = R32((u32)(r_ebx+r_eax*4));
    /* 0088ed39: mov ebx, dword ptr [ebp - 0x60] */ r_ebx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0088ed3c: mov dword ptr [ebx + edx*2], edi */ W32((u32)(r_ebx+r_edx*2), r_edi);
    /* 0088ed3f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0088ed41: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 0088ed44: add edx, dword ptr [ebp - 0x4c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088ed47: mov edi, esi */ r_edi = r_esi;
    /* 0088ed49: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088ed4a: mov ebx, dword ptr [ebp - 0x5c] */ r_ebx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0088ed4d: mov dword ptr [ebx + edi*4], edx */ W32((u32)(r_ebx+r_edi*4), r_edx);
    /* 0088ed50: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0088ed53: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
L_0088ed56:; BB(0x0088ed56);
    /* 0088ed56: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088ed57: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088ed59: jl 0x88ed0b */ if ((fS!=fO)) goto L_0088ed0b;
L_0088ed5b:; BB(0x0088ed5b);
    /* 0088ed5b: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0088ed5e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
L_0088ed61:; BB(0x0088ed61);
    /* 0088ed61: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0088ed67: mov edx, dword ptr [ecx + edi*4 + 0x520] */ r_edx = R32((u32)(r_ecx+r_edi*4+0x520u));
    /* 0088ed6e: mov edx, dword ptr [edx*4 + 0xa25348] */ r_edx = R32((u32)(r_edx*4+0xa25348u));
    /* 0088ed75: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0088ed78: mov eax, dword ptr [ecx + 0x34] */ r_eax = R32((u32)(r_ecx+0x34u));
    /* 0088ed7b: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0088ed7e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088ed7f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088ed80: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0088ed83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088ed84: push dword ptr [eax + edi*4] */ { u32 v = R32((u32)(r_eax+r_edi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0088ed87: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0088ed8a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088ed8b: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x88ed8eu); call_ind(t); }
    /* 0088ed8e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088ed91: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0088ed97: mov edx, dword ptr [edx + edi*4 + 0x520] */ r_edx = R32((u32)(r_edx+r_edi*4+0x520u));
    /* 0088ed9e: mov ecx, dword ptr [edx*4 + 0xa25348] */ r_ecx = R32((u32)(r_edx*4+0xa25348u));
    /* 0088eda5: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0088eda8: mov edx, dword ptr [edx + 0x34] */ r_edx = R32((u32)(r_edx+0x34u));
    /* 0088edab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088edac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088edad: mov esi, dword ptr [ebp - 0x58] */ r_esi = R32((u32)(r_ebp+0xffffffa8u));
    /* 0088edb0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088edb1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0088edb3: mov esi, dword ptr [ebp - 0x5c] */ r_esi = R32((u32)(r_ebp+0xffffffa4u));
    /* 0088edb6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088edb7: push dword ptr [edx + edi*4] */ { u32 v = R32((u32)(r_edx+r_edi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0088edba: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0088edbd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088edbe: call dword ptr [ecx + 0x18] */ { u32 t = R32((u32)(r_ecx+0x18u)); r_esp -= 4; W32(r_esp, 0x88edc1u); call_ind(t); }
    /* 0088edc1: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088edc4: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088edc5: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0088edc8: cmp ebx, dword ptr [edx] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088edca: jl 0x88ecea */ if ((fS!=fO)) goto L_0088ecea;
L_0088edd0:; BB(0x0088edd0);
    /* 0088edd0: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0088edd3: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0088edd6: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
L_0088edd9:; BB(0x0088edd9);
    /* 0088edd9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088edda: call 0x877ac4 */ r_esp -= 4; W32(r_esp, 0x88eddfu); f_00877ac4();
    /* 0088eddf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0088ede0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088ede1: call 0x877d88 */ r_esp -= 4; W32(r_esp, 0x88ede6u); f_00877d88();
    /* 0088ede6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0088ede7: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0088edea: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0088eded: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088edee: mov dword ptr [edx + ecx + 0xc], eax */ W32((u32)(r_edx+r_ecx+0xcu), r_eax);
    /* 0088edf2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088edf3: call 0x8806d0 */ r_esp -= 4; W32(r_esp, 0x88edf8u); f_008806d0();
    /* 0088edf8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0088edf9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088edfb: je 0x88ee04 */ if (fZ) goto L_0088ee04;
L_0088edfd:; BB(0x0088edfd);
    /* 0088edfd: mov edx, 0xe */ r_edx = 0xeu;
    /* 0088ee02: jmp 0x88ee09 */ goto L_0088ee09;
L_0088ee04:; BB(0x0088ee04);
    /* 0088ee04: mov edx, 7 */ r_edx = 0x7u;
L_0088ee09:; BB(0x0088ee09);
    /* 0088ee09: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088ee0b: jle 0x88eb43 */ if ((fZ||fS!=fO)) goto L_0088eb43;
L_0088ee11:; BB(0x0088ee11);
    /* 0088ee11: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0088ee13: mov ebx, dword ptr [ebp - 0x48] */ r_ebx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0088ee16: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 0088ee19: mov edi, dword ptr [ebp - 0x40] */ r_edi = R32((u32)(r_ebp+0xffffffc0u));
    /* 0088ee1c: mov esp, ebp */ r_esp = r_ebp;
    /* 0088ee1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088ee1f: ret  */ FN_RET(0x0088e2ec); r_esp += 4; return;
L_0088ee20:; BB(0x0088ee20);
    /* 0088ee20: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0088ee23: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088ee25: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0088ee28: jmp 0x88ec7c */ goto L_0088ec7c;
L_0088ee2d:; BB(0x0088ee2d);
    /* 0088ee2d: fld dword ptr [0x99b070] */ FPUSH(R_F32((u32)(0x99b070u)));
    /* 0088ee33: fld dword ptr [0x99b06c] */ FPUSH(R_F32((u32)(0x99b06cu)));
    /* 0088ee39: jmp 0x88e768 */ goto L_0088e768;
L_0088ee3e:; BB(0x0088ee3e);
    /* 0088ee3e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0088ee41: mov edx, eax */ r_edx = r_eax;
    /* 0088ee43: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0088ee46: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088ee48: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0088ee4a: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0088ee4d: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0088ee50: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088ee52: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 0088ee55: jmp 0x88e5ec */ goto L_0088e5ec;
L_0088ee5a:; BB(0x0088ee5a);
    /* 0088ee5a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0088ee5c: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0088ee5e: jmp 0x88e5af */ goto L_0088e5af;
}

void f_0088ee64(void) /* sub_88EE64 */
{
    FN_ENTER(0x0088ee64);
    /* 0088ee64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088ee65: mov ebp, esp */ r_ebp = r_esp;
    /* 0088ee67: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088ee6a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0088ee6d: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0088ee70: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 0088ee73: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0088ee76: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 0088ee79: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0088ee7c: mov ebx, dword ptr [edx + 0x1c] */ r_ebx = R32((u32)(r_edx+0x1cu));
    /* 0088ee7f: mov eax, dword ptr [eax + 0x68] */ r_eax = R32((u32)(r_eax+0x68u));
    /* 0088ee82: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0088ee85: mov dword ptr [ebp - 0x10], ebx */ W32((u32)(r_ebp+0xfffffff0u), r_ebx);
    /* 0088ee88: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0088ee8b: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 0088ee8e: mov ebx, dword ptr [ebx + eax*4] */ r_ebx = R32((u32)(r_ebx+r_eax*4));
    /* 0088ee91: mov dword ptr [ecx + 0x24], ebx */ W32((u32)(r_ecx+0x24u), r_ebx);
    /* 0088ee94: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 0088ee97: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 0088ee9a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088ee9c: mov eax, esi */ r_eax = r_esi;
    /* 0088ee9e: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x88eea3u); f_00858020();
    /* 0088eea3: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0088eea6: mov eax, esp */ r_eax = r_esp;
    /* 0088eea8: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0088eeab: mov eax, esi */ r_eax = r_esi;
    /* 0088eead: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x88eeb2u); f_00858020();
    /* 0088eeb2: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0088eeb5: mov eax, esp */ r_eax = r_esp;
    /* 0088eeb7: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0088eeba: mov eax, esi */ r_eax = r_esi;
    /* 0088eebc: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x88eec1u); f_00858020();
    /* 0088eec1: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0088eec4: mov eax, esp */ r_eax = r_esp;
    /* 0088eec6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0088eec9: mov eax, esi */ r_eax = r_esi;
    /* 0088eecb: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x88eed0u); f_00858020();
    /* 0088eed0: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0088eed3: mov eax, esp */ r_eax = r_esp;
    /* 0088eed5: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0088eed8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0088eeda: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088eedc: jle 0x88ef54 */ if ((fZ||fS!=fO)) goto L_0088ef54;
L_0088eede:; BB(0x0088eede);
    /* 0088eede: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0088eee1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088eee3: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0088eee5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0088eee8: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0088eeeb: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 0088eeee: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
L_0088eef1:; BB(0x0088eef1);
    /* 0088eef1: mov ecx, dword ptr [ebx + esi*4 + 4] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x4u));
    /* 0088eef5: mov edx, dword ptr [ebx + ecx*4 + 0x404] */ r_edx = R32((u32)(r_ebx+r_ecx*4+0x404u));
    /* 0088eefc: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0088eeff: mov eax, dword ptr [eax + edx*4 + 0x320] */ r_eax = R32((u32)(r_eax+r_edx*4+0x320u));
    /* 0088ef06: mov eax, dword ptr [eax*4 + 0xa25340] */ r_eax = R32((u32)(r_eax*4+0xa25340u));
    /* 0088ef0d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0088ef10: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 0088ef13: push dword ptr [ecx + edx*4] */ { u32 v = R32((u32)(r_ecx+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0088ef16: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088ef17: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x88ef1au); call_ind(t); }
    /* 0088ef1a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088ef1d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0088ef20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088ef22: mov dword ptr [edx + esi*4], eax */ W32((u32)(r_edx+r_esi*4), r_eax);
    /* 0088ef25: je 0x88f189 */ if (fZ) goto L_0088f189;
L_0088ef2b:; BB(0x0088ef2b);
    /* 0088ef2b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0088ef2e: mov dword ptr [eax + esi*4], 1 */ W32((u32)(r_eax+r_esi*4), 0x1u);
L_0088ef35:; BB(0x0088ef35);
    /* 0088ef35: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0088ef37: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0088ef3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088ef3b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0088ef3d: push dword ptr [edx + esi*4] */ { u32 v = R32((u32)(r_edx+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0088ef40: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x88ef45u); f_0086b688();
    /* 0088ef45: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088ef48: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088ef49: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0088ef4c: cmp esi, dword ptr [eax + 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088ef4f: jl 0x88eef1 */ if ((fS!=fO)) goto L_0088eef1;
L_0088ef51:; BB(0x0088ef51);
    /* 0088ef51: mov ebx, dword ptr [ebp - 0x34] */ r_ebx = R32((u32)(r_ebp+0xffffffccu));
L_0088ef54:; BB(0x0088ef54);
    /* 0088ef54: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0088ef56: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0088ef59: mov eax, dword ptr [eax + 0x484] */ r_eax = R32((u32)(r_eax+0x484u));
    /* 0088ef5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088ef61: jle 0x88efa6 */ if ((fZ||fS!=fO)) goto L_0088efa6;
L_0088ef63:; BB(0x0088ef63);
    /* 0088ef63: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 0088ef66: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0088ef69: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
L_0088ef6c:; BB(0x0088ef6c);
    /* 0088ef6c: mov edx, dword ptr [ebx + esi*4 + 0x488] */ r_edx = R32((u32)(r_ebx+r_esi*4+0x488u));
    /* 0088ef73: cmp dword ptr [ecx + edx*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088ef77: jne 0x88ef86 */ if (!fZ) goto L_0088ef86;
L_0088ef79:; BB(0x0088ef79);
    /* 0088ef79: mov edi, dword ptr [ebx + esi*4 + 0x888] */ r_edi = R32((u32)(r_ebx+r_esi*4+0x888u));
    /* 0088ef80: cmp dword ptr [ecx + edi*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_edi*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088ef84: je 0x88ef9e */ if (fZ) goto L_0088ef9e;
L_0088ef86:; BB(0x0088ef86);
    /* 0088ef86: mov eax, 1 */ r_eax = 0x1u;
    /* 0088ef8b: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 0088ef8e: mov edx, dword ptr [ebx + esi*4 + 0x888] */ r_edx = R32((u32)(r_ebx+r_esi*4+0x888u));
    /* 0088ef95: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 0088ef98: mov eax, dword ptr [ebx + 0x484] */ r_eax = R32((u32)(r_ebx+0x484u));
L_0088ef9e:; BB(0x0088ef9e);
    /* 0088ef9e: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088ef9f: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088efa1: jl 0x88ef6c */ if ((fS!=fO)) goto L_0088ef6c;
L_0088efa3:; BB(0x0088efa3);
    /* 0088efa3: mov ebx, dword ptr [ebp - 0x34] */ r_ebx = R32((u32)(r_ebp+0xffffffccu));
L_0088efa6:; BB(0x0088efa6);
    /* 0088efa6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0088efa8: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0088efab: cmp dword ptr [edx], 0 */ {  u32 a = R32((u32)(r_edx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088efae: jle 0x88f05e */ if ((fZ||fS!=fO)) goto L_0088f05e;
L_0088efb4:; BB(0x0088efb4);
    /* 0088efb4: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 0088efb7: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
L_0088efba:; BB(0x0088efba);
    /* 0088efba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088efbc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088efbe: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0088efc1: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 0088efc4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088efc6: jle 0x88f015 */ if ((fZ||fS!=fO)) goto L_0088f015;
L_0088efc8:; BB(0x0088efc8);
    /* 0088efc8: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
L_0088efcb:; BB(0x0088efcb);
    /* 0088efcb: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0088efce: cmp esi, dword ptr [ebx + ecx*4 + 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+r_ecx*4+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088efd2: jne 0x88f00d */ if (!fZ) goto L_0088f00d;
L_0088efd4:; BB(0x0088efd4);
    /* 0088efd4: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0088efd7: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0088efda: cmp dword ptr [esi + ecx*4], 0 */ {  u32 a = R32((u32)(r_esi+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088efde: je 0x88efec */ if (fZ) goto L_0088efec;
L_0088efe0:; BB(0x0088efe0);
    /* 0088efe0: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0088efe3: mov dword ptr [esi + edx*2], 1 */ W32((u32)(r_esi+r_edx*2), 0x1u);
    /* 0088efea: jmp 0x88eff6 */ goto L_0088eff6;
L_0088efec:; BB(0x0088efec);
    /* 0088efec: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0088efef: mov dword ptr [esi + edx*2], 0 */ W32((u32)(r_esi+r_edx*2), 0x0u);
L_0088eff6:; BB(0x0088eff6);
    /* 0088eff6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0088eff9: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 0088effb: mov edi, dword ptr [esi + ecx*4] */ r_edi = R32((u32)(r_esi+r_ecx*4));
    /* 0088effe: mov esi, eax */ r_esi = r_eax;
    /* 0088f000: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088f001: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0088f004: mov dword ptr [edx + esi*4], edi */ W32((u32)(r_edx+r_esi*4), r_edi);
    /* 0088f007: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0088f00a: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
L_0088f00d:; BB(0x0088f00d);
    /* 0088f00d: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088f00e: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088f010: jl 0x88efcb */ if ((fS!=fO)) goto L_0088efcb;
L_0088f012:; BB(0x0088f012);
    /* 0088f012: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
L_0088f015:; BB(0x0088f015);
    /* 0088f015: mov edi, dword ptr [ebx + esi*4 + 0x444] */ r_edi = R32((u32)(r_ebx+r_esi*4+0x444u));
    /* 0088f01c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0088f01f: mov edx, dword ptr [edx + edi*4 + 0x520] */ r_edx = R32((u32)(r_edx+r_edi*4+0x520u));
    /* 0088f026: mov ecx, dword ptr [edx*4 + 0xa25348] */ r_ecx = R32((u32)(r_edx*4+0xa25348u));
    /* 0088f02d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0088f030: mov edx, dword ptr [edx + 0x34] */ r_edx = R32((u32)(r_edx+0x34u));
    /* 0088f033: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088f034: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0088f037: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088f038: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0088f03b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088f03c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0088f03f: push dword ptr [edx + edi*4] */ { u32 v = R32((u32)(r_edx+r_edi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0088f042: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088f043: call dword ptr [ecx + 0x1c] */ { u32 t = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, 0x88f046u); call_ind(t); }
    /* 0088f046: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088f049: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088f04a: cmp esi, dword ptr [ebx] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088f04c: jl 0x88efba */ if ((fS!=fO)) goto L_0088efba;
L_0088f052:; BB(0x0088f052);
    /* 0088f052: mov ebx, dword ptr [ebp - 0x34] */ r_ebx = R32((u32)(r_ebp+0xffffffccu));
    /* 0088f055: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0088f058: mov eax, dword ptr [eax + 0x484] */ r_eax = R32((u32)(r_eax+0x484u));
L_0088f05e:; BB(0x0088f05e);
    /* 0088f05e: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088f05f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088f061: jl 0x88f0f9 */ if ((fS!=fO)) goto L_0088f0f9;
L_0088f067:; BB(0x0088f067);
    /* 0088f067: mov edx, ebx */ r_edx = r_ebx;
    /* 0088f069: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0088f06c: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088f06e: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0088f070: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 0088f073: fld dword ptr [0x99b060] */ FPUSH(R_F32((u32)(0x99b060u)));
L_0088f079:; BB(0x0088f079);
    /* 0088f079: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0088f07c: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0088f07e: mov ebx, dword ptr [edi + eax*4 + 0x488] */ r_ebx = R32((u32)(r_edi+r_eax*4+0x488u));
    /* 0088f085: mov esi, dword ptr [ecx + ebx*4] */ r_esi = R32((u32)(r_ecx+r_ebx*4));
    /* 0088f088: mov ebx, dword ptr [edi + eax*4 + 0x888] */ r_ebx = R32((u32)(r_edi+r_eax*4+0x888u));
    /* 0088f08f: mov ebx, dword ptr [ecx + ebx*4] */ r_ebx = R32((u32)(r_ecx+r_ebx*4));
    /* 0088f092: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088f094: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088f095: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088f097: jle 0x88f0f3 */ if ((fZ||fS!=fO)) goto L_0088f0f3;
L_0088f099:; BB(0x0088f099);
    /* 0088f099: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0088f09c:; BB(0x0088f09c);
    /* 0088f09c: fld dword ptr [esi + ecx*4] */ FPUSH(R_F32((u32)(r_esi+r_ecx*4)));
    /* 0088f09f: mov edi, dword ptr [esi + ecx*4] */ r_edi = R32((u32)(r_esi+r_ecx*4));
    /* 0088f0a2: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0088f0a4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088f0a6: fld dword ptr [ebx + ecx*4] */ FPUSH(R_F32((u32)(r_ebx+r_ecx*4)));
    /* 0088f0a9: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088f0aa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088f0ab: jbe 0x88f0cc */ if ((fC||fZ)) goto L_0088f0cc;
L_0088f0ad:; BB(0x0088f0ad);
    /* 0088f0ad: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0088f0af: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088f0b1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088f0b2: jbe 0x88f0c0 */ if ((fC||fZ)) goto L_0088f0c0;
L_0088f0b4:; BB(0x0088f0b4);
    /* 0088f0b4: mov dword ptr [esi + ecx*4 - 4], edi */ W32((u32)(r_esi+r_ecx*4+0xfffffffcu), r_edi);
    /* 0088f0b8: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0088f0ba: fstp dword ptr [ebx + ecx*4 - 4] */ W_F32((u32)(r_ebx+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
    /* 0088f0be: jmp 0x88f0e9 */ goto L_0088f0e9;
L_0088f0c0:; BB(0x0088f0c0);
    /* 0088f0c0: mov dword ptr [ebx + ecx*4 - 4], edi */ W32((u32)(r_ebx+r_ecx*4+0xfffffffcu), r_edi);
    /* 0088f0c4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0088f0c6: fstp dword ptr [esi + ecx*4 - 4] */ W_F32((u32)(r_esi+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
    /* 0088f0ca: jmp 0x88f0e9 */ goto L_0088f0e9;
L_0088f0cc:; BB(0x0088f0cc);
    /* 0088f0cc: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0088f0ce: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088f0d0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0088f0d1: jbe 0x88f0df */ if ((fC||fZ)) goto L_0088f0df;
L_0088f0d3:; BB(0x0088f0d3);
    /* 0088f0d3: mov dword ptr [esi + ecx*4 - 4], edi */ W32((u32)(r_esi+r_ecx*4+0xfffffffcu), r_edi);
    /* 0088f0d7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0088f0d9: fstp dword ptr [ebx + ecx*4 - 4] */ W_F32((u32)(r_ebx+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
    /* 0088f0dd: jmp 0x88f0e9 */ goto L_0088f0e9;
L_0088f0df:; BB(0x0088f0df);
    /* 0088f0df: mov dword ptr [ebx + ecx*4 - 4], edi */ W32((u32)(r_ebx+r_ecx*4+0xfffffffcu), r_edi);
    /* 0088f0e3: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0088f0e5: fstp dword ptr [esi + ecx*4 - 4] */ W_F32((u32)(r_esi+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
L_0088f0e9:; BB(0x0088f0e9);
    /* 0088f0e9: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088f0eb: jl 0x88f09c */ if ((fS!=fO)) goto L_0088f09c;
L_0088f0ed:; BB(0x0088f0ed);
    /* 0088f0ed: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0088f0f0: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
L_0088f0f3:; BB(0x0088f0f3);
    /* 0088f0f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088f0f5: jge 0x88f079 */ if ((fS==fO)) goto L_0088f079;
L_0088f0f7:; BB(0x0088f0f7);
    /* 0088f0f7: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0088f0f9:; BB(0x0088f0f9);
    /* 0088f0f9: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0088f0fb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0088f0fe: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0088f101: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088f103: jle 0x88f14d */ if ((fZ||fS!=fO)) goto L_0088f14d;
L_0088f105:; BB(0x0088f105);
    /* 0088f105: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
L_0088f108:; BB(0x0088f108);
    /* 0088f108: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 0088f10a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0088f10d: mov edx, dword ptr [eax + ebx*4 + 4] */ r_edx = R32((u32)(r_eax+r_ebx*4+0x4u));
    /* 0088f111: mov ecx, dword ptr [eax + edx*4 + 0x404] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x404u));
    /* 0088f118: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0088f11b: mov eax, dword ptr [eax + ecx*4 + 0x320] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x320u));
    /* 0088f122: mov edx, dword ptr [eax*4 + 0xa25340] */ r_edx = R32((u32)(r_eax*4+0xa25340u));
    /* 0088f129: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0088f12c: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0088f12f: push dword ptr [edi + ebx*4] */ { u32 v = R32((u32)(r_edi+r_ebx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0088f132: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0088f135: push dword ptr [edi + ebx*4] */ { u32 v = R32((u32)(r_edi+r_ebx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0088f138: push dword ptr [eax + ecx*4] */ { u32 v = R32((u32)(r_eax+r_ecx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0088f13b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088f13c: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x88f13fu); call_ind(t); }
    /* 0088f13f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088f142: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088f143: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0088f146: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0088f149: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088f14b: jl 0x88f108 */ if ((fS!=fO)) goto L_0088f108;
L_0088f14d:; BB(0x0088f14d);
    /* 0088f14d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0088f14f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088f151: jle 0x88f17a */ if ((fZ||fS!=fO)) goto L_0088f17a;
L_0088f153:; BB(0x0088f153);
    /* 0088f153: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0088f156: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
L_0088f159:; BB(0x0088f159);
    /* 0088f159: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0088f15b: mov ecx, dword ptr [eax + edi*4] */ r_ecx = R32((u32)(r_eax+r_edi*4));
    /* 0088f15e: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 0088f161: mov eax, dword ptr [ebx + edx*4 + 0xc] */ r_eax = R32((u32)(r_ebx+r_edx*4+0xcu));
    /* 0088f165: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088f166: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088f167: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0088f169: call 0x877e90 */ r_esp -= 4; W32(r_esp, 0x88f16eu); f_00877e90();
    /* 0088f16e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088f171: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088f172: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0088f175: cmp edi, dword ptr [eax + 4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088f178: jl 0x88f159 */ if ((fS!=fO)) goto L_0088f159;
L_0088f17a:; BB(0x0088f17a);
    /* 0088f17a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0088f17c: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0088f17f: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0088f182: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0088f185: mov esp, ebp */ r_esp = r_ebp;
    /* 0088f187: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088f188: ret  */ FN_RET(0x0088ee64); r_esp += 4; return;
L_0088f189:; BB(0x0088f189);
    /* 0088f189: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0088f18c: mov dword ptr [eax + esi*4], 0 */ W32((u32)(r_eax+r_esi*4), 0x0u);
    /* 0088f193: jmp 0x88ef35 */ goto L_0088ef35;
}

