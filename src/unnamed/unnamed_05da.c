#include "protos.h"

void f_005da00c(void) /* sub_5DA00C */
{
    FN_ENTER(0x005da00c);
    /* 005da00c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005da00d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005da00e: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005da011: mov esi, ecx */ r_esi = r_ecx;
    /* 005da013: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 005da017: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da019: je 0x5da162 */ if (fZ) goto L_005da162;
L_005da01f:; BB(0x005da01f);
    /* 005da01f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005da022: call 0x5dc1e0 */ r_esp -= 4; W32(r_esp, 0x5da027u); f_005dc1e0();
    /* 005da027: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005da029: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 005da02d: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 005da032: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 005da037: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 005da03c: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 005da041: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 005da046: movzx edx, byte ptr [edi] */ r_edx = (u32)R8((u32)(r_edi));
    /* 005da049: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da04c: je 0x5da0bb */ if (fZ) goto L_005da0bb;
L_005da04e:; BB(0x005da04e);
    /* 005da04e: mov eax, dword ptr [esi + 0xdc] */ r_eax = R32((u32)(r_esi+0xdcu));
    /* 005da054: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005da056: jne 0x5da0a8 */ if (!fZ) goto L_005da0a8;
L_005da058:; BB(0x005da058);
    /* 005da058: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_005da05a:; BB(0x005da05a);
    /* 005da05a: mov ecx, dword ptr [esi + edi*4 + 0x1cc] */ r_ecx = R32((u32)(r_esi+r_edi*4+0x1ccu));
    /* 005da061: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005da064: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da066: je 0x5da088 */ if (fZ) goto L_005da088;
L_005da068:; BB(0x005da068);
    /* 005da068: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 005da06c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da06d: call 0x5dd4d4 */ r_esp -= 4; W32(r_esp, 0x5da072u); f_005dd4d4();
    /* 005da072: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da074: je 0x5da088 */ if (fZ) goto L_005da088;
L_005da076:; BB(0x005da076);
    /* 005da076: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 005da07a: push 0x9b */ { u32 v = 0x9bu; r_esp -= 4; W32(r_esp, v); }
    /* 005da07f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da080: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5da085u); f_0050b510();
    /* 005da085: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005da088:; BB(0x005da088);
    /* 005da088: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005da08b: jl 0x5da05a */ if ((fS!=fO)) goto L_005da05a;
L_005da08d:; BB(0x005da08d);
    /* 005da08d: mov edx, dword ptr [esi + 0xf8] */ r_edx = R32((u32)(r_esi+0xf8u));
    /* 005da093: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005da096: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005da098: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da099: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da09a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005da09b: push 0x580 */ { u32 v = 0x580u; r_esp -= 4; W32(r_esp, v); }
    /* 005da0a0: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5da0a5u); f_00814298();
    /* 005da0a5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005da0a8:; BB(0x005da0a8);
    /* 005da0a8: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005da0ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da0ac: mov ecx, esi */ r_ecx = r_esi;
    /* 005da0ae: call 0x5da16c */ r_esp -= 4; W32(r_esp, 0x5da0b3u); f_005da16c();
    /* 005da0b3: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005da0b6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005da0b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005da0b8: ret 4 */ FN_RET(0x005da00c); r_esp += 8; return;
L_005da0bb:; BB(0x005da0bb);
    /* 005da0bb: mov ecx, edi */ r_ecx = r_edi;
    /* 005da0bd: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x5da0c2u); f_005d2890();
    /* 005da0c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da0c4: je 0x5da04e */ if (fZ) goto L_005da04e;
L_005da0c6:; BB(0x005da0c6);
    /* 005da0c6: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 005da0c8: push dword ptr [esi + 0x1dc] */ { u32 v = R32((u32)(r_esi+0x1dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005da0ce: call 0x5e4e48 */ r_esp -= 4; W32(r_esp, 0x5da0d3u); f_005e4e48();
    /* 005da0d3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005da0d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da0d8: je 0x5da04e */ if (fZ) goto L_005da04e;
L_005da0de:; BB(0x005da0de);
    /* 005da0de: movsx edx, byte ptr [eax] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 005da0e1: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 005da0e6: movsx edi, byte ptr [eax + 1] */ r_edi = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 005da0ea: lea ecx, [esi + 0x1f8] */ r_ecx = (u32)(r_esi+0x1f8u);
    /* 005da0f0: mov word ptr [esp + 6], di */ W16((u32)(r_esp+0x6u), (u16)r_edi);
    /* 005da0f5: movsx edx, byte ptr [eax + 2] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+0x2u));
    /* 005da0f9: mov word ptr [esp + 8], dx */ W16((u32)(r_esp+0x8u), (u16)r_edx);
    /* 005da0fe: movsx edx, byte ptr [eax + 3] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+0x3u));
    /* 005da102: mov word ptr [esp + 0xa], dx */ W16((u32)(r_esp+0xau), (u16)r_edx);
    /* 005da107: movsx edx, byte ptr [eax + 4] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+0x4u));
    /* 005da10b: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 005da10f: movsx eax, byte ptr [eax + 5] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x5u));
    /* 005da113: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 005da118: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005da11a: call 0x5dbbf0 */ r_esp -= 4; W32(r_esp, 0x5da11fu); f_005dbbf0();
    /* 005da11f: fld dword ptr [esi + 0x1b4] */ FPUSH(R_F32((u32)(r_esi+0x1b4u)));
    /* 005da125: fcomp dword ptr [0x92cb20] */ fx_compare(ST(0), R_F32((u32)(0x92cb20u))); FPOP();
    /* 005da12b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005da12d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005da12e: je 0x5da147 */ if (fZ) goto L_005da147;
L_005da130:; BB(0x005da130);
    /* 005da130: fld dword ptr [0x92cb1c] */ FPUSH(R_F32((u32)(0x92cb1cu)));
    /* 005da136: fadd dword ptr [esi + 0x1b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x1b8u));
    /* 005da13c: fstp dword ptr [esi + 0x1b8] */ W_F32((u32)(r_esi+0x1b8u), ST(0)); FPOP();
    /* 005da142: jmp 0x5da04e */ goto L_005da04e;
L_005da147:; BB(0x005da147);
    /* 005da147: call 0x5d8e78 */ r_esp -= 4; W32(r_esp, 0x5da14cu); f_005d8e78();
    /* 005da14c: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005da14f: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 005da153: fild dword ptr [esp + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x1cu)));
    /* 005da157: fstp dword ptr [esi + 0x1b4] */ W_F32((u32)(r_esi+0x1b4u), ST(0)); FPOP();
    /* 005da15d: jmp 0x5da04e */ goto L_005da04e;
L_005da162:; BB(0x005da162);
    /* 005da162: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005da164: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005da167: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005da168: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005da169: ret 4 */ FN_RET(0x005da00c); r_esp += 8; return;
}

void f_005da16c(void) /* sub_5DA16C */
{
    FN_ENTER(0x005da16c);
    /* 005da16c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005da16d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005da16e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da16f: mov edi, ecx */ r_edi = r_ecx;
    /* 005da171: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 005da175: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da177: je 0x5da24c */ if (fZ) goto L_005da24c;
L_005da17d:; BB(0x005da17d);
    /* 005da17d: movsx eax, word ptr [esi + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x4u));
    /* 005da181: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da182: lea ebp, [edi + 0x1bc] */ r_ebp = (u32)(r_edi+0x1bcu);
    /* 005da188: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005da18a: call 0x5dbd38 */ r_esp -= 4; W32(r_esp, 0x5da18fu); f_005dbd38();
    /* 005da18f: movsx eax, word ptr [esi + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x6u));
    /* 005da193: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da194: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005da196: call 0x5dbe20 */ r_esp -= 4; W32(r_esp, 0x5da19bu); f_005dbe20();
    /* 005da19b: movsx eax, word ptr [esi + 0xa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xau));
    /* 005da19f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da1a0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005da1a2: call 0x5dbf20 */ r_esp -= 4; W32(r_esp, 0x5da1a7u); f_005dbf20();
    /* 005da1a7: movsx eax, word ptr [esi + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x8u));
    /* 005da1ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da1ac: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005da1ae: call 0x5dbea0 */ r_esp -= 4; W32(r_esp, 0x5da1b3u); f_005dbea0();
    /* 005da1b3: movsx eax, word ptr [esi] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 005da1b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da1b7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005da1b9: call 0x5dbfa0 */ r_esp -= 4; W32(r_esp, 0x5da1beu); f_005dbfa0();
    /* 005da1be: movsx eax, word ptr [esi + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x2u));
    /* 005da1c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da1c3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005da1c5: call 0x5dbfcc */ r_esp -= 4; W32(r_esp, 0x5da1cau); f_005dbfcc();
    /* 005da1ca: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005da1cc: call 0x5dbdb8 */ r_esp -= 4; W32(r_esp, 0x5da1d1u); f_005dbdb8();
    /* 005da1d1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005da1d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da1d5: mov ecx, edi */ r_ecx = r_edi;
    /* 005da1d7: call 0x5c4ffc */ r_esp -= 4; W32(r_esp, 0x5da1dcu); f_005c4ffc();
    /* 005da1dc: movsx eax, byte ptr [edi + 0xf1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0xf1u));
    /* 005da1e3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da1e6: je 0x5da1fa */ if (fZ) goto L_005da1fa;
L_005da1e8:; BB(0x005da1e8);
    /* 005da1e8: mov ecx, edi */ r_ecx = r_edi;
    /* 005da1ea: call 0x5da254 */ r_esp -= 4; W32(r_esp, 0x5da1efu); f_005da254();
    /* 005da1ef: mov eax, 1 */ r_eax = 0x1u;
    /* 005da1f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da1f5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005da1f6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005da1f7: ret 4 */ FN_RET(0x005da16c); r_esp += 8; return;
L_005da1fa:; BB(0x005da1fa);
    /* 005da1fa: mov ecx, edi */ r_ecx = r_edi;
    /* 005da1fc: call 0x5c42f4 */ r_esp -= 4; W32(r_esp, 0x5da201u); f_005c42f4();
    /* 005da201: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005da207: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 005da20e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da211: je 0x5da1e8 */ if (fZ) goto L_005da1e8;
L_005da213:; BB(0x005da213);
    /* 005da213: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005da215: add ecx, 0xdf8 */ {  u32 a = r_ecx; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005da21b: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5da220u); f_0069792c();
    /* 005da220: mov ebp, eax */ r_ebp = r_eax;
    /* 005da222: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da224: je 0x5da1e8 */ if (fZ) goto L_005da1e8;
L_005da226:; BB(0x005da226);
    /* 005da226: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005da228: push dword ptr [edi + 0xf8] */ { u32 v = R32((u32)(r_edi+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005da22e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005da230: call 0x5c4214 */ r_esp -= 4; W32(r_esp, 0x5da235u); f_005c4214();
    /* 005da235: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da237: jne 0x5da1e8 */ if (!fZ) goto L_005da1e8;
L_005da239:; BB(0x005da239);
    /* 005da239: push dword ptr [ebp + 0xd8] */ { u32 v = R32((u32)(r_ebp+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005da23f: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005da245: call 0x68dfd8 */ r_esp -= 4; W32(r_esp, 0x5da24au); f_0068dfd8();
    /* 005da24a: jmp 0x5da1e8 */ goto L_005da1e8;
L_005da24c:; BB(0x005da24c);
    /* 005da24c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005da24e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da24f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005da250: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005da251: ret 4 */ FN_RET(0x005da16c); r_esp += 8; return;
}

void f_005da1c0(void)
{
    FN_ENTER(0x005da1c0);
    /* 005da1c0: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005da1c1: add dl, byte ptr [eax - 0x75] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_eax+0xffffff8bu)); u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005da1c4: int 0xe8 */ UNSUP(0x005da1c4, "int 0xe8");
    /* 005da1c6: add bl, byte ptr [esi] */ {  u32 a = (u8)r_ebx; u32 b = R8((u32)(r_esi)); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005da1c8: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005da1ca: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005da1cc: call 0x5dbdb8 */ r_esp -= 4; W32(r_esp, 0x5da1d1u); f_005dbdb8();
    /* 005da1d1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005da1d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da1d5: mov ecx, edi */ r_ecx = r_edi;
    /* 005da1d7: call 0x5c4ffc */ r_esp -= 4; W32(r_esp, 0x5da1dcu); f_005c4ffc();
    /* 005da1dc: movsx eax, byte ptr [edi + 0xf1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0xf1u));
    /* 005da1e3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da1e6: je 0x5da1fa */ if (fZ) goto L_005da1fa;
L_005da1e8:; BB(0x005da1e8);
    /* 005da1e8: mov ecx, edi */ r_ecx = r_edi;
    /* 005da1ea: call 0x5da254 */ r_esp -= 4; W32(r_esp, 0x5da1efu); f_005da254();
    /* 005da1ef: mov eax, 1 */ r_eax = 0x1u;
    /* 005da1f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da1f5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005da1f6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005da1f7: ret 4 */ FN_RET(0x005da1c0); r_esp += 8; return;
L_005da1fa:; BB(0x005da1fa);
    /* 005da1fa: mov ecx, edi */ r_ecx = r_edi;
    /* 005da1fc: call 0x5c42f4 */ r_esp -= 4; W32(r_esp, 0x5da201u); f_005c42f4();
    /* 005da201: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005da207: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 005da20e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da211: je 0x5da1e8 */ if (fZ) goto L_005da1e8;
L_005da213:; BB(0x005da213);
    /* 005da213: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005da215: add ecx, 0xdf8 */ {  u32 a = r_ecx; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005da21b: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5da220u); f_0069792c();
    /* 005da220: mov ebp, eax */ r_ebp = r_eax;
    /* 005da222: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da224: je 0x5da1e8 */ if (fZ) goto L_005da1e8;
L_005da226:; BB(0x005da226);
    /* 005da226: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005da228: push dword ptr [edi + 0xf8] */ { u32 v = R32((u32)(r_edi+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005da22e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005da230: call 0x5c4214 */ r_esp -= 4; W32(r_esp, 0x5da235u); f_005c4214();
    /* 005da235: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da237: jne 0x5da1e8 */ if (!fZ) goto L_005da1e8;
L_005da239:; BB(0x005da239);
    /* 005da239: push dword ptr [ebp + 0xd8] */ { u32 v = R32((u32)(r_ebp+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005da23f: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005da245: call 0x68dfd8 */ r_esp -= 4; W32(r_esp, 0x5da24au); f_0068dfd8();
    /* 005da24a: jmp 0x5da1e8 */ goto L_005da1e8;
}

void f_005da254(void) /* sub_5DA254 */
{
    FN_ENTER(0x005da254);
    /* 005da254: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005da255: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005da256: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da257: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005da258: mov esi, ecx */ r_esi = r_ecx;
    /* 005da25a: mov ecx, esi */ r_ecx = r_esi;
    /* 005da25c: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5da261u); f_005db164();
    /* 005da261: movsx ebx, al */ r_ebx = (u32)(i32)(i8)(u8)r_eax;
    /* 005da264: lea ecx, [esi + 0x1bc] */ r_ecx = (u32)(r_esi+0x1bcu);
    /* 005da26a: call 0x5dbdb8 */ r_esp -= 4; W32(r_esp, 0x5da26fu); f_005dbdb8();
    /* 005da26f: movzx ecx, byte ptr [esi + 0xf3] */ r_ecx = (u32)R8((u32)(r_esi+0xf3u));
    /* 005da276: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005da278: movsx edi, ax */ r_edi = (u32)(i32)(i16)(u16)r_eax;
    /* 005da27b: cmp edi, 0xa */ {  u32 a = r_edi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005da27e: jl 0x5da299 */ if ((fS!=fO)) goto L_005da299;
L_005da280:; BB(0x005da280);
    /* 005da280: cmp edi, 0x23 */ {  u32 a = r_edi; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005da283: jge 0x5da299 */ if ((fS==fO)) goto L_005da299;
L_005da285:; BB(0x005da285);
    /* 005da285: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005da287: jg 0x5da301 */ if ((!fZ&&fS==fO)) goto L_005da301;
L_005da289:; BB(0x005da289);
    /* 005da289: mov ecx, esi */ r_ecx = r_esi;
    /* 005da28b: call 0x5da314 */ r_esp -= 4; W32(r_esp, 0x5da290u); f_005da314();
    /* 005da290: movzx ecx, byte ptr [esi + 0xf3] */ r_ecx = (u32)R8((u32)(r_esi+0xf3u));
    /* 005da297: jmp 0x5da301 */ goto L_005da301;
L_005da299:; BB(0x005da299);
    /* 005da299: cmp edi, 0x23 */ {  u32 a = r_edi; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005da29c: jl 0x5da2b8 */ if ((fS!=fO)) goto L_005da2b8;
L_005da29e:; BB(0x005da29e);
    /* 005da29e: cmp edi, 0x32 */ {  u32 a = r_edi; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005da2a1: jge 0x5da2b8 */ if ((fS==fO)) goto L_005da2b8;
L_005da2a3:; BB(0x005da2a3);
    /* 005da2a3: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005da2a6: jge 0x5da301 */ if ((fS==fO)) goto L_005da301;
L_005da2a8:; BB(0x005da2a8);
    /* 005da2a8: mov ecx, esi */ r_ecx = r_esi;
    /* 005da2aa: call 0x5da3ac */ r_esp -= 4; W32(r_esp, 0x5da2afu); f_005da3ac();
    /* 005da2af: movzx ecx, byte ptr [esi + 0xf3] */ r_ecx = (u32)R8((u32)(r_esi+0xf3u));
    /* 005da2b6: jmp 0x5da301 */ goto L_005da301;
L_005da2b8:; BB(0x005da2b8);
    /* 005da2b8: cmp edi, 0x32 */ {  u32 a = r_edi; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005da2bb: jl 0x5da301 */ if ((fS!=fO)) goto L_005da301;
L_005da2bd:; BB(0x005da2bd);
    /* 005da2bd: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 005da2c2: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005da2c4: mov eax, edi */ r_eax = r_edi;
    /* 005da2c6: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005da2c9: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005da2cb: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005da2cd: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 005da2d0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005da2d2: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005da2d4: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005da2d6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da2d8: jne 0x5da301 */ if (!fZ) goto L_005da301;
L_005da2da:; BB(0x005da2da);
    /* 005da2da: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005da2dd: jg 0x5da301 */ if ((!fZ&&fS==fO)) goto L_005da301;
L_005da2df:; BB(0x005da2df);
    /* 005da2df: mov ecx, esi */ r_ecx = r_esi;
    /* 005da2e1: call 0x5da594 */ r_esp -= 4; W32(r_esp, 0x5da2e6u); f_005da594();
    /* 005da2e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da2e8: je 0x5da2f3 */ if (fZ) goto L_005da2f3;
L_005da2ea:; BB(0x005da2ea);
    /* 005da2ea: movzx ecx, byte ptr [esi + 0xf3] */ r_ecx = (u32)R8((u32)(r_esi+0xf3u));
    /* 005da2f1: jmp 0x5da301 */ goto L_005da301;
L_005da2f3:; BB(0x005da2f3);
    /* 005da2f3: mov ecx, esi */ r_ecx = r_esi;
    /* 005da2f5: call 0x5da9e0 */ r_esp -= 4; W32(r_esp, 0x5da2fau); f_005da9e0();
    /* 005da2fa: movzx ecx, byte ptr [esi + 0xf3] */ r_ecx = (u32)R8((u32)(r_esi+0xf3u));
L_005da301:; BB(0x005da301);
    /* 005da301: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005da303: je 0x5da30c */ if (fZ) goto L_005da30c;
L_005da305:; BB(0x005da305);
    /* 005da305: mov ecx, esi */ r_ecx = r_esi;
    /* 005da307: call 0x5db198 */ r_esp -= 4; W32(r_esp, 0x5da30cu); f_005db198();
L_005da30c:; BB(0x005da30c);
    /* 005da30c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005da30d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da30e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005da30f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005da310: ret  */ FN_RET(0x005da254); r_esp += 4; return;
}

void f_005da314(void) /* sub_5DA314 */
{
    FN_ENTER(0x005da314);
    /* 005da314: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005da315: mov esi, ecx */ r_esi = r_ecx;
    /* 005da317: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 005da31d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005da31f: je 0x5da3a8 */ if (fZ) goto L_005da3a8;
L_005da325:; BB(0x005da325);
    /* 005da325: push 0xf9 */ { u32 v = 0xf9u; r_esp -= 4; W32(r_esp, v); }
    /* 005da32a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da32b: call 0x5ca3d0 */ r_esp -= 4; W32(r_esp, 0x5da330u); f_005ca3d0();
    /* 005da330: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005da333: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da335: je 0x5da34e */ if (fZ) goto L_005da34e;
L_005da337:; BB(0x005da337);
    /* 005da337: mov ecx, esi */ r_ecx = r_esi;
    /* 005da339: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5da33eu); f_005db164();
    /* 005da33e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005da341: jge 0x5da3a8 */ if ((fS==fO)) goto L_005da3a8;
L_005da343:; BB(0x005da343);
    /* 005da343: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005da345: mov ecx, esi */ r_ecx = r_esi;
    /* 005da347: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5da34cu); f_005c4fec();
    /* 005da34c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005da34d: ret  */ FN_RET(0x005da314); r_esp += 4; return;
L_005da34e:; BB(0x005da34e);
    /* 005da34e: push 0xfa */ { u32 v = 0xfau; r_esp -= 4; W32(r_esp, v); }
    /* 005da353: push dword ptr [esi + 0xf8] */ { u32 v = R32((u32)(r_esi+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005da359: call 0x5ca3d0 */ r_esp -= 4; W32(r_esp, 0x5da35eu); f_005ca3d0();
    /* 005da35e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005da361: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da363: je 0x5da37c */ if (fZ) goto L_005da37c;
L_005da365:; BB(0x005da365);
    /* 005da365: mov ecx, esi */ r_ecx = r_esi;
    /* 005da367: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5da36cu); f_005db164();
    /* 005da36c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005da36f: jge 0x5da3a8 */ if ((fS==fO)) goto L_005da3a8;
L_005da371:; BB(0x005da371);
    /* 005da371: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005da373: mov ecx, esi */ r_ecx = r_esi;
    /* 005da375: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5da37au); f_005c4fec();
    /* 005da37a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005da37b: ret  */ FN_RET(0x005da314); r_esp += 4; return;
L_005da37c:; BB(0x005da37c);
    /* 005da37c: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 005da381: push dword ptr [esi + 0xf8] */ { u32 v = R32((u32)(r_esi+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005da387: call 0x5ca3d0 */ r_esp -= 4; W32(r_esp, 0x5da38cu); f_005ca3d0();
    /* 005da38c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005da38f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005da391: je 0x5da3a8 */ if (fZ) goto L_005da3a8;
L_005da393:; BB(0x005da393);
    /* 005da393: mov ecx, esi */ r_ecx = r_esi;
    /* 005da395: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5da39au); f_005db164();
    /* 005da39a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005da39d: jge 0x5da3a8 */ if ((fS==fO)) goto L_005da3a8;
L_005da39f:; BB(0x005da39f);
    /* 005da39f: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005da3a1: mov ecx, esi */ r_ecx = r_esi;
    /* 005da3a3: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5da3a8u); f_005c4fec();
L_005da3a8:; BB(0x005da3a8);
    /* 005da3a8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005da3a9: ret  */ FN_RET(0x005da314); r_esp += 4; return;
}

void f_005da3ac(void) /* sub_5DA3AC */
{
    FN_ENTER(0x005da3ac);
    /* 005da3ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005da3ad: mov esi, ecx */ r_esi = r_ecx;
    /* 005da3af: mov ecx, esi */ r_ecx = r_esi;
    /* 005da3b1: call 0x5da4e8 */ r_esp -= 4; W32(r_esp, 0x5da3b6u); f_005da4e8();
    /* 005da3b6: movzx edx, byte ptr [esi + 0xf3] */ r_edx = (u32)R8((u32)(r_esi+0xf3u));
    /* 005da3bd: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da3c0: je 0x5da494 */ if (fZ) goto L_005da494;
L_005da3c6:; BB(0x005da3c6);
    /* 005da3c6: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da3c9: jne 0x5da42f */ if (!fZ) goto L_005da42f;
L_005da3cb:; BB(0x005da3cb);
    /* 005da3cb: test eax, 0x110 */ {  u32 a = r_eax; u32 b = 0x110u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da3d0: jne 0x5da414 */ if (!fZ) goto L_005da414;
L_005da3d2:; BB(0x005da3d2);
    /* 005da3d2: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005da3d4: jne 0x5da3f9 */ if (!fZ) goto L_005da3f9;
L_005da3d6:; BB(0x005da3d6);
    /* 005da3d6: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005da3d8: je 0x5da4e6 */ if (fZ) goto L_005da4e6;
L_005da3de:; BB(0x005da3de);
    /* 005da3de: mov ecx, esi */ r_ecx = r_esi;
    /* 005da3e0: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5da3e5u); f_005db164();
    /* 005da3e5: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005da3e8: jge 0x5da4e6 */ if ((fS==fO)) goto L_005da4e6;
L_005da3ee:; BB(0x005da3ee);
    /* 005da3ee: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005da3f0: mov ecx, esi */ r_ecx = r_esi;
    /* 005da3f2: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5da3f7u); f_005c4fec();
    /* 005da3f7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005da3f8: ret  */ FN_RET(0x005da3ac); r_esp += 4; return;
L_005da3f9:; BB(0x005da3f9);
    /* 005da3f9: mov ecx, esi */ r_ecx = r_esi;
    /* 005da3fb: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5da400u); f_005db164();
    /* 005da400: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005da403: jge 0x5da4e6 */ if ((fS==fO)) goto L_005da4e6;
L_005da409:; BB(0x005da409);
    /* 005da409: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005da40b: mov ecx, esi */ r_ecx = r_esi;
    /* 005da40d: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5da412u); f_005c4fec();
    /* 005da412: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005da413: ret  */ FN_RET(0x005da3ac); r_esp += 4; return;
L_005da414:; BB(0x005da414);
    /* 005da414: mov ecx, esi */ r_ecx = r_esi;
    /* 005da416: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5da41bu); f_005db164();
    /* 005da41b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005da41e: jge 0x5da4e6 */ if ((fS==fO)) goto L_005da4e6;
L_005da424:; BB(0x005da424);
    /* 005da424: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005da426: mov ecx, esi */ r_ecx = r_esi;
    /* 005da428: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5da42du); f_005c4fec();
    /* 005da42d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005da42e: ret  */ FN_RET(0x005da3ac); r_esp += 4; return;
L_005da42f:; BB(0x005da42f);
    /* 005da42f: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005da432: jne 0x5da4e6 */ if (!fZ) goto L_005da4e6;
L_005da438:; BB(0x005da438);
    /* 005da438: test eax, 0x120 */ {  u32 a = r_eax; u32 b = 0x120u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da43d: jne 0x5da47d */ if (!fZ) goto L_005da47d;
L_005da43f:; BB(0x005da43f);
    /* 005da43f: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005da441: jne 0x5da466 */ if (!fZ) goto L_005da466;
L_005da443:; BB(0x005da443);
    /* 005da443: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005da445: je 0x5da4e6 */ if (fZ) goto L_005da4e6;
L_005da44b:; BB(0x005da44b);
    /* 005da44b: mov ecx, esi */ r_ecx = r_esi;
    /* 005da44d: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5da452u); f_005db164();
    /* 005da452: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005da455: jge 0x5da4e6 */ if ((fS==fO)) goto L_005da4e6;
L_005da45b:; BB(0x005da45b);
    /* 005da45b: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005da45d: mov ecx, esi */ r_ecx = r_esi;
    /* 005da45f: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5da464u); f_005c4fec();
    /* 005da464: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005da465: ret  */ FN_RET(0x005da3ac); r_esp += 4; return;
L_005da466:; BB(0x005da466);
    /* 005da466: mov ecx, esi */ r_ecx = r_esi;
    /* 005da468: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5da46du); f_005db164();
    /* 005da46d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005da470: jge 0x5da4e6 */ if ((fS==fO)) goto L_005da4e6;
L_005da472:; BB(0x005da472);
    /* 005da472: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 005da474: mov ecx, esi */ r_ecx = r_esi;
    /* 005da476: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5da47bu); f_005c4fec();
    /* 005da47b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005da47c: ret  */ FN_RET(0x005da3ac); r_esp += 4; return;
L_005da47d:; BB(0x005da47d);
    /* 005da47d: mov ecx, esi */ r_ecx = r_esi;
    /* 005da47f: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5da484u); f_005db164();
    /* 005da484: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005da487: jge 0x5da4e6 */ if ((fS==fO)) goto L_005da4e6;
L_005da489:; BB(0x005da489);
    /* 005da489: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 005da48b: mov ecx, esi */ r_ecx = r_esi;
    /* 005da48d: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5da492u); f_005c4fec();
    /* 005da492: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005da493: ret  */ FN_RET(0x005da3ac); r_esp += 4; return;
L_005da494:; BB(0x005da494);
    /* 005da494: test eax, 0x108 */ {  u32 a = r_eax; u32 b = 0x108u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da499: jne 0x5da4d1 */ if (!fZ) goto L_005da4d1;
L_005da49b:; BB(0x005da49b);
    /* 005da49b: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005da49d: jne 0x5da4ba */ if (!fZ) goto L_005da4ba;
L_005da49f:; BB(0x005da49f);
    /* 005da49f: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005da4a1: je 0x5da4e6 */ if (fZ) goto L_005da4e6;
L_005da4a3:; BB(0x005da4a3);
    /* 005da4a3: mov ecx, esi */ r_ecx = r_esi;
    /* 005da4a5: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5da4aau); f_005db164();
    /* 005da4aa: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005da4ad: jge 0x5da4e6 */ if ((fS==fO)) goto L_005da4e6;
L_005da4af:; BB(0x005da4af);
    /* 005da4af: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005da4b1: mov ecx, esi */ r_ecx = r_esi;
    /* 005da4b3: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5da4b8u); f_005c4fec();
    /* 005da4b8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005da4b9: ret  */ FN_RET(0x005da3ac); r_esp += 4; return;
L_005da4ba:; BB(0x005da4ba);
    /* 005da4ba: mov ecx, esi */ r_ecx = r_esi;
    /* 005da4bc: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5da4c1u); f_005db164();
    /* 005da4c1: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005da4c4: jge 0x5da4e6 */ if ((fS==fO)) goto L_005da4e6;
L_005da4c6:; BB(0x005da4c6);
    /* 005da4c6: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005da4c8: mov ecx, esi */ r_ecx = r_esi;
    /* 005da4ca: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5da4cfu); f_005c4fec();
    /* 005da4cf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005da4d0: ret  */ FN_RET(0x005da3ac); r_esp += 4; return;
L_005da4d1:; BB(0x005da4d1);
    /* 005da4d1: mov ecx, esi */ r_ecx = r_esi;
    /* 005da4d3: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5da4d8u); f_005db164();
    /* 005da4d8: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005da4db: jge 0x5da4e6 */ if ((fS==fO)) goto L_005da4e6;
L_005da4dd:; BB(0x005da4dd);
    /* 005da4dd: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 005da4df: mov ecx, esi */ r_ecx = r_esi;
    /* 005da4e1: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5da4e6u); f_005c4fec();
L_005da4e6:; BB(0x005da4e6);
    /* 005da4e6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005da4e7: ret  */ FN_RET(0x005da3ac); r_esp += 4; return;
}

void f_005da3df(void)
{
    FN_ENTER(0x005da3df);
    /* 005da3df: into  */ UNSUP(0x005da3df, "into ");
    /* 005da3e0: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5da3e5u); f_005db164();
    /* 005da3e5: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005da3e8: jge 0x5da4e6 */ if ((fS==fO)) goto L_005da4e6;
L_005da3ee:; BB(0x005da3ee);
    /* 005da3ee: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005da3f0: mov ecx, esi */ r_ecx = r_esi;
    /* 005da3f2: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5da3f7u); f_005c4fec();
    /* 005da3f7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005da3f8: ret  */ FN_RET(0x005da3df); r_esp += 4; return;
L_005da4e6:; BB(0x005da4e6);
    /* 005da4e6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005da4e7: ret  */ FN_RET(0x005da3df); r_esp += 4; return;
}

void f_005da4e8(void) /* sub_5DA4E8 */
{
    FN_ENTER(0x005da4e8);
    /* 005da4e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005da4e9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da4ea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005da4eb: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005da4f0: movsx ebx, word ptr [ecx + 0x1c2] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x1c2u));
    /* 005da4f7: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005da4f9: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005da4fe: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005da500: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005da503: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 005da506: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005da508: movsx ebx, word ptr [ecx + 0x1c4] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x1c4u));
    /* 005da50f: movsx ecx, word ptr [ecx + 0x1c6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x1c6u));
    /* 005da516: movsx ebp, dx */ r_ebp = (u32)(i32)(i16)(u16)r_edx;
    /* 005da519: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005da51b: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005da520: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 005da523: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005da526: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005da528: movsx ebx, dx */ r_ebx = (u32)(i32)(i16)(u16)r_edx;
    /* 005da52b: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005da52d: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005da530: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005da533: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005da535: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 005da538: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005da53a: jge 0x5da545 */ if ((fS==fO)) goto L_005da545;
L_005da53c:; BB(0x005da53c);
    /* 005da53c: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005da53e: jge 0x5da545 */ if ((fS==fO)) goto L_005da545;
L_005da540:; BB(0x005da540);
    /* 005da540: mov esi, 8 */ r_esi = 0x8u;
L_005da545:; BB(0x005da545);
    /* 005da545: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005da547: jge 0x5da550 */ if ((fS==fO)) goto L_005da550;
L_005da549:; BB(0x005da549);
    /* 005da549: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005da54b: jge 0x5da550 */ if ((fS==fO)) goto L_005da550;
L_005da54d:; BB(0x005da54d);
    /* 005da54d: or esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
L_005da550:; BB(0x005da550);
    /* 005da550: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005da552: jge 0x5da55b */ if ((fS==fO)) goto L_005da55b;
L_005da554:; BB(0x005da554);
    /* 005da554: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005da556: jge 0x5da55b */ if ((fS==fO)) goto L_005da55b;
L_005da558:; BB(0x005da558);
    /* 005da558: or esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
L_005da55b:; BB(0x005da55b);
    /* 005da55b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005da55d: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005da55f: mov eax, ebp */ r_eax = r_ebp;
    /* 005da561: jg 0x5da565 */ if ((!fZ&&fS==fO)) goto L_005da565;
L_005da563:; BB(0x005da563);
    /* 005da563: mov eax, ebx */ r_eax = r_ebx;
L_005da565:; BB(0x005da565);
    /* 005da565: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005da567: jg 0x5da56b */ if ((!fZ&&fS==fO)) goto L_005da56b;
L_005da569:; BB(0x005da569);
    /* 005da569: mov eax, edx */ r_eax = r_edx;
L_005da56b:; BB(0x005da56b);
    /* 005da56b: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da56d: jne 0x5da574 */ if (!fZ) goto L_005da574;
L_005da56f:; BB(0x005da56f);
    /* 005da56f: mov ecx, 1 */ r_ecx = 0x1u;
L_005da574:; BB(0x005da574);
    /* 005da574: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da576: jne 0x5da57b */ if (!fZ) goto L_005da57b;
L_005da578:; BB(0x005da578);
    /* 005da578: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_005da57b:; BB(0x005da57b);
    /* 005da57b: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da57d: jne 0x5da582 */ if (!fZ) goto L_005da582;
L_005da57f:; BB(0x005da57f);
    /* 005da57f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_005da582:; BB(0x005da582);
    /* 005da582: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005da585: jl 0x5da58d */ if ((fS!=fO)) goto L_005da58d;
L_005da587:; BB(0x005da587);
    /* 005da587: or esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_005da58d:; BB(0x005da58d);
    /* 005da58d: mov eax, esi */ r_eax = r_esi;
    /* 005da58f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005da590: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da591: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005da592: ret  */ FN_RET(0x005da4e8); r_esp += 4; return;
}

void f_005da594(void) /* sub_5DA594 */
{
    FN_ENTER(0x005da594);
    /* 005da594: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005da595: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005da596: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da597: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005da598: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005da59b: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005da59d: movzx edx, byte ptr [ebp + 0xf3] */ r_edx = (u32)R8((u32)(r_ebp+0xf3u));
    /* 005da5a4: mov eax, dword ptr [ebp + 0xf8] */ r_eax = R32((u32)(r_ebp+0xf8u));
    /* 005da5aa: mov ebx, edx */ r_ebx = r_edx;
    /* 005da5ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da5ae: je 0x5da9ae */ if (fZ) goto L_005da9ae;
L_005da5b4:; BB(0x005da5b4);
    /* 005da5b4: lea ecx, [ebp + 0x1bc] */ r_ecx = (u32)(r_ebp+0x1bcu);
    /* 005da5ba: call 0x5dbdb8 */ r_esp -= 4; W32(r_esp, 0x5da5bfu); f_005dbdb8();
    /* 005da5bf: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005da5c2: cmp eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005da5c5: jge 0x5da5d3 */ if ((fS==fO)) goto L_005da5d3;
L_005da5c7:; BB(0x005da5c7);
    /* 005da5c7: movzx edx, byte ptr [ebp + 0xf3] */ r_edx = (u32)R8((u32)(r_ebp+0xf3u));
    /* 005da5ce: jmp 0x5da9ae */ goto L_005da9ae;
L_005da5d3:; BB(0x005da5d3);
    /* 005da5d3: mov eax, 0x55555556 */ r_eax = 0x55555556u;
    /* 005da5d8: mov esi, dword ptr [ebp + 0xf8] */ r_esi = R32((u32)(r_ebp+0xf8u));
    /* 005da5de: movsx ecx, byte ptr [esi + 0x960] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esi+0x960u));
    /* 005da5e5: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005da5e7: mov edi, ecx */ r_edi = r_ecx;
    /* 005da5e9: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 005da5ec: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005da5ee: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 005da5f1: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005da5f3: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005da5f5: movsx edi, cl */ r_edi = (u32)(i32)(i8)(u8)r_ecx;
    /* 005da5f8: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005da5fd: movsx ecx, word ptr [ebp + 0x1c2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x1c2u));
    /* 005da604: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005da606: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005da609: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005da60c: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005da60e: movsx ecx, word ptr [ebp + 0x1c4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x1c4u));
    /* 005da615: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 005da618: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005da61b: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005da620: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005da622: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005da625: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005da628: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005da62a: movsx ecx, word ptr [ebp + 0x1c6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x1c6u));
    /* 005da631: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 005da634: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 005da638: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005da63d: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005da63f: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005da642: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005da645: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005da647: movsx ecx, word ptr [ebp + 0x1c0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x1c0u));
    /* 005da64e: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 005da651: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005da655: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005da65a: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005da65c: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005da65f: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005da662: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005da664: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 005da667: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005da66b: push 0x7f */ { u32 v = 0x7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005da66d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005da66e: call 0x5ca3d0 */ r_esp -= 4; W32(r_esp, 0x5da673u); f_005ca3d0();
    /* 005da673: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005da676: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da678: je 0x5da67e */ if (fZ) goto L_005da67e;
L_005da67a:; BB(0x005da67a);
    /* 005da67a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005da67c: jmp 0x5da683 */ goto L_005da683;
L_005da67e:; BB(0x005da67e);
    /* 005da67e: mov eax, 1 */ r_eax = 0x1u;
L_005da683:; BB(0x005da683);
    /* 005da683: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 005da686: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005da688: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 005da68c: push 0xf9 */ { u32 v = 0xf9u; r_esp -= 4; W32(r_esp, v); }
    /* 005da691: push dword ptr [ebp + 0xf8] */ { u32 v = R32((u32)(r_ebp+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005da697: call 0x5ca3d0 */ r_esp -= 4; W32(r_esp, 0x5da69cu); f_005ca3d0();
    /* 005da69c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005da69f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da6a1: jne 0x5da6dd */ if (!fZ) goto L_005da6dd;
L_005da6a3:; BB(0x005da6a3);
    /* 005da6a3: push 0xfa */ { u32 v = 0xfau; r_esp -= 4; W32(r_esp, v); }
    /* 005da6a8: push dword ptr [ebp + 0xf8] */ { u32 v = R32((u32)(r_ebp+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005da6ae: call 0x5ca3d0 */ r_esp -= 4; W32(r_esp, 0x5da6b3u); f_005ca3d0();
    /* 005da6b3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005da6b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da6b8: je 0x5da6c1 */ if (fZ) goto L_005da6c1;
L_005da6ba:; BB(0x005da6ba);
    /* 005da6ba: add dword ptr [esp + 0xc], 6 */ { u32 ad = (u32)(r_esp+0xcu);  u32 a = R32(ad); u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005da6bf: jmp 0x5da6dd */ goto L_005da6dd;
L_005da6c1:; BB(0x005da6c1);
    /* 005da6c1: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 005da6c6: push dword ptr [ebp + 0xf8] */ { u32 v = R32((u32)(r_ebp+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005da6cc: call 0x5ca3d0 */ r_esp -= 4; W32(r_esp, 0x5da6d1u); f_005ca3d0();
    /* 005da6d1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005da6d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da6d6: je 0x5da6dd */ if (fZ) goto L_005da6dd;
L_005da6d8:; BB(0x005da6d8);
    /* 005da6d8: add dword ptr [esp + 0xc], 0xc */ { u32 ad = (u32)(r_esp+0xcu);  u32 a = R32(ad); u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_005da6dd:; BB(0x005da6dd);
    /* 005da6dd: push 0xf9 */ { u32 v = 0xf9u; r_esp -= 4; W32(r_esp, v); }
    /* 005da6e2: push dword ptr [ebp + 0xf8] */ { u32 v = R32((u32)(r_ebp+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005da6e8: call 0x5ca3d0 */ r_esp -= 4; W32(r_esp, 0x5da6edu); f_005ca3d0();
    /* 005da6ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005da6f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da6f2: je 0x5da7d0 */ if (fZ) goto L_005da7d0;
L_005da6f8:; BB(0x005da6f8);
    /* 005da6f8: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da6fa: je 0x5da792 */ if (fZ) goto L_005da792;
L_005da700:; BB(0x005da700);
    /* 005da700: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da703: jne 0x5da743 */ if (!fZ) goto L_005da743;
L_005da705:; BB(0x005da705);
    /* 005da705: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005da709: add eax, dword ptr [esp] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005da70c: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 005da710: add edx, dword ptr [esp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005da714: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da716: je 0x5da724 */ if (fZ) goto L_005da724;
L_005da718:; BB(0x005da718);
    /* 005da718: movzx edx, byte ptr [ebp + 0xf3] */ r_edx = (u32)R8((u32)(r_ebp+0xf3u));
    /* 005da71f: jmp 0x5da9ae */ goto L_005da9ae;
L_005da724:; BB(0x005da724);
    /* 005da724: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005da728: movzx edx, byte ptr [eax + 0x92c8f0] */ r_edx = (u32)R8((u32)(r_eax+0x92c8f0u));
    /* 005da72f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005da730: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005da732: call 0x5da9c0 */ r_esp -= 4; W32(r_esp, 0x5da737u); f_005da9c0();
    /* 005da737: movzx edx, byte ptr [ebp + 0xf3] */ r_edx = (u32)R8((u32)(r_ebp+0xf3u));
    /* 005da73e: jmp 0x5da9ae */ goto L_005da9ae;
L_005da743:; BB(0x005da743);
    /* 005da743: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da746: jne 0x5da786 */ if (!fZ) goto L_005da786;
L_005da748:; BB(0x005da748);
    /* 005da748: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005da74c: add eax, dword ptr [esp] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005da74f: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005da753: add edx, dword ptr [esp + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005da757: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da759: je 0x5da767 */ if (fZ) goto L_005da767;
L_005da75b:; BB(0x005da75b);
    /* 005da75b: movzx edx, byte ptr [ebp + 0xf3] */ r_edx = (u32)R8((u32)(r_ebp+0xf3u));
    /* 005da762: jmp 0x5da9ae */ goto L_005da9ae;
L_005da767:; BB(0x005da767);
    /* 005da767: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005da76b: movzx edx, byte ptr [eax + 0x92c8f0] */ r_edx = (u32)R8((u32)(r_eax+0x92c8f0u));
    /* 005da772: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005da773: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005da775: call 0x5da9c0 */ r_esp -= 4; W32(r_esp, 0x5da77au); f_005da9c0();
    /* 005da77a: movzx edx, byte ptr [ebp + 0xf3] */ r_edx = (u32)R8((u32)(r_ebp+0xf3u));
    /* 005da781: jmp 0x5da9ae */ goto L_005da9ae;
L_005da786:; BB(0x005da786);
    /* 005da786: movzx edx, byte ptr [ebp + 0xf3] */ r_edx = (u32)R8((u32)(r_ebp+0xf3u));
    /* 005da78d: jmp 0x5da9ae */ goto L_005da9ae;
L_005da792:; BB(0x005da792);
    /* 005da792: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005da796: add eax, dword ptr [esp] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005da799: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 005da79d: add edx, dword ptr [esp + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005da7a1: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da7a3: je 0x5da7b1 */ if (fZ) goto L_005da7b1;
L_005da7a5:; BB(0x005da7a5);
    /* 005da7a5: movzx edx, byte ptr [ebp + 0xf3] */ r_edx = (u32)R8((u32)(r_ebp+0xf3u));
    /* 005da7ac: jmp 0x5da9ae */ goto L_005da9ae;
L_005da7b1:; BB(0x005da7b1);
    /* 005da7b1: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005da7b5: movzx edx, byte ptr [eax + 0x92c8f0] */ r_edx = (u32)R8((u32)(r_eax+0x92c8f0u));
    /* 005da7bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005da7bd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005da7bf: call 0x5da9c0 */ r_esp -= 4; W32(r_esp, 0x5da7c4u); f_005da9c0();
    /* 005da7c4: movzx edx, byte ptr [ebp + 0xf3] */ r_edx = (u32)R8((u32)(r_ebp+0xf3u));
    /* 005da7cb: jmp 0x5da9ae */ goto L_005da9ae;
L_005da7d0:; BB(0x005da7d0);
    /* 005da7d0: push 0xfa */ { u32 v = 0xfau; r_esp -= 4; W32(r_esp, v); }
    /* 005da7d5: push dword ptr [ebp + 0xf8] */ { u32 v = R32((u32)(r_ebp+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005da7db: call 0x5ca3d0 */ r_esp -= 4; W32(r_esp, 0x5da7e0u); f_005ca3d0();
    /* 005da7e0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005da7e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da7e5: je 0x5da8c3 */ if (fZ) goto L_005da8c3;
L_005da7eb:; BB(0x005da7eb);
    /* 005da7eb: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da7ed: je 0x5da885 */ if (fZ) goto L_005da885;
L_005da7f3:; BB(0x005da7f3);
    /* 005da7f3: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da7f6: jne 0x5da836 */ if (!fZ) goto L_005da836;
L_005da7f8:; BB(0x005da7f8);
    /* 005da7f8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005da7fc: add eax, dword ptr [esp] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005da7ff: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 005da803: add edx, dword ptr [esp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005da807: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da809: je 0x5da817 */ if (fZ) goto L_005da817;
L_005da80b:; BB(0x005da80b);
    /* 005da80b: movzx edx, byte ptr [ebp + 0xf3] */ r_edx = (u32)R8((u32)(r_ebp+0xf3u));
    /* 005da812: jmp 0x5da9ae */ goto L_005da9ae;
L_005da817:; BB(0x005da817);
    /* 005da817: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005da81b: movzx edx, byte ptr [eax + 0x92c8f0] */ r_edx = (u32)R8((u32)(r_eax+0x92c8f0u));
    /* 005da822: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005da823: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005da825: call 0x5da9c0 */ r_esp -= 4; W32(r_esp, 0x5da82au); f_005da9c0();
    /* 005da82a: movzx edx, byte ptr [ebp + 0xf3] */ r_edx = (u32)R8((u32)(r_ebp+0xf3u));
    /* 005da831: jmp 0x5da9ae */ goto L_005da9ae;
L_005da836:; BB(0x005da836);
    /* 005da836: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da839: jne 0x5da879 */ if (!fZ) goto L_005da879;
L_005da83b:; BB(0x005da83b);
    /* 005da83b: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005da83f: add eax, dword ptr [esp] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005da842: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005da846: add edx, dword ptr [esp + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005da84a: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da84c: je 0x5da85a */ if (fZ) goto L_005da85a;
L_005da84e:; BB(0x005da84e);
    /* 005da84e: movzx edx, byte ptr [ebp + 0xf3] */ r_edx = (u32)R8((u32)(r_ebp+0xf3u));
    /* 005da855: jmp 0x5da9ae */ goto L_005da9ae;
L_005da85a:; BB(0x005da85a);
    /* 005da85a: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005da85e: movzx edx, byte ptr [eax + 0x92c8f0] */ r_edx = (u32)R8((u32)(r_eax+0x92c8f0u));
    /* 005da865: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005da866: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005da868: call 0x5da9c0 */ r_esp -= 4; W32(r_esp, 0x5da86du); f_005da9c0();
    /* 005da86d: movzx edx, byte ptr [ebp + 0xf3] */ r_edx = (u32)R8((u32)(r_ebp+0xf3u));
    /* 005da874: jmp 0x5da9ae */ goto L_005da9ae;
L_005da879:; BB(0x005da879);
    /* 005da879: movzx edx, byte ptr [ebp + 0xf3] */ r_edx = (u32)R8((u32)(r_ebp+0xf3u));
    /* 005da880: jmp 0x5da9ae */ goto L_005da9ae;
L_005da885:; BB(0x005da885);
    /* 005da885: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005da889: add eax, dword ptr [esp] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005da88c: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 005da890: add edx, dword ptr [esp + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005da894: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da896: je 0x5da8a4 */ if (fZ) goto L_005da8a4;
L_005da898:; BB(0x005da898);
    /* 005da898: movzx edx, byte ptr [ebp + 0xf3] */ r_edx = (u32)R8((u32)(r_ebp+0xf3u));
    /* 005da89f: jmp 0x5da9ae */ goto L_005da9ae;
L_005da8a4:; BB(0x005da8a4);
    /* 005da8a4: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005da8a8: movzx edx, byte ptr [eax + 0x92c8f0] */ r_edx = (u32)R8((u32)(r_eax+0x92c8f0u));
    /* 005da8af: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005da8b0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005da8b2: call 0x5da9c0 */ r_esp -= 4; W32(r_esp, 0x5da8b7u); f_005da9c0();
    /* 005da8b7: movzx edx, byte ptr [ebp + 0xf3] */ r_edx = (u32)R8((u32)(r_ebp+0xf3u));
    /* 005da8be: jmp 0x5da9ae */ goto L_005da9ae;
L_005da8c3:; BB(0x005da8c3);
    /* 005da8c3: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 005da8c8: push dword ptr [ebp + 0xf8] */ { u32 v = R32((u32)(r_ebp+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005da8ce: call 0x5ca3d0 */ r_esp -= 4; W32(r_esp, 0x5da8d3u); f_005ca3d0();
    /* 005da8d3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005da8d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da8d8: je 0x5da9a7 */ if (fZ) goto L_005da9a7;
L_005da8de:; BB(0x005da8de);
    /* 005da8de: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da8e0: je 0x5da96f */ if (fZ) goto L_005da96f;
L_005da8e6:; BB(0x005da8e6);
    /* 005da8e6: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da8e9: jne 0x5da929 */ if (!fZ) goto L_005da929;
L_005da8eb:; BB(0x005da8eb);
    /* 005da8eb: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005da8ef: add eax, dword ptr [esp] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005da8f2: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 005da8f6: add edx, dword ptr [esp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005da8fa: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da8fc: je 0x5da90a */ if (fZ) goto L_005da90a;
L_005da8fe:; BB(0x005da8fe);
    /* 005da8fe: movzx edx, byte ptr [ebp + 0xf3] */ r_edx = (u32)R8((u32)(r_ebp+0xf3u));
    /* 005da905: jmp 0x5da9ae */ goto L_005da9ae;
L_005da90a:; BB(0x005da90a);
    /* 005da90a: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005da90e: movzx edx, byte ptr [eax + 0x92c8f0] */ r_edx = (u32)R8((u32)(r_eax+0x92c8f0u));
    /* 005da915: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005da916: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005da918: call 0x5da9c0 */ r_esp -= 4; W32(r_esp, 0x5da91du); f_005da9c0();
    /* 005da91d: movzx edx, byte ptr [ebp + 0xf3] */ r_edx = (u32)R8((u32)(r_ebp+0xf3u));
    /* 005da924: jmp 0x5da9ae */ goto L_005da9ae;
L_005da929:; BB(0x005da929);
    /* 005da929: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da92c: jne 0x5da966 */ if (!fZ) goto L_005da966;
L_005da92e:; BB(0x005da92e);
    /* 005da92e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005da932: add eax, dword ptr [esp] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005da935: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005da939: add edx, dword ptr [esp + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005da93d: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da93f: je 0x5da94a */ if (fZ) goto L_005da94a;
L_005da941:; BB(0x005da941);
    /* 005da941: movzx edx, byte ptr [ebp + 0xf3] */ r_edx = (u32)R8((u32)(r_ebp+0xf3u));
    /* 005da948: jmp 0x5da9ae */ goto L_005da9ae;
L_005da94a:; BB(0x005da94a);
    /* 005da94a: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005da94e: movzx edx, byte ptr [eax + 0x92c8f0] */ r_edx = (u32)R8((u32)(r_eax+0x92c8f0u));
    /* 005da955: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005da956: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005da958: call 0x5da9c0 */ r_esp -= 4; W32(r_esp, 0x5da95du); f_005da9c0();
    /* 005da95d: movzx edx, byte ptr [ebp + 0xf3] */ r_edx = (u32)R8((u32)(r_ebp+0xf3u));
    /* 005da964: jmp 0x5da9ae */ goto L_005da9ae;
L_005da966:; BB(0x005da966);
    /* 005da966: movzx edx, byte ptr [ebp + 0xf3] */ r_edx = (u32)R8((u32)(r_ebp+0xf3u));
    /* 005da96d: jmp 0x5da9ae */ goto L_005da9ae;
L_005da96f:; BB(0x005da96f);
    /* 005da96f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005da973: add eax, dword ptr [esp] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005da976: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 005da97a: add edx, dword ptr [esp + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005da97e: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da980: je 0x5da98b */ if (fZ) goto L_005da98b;
L_005da982:; BB(0x005da982);
    /* 005da982: movzx edx, byte ptr [ebp + 0xf3] */ r_edx = (u32)R8((u32)(r_ebp+0xf3u));
    /* 005da989: jmp 0x5da9ae */ goto L_005da9ae;
L_005da98b:; BB(0x005da98b);
    /* 005da98b: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005da98f: movzx edx, byte ptr [eax + 0x92c8f0] */ r_edx = (u32)R8((u32)(r_eax+0x92c8f0u));
    /* 005da996: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005da997: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005da999: call 0x5da9c0 */ r_esp -= 4; W32(r_esp, 0x5da99eu); f_005da9c0();
    /* 005da99e: movzx edx, byte ptr [ebp + 0xf3] */ r_edx = (u32)R8((u32)(r_ebp+0xf3u));
    /* 005da9a5: jmp 0x5da9ae */ goto L_005da9ae;
L_005da9a7:; BB(0x005da9a7);
    /* 005da9a7: movzx edx, byte ptr [ebp + 0xf3] */ r_edx = (u32)R8((u32)(r_ebp+0xf3u));
L_005da9ae:; BB(0x005da9ae);
    /* 005da9ae: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da9b0: mov eax, 0 */ r_eax = 0x0u;
    /* 005da9b5: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 005da9b8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005da9bb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005da9bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da9bd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005da9be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005da9bf: ret  */ FN_RET(0x005da594); r_esp += 4; return;
}

void f_005da9c0(void) /* sub_5DA9C0 */
{
    FN_ENTER(0x005da9c0);
    /* 005da9c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005da9c1: mov esi, ecx */ r_esi = r_ecx;
    /* 005da9c3: mov ecx, esi */ r_ecx = r_esi;
    /* 005da9c5: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5da9cau); f_005db164();
    /* 005da9ca: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005da9cd: jge 0x5da9dc */ if ((fS==fO)) goto L_005da9dc;
L_005da9cf:; BB(0x005da9cf);
    /* 005da9cf: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 005da9d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da9d5: mov ecx, esi */ r_ecx = r_esi;
    /* 005da9d7: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5da9dcu); f_005c4fec();
L_005da9dc:; BB(0x005da9dc);
    /* 005da9dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005da9dd: ret 4 */ FN_RET(0x005da9c0); r_esp += 8; return;
}

void f_005da9e0(void) /* sub_5DA9E0 */
{
    FN_ENTER(0x005da9e0);
    /* 005da9e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005da9e1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005da9e2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da9e3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005da9e4: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005da9e7: mov edi, ecx */ r_edi = r_ecx;
    /* 005da9e9: mov ebx, dword ptr [edi + 0xf8] */ r_ebx = R32((u32)(r_edi+0xf8u));
    /* 005da9ef: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da9f1: je 0x5db15c */ if (fZ) goto L_005db15c;
L_005da9f7:; BB(0x005da9f7);
    /* 005da9f7: mov ecx, edi */ r_ecx = r_edi;
    /* 005da9f9: call 0x5da4e8 */ r_esp -= 4; W32(r_esp, 0x5da9feu); f_005da4e8();
    /* 005da9fe: movsx ebp, byte ptr [ebx + 0x960] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_ebx+0x960u));
    /* 005daa05: movsx ecx, word ptr [edi + 0x1c2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x1c2u));
    /* 005daa0c: mov esi, eax */ r_esi = r_eax;
    /* 005daa0e: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005daa13: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005daa15: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005daa1a: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005daa1d: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005daa20: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005daa22: movsx ecx, word ptr [edi + 0x1c4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x1c4u));
    /* 005daa29: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 005daa2c: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005daa2f: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005daa31: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005daa36: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005daa39: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005daa3c: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005daa3e: movsx ecx, word ptr [edi + 0x1c6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x1c6u));
    /* 005daa45: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 005daa48: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005daa4c: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005daa4e: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005daa53: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005daa56: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005daa59: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005daa5b: movsx ecx, word ptr [edi + 0x1c0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x1c0u));
    /* 005daa62: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 005daa65: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 005daa69: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005daa6b: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005daa6e: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005daa71: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005daa73: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 005daa76: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005daa7a: push 0xf9 */ { u32 v = 0xf9u; r_esp -= 4; W32(r_esp, v); }
    /* 005daa7f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005daa80: call 0x5ca3d0 */ r_esp -= 4; W32(r_esp, 0x5daa85u); f_005ca3d0();
    /* 005daa85: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005daa88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005daa8a: je 0x5dac9c */ if (fZ) goto L_005dac9c;
L_005daa90:; BB(0x005daa90);
    /* 005daa90: test esi, 0x108 */ {  u32 a = r_esi; u32 b = 0x108u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005daa96: je 0x5dab40 */ if (fZ) goto L_005dab40;
L_005daa9c:; BB(0x005daa9c);
    /* 005daa9c: test ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005daaa2: jne 0x5daaf2 */ if (!fZ) goto L_005daaf2;
L_005daaa4:; BB(0x005daaa4);
    /* 005daaa4: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005daaa8: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005daaac: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005daaae: jg 0x5daad1 */ if ((!fZ&&fS==fO)) goto L_005daad1;
L_005daab0:; BB(0x005daab0);
    /* 005daab0: mov ecx, edi */ r_ecx = r_edi;
    /* 005daab2: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5daab7u); f_005db164();
    /* 005daab7: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005daaba: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005daac0:; BB(0x005daac0);
    /* 005daac0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005daac2: mov ecx, edi */ r_ecx = r_edi;
    /* 005daac4: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5daac9u); f_005c4fec();
    /* 005daac9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005daacc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005daacd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005daace: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005daacf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005daad0: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005daad1:; BB(0x005daad1);
    /* 005daad1: mov ecx, edi */ r_ecx = r_edi;
    /* 005daad3: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5daad8u); f_005db164();
    /* 005daad8: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005daadb: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005daae1:; BB(0x005daae1);
    /* 005daae1: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005daae3: mov ecx, edi */ r_ecx = r_edi;
    /* 005daae5: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5daaeau); f_005c4fec();
    /* 005daaea: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005daaed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005daaee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005daaef: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005daaf0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005daaf1: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005daaf2:; BB(0x005daaf2);
    /* 005daaf2: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005daaf6: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005daafa: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005daafc: jg 0x5dab1f */ if ((!fZ&&fS==fO)) goto L_005dab1f;
L_005daafe:; BB(0x005daafe);
    /* 005daafe: mov ecx, edi */ r_ecx = r_edi;
    /* 005dab00: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5dab05u); f_005db164();
    /* 005dab05: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dab08: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005dab0e:; BB(0x005dab0e);
    /* 005dab0e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005dab10: mov ecx, edi */ r_ecx = r_edi;
    /* 005dab12: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5dab17u); f_005c4fec();
    /* 005dab17: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dab1a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dab1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dab1c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dab1d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dab1e: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005dab1f:; BB(0x005dab1f);
    /* 005dab1f: mov ecx, edi */ r_ecx = r_edi;
    /* 005dab21: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5dab26u); f_005db164();
    /* 005dab26: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dab29: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005dab2f:; BB(0x005dab2f);
    /* 005dab2f: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005dab31: mov ecx, edi */ r_ecx = r_edi;
    /* 005dab33: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5dab38u); f_005c4fec();
    /* 005dab38: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dab3b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dab3c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dab3d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dab3e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dab3f: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005dab40:; BB(0x005dab40);
    /* 005dab40: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dab46: je 0x5dabee */ if (fZ) goto L_005dabee;
L_005dab4c:; BB(0x005dab4c);
    /* 005dab4c: test ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dab52: jne 0x5daba1 */ if (!fZ) goto L_005daba1;
L_005dab54:; BB(0x005dab54);
    /* 005dab54: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 005dab57: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 005dab5b: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dab5d: jg 0x5dab80 */ if ((!fZ&&fS==fO)) goto L_005dab80;
L_005dab5f:; BB(0x005dab5f);
    /* 005dab5f: mov ecx, edi */ r_ecx = r_edi;
    /* 005dab61: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5dab66u); f_005db164();
    /* 005dab66: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dab69: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005dab6f:; BB(0x005dab6f);
    /* 005dab6f: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 005dab71: mov ecx, edi */ r_ecx = r_edi;
    /* 005dab73: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5dab78u); f_005c4fec();
    /* 005dab78: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dab7b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dab7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dab7d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dab7e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dab7f: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005dab80:; BB(0x005dab80);
    /* 005dab80: mov ecx, edi */ r_ecx = r_edi;
    /* 005dab82: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5dab87u); f_005db164();
    /* 005dab87: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dab8a: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005dab90:; BB(0x005dab90);
    /* 005dab90: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 005dab92: mov ecx, edi */ r_ecx = r_edi;
    /* 005dab94: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5dab99u); f_005c4fec();
    /* 005dab99: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dab9c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dab9d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dab9e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dab9f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005daba0: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005daba1:; BB(0x005daba1);
    /* 005daba1: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 005daba4: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 005daba8: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dabaa: jg 0x5dabcd */ if ((!fZ&&fS==fO)) goto L_005dabcd;
L_005dabac:; BB(0x005dabac);
    /* 005dabac: mov ecx, edi */ r_ecx = r_edi;
    /* 005dabae: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5dabb3u); f_005db164();
    /* 005dabb3: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dabb6: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005dabbc:; BB(0x005dabbc);
    /* 005dabbc: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005dabbe: mov ecx, edi */ r_ecx = r_edi;
    /* 005dabc0: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5dabc5u); f_005c4fec();
    /* 005dabc5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dabc8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dabc9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dabca: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dabcb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dabcc: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005dabcd:; BB(0x005dabcd);
    /* 005dabcd: mov ecx, edi */ r_ecx = r_edi;
    /* 005dabcf: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5dabd4u); f_005db164();
    /* 005dabd4: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dabd7: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005dabdd:; BB(0x005dabdd);
    /* 005dabdd: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005dabdf: mov ecx, edi */ r_ecx = r_edi;
    /* 005dabe1: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5dabe6u); f_005c4fec();
    /* 005dabe6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dabe9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dabea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dabeb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dabec: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dabed: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005dabee:; BB(0x005dabee);
    /* 005dabee: test esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dabf4: je 0x5db15c */ if (fZ) goto L_005db15c;
L_005dabfa:; BB(0x005dabfa);
    /* 005dabfa: test ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dac00: jne 0x5dac4f */ if (!fZ) goto L_005dac4f;
L_005dac02:; BB(0x005dac02);
    /* 005dac02: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 005dac05: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005dac09: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dac0b: jg 0x5dac2e */ if ((!fZ&&fS==fO)) goto L_005dac2e;
L_005dac0d:; BB(0x005dac0d);
    /* 005dac0d: mov ecx, edi */ r_ecx = r_edi;
    /* 005dac0f: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5dac14u); f_005db164();
    /* 005dac14: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dac17: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005dac1d:; BB(0x005dac1d);
    /* 005dac1d: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005dac1f: mov ecx, edi */ r_ecx = r_edi;
    /* 005dac21: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5dac26u); f_005c4fec();
    /* 005dac26: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dac29: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dac2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dac2b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dac2c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dac2d: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005dac2e:; BB(0x005dac2e);
    /* 005dac2e: mov ecx, edi */ r_ecx = r_edi;
    /* 005dac30: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5dac35u); f_005db164();
    /* 005dac35: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dac38: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005dac3e:; BB(0x005dac3e);
    /* 005dac3e: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005dac40: mov ecx, edi */ r_ecx = r_edi;
    /* 005dac42: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5dac47u); f_005c4fec();
    /* 005dac47: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dac4a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dac4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dac4c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dac4d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dac4e: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005dac4f:; BB(0x005dac4f);
    /* 005dac4f: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 005dac52: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005dac56: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dac58: jg 0x5dac7b */ if ((!fZ&&fS==fO)) goto L_005dac7b;
L_005dac5a:; BB(0x005dac5a);
    /* 005dac5a: mov ecx, edi */ r_ecx = r_edi;
    /* 005dac5c: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5dac61u); f_005db164();
    /* 005dac61: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dac64: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005dac6a:; BB(0x005dac6a);
    /* 005dac6a: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005dac6c: mov ecx, edi */ r_ecx = r_edi;
    /* 005dac6e: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5dac73u); f_005c4fec();
    /* 005dac73: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dac76: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dac77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dac78: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dac79: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dac7a: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005dac7b:; BB(0x005dac7b);
    /* 005dac7b: mov ecx, edi */ r_ecx = r_edi;
    /* 005dac7d: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5dac82u); f_005db164();
    /* 005dac82: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dac85: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005dac8b:; BB(0x005dac8b);
    /* 005dac8b: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 005dac8d: mov ecx, edi */ r_ecx = r_edi;
    /* 005dac8f: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5dac94u); f_005c4fec();
    /* 005dac94: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dac97: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dac98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dac99: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dac9a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dac9b: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005dac9c:; BB(0x005dac9c);
    /* 005dac9c: push 0xfa */ { u32 v = 0xfau; r_esp -= 4; W32(r_esp, v); }
    /* 005daca1: push dword ptr [edi + 0xf8] */ { u32 v = R32((u32)(r_edi+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005daca7: call 0x5ca3d0 */ r_esp -= 4; W32(r_esp, 0x5dacacu); f_005ca3d0();
    /* 005dacac: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dacaf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dacb1: je 0x5daec3 */ if (fZ) goto L_005daec3;
L_005dacb7:; BB(0x005dacb7);
    /* 005dacb7: test esi, 0x110 */ {  u32 a = r_esi; u32 b = 0x110u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dacbd: je 0x5dad65 */ if (fZ) goto L_005dad65;
L_005dacc3:; BB(0x005dacc3);
    /* 005dacc3: test ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dacc9: jne 0x5dad18 */ if (!fZ) goto L_005dad18;
L_005daccb:; BB(0x005daccb);
    /* 005daccb: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 005dacce: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 005dacd2: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dacd4: jg 0x5dacf7 */ if ((!fZ&&fS==fO)) goto L_005dacf7;
L_005dacd6:; BB(0x005dacd6);
    /* 005dacd6: mov ecx, edi */ r_ecx = r_edi;
    /* 005dacd8: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5dacddu); f_005db164();
    /* 005dacdd: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dace0: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005dace6:; BB(0x005dace6);
    /* 005dace6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005dace8: mov ecx, edi */ r_ecx = r_edi;
    /* 005dacea: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5dacefu); f_005c4fec();
    /* 005dacef: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dacf2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dacf3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dacf4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dacf5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dacf6: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005dacf7:; BB(0x005dacf7);
    /* 005dacf7: mov ecx, edi */ r_ecx = r_edi;
    /* 005dacf9: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5dacfeu); f_005db164();
    /* 005dacfe: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dad01: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005dad07:; BB(0x005dad07);
    /* 005dad07: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005dad09: mov ecx, edi */ r_ecx = r_edi;
    /* 005dad0b: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5dad10u); f_005c4fec();
    /* 005dad10: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dad13: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dad14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dad15: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dad16: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dad17: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005dad18:; BB(0x005dad18);
    /* 005dad18: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 005dad1b: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 005dad1f: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dad21: jg 0x5dad44 */ if ((!fZ&&fS==fO)) goto L_005dad44;
L_005dad23:; BB(0x005dad23);
    /* 005dad23: mov ecx, edi */ r_ecx = r_edi;
    /* 005dad25: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5dad2au); f_005db164();
    /* 005dad2a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dad2d: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005dad33:; BB(0x005dad33);
    /* 005dad33: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005dad35: mov ecx, edi */ r_ecx = r_edi;
    /* 005dad37: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5dad3cu); f_005c4fec();
    /* 005dad3c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dad3f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dad40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dad41: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dad42: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dad43: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005dad44:; BB(0x005dad44);
    /* 005dad44: mov ecx, edi */ r_ecx = r_edi;
    /* 005dad46: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5dad4bu); f_005db164();
    /* 005dad4b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dad4e: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005dad54:; BB(0x005dad54);
    /* 005dad54: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005dad56: mov ecx, edi */ r_ecx = r_edi;
    /* 005dad58: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5dad5du); f_005c4fec();
    /* 005dad5d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dad60: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dad61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dad62: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dad63: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dad64: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005dad65:; BB(0x005dad65);
    /* 005dad65: test esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dad6b: je 0x5dae15 */ if (fZ) goto L_005dae15;
L_005dad71:; BB(0x005dad71);
    /* 005dad71: test ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dad77: jne 0x5dadc7 */ if (!fZ) goto L_005dadc7;
L_005dad79:; BB(0x005dad79);
    /* 005dad79: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005dad7d: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005dad81: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dad83: jg 0x5dada6 */ if ((!fZ&&fS==fO)) goto L_005dada6;
L_005dad85:; BB(0x005dad85);
    /* 005dad85: mov ecx, edi */ r_ecx = r_edi;
    /* 005dad87: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5dad8cu); f_005db164();
    /* 005dad8c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dad8f: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005dad95:; BB(0x005dad95);
    /* 005dad95: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005dad97: mov ecx, edi */ r_ecx = r_edi;
    /* 005dad99: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5dad9eu); f_005c4fec();
    /* 005dad9e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dada1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dada2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dada3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dada4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dada5: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005dada6:; BB(0x005dada6);
    /* 005dada6: mov ecx, edi */ r_ecx = r_edi;
    /* 005dada8: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5dadadu); f_005db164();
    /* 005dadad: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dadb0: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005dadb6:; BB(0x005dadb6);
    /* 005dadb6: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005dadb8: mov ecx, edi */ r_ecx = r_edi;
    /* 005dadba: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5dadbfu); f_005c4fec();
    /* 005dadbf: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dadc2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dadc3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dadc4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dadc5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dadc6: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005dadc7:; BB(0x005dadc7);
    /* 005dadc7: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005dadcb: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005dadcf: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dadd1: jg 0x5dadf4 */ if ((!fZ&&fS==fO)) goto L_005dadf4;
L_005dadd3:; BB(0x005dadd3);
    /* 005dadd3: mov ecx, edi */ r_ecx = r_edi;
    /* 005dadd5: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5daddau); f_005db164();
    /* 005dadda: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005daddd: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005dade3:; BB(0x005dade3);
    /* 005dade3: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 005dade5: mov ecx, edi */ r_ecx = r_edi;
    /* 005dade7: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5dadecu); f_005c4fec();
    /* 005dadec: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dadef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dadf0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dadf1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dadf2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dadf3: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005dadf4:; BB(0x005dadf4);
    /* 005dadf4: mov ecx, edi */ r_ecx = r_edi;
    /* 005dadf6: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5dadfbu); f_005db164();
    /* 005dadfb: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dadfe: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005dae04:; BB(0x005dae04);
    /* 005dae04: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005dae06: mov ecx, edi */ r_ecx = r_edi;
    /* 005dae08: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5dae0du); f_005c4fec();
    /* 005dae0d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dae10: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dae11: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dae12: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dae13: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dae14: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005dae15:; BB(0x005dae15);
    /* 005dae15: test esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dae1b: je 0x5db15c */ if (fZ) goto L_005db15c;
L_005dae21:; BB(0x005dae21);
    /* 005dae21: test ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dae27: jne 0x5dae76 */ if (!fZ) goto L_005dae76;
L_005dae29:; BB(0x005dae29);
    /* 005dae29: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 005dae2c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005dae30: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dae32: jg 0x5dae55 */ if ((!fZ&&fS==fO)) goto L_005dae55;
L_005dae34:; BB(0x005dae34);
    /* 005dae34: mov ecx, edi */ r_ecx = r_edi;
    /* 005dae36: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5dae3bu); f_005db164();
    /* 005dae3b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dae3e: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005dae44:; BB(0x005dae44);
    /* 005dae44: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005dae46: mov ecx, edi */ r_ecx = r_edi;
    /* 005dae48: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5dae4du); f_005c4fec();
    /* 005dae4d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dae50: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dae51: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dae52: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dae53: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dae54: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005dae55:; BB(0x005dae55);
    /* 005dae55: mov ecx, edi */ r_ecx = r_edi;
    /* 005dae57: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5dae5cu); f_005db164();
    /* 005dae5c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dae5f: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005dae65:; BB(0x005dae65);
    /* 005dae65: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005dae67: mov ecx, edi */ r_ecx = r_edi;
    /* 005dae69: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5dae6eu); f_005c4fec();
    /* 005dae6e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dae71: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dae72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dae73: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dae74: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dae75: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005dae76:; BB(0x005dae76);
    /* 005dae76: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 005dae79: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005dae7d: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dae7f: jg 0x5daea2 */ if ((!fZ&&fS==fO)) goto L_005daea2;
L_005dae81:; BB(0x005dae81);
    /* 005dae81: mov ecx, edi */ r_ecx = r_edi;
    /* 005dae83: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5dae88u); f_005db164();
    /* 005dae88: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dae8b: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005dae91:; BB(0x005dae91);
    /* 005dae91: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005dae93: mov ecx, edi */ r_ecx = r_edi;
    /* 005dae95: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5dae9au); f_005c4fec();
    /* 005dae9a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dae9d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dae9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dae9f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005daea0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005daea1: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005daea2:; BB(0x005daea2);
    /* 005daea2: mov ecx, edi */ r_ecx = r_edi;
    /* 005daea4: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5daea9u); f_005db164();
    /* 005daea9: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005daeac: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005daeb2:; BB(0x005daeb2);
    /* 005daeb2: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005daeb4: mov ecx, edi */ r_ecx = r_edi;
    /* 005daeb6: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5daebbu); f_005c4fec();
    /* 005daebb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005daebe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005daebf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005daec0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005daec1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005daec2: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005daec3:; BB(0x005daec3);
    /* 005daec3: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 005daec8: push dword ptr [edi + 0xf8] */ { u32 v = R32((u32)(r_edi+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005daece: call 0x5ca3d0 */ r_esp -= 4; W32(r_esp, 0x5daed3u); f_005ca3d0();
    /* 005daed3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005daed6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005daed8: je 0x5db15c */ if (fZ) goto L_005db15c;
L_005daede:; BB(0x005daede);
    /* 005daede: test esi, 0x120 */ {  u32 a = r_esi; u32 b = 0x120u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005daee4: je 0x5dafba */ if (fZ) goto L_005dafba;
L_005daeea:; BB(0x005daeea);
    /* 005daeea: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005daeee: cmp eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005daef1: jg 0x5daf99 */ if ((!fZ&&fS==fO)) goto L_005daf99;
L_005daef7:; BB(0x005daef7);
    /* 005daef7: test ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005daefd: jne 0x5daf4c */ if (!fZ) goto L_005daf4c;
L_005daeff:; BB(0x005daeff);
    /* 005daeff: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 005daf02: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005daf06: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005daf08: jg 0x5daf2b */ if ((!fZ&&fS==fO)) goto L_005daf2b;
L_005daf0a:; BB(0x005daf0a);
    /* 005daf0a: mov ecx, edi */ r_ecx = r_edi;
    /* 005daf0c: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5daf11u); f_005db164();
    /* 005daf11: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005daf14: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005daf1a:; BB(0x005daf1a);
    /* 005daf1a: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005daf1c: mov ecx, edi */ r_ecx = r_edi;
    /* 005daf1e: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5daf23u); f_005c4fec();
    /* 005daf23: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005daf26: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005daf27: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005daf28: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005daf29: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005daf2a: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005daf2b:; BB(0x005daf2b);
    /* 005daf2b: mov ecx, edi */ r_ecx = r_edi;
    /* 005daf2d: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5daf32u); f_005db164();
    /* 005daf32: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005daf35: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005daf3b:; BB(0x005daf3b);
    /* 005daf3b: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005daf3d: mov ecx, edi */ r_ecx = r_edi;
    /* 005daf3f: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5daf44u); f_005c4fec();
    /* 005daf44: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005daf47: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005daf48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005daf49: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005daf4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005daf4b: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005daf4c:; BB(0x005daf4c);
    /* 005daf4c: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 005daf4f: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005daf53: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005daf55: jg 0x5daf78 */ if ((!fZ&&fS==fO)) goto L_005daf78;
L_005daf57:; BB(0x005daf57);
    /* 005daf57: mov ecx, edi */ r_ecx = r_edi;
    /* 005daf59: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5daf5eu); f_005db164();
    /* 005daf5e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005daf61: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005daf67:; BB(0x005daf67);
    /* 005daf67: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005daf69: mov ecx, edi */ r_ecx = r_edi;
    /* 005daf6b: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5daf70u); f_005c4fec();
    /* 005daf70: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005daf73: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005daf74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005daf75: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005daf76: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005daf77: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005daf78:; BB(0x005daf78);
    /* 005daf78: mov ecx, edi */ r_ecx = r_edi;
    /* 005daf7a: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5daf7fu); f_005db164();
    /* 005daf7f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005daf82: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005daf88:; BB(0x005daf88);
    /* 005daf88: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 005daf8a: mov ecx, edi */ r_ecx = r_edi;
    /* 005daf8c: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5daf91u); f_005c4fec();
    /* 005daf91: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005daf94: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005daf95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005daf96: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005daf97: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005daf98: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005daf99:; BB(0x005daf99);
    /* 005daf99: mov ecx, edi */ r_ecx = r_edi;
    /* 005daf9b: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5dafa0u); f_005db164();
    /* 005dafa0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dafa3: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005dafa9:; BB(0x005dafa9);
    /* 005dafa9: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005dafab: mov ecx, edi */ r_ecx = r_edi;
    /* 005dafad: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5dafb2u); f_005c4fec();
    /* 005dafb2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dafb5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dafb6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dafb7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dafb8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dafb9: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005dafba:; BB(0x005dafba);
    /* 005dafba: test esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dafc0: je 0x5db098 */ if (fZ) goto L_005db098;
L_005dafc6:; BB(0x005dafc6);
    /* 005dafc6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005dafca: cmp eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dafcd: jg 0x5db077 */ if ((!fZ&&fS==fO)) goto L_005db077;
L_005dafd3:; BB(0x005dafd3);
    /* 005dafd3: test ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dafd9: jne 0x5db029 */ if (!fZ) goto L_005db029;
L_005dafdb:; BB(0x005dafdb);
    /* 005dafdb: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005dafdf: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005dafe3: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dafe5: jg 0x5db008 */ if ((!fZ&&fS==fO)) goto L_005db008;
L_005dafe7:; BB(0x005dafe7);
    /* 005dafe7: mov ecx, edi */ r_ecx = r_edi;
    /* 005dafe9: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5dafeeu); f_005db164();
    /* 005dafee: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005daff1: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005daff7:; BB(0x005daff7);
    /* 005daff7: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 005daff9: mov ecx, edi */ r_ecx = r_edi;
    /* 005daffb: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5db000u); f_005c4fec();
    /* 005db000: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005db003: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005db004: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db005: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005db006: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005db007: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005db008:; BB(0x005db008);
    /* 005db008: mov ecx, edi */ r_ecx = r_edi;
    /* 005db00a: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5db00fu); f_005db164();
    /* 005db00f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db012: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005db018:; BB(0x005db018);
    /* 005db018: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005db01a: mov ecx, edi */ r_ecx = r_edi;
    /* 005db01c: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5db021u); f_005c4fec();
    /* 005db021: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005db024: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005db025: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db026: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005db027: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005db028: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005db029:; BB(0x005db029);
    /* 005db029: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005db02d: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005db031: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db033: jg 0x5db056 */ if ((!fZ&&fS==fO)) goto L_005db056;
L_005db035:; BB(0x005db035);
    /* 005db035: mov ecx, edi */ r_ecx = r_edi;
    /* 005db037: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5db03cu); f_005db164();
    /* 005db03c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db03f: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005db045:; BB(0x005db045);
    /* 005db045: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005db047: mov ecx, edi */ r_ecx = r_edi;
    /* 005db049: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5db04eu); f_005c4fec();
    /* 005db04e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005db051: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005db052: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db053: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005db054: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005db055: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005db056:; BB(0x005db056);
    /* 005db056: mov ecx, edi */ r_ecx = r_edi;
    /* 005db058: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5db05du); f_005db164();
    /* 005db05d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db060: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005db066:; BB(0x005db066);
    /* 005db066: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005db068: mov ecx, edi */ r_ecx = r_edi;
    /* 005db06a: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5db06fu); f_005c4fec();
    /* 005db06f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005db072: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005db073: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db074: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005db075: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005db076: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005db077:; BB(0x005db077);
    /* 005db077: mov ecx, edi */ r_ecx = r_edi;
    /* 005db079: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5db07eu); f_005db164();
    /* 005db07e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db081: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005db087:; BB(0x005db087);
    /* 005db087: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005db089: mov ecx, edi */ r_ecx = r_edi;
    /* 005db08b: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5db090u); f_005c4fec();
    /* 005db090: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005db093: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005db094: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db095: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005db096: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005db097: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005db098:; BB(0x005db098);
    /* 005db098: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db09e: je 0x5db15c */ if (fZ) goto L_005db15c;
L_005db0a4:; BB(0x005db0a4);
    /* 005db0a4: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005db0a8: cmp eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db0ab: jg 0x5db147 */ if ((!fZ&&fS==fO)) goto L_005db147;
L_005db0b1:; BB(0x005db0b1);
    /* 005db0b1: test ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db0b7: jne 0x5db102 */ if (!fZ) goto L_005db102;
L_005db0b9:; BB(0x005db0b9);
    /* 005db0b9: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 005db0bc: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 005db0c0: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db0c2: jg 0x5db0e5 */ if ((!fZ&&fS==fO)) goto L_005db0e5;
L_005db0c4:; BB(0x005db0c4);
    /* 005db0c4: mov ecx, edi */ r_ecx = r_edi;
    /* 005db0c6: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5db0cbu); f_005db164();
    /* 005db0cb: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db0ce: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005db0d4:; BB(0x005db0d4);
    /* 005db0d4: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 005db0d6: mov ecx, edi */ r_ecx = r_edi;
    /* 005db0d8: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5db0ddu); f_005c4fec();
    /* 005db0dd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005db0e0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005db0e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db0e2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005db0e3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005db0e4: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005db0e5:; BB(0x005db0e5);
    /* 005db0e5: mov ecx, edi */ r_ecx = r_edi;
    /* 005db0e7: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5db0ecu); f_005db164();
    /* 005db0ec: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db0ef: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005db0f1:; BB(0x005db0f1);
    /* 005db0f1: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 005db0f3: mov ecx, edi */ r_ecx = r_edi;
    /* 005db0f5: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5db0fau); f_005c4fec();
    /* 005db0fa: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005db0fd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005db0fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db0ff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005db100: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005db101: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005db102:; BB(0x005db102);
    /* 005db102: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 005db105: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 005db109: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db10b: jg 0x5db12a */ if ((!fZ&&fS==fO)) goto L_005db12a;
L_005db10d:; BB(0x005db10d);
    /* 005db10d: mov ecx, edi */ r_ecx = r_edi;
    /* 005db10f: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5db114u); f_005db164();
    /* 005db114: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db117: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005db119:; BB(0x005db119);
    /* 005db119: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005db11b: mov ecx, edi */ r_ecx = r_edi;
    /* 005db11d: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5db122u); f_005c4fec();
    /* 005db122: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005db125: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005db126: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db127: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005db128: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005db129: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005db12a:; BB(0x005db12a);
    /* 005db12a: mov ecx, edi */ r_ecx = r_edi;
    /* 005db12c: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5db131u); f_005db164();
    /* 005db131: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db134: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005db136:; BB(0x005db136);
    /* 005db136: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005db138: mov ecx, edi */ r_ecx = r_edi;
    /* 005db13a: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5db13fu); f_005c4fec();
    /* 005db13f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005db142: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005db143: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db144: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005db145: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005db146: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
L_005db147:; BB(0x005db147);
    /* 005db147: mov ecx, edi */ r_ecx = r_edi;
    /* 005db149: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5db14eu); f_005db164();
    /* 005db14e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db151: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005db153:; BB(0x005db153);
    /* 005db153: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005db155: mov ecx, edi */ r_ecx = r_edi;
    /* 005db157: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5db15cu); f_005c4fec();
L_005db15c:; BB(0x005db15c);
    /* 005db15c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005db15f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005db160: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db161: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005db162: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005db163: ret  */ FN_RET(0x005da9e0); r_esp += 4; return;
}

void f_005dafc0(void)
{
    FN_ENTER(0x005dafc0);
    /* 005dafc0: je 0x5db098 */ if (fZ) goto L_005db098;
L_005dafc6:; BB(0x005dafc6);
    /* 005dafc6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005dafca: cmp eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dafcd: jg 0x5db077 */ if ((!fZ&&fS==fO)) goto L_005db077;
L_005dafd3:; BB(0x005dafd3);
    /* 005dafd3: test ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dafd9: jne 0x5db029 */ if (!fZ) goto L_005db029;
L_005dafdb:; BB(0x005dafdb);
    /* 005dafdb: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005dafdf: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005dafe3: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dafe5: jg 0x5db008 */ if ((!fZ&&fS==fO)) goto L_005db008;
L_005dafe7:; BB(0x005dafe7);
    /* 005dafe7: mov ecx, edi */ r_ecx = r_edi;
    /* 005dafe9: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5dafeeu); f_005db164();
    /* 005dafee: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005daff1: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005daff7:; BB(0x005daff7);
    /* 005daff7: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 005daff9: mov ecx, edi */ r_ecx = r_edi;
    /* 005daffb: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5db000u); f_005c4fec();
    /* 005db000: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005db003: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005db004: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db005: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005db006: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005db007: ret  */ FN_RET(0x005dafc0); r_esp += 4; return;
L_005db008:; BB(0x005db008);
    /* 005db008: mov ecx, edi */ r_ecx = r_edi;
    /* 005db00a: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5db00fu); f_005db164();
    /* 005db00f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db012: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005db018:; BB(0x005db018);
    /* 005db018: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005db01a: mov ecx, edi */ r_ecx = r_edi;
    /* 005db01c: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5db021u); f_005c4fec();
    /* 005db021: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005db024: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005db025: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db026: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005db027: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005db028: ret  */ FN_RET(0x005dafc0); r_esp += 4; return;
L_005db029:; BB(0x005db029);
    /* 005db029: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005db02d: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005db031: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db033: jg 0x5db056 */ if ((!fZ&&fS==fO)) goto L_005db056;
L_005db035:; BB(0x005db035);
    /* 005db035: mov ecx, edi */ r_ecx = r_edi;
    /* 005db037: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5db03cu); f_005db164();
    /* 005db03c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db03f: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005db045:; BB(0x005db045);
    /* 005db045: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005db047: mov ecx, edi */ r_ecx = r_edi;
    /* 005db049: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5db04eu); f_005c4fec();
    /* 005db04e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005db051: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005db052: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db053: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005db054: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005db055: ret  */ FN_RET(0x005dafc0); r_esp += 4; return;
L_005db056:; BB(0x005db056);
    /* 005db056: mov ecx, edi */ r_ecx = r_edi;
    /* 005db058: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5db05du); f_005db164();
    /* 005db05d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db060: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005db066:; BB(0x005db066);
    /* 005db066: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005db068: mov ecx, edi */ r_ecx = r_edi;
    /* 005db06a: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5db06fu); f_005c4fec();
    /* 005db06f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005db072: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005db073: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db074: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005db075: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005db076: ret  */ FN_RET(0x005dafc0); r_esp += 4; return;
L_005db077:; BB(0x005db077);
    /* 005db077: mov ecx, edi */ r_ecx = r_edi;
    /* 005db079: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5db07eu); f_005db164();
    /* 005db07e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db081: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005db087:; BB(0x005db087);
    /* 005db087: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005db089: mov ecx, edi */ r_ecx = r_edi;
    /* 005db08b: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5db090u); f_005c4fec();
    /* 005db090: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005db093: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005db094: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db095: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005db096: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005db097: ret  */ FN_RET(0x005dafc0); r_esp += 4; return;
L_005db098:; BB(0x005db098);
    /* 005db098: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db09e: je 0x5db15c */ if (fZ) goto L_005db15c;
L_005db0a4:; BB(0x005db0a4);
    /* 005db0a4: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005db0a8: cmp eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db0ab: jg 0x5db147 */ if ((!fZ&&fS==fO)) goto L_005db147;
L_005db0b1:; BB(0x005db0b1);
    /* 005db0b1: test ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db0b7: jne 0x5db102 */ if (!fZ) goto L_005db102;
L_005db0b9:; BB(0x005db0b9);
    /* 005db0b9: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 005db0bc: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 005db0c0: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db0c2: jg 0x5db0e5 */ if ((!fZ&&fS==fO)) goto L_005db0e5;
L_005db0c4:; BB(0x005db0c4);
    /* 005db0c4: mov ecx, edi */ r_ecx = r_edi;
    /* 005db0c6: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5db0cbu); f_005db164();
    /* 005db0cb: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db0ce: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005db0d4:; BB(0x005db0d4);
    /* 005db0d4: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 005db0d6: mov ecx, edi */ r_ecx = r_edi;
    /* 005db0d8: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5db0ddu); f_005c4fec();
    /* 005db0dd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005db0e0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005db0e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db0e2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005db0e3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005db0e4: ret  */ FN_RET(0x005dafc0); r_esp += 4; return;
L_005db0e5:; BB(0x005db0e5);
    /* 005db0e5: mov ecx, edi */ r_ecx = r_edi;
    /* 005db0e7: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5db0ecu); f_005db164();
    /* 005db0ec: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db0ef: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005db0f1:; BB(0x005db0f1);
    /* 005db0f1: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 005db0f3: mov ecx, edi */ r_ecx = r_edi;
    /* 005db0f5: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5db0fau); f_005c4fec();
    /* 005db0fa: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005db0fd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005db0fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db0ff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005db100: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005db101: ret  */ FN_RET(0x005dafc0); r_esp += 4; return;
L_005db102:; BB(0x005db102);
    /* 005db102: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 005db105: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 005db109: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db10b: jg 0x5db12a */ if ((!fZ&&fS==fO)) goto L_005db12a;
L_005db10d:; BB(0x005db10d);
    /* 005db10d: mov ecx, edi */ r_ecx = r_edi;
    /* 005db10f: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5db114u); f_005db164();
    /* 005db114: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db117: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005db119:; BB(0x005db119);
    /* 005db119: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005db11b: mov ecx, edi */ r_ecx = r_edi;
    /* 005db11d: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5db122u); f_005c4fec();
    /* 005db122: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005db125: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005db126: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db127: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005db128: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005db129: ret  */ FN_RET(0x005dafc0); r_esp += 4; return;
L_005db12a:; BB(0x005db12a);
    /* 005db12a: mov ecx, edi */ r_ecx = r_edi;
    /* 005db12c: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5db131u); f_005db164();
    /* 005db131: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db134: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005db136:; BB(0x005db136);
    /* 005db136: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005db138: mov ecx, edi */ r_ecx = r_edi;
    /* 005db13a: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5db13fu); f_005c4fec();
    /* 005db13f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005db142: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005db143: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db144: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005db145: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005db146: ret  */ FN_RET(0x005dafc0); r_esp += 4; return;
L_005db147:; BB(0x005db147);
    /* 005db147: mov ecx, edi */ r_ecx = r_edi;
    /* 005db149: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5db14eu); f_005db164();
    /* 005db14e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db151: jge 0x5db15c */ if ((fS==fO)) goto L_005db15c;
L_005db153:; BB(0x005db153);
    /* 005db153: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005db155: mov ecx, edi */ r_ecx = r_edi;
    /* 005db157: call 0x5c4fec */ r_esp -= 4; W32(r_esp, 0x5db15cu); f_005c4fec();
L_005db15c:; BB(0x005db15c);
    /* 005db15c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005db15f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005db160: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db161: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005db162: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005db163: ret  */ FN_RET(0x005dafc0); r_esp += 4; return;
}

