#include "protos.h"

void f_005950f0(void) /* sub_5950F0 */
{
    FN_ENTER(0x005950f0);
    /* 005950f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005950f1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005950f2: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005950f4: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005950f8: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005950fb: je 0x595175 */ if (fZ) goto L_00595175;
L_005950fd:; BB(0x005950fd);
    /* 005950fd: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595100: je 0x59511c */ if (fZ) goto L_0059511c;
L_00595102:; BB(0x00595102);
    /* 00595102: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00595104: jne 0x59513b */ if (!fZ) goto L_0059513b;
L_00595106:; BB(0x00595106);
    /* 00595106: mov eax, dword ptr [ebx + 0x43c] */ r_eax = R32((u32)(r_ebx+0x43cu));
    /* 0059510c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059510f: mov dword ptr [ebx + 0x43c], eax */ W32((u32)(r_ebx+0x43cu), r_eax);
    /* 00595115: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00595118: jne 0x59513b */ if (!fZ) goto L_0059513b;
L_0059511a:; BB(0x0059511a);
    /* 0059511a: jmp 0x595140 */ goto L_00595140;
L_0059511c:; BB(0x0059511c);
    /* 0059511c: mov eax, dword ptr [ebx + 0x43c] */ r_eax = R32((u32)(r_ebx+0x43cu));
    /* 00595122: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00595125: jle 0x59513b */ if ((fZ||fS!=fO)) goto L_0059513b;
L_00595127:; BB(0x00595127);
    /* 00595127: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 0059512d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595130: je 0x595167 */ if (fZ) goto L_00595167;
L_00595132:; BB(0x00595132);
    /* 00595132: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00595134: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00595136: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59513bu); f_0051f62c();
L_0059513b:; BB(0x0059513b);
    /* 0059513b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059513c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059513d: ret 4 */ FN_RET(0x005950f0); r_esp += 8; return;
L_00595140:; BB(0x00595140);
    /* 00595140: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 00595143: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00595145: mov dword ptr [ebx + 0x3e8], eax */ W32((u32)(r_ebx+0x3e8u), r_eax);
    /* 0059514b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059514d: call dword ptr [edx + 0x1a0] */ { u32 t = R32((u32)(r_edx+0x1a0u)); r_esp -= 4; W32(r_esp, 0x595153u); call_ind(t); }
    /* 00595153: fld dword ptr [ebx + 0x3e8] */ FPUSH(R_F32((u32)(r_ebx+0x3e8u)));
    /* 00595159: fsub dword ptr [ebx + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x3cu));
    /* 0059515c: fstp dword ptr [ebx + 0x3ec] */ W_F32((u32)(r_ebx+0x3ecu), ST(0)); FPOP();
    /* 00595162: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00595163: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00595164: ret 4 */ FN_RET(0x005950f0); r_esp += 8; return;
L_00595167:; BB(0x00595167);
    /* 00595167: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00595169: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059516b: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x595170u); f_0051f62c();
    /* 00595170: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00595171: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00595172: ret 4 */ FN_RET(0x005950f0); r_esp += 8; return;
L_00595175:; BB(0x00595175);
    /* 00595175: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 0059517b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059517e: je 0x59521a */ if (fZ) goto L_0059521a;
L_00595184:; BB(0x00595184);
    /* 00595184: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00595186: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00595188: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0059518f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00595191: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x595196u); f_0051f664();
L_00595196:; BB(0x00595196);
    /* 00595196: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00595198: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059519a: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x5951a0u); call_ind(t); }
    /* 005951a0: mov eax, dword ptr [ebx + 0x3d4] */ r_eax = R32((u32)(r_ebx+0x3d4u));
    /* 005951a6: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005951a9: and eax, 0xffeffffa */ {  u32 a = r_eax; u32 b = 0xffeffffau; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005951ae: mov dword ptr [ebx + 0x3d4], eax */ W32((u32)(r_ebx+0x3d4u), r_eax);
    /* 005951b4: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x5951b9u); f_00520e6c();
    /* 005951b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005951bb: je 0x5951ce */ if (fZ) goto L_005951ce;
L_005951bd:; BB(0x005951bd);
    /* 005951bd: mov eax, dword ptr [ebx + 0x3d4] */ r_eax = R32((u32)(r_ebx+0x3d4u));
    /* 005951c3: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005951c8: mov dword ptr [ebx + 0x3d4], eax */ W32((u32)(r_ebx+0x3d4u), r_eax);
L_005951ce:; BB(0x005951ce);
    /* 005951ce: mov eax, dword ptr [ebx + 0x50] */ r_eax = R32((u32)(r_ebx+0x50u));
    /* 005951d1: mov esi, dword ptr [ebx + 0x54] */ r_esi = R32((u32)(r_ebx+0x54u));
    /* 005951d4: mov edx, dword ptr [ebx + 0x58] */ r_edx = R32((u32)(r_ebx+0x58u));
    /* 005951d7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005951d9: mov dword ptr [ebx + 0x43c], ecx */ W32((u32)(r_ebx+0x43cu), r_ecx);
    /* 005951df: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 005951e2: mov dword ptr [ebx + 0x3c], esi */ W32((u32)(r_ebx+0x3cu), r_esi);
    /* 005951e5: mov dword ptr [ebx + 0x40], edx */ W32((u32)(r_ebx+0x40u), r_edx);
    /* 005951e8: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 005951eb: mov dword ptr [ebx + 0x48], esi */ W32((u32)(r_ebx+0x48u), r_esi);
    /* 005951ee: mov dword ptr [ebx + 0x4c], edx */ W32((u32)(r_ebx+0x4cu), r_edx);
    /* 005951f1: mov dword ptr [ebx + 0x300], eax */ W32((u32)(r_ebx+0x300u), r_eax);
    /* 005951f7: mov dword ptr [ebx + 0x304], esi */ W32((u32)(r_ebx+0x304u), r_esi);
    /* 005951fd: mov dword ptr [ebx + 0x308], edx */ W32((u32)(r_ebx+0x308u), r_edx);
    /* 00595203: mov dword ptr [ebx + 0x3e8], esi */ W32((u32)(r_ebx+0x3e8u), r_esi);
    /* 00595209: mov dword ptr [ebx + 0x400], ecx */ W32((u32)(r_ebx+0x400u), r_ecx);
    /* 0059520f: mov dword ptr [ebx + 0x404], ecx */ W32((u32)(r_ebx+0x404u), r_ecx);
    /* 00595215: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00595216: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00595217: ret 4 */ FN_RET(0x005950f0); r_esp += 8; return;
L_0059521a:; BB(0x0059521a);
    /* 0059521a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059521c: mov eax, 2 */ r_eax = 0x2u;
    /* 00595221: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00595228: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059522a: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x59522fu); f_0051f664();
    /* 0059522f: jmp 0x595196 */ goto L_00595196;
}

void f_00595234(void) /* sub_595234 */
{
    FN_ENTER(0x00595234);
    /* 00595234: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00595235: mov edi, ecx */ r_edi = r_ecx;
    /* 00595237: mov ecx, edi */ r_ecx = r_edi;
    /* 00595239: call 0x521840 */ r_esp -= 4; W32(r_esp, 0x59523eu); f_00521840();
    /* 0059523e: mov ecx, edi */ r_ecx = r_edi;
    /* 00595240: call 0x591c48 */ r_esp -= 4; W32(r_esp, 0x595245u); f_00591c48();
    /* 00595245: mov eax, dword ptr [0xa744dc] */ r_eax = R32((u32)(0xa744dcu));
    /* 0059524a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059524c: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00595252: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00595255: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 00595258: push 0x9bfb84 */ { u32 v = 0x9bfb84u; r_esp -= 4; W32(r_esp, v); }
    /* 0059525d: mov ecx, edi */ r_ecx = r_edi;
    /* 0059525f: call 0x51ff3c */ r_esp -= 4; W32(r_esp, 0x595264u); f_0051ff3c();
    /* 00595264: mov eax, dword ptr [0xa744dc] */ r_eax = R32((u32)(0xa744dcu));
    /* 00595269: mov dword ptr [edi + 0xb0], 0 */ W32((u32)(r_edi+0xb0u), 0x0u);
    /* 00595273: mov ecx, edi */ r_ecx = r_edi;
    /* 00595275: mov dword ptr [edi + 0xd8], 0x9bfa00 */ W32((u32)(r_edi+0xd8u), 0x9bfa00u);
    /* 0059527f: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00595285: movsx eax, word ptr [edi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 0059528c: mov dword ptr [edi + 0xdc], edx */ W32((u32)(r_edi+0xdcu), r_edx);
    /* 00595292: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00595293: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x595298u); f_007aa4c8();
    /* 00595298: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 0059529e: push dword ptr [eax*4 + 0xa744e8] */ { u32 v = R32((u32)(r_eax*4+0xa744e8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005952a5: mov ecx, edi */ r_ecx = r_edi;
    /* 005952a7: push dword ptr [eax*4 + 0xa744f0] */ { u32 v = R32((u32)(r_eax*4+0xa744f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005952ae: push dword ptr [eax*4 + 0xa744f8] */ { u32 v = R32((u32)(r_eax*4+0xa744f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005952b5: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x5952bau); f_00520c70();
    /* 005952ba: mov ecx, edi */ r_ecx = r_edi;
    /* 005952bc: call 0x520370 */ r_esp -= 4; W32(r_esp, 0x5952c1u); f_00520370();
    /* 005952c1: mov dword ptr [edi + 0x358], 0x9bfb68 */ W32((u32)(r_edi+0x358u), 0x9bfb68u);
    /* 005952cb: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005952cd: mov ecx, edi */ r_ecx = r_edi;
    /* 005952cf: mov dword ptr [edi + 0x384], 0x41200000 */ W32((u32)(r_edi+0x384u), 0x41200000u);
    /* 005952d9: call 0x521820 */ r_esp -= 4; W32(r_esp, 0x5952deu); f_00521820();
    /* 005952de: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005952e0: mov ecx, edi */ r_ecx = r_edi;
    /* 005952e2: call 0x5217fc */ r_esp -= 4; W32(r_esp, 0x5952e7u); f_005217fc();
    /* 005952e7: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 005952ea: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 005952ed: mov dword ptr [edi + 0x3ec], 0 */ W32((u32)(r_edi+0x3ecu), 0x0u);
    /* 005952f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005952f9: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 005952ff: mov dword ptr [edi + 0x3d8], eax */ W32((u32)(r_edi+0x3d8u), r_eax);
    /* 00595305: mov dword ptr [edi + 0x3dc], edx */ W32((u32)(r_edi+0x3dcu), r_edx);
    /* 0059530b: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 0059530e: mov dword ptr [edi + 0x3e0], ecx */ W32((u32)(r_edi+0x3e0u), r_ecx);
    /* 00595314: mov dword ptr [edi + 0x3e4], edx */ W32((u32)(r_edi+0x3e4u), r_edx);
    /* 0059531a: mov dword ptr [edi + 0x3e8], ecx */ W32((u32)(r_edi+0x3e8u), r_ecx);
    /* 00595320: mov dword ptr [edi + 0x400], eax */ W32((u32)(r_edi+0x400u), r_eax);
    /* 00595326: mov dword ptr [edi + 0x404], eax */ W32((u32)(r_edi+0x404u), r_eax);
    /* 0059532c: movzx eax, word ptr [edi + 0x2d0] */ r_eax = (u32)R16((u32)(r_edi+0x2d0u));
    /* 00595333: mov word ptr [edi + 0x40c], ax */ W16((u32)(r_edi+0x40cu), (u16)r_eax);
    /* 0059533a: mov eax, dword ptr [edi + 0x41c] */ r_eax = R32((u32)(r_edi+0x41cu));
    /* 00595340: lea ecx, [edi + 0x41c] */ r_ecx = (u32)(r_edi+0x41cu);
    /* 00595346: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x595349u); call_ind(t); }
    /* 00595349: mov edx, dword ptr [edi + 0x3c8] */ r_edx = R32((u32)(r_edi+0x3c8u));
    /* 0059534f: mov dword ptr [edi + 0x448], 0 */ W32((u32)(r_edi+0x448u), 0x0u);
    /* 00595359: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059535b: mov dword ptr [edi + 0x43c], eax */ W32((u32)(r_edi+0x43cu), r_eax);
    /* 00595361: mov dword ptr [edi + 0x44c], 0 */ W32((u32)(r_edi+0x44cu), 0x0u);
    /* 0059536b: mov dword ptr [edi + 0x440], eax */ W32((u32)(r_edi+0x440u), r_eax);
    /* 00595371: mov dword ptr [edi + 0x444], eax */ W32((u32)(r_edi+0x444u), r_eax);
    /* 00595377: mov dword ptr [edi + 0x45c], eax */ W32((u32)(r_edi+0x45cu), r_eax);
    /* 0059537d: mov dword ptr [edi + 0x450], 0 */ W32((u32)(r_edi+0x450u), 0x0u);
    /* 00595387: mov dword ptr [edi + 0x460], eax */ W32((u32)(r_edi+0x460u), r_eax);
    /* 0059538d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595390: mov dword ptr [edi + 0x454], 0 */ W32((u32)(r_edi+0x454u), 0x0u);
    /* 0059539a: mov dword ptr [edi + 0x458], 0 */ W32((u32)(r_edi+0x458u), 0x0u);
    /* 005953a4: je 0x5953b6 */ if (fZ) goto L_005953b6;
L_005953a6:; BB(0x005953a6);
    /* 005953a6: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005953ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005953ad: mov ecx, edi */ r_ecx = r_edi;
    /* 005953af: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x5953b4u); f_007b52ec();
    /* 005953b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005953b5: ret  */ FN_RET(0x00595234); r_esp += 4; return;
L_005953b6:; BB(0x005953b6);
    /* 005953b6: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005953bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005953bd: mov ecx, edi */ r_ecx = r_edi;
    /* 005953bf: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x5953c4u); f_007b52c4();
    /* 005953c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005953c5: ret  */ FN_RET(0x00595234); r_esp += 4; return;
}

void f_00595241(void)
{
    FN_ENTER(0x00595241);
    /* 00595241: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    UNSUP(0x00595243, "falls out of decoded code");
}

void f_00595243(void)
{
    FN_ENTER(0x00595243);
}

void f_00595250(void)
{
    FN_ENTER(0x00595250);
    /* 00595250: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00595252: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00595255: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 00595258: push 0x9bfb84 */ { u32 v = 0x9bfb84u; r_esp -= 4; W32(r_esp, v); }
    /* 0059525d: mov ecx, edi */ r_ecx = r_edi;
    /* 0059525f: call 0x51ff3c */ r_esp -= 4; W32(r_esp, 0x595264u); f_0051ff3c();
    /* 00595264: mov eax, dword ptr [0xa744dc] */ r_eax = R32((u32)(0xa744dcu));
    /* 00595269: mov dword ptr [edi + 0xb0], 0 */ W32((u32)(r_edi+0xb0u), 0x0u);
    /* 00595273: mov ecx, edi */ r_ecx = r_edi;
    /* 00595275: mov dword ptr [edi + 0xd8], 0x9bfa00 */ W32((u32)(r_edi+0xd8u), 0x9bfa00u);
    /* 0059527f: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00595285: movsx eax, word ptr [edi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 0059528c: mov dword ptr [edi + 0xdc], edx */ W32((u32)(r_edi+0xdcu), r_edx);
    /* 00595292: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00595293: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x595298u); f_007aa4c8();
    /* 00595298: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 0059529e: push dword ptr [eax*4 + 0xa744e8] */ { u32 v = R32((u32)(r_eax*4+0xa744e8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005952a5: mov ecx, edi */ r_ecx = r_edi;
    /* 005952a7: push dword ptr [eax*4 + 0xa744f0] */ { u32 v = R32((u32)(r_eax*4+0xa744f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005952ae: push dword ptr [eax*4 + 0xa744f8] */ { u32 v = R32((u32)(r_eax*4+0xa744f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005952b5: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x5952bau); f_00520c70();
    /* 005952ba: mov ecx, edi */ r_ecx = r_edi;
    /* 005952bc: call 0x520370 */ r_esp -= 4; W32(r_esp, 0x5952c1u); f_00520370();
    /* 005952c1: mov dword ptr [edi + 0x358], 0x9bfb68 */ W32((u32)(r_edi+0x358u), 0x9bfb68u);
    /* 005952cb: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005952cd: mov ecx, edi */ r_ecx = r_edi;
    /* 005952cf: mov dword ptr [edi + 0x384], 0x41200000 */ W32((u32)(r_edi+0x384u), 0x41200000u);
    /* 005952d9: call 0x521820 */ r_esp -= 4; W32(r_esp, 0x5952deu); f_00521820();
    /* 005952de: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005952e0: mov ecx, edi */ r_ecx = r_edi;
    /* 005952e2: call 0x5217fc */ r_esp -= 4; W32(r_esp, 0x5952e7u); f_005217fc();
    /* 005952e7: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 005952ea: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 005952ed: mov dword ptr [edi + 0x3ec], 0 */ W32((u32)(r_edi+0x3ecu), 0x0u);
    /* 005952f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005952f9: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 005952ff: mov dword ptr [edi + 0x3d8], eax */ W32((u32)(r_edi+0x3d8u), r_eax);
    /* 00595305: mov dword ptr [edi + 0x3dc], edx */ W32((u32)(r_edi+0x3dcu), r_edx);
    /* 0059530b: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 0059530e: mov dword ptr [edi + 0x3e0], ecx */ W32((u32)(r_edi+0x3e0u), r_ecx);
    /* 00595314: mov dword ptr [edi + 0x3e4], edx */ W32((u32)(r_edi+0x3e4u), r_edx);
    /* 0059531a: mov dword ptr [edi + 0x3e8], ecx */ W32((u32)(r_edi+0x3e8u), r_ecx);
    /* 00595320: mov dword ptr [edi + 0x400], eax */ W32((u32)(r_edi+0x400u), r_eax);
    /* 00595326: mov dword ptr [edi + 0x404], eax */ W32((u32)(r_edi+0x404u), r_eax);
    /* 0059532c: movzx eax, word ptr [edi + 0x2d0] */ r_eax = (u32)R16((u32)(r_edi+0x2d0u));
    /* 00595333: mov word ptr [edi + 0x40c], ax */ W16((u32)(r_edi+0x40cu), (u16)r_eax);
    /* 0059533a: mov eax, dword ptr [edi + 0x41c] */ r_eax = R32((u32)(r_edi+0x41cu));
    /* 00595340: lea ecx, [edi + 0x41c] */ r_ecx = (u32)(r_edi+0x41cu);
    /* 00595346: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x595349u); call_ind(t); }
    /* 00595349: mov edx, dword ptr [edi + 0x3c8] */ r_edx = R32((u32)(r_edi+0x3c8u));
    /* 0059534f: mov dword ptr [edi + 0x448], 0 */ W32((u32)(r_edi+0x448u), 0x0u);
    /* 00595359: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059535b: mov dword ptr [edi + 0x43c], eax */ W32((u32)(r_edi+0x43cu), r_eax);
    /* 00595361: mov dword ptr [edi + 0x44c], 0 */ W32((u32)(r_edi+0x44cu), 0x0u);
    /* 0059536b: mov dword ptr [edi + 0x440], eax */ W32((u32)(r_edi+0x440u), r_eax);
    /* 00595371: mov dword ptr [edi + 0x444], eax */ W32((u32)(r_edi+0x444u), r_eax);
    /* 00595377: mov dword ptr [edi + 0x45c], eax */ W32((u32)(r_edi+0x45cu), r_eax);
    /* 0059537d: mov dword ptr [edi + 0x450], 0 */ W32((u32)(r_edi+0x450u), 0x0u);
    /* 00595387: mov dword ptr [edi + 0x460], eax */ W32((u32)(r_edi+0x460u), r_eax);
    /* 0059538d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595390: mov dword ptr [edi + 0x454], 0 */ W32((u32)(r_edi+0x454u), 0x0u);
    /* 0059539a: mov dword ptr [edi + 0x458], 0 */ W32((u32)(r_edi+0x458u), 0x0u);
    /* 005953a4: je 0x5953b6 */ if (fZ) goto L_005953b6;
L_005953a6:; BB(0x005953a6);
    /* 005953a6: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005953ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005953ad: mov ecx, edi */ r_ecx = r_edi;
    /* 005953af: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x5953b4u); f_007b52ec();
    /* 005953b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005953b5: ret  */ FN_RET(0x00595250); r_esp += 4; return;
L_005953b6:; BB(0x005953b6);
    /* 005953b6: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005953bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005953bd: mov ecx, edi */ r_ecx = r_edi;
    /* 005953bf: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x5953c4u); f_007b52c4();
    /* 005953c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005953c5: ret  */ FN_RET(0x00595250); r_esp += 4; return;
}

void f_00595255(void)
{
    FN_ENTER(0x00595255);
    /* 00595255: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 00595258: push 0x9bfb84 */ { u32 v = 0x9bfb84u; r_esp -= 4; W32(r_esp, v); }
    /* 0059525d: mov ecx, edi */ r_ecx = r_edi;
    /* 0059525f: call 0x51ff3c */ r_esp -= 4; W32(r_esp, 0x595264u); f_0051ff3c();
    /* 00595264: mov eax, dword ptr [0xa744dc] */ r_eax = R32((u32)(0xa744dcu));
    /* 00595269: mov dword ptr [edi + 0xb0], 0 */ W32((u32)(r_edi+0xb0u), 0x0u);
    /* 00595273: mov ecx, edi */ r_ecx = r_edi;
    /* 00595275: mov dword ptr [edi + 0xd8], 0x9bfa00 */ W32((u32)(r_edi+0xd8u), 0x9bfa00u);
    /* 0059527f: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00595285: movsx eax, word ptr [edi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 0059528c: mov dword ptr [edi + 0xdc], edx */ W32((u32)(r_edi+0xdcu), r_edx);
    /* 00595292: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00595293: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x595298u); f_007aa4c8();
    /* 00595298: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 0059529e: push dword ptr [eax*4 + 0xa744e8] */ { u32 v = R32((u32)(r_eax*4+0xa744e8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005952a5: mov ecx, edi */ r_ecx = r_edi;
    /* 005952a7: push dword ptr [eax*4 + 0xa744f0] */ { u32 v = R32((u32)(r_eax*4+0xa744f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005952ae: push dword ptr [eax*4 + 0xa744f8] */ { u32 v = R32((u32)(r_eax*4+0xa744f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005952b5: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x5952bau); f_00520c70();
    /* 005952ba: mov ecx, edi */ r_ecx = r_edi;
    /* 005952bc: call 0x520370 */ r_esp -= 4; W32(r_esp, 0x5952c1u); f_00520370();
    /* 005952c1: mov dword ptr [edi + 0x358], 0x9bfb68 */ W32((u32)(r_edi+0x358u), 0x9bfb68u);
    /* 005952cb: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005952cd: mov ecx, edi */ r_ecx = r_edi;
    /* 005952cf: mov dword ptr [edi + 0x384], 0x41200000 */ W32((u32)(r_edi+0x384u), 0x41200000u);
    /* 005952d9: call 0x521820 */ r_esp -= 4; W32(r_esp, 0x5952deu); f_00521820();
    /* 005952de: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005952e0: mov ecx, edi */ r_ecx = r_edi;
    /* 005952e2: call 0x5217fc */ r_esp -= 4; W32(r_esp, 0x5952e7u); f_005217fc();
    /* 005952e7: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 005952ea: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 005952ed: mov dword ptr [edi + 0x3ec], 0 */ W32((u32)(r_edi+0x3ecu), 0x0u);
    /* 005952f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005952f9: mov dword ptr [edi + 0x3d4], eax */ W32((u32)(r_edi+0x3d4u), r_eax);
    /* 005952ff: mov dword ptr [edi + 0x3d8], eax */ W32((u32)(r_edi+0x3d8u), r_eax);
    /* 00595305: mov dword ptr [edi + 0x3dc], edx */ W32((u32)(r_edi+0x3dcu), r_edx);
    /* 0059530b: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 0059530e: mov dword ptr [edi + 0x3e0], ecx */ W32((u32)(r_edi+0x3e0u), r_ecx);
    /* 00595314: mov dword ptr [edi + 0x3e4], edx */ W32((u32)(r_edi+0x3e4u), r_edx);
    /* 0059531a: mov dword ptr [edi + 0x3e8], ecx */ W32((u32)(r_edi+0x3e8u), r_ecx);
    /* 00595320: mov dword ptr [edi + 0x400], eax */ W32((u32)(r_edi+0x400u), r_eax);
    /* 00595326: mov dword ptr [edi + 0x404], eax */ W32((u32)(r_edi+0x404u), r_eax);
    /* 0059532c: movzx eax, word ptr [edi + 0x2d0] */ r_eax = (u32)R16((u32)(r_edi+0x2d0u));
    /* 00595333: mov word ptr [edi + 0x40c], ax */ W16((u32)(r_edi+0x40cu), (u16)r_eax);
    /* 0059533a: mov eax, dword ptr [edi + 0x41c] */ r_eax = R32((u32)(r_edi+0x41cu));
    /* 00595340: lea ecx, [edi + 0x41c] */ r_ecx = (u32)(r_edi+0x41cu);
    /* 00595346: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x595349u); call_ind(t); }
    /* 00595349: mov edx, dword ptr [edi + 0x3c8] */ r_edx = R32((u32)(r_edi+0x3c8u));
    /* 0059534f: mov dword ptr [edi + 0x448], 0 */ W32((u32)(r_edi+0x448u), 0x0u);
    /* 00595359: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059535b: mov dword ptr [edi + 0x43c], eax */ W32((u32)(r_edi+0x43cu), r_eax);
    /* 00595361: mov dword ptr [edi + 0x44c], 0 */ W32((u32)(r_edi+0x44cu), 0x0u);
    /* 0059536b: mov dword ptr [edi + 0x440], eax */ W32((u32)(r_edi+0x440u), r_eax);
    /* 00595371: mov dword ptr [edi + 0x444], eax */ W32((u32)(r_edi+0x444u), r_eax);
    /* 00595377: mov dword ptr [edi + 0x45c], eax */ W32((u32)(r_edi+0x45cu), r_eax);
    /* 0059537d: mov dword ptr [edi + 0x450], 0 */ W32((u32)(r_edi+0x450u), 0x0u);
    /* 00595387: mov dword ptr [edi + 0x460], eax */ W32((u32)(r_edi+0x460u), r_eax);
    /* 0059538d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595390: mov dword ptr [edi + 0x454], 0 */ W32((u32)(r_edi+0x454u), 0x0u);
    /* 0059539a: mov dword ptr [edi + 0x458], 0 */ W32((u32)(r_edi+0x458u), 0x0u);
    /* 005953a4: je 0x5953b6 */ if (fZ) goto L_005953b6;
L_005953a6:; BB(0x005953a6);
    /* 005953a6: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005953ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005953ad: mov ecx, edi */ r_ecx = r_edi;
    /* 005953af: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x5953b4u); f_007b52ec();
    /* 005953b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005953b5: ret  */ FN_RET(0x00595255); r_esp += 4; return;
L_005953b6:; BB(0x005953b6);
    /* 005953b6: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005953bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005953bd: mov ecx, edi */ r_ecx = r_edi;
    /* 005953bf: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x5953c4u); f_007b52c4();
    /* 005953c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005953c5: ret  */ FN_RET(0x00595255); r_esp += 4; return;
}

void f_00595345(void)
{
    FN_ENTER(0x00595345);
    /* 00595345: add bh, bh */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00595347: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00595348: or al, 0x8b */ {  u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0059534a: xchg edi, eax */ { u32 x = r_edi; u32 y = r_eax; r_edi = y; r_eax = x; }
    /* 0059534b: enter 3, 0 */ { u32 f = 0x3u; u32 lv = 0u; r_esp -= 4; W32(r_esp, r_ebp); u32 fr = r_esp; if (lv) { u32 k = 1; while (k < lv) { r_ebp -= 4; r_esp -= 4; W32(r_esp, R32(r_ebp)); k++; } r_esp -= 4; W32(r_esp, fr); } r_ebp = fr; r_esp -= f; }
    /* 0059534f: mov dword ptr [edi + 0x448], 0 */ W32((u32)(r_edi+0x448u), 0x0u);
    /* 00595359: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059535b: mov dword ptr [edi + 0x43c], eax */ W32((u32)(r_edi+0x43cu), r_eax);
    /* 00595361: mov dword ptr [edi + 0x44c], 0 */ W32((u32)(r_edi+0x44cu), 0x0u);
    /* 0059536b: mov dword ptr [edi + 0x440], eax */ W32((u32)(r_edi+0x440u), r_eax);
    /* 00595371: mov dword ptr [edi + 0x444], eax */ W32((u32)(r_edi+0x444u), r_eax);
    /* 00595377: mov dword ptr [edi + 0x45c], eax */ W32((u32)(r_edi+0x45cu), r_eax);
    /* 0059537d: mov dword ptr [edi + 0x450], 0 */ W32((u32)(r_edi+0x450u), 0x0u);
    /* 00595387: mov dword ptr [edi + 0x460], eax */ W32((u32)(r_edi+0x460u), r_eax);
    /* 0059538d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595390: mov dword ptr [edi + 0x454], 0 */ W32((u32)(r_edi+0x454u), 0x0u);
    /* 0059539a: mov dword ptr [edi + 0x458], 0 */ W32((u32)(r_edi+0x458u), 0x0u);
    /* 005953a4: je 0x5953b6 */ if (fZ) goto L_005953b6;
L_005953a6:; BB(0x005953a6);
    /* 005953a6: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005953ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005953ad: mov ecx, edi */ r_ecx = r_edi;
    /* 005953af: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x5953b4u); f_007b52ec();
    /* 005953b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005953b5: ret  */ FN_RET(0x00595345); r_esp += 4; return;
L_005953b6:; BB(0x005953b6);
    /* 005953b6: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005953bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005953bd: mov ecx, edi */ r_ecx = r_edi;
    /* 005953bf: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x5953c4u); f_007b52c4();
    /* 005953c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005953c5: ret  */ FN_RET(0x00595345); r_esp += 4; return;
}

void f_005953c0(void)
{
    FN_ENTER(0x005953c0);
    /* 005953c0: add bh, bh */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 005953c2: and dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005953c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005953c5: ret  */ FN_RET(0x005953c0); r_esp += 4; return;
}

void f_005953c8(void) /* sub_5953C8 */
{
    FN_ENTER(0x005953c8);
    /* 005953c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005953c9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005953cb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005953cd: call 0x5953ec */ r_esp -= 4; W32(r_esp, 0x5953d2u); f_005953ec();
    /* 005953d2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005953d6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005953d8: jne 0x5953de */ if (!fZ) goto L_005953de;
L_005953da:; BB(0x005953da);
    /* 005953da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005953db: ret 4 */ FN_RET(0x005953c8); r_esp += 8; return;
L_005953de:; BB(0x005953de);
    /* 005953de: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005953df: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5953e4u); f_005c2f74();
    /* 005953e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005953e5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005953e6: ret 4 */ FN_RET(0x005953c8); r_esp += 8; return;
}

void f_005953ec(void) /* sub_5953EC */
{
    FN_ENTER(0x005953ec);
    /* 005953ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005953ed: mov ebp, esp */ r_ebp = r_esp;
    /* 005953ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005953f1: push 0x8d82c0 */ { u32 v = 0x8d82c0u; r_esp -= 4; W32(r_esp, v); }
    /* 005953f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005953fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005953fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00595404: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00595407: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0059540a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0059540d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00595410: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00595413: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00595416: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00595419: mov eax, dword ptr [ecx + 0x3c0] */ r_eax = R32((u32)(r_ecx+0x3c0u));
    /* 0059541f: mov dword ptr [ecx], 0xb09380 */ W32((u32)(r_ecx), 0xb09380u);
    /* 00595425: lea ebx, [ecx + 0x3c0] */ r_ebx = (u32)(r_ecx+0x3c0u);
    /* 0059542b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059542e: je 0x5954de */ if (fZ) goto L_005954de;
L_00595434:; BB(0x00595434);
    /* 00595434: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 0059543a: lea ebx, [ecx + 0x3c8] */ r_ebx = (u32)(r_ecx+0x3c8u);
    /* 00595440: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595443: je 0x5954be */ if (fZ) goto L_005954be;
L_00595445:; BB(0x00595445);
    /* 00595445: mov eax, dword ptr [ecx + 0x3d0] */ r_eax = R32((u32)(r_ecx+0x3d0u));
    /* 0059544b: lea ebx, [ecx + 0x3d0] */ r_ebx = (u32)(r_ecx+0x3d0u);
    /* 00595451: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595454: je 0x5954a1 */ if (fZ) goto L_005954a1;
L_00595456:; BB(0x00595456);
    /* 00595456: mov eax, dword ptr [ecx + 0x3d8] */ r_eax = R32((u32)(r_ecx+0x3d8u));
    /* 0059545c: lea ebx, [ecx + 0x3d8] */ r_ebx = (u32)(r_ecx+0x3d8u);
    /* 00595462: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595465: je 0x595484 */ if (fZ) goto L_00595484;
L_00595467:; BB(0x00595467);
    /* 00595467: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059546e: call 0x78638c */ r_esp -= 4; W32(r_esp, 0x595473u); f_0078638c();
    /* 00595473: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00595476: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00595479: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00595480: mov esp, ebp */ r_esp = r_ebp;
    /* 00595482: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00595483: ret  */ FN_RET(0x005953ec); r_esp += 4; return;
L_00595484:; BB(0x00595484);
    /* 00595484: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00595487: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595489: je 0x595496 */ if (fZ) goto L_00595496;
L_0059548b:; BB(0x0059548b);
    /* 0059548b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0059548d: mov dword ptr [eax + 0x3f8], edx */ W32((u32)(r_eax+0x3f8u), r_edx);
    /* 00595493: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
L_00595496:; BB(0x00595496);
    /* 00595496: mov dword ptr [ebx], 2 */ W32((u32)(r_ebx), 0x2u);
    /* 0059549c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059549f: jmp 0x595467 */ goto L_00595467;
L_005954a1:; BB(0x005954a1);
    /* 005954a1: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 005954a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005954a6: je 0x5954b3 */ if (fZ) goto L_005954b3;
L_005954a8:; BB(0x005954a8);
    /* 005954a8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005954aa: mov dword ptr [eax + 0x3f8], edx */ W32((u32)(r_eax+0x3f8u), r_edx);
    /* 005954b0: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
L_005954b3:; BB(0x005954b3);
    /* 005954b3: mov dword ptr [ebx], 2 */ W32((u32)(r_ebx), 0x2u);
    /* 005954b9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005954bc: jmp 0x595456 */ goto L_00595456;
L_005954be:; BB(0x005954be);
    /* 005954be: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 005954c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005954c3: je 0x5954d0 */ if (fZ) goto L_005954d0;
L_005954c5:; BB(0x005954c5);
    /* 005954c5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005954c7: mov dword ptr [eax + 0x3f8], edx */ W32((u32)(r_eax+0x3f8u), r_edx);
    /* 005954cd: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
L_005954d0:; BB(0x005954d0);
    /* 005954d0: mov dword ptr [ebx], 2 */ W32((u32)(r_ebx), 0x2u);
    /* 005954d6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005954d9: jmp 0x595445 */ goto L_00595445;
L_005954de:; BB(0x005954de);
    /* 005954de: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 005954e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005954e3: je 0x5954f0 */ if (fZ) goto L_005954f0;
L_005954e5:; BB(0x005954e5);
    /* 005954e5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005954e7: mov dword ptr [eax + 0x3f8], edx */ W32((u32)(r_eax+0x3f8u), r_edx);
    /* 005954ed: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
L_005954f0:; BB(0x005954f0);
    /* 005954f0: mov dword ptr [ebx], 2 */ W32((u32)(r_ebx), 0x2u);
    /* 005954f6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005954f9: jmp 0x595434 */ goto L_00595434;
}

void f_00595500(void) /* sub_595500 */
{
    FN_ENTER(0x00595500);
    /* 00595500: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00595501: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00595503: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00595505: call 0x595524 */ r_esp -= 4; W32(r_esp, 0x59550au); f_00595524();
    /* 0059550a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0059550e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00595510: jne 0x595516 */ if (!fZ) goto L_00595516;
L_00595512:; BB(0x00595512);
    /* 00595512: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00595513: ret 4 */ FN_RET(0x00595500); r_esp += 8; return;
L_00595516:; BB(0x00595516);
    /* 00595516: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00595517: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x59551cu); f_005c2f74();
    /* 0059551c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059551d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059551e: ret 4 */ FN_RET(0x00595500); r_esp += 8; return;
}

void f_00595524(void) /* sub_595524 */
{
    FN_ENTER(0x00595524);
    /* 00595524: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00595525: mov ebp, esp */ r_ebp = r_esp;
    /* 00595527: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00595529: push 0x8d82dc */ { u32 v = 0x8d82dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0059552e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00595534: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00595535: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0059553c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059553f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00595542: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00595545: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00595548: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0059554b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0059554e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00595555: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00595558: mov dword ptr [ecx], 0xb094e0 */ W32((u32)(r_ecx), 0xb094e0u);
    /* 0059555e: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x595563u); f_007b9c8c();
    /* 00595563: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00595566: mov eax, dword ptr [edx + 0x3f0] */ r_eax = R32((u32)(r_edx+0x3f0u));
    /* 0059556c: mov dword ptr [edx + 0x394], 0 */ W32((u32)(r_edx+0x394u), 0x0u);
    /* 00595576: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595578: je 0x59558e */ if (fZ) goto L_0059558e;
L_0059557a:; BB(0x0059557a);
    /* 0059557a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059557b: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x595580u); f_005cdcc0();
    /* 00595580: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00595581: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00595584: mov dword ptr [edx + 0x3f0], 0 */ W32((u32)(r_edx+0x3f0u), 0x0u);
L_0059558e:; BB(0x0059558e);
    /* 0059558e: mov ecx, dword ptr [edx + 0x390] */ r_ecx = R32((u32)(r_edx+0x390u));
    /* 00595594: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595596: je 0x5955a2 */ if (fZ) goto L_005955a2;
L_00595598:; BB(0x00595598);
    /* 00595598: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059559a: call 0x721474 */ r_esp -= 4; W32(r_esp, 0x59559fu); f_00721474();
    /* 0059559f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
L_005955a2:; BB(0x005955a2);
    /* 005955a2: mov dword ptr [edx + 0x390], 0 */ W32((u32)(r_edx+0x390u), 0x0u);
    /* 005955ac: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005955b3: mov ecx, edx */ r_ecx = r_edx;
    /* 005955b5: call 0x78638c */ r_esp -= 4; W32(r_esp, 0x5955bau); f_0078638c();
    /* 005955ba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005955bd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005955c4: mov esp, ebp */ r_esp = r_ebp;
    /* 005955c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005955c7: ret  */ FN_RET(0x00595524); r_esp += 4; return;
}

void f_005955c8(void) /* sub_5955C8 */
{
    FN_ENTER(0x005955c8);
    /* 005955c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005955c9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005955cb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005955cd: call 0x5955ec */ r_esp -= 4; W32(r_esp, 0x5955d2u); f_005955ec();
    /* 005955d2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005955d6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005955d8: jne 0x5955de */ if (!fZ) goto L_005955de;
L_005955da:; BB(0x005955da);
    /* 005955da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005955db: ret 4 */ FN_RET(0x005955c8); r_esp += 8; return;
L_005955de:; BB(0x005955de);
    /* 005955de: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005955df: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5955e4u); f_005c2f74();
    /* 005955e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005955e5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005955e6: ret 4 */ FN_RET(0x005955c8); r_esp += 8; return;
}

void f_005955ec(void) /* sub_5955EC */
{
    FN_ENTER(0x005955ec);
    /* 005955ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005955ed: mov ebp, esp */ r_ebp = r_esp;
    /* 005955ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005955f1: push 0x8d82f8 */ { u32 v = 0x8d82f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005955f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005955fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005955fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00595604: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00595607: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0059560a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0059560d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00595610: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00595613: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00595616: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059561d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00595620: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 00595626: mov dword ptr [ecx], 0xb09640 */ W32((u32)(r_ecx), 0xb09640u);
    /* 0059562c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059562e: je 0x595644 */ if (fZ) goto L_00595644;
L_00595630:; BB(0x00595630);
    /* 00595630: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00595631: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x595636u); f_005cdcc0();
    /* 00595636: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00595637: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059563a: mov dword ptr [ecx + 0x390], 0 */ W32((u32)(r_ecx+0x390u), 0x0u);
L_00595644:; BB(0x00595644);
    /* 00595644: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059564b: call 0x78638c */ r_esp -= 4; W32(r_esp, 0x595650u); f_0078638c();
    /* 00595650: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00595653: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059565a: mov esp, ebp */ r_esp = r_ebp;
    /* 0059565c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059565d: ret  */ FN_RET(0x005955ec); r_esp += 4; return;
}

void f_00595660(void) /* sub_595660 */
{
    FN_ENTER(0x00595660);
    /* 00595660: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00595661: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00595663: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00595665: call 0x595684 */ r_esp -= 4; W32(r_esp, 0x59566au); f_00595684();
    /* 0059566a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0059566e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00595670: jne 0x595676 */ if (!fZ) goto L_00595676;
L_00595672:; BB(0x00595672);
    /* 00595672: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00595673: ret 4 */ FN_RET(0x00595660); r_esp += 8; return;
L_00595676:; BB(0x00595676);
    /* 00595676: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00595677: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x59567cu); f_005c2f74();
    /* 0059567c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059567d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059567e: ret 4 */ FN_RET(0x00595660); r_esp += 8; return;
}

void f_00595684(void) /* sub_595684 */
{
    FN_ENTER(0x00595684);
    /* 00595684: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00595685: mov ebp, esp */ r_ebp = r_esp;
    /* 00595687: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00595689: push 0x8d8314 */ { u32 v = 0x8d8314u; r_esp -= 4; W32(r_esp, v); }
    /* 0059568e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00595694: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00595695: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0059569c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059569f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005956a2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005956a5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005956a8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005956ab: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005956ae: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005956b1: mov dword ptr [ecx], 0xb097a0 */ W32((u32)(r_ecx), 0xb097a0u);
    /* 005956b7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005956be: call 0x78638c */ r_esp -= 4; W32(r_esp, 0x5956c3u); f_0078638c();
    /* 005956c3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005956c6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005956cd: mov esp, ebp */ r_esp = r_ebp;
    /* 005956cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005956d0: ret  */ FN_RET(0x00595684); r_esp += 4; return;
}

void f_005956d4(void) /* sub_5956D4 */
{
    FN_ENTER(0x005956d4);
    /* 005956d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005956d5: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005956d8: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005956da: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x5956dfu); f_004f7c84();
    /* 005956df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005956e1: je 0x5956e8 */ if (fZ) goto L_005956e8;
L_005956e3:; BB(0x005956e3);
    /* 005956e3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005956e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005956e7: ret  */ FN_RET(0x005956d4); r_esp += 4; return;
L_005956e8:; BB(0x005956e8);
    /* 005956e8: mov eax, dword ptr [ebp + 0x3c0] */ r_eax = R32((u32)(r_ebp+0x3c0u));
    /* 005956ee: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005956f1: je 0x5956e3 */ if (fZ) goto L_005956e3;
L_005956f3:; BB(0x005956f3);
    /* 005956f3: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 005956f9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005956fc: je 0x5956e3 */ if (fZ) goto L_005956e3;
L_005956fe:; BB(0x005956fe);
    /* 005956fe: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 00595704: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595707: je 0x5956e3 */ if (fZ) goto L_005956e3;
L_00595709:; BB(0x00595709);
    /* 00595709: mov eax, dword ptr [ebp + 0x3d8] */ r_eax = R32((u32)(r_ebp+0x3d8u));
    /* 0059570f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595712: je 0x5956e3 */ if (fZ) goto L_005956e3;
L_00595714:; BB(0x00595714);
    /* 00595714: mov dword ptr [esp], 0x800 */ W32((u32)(r_esp), 0x800u);
    /* 0059571b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0059571e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00595720: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00595721: call 0x787710 */ r_esp -= 4; W32(r_esp, 0x595726u); f_00787710();
    /* 00595726: movsx eax, word ptr [ebp + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x2cu));
    /* 0059572a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0059572c: jl 0x595759 */ if ((fS!=fO)) goto L_00595759;
L_0059572e:; BB(0x0059572e);
    /* 0059572e: cmp eax, 0xb4f */ {  u32 a = r_eax; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00595733: jg 0x595759 */ if ((!fZ&&fS==fO)) goto L_00595759;
L_00595735:; BB(0x00595735);
    /* 00595735: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 00595738: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059573a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059573c: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0059573f: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00595741: mov eax, dword ptr [0xab02b8] */ r_eax = R32((u32)(0xab02b8u));
    /* 00595746: mov dword ptr [edx + eax], ecx */ W32((u32)(r_edx+r_eax), r_ecx);
    /* 00595749: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0059574d: mov dword ptr [edx + eax + 4], ecx */ W32((u32)(r_edx+r_eax+0x4u), r_ecx);
    /* 00595751: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00595755: mov dword ptr [edx + eax + 8], ecx */ W32((u32)(r_edx+r_eax+0x8u), r_ecx);
L_00595759:; BB(0x00595759);
    /* 00595759: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0059575c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059575d: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00595760: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00595762: call dword ptr [edx + 0x144] */ { u32 t = R32((u32)(r_edx+0x144u)); r_esp -= 4; W32(r_esp, 0x595768u); call_ind(t); }
    /* 00595768: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00595769: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x59576eu); f_008113e4();
    /* 0059576e: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00595772: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00595777: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 0059577b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059577e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059577f: ret  */ FN_RET(0x005956d4); r_esp += 4; return;
}

void f_00595780(void) /* sub_595780 */
{
    FN_ENTER(0x00595780);
    /* 00595780: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00595781: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00595782: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00595783: mov esi, ecx */ r_esi = r_ecx;
    /* 00595785: mov ecx, esi */ r_ecx = r_esi;
    /* 00595787: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x59578cu); f_008173d0();
    /* 0059578c: mov ebp, eax */ r_ebp = r_eax;
    /* 0059578e: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x595793u); f_004f7c84();
    /* 00595793: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00595795: jne 0x59579b */ if (!fZ) goto L_0059579b;
L_00595797:; BB(0x00595797);
    /* 00595797: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00595798: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00595799: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059579a: ret  */ FN_RET(0x00595780); r_esp += 4; return;
L_0059579b:; BB(0x0059579b);
    /* 0059579b: mov ebx, dword ptr [esi + 0x374] */ r_ebx = R32((u32)(r_esi+0x374u));
    /* 005957a1: and ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 005957a4: push dword ptr [ebx*4 + 0x9bfbc8] */ { u32 v = R32((u32)(r_ebx*4+0x9bfbc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005957ab: push 0x9297cc */ { u32 v = 0x9297ccu; r_esp -= 4; W32(r_esp, v); }
    /* 005957b0: push 0x130020 */ { u32 v = 0x130020u; r_esp -= 4; W32(r_esp, v); }
    /* 005957b5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5957bau); f_0061cdb0();
    /* 005957ba: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005957bd: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x5957c2u); f_00578b38();
    /* 005957c2: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5957c7u); f_0082d7b0();
    /* 005957c7: mov ebx, dword ptr [ebx*4 + 0x9bfbc0] */ r_ebx = R32((u32)(r_ebx*4+0x9bfbc0u));
    /* 005957ce: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005957d1: mov ecx, esi */ r_ecx = r_esi;
    /* 005957d3: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5957d8u); f_0082d838();
    /* 005957d8: mov ecx, dword ptr [0xa74654] */ r_ecx = R32((u32)(0xa74654u));
    /* 005957de: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005957df: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x5957e4u); f_005b8624();
    /* 005957e4: mov ecx, eax */ r_ecx = r_eax;
    /* 005957e6: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x5957ebu); f_00829cc8();
    /* 005957eb: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005957ed: je 0x595831 */ if (fZ) goto L_00595831;
L_005957ef:; BB(0x005957ef);
    /* 005957ef: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005957f4: or eax, 0x400000 */ {  u32 a = r_eax; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005957f9: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005957fe: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00595803: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x595808u); f_0061cdb0();
    /* 00595808: mov ecx, dword ptr [0xa74654] */ r_ecx = R32((u32)(0xa74654u));
    /* 0059580e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059580f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x595814u); f_005b8610();
    /* 00595814: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00595815: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x59581au); f_0082e1e8();
    /* 0059581a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059581b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x595820u); f_0061cdb0();
    /* 00595820: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00595825: and eax, 0xffbfffff */ {  u32 a = r_eax; u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059582a: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0059582f: jmp 0x595875 */ goto L_00595875;
L_00595831:; BB(0x00595831);
    /* 00595831: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00595836: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x59583bu); f_0061cdb0();
    /* 0059583b: call 0x7a954c */ r_esp -= 4; W32(r_esp, 0x595840u); f_007a954c();
    /* 00595840: mov ecx, dword ptr [0xa74654] */ r_ecx = R32((u32)(0xa74654u));
    /* 00595846: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00595847: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x59584cu); f_005b8610();
    /* 0059584c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059584d: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x595852u); f_0082e1e8();
    /* 00595852: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00595853: call 0x7a9558 */ r_esp -= 4; W32(r_esp, 0x595858u); f_007a9558();
    /* 00595858: mov ecx, dword ptr [0xa74654] */ r_ecx = R32((u32)(0xa74654u));
    /* 0059585e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059585f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x595864u); f_005b8610();
    /* 00595864: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00595865: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x59586au); f_0082e1e8();
    /* 0059586a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059586b: call 0x7a9564 */ r_esp -= 4; W32(r_esp, 0x595870u); f_007a9564();
    /* 00595870: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x595875u); f_0061cdb0();
L_00595875:; BB(0x00595875);
    /* 00595875: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x59587au); f_0082da80();
    /* 0059587a: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x59587fu); f_0082dab0();
    /* 0059587f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00595880: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00595881: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00595882: ret  */ FN_RET(0x00595780); r_esp += 4; return;
}

void f_00595884(void) /* sub_595884 */
{
    FN_ENTER(0x00595884);
    /* 00595884: mov eax, dword ptr [ecx + 0x3c0] */ r_eax = R32((u32)(r_ecx+0x3c0u));
    /* 0059588a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059588d: je 0x595923 */ if (fZ) goto L_00595923;
L_00595893:; BB(0x00595893);
    /* 00595893: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 00595899: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059589c: je 0x5958fc */ if (fZ) goto L_005958fc;
L_0059589e:; BB(0x0059589e);
    /* 0059589e: mov eax, dword ptr [ecx + 0x3d0] */ r_eax = R32((u32)(r_ecx+0x3d0u));
    /* 005958a4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005958a7: je 0x5958d8 */ if (fZ) goto L_005958d8;
L_005958a9:; BB(0x005958a9);
    /* 005958a9: mov eax, dword ptr [ecx + 0x3d8] */ r_eax = R32((u32)(r_ecx+0x3d8u));
    /* 005958af: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005958b2: je 0x5958b5 */ if (fZ) goto L_005958b5;
L_005958b4:; BB(0x005958b4);
    /* 005958b4: ret  */ FN_RET(0x00595884); r_esp += 4; return;
L_005958b5:; BB(0x005958b5);
    /* 005958b5: mov eax, dword ptr [ecx + 0x3dc] */ r_eax = R32((u32)(r_ecx+0x3dcu));
    /* 005958bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005958bd: je 0x5958cd */ if (fZ) goto L_005958cd;
L_005958bf:; BB(0x005958bf);
    /* 005958bf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005958c1: mov dword ptr [eax + 0x3f8], edx */ W32((u32)(r_eax+0x3f8u), r_edx);
    /* 005958c7: mov dword ptr [ecx + 0x3dc], edx */ W32((u32)(r_ecx+0x3dcu), r_edx);
L_005958cd:; BB(0x005958cd);
    /* 005958cd: mov dword ptr [ecx + 0x3d8], 2 */ W32((u32)(r_ecx+0x3d8u), 0x2u);
    /* 005958d7: ret  */ FN_RET(0x00595884); r_esp += 4; return;
L_005958d8:; BB(0x005958d8);
    /* 005958d8: mov eax, dword ptr [ecx + 0x3d4] */ r_eax = R32((u32)(r_ecx+0x3d4u));
    /* 005958de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005958e0: je 0x5958f0 */ if (fZ) goto L_005958f0;
L_005958e2:; BB(0x005958e2);
    /* 005958e2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005958e4: mov dword ptr [eax + 0x3f8], edx */ W32((u32)(r_eax+0x3f8u), r_edx);
    /* 005958ea: mov dword ptr [ecx + 0x3d4], edx */ W32((u32)(r_ecx+0x3d4u), r_edx);
L_005958f0:; BB(0x005958f0);
    /* 005958f0: mov dword ptr [ecx + 0x3d0], 2 */ W32((u32)(r_ecx+0x3d0u), 0x2u);
    /* 005958fa: jmp 0x5958a9 */ goto L_005958a9;
L_005958fc:; BB(0x005958fc);
    /* 005958fc: mov eax, dword ptr [ecx + 0x3cc] */ r_eax = R32((u32)(r_ecx+0x3ccu));
    /* 00595902: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595904: je 0x595914 */ if (fZ) goto L_00595914;
L_00595906:; BB(0x00595906);
    /* 00595906: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00595908: mov dword ptr [eax + 0x3f8], edx */ W32((u32)(r_eax+0x3f8u), r_edx);
    /* 0059590e: mov dword ptr [ecx + 0x3cc], edx */ W32((u32)(r_ecx+0x3ccu), r_edx);
L_00595914:; BB(0x00595914);
    /* 00595914: mov dword ptr [ecx + 0x3c8], 2 */ W32((u32)(r_ecx+0x3c8u), 0x2u);
    /* 0059591e: jmp 0x59589e */ goto L_0059589e;
L_00595923:; BB(0x00595923);
    /* 00595923: mov eax, dword ptr [ecx + 0x3c4] */ r_eax = R32((u32)(r_ecx+0x3c4u));
    /* 00595929: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059592b: je 0x59593b */ if (fZ) goto L_0059593b;
L_0059592d:; BB(0x0059592d);
    /* 0059592d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0059592f: mov dword ptr [eax + 0x3f8], edx */ W32((u32)(r_eax+0x3f8u), r_edx);
    /* 00595935: mov dword ptr [ecx + 0x3c4], edx */ W32((u32)(r_ecx+0x3c4u), r_edx);
L_0059593b:; BB(0x0059593b);
    /* 0059593b: mov dword ptr [ecx + 0x3c0], 2 */ W32((u32)(r_ecx+0x3c0u), 0x2u);
    /* 00595945: jmp 0x595893 */ goto L_00595893;
}

void f_0059594c(void)
{
    FN_ENTER(0x0059594c);
    /* 0059594c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059594d: mov ebp, esp */ r_ebp = r_esp;
    /* 0059594f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00595951: push 0x8d8356 */ { u32 v = 0x8d8356u; r_esp -= 4; W32(r_esp, v); }
    /* 00595956: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0059595c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059595d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00595964: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00595967: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0059596a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0059596d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00595970: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00595973: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00595975: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00595978: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0059597b: push 0x3e0 */ { u32 v = 0x3e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00595980: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x595985u); f_005caba4();
    /* 00595985: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00595986: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00595989: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059598b: je 0x5959f8 */ if (fZ) goto L_005959f8;
L_0059598d:; BB(0x0059598d);
    /* 0059598d: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00595994: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059599b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0059599d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5959a2u); f_005caba4();
    /* 005959a2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005959a3: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005959a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005959a8: je 0x5959f4 */ if (fZ) goto L_005959f4;
L_005959aa:; BB(0x005959aa);
    /* 005959aa: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 005959b1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005959b8: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 005959be: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005959c1: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x5959c6u); f_00787a4c();
    /* 005959c6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005959c9: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005959d0:; BB(0x005959d0);
    /* 005959d0: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005959d3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005959d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005959d7: call 0x5959fc */ r_esp -= 4; W32(r_esp, 0x5959dcu); f_005959fc();
    /* 005959dc: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005959df: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005959e6:; BB(0x005959e6);
    /* 005959e6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005959e9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005959f0: mov esp, ebp */ r_esp = r_ebp;
    /* 005959f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005959f3: ret  */ FN_RET(0x0059594c); r_esp += 4; return;
L_005959f4:; BB(0x005959f4);
    /* 005959f4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005959f6: jmp 0x5959d0 */ goto L_005959d0;
L_005959f8:; BB(0x005959f8);
    /* 005959f8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005959fa: jmp 0x5959e6 */ goto L_005959e6;
}

void f_005959fc(void) /* sub_5959FC */
{
    FN_ENTER(0x005959fc);
    /* 005959fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005959fd: mov ebp, esp */ r_ebp = r_esp;
    /* 005959ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00595a01: push 0x8d8370 */ { u32 v = 0x8d8370u; r_esp -= 4; W32(r_esp, v); }
    /* 00595a06: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00595a0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00595a0d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00595a14: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00595a17: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00595a1a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00595a1d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00595a20: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00595a23: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00595a26: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00595a29: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00595a2c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00595a2f: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x595a34u); f_007865e8();
    /* 00595a34: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00595a3b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00595a3e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00595a41: mov dword ptr [ecx], 0xb09380 */ W32((u32)(r_ecx), 0xb09380u);
    /* 00595a47: mov eax, dword ptr [0x9bfd58] */ r_eax = R32((u32)(0x9bfd58u));
    /* 00595a4c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00595a4d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00595a50: call dword ptr [0xb094cc] */ { u32 t = R32((u32)(0xb094ccu)); r_esp -= 4; W32(r_esp, 0x595a56u); call_ind(t); }
    /* 00595a56: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00595a59: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00595a5b: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x595a61u); call_ind(t); }
    /* 00595a61: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00595a64: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x595a69u); f_007b4f54();
    /* 00595a69: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00595a6c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00595a6f: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 00595a72: mov word ptr [eax + 0x37c], cx */ W16((u32)(r_eax+0x37cu), (u16)r_ecx);
    /* 00595a79: movzx ebx, word ptr [edx + 2] */ r_ebx = (u32)R16((u32)(r_edx+0x2u));
    /* 00595a7d: mov word ptr [eax + 0x37e], bx */ W16((u32)(r_eax+0x37eu), (u16)r_ebx);
    /* 00595a84: movzx esi, word ptr [edx + 4] */ r_esi = (u32)R16((u32)(r_edx+0x4u));
    /* 00595a88: mov word ptr [eax + 0x380], si */ W16((u32)(r_eax+0x380u), (u16)r_esi);
    /* 00595a8f: movzx edi, word ptr [edx + 6] */ r_edi = (u32)R16((u32)(r_edx+0x6u));
    /* 00595a93: mov word ptr [eax + 0x382], di */ W16((u32)(r_eax+0x382u), (u16)r_edi);
    /* 00595a9a: movzx ecx, word ptr [edx + 8] */ r_ecx = (u32)R16((u32)(r_edx+0x8u));
    /* 00595a9e: mov word ptr [eax + 0x384], cx */ W16((u32)(r_eax+0x384u), (u16)r_ecx);
    /* 00595aa5: movzx ecx, word ptr [edx + 0xa] */ r_ecx = (u32)R16((u32)(r_edx+0xau));
    /* 00595aa9: mov word ptr [eax + 0x386], cx */ W16((u32)(r_eax+0x386u), (u16)r_ecx);
    /* 00595ab0: movzx ecx, word ptr [edx + 0xc] */ r_ecx = (u32)R16((u32)(r_edx+0xcu));
    /* 00595ab4: mov word ptr [eax + 0x388], cx */ W16((u32)(r_eax+0x388u), (u16)r_ecx);
    /* 00595abb: movzx ecx, word ptr [edx + 0xe] */ r_ecx = (u32)R16((u32)(r_edx+0xeu));
    /* 00595abf: mov word ptr [eax + 0x38a], cx */ W16((u32)(r_eax+0x38au), (u16)r_ecx);
    /* 00595ac6: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 00595ac9: mov dword ptr [eax + 0x38c], ecx */ W32((u32)(r_eax+0x38cu), r_ecx);
    /* 00595acf: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00595ad2: mov dword ptr [eax + 0x390], ecx */ W32((u32)(r_eax+0x390u), r_ecx);
    /* 00595ad8: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 00595adb: mov dword ptr [eax + 0x394], ecx */ W32((u32)(r_eax+0x394u), r_ecx);
    /* 00595ae1: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 00595ae4: mov dword ptr [eax + 0x398], ecx */ W32((u32)(r_eax+0x398u), r_ecx);
    /* 00595aea: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 00595aed: mov dword ptr [eax + 0x39c], ecx */ W32((u32)(r_eax+0x39cu), r_ecx);
    /* 00595af3: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 00595af6: mov dword ptr [eax + 0x3a0], ecx */ W32((u32)(r_eax+0x3a0u), r_ecx);
    /* 00595afc: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 00595aff: mov dword ptr [eax + 0x3a4], ecx */ W32((u32)(r_eax+0x3a4u), r_ecx);
    /* 00595b05: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 00595b08: mov dword ptr [eax + 0x3a8], ecx */ W32((u32)(r_eax+0x3a8u), r_ecx);
    /* 00595b0e: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 00595b11: mov dword ptr [eax + 0x3ac], ecx */ W32((u32)(r_eax+0x3acu), r_ecx);
    /* 00595b17: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 00595b1a: mov dword ptr [eax + 0x3b0], ecx */ W32((u32)(r_eax+0x3b0u), r_ecx);
    /* 00595b20: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 00595b23: mov dword ptr [eax + 0x3b4], ecx */ W32((u32)(r_eax+0x3b4u), r_ecx);
    /* 00595b29: movzx ecx, word ptr [edx + 0x3c] */ r_ecx = (u32)R16((u32)(r_edx+0x3cu));
    /* 00595b2d: mov word ptr [eax + 0x3b8], cx */ W16((u32)(r_eax+0x3b8u), (u16)r_ecx);
    /* 00595b34: movzx ecx, word ptr [edx + 0x3e] */ r_ecx = (u32)R16((u32)(r_edx+0x3eu));
    /* 00595b38: mov word ptr [eax + 0x3ba], cx */ W16((u32)(r_eax+0x3bau), (u16)r_ecx);
    /* 00595b3f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00595b42: movsx edx, word ptr [edx + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x2u));
    /* 00595b46: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00595b48: jle 0x595b5e */ if ((fZ||fS!=fO)) goto L_00595b5e;
L_00595b4a:; BB(0x00595b4a);
    /* 00595b4a: mov eax, 4 */ r_eax = 0x4u;
    /* 00595b4f: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00595b52: jl 0x595b56 */ if ((fS!=fO)) goto L_00595b56;
L_00595b54:; BB(0x00595b54);
    /* 00595b54: mov edx, eax */ r_edx = r_eax;
L_00595b56:; BB(0x00595b56);
    /* 00595b56: mov dword ptr [ecx + 0x3bc], edx */ W32((u32)(r_ecx+0x3bcu), r_edx);
    /* 00595b5c: jmp 0x595b7a */ goto L_00595b7a;
L_00595b5e:; BB(0x00595b5e);
    /* 00595b5e: mov dword ptr [ecx + 0x3bc], edx */ W32((u32)(r_ecx+0x3bcu), r_edx);
    /* 00595b64: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x595b69u); f_004f7c84();
    /* 00595b69: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00595b6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595b6e: je 0x595b7a */ if (fZ) goto L_00595b7a;
L_00595b70:; BB(0x00595b70);
    /* 00595b70: mov dword ptr [ecx + 0x3bc], 3 */ W32((u32)(r_ecx+0x3bcu), 0x3u);
L_00595b7a:; BB(0x00595b7a);
    /* 00595b7a: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00595b7d: or eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00595b82: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00595b85: call 0x599aec */ r_esp -= 4; W32(r_esp, 0x595b8au); f_00599aec();
    /* 00595b8a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00595b8d: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00595b90: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00595b93: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00595b96: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00595b99: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00595ba0: mov esp, ebp */ r_esp = r_ebp;
    /* 00595ba2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00595ba3: ret 8 */ FN_RET(0x005959fc); r_esp += 12; return;
}

void f_00595ba8(void)
{
    FN_ENTER(0x00595ba8);
    /* 00595ba8: mov ecx, dword ptr [0xa74654] */ r_ecx = R32((u32)(0xa74654u));
    /* 00595bae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00595bb0: je 0x595bc5 */ if (fZ) goto L_00595bc5;
L_00595bb2:; BB(0x00595bb2);
    /* 00595bb2: je 0x595bbb */ if (fZ) goto L_00595bbb;
L_00595bb4:; BB(0x00595bb4);
    /* 00595bb4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00595bb6: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x595bbbu); f_004066a8();
L_00595bbb:; BB(0x00595bbb);
    /* 00595bbb: mov dword ptr [0xa74654], 0 */ W32((u32)(0xa74654u), 0x0u);
L_00595bc5:; BB(0x00595bc5);
    /* 00595bc5: ret  */ FN_RET(0x00595ba8); r_esp += 4; return;
}

void f_00595bc8(void) /* sub_595BC8 */
{
    FN_ENTER(0x00595bc8);
    /* 00595bc8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00595bc9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00595bca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00595bcb: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00595bce: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00595bd0: mov ebx, dword ptr [esp + 0x50] */ r_ebx = R32((u32)(r_esp+0x50u));
    /* 00595bd4: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 00595bd8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00595bda: jl 0x595d39 */ if ((fS!=fO)) goto L_00595d39;
L_00595be0:; BB(0x00595be0);
    /* 00595be0: cmp ebx, dword ptr [ebp + 0x3bc] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0x3bcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00595be6: jge 0x595d39 */ if ((fS==fO)) goto L_00595d39;
L_00595bec:; BB(0x00595bec);
    /* 00595bec: mov eax, dword ptr [ebp + ebx*8 + 0x3c0] */ r_eax = R32((u32)(r_ebp+r_ebx*8+0x3c0u));
    /* 00595bf3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595bf5: jne 0x595d39 */ if (!fZ) goto L_00595d39;
L_00595bfb:; BB(0x00595bfb);
    /* 00595bfb: movzx edx, word ptr [ebp + 0x37c] */ r_edx = (u32)R16((u32)(r_ebp+0x37cu));
    /* 00595c02: movzx edi, word ptr [ebp + 0x380] */ r_edi = (u32)R16((u32)(r_ebp+0x380u));
    /* 00595c09: movzx eax, word ptr [ebp + 0x382] */ r_eax = (u32)R16((u32)(r_ebp+0x382u));
    /* 00595c10: mov word ptr [esp + 4], di */ W16((u32)(r_esp+0x4u), (u16)r_edi);
    /* 00595c15: movzx edi, word ptr [ebp + 0x384] */ r_edi = (u32)R16((u32)(r_ebp+0x384u));
    /* 00595c1c: mov word ptr [esp + 8], di */ W16((u32)(r_esp+0x8u), (u16)r_edi);
    /* 00595c21: movzx edi, word ptr [ebp + 0x386] */ r_edi = (u32)R16((u32)(r_ebp+0x386u));
    /* 00595c28: mov word ptr [esp + 0xa], di */ W16((u32)(r_esp+0xau), (u16)r_edi);
    /* 00595c2d: movzx edi, word ptr [ebp + 0x388] */ r_edi = (u32)R16((u32)(r_ebp+0x388u));
    /* 00595c34: mov word ptr [esp + 0xc], di */ W16((u32)(r_esp+0xcu), (u16)r_edi);
    /* 00595c39: movzx edi, word ptr [ebp + 0x38a] */ r_edi = (u32)R16((u32)(r_ebp+0x38au));
    /* 00595c40: mov word ptr [esp + 0xe], di */ W16((u32)(r_esp+0xeu), (u16)r_edi);
    /* 00595c45: mov edi, dword ptr [ebp + 0x38c] */ r_edi = R32((u32)(r_ebp+0x38cu));
    /* 00595c4b: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 00595c4f: mov edi, dword ptr [ebp + 0x390] */ r_edi = R32((u32)(r_ebp+0x390u));
    /* 00595c55: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 00595c59: mov edi, dword ptr [ebp + 0x394] */ r_edi = R32((u32)(r_ebp+0x394u));
    /* 00595c5f: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 00595c63: mov edi, dword ptr [ebp + 0x398] */ r_edi = R32((u32)(r_ebp+0x398u));
    /* 00595c69: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 00595c6d: mov edi, dword ptr [ebp + 0x39c] */ r_edi = R32((u32)(r_ebp+0x39cu));
    /* 00595c73: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 00595c77: mov edi, dword ptr [ebp + 0x3a0] */ r_edi = R32((u32)(r_ebp+0x3a0u));
    /* 00595c7d: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 00595c81: mov edi, dword ptr [ebp + 0x3a4] */ r_edi = R32((u32)(r_ebp+0x3a4u));
    /* 00595c87: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 00595c8b: mov edi, dword ptr [ebp + 0x3a8] */ r_edi = R32((u32)(r_ebp+0x3a8u));
    /* 00595c91: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00595c95: mov edi, dword ptr [ebp + 0x3ac] */ r_edi = R32((u32)(r_ebp+0x3acu));
    /* 00595c9b: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 00595c9f: mov edi, dword ptr [ebp + 0x3b0] */ r_edi = R32((u32)(r_ebp+0x3b0u));
    /* 00595ca5: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 00595ca9: mov edi, dword ptr [ebp + 0x3b4] */ r_edi = R32((u32)(r_ebp+0x3b4u));
    /* 00595caf: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 00595cb3: movzx edi, word ptr [ebp + 0x3b8] */ r_edi = (u32)R16((u32)(r_ebp+0x3b8u));
    /* 00595cba: mov word ptr [esp + 0x3c], di */ W16((u32)(r_esp+0x3cu), (u16)r_edi);
    /* 00595cbf: movzx edi, word ptr [ebp + 0x3ba] */ r_edi = (u32)R16((u32)(r_ebp+0x3bau));
    /* 00595cc6: mov word ptr [esp + 0x3e], di */ W16((u32)(r_esp+0x3eu), (u16)r_edi);
    /* 00595ccb: lea edx, [edx + ebx + 1] */ r_edx = (u32)(r_edx+r_ebx+0x1u);
    /* 00595ccf: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 00595cd3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00595cd5: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 00595cda: lea eax, [eax + ebx + 1] */ r_eax = (u32)(r_eax+r_ebx+0x1u);
    /* 00595cde: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 00595ce3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595ce5: je 0x595d5a */ if (fZ) goto L_00595d5a;
L_00595ce7:; BB(0x00595ce7);
    /* 00595ce7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00595ce9: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00595ced: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00595cf0: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00595cf4: mov edi, dword ptr [ecx + 8] */ r_edi = R32((u32)(r_ecx+0x8u));
    /* 00595cf7: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
L_00595cfb:; BB(0x00595cfb);
    /* 00595cfb: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 00595cff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595d01: je 0x595d44 */ if (fZ) goto L_00595d44;
L_00595d03:; BB(0x00595d03);
    /* 00595d03: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 00595d07: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00595d0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00595d0b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00595d0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00595d0d: call 0x595d74 */ r_esp -= 4; W32(r_esp, 0x595d12u); f_00595d74();
    /* 00595d12: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00595d15: mov dword ptr [ebp + ebx*8 + 0x3c4], eax */ W32((u32)(r_ebp+r_ebx*8+0x3c4u), r_eax);
L_00595d1c:; BB(0x00595d1c);
    /* 00595d1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595d1e: je 0x595d39 */ if (fZ) goto L_00595d39;
L_00595d20:; BB(0x00595d20);
    /* 00595d20: mov dword ptr [ebp + ebx*8 + 0x3c0], 1 */ W32((u32)(r_ebp+r_ebx*8+0x3c0u), 0x1u);
    /* 00595d2b: mov eax, 1 */ r_eax = 0x1u;
    /* 00595d30: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00595d33: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00595d34: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00595d35: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00595d36: ret 0xc */ FN_RET(0x00595bc8); r_esp += 16; return;
L_00595d39:; BB(0x00595d39);
    /* 00595d39: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00595d3b: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00595d3e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00595d3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00595d40: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00595d41: ret 0xc */ FN_RET(0x00595bc8); r_esp += 16; return;
L_00595d44:; BB(0x00595d44);
    /* 00595d44: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00595d47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00595d48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00595d49: call 0x595f4c */ r_esp -= 4; W32(r_esp, 0x595d4eu); f_00595f4c();
    /* 00595d4e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00595d51: mov dword ptr [ebp + ebx*8 + 0x3c4], eax */ W32((u32)(r_ebp+r_ebx*8+0x3c4u), r_eax);
    /* 00595d58: jmp 0x595d1c */ goto L_00595d1c;
L_00595d5a:; BB(0x00595d5a);
    /* 00595d5a: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00595d5d: mov edi, dword ptr [ebp + 0x40] */ r_edi = R32((u32)(r_ebp+0x40u));
    /* 00595d60: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00595d64: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 00595d67: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00595d6b: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 00595d6f: jmp 0x595cfb */ goto L_00595cfb;
}

void f_00595d74(void) /* sub_595D74 */
{
    FN_ENTER(0x00595d74);
    /* 00595d74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00595d75: mov ebp, esp */ r_ebp = r_esp;
    /* 00595d77: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00595d79: push 0x8d83b2 */ { u32 v = 0x8d83b2u; r_esp -= 4; W32(r_esp, v); }
    /* 00595d7e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00595d84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00595d85: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00595d8c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00595d8f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00595d92: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00595d95: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00595d98: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00595d9b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00595d9d: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00595da0: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00595da3: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 00595da8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x595dadu); f_005caba4();
    /* 00595dad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00595dae: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00595db1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595db3: je 0x595e26 */ if (fZ) goto L_00595e26;
L_00595db5:; BB(0x00595db5);
    /* 00595db5: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00595dbc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00595dc3: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00595dc5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x595dcau); f_005caba4();
    /* 00595dca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00595dcb: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00595dce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595dd0: je 0x595e22 */ if (fZ) goto L_00595e22;
L_00595dd2:; BB(0x00595dd2);
    /* 00595dd2: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00595dd9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00595de0: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00595de6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00595de9: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x595deeu); f_00787a4c();
    /* 00595dee: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00595df1: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00595df8:; BB(0x00595df8);
    /* 00595df8: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00595dfb: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00595dfe: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00595e01: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00595e04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00595e05: call 0x595e2c */ r_esp -= 4; W32(r_esp, 0x595e0au); f_00595e2c();
    /* 00595e0a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00595e0d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00595e14:; BB(0x00595e14);
    /* 00595e14: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00595e17: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00595e1e: mov esp, ebp */ r_esp = r_ebp;
    /* 00595e20: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00595e21: ret  */ FN_RET(0x00595d74); r_esp += 4; return;
L_00595e22:; BB(0x00595e22);
    /* 00595e22: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00595e24: jmp 0x595df8 */ goto L_00595df8;
L_00595e26:; BB(0x00595e26);
    /* 00595e26: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00595e28: jmp 0x595e14 */ goto L_00595e14;
}

void f_00595e2c(void) /* sub_595E2C */
{
    FN_ENTER(0x00595e2c);
    /* 00595e2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00595e2d: mov ebp, esp */ r_ebp = r_esp;
    /* 00595e2f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00595e31: push 0x8d83cc */ { u32 v = 0x8d83ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00595e36: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00595e3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00595e3d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00595e44: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00595e47: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00595e4a: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00595e4d: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00595e50: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 00595e53: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00595e56: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00595e59: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00595e5c: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00595e5f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00595e62: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00595e65: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00595e68: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00595e6b: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x595e70u); f_007865e8();
    /* 00595e70: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00595e77: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00595e7a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00595e7d: mov edx, dword ptr [ecx + 0x2e8] */ r_edx = R32((u32)(r_ecx+0x2e8u));
    /* 00595e83: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00595e84: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00595e87: mov dword ptr [ecx], 0xb094e0 */ W32((u32)(r_ecx), 0xb094e0u);
    /* 00595e8d: mov eax, dword ptr [0x9bfd5c] */ r_eax = R32((u32)(0x9bfd5cu));
    /* 00595e92: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00595e95: mov dword ptr [ecx + 0x2e8], edx */ W32((u32)(r_ecx+0x2e8u), r_edx);
    /* 00595e9b: call dword ptr [0xb0962c] */ { u32 t = R32((u32)(0xb0962cu)); r_esp -= 4; W32(r_esp, 0x595ea1u); call_ind(t); }
    /* 00595ea1: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00595ea4: movsx ebx, word ptr [ecx + 0x2c] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2cu));
    /* 00595ea8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00595eaa: jl 0x595ef1 */ if ((fS!=fO)) goto L_00595ef1;
L_00595eac:; BB(0x00595eac);
    /* 00595eac: cmp ebx, 0xb4f */ {  u32 a = r_ebx; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00595eb2: jg 0x595ef1 */ if ((!fZ&&fS==fO)) goto L_00595ef1;
L_00595eb4:; BB(0x00595eb4);
    /* 00595eb4: mov edx, dword ptr [0xab02b8] */ r_edx = R32((u32)(0xab02b8u));
    /* 00595eba: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00595ebd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00595ebf: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00595ec2: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00595ec4: mov eax, dword ptr [esi + edx + 8] */ r_eax = R32((u32)(r_esi+r_edx+0x8u));
    /* 00595ec8: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00595ecb: movzx esi, word ptr [esi + edx + 4] */ r_esi = (u32)R16((u32)(r_esi+r_edx+0x4u));
    /* 00595ed0: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00595ed2: jl 0x595ef1 */ if ((fS!=fO)) goto L_00595ef1;
L_00595ed4:; BB(0x00595ed4);
    /* 00595ed4: cmp ebx, 0xb4f */ {  u32 a = r_ebx; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00595eda: jg 0x595ef1 */ if ((!fZ&&fS==fO)) goto L_00595ef1;
L_00595edc:; BB(0x00595edc);
    /* 00595edc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00595edf: mov dword ptr [ecx + edx], 0 */ W32((u32)(r_ecx+r_edx), 0x0u);
    /* 00595ee6: mov dword ptr [ecx + edx + 4], esi */ W32((u32)(r_ecx+r_edx+0x4u), r_esi);
    /* 00595eea: mov dword ptr [ecx + edx + 8], eax */ W32((u32)(r_ecx+r_edx+0x8u), r_eax);
    /* 00595eee: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
L_00595ef1:; BB(0x00595ef1);
    /* 00595ef1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00595ef4: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00595ef7: mov dword ptr [ecx + 0x3f8], eax */ W32((u32)(r_ecx+0x3f8u), r_eax);
    /* 00595efd: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00595eff: mov dword ptr [ecx + 0x3e4], edx */ W32((u32)(r_ecx+0x3e4u), r_edx);
    /* 00595f05: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 00595f08: mov dword ptr [ecx + 0x3e8], ebx */ W32((u32)(r_ecx+0x3e8u), r_ebx);
    /* 00595f0e: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 00595f11: mov dword ptr [ecx + 0x3ec], edi */ W32((u32)(r_ecx+0x3ecu), r_edi);
    /* 00595f17: call 0x5997c8 */ r_esp -= 4; W32(r_esp, 0x595f1cu); f_005997c8();
    /* 00595f1c: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00595f1f: mov dword ptr [ecx + 0x38c], 0xe */ W32((u32)(r_ecx+0x38cu), 0xeu);
    /* 00595f29: call dword ptr [0x9bfc70] */ { u32 t = R32((u32)(0x9bfc70u)); r_esp -= 4; W32(r_esp, 0x595f2fu); call_ind(t); }
    /* 00595f2f: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00595f32: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00595f35: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00595f38: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00595f3b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00595f3e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00595f45: mov esp, ebp */ r_esp = r_ebp;
    /* 00595f47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00595f48: ret 0x10 */ FN_RET(0x00595e2c); r_esp += 20; return;
}

void f_00595f4c(void) /* sub_595F4C */
{
    FN_ENTER(0x00595f4c);
    /* 00595f4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00595f4d: mov ebp, esp */ r_ebp = r_esp;
    /* 00595f4f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00595f51: push 0x8d840e */ { u32 v = 0x8d840eu; r_esp -= 4; W32(r_esp, v); }
    /* 00595f56: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00595f5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00595f5d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00595f64: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00595f67: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00595f6a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00595f6d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00595f70: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00595f73: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00595f75: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00595f78: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00595f7b: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 00595f80: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x595f85u); f_005caba4();
    /* 00595f85: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00595f86: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00595f89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595f8b: je 0x595ffb */ if (fZ) goto L_00595ffb;
L_00595f8d:; BB(0x00595f8d);
    /* 00595f8d: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00595f94: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00595f9b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00595f9d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x595fa2u); f_005caba4();
    /* 00595fa2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00595fa3: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00595fa6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00595fa8: je 0x595ff7 */ if (fZ) goto L_00595ff7;
L_00595faa:; BB(0x00595faa);
    /* 00595faa: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00595fb1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00595fb8: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00595fbe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00595fc1: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x595fc6u); f_00787a4c();
    /* 00595fc6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00595fc9: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00595fd0:; BB(0x00595fd0);
    /* 00595fd0: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00595fd3: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00595fd6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00595fd9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00595fda: call 0x596000 */ r_esp -= 4; W32(r_esp, 0x595fdfu); f_00596000();
    /* 00595fdf: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00595fe2: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00595fe9:; BB(0x00595fe9);
    /* 00595fe9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00595fec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00595ff3: mov esp, ebp */ r_esp = r_ebp;
    /* 00595ff5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00595ff6: ret  */ FN_RET(0x00595f4c); r_esp += 4; return;
L_00595ff7:; BB(0x00595ff7);
    /* 00595ff7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00595ff9: jmp 0x595fd0 */ goto L_00595fd0;
L_00595ffb:; BB(0x00595ffb);
    /* 00595ffb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00595ffd: jmp 0x595fe9 */ goto L_00595fe9;
}

