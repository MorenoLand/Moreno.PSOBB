#include "protos.h"

void f_006ec06c(void) /* sub_6EC06C */
{
    FN_ENTER(0x006ec06c);
    /* 006ec06c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ec06d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ec06e: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ec071: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006ec073: mov eax, dword ptr [ebp + 0xac] */ r_eax = R32((u32)(r_ebp+0xacu));
    /* 006ec079: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ec07b: je 0x6ec1c2 */ if (fZ) goto L_006ec1c2;
L_006ec081:; BB(0x006ec081);
    /* 006ec081: movzx eax, word ptr [ebp + 0xa8] */ r_eax = (u32)R16((u32)(r_ebp+0xa8u));
    /* 006ec088: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ec08b: jl 0x6ec093 */ if ((fS!=fO)) goto L_006ec093;
L_006ec08d:; BB(0x006ec08d);
    /* 006ec08d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ec090: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ec091: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ec092: ret  */ FN_RET(0x006ec06c); r_esp += 4; return;
L_006ec093:; BB(0x006ec093);
    /* 006ec093: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ec094: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6ec099u); f_0068d5a8();
    /* 006ec099: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ec09a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ec09c: je 0x6ec1c2 */ if (fZ) goto L_006ec1c2;
L_006ec0a2:; BB(0x006ec0a2);
    /* 006ec0a2: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 006ec0a5: mov ebx, dword ptr [eax + 0x3c] */ r_ebx = R32((u32)(r_eax+0x3cu));
    /* 006ec0a8: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 006ec0ab: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006ec0ae: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006ec0b2: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006ec0b6: movsx eax, word ptr [ebp + 0x8a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8au));
    /* 006ec0bd: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ec0c0: je 0x6ec1c8 */ if (fZ) goto L_006ec1c8;
L_006ec0c6:; BB(0x006ec0c6);
    /* 006ec0c6: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ec0c9: je 0x6ec0e3 */ if (fZ) goto L_006ec0e3;
L_006ec0cb:; BB(0x006ec0cb);
    /* 006ec0cb: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ec0ce: jne 0x6ec0d7 */ if (!fZ) goto L_006ec0d7;
L_006ec0d0:; BB(0x006ec0d0);
    /* 006ec0d0: mov edx, 0xd */ r_edx = 0xdu;
    /* 006ec0d5: jmp 0x6ec0e8 */ goto L_006ec0e8;
L_006ec0d7:; BB(0x006ec0d7);
    /* 006ec0d7: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ec0da: jne 0x6ec0e8 */ if (!fZ) goto L_006ec0e8;
L_006ec0dc:; BB(0x006ec0dc);
    /* 006ec0dc: mov edx, 0xa */ r_edx = 0xau;
    /* 006ec0e1: jmp 0x6ec0e8 */ goto L_006ec0e8;
L_006ec0e3:; BB(0x006ec0e3);
    /* 006ec0e3: mov edx, 0x10 */ r_edx = 0x10u;
L_006ec0e8:; BB(0x006ec0e8);
    /* 006ec0e8: movsx eax, word ptr [ebp + 0xa4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xa4u));
    /* 006ec0ef: movzx ebp, word ptr [ebp + 0xa8] */ r_ebp = (u32)R16((u32)(r_ebp+0xa8u));
    /* 006ec0f6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ec0f7: movsx ebx, dx */ r_ebx = (u32)(i32)(i16)(u16)r_edx;
    /* 006ec0fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ec0fb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ec0fc: call 0x6e1fc8 */ r_esp -= 4; W32(r_esp, 0x6ec101u); f_006e1fc8();
    /* 006ec101: mov ebp, eax */ r_ebp = r_eax;
    /* 006ec103: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 006ec107: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006ec109: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 006ec10d: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 006ec111: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 006ec115: push dword ptr [ebp*4 + 0x96db38] */ { u32 v = R32((u32)(r_ebp*4+0x96db38u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ec11c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ec11d: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6ec122u); f_0050b510();
    /* 006ec122: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ec125: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006ec129: cmp ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ec12c: jne 0x6ec156 */ if (!fZ) goto L_006ec156;
L_006ec12e:; BB(0x006ec12e);
    /* 006ec12e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006ec131: push 0x1f2 */ { u32 v = 0x1f2u; r_esp -= 4; W32(r_esp, v); }
    /* 006ec136: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ec137: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6ec13cu); f_0050b510();
    /* 006ec13c: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006ec140: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 006ec144: push 0x19d */ { u32 v = 0x19du; r_esp -= 4; W32(r_esp, v); }
    /* 006ec149: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ec14a: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6ec14fu); f_0050b510();
    /* 006ec14f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ec152: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
L_006ec156:; BB(0x006ec156);
    /* 006ec156: cmp ebx, 0xf */ {  u32 a = r_ebx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ec159: je 0x6ec1c2 */ if (fZ) goto L_006ec1c2;
L_006ec15b:; BB(0x006ec15b);
    /* 006ec15b: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ec15e: je 0x6ec1a6 */ if (fZ) goto L_006ec1a6;
L_006ec160:; BB(0x006ec160);
    /* 006ec160: cmp ebx, 0xd */ {  u32 a = r_ebx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ec163: je 0x6ec188 */ if (fZ) goto L_006ec188;
L_006ec165:; BB(0x006ec165);
    /* 006ec165: cmp ebx, 0xa */ {  u32 a = r_ebx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ec168: jne 0x6ec1c2 */ if (!fZ) goto L_006ec1c2;
L_006ec16a:; BB(0x006ec16a);
    /* 006ec16a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006ec16c:; BB(0x006ec16c);
    /* 006ec16c: mov ecx, dword ptr [esp + ebx*4 + 0xc] */ r_ecx = R32((u32)(r_esp+r_ebx*4+0xcu));
    /* 006ec170: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ec173: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ec175: je 0x6ec181 */ if (fZ) goto L_006ec181;
L_006ec177:; BB(0x006ec177);
    /* 006ec177: push 0xff337fff */ { u32 v = 0xff337fffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ec17c: call 0x508ee4 */ r_esp -= 4; W32(r_esp, 0x6ec181u); f_00508ee4();
L_006ec181:; BB(0x006ec181);
    /* 006ec181: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ec184: jl 0x6ec16c */ if ((fS!=fO)) goto L_006ec16c;
L_006ec186:; BB(0x006ec186);
    /* 006ec186: jmp 0x6ec1c2 */ goto L_006ec1c2;
L_006ec188:; BB(0x006ec188);
    /* 006ec188: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006ec18a:; BB(0x006ec18a);
    /* 006ec18a: mov ecx, dword ptr [esp + ebx*4 + 0xc] */ r_ecx = R32((u32)(r_esp+r_ebx*4+0xcu));
    /* 006ec18e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ec191: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ec193: je 0x6ec19f */ if (fZ) goto L_006ec19f;
L_006ec195:; BB(0x006ec195);
    /* 006ec195: push 0xffff9999 */ { u32 v = 0xffff9999u; r_esp -= 4; W32(r_esp, v); }
    /* 006ec19a: call 0x508ee4 */ r_esp -= 4; W32(r_esp, 0x6ec19fu); f_00508ee4();
L_006ec19f:; BB(0x006ec19f);
    /* 006ec19f: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ec1a2: jl 0x6ec18a */ if ((fS!=fO)) goto L_006ec18a;
L_006ec1a4:; BB(0x006ec1a4);
    /* 006ec1a4: jmp 0x6ec1c2 */ goto L_006ec1c2;
L_006ec1a6:; BB(0x006ec1a6);
    /* 006ec1a6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006ec1a8:; BB(0x006ec1a8);
    /* 006ec1a8: mov ecx, dword ptr [esp + ebx*4 + 0xc] */ r_ecx = R32((u32)(r_esp+r_ebx*4+0xcu));
    /* 006ec1ac: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ec1af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ec1b1: je 0x6ec1bd */ if (fZ) goto L_006ec1bd;
L_006ec1b3:; BB(0x006ec1b3);
    /* 006ec1b3: push 0xff4dff99 */ { u32 v = 0xff4dff99u; r_esp -= 4; W32(r_esp, v); }
    /* 006ec1b8: call 0x508ee4 */ r_esp -= 4; W32(r_esp, 0x6ec1bdu); f_00508ee4();
L_006ec1bd:; BB(0x006ec1bd);
    /* 006ec1bd: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ec1c0: jl 0x6ec1a8 */ if ((fS!=fO)) goto L_006ec1a8;
L_006ec1c2:; BB(0x006ec1c2);
    /* 006ec1c2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ec1c5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ec1c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ec1c7: ret  */ FN_RET(0x006ec06c); r_esp += 4; return;
L_006ec1c8:; BB(0x006ec1c8);
    /* 006ec1c8: mov edx, 0xf */ r_edx = 0xfu;
    /* 006ec1cd: jmp 0x6ec0e8 */ goto L_006ec0e8;
}

void f_006ec1d4(void) /* sub_6EC1D4 */
{
    FN_ENTER(0x006ec1d4);
    /* 006ec1d4: mov dword ptr [0xa9682c], 0x3f800000 */ W32((u32)(0xa9682cu), 0x3f800000u);
    /* 006ec1de: mov dword ptr [0xa96830], 0x41000000 */ W32((u32)(0xa96830u), 0x41000000u);
    /* 006ec1e8: mov dword ptr [0xa96834], 0x3fc00000 */ W32((u32)(0xa96834u), 0x3fc00000u);
    /* 006ec1f2: ret  */ FN_RET(0x006ec1d4); r_esp += 4; return;
}

void f_006ec1f4(void) /* sub_6EC1F4 */
{
    FN_ENTER(0x006ec1f4);
    /* 006ec1f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ec1f5: mov ebp, esp */ r_ebp = r_esp;
    /* 006ec1f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ec1f9: push 0x8ef59c */ { u32 v = 0x8ef59cu; r_esp -= 4; W32(r_esp, v); }
    /* 006ec1fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ec204: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ec205: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ec20c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ec20f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ec212: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006ec215: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006ec218: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006ec21b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006ec21e: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006ec221: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ec228: mov edx, ecx */ r_edx = r_ecx;
    /* 006ec22a: movzx ecx, word ptr [edx + 0x7a] */ r_ecx = (u32)R16((u32)(r_edx+0x7au));
    /* 006ec22e: mov ebx, dword ptr [ecx*8 + 0x96dc70] */ r_ebx = R32((u32)(r_ecx*8+0x96dc70u));
    /* 006ec235: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ec237: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006ec239: mov dword ptr [edx], 0xb3dee0 */ W32((u32)(r_edx), 0xb3dee0u);
    /* 006ec23f: jbe 0x6ec274 */ if ((fC||fZ)) goto L_006ec274;
L_006ec241:; BB(0x006ec241);
    /* 006ec241: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ec244: mov ecx, dword ptr [edx + 0xf4] */ r_ecx = R32((u32)(r_edx+0xf4u));
    /* 006ec24a: mov ecx, dword ptr [ecx + eax*4] */ r_ecx = R32((u32)(r_ecx+r_eax*4));
    /* 006ec24d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ec24f: je 0x6ec26d */ if (fZ) goto L_006ec26d;
L_006ec251:; BB(0x006ec251);
    /* 006ec251: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 006ec255: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006ec25b: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 006ec25f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ec262: movzx ebx, word ptr [ecx + 0x7a] */ r_ebx = (u32)R16((u32)(r_ecx+0x7au));
    /* 006ec266: mov ebx, dword ptr [ebx*8 + 0x96dc70] */ r_ebx = R32((u32)(r_ebx*8+0x96dc70u));
L_006ec26d:; BB(0x006ec26d);
    /* 006ec26d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ec270: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006ec272: jb 0x6ec241 */ if (fC) goto L_006ec241;
L_006ec274:; BB(0x006ec274);
    /* 006ec274: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006ec277: push dword ptr [eax + 0xec] */ { u32 v = R32((u32)(r_eax+0xecu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ec27d: call 0x8148d4 */ r_esp -= 4; W32(r_esp, 0x6ec282u); f_008148d4();
    /* 006ec282: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006ec285: push dword ptr [eax + 0xf4] */ { u32 v = R32((u32)(r_eax+0xf4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ec28b: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6ec290u); f_00857e98();
    /* 006ec290: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ec293: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006ec29a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ec29d: call 0x6de56c */ r_esp -= 4; W32(r_esp, 0x6ec2a2u); f_006de56c();
    /* 006ec2a2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006ec2a5: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ec2a7: jne 0x6ec2c2 */ if (!fZ) goto L_006ec2c2;
L_006ec2a9:; BB(0x006ec2a9);
    /* 006ec2a9: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ec2ac: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006ec2af: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ec2b2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ec2b5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ec2bc: mov esp, ebp */ r_esp = r_ebp;
    /* 006ec2be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ec2bf: ret 4 */ FN_RET(0x006ec1f4); r_esp += 8; return;
L_006ec2c2:; BB(0x006ec2c2);
    /* 006ec2c2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006ec2c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ec2c6: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6ec2cbu); f_005c2f74();
    /* 006ec2cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ec2cc: jmp 0x6ec2a9 */ goto L_006ec2a9;
}

void f_006ec2d0(void) /* sub_6EC2D0 */
{
    FN_ENTER(0x006ec2d0);
    /* 006ec2d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ec2d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006ec2d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ec2d5: push 0x8ef5c4 */ { u32 v = 0x8ef5c4u; r_esp -= 4; W32(r_esp, v); }
    /* 006ec2da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ec2e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ec2e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ec2e8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ec2eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ec2ee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006ec2f1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006ec2f4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006ec2f7: push 0x13c */ { u32 v = 0x13cu; r_esp -= 4; W32(r_esp, v); }
    /* 006ec2fc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006ec303: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6ec308u); f_005caba4();
    /* 006ec308: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ec309: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006ec30c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ec30e: je 0x6ec336 */ if (fZ) goto L_006ec336;
L_006ec310:; BB(0x006ec310);
    /* 006ec310: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006ec317: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ec31e: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ec321: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ec324: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ec327: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ec32a: call 0x6ec344 */ r_esp -= 4; W32(r_esp, 0x6ec32fu); f_006ec344();
    /* 006ec32f: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006ec336:; BB(0x006ec336);
    /* 006ec336: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ec339: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ec340: mov esp, ebp */ r_esp = r_ebp;
    /* 006ec342: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ec343: ret  */ FN_RET(0x006ec2d0); r_esp += 4; return;
}

void f_006ec344(void) /* sub_6EC344 */
{
    FN_ENTER(0x006ec344);
    /* 006ec344: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ec345: mov ebp, esp */ r_ebp = r_esp;
    /* 006ec347: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ec349: push 0x8ef5e0 */ { u32 v = 0x8ef5e0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ec34e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ec354: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ec355: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ec35c: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ec35f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ec362: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 006ec365: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 006ec368: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 006ec36b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006ec36e: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ec371: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ec372: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 006ec375: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ec376: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ec379: call 0x6de5f0 */ r_esp -= 4; W32(r_esp, 0x6ec37eu); f_006de5f0();
    /* 006ec37e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ec385: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006ec388: mov dword ptr [ecx], 0xb3dee0 */ W32((u32)(r_ecx), 0xb3dee0u);
    /* 006ec38e: mov eax, dword ptr [0x9cf998] */ r_eax = R32((u32)(0x9cf998u));
    /* 006ec393: mov dword ptr [ecx + 0xf0], 0 */ W32((u32)(r_ecx+0xf0u), 0x0u);
    /* 006ec39d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006ec3a0: call 0x6ec6c0 */ r_esp -= 4; W32(r_esp, 0x6ec3a5u); f_006ec6c0();
    /* 006ec3a5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006ec3a8: mov eax, dword ptr [ecx + 0xe8] */ r_eax = R32((u32)(r_ecx+0xe8u));
    /* 006ec3ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ec3b0: je 0x6ec3c4 */ if (fZ) goto L_006ec3c4;
L_006ec3b2:; BB(0x006ec3b2);
    /* 006ec3b2: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 006ec3b8: mov eax, dword ptr [ecx + 0x90] */ r_eax = R32((u32)(r_ecx+0x90u));
    /* 006ec3be: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006ec3c1: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
L_006ec3c4:; BB(0x006ec3c4);
    /* 006ec3c4: movzx edx, word ptr [ecx + 0x7a] */ r_edx = (u32)R16((u32)(r_ecx+0x7au));
    /* 006ec3c8: mov dword ptr [ecx + 0x138], 0 */ W32((u32)(r_ecx+0x138u), 0x0u);
    /* 006ec3d2: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006ec3d7: mov word ptr [ecx + 0xf8], ax */ W16((u32)(r_ecx+0xf8u), (u16)r_eax);
    /* 006ec3de: mov word ptr [ecx + 0xfa], ax */ W16((u32)(r_ecx+0xfau), (u16)r_eax);
    /* 006ec3e5: mov word ptr [ecx + 0xfc], ax */ W16((u32)(r_ecx+0xfcu), (u16)r_eax);
    /* 006ec3ec: mov word ptr [ecx + 0xfe], ax */ W16((u32)(r_ecx+0xfeu), (u16)r_eax);
    /* 006ec3f3: mov word ptr [ecx + 0x100], ax */ W16((u32)(r_ecx+0x100u), (u16)r_eax);
    /* 006ec3fa: mov word ptr [ecx + 0x102], ax */ W16((u32)(r_ecx+0x102u), (u16)r_eax);
    /* 006ec401: mov word ptr [ecx + 0x104], ax */ W16((u32)(r_ecx+0x104u), (u16)r_eax);
    /* 006ec408: mov word ptr [ecx + 0x106], ax */ W16((u32)(r_ecx+0x106u), (u16)r_eax);
    /* 006ec40f: mov word ptr [ecx + 0x108], ax */ W16((u32)(r_ecx+0x108u), (u16)r_eax);
    /* 006ec416: mov word ptr [ecx + 0x10a], ax */ W16((u32)(r_ecx+0x10au), (u16)r_eax);
    /* 006ec41d: mov word ptr [ecx + 0x10c], ax */ W16((u32)(r_ecx+0x10cu), (u16)r_eax);
    /* 006ec424: mov word ptr [ecx + 0x10e], ax */ W16((u32)(r_ecx+0x10eu), (u16)r_eax);
    /* 006ec42b: mov word ptr [ecx + 0x110], ax */ W16((u32)(r_ecx+0x110u), (u16)r_eax);
    /* 006ec432: mov word ptr [ecx + 0x112], ax */ W16((u32)(r_ecx+0x112u), (u16)r_eax);
    /* 006ec439: mov word ptr [ecx + 0x114], ax */ W16((u32)(r_ecx+0x114u), (u16)r_eax);
    /* 006ec440: mov word ptr [ecx + 0x116], ax */ W16((u32)(r_ecx+0x116u), (u16)r_eax);
    /* 006ec447: mov word ptr [ecx + 0x118], ax */ W16((u32)(r_ecx+0x118u), (u16)r_eax);
    /* 006ec44e: mov word ptr [ecx + 0x11a], ax */ W16((u32)(r_ecx+0x11au), (u16)r_eax);
    /* 006ec455: mov word ptr [ecx + 0x11c], ax */ W16((u32)(r_ecx+0x11cu), (u16)r_eax);
    /* 006ec45c: mov word ptr [ecx + 0x11e], ax */ W16((u32)(r_ecx+0x11eu), (u16)r_eax);
    /* 006ec463: mov word ptr [ecx + 0x120], ax */ W16((u32)(r_ecx+0x120u), (u16)r_eax);
    /* 006ec46a: mov word ptr [ecx + 0x122], ax */ W16((u32)(r_ecx+0x122u), (u16)r_eax);
    /* 006ec471: mov word ptr [ecx + 0x124], ax */ W16((u32)(r_ecx+0x124u), (u16)r_eax);
    /* 006ec478: mov word ptr [ecx + 0x126], ax */ W16((u32)(r_ecx+0x126u), (u16)r_eax);
    /* 006ec47f: mov word ptr [ecx + 0x128], ax */ W16((u32)(r_ecx+0x128u), (u16)r_eax);
    /* 006ec486: mov word ptr [ecx + 0x12a], ax */ W16((u32)(r_ecx+0x12au), (u16)r_eax);
    /* 006ec48d: mov word ptr [ecx + 0x12c], ax */ W16((u32)(r_ecx+0x12cu), (u16)r_eax);
    /* 006ec494: mov word ptr [ecx + 0x12e], ax */ W16((u32)(r_ecx+0x12eu), (u16)r_eax);
    /* 006ec49b: mov word ptr [ecx + 0x130], ax */ W16((u32)(r_ecx+0x130u), (u16)r_eax);
    /* 006ec4a2: mov word ptr [ecx + 0x132], ax */ W16((u32)(r_ecx+0x132u), (u16)r_eax);
    /* 006ec4a9: mov word ptr [ecx + 0x134], ax */ W16((u32)(r_ecx+0x134u), (u16)r_eax);
    /* 006ec4b0: mov word ptr [ecx + 0x136], ax */ W16((u32)(r_ecx+0x136u), (u16)r_eax);
    /* 006ec4b7: mov ecx, dword ptr [edx*8 + 0x96dc70] */ r_ecx = R32((u32)(r_edx*8+0x96dc70u));
    /* 006ec4be: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ec4c0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ec4c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ec4c3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6ec4c8u); f_008581c5();
    /* 006ec4c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ec4c9: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006ec4cc: movsx esi, word ptr [edi + 0x7a] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+0x7au));
    /* 006ec4d0: mov dword ptr [edi + 0xf4], eax */ W32((u32)(r_edi+0xf4u), r_eax);
    /* 006ec4d6: mov eax, dword ptr [esi*8 + 0x96dc70] */ r_eax = R32((u32)(r_esi*8+0x96dc70u));
    /* 006ec4dd: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006ec4df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006ec4e1: jbe 0x6ec5fa */ if ((fC||fZ)) goto L_006ec5fa;
L_006ec4e7:; BB(0x006ec4e7);
    /* 006ec4e7: mov esi, dword ptr [esi*8 + 0x96dc6c] */ r_esi = R32((u32)(r_esi*8+0x96dc6cu));
    /* 006ec4ee: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 006ec4f1: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 006ec4f4: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 006ec4f7: mov edi, dword ptr [ecx + 0x40] */ r_edi = R32((u32)(r_ecx+0x40u));
    /* 006ec4fa: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 006ec4fd: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 006ec500: mov dword ptr [ebp - 0x40], edi */ W32((u32)(r_ebp+0xffffffc0u), r_edi);
    /* 006ec503: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 006ec506: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ec508: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006ec50b: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ec50d: push dword ptr [edx + esi] */ { u32 v = R32((u32)(r_edx+r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 006ec510: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006ec513: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 006ec516: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ec517: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x6ec51cu); f_00509590();
    /* 006ec51c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ec51f: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006ec522: mov edi, dword ptr [esi + 0xf4] */ r_edi = R32((u32)(r_esi+0xf4u));
    /* 006ec528: mov dword ptr [edi + ebx*4], eax */ W32((u32)(r_edi+r_ebx*4), r_eax);
    /* 006ec52b: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 006ec52e: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006ec531: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ec534: movsx esi, word ptr [edi + 0x7a] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+0x7au));
    /* 006ec538: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006ec53b: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006ec53e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ec540: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ec542: mov edx, dword ptr [ecx + 0x96dc6c] */ r_edx = R32((u32)(r_ecx+0x96dc6cu));
    /* 006ec548: mov eax, dword ptr [eax + edx + 4] */ r_eax = R32((u32)(r_eax+r_edx+0x4u));
    /* 006ec54c: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ec54e: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 006ec551: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006ec554: je 0x6ec591 */ if (fZ) goto L_006ec591;
L_006ec556:; BB(0x006ec556);
    /* 006ec556: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ec559: mov eax, dword ptr [edi + 0xf4] */ r_eax = R32((u32)(r_edi+0xf4u));
    /* 006ec55f: mov eax, dword ptr [eax + edx*2] */ r_eax = R32((u32)(r_eax+r_edx*2));
    /* 006ec562: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ec564: je 0x6ec591 */ if (fZ) goto L_006ec591;
L_006ec566:; BB(0x006ec566);
    /* 006ec566: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006ec569: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ec56c: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006ec56f: mov esi, dword ptr [edx + ecx + 8] */ r_esi = R32((u32)(r_edx+r_ecx+0x8u));
    /* 006ec573: mov dword ptr [eax + 0x44], esi */ W32((u32)(r_eax+0x44u), r_esi);
    /* 006ec576: mov dword ptr [eax + 0x48], esi */ W32((u32)(r_eax+0x48u), r_esi);
    /* 006ec579: movsx esi, word ptr [edi + 0x7a] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+0x7au));
    /* 006ec57d: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006ec580: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ec582: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ec584: mov eax, dword ptr [ecx + 0x96dc6c] */ r_eax = R32((u32)(r_ecx+0x96dc6cu));
    /* 006ec58a: mov eax, dword ptr [edx + eax + 4] */ r_eax = R32((u32)(r_edx+r_eax+0x4u));
    /* 006ec58e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_006ec591:; BB(0x006ec591);
    /* 006ec591: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006ec594: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ec596: je 0x6ec5eb */ if (fZ) goto L_006ec5eb;
L_006ec598:; BB(0x006ec598);
    /* 006ec598: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 006ec59e: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006ec5a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ec5a2: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6ec5a7u); f_005b8610();
    /* 006ec5a7: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006ec5aa: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ec5ad: mov edi, dword ptr [0xa96680] */ r_edi = R32((u32)(0xa96680u));
    /* 006ec5b3: mov ecx, dword ptr [edx + 0xf4] */ r_ecx = R32((u32)(r_edx+0xf4u));
    /* 006ec5b9: mov edx, dword ptr [ecx + esi*2] */ r_edx = R32((u32)(r_ecx+r_esi*2));
    /* 006ec5bc: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 006ec5bf: movzx eax, word ptr [edx + 0x2c] */ r_eax = (u32)R16((u32)(r_edx+0x2cu));
    /* 006ec5c3: mov dword ptr [edx + 0x58], 0 */ W32((u32)(r_edx+0x58u), 0x0u);
    /* 006ec5ca: mov dword ptr [edx + 0x54], edi */ W32((u32)(r_edx+0x54u), r_edi);
    /* 006ec5cd: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006ec5d0: mov dword ptr [edx + 0x60], 0x3f800000 */ W32((u32)(r_edx+0x60u), 0x3f800000u);
    /* 006ec5d7: or eax, 0xffff0200 */ {  u32 a = r_eax; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006ec5dc: mov word ptr [edx + 0x2c], ax */ W16((u32)(r_edx+0x2cu), (u16)r_eax);
    /* 006ec5e0: movsx esi, word ptr [edi + 0x7a] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+0x7au));
    /* 006ec5e4: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006ec5e7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ec5e9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_006ec5eb:; BB(0x006ec5eb);
    /* 006ec5eb: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ec5ee: cmp ebx, dword ptr [ecx + 0x96dc70] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0x96dc70u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006ec5f4: jb 0x6ec4e7 */ if (fC) goto L_006ec4e7;
L_006ec5fa:; BB(0x006ec5fa);
    /* 006ec5fa: cmp esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ec5fd: je 0x6ec636 */ if (fZ) goto L_006ec636;
L_006ec5ff:; BB(0x006ec5ff);
    /* 006ec5ff: mov ecx, edi */ r_ecx = r_edi;
    /* 006ec601: call 0x6ec7b8 */ r_esp -= 4; W32(r_esp, 0x6ec606u); f_006ec7b8();
    /* 006ec606: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006ec609: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 006ec60c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ec60e: je 0x6ec61b */ if (fZ) goto L_006ec61b;
L_006ec610:; BB(0x006ec610);
    /* 006ec610: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006ec614: mov word ptr [edx + 0xb4], ax */ W16((u32)(r_edx+0xb4u), (u16)r_eax);
L_006ec61b:; BB(0x006ec61b);
    /* 006ec61b: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006ec61e: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ec621: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ec624: mov eax, edx */ r_eax = r_edx;
    /* 006ec626: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ec629: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ec630: mov esp, ebp */ r_esp = r_ebp;
    /* 006ec632: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ec633: ret 0xc */ FN_RET(0x006ec344); r_esp += 16; return;
L_006ec636:; BB(0x006ec636);
    /* 006ec636: fld dword ptr [0x96db8c] */ FPUSH(R_F32((u32)(0x96db8cu)));
    /* 006ec63c: lea esi, [ebp - 0x3c] */ r_esi = (u32)(r_ebp+0xffffffc4u);
    /* 006ec63f: push 0x1d6 */ { u32 v = 0x1d6u; r_esp -= 4; W32(r_esp, v); }
    /* 006ec644: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 006ec647: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 006ec64a: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 006ec64d: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 006ec650: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 006ec653: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ec654: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 006ec657: fadd dword ptr [ebp - 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffc8u));
    /* 006ec65a: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 006ec65d: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 006ec660: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6ec665u); f_0050b510();
    /* 006ec665: mov esi, eax */ r_esi = r_eax;
    /* 006ec667: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ec66a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ec66c: je 0x6ec6b6 */ if (fZ) goto L_006ec6b6;
L_006ec66e:; BB(0x006ec66e);
    /* 006ec66e: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 006ec674: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ec676: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6ec67bu); f_005b8610();
    /* 006ec67b: mov ebx, eax */ r_ebx = r_eax;
    /* 006ec67d: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 006ec683: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ec685: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x6ec68au); f_005b8638();
    /* 006ec68a: mov edx, dword ptr [0xa96680] */ r_edx = R32((u32)(0xa96680u));
    /* 006ec690: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006ec693: movzx ecx, word ptr [esi + 0x2c] */ r_ecx = (u32)R16((u32)(r_esi+0x2cu));
    /* 006ec697: mov dword ptr [esi + 0x50], ebx */ W32((u32)(r_esi+0x50u), r_ebx);
    /* 006ec69a: mov dword ptr [esi + 0x54], edx */ W32((u32)(r_esi+0x54u), r_edx);
    /* 006ec69d: mov dword ptr [esi + 0x58], eax */ W32((u32)(r_esi+0x58u), r_eax);
    /* 006ec6a0: mov dword ptr [esi + 0x60], 0x3f800000 */ W32((u32)(r_esi+0x60u), 0x3f800000u);
    /* 006ec6a7: or ecx, 0xffff0200 */ {  u32 a = r_ecx; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 006ec6ad: mov word ptr [esi + 0x2c], cx */ W16((u32)(r_esi+0x2cu), (u16)r_ecx);
    /* 006ec6b1: jmp 0x6ec5ff */ goto L_006ec5ff;
L_006ec6b6:; BB(0x006ec6b6);
    /* 006ec6b6: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006ec6b9: jmp 0x6ec5ff */ goto L_006ec5ff;
}

void f_006ec6c0(void) /* sub_6EC6C0 */
{
    FN_ENTER(0x006ec6c0);
    /* 006ec6c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ec6c1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ec6c4: mov edi, ecx */ r_edi = r_ecx;
    /* 006ec6c6: movsx eax, word ptr [edi + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x78u));
    /* 006ec6ca: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ec6cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ec6d0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006ec6d2: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x6ec6d7u); f_006ded14();
    /* 006ec6d7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ec6da: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006ec6dc: mov dword ptr [edi + 0x88], edx */ W32((u32)(r_edi+0x88u), r_edx);
    /* 006ec6e2: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006ec6e5: mov dword ptr [edi + 0x8c], edx */ W32((u32)(r_edi+0x8cu), r_edx);
    /* 006ec6eb: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006ec6ee: mov dword ptr [edi + 0x90], edx */ W32((u32)(r_edi+0x90u), r_edx);
    /* 006ec6f4: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006ec6f7: mov dword ptr [edi + 0x94], edx */ W32((u32)(r_edi+0x94u), r_edx);
    /* 006ec6fd: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006ec700: mov dword ptr [edi + 0x98], edx */ W32((u32)(r_edi+0x98u), r_edx);
    /* 006ec706: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006ec709: mov dword ptr [edi + 0x9c], edx */ W32((u32)(r_edi+0x9cu), r_edx);
    /* 006ec70f: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006ec712: mov dword ptr [edi + 0xa0], edx */ W32((u32)(r_edi+0xa0u), r_edx);
    /* 006ec718: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006ec71b: mov dword ptr [edi + 0xa4], edx */ W32((u32)(r_edi+0xa4u), r_edx);
    /* 006ec721: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006ec724: mov dword ptr [edi + 0xa8], edx */ W32((u32)(r_edi+0xa8u), r_edx);
    /* 006ec72a: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006ec72d: mov dword ptr [edi + 0xac], edx */ W32((u32)(r_edi+0xacu), r_edx);
    /* 006ec733: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 006ec736: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 006ec73c: movsx eax, word ptr [edi + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x78u));
    /* 006ec740: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ec743: jl 0x6ec77a */ if ((fS!=fO)) goto L_006ec77a;
L_006ec745:; BB(0x006ec745);
    /* 006ec745: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6ec74au); f_00687c48();
    /* 006ec74a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ec74c: jne 0x6ec776 */ if (!fZ) goto L_006ec776;
L_006ec74e:; BB(0x006ec74e);
    /* 006ec74e: movsx ecx, word ptr [0x9cf734] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x9cf734u));
    /* 006ec755: movsx edx, word ptr [0x9cf736] */ r_edx = (u32)(i32)(i16)R16((u32)(0x9cf736u));
    /* 006ec75c: movsx eax, word ptr [edi + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x78u));
    /* 006ec760: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006ec763: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ec765: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 006ec768: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006ec76b: fstp dword ptr [edi + 0x88] */ W_F32((u32)(r_edi+0x88u), ST(0)); FPOP();
    /* 006ec771: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ec774: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ec775: ret  */ FN_RET(0x006ec6c0); r_esp += 4; return;
L_006ec776:; BB(0x006ec776);
    /* 006ec776: movsx eax, word ptr [edi + 0x78] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x78u));
L_006ec77a:; BB(0x006ec77a);
    /* 006ec77a: movsx edx, word ptr [edi + 0xac] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xacu));
    /* 006ec781: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006ec784: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006ec788: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 006ec78c: fadd dword ptr [edi + 0x88] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x88u));
    /* 006ec792: fstp dword ptr [edi + 0x88] */ W_F32((u32)(r_edi+0x88u), ST(0)); FPOP();
    /* 006ec798: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6ec79du); f_00687c48();
    /* 006ec79d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ec79f: je 0x6ec7b3 */ if (fZ) goto L_006ec7b3;
L_006ec7a1:; BB(0x006ec7a1);
    /* 006ec7a1: fld dword ptr [edi + 0x88] */ FPUSH(R_F32((u32)(r_edi+0x88u)));
    /* 006ec7a7: fmul dword ptr [0x9cf7a8] */ ST(0) = ST(0) * R_F32((u32)(0x9cf7a8u));
    /* 006ec7ad: fstp dword ptr [edi + 0x88] */ W_F32((u32)(r_edi+0x88u), ST(0)); FPOP();
L_006ec7b3:; BB(0x006ec7b3);
    /* 006ec7b3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ec7b6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ec7b7: ret  */ FN_RET(0x006ec6c0); r_esp += 4; return;
}

void f_006ec7b8(void) /* sub_6EC7B8 */
{
    FN_ENTER(0x006ec7b8);
    /* 006ec7b8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ec7b9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006ec7bb: movsx eax, word ptr [ebx + 0x7a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x7au));
    /* 006ec7bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ec7c1: je 0x6ec8b4 */ if (fZ) goto L_006ec8b4;
L_006ec7c7:; BB(0x006ec7c7);
    /* 006ec7c7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ec7ca: je 0x6ec891 */ if (fZ) goto L_006ec891;
L_006ec7d0:; BB(0x006ec7d0);
    /* 006ec7d0: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ec7d3: jl 0x6ec88f */ if ((fS!=fO)) goto L_006ec88f;
L_006ec7d9:; BB(0x006ec7d9);
    /* 006ec7d9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ec7dc: jle 0x6ec85a */ if ((fZ||fS!=fO)) goto L_006ec85a;
L_006ec7de:; BB(0x006ec7de);
    /* 006ec7de: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ec7e1: jne 0x6ec81e */ if (!fZ) goto L_006ec81e;
L_006ec7e3:; BB(0x006ec7e3);
    /* 006ec7e3: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 006ec7e6: add edx, 0x300 */ {  u32 a = r_edx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ec7ec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ec7ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ec7ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ec7f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ec7f1: push 0x8d */ { u32 v = 0x8du; r_esp -= 4; W32(r_esp, v); }
    /* 006ec7f6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6ec7fbu); f_00814298();
    /* 006ec7fb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ec7fe: mov dword ptr [ebx + 0xec], eax */ W32((u32)(r_ebx+0xecu), r_eax);
    /* 006ec804: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ec806: jl 0x6ec88f */ if ((fS!=fO)) goto L_006ec88f;
L_006ec80c:; BB(0x006ec80c);
    /* 006ec80c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ec80e: push 0xfffffdb0 */ { u32 v = 0xfffffdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ec813: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ec814: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6ec819u); f_00814664();
    /* 006ec819: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ec81c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ec81d: ret  */ FN_RET(0x006ec7b8); r_esp += 4; return;
L_006ec81e:; BB(0x006ec81e);
    /* 006ec81e: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ec821: jne 0x6ec88f */ if (!fZ) goto L_006ec88f;
L_006ec823:; BB(0x006ec823);
    /* 006ec823: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 006ec826: add edx, 0x300 */ {  u32 a = r_edx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ec82c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ec82e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ec82f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ec830: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ec831: push 0x8d */ { u32 v = 0x8du; r_esp -= 4; W32(r_esp, v); }
    /* 006ec836: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6ec83bu); f_00814298();
    /* 006ec83b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ec83e: mov dword ptr [ebx + 0xec], eax */ W32((u32)(r_ebx+0xecu), r_eax);
    /* 006ec844: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ec846: jl 0x6ec88f */ if ((fS!=fO)) goto L_006ec88f;
L_006ec848:; BB(0x006ec848);
    /* 006ec848: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ec84a: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 006ec84f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ec850: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6ec855u); f_00814664();
    /* 006ec855: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ec858: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ec859: ret  */ FN_RET(0x006ec7b8); r_esp += 4; return;
L_006ec85a:; BB(0x006ec85a);
    /* 006ec85a: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 006ec85d: add edx, 0x300 */ {  u32 a = r_edx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ec863: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ec865: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ec866: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ec867: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ec868: push 0x8d */ { u32 v = 0x8du; r_esp -= 4; W32(r_esp, v); }
    /* 006ec86d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6ec872u); f_00814298();
    /* 006ec872: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ec875: mov dword ptr [ebx + 0xec], eax */ W32((u32)(r_ebx+0xecu), r_eax);
    /* 006ec87b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ec87d: jl 0x6ec88f */ if ((fS!=fO)) goto L_006ec88f;
L_006ec87f:; BB(0x006ec87f);
    /* 006ec87f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ec881: push 0xfffffe80 */ { u32 v = 0xfffffe80u; r_esp -= 4; W32(r_esp, v); }
    /* 006ec886: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ec887: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6ec88cu); f_00814664();
    /* 006ec88c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006ec88f:; BB(0x006ec88f);
    /* 006ec88f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ec890: ret  */ FN_RET(0x006ec7b8); r_esp += 4; return;
L_006ec891:; BB(0x006ec891);
    /* 006ec891: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 006ec894: add edx, 0x300 */ {  u32 a = r_edx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ec89a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ec89c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ec89d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ec89e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ec89f: push 0x8d */ { u32 v = 0x8du; r_esp -= 4; W32(r_esp, v); }
    /* 006ec8a4: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6ec8a9u); f_00814298();
    /* 006ec8a9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ec8ac: mov dword ptr [ebx + 0xec], eax */ W32((u32)(r_ebx+0xecu), r_eax);
    /* 006ec8b2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ec8b3: ret  */ FN_RET(0x006ec7b8); r_esp += 4; return;
L_006ec8b4:; BB(0x006ec8b4);
    /* 006ec8b4: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 006ec8b7: add edx, 0x300 */ {  u32 a = r_edx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ec8bd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ec8bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ec8c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ec8c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ec8c2: push 0x8d */ { u32 v = 0x8du; r_esp -= 4; W32(r_esp, v); }
    /* 006ec8c7: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6ec8ccu); f_00814298();
    /* 006ec8cc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ec8cf: mov dword ptr [ebx + 0xec], eax */ W32((u32)(r_ebx+0xecu), r_eax);
    /* 006ec8d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ec8d7: jl 0x6ec88f */ if ((fS!=fO)) goto L_006ec88f;
L_006ec8d9:; BB(0x006ec8d9);
    /* 006ec8d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ec8db: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 006ec8e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ec8e1: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6ec8e6u); f_00814664();
    /* 006ec8e6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ec8e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ec8ea: ret  */ FN_RET(0x006ec7b8); r_esp += 4; return;
}

void f_006ec8ec(void) /* sub_6EC8EC */
{
    FN_ENTER(0x006ec8ec);
    /* 006ec8ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ec8ed: mov ebp, esp */ r_ebp = r_esp;
    /* 006ec8ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ec8f1: push 0x8ef608 */ { u32 v = 0x8ef608u; r_esp -= 4; W32(r_esp, v); }
    /* 006ec8f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ec8fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ec8fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ec904: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ec907: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ec90a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006ec90d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006ec910: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006ec913: push 0x13c */ { u32 v = 0x13cu; r_esp -= 4; W32(r_esp, v); }
    /* 006ec918: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006ec91f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6ec924u); f_005caba4();
    /* 006ec924: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ec925: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006ec928: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ec92a: je 0x6ec955 */ if (fZ) goto L_006ec955;
L_006ec92c:; BB(0x006ec92c);
    /* 006ec92c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006ec933: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ec93a: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ec93d: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ec940: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ec943: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ec946: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ec949: call 0x6ec964 */ r_esp -= 4; W32(r_esp, 0x6ec94eu); f_006ec964();
    /* 006ec94e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006ec955:; BB(0x006ec955);
    /* 006ec955: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ec958: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ec95f: mov esp, ebp */ r_esp = r_ebp;
    /* 006ec961: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ec962: ret  */ FN_RET(0x006ec8ec); r_esp += 4; return;
}

void f_006ec964(void) /* sub_6EC964 */
{
    FN_ENTER(0x006ec964);
    /* 006ec964: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ec965: mov ebp, esp */ r_ebp = r_esp;
    /* 006ec967: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ec969: push 0x8ef624 */ { u32 v = 0x8ef624u; r_esp -= 4; W32(r_esp, v); }
    /* 006ec96e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ec974: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ec975: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ec97c: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ec97f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ec982: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 006ec985: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 006ec988: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 006ec98b: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006ec98e: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ec991: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ec992: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ec995: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ec998: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 006ec99b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006ec99e: call 0x6de5f0 */ r_esp -= 4; W32(r_esp, 0x6ec9a3u); f_006de5f0();
    /* 006ec9a3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ec9aa: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006ec9ad: mov dword ptr [ecx], 0xb3dee0 */ W32((u32)(r_ecx), 0xb3dee0u);
    /* 006ec9b3: mov eax, dword ptr [0x9cf998] */ r_eax = R32((u32)(0x9cf998u));
    /* 006ec9b8: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006ec9bb: call 0x6ec6c0 */ r_esp -= 4; W32(r_esp, 0x6ec9c0u); f_006ec6c0();
    /* 006ec9c0: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 006ec9c3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ec9c6: mov dword ptr [eax + 0xf0], 1 */ W32((u32)(r_eax+0xf0u), 0x1u);
    /* 006ec9d0: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 006ec9d2: mov dword ptr [eax + 0x7c], ecx */ W32((u32)(r_eax+0x7cu), r_ecx);
    /* 006ec9d5: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 006ec9d8: mov dword ptr [eax + 0x80], ebx */ W32((u32)(r_eax+0x80u), r_ebx);
    /* 006ec9de: mov esi, dword ptr [edx + 8] */ r_esi = R32((u32)(r_edx+0x8u));
    /* 006ec9e1: mov edx, dword ptr [eax + 0xe8] */ r_edx = R32((u32)(r_eax+0xe8u));
    /* 006ec9e7: mov dword ptr [eax + 0x84], esi */ W32((u32)(r_eax+0x84u), r_esi);
    /* 006ec9ed: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 006ec9f0: mov dword ptr [eax + 0x24], ebx */ W32((u32)(r_eax+0x24u), r_ebx);
    /* 006ec9f3: mov dword ptr [eax + 0x28], esi */ W32((u32)(r_eax+0x28u), r_esi);
    /* 006ec9f6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ec9f8: je 0x6eca0c */ if (fZ) goto L_006eca0c;
L_006ec9fa:; BB(0x006ec9fa);
    /* 006ec9fa: mov edx, dword ptr [edx + 0xa4] */ r_edx = R32((u32)(r_edx+0xa4u));
    /* 006eca00: mov eax, dword ptr [eax + 0x90] */ r_eax = R32((u32)(r_eax+0x90u));
    /* 006eca06: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 006eca09: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
L_006eca0c:; BB(0x006eca0c);
    /* 006eca0c: mov dword ptr [eax + 0x138], 0 */ W32((u32)(r_eax+0x138u), 0x0u);
    /* 006eca16: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 006eca1b: mov word ptr [eax + 0xf8], dx */ W16((u32)(r_eax+0xf8u), (u16)r_edx);
    /* 006eca22: mov word ptr [eax + 0xfa], dx */ W16((u32)(r_eax+0xfau), (u16)r_edx);
    /* 006eca29: mov word ptr [eax + 0xfc], dx */ W16((u32)(r_eax+0xfcu), (u16)r_edx);
    /* 006eca30: mov word ptr [eax + 0xfe], dx */ W16((u32)(r_eax+0xfeu), (u16)r_edx);
    /* 006eca37: mov word ptr [eax + 0x100], dx */ W16((u32)(r_eax+0x100u), (u16)r_edx);
    /* 006eca3e: mov word ptr [eax + 0x102], dx */ W16((u32)(r_eax+0x102u), (u16)r_edx);
    /* 006eca45: mov word ptr [eax + 0x104], dx */ W16((u32)(r_eax+0x104u), (u16)r_edx);
    /* 006eca4c: mov word ptr [eax + 0x106], dx */ W16((u32)(r_eax+0x106u), (u16)r_edx);
    /* 006eca53: mov word ptr [eax + 0x108], dx */ W16((u32)(r_eax+0x108u), (u16)r_edx);
    /* 006eca5a: mov word ptr [eax + 0x10a], dx */ W16((u32)(r_eax+0x10au), (u16)r_edx);
    /* 006eca61: mov word ptr [eax + 0x10c], dx */ W16((u32)(r_eax+0x10cu), (u16)r_edx);
    /* 006eca68: mov word ptr [eax + 0x10e], dx */ W16((u32)(r_eax+0x10eu), (u16)r_edx);
    /* 006eca6f: mov word ptr [eax + 0x110], dx */ W16((u32)(r_eax+0x110u), (u16)r_edx);
    /* 006eca76: mov word ptr [eax + 0x112], dx */ W16((u32)(r_eax+0x112u), (u16)r_edx);
    /* 006eca7d: mov word ptr [eax + 0x114], dx */ W16((u32)(r_eax+0x114u), (u16)r_edx);
    /* 006eca84: mov word ptr [eax + 0x116], dx */ W16((u32)(r_eax+0x116u), (u16)r_edx);
    /* 006eca8b: mov word ptr [eax + 0x118], dx */ W16((u32)(r_eax+0x118u), (u16)r_edx);
    /* 006eca92: mov word ptr [eax + 0x11a], dx */ W16((u32)(r_eax+0x11au), (u16)r_edx);
    /* 006eca99: mov word ptr [eax + 0x11c], dx */ W16((u32)(r_eax+0x11cu), (u16)r_edx);
    /* 006ecaa0: mov word ptr [eax + 0x11e], dx */ W16((u32)(r_eax+0x11eu), (u16)r_edx);
    /* 006ecaa7: mov word ptr [eax + 0x120], dx */ W16((u32)(r_eax+0x120u), (u16)r_edx);
    /* 006ecaae: mov word ptr [eax + 0x122], dx */ W16((u32)(r_eax+0x122u), (u16)r_edx);
    /* 006ecab5: mov word ptr [eax + 0x124], dx */ W16((u32)(r_eax+0x124u), (u16)r_edx);
    /* 006ecabc: mov word ptr [eax + 0x126], dx */ W16((u32)(r_eax+0x126u), (u16)r_edx);
    /* 006ecac3: mov word ptr [eax + 0x128], dx */ W16((u32)(r_eax+0x128u), (u16)r_edx);
    /* 006ecaca: mov word ptr [eax + 0x12a], dx */ W16((u32)(r_eax+0x12au), (u16)r_edx);
    /* 006ecad1: mov word ptr [eax + 0x12c], dx */ W16((u32)(r_eax+0x12cu), (u16)r_edx);
    /* 006ecad8: mov word ptr [eax + 0x12e], dx */ W16((u32)(r_eax+0x12eu), (u16)r_edx);
    /* 006ecadf: mov word ptr [eax + 0x130], dx */ W16((u32)(r_eax+0x130u), (u16)r_edx);
    /* 006ecae6: mov word ptr [eax + 0x132], dx */ W16((u32)(r_eax+0x132u), (u16)r_edx);
    /* 006ecaed: mov word ptr [eax + 0x134], dx */ W16((u32)(r_eax+0x134u), (u16)r_edx);
    /* 006ecaf4: mov word ptr [eax + 0x136], dx */ W16((u32)(r_eax+0x136u), (u16)r_edx);
    /* 006ecafb: lea ecx, [eax + 0x20] */ r_ecx = (u32)(r_eax+0x20u);
    /* 006ecafe: movzx eax, word ptr [eax + 0x7a] */ r_eax = (u32)R16((u32)(r_eax+0x7au));
    /* 006ecb02: mov ebx, dword ptr [eax*8 + 0x96dc70] */ r_ebx = R32((u32)(r_eax*8+0x96dc70u));
    /* 006ecb09: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 006ecb0c: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ecb0e: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ecb10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ecb11: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6ecb16u); f_008581c5();
    /* 006ecb16: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ecb17: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 006ecb1a: movsx esi, word ptr [edi + 0x7a] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+0x7au));
    /* 006ecb1e: mov dword ptr [edi + 0xf4], eax */ W32((u32)(r_edi+0xf4u), r_eax);
    /* 006ecb24: mov eax, dword ptr [esi*8 + 0x96dc70] */ r_eax = R32((u32)(r_esi*8+0x96dc70u));
    /* 006ecb2b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006ecb2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006ecb2f: jbe 0x6ecc62 */ if ((fC||fZ)) goto L_006ecc62;
L_006ecb35:; BB(0x006ecb35);
    /* 006ecb35: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 006ecb38: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 006ecb3b: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 006ecb3e: mov edi, dword ptr [ecx + 0x40] */ r_edi = R32((u32)(r_ecx+0x40u));
    /* 006ecb41: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 006ecb44: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ecb47: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 006ecb4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ecb4c: mov dword ptr [ebp - 0x44], edi */ W32((u32)(r_ebp+0xffffffbcu), r_edi);
    /* 006ecb4f: je 0x6ecb64 */ if (fZ) goto L_006ecb64;
L_006ecb51:; BB(0x006ecb51);
    /* 006ecb51: mov ecx, eax */ r_ecx = r_eax;
    /* 006ecb53: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006ecb55: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 006ecb58: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006ecb5b: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 006ecb5e: mov edi, dword ptr [ecx + 8] */ r_edi = R32((u32)(r_ecx+0x8u));
    /* 006ecb61: mov dword ptr [ebp - 0x44], edi */ W32((u32)(r_ebp+0xffffffbcu), r_edi);
L_006ecb64:; BB(0x006ecb64);
    /* 006ecb64: mov esi, dword ptr [esi*8 + 0x96dc6c] */ r_esi = R32((u32)(r_esi*8+0x96dc6cu));
    /* 006ecb6b: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 006ecb6e: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 006ecb71: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ecb73: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006ecb76: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ecb78: push dword ptr [edx + esi] */ { u32 v = R32((u32)(r_edx+r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 006ecb7b: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 006ecb7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ecb7f: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x6ecb84u); f_00509590();
    /* 006ecb84: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ecb87: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 006ecb8a: mov edi, dword ptr [esi + 0xf4] */ r_edi = R32((u32)(r_esi+0xf4u));
    /* 006ecb90: mov dword ptr [edi + ebx*4], eax */ W32((u32)(r_edi+r_ebx*4), r_eax);
    /* 006ecb93: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 006ecb96: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 006ecb99: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006ecb9c: movsx esi, word ptr [edi + 0x7a] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+0x7au));
    /* 006ecba0: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006ecba3: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006ecba6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ecba8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ecbaa: mov edx, dword ptr [ecx + 0x96dc6c] */ r_edx = R32((u32)(r_ecx+0x96dc6cu));
    /* 006ecbb0: mov eax, dword ptr [eax + edx + 4] */ r_eax = R32((u32)(r_eax+r_edx+0x4u));
    /* 006ecbb4: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ecbb6: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 006ecbb9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006ecbbc: je 0x6ecbf9 */ if (fZ) goto L_006ecbf9;
L_006ecbbe:; BB(0x006ecbbe);
    /* 006ecbbe: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ecbc1: mov eax, dword ptr [edi + 0xf4] */ r_eax = R32((u32)(r_edi+0xf4u));
    /* 006ecbc7: mov eax, dword ptr [eax + edx*2] */ r_eax = R32((u32)(r_eax+r_edx*2));
    /* 006ecbca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ecbcc: je 0x6ecbf9 */ if (fZ) goto L_006ecbf9;
L_006ecbce:; BB(0x006ecbce);
    /* 006ecbce: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ecbd1: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006ecbd4: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 006ecbd7: mov esi, dword ptr [edx + ecx + 8] */ r_esi = R32((u32)(r_edx+r_ecx+0x8u));
    /* 006ecbdb: mov dword ptr [eax + 0x44], esi */ W32((u32)(r_eax+0x44u), r_esi);
    /* 006ecbde: mov dword ptr [eax + 0x48], esi */ W32((u32)(r_eax+0x48u), r_esi);
    /* 006ecbe1: movsx esi, word ptr [edi + 0x7a] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+0x7au));
    /* 006ecbe5: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006ecbe8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ecbea: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ecbec: mov eax, dword ptr [ecx + 0x96dc6c] */ r_eax = R32((u32)(r_ecx+0x96dc6cu));
    /* 006ecbf2: mov eax, dword ptr [edx + eax + 4] */ r_eax = R32((u32)(r_edx+r_eax+0x4u));
    /* 006ecbf6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_006ecbf9:; BB(0x006ecbf9);
    /* 006ecbf9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006ecbfc: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ecbfe: je 0x6ecc53 */ if (fZ) goto L_006ecc53;
L_006ecc00:; BB(0x006ecc00);
    /* 006ecc00: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 006ecc06: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006ecc09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ecc0a: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6ecc0fu); f_005b8610();
    /* 006ecc0f: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 006ecc12: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ecc15: mov edi, dword ptr [0xa96680] */ r_edi = R32((u32)(0xa96680u));
    /* 006ecc1b: mov ecx, dword ptr [edx + 0xf4] */ r_ecx = R32((u32)(r_edx+0xf4u));
    /* 006ecc21: mov edx, dword ptr [ecx + esi*2] */ r_edx = R32((u32)(r_ecx+r_esi*2));
    /* 006ecc24: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 006ecc27: movzx eax, word ptr [edx + 0x2c] */ r_eax = (u32)R16((u32)(r_edx+0x2cu));
    /* 006ecc2b: mov dword ptr [edx + 0x58], 0 */ W32((u32)(r_edx+0x58u), 0x0u);
    /* 006ecc32: mov dword ptr [edx + 0x54], edi */ W32((u32)(r_edx+0x54u), r_edi);
    /* 006ecc35: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 006ecc38: mov dword ptr [edx + 0x60], 0x3f800000 */ W32((u32)(r_edx+0x60u), 0x3f800000u);
    /* 006ecc3f: or eax, 0xffff0200 */ {  u32 a = r_eax; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006ecc44: mov word ptr [edx + 0x2c], ax */ W16((u32)(r_edx+0x2cu), (u16)r_eax);
    /* 006ecc48: movsx esi, word ptr [edi + 0x7a] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+0x7au));
    /* 006ecc4c: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006ecc4f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ecc51: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_006ecc53:; BB(0x006ecc53);
    /* 006ecc53: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ecc56: cmp ebx, dword ptr [ecx + 0x96dc70] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0x96dc70u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006ecc5c: jb 0x6ecb35 */ if (fC) goto L_006ecb35;
L_006ecc62:; BB(0x006ecc62);
    /* 006ecc62: cmp esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ecc65: je 0x6ecc9e */ if (fZ) goto L_006ecc9e;
L_006ecc67:; BB(0x006ecc67);
    /* 006ecc67: mov ecx, edi */ r_ecx = r_edi;
    /* 006ecc69: call 0x6ec7b8 */ r_esp -= 4; W32(r_esp, 0x6ecc6eu); f_006ec7b8();
    /* 006ecc6e: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 006ecc71: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 006ecc74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ecc76: je 0x6ecc83 */ if (fZ) goto L_006ecc83;
L_006ecc78:; BB(0x006ecc78);
    /* 006ecc78: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006ecc7c: mov word ptr [edx + 0xb4], ax */ W16((u32)(r_edx+0xb4u), (u16)r_eax);
L_006ecc83:; BB(0x006ecc83);
    /* 006ecc83: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006ecc86: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006ecc89: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ecc8c: mov eax, edx */ r_eax = r_edx;
    /* 006ecc8e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ecc91: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ecc98: mov esp, ebp */ r_esp = r_ebp;
    /* 006ecc9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ecc9b: ret 0x10 */ FN_RET(0x006ec964); r_esp += 20; return;
L_006ecc9e:; BB(0x006ecc9e);
    /* 006ecc9e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ecca1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ecca3: je 0x6ecd2f */ if (fZ) goto L_006ecd2f;
L_006ecca9:; BB(0x006ecca9);
    /* 006ecca9: mov ecx, eax */ r_ecx = r_eax;
    /* 006eccab: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006eccad: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 006eccb0: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006eccb3: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 006eccb6: mov ebx, dword ptr [ecx + 8] */ r_ebx = R32((u32)(r_ecx+0x8u));
    /* 006eccb9: mov dword ptr [ebp - 0x38], ebx */ W32((u32)(r_ebp+0xffffffc8u), r_ebx);
L_006eccbc:; BB(0x006eccbc);
    /* 006eccbc: fld dword ptr [0x96db84] */ FPUSH(R_F32((u32)(0x96db84u)));
    /* 006eccc2: fadd dword ptr [ebp - 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffc4u));
    /* 006eccc5: fstp dword ptr [ebp - 0x3c] */ W_F32((u32)(r_ebp+0xffffffc4u), ST(0)); FPOP();
    /* 006eccc8: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 006ecccb: push 0x1d6 */ { u32 v = 0x1d6u; r_esp -= 4; W32(r_esp, v); }
    /* 006eccd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006eccd1: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6eccd6u); f_0050b510();
    /* 006eccd6: mov esi, eax */ r_esi = r_eax;
    /* 006eccd8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006eccdb: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eccdd: je 0x6ecd27 */ if (fZ) goto L_006ecd27;
L_006eccdf:; BB(0x006eccdf);
    /* 006eccdf: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 006ecce5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ecce7: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6eccecu); f_005b8610();
    /* 006eccec: mov ebx, eax */ r_ebx = r_eax;
    /* 006eccee: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 006eccf4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006eccf6: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x6eccfbu); f_005b8638();
    /* 006eccfb: mov edx, dword ptr [0xa96680] */ r_edx = R32((u32)(0xa96680u));
    /* 006ecd01: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 006ecd04: movzx ecx, word ptr [esi + 0x2c] */ r_ecx = (u32)R16((u32)(r_esi+0x2cu));
    /* 006ecd08: mov dword ptr [esi + 0x50], ebx */ W32((u32)(r_esi+0x50u), r_ebx);
    /* 006ecd0b: mov dword ptr [esi + 0x54], edx */ W32((u32)(r_esi+0x54u), r_edx);
    /* 006ecd0e: mov dword ptr [esi + 0x58], eax */ W32((u32)(r_esi+0x58u), r_eax);
    /* 006ecd11: mov dword ptr [esi + 0x60], 0x3f800000 */ W32((u32)(r_esi+0x60u), 0x3f800000u);
    /* 006ecd18: or ecx, 0xffff0200 */ {  u32 a = r_ecx; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 006ecd1e: mov word ptr [esi + 0x2c], cx */ W16((u32)(r_esi+0x2cu), (u16)r_ecx);
    /* 006ecd22: jmp 0x6ecc67 */ goto L_006ecc67;
L_006ecd27:; BB(0x006ecd27);
    /* 006ecd27: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 006ecd2a: jmp 0x6ecc67 */ goto L_006ecc67;
L_006ecd2f:; BB(0x006ecd2f);
    /* 006ecd2f: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 006ecd32: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 006ecd35: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 006ecd38: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 006ecd3b: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 006ecd3e: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 006ecd41: mov dword ptr [ebp - 0x38], ebx */ W32((u32)(r_ebp+0xffffffc8u), r_ebx);
    /* 006ecd44: jmp 0x6eccbc */ goto L_006eccbc;
}

void f_006ecd4c(void) /* sub_6ECD4C */
{
    FN_ENTER(0x006ecd4c);
    /* 006ecd4c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ecd4d: mov edi, ecx */ r_edi = r_ecx;
    /* 006ecd4f: mov eax, dword ptr [edi + 0xe8] */ r_eax = R32((u32)(r_edi+0xe8u));
    /* 006ecd55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ecd57: je 0x6ecd94 */ if (fZ) goto L_006ecd94;
L_006ecd59:; BB(0x006ecd59);
    /* 006ecd59: movzx eax, word ptr [edi + 0xb4] */ r_eax = (u32)R16((u32)(r_edi+0xb4u));
    /* 006ecd60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ecd61: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6ecd66u); f_007b4d18();
    /* 006ecd66: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ecd67: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 006ecd6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ecd6c: je 0x6ecda3 */ if (fZ) goto L_006ecda3;
L_006ecd6e:; BB(0x006ecd6e);
    /* 006ecd6e: add dword ptr [edi + 0x68], 1 */ { u32 ad = (u32)(r_edi+0x68u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006ecd72: mov ecx, edi */ r_ecx = r_edi;
    /* 006ecd74: call 0x6deadc */ r_esp -= 4; W32(r_esp, 0x6ecd79u); f_006deadc();
    /* 006ecd79: movsx eax, word ptr [edi + 0xa8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xa8u));
    /* 006ecd80: cmp eax, dword ptr [edi + 0x68] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x68u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ecd83: jge 0x6ecd92 */ if ((fS==fO)) goto L_006ecd92;
L_006ecd85:; BB(0x006ecd85);
    /* 006ecd85: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006ecd89: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ecd8e: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
L_006ecd92:; BB(0x006ecd92);
    /* 006ecd92: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ecd93: ret  */ FN_RET(0x006ecd4c); r_esp += 4; return;
L_006ecd94:; BB(0x006ecd94);
    /* 006ecd94: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006ecd98: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ecd9d: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 006ecda1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ecda2: ret  */ FN_RET(0x006ecd4c); r_esp += 4; return;
L_006ecda3:; BB(0x006ecda3);
    /* 006ecda3: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006ecda7: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ecdac: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 006ecdb0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ecdb1: ret  */ FN_RET(0x006ecd4c); r_esp += 4; return;
}

void f_006ecdb4(void) /* sub_6ECDB4 */
{
    FN_ENTER(0x006ecdb4);
    /* 006ecdb4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ecdb5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ecdb6: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ecdb9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006ecdbb: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 006ecdbf: movzx edx, word ptr [ecx + 0x1c] */ r_edx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 006ecdc3: movzx edi, word ptr [ebx + 0xf8] */ r_edi = (u32)R16((u32)(r_ebx+0xf8u));
    /* 006ecdca: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ecdcc: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ecdce: jne 0x6ecdd5 */ if (!fZ) goto L_006ecdd5;
L_006ecdd0:; BB(0x006ecdd0);
    /* 006ecdd0: mov eax, 1 */ r_eax = 0x1u;
L_006ecdd5:; BB(0x006ecdd5);
    /* 006ecdd5: movzx edi, word ptr [ebx + 0xfa] */ r_edi = (u32)R16((u32)(r_ebx+0xfau));
    /* 006ecddc: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ecdde: jne 0x6ecde5 */ if (!fZ) goto L_006ecde5;
L_006ecde0:; BB(0x006ecde0);
    /* 006ecde0: mov eax, 1 */ r_eax = 0x1u;
L_006ecde5:; BB(0x006ecde5);
    /* 006ecde5: movzx edi, word ptr [ebx + 0xfc] */ r_edi = (u32)R16((u32)(r_ebx+0xfcu));
    /* 006ecdec: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ecdee: jne 0x6ecdf5 */ if (!fZ) goto L_006ecdf5;
L_006ecdf0:; BB(0x006ecdf0);
    /* 006ecdf0: mov eax, 1 */ r_eax = 0x1u;
L_006ecdf5:; BB(0x006ecdf5);
    /* 006ecdf5: movzx edi, word ptr [ebx + 0xfe] */ r_edi = (u32)R16((u32)(r_ebx+0xfeu));
    /* 006ecdfc: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ecdfe: jne 0x6ece05 */ if (!fZ) goto L_006ece05;
L_006ece00:; BB(0x006ece00);
    /* 006ece00: mov eax, 1 */ r_eax = 0x1u;
L_006ece05:; BB(0x006ece05);
    /* 006ece05: movzx edi, word ptr [ebx + 0x100] */ r_edi = (u32)R16((u32)(r_ebx+0x100u));
    /* 006ece0c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ece0e: jne 0x6ece15 */ if (!fZ) goto L_006ece15;
L_006ece10:; BB(0x006ece10);
    /* 006ece10: mov eax, 1 */ r_eax = 0x1u;
L_006ece15:; BB(0x006ece15);
    /* 006ece15: movzx edi, word ptr [ebx + 0x102] */ r_edi = (u32)R16((u32)(r_ebx+0x102u));
    /* 006ece1c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ece1e: jne 0x6ece25 */ if (!fZ) goto L_006ece25;
L_006ece20:; BB(0x006ece20);
    /* 006ece20: mov eax, 1 */ r_eax = 0x1u;
L_006ece25:; BB(0x006ece25);
    /* 006ece25: movzx edi, word ptr [ebx + 0x104] */ r_edi = (u32)R16((u32)(r_ebx+0x104u));
    /* 006ece2c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ece2e: jne 0x6ece35 */ if (!fZ) goto L_006ece35;
L_006ece30:; BB(0x006ece30);
    /* 006ece30: mov eax, 1 */ r_eax = 0x1u;
L_006ece35:; BB(0x006ece35);
    /* 006ece35: movzx edi, word ptr [ebx + 0x106] */ r_edi = (u32)R16((u32)(r_ebx+0x106u));
    /* 006ece3c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ece3e: jne 0x6ece45 */ if (!fZ) goto L_006ece45;
L_006ece40:; BB(0x006ece40);
    /* 006ece40: mov eax, 1 */ r_eax = 0x1u;
L_006ece45:; BB(0x006ece45);
    /* 006ece45: movzx edi, word ptr [ebx + 0x108] */ r_edi = (u32)R16((u32)(r_ebx+0x108u));
    /* 006ece4c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ece4e: jne 0x6ece55 */ if (!fZ) goto L_006ece55;
L_006ece50:; BB(0x006ece50);
    /* 006ece50: mov eax, 1 */ r_eax = 0x1u;
L_006ece55:; BB(0x006ece55);
    /* 006ece55: movzx edi, word ptr [ebx + 0x10a] */ r_edi = (u32)R16((u32)(r_ebx+0x10au));
    /* 006ece5c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ece5e: jne 0x6ece65 */ if (!fZ) goto L_006ece65;
L_006ece60:; BB(0x006ece60);
    /* 006ece60: mov eax, 1 */ r_eax = 0x1u;
L_006ece65:; BB(0x006ece65);
    /* 006ece65: movzx edi, word ptr [ebx + 0x10c] */ r_edi = (u32)R16((u32)(r_ebx+0x10cu));
    /* 006ece6c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ece6e: jne 0x6ece75 */ if (!fZ) goto L_006ece75;
L_006ece70:; BB(0x006ece70);
    /* 006ece70: mov eax, 1 */ r_eax = 0x1u;
L_006ece75:; BB(0x006ece75);
    /* 006ece75: movzx edi, word ptr [ebx + 0x10e] */ r_edi = (u32)R16((u32)(r_ebx+0x10eu));
    /* 006ece7c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ece7e: jne 0x6ece85 */ if (!fZ) goto L_006ece85;
L_006ece80:; BB(0x006ece80);
    /* 006ece80: mov eax, 1 */ r_eax = 0x1u;
L_006ece85:; BB(0x006ece85);
    /* 006ece85: movzx edi, word ptr [ebx + 0x110] */ r_edi = (u32)R16((u32)(r_ebx+0x110u));
    /* 006ece8c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ece8e: jne 0x6ece95 */ if (!fZ) goto L_006ece95;
L_006ece90:; BB(0x006ece90);
    /* 006ece90: mov eax, 1 */ r_eax = 0x1u;
L_006ece95:; BB(0x006ece95);
    /* 006ece95: movzx edi, word ptr [ebx + 0x112] */ r_edi = (u32)R16((u32)(r_ebx+0x112u));
    /* 006ece9c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ece9e: jne 0x6ecea5 */ if (!fZ) goto L_006ecea5;
L_006ecea0:; BB(0x006ecea0);
    /* 006ecea0: mov eax, 1 */ r_eax = 0x1u;
L_006ecea5:; BB(0x006ecea5);
    /* 006ecea5: movzx edi, word ptr [ebx + 0x114] */ r_edi = (u32)R16((u32)(r_ebx+0x114u));
    /* 006eceac: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eceae: jne 0x6eceb5 */ if (!fZ) goto L_006eceb5;
L_006eceb0:; BB(0x006eceb0);
    /* 006eceb0: mov eax, 1 */ r_eax = 0x1u;
L_006eceb5:; BB(0x006eceb5);
    /* 006eceb5: movzx edi, word ptr [ebx + 0x116] */ r_edi = (u32)R16((u32)(r_ebx+0x116u));
    /* 006ecebc: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ecebe: jne 0x6ecec5 */ if (!fZ) goto L_006ecec5;
L_006ecec0:; BB(0x006ecec0);
    /* 006ecec0: mov eax, 1 */ r_eax = 0x1u;
L_006ecec5:; BB(0x006ecec5);
    /* 006ecec5: movzx edi, word ptr [ebx + 0x118] */ r_edi = (u32)R16((u32)(r_ebx+0x118u));
    /* 006ececc: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ecece: jne 0x6eced5 */ if (!fZ) goto L_006eced5;
L_006eced0:; BB(0x006eced0);
    /* 006eced0: mov eax, 1 */ r_eax = 0x1u;
L_006eced5:; BB(0x006eced5);
    /* 006eced5: movzx edi, word ptr [ebx + 0x11a] */ r_edi = (u32)R16((u32)(r_ebx+0x11au));
    /* 006ecedc: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ecede: jne 0x6ecee5 */ if (!fZ) goto L_006ecee5;
L_006ecee0:; BB(0x006ecee0);
    /* 006ecee0: mov eax, 1 */ r_eax = 0x1u;
L_006ecee5:; BB(0x006ecee5);
    /* 006ecee5: movzx edi, word ptr [ebx + 0x11c] */ r_edi = (u32)R16((u32)(r_ebx+0x11cu));
    /* 006eceec: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006eceee: jne 0x6ecef5 */ if (!fZ) goto L_006ecef5;
L_006ecef0:; BB(0x006ecef0);
    /* 006ecef0: mov eax, 1 */ r_eax = 0x1u;
L_006ecef5:; BB(0x006ecef5);
    /* 006ecef5: movzx edi, word ptr [ebx + 0x11e] */ r_edi = (u32)R16((u32)(r_ebx+0x11eu));
    /* 006ecefc: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ecefe: jne 0x6ecf05 */ if (!fZ) goto L_006ecf05;
L_006ecf00:; BB(0x006ecf00);
    /* 006ecf00: mov eax, 1 */ r_eax = 0x1u;
L_006ecf05:; BB(0x006ecf05);
    /* 006ecf05: movzx edi, word ptr [ebx + 0x120] */ r_edi = (u32)R16((u32)(r_ebx+0x120u));
    /* 006ecf0c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ecf0e: jne 0x6ecf15 */ if (!fZ) goto L_006ecf15;
L_006ecf10:; BB(0x006ecf10);
    /* 006ecf10: mov eax, 1 */ r_eax = 0x1u;
L_006ecf15:; BB(0x006ecf15);
    /* 006ecf15: movzx edi, word ptr [ebx + 0x122] */ r_edi = (u32)R16((u32)(r_ebx+0x122u));
    /* 006ecf1c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ecf1e: jne 0x6ecf25 */ if (!fZ) goto L_006ecf25;
L_006ecf20:; BB(0x006ecf20);
    /* 006ecf20: mov eax, 1 */ r_eax = 0x1u;
L_006ecf25:; BB(0x006ecf25);
    /* 006ecf25: movzx edi, word ptr [ebx + 0x124] */ r_edi = (u32)R16((u32)(r_ebx+0x124u));
    /* 006ecf2c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ecf2e: jne 0x6ecf35 */ if (!fZ) goto L_006ecf35;
L_006ecf30:; BB(0x006ecf30);
    /* 006ecf30: mov eax, 1 */ r_eax = 0x1u;
L_006ecf35:; BB(0x006ecf35);
    /* 006ecf35: movzx edi, word ptr [ebx + 0x126] */ r_edi = (u32)R16((u32)(r_ebx+0x126u));
    /* 006ecf3c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ecf3e: jne 0x6ecf45 */ if (!fZ) goto L_006ecf45;
L_006ecf40:; BB(0x006ecf40);
    /* 006ecf40: mov eax, 1 */ r_eax = 0x1u;
L_006ecf45:; BB(0x006ecf45);
    /* 006ecf45: movzx edi, word ptr [ebx + 0x128] */ r_edi = (u32)R16((u32)(r_ebx+0x128u));
    /* 006ecf4c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ecf4e: jne 0x6ecf55 */ if (!fZ) goto L_006ecf55;
L_006ecf50:; BB(0x006ecf50);
    /* 006ecf50: mov eax, 1 */ r_eax = 0x1u;
L_006ecf55:; BB(0x006ecf55);
    /* 006ecf55: movzx edi, word ptr [ebx + 0x12a] */ r_edi = (u32)R16((u32)(r_ebx+0x12au));
    /* 006ecf5c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ecf5e: jne 0x6ecf65 */ if (!fZ) goto L_006ecf65;
L_006ecf60:; BB(0x006ecf60);
    /* 006ecf60: mov eax, 1 */ r_eax = 0x1u;
L_006ecf65:; BB(0x006ecf65);
    /* 006ecf65: movzx edi, word ptr [ebx + 0x12c] */ r_edi = (u32)R16((u32)(r_ebx+0x12cu));
    /* 006ecf6c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ecf6e: jne 0x6ecf75 */ if (!fZ) goto L_006ecf75;
L_006ecf70:; BB(0x006ecf70);
    /* 006ecf70: mov eax, 1 */ r_eax = 0x1u;
L_006ecf75:; BB(0x006ecf75);
    /* 006ecf75: movzx edi, word ptr [ebx + 0x12e] */ r_edi = (u32)R16((u32)(r_ebx+0x12eu));
    /* 006ecf7c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ecf7e: jne 0x6ecf85 */ if (!fZ) goto L_006ecf85;
L_006ecf80:; BB(0x006ecf80);
    /* 006ecf80: mov eax, 1 */ r_eax = 0x1u;
L_006ecf85:; BB(0x006ecf85);
    /* 006ecf85: movzx edi, word ptr [ebx + 0x130] */ r_edi = (u32)R16((u32)(r_ebx+0x130u));
    /* 006ecf8c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ecf8e: jne 0x6ecf95 */ if (!fZ) goto L_006ecf95;
L_006ecf90:; BB(0x006ecf90);
    /* 006ecf90: mov eax, 1 */ r_eax = 0x1u;
L_006ecf95:; BB(0x006ecf95);
    /* 006ecf95: movzx edi, word ptr [ebx + 0x132] */ r_edi = (u32)R16((u32)(r_ebx+0x132u));
    /* 006ecf9c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ecf9e: jne 0x6ecfa5 */ if (!fZ) goto L_006ecfa5;
L_006ecfa0:; BB(0x006ecfa0);
    /* 006ecfa0: mov eax, 1 */ r_eax = 0x1u;
L_006ecfa5:; BB(0x006ecfa5);
    /* 006ecfa5: movzx edi, word ptr [ebx + 0x134] */ r_edi = (u32)R16((u32)(r_ebx+0x134u));
    /* 006ecfac: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ecfae: jne 0x6ecfb5 */ if (!fZ) goto L_006ecfb5;
L_006ecfb0:; BB(0x006ecfb0);
    /* 006ecfb0: mov eax, 1 */ r_eax = 0x1u;
L_006ecfb5:; BB(0x006ecfb5);
    /* 006ecfb5: movzx edi, word ptr [ebx + 0x136] */ r_edi = (u32)R16((u32)(r_ebx+0x136u));
    /* 006ecfbc: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ecfbe: jne 0x6ecfc5 */ if (!fZ) goto L_006ecfc5;
L_006ecfc0:; BB(0x006ecfc0);
    /* 006ecfc0: mov eax, 1 */ r_eax = 0x1u;
L_006ecfc5:; BB(0x006ecfc5);
    /* 006ecfc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ecfc7: jne 0x6ed01f */ if (!fZ) goto L_006ed01f;
L_006ecfc9:; BB(0x006ecfc9);
    /* 006ecfc9: mov eax, dword ptr [ebx + 0x138] */ r_eax = R32((u32)(r_ebx+0x138u));
    /* 006ecfcf: mov word ptr [ebx + eax*2 + 0xf8], dx */ W16((u32)(r_ebx+r_eax*2+0xf8u), (u16)r_edx);
    /* 006ecfd7: mov eax, dword ptr [ebx + 0x138] */ r_eax = R32((u32)(r_ebx+0x138u));
    /* 006ecfdd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ecfe0: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ecfe3: jl 0x6ecff1 */ if ((fS!=fO)) goto L_006ecff1;
L_006ecfe5:; BB(0x006ecfe5);
    /* 006ecfe5: mov dword ptr [ebx + 0x138], 0x1f */ W32((u32)(r_ebx+0x138u), 0x1fu);
    /* 006ecfef: jmp 0x6ecff7 */ goto L_006ecff7;
L_006ecff1:; BB(0x006ecff1);
    /* 006ecff1: mov dword ptr [ebx + 0x138], eax */ W32((u32)(r_ebx+0x138u), r_eax);
L_006ecff7:; BB(0x006ecff7);
    /* 006ecff7: mov edx, dword ptr [ebx + 0x88] */ r_edx = R32((u32)(r_ebx+0x88u));
    /* 006ecffd: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 006ecfff: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006ed003: mov dword ptr [esp], 2 */ W32((u32)(r_esp), 0x2u);
    /* 006ed00a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ed00c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006ed00e: push dword ptr [ebx + 0xb8] */ { u32 v = R32((u32)(r_ebx+0xb8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ed014: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ed015: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006ed017: push dword ptr [ebx + 0x1c] */ { u32 v = R32((u32)(r_ebx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006ed01a: call dword ptr [edi + 0x60] */ { u32 t = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, 0x6ed01du); call_ind(t); }
    /* 006ed01d: fstp st(0) */ ST(0) = ST(0); FPOP();
L_006ed01f:; BB(0x006ed01f);
    /* 006ed01f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ed022: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ed023: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ed024: ret 4 */ FN_RET(0x006ecdb4); r_esp += 8; return;
}

