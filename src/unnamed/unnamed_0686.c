#include "protos.h"

void f_0068600c(void) /* sub_68600C */
{
    FN_ENTER(0x0068600c);
    /* 0068600c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068600d: mov ebp, esp */ r_ebp = r_esp;
    /* 0068600f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00686011: push 0x8eaf56 */ { u32 v = 0x8eaf56u; r_esp -= 4; W32(r_esp, v); }
    /* 00686016: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0068601c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068601d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00686024: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00686027: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0068602a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0068602d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00686030: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00686033: mov eax, dword ptr [ecx + 0xdf4] */ r_eax = R32((u32)(r_ecx+0xdf4u));
    /* 00686039: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0068603c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068603e: je 0x686166 */ if (fZ) goto L_00686166;
L_00686044:; BB(0x00686044);
    /* 00686044: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0068604b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0068604d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x686052u); f_005caba4();
    /* 00686052: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00686055: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00686058: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0068605b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068605d: je 0x68615c */ if (fZ) goto L_0068615c;
L_00686063:; BB(0x00686063);
    /* 00686063: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0068606a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00686071: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00686074: push dword ptr [eax + 0xdf4] */ { u32 v = R32((u32)(r_eax+0xdf4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068607a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068607d: call 0x6a3d24 */ r_esp -= 4; W32(r_esp, 0x686082u); f_006a3d24();
    /* 00686082: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00686089:; BB(0x00686089);
    /* 00686089: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068608c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068608f: mov ecx, dword ptr [eax + 0xdf4] */ r_ecx = R32((u32)(r_eax+0xdf4u));
    /* 00686095: mov dword ptr [ecx + 0x1c4], edx */ W32((u32)(r_ecx+0x1c4u), r_edx);
    /* 0068609b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006860a2: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006860a9: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 006860ab: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6860b0u); f_005caba4();
    /* 006860b0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006860b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006860b6: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006860b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006860bb: je 0x686155 */ if (fZ) goto L_00686155;
L_006860c1:; BB(0x006860c1);
    /* 006860c1: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006860c8: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006860cf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006860d2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006860d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006860d6: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6860dbu); f_008193cc();
    /* 006860db: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006860e2:; BB(0x006860e2);
    /* 006860e2: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 006860e5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006860e8: mov edx, dword ptr [edi + 0xdf4] */ r_edx = R32((u32)(r_edi+0xdf4u));
    /* 006860ee: mov dword ptr [edx + 0x1c8], eax */ W32((u32)(r_edx+0x1c8u), r_eax);
    /* 006860f4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006860f6: mov dword ptr [edi + 0xdf8], ecx */ W32((u32)(r_edi+0xdf8u), r_ecx);
    /* 006860fc: mov dword ptr [edi + 0xdfc], ecx */ W32((u32)(r_edi+0xdfcu), r_ecx);
    /* 00686102: mov dword ptr [edi + 0xe00], ecx */ W32((u32)(r_edi+0xe00u), r_ecx);
    /* 00686108: mov dword ptr [edi + 0xe04], ecx */ W32((u32)(r_edi+0xe04u), r_ecx);
    /* 0068610e: mov dword ptr [edi + 0xe08], ecx */ W32((u32)(r_edi+0xe08u), r_ecx);
    /* 00686114: mov dword ptr [edi + 0xe0c], ecx */ W32((u32)(r_edi+0xe0cu), r_ecx);
    /* 0068611a: mov dword ptr [edi + 0xe10], ecx */ W32((u32)(r_edi+0xe10u), r_ecx);
    /* 00686120: mov dword ptr [edi + 0xe14], ecx */ W32((u32)(r_edi+0xe14u), r_ecx);
    /* 00686126: mov dword ptr [edi + 0xe18], ecx */ W32((u32)(r_edi+0xe18u), r_ecx);
    /* 0068612c: mov dword ptr [edi + 0xe1c], ecx */ W32((u32)(r_edi+0xe1cu), r_ecx);
    /* 00686132: mov dword ptr [edi + 0xe20], ecx */ W32((u32)(r_edi+0xe20u), r_ecx);
    /* 00686138: mov dword ptr [edi + 0xe24], ecx */ W32((u32)(r_edi+0xe24u), r_ecx);
    /* 0068613e: mov dword ptr [edi + 0xe28], ecx */ W32((u32)(r_edi+0xe28u), r_ecx);
    /* 00686144: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686147: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068614a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00686151: mov esp, ebp */ r_esp = r_ebp;
    /* 00686153: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00686154: ret  */ FN_RET(0x0068600c); r_esp += 4; return;
L_00686155:; BB(0x00686155);
    /* 00686155: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00686157: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0068615a: jmp 0x6860e2 */ goto L_006860e2;
L_0068615c:; BB(0x0068615c);
    /* 0068615c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068615e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00686161: jmp 0x686089 */ goto L_00686089;
L_00686166:; BB(0x00686166);
    /* 00686166: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0068616d: push 0x1cc */ { u32 v = 0x1ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00686172: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x686177u); f_005caba4();
    /* 00686177: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0068617a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068617d: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00686180: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00686182: je 0x6861bd */ if (fZ) goto L_006861bd;
L_00686184:; BB(0x00686184);
    /* 00686184: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 0068618b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00686192: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00686195: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00686198: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00686199: call 0x6a4994 */ r_esp -= 4; W32(r_esp, 0x68619eu); f_006a4994();
    /* 0068619e: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_006861a5:; BB(0x006861a5);
    /* 006861a5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006861a8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006861ab: mov dword ptr [edx + 0xdf4], eax */ W32((u32)(r_edx+0xdf4u), r_eax);
    /* 006861b1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006861b8: jmp 0x686044 */ goto L_00686044;
L_006861bd:; BB(0x006861bd);
    /* 006861bd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006861bf: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006861c2: jmp 0x6861a5 */ goto L_006861a5;
}

void f_006861c4(void) /* sub_6861C4 */
{
    FN_ENTER(0x006861c4);
    /* 006861c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006861c6: mov dword ptr [0xa942c0], eax */ W32((u32)(0xa942c0u), r_eax);
    /* 006861cb: mov dword ptr [0xa942bc], eax */ W32((u32)(0xa942bcu), r_eax);
    /* 006861d0: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006861d5: mov dword ptr [0xa942b8], eax */ W32((u32)(0xa942b8u), r_eax);
    /* 006861da: mov dword ptr [0xa94284], eax */ W32((u32)(0xa94284u), r_eax);
    /* 006861df: call 0x6a92e8 */ r_esp -= 4; W32(r_esp, 0x6861e4u); f_006a92e8();
    /* 006861e4: mov dword ptr [0xa94248], 0 */ W32((u32)(0xa94248u), 0x0u);
    /* 006861ee: call 0x7a3c6c */ r_esp -= 4; W32(r_esp, 0x6861f3u); f_007a3c6c();
    /* 006861f3: call 0x6a7b20 */ r_esp -= 4; W32(r_esp, 0x6861f8u); f_006a7b20();
    /* 006861f8: call 0x6970a0 */ r_esp -= 4; W32(r_esp, 0x6861fdu); f_006970a0();
    /* 006861fd: call 0x686204 */ r_esp -= 4; W32(r_esp, 0x686202u); f_00686204();
    /* 00686202: ret  */ FN_RET(0x006861c4); r_esp += 4; return;
}

void f_00686204(void) /* sub_686204 */
{
    FN_ENTER(0x00686204);
    /* 00686204: mov ecx, dword ptr [0xa942b4] */ r_ecx = R32((u32)(0xa942b4u));
    /* 0068620a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068620c: je 0x686221 */ if (fZ) goto L_00686221;
L_0068620e:; BB(0x0068620e);
    /* 0068620e: je 0x686217 */ if (fZ) goto L_00686217;
L_00686210:; BB(0x00686210);
    /* 00686210: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00686212: call 0x6850e8 */ r_esp -= 4; W32(r_esp, 0x686217u); f_006850e8();
L_00686217:; BB(0x00686217);
    /* 00686217: mov dword ptr [0xa942b4], 0 */ W32((u32)(0xa942b4u), 0x0u);
L_00686221:; BB(0x00686221);
    /* 00686221: mov eax, dword ptr [0xa9424c] */ r_eax = R32((u32)(0xa9424cu));
    /* 00686226: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00686228: je 0x68623b */ if (fZ) goto L_0068623b;
L_0068622a:; BB(0x0068622a);
    /* 0068622a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068622b: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x686230u); f_00857e98();
    /* 00686230: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00686231: mov dword ptr [0xa9424c], 0 */ W32((u32)(0xa9424cu), 0x0u);
L_0068623b:; BB(0x0068623b);
    /* 0068623b: mov eax, dword ptr [0xa94250] */ r_eax = R32((u32)(0xa94250u));
    /* 00686240: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00686242: je 0x686255 */ if (fZ) goto L_00686255;
L_00686244:; BB(0x00686244);
    /* 00686244: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00686245: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x68624au); f_00857e98();
    /* 0068624a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068624b: mov dword ptr [0xa94250], 0 */ W32((u32)(0xa94250u), 0x0u);
L_00686255:; BB(0x00686255);
    /* 00686255: ret  */ FN_RET(0x00686204); r_esp += 4; return;
}

void f_00686258(void) /* sub_686258 */
{
    FN_ENTER(0x00686258);
    /* 00686258: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00686259: mov ebp, esp */ r_ebp = r_esp;
    /* 0068625b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0068625d: push 0x8eaf7c */ { u32 v = 0x8eaf7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00686262: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00686268: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00686269: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00686270: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00686273: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00686276: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00686279: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0068627c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0068627f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00686282: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00686283: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x686288u); f_0061cdb0();
    /* 00686288: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0068628f: push 0xec0 */ { u32 v = 0xec0u; r_esp -= 4; W32(r_esp, v); }
    /* 00686294: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x686299u); f_005caba4();
    /* 00686299: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068629c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0068629f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006862a1: je 0x6862e1 */ if (fZ) goto L_006862e1;
L_006862a3:; BB(0x006862a3);
    /* 006862a3: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006862aa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006862b1: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006862b4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006862b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006862b8: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006862bb: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006862be: push dword ptr [0xaca374] */ { u32 v = R32((u32)(0xaca374u)); r_esp -= 4; W32(r_esp, v); }
    /* 006862c4: call 0x6862e8 */ r_esp -= 4; W32(r_esp, 0x6862c9u); f_006862e8();
    /* 006862c9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006862cc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006862d3:; BB(0x006862d3);
    /* 006862d3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006862d6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006862dd: mov esp, ebp */ r_esp = r_ebp;
    /* 006862df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006862e0: ret  */ FN_RET(0x00686258); r_esp += 4; return;
L_006862e1:; BB(0x006862e1);
    /* 006862e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006862e3: jmp 0x6862d3 */ goto L_006862d3;
}

void f_006862e8(void) /* sub_6862E8 */
{
    FN_ENTER(0x006862e8);
    /* 006862e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006862e9: mov ebp, esp */ r_ebp = r_esp;
    /* 006862eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006862ed: push 0x8eb0a0 */ { u32 v = 0x8eb0a0u; r_esp -= 4; W32(r_esp, v); }
    /* 006862f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006862f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006862f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00686300: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00686303: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00686306: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 00686309: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 0068630c: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 0068630f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00686312: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00686315: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00686318: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0068631b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0068631e: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00686321: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00686324: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00686327: call 0x770748 */ r_esp -= 4; W32(r_esp, 0x68632cu); f_00770748();
    /* 0068632c: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0068632f: mov dword ptr [edx], 0xb39460 */ W32((u32)(r_edx), 0xb39460u);
    /* 00686335: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00686337: mov byte ptr [edx + 0x354], al */ W8((u32)(r_edx+0x354u), (u8)r_eax);
    /* 0068633d: mov dword ptr [edx + 0x34c], 0xb39440 */ W32((u32)(r_edx+0x34cu), 0xb39440u);
    /* 00686347: mov byte ptr [edx + 0x355], al */ W8((u32)(r_edx+0x355u), (u8)r_eax);
    /* 0068634d: mov word ptr [edx + 0x356], ax */ W16((u32)(r_edx+0x356u), (u16)r_eax);
    /* 00686354: mov dword ptr [edx + 0x350], eax */ W32((u32)(r_edx+0x350u), r_eax);
    /* 0068635a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00686361: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686364: add ecx, 0x358 */ {  u32 a = r_ecx; u32 b = 0x358u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068636a: call 0x6a8cac */ r_esp -= 4; W32(r_esp, 0x68636fu); f_006a8cac();
    /* 0068636f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686372: mov dword ptr [eax + 0x36c], 0 */ W32((u32)(r_eax+0x36cu), 0x0u);
    /* 0068637c: mov dword ptr [eax + 0x370], 0xffffffff */ W32((u32)(r_eax+0x370u), 0xffffffffu);
    /* 00686386: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0068638d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686390: add ecx, 0x380 */ {  u32 a = r_ecx; u32 b = 0x380u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00686396: call 0x6a6e50 */ r_esp -= 4; W32(r_esp, 0x68639bu); f_006a6e50();
    /* 0068639b: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 006863a2: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006863a5: add ecx, 0x390 */ {  u32 a = r_ecx; u32 b = 0x390u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006863ab: call 0x6a3754 */ r_esp -= 4; W32(r_esp, 0x6863b0u); f_006a3754();
    /* 006863b0: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 006863b7: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006863ba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006863bc: mov dword ptr [ecx + 0x454], eax */ W32((u32)(r_ecx+0x454u), r_eax);
    /* 006863c2: lea esi, [ecx + 0x460] */ r_esi = (u32)(r_ecx+0x460u);
    /* 006863c8: mov dword ptr [ecx + 0x470], eax */ W32((u32)(r_ecx+0x470u), r_eax);
    /* 006863ce: add ecx, 0x480 */ {  u32 a = r_ecx; u32 b = 0x480u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006863d4: mov ebx, 0xa */ r_ebx = 0xau;
L_006863d9:; BB(0x006863d9);
    /* 006863d9: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006863de: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 006863e1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006863e3: mov word ptr [ecx + 2], dx */ W16((u32)(r_ecx+0x2u), (u16)r_edx);
    /* 006863e7: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006863ea: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 006863ed: jne 0x6863d9 */ if (!fZ) goto L_006863d9;
L_006863ef:; BB(0x006863ef);
    /* 006863ef: mov ecx, esi */ r_ecx = r_esi;
    /* 006863f1: call 0x6acc9c */ r_esp -= 4; W32(r_esp, 0x6863f6u); f_006acc9c();
    /* 006863f6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006863f9: add ecx, 0x4e4 */ {  u32 a = r_ecx; u32 b = 0x4e4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006863ff: call 0x6a7d34 */ r_esp -= 4; W32(r_esp, 0x686404u); f_006a7d34();
    /* 00686404: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0068640b: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00686410: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 00686415: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686418: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0068641a: lea eax, [edx + 0x538] */ r_eax = (u32)(r_edx+0x538u);
    /* 00686420: add edx, 0x53c */ {  u32 a = r_edx; u32 b = 0x53cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00686426: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00686429: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0068642c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0068642e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068642f: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x686434u); f_00858736();
    /* 00686434: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 0068643b: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00686440: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 00686445: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00686448: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0068644a: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068644d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0068644f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00686450: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x686455u); f_00858736();
    /* 00686455: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00686458: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0068645e: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 00686465: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068646a: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 0068646f: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00686472: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00686474: lea eax, [edx + 0x74] */ r_eax = (u32)(r_edx+0x74u);
    /* 00686477: add edx, 0x78 */ {  u32 a = r_edx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068647a: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0068647d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0068647f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00686480: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x686485u); f_00858736();
    /* 00686485: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 0068648c: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00686491: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 00686496: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00686499: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0068649b: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068649e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006864a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006864a1: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6864a6u); f_00858736();
    /* 006864a6: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 006864a9: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 006864af: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 006864b6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006864b9: add ecx, 0x628 */ {  u32 a = r_ecx; u32 b = 0x628u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006864bf: call 0x6a7bbc */ r_esp -= 4; W32(r_esp, 0x6864c4u); f_006a7bbc();
    /* 006864c4: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 006864cb: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006864ce: mov dword ptr [edx + 0x6a8], 0 */ W32((u32)(r_edx+0x6a8u), 0x0u);
    /* 006864d8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006864da: mov dword ptr [edx + 0x68c], ebx */ W32((u32)(r_edx+0x68cu), r_ebx);
    /* 006864e0: mov dword ptr [edx + 0x6a4], 0 */ W32((u32)(r_edx+0x6a4u), 0x0u);
    /* 006864ea: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006864ef: mov word ptr [edx + 0x688], ax */ W16((u32)(r_edx+0x688u), (u16)r_eax);
    /* 006864f6: mov dword ptr [edx + 0x6a0], 0 */ W32((u32)(r_edx+0x6a0u), 0x0u);
    /* 00686500: mov dword ptr [edx + 0x6b4], 0 */ W32((u32)(r_edx+0x6b4u), 0x0u);
    /* 0068650a: mov dword ptr [edx + 0x6b0], 0 */ W32((u32)(r_edx+0x6b0u), 0x0u);
    /* 00686514: mov dword ptr [edx + 0x6ac], 0 */ W32((u32)(r_edx+0x6acu), 0x0u);
    /* 0068651e: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686521: mov dword ptr [edx + 0x690], 0x3ecccccd */ W32((u32)(r_edx+0x690u), 0x3ecccccdu);
    /* 0068652b: lea ecx, [esi + 0x6b8] */ r_ecx = (u32)(r_esi+0x6b8u);
    /* 00686531: mov dword ptr [edx + 0x69c], 0x3ecccccd */ W32((u32)(r_edx+0x69cu), 0x3ecccccdu);
    /* 0068653b: mov dword ptr [edx + 0x698], 0x3ecccccd */ W32((u32)(r_edx+0x698u), 0x3ecccccdu);
    /* 00686545: mov dword ptr [edx + 0x694], 0x3ecccccd */ W32((u32)(r_edx+0x694u), 0x3ecccccdu);
    /* 0068654f: mov dword ptr [esi + 0x6c4], ebx */ W32((u32)(r_esi+0x6c4u), r_ebx);
    /* 00686555: call 0x6989e0 */ r_esp -= 4; W32(r_esp, 0x68655au); f_006989e0();
    /* 0068655a: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0068655d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068655f: mov word ptr [edx + 0x6c8], ax */ W16((u32)(r_edx+0x6c8u), (u16)r_eax);
    /* 00686566: mov word ptr [edx + 0x6ca], ax */ W16((u32)(r_edx+0x6cau), (u16)r_eax);
    /* 0068656d: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686570: mov dword ptr [edx + 0x6cc], eax */ W32((u32)(r_edx+0x6ccu), r_eax);
    /* 00686576: mov word ptr [edx + 0x6d0], ax */ W16((u32)(r_edx+0x6d0u), (u16)r_eax);
    /* 0068657d: mov dword ptr [ebx + 0x6d4], 0 */ W32((u32)(r_ebx+0x6d4u), 0x0u);
    /* 00686587: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0068658a: mov dword ptr [ebx + 0x6d8], 0 */ W32((u32)(r_ebx+0x6d8u), 0x0u);
    /* 00686594: add ecx, 0x6e0 */ {  u32 a = r_ecx; u32 b = 0x6e0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068659a: mov dword ptr [ebx + 0x6dc], 0 */ W32((u32)(r_ebx+0x6dcu), 0x0u);
    /* 006865a4: call 0x6982ec */ r_esp -= 4; W32(r_esp, 0x6865a9u); f_006982ec();
    /* 006865a9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006865ac: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006865b1: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006865b3: mov dword ptr [edx + 0x710], esi */ W32((u32)(r_edx+0x710u), r_esi);
    /* 006865b9: mov word ptr [edx + 0x70c], ax */ W16((u32)(r_edx+0x70cu), (u16)r_eax);
    /* 006865c0: mov word ptr [edx + 0x70e], si */ W16((u32)(r_edx+0x70eu), (u16)r_esi);
    /* 006865c7: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006865ca: mov dword ptr [ecx + 0x718], esi */ W32((u32)(r_ecx+0x718u), r_esi);
    /* 006865d0: mov dword ptr [ecx + 0x714], esi */ W32((u32)(r_ecx+0x714u), r_esi);
    /* 006865d6: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006865d9: mov dword ptr [edi + 0x71c], 0xb39454 */ W32((u32)(r_edi+0x71cu), 0xb39454u);
    /* 006865e3: mov dword ptr [edi + 0x720], esi */ W32((u32)(r_edi+0x720u), r_esi);
    /* 006865e9: mov dword ptr [ebp - 4], 0xc */ W32((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 006865f0: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006865f3: add ecx, 0x724 */ {  u32 a = r_ecx; u32 b = 0x724u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006865f9: call 0x7c11c0 */ r_esp -= 4; W32(r_esp, 0x6865feu); f_007c11c0();
    /* 006865fe: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686601: mov dword ptr [eax + 0x740], 0 */ W32((u32)(r_eax+0x740u), 0x0u);
    /* 0068660b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0068660d: mov dword ptr [eax + 0x734], esi */ W32((u32)(r_eax+0x734u), r_esi);
    /* 00686613: mov dword ptr [eax + 0x73c], 0 */ W32((u32)(r_eax+0x73cu), 0x0u);
    /* 0068661d: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 00686622: mov dword ptr [eax + 0x730], esi */ W32((u32)(r_eax+0x730u), r_esi);
    /* 00686628: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0068662b: mov dword ptr [eax + 0x738], 0 */ W32((u32)(r_eax+0x738u), 0x0u);
    /* 00686635: mov dword ptr [edx + 0x744], 0x3f800000 */ W32((u32)(r_edx+0x744u), 0x3f800000u);
    /* 0068663f: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686642: mov dword ptr [edx + 0x748], 0x3f800000 */ W32((u32)(r_edx+0x748u), 0x3f800000u);
    /* 0068664c: mov dword ptr [edx + 0x74c], 0x3f800000 */ W32((u32)(r_edx+0x74cu), 0x3f800000u);
    /* 00686656: mov word ptr [edi + 0x750], bx */ W16((u32)(r_edi+0x750u), (u16)r_ebx);
    /* 0068665d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686660: mov dword ptr [edi + 0x754], esi */ W32((u32)(r_edi+0x754u), r_esi);
    /* 00686666: add ecx, 0x784 */ {  u32 a = r_ecx; u32 b = 0x784u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068666c: call 0x697f48 */ r_esp -= 4; W32(r_esp, 0x686671u); f_00697f48();
    /* 00686671: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686674: mov dword ptr [eax + 0x810], 0 */ W32((u32)(r_eax+0x810u), 0x0u);
    /* 0068667e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00686680: mov word ptr [eax + 0x808], bx */ W16((u32)(r_eax+0x808u), (u16)r_ebx);
    /* 00686687: mov dword ptr [eax + 0x818], 0 */ W32((u32)(r_eax+0x818u), 0x0u);
    /* 00686691: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 00686696: mov word ptr [eax + 0x80a], bx */ W16((u32)(r_eax+0x80au), (u16)r_ebx);
    /* 0068669d: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006866a0: mov dword ptr [eax + 0x814], 0 */ W32((u32)(r_eax+0x814u), 0x0u);
    /* 006866aa: mov word ptr [esi + 0x81c], dx */ W16((u32)(r_esi+0x81cu), (u16)r_edx);
    /* 006866b1: mov word ptr [esi + 0x81e], bx */ W16((u32)(r_esi+0x81eu), (u16)r_ebx);
    /* 006866b8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006866bb: mov dword ptr [esi + 0x828], 0 */ W32((u32)(r_esi+0x828u), 0x0u);
    /* 006866c5: add ecx, 0x82c */ {  u32 a = r_ecx; u32 b = 0x82cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006866cb: mov dword ptr [esi + 0x824], 0 */ W32((u32)(r_esi+0x824u), 0x0u);
    /* 006866d5: mov dword ptr [esi + 0x820], 0 */ W32((u32)(r_esi+0x820u), 0x0u);
    /* 006866df: call 0x6a90e4 */ r_esp -= 4; W32(r_esp, 0x6866e4u); f_006a90e4();
    /* 006866e4: mov dword ptr [ebp - 4], 0xd */ W32((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 006866eb: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006866ee: add ecx, 0x89c */ {  u32 a = r_ecx; u32 b = 0x89cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006866f4: call 0x6989d0 */ r_esp -= 4; W32(r_esp, 0x6866f9u); f_006989d0();
    /* 006866f9: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 006866fc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006866fe: mov dword ptr [eax + 0x8a0], ecx */ W32((u32)(r_eax+0x8a0u), r_ecx);
    /* 00686704: lea edx, [eax + 0x8a4] */ r_edx = (u32)(r_eax+0x8a4u);
    /* 0068670a: mov dword ptr [eax + 0x8ac], ecx */ W32((u32)(r_eax+0x8acu), r_ecx);
    /* 00686710: lea esi, [eax + 0x8d0] */ r_esi = (u32)(r_eax+0x8d0u);
    /* 00686716: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00686719: add eax, 0x8d4 */ {  u32 a = r_eax; u32 b = 0x8d4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068671e: mov ebx, 0xa */ r_ebx = 0xau;
L_00686723:; BB(0x00686723);
    /* 00686723: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 00686728: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 0068672b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068672d: mov word ptr [eax + 2], cx */ W16((u32)(r_eax+0x2u), (u16)r_ecx);
    /* 00686731: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00686734: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 00686737: jne 0x686723 */ if (!fZ) goto L_00686723;
L_00686739:; BB(0x00686739);
    /* 00686739: mov ecx, esi */ r_ecx = r_esi;
    /* 0068673b: call 0x6a2e30 */ r_esp -= 4; W32(r_esp, 0x686740u); f_006a2e30();
    /* 00686740: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00686743: call 0x6a2ebc */ r_esp -= 4; W32(r_esp, 0x686748u); f_006a2ebc();
    /* 00686748: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 0068674f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686752: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 00686757: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00686759: mov dword ptr [edx + 0x8fc], eax */ W32((u32)(r_edx+0x8fcu), r_eax);
    /* 0068675f: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686762: mov dword ptr [edx + 0x900], eax */ W32((u32)(r_edx+0x900u), r_eax);
    /* 00686768: mov dword ptr [esi + 0x90c], 0 */ W32((u32)(r_esi+0x90cu), 0x0u);
    /* 00686772: mov word ptr [esi + 0x904], bx */ W16((u32)(r_esi+0x904u), (u16)r_ebx);
    /* 00686779: mov dword ptr [esi + 0x910], 0 */ W32((u32)(r_esi+0x910u), 0x0u);
    /* 00686783: mov dword ptr [esi + 0x908], eax */ W32((u32)(r_esi+0x908u), r_eax);
    /* 00686789: mov dword ptr [esi + 0x918], eax */ W32((u32)(r_esi+0x918u), r_eax);
    /* 0068678f: mov word ptr [esi + 0x906], ax */ W16((u32)(r_esi+0x906u), (u16)r_eax);
    /* 00686796: mov dword ptr [esi + 0x914], 0 */ W32((u32)(r_esi+0x914u), 0x0u);
    /* 006867a0: mov dword ptr [esi + 0x91c], ebx */ W32((u32)(r_esi+0x91cu), r_ebx);
    /* 006867a6: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006867a9: mov dword ptr [edi + 0x928], 0 */ W32((u32)(r_edi+0x928u), 0x0u);
    /* 006867b3: mov dword ptr [edi + 0x924], 0 */ W32((u32)(r_edi+0x924u), 0x0u);
    /* 006867bd: mov dword ptr [edi + 0x920], 0 */ W32((u32)(r_edi+0x920u), 0x0u);
    /* 006867c7: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006867ca: mov dword ptr [ecx + 0x92c], eax */ W32((u32)(r_ecx+0x92cu), r_eax);
    /* 006867d0: mov dword ptr [ecx + 0xdf8], eax */ W32((u32)(r_ecx+0xdf8u), r_eax);
    /* 006867d6: mov dword ptr [ecx + 0xdfc], eax */ W32((u32)(r_ecx+0xdfcu), r_eax);
    /* 006867dc: mov dword ptr [ecx + 0xe00], eax */ W32((u32)(r_ecx+0xe00u), r_eax);
    /* 006867e2: mov dword ptr [ecx + 0xe04], eax */ W32((u32)(r_ecx+0xe04u), r_eax);
    /* 006867e8: mov dword ptr [ecx + 0xe08], eax */ W32((u32)(r_ecx+0xe08u), r_eax);
    /* 006867ee: mov dword ptr [ecx + 0xe0c], eax */ W32((u32)(r_ecx+0xe0cu), r_eax);
    /* 006867f4: mov dword ptr [ecx + 0xe10], eax */ W32((u32)(r_ecx+0xe10u), r_eax);
    /* 006867fa: mov dword ptr [ecx + 0xe14], eax */ W32((u32)(r_ecx+0xe14u), r_eax);
    /* 00686800: mov dword ptr [ecx + 0xe18], eax */ W32((u32)(r_ecx+0xe18u), r_eax);
    /* 00686806: mov dword ptr [ecx + 0xe1c], eax */ W32((u32)(r_ecx+0xe1cu), r_eax);
    /* 0068680c: mov dword ptr [ecx + 0xe20], eax */ W32((u32)(r_ecx+0xe20u), r_eax);
    /* 00686812: mov dword ptr [ecx + 0xe24], eax */ W32((u32)(r_ecx+0xe24u), r_eax);
    /* 00686818: mov dword ptr [ecx + 0xe28], eax */ W32((u32)(r_ecx+0xe28u), r_eax);
    /* 0068681e: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686821: mov byte ptr [edx + 0xeb0], al */ W8((u32)(r_edx+0xeb0u), (u8)r_eax);
    /* 00686827: mov byte ptr [edx + 0xeb1], al */ W8((u32)(r_edx+0xeb1u), (u8)r_eax);
    /* 0068682d: mov word ptr [edx + 0xeb2], ax */ W16((u32)(r_edx+0xeb2u), (u16)r_eax);
    /* 00686834: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686837: mov dword ptr [edx + 0xeb4], eax */ W32((u32)(r_edx+0xeb4u), r_eax);
    /* 0068683d: mov eax, dword ptr [0x9cb9a8] */ r_eax = R32((u32)(0x9cb9a8u));
    /* 00686842: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00686845: call 0x696454 */ r_esp -= 4; W32(r_esp, 0x68684au); f_00696454();
    /* 0068684a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0068684d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00686850: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00686853: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00686854: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 00686858: call 0x686984 */ r_esp -= 4; W32(r_esp, 0x68685du); f_00686984();
    /* 0068685d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00686860: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686863: lea edx, [eax + 0x370] */ r_edx = (u32)(r_eax+0x370u);
    /* 00686869: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068686a: call 0x696370 */ r_esp -= 4; W32(r_esp, 0x68686fu); f_00696370();
    /* 0068686f: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00686872: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686875: movzx edi, byte ptr [esi + 1] */ r_edi = (u32)R8((u32)(r_esi+0x1u));
    /* 00686879: mov word ptr [ecx + 0x2c0], di */ W16((u32)(r_ecx+0x2c0u), (u16)r_edi);
    /* 00686880: movzx eax, byte ptr [esi + 2] */ r_eax = (u32)R8((u32)(r_esi+0x2u));
    /* 00686884: mov word ptr [ecx + 0x2c2], ax */ W16((u32)(r_ecx+0x2c2u), (u16)r_eax);
    /* 0068688b: movzx edx, byte ptr [esi + 0xe7] */ r_edx = (u32)R8((u32)(r_esi+0xe7u));
    /* 00686892: mov byte ptr [ecx + 0x384], dl */ W8((u32)(r_ecx+0x384u), (u8)r_edx);
    /* 00686898: movzx ebx, byte ptr [esi + 0x103] */ r_ebx = (u32)R8((u32)(r_esi+0x103u));
    /* 0068689f: mov byte ptr [ecx + 0x385], bl */ W8((u32)(r_ecx+0x385u), (u8)r_ebx);
    /* 006868a5: movzx eax, byte ptr [esi + 0x11f] */ r_eax = (u32)R8((u32)(r_esi+0x11fu));
    /* 006868ac: mov byte ptr [ecx + 0x386], al */ W8((u32)(r_ecx+0x386u), (u8)r_eax);
    /* 006868b2: movzx eax, byte ptr [esi + 0x13b] */ r_eax = (u32)R8((u32)(r_esi+0x13bu));
    /* 006868b9: mov byte ptr [ecx + 0x387], al */ W8((u32)(r_ecx+0x387u), (u8)r_eax);
    /* 006868bf: movzx eax, byte ptr [esi + 0x157] */ r_eax = (u32)R8((u32)(r_esi+0x157u));
    /* 006868c6: mov byte ptr [ecx + 0x388], al */ W8((u32)(r_ecx+0x388u), (u8)r_eax);
    /* 006868cc: lea eax, [esi + 0x34c] */ r_eax = (u32)(r_esi+0x34cu);
    /* 006868d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006868d3: call 0x6960e4 */ r_esp -= 4; W32(r_esp, 0x6868d8u); f_006960e4();
    /* 006868d8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006868db: call 0x695e00 */ r_esp -= 4; W32(r_esp, 0x6868e0u); f_00695e00();
    /* 006868e0: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006868e3: call 0x695ffc */ r_esp -= 4; W32(r_esp, 0x6868e8u); f_00695ffc();
    /* 006868e8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006868eb: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006868ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006868ef: call 0x696334 */ r_esp -= 4; W32(r_esp, 0x6868f4u); f_00696334();
    /* 006868f4: mov eax, esi */ r_eax = r_esi;
    /* 006868f6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006868f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006868fa: call 0x696060 */ r_esp -= 4; W32(r_esp, 0x6868ffu); f_00696060();
    /* 006868ff: mov eax, esi */ r_eax = r_esi;
    /* 00686901: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686904: lea edx, [eax + 0x3e0] */ r_edx = (u32)(r_eax+0x3e0u);
    /* 0068690a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068690b: call 0x695dac */ r_esp -= 4; W32(r_esp, 0x686910u); f_00695dac();
    /* 00686910: mov eax, esi */ r_eax = r_esi;
    /* 00686912: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686915: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00686916: call 0x695c10 */ r_esp -= 4; W32(r_esp, 0x68691bu); f_00695c10();
    /* 0068691b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0068691e: call 0x695d8c */ r_esp -= 4; W32(r_esp, 0x686923u); f_00695d8c();
    /* 00686923: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686926: call 0x696038 */ r_esp -= 4; W32(r_esp, 0x68692bu); f_00696038();
    /* 0068692b: mov eax, esi */ r_eax = r_esi;
    /* 0068692d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686930: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00686931: call 0x695b48 */ r_esp -= 4; W32(r_esp, 0x686936u); f_00695b48();
    /* 00686936: mov eax, esi */ r_eax = r_esi;
    /* 00686938: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0068693b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068693c: call 0x695ad4 */ r_esp -= 4; W32(r_esp, 0x686941u); f_00695ad4();
    /* 00686941: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686944: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 00686948: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00686949: call 0x78168c */ r_esp -= 4; W32(r_esp, 0x68694eu); f_0078168c();
    /* 0068694e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068694f: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686952: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00686955: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00686958: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068695b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068695d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068695f: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00686962: mov eax, dword ptr [edx + ecx*8 + 0xaaad00] */ r_eax = R32((u32)(r_edx+r_ecx*8+0xaaad00u));
    /* 00686969: mov dword ptr [ebx + 0xeb8], eax */ W32((u32)(r_ebx+0xeb8u), r_eax);
    /* 0068696f: mov eax, ebx */ r_eax = r_ebx;
    /* 00686971: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686974: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00686977: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068697e: mov esp, ebp */ r_esp = r_ebp;
    /* 00686980: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00686981: ret 0x10 */ FN_RET(0x006862e8); r_esp += 20; return;
}

void f_006865d7(void)
{
    FN_ENTER(0x006865d7);
    goto L_006865d7;
L_006865a9:; BB(0x006865a9);
    /* 006865a9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006865ac: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006865b1: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006865b3: mov dword ptr [edx + 0x710], esi */ W32((u32)(r_edx+0x710u), r_esi);
    /* 006865b9: mov word ptr [edx + 0x70c], ax */ W16((u32)(r_edx+0x70cu), (u16)r_eax);
    /* 006865c0: mov word ptr [edx + 0x70e], si */ W16((u32)(r_edx+0x70eu), (u16)r_esi);
    /* 006865c7: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006865ca: mov dword ptr [ecx + 0x718], esi */ W32((u32)(r_ecx+0x718u), r_esi);
    /* 006865d0: mov dword ptr [ecx + 0x714], esi */ W32((u32)(r_ecx+0x714u), r_esi);
    /* 006865d6: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
L_006865d7:; BB(0x006865d7);
    /* 006865d7: jge 0x6865a9 */ if ((fS==fO)) goto L_006865a9;
L_006865d9:; BB(0x006865d9);
    /* 006865d9: mov dword ptr [edi + 0x71c], 0xb39454 */ W32((u32)(r_edi+0x71cu), 0xb39454u);
    /* 006865e3: mov dword ptr [edi + 0x720], esi */ W32((u32)(r_edi+0x720u), r_esi);
    /* 006865e9: mov dword ptr [ebp - 4], 0xc */ W32((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 006865f0: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006865f3: add ecx, 0x724 */ {  u32 a = r_ecx; u32 b = 0x724u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006865f9: call 0x7c11c0 */ r_esp -= 4; W32(r_esp, 0x6865feu); f_007c11c0();
    /* 006865fe: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686601: mov dword ptr [eax + 0x740], 0 */ W32((u32)(r_eax+0x740u), 0x0u);
    /* 0068660b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0068660d: mov dword ptr [eax + 0x734], esi */ W32((u32)(r_eax+0x734u), r_esi);
    /* 00686613: mov dword ptr [eax + 0x73c], 0 */ W32((u32)(r_eax+0x73cu), 0x0u);
    /* 0068661d: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 00686622: mov dword ptr [eax + 0x730], esi */ W32((u32)(r_eax+0x730u), r_esi);
    /* 00686628: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0068662b: mov dword ptr [eax + 0x738], 0 */ W32((u32)(r_eax+0x738u), 0x0u);
    /* 00686635: mov dword ptr [edx + 0x744], 0x3f800000 */ W32((u32)(r_edx+0x744u), 0x3f800000u);
    /* 0068663f: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686642: mov dword ptr [edx + 0x748], 0x3f800000 */ W32((u32)(r_edx+0x748u), 0x3f800000u);
    /* 0068664c: mov dword ptr [edx + 0x74c], 0x3f800000 */ W32((u32)(r_edx+0x74cu), 0x3f800000u);
    /* 00686656: mov word ptr [edi + 0x750], bx */ W16((u32)(r_edi+0x750u), (u16)r_ebx);
    /* 0068665d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686660: mov dword ptr [edi + 0x754], esi */ W32((u32)(r_edi+0x754u), r_esi);
    /* 00686666: add ecx, 0x784 */ {  u32 a = r_ecx; u32 b = 0x784u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068666c: call 0x697f48 */ r_esp -= 4; W32(r_esp, 0x686671u); f_00697f48();
    /* 00686671: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686674: mov dword ptr [eax + 0x810], 0 */ W32((u32)(r_eax+0x810u), 0x0u);
    /* 0068667e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00686680: mov word ptr [eax + 0x808], bx */ W16((u32)(r_eax+0x808u), (u16)r_ebx);
    /* 00686687: mov dword ptr [eax + 0x818], 0 */ W32((u32)(r_eax+0x818u), 0x0u);
    /* 00686691: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 00686696: mov word ptr [eax + 0x80a], bx */ W16((u32)(r_eax+0x80au), (u16)r_ebx);
    /* 0068669d: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006866a0: mov dword ptr [eax + 0x814], 0 */ W32((u32)(r_eax+0x814u), 0x0u);
    /* 006866aa: mov word ptr [esi + 0x81c], dx */ W16((u32)(r_esi+0x81cu), (u16)r_edx);
    /* 006866b1: mov word ptr [esi + 0x81e], bx */ W16((u32)(r_esi+0x81eu), (u16)r_ebx);
    /* 006866b8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006866bb: mov dword ptr [esi + 0x828], 0 */ W32((u32)(r_esi+0x828u), 0x0u);
    /* 006866c5: add ecx, 0x82c */ {  u32 a = r_ecx; u32 b = 0x82cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006866cb: mov dword ptr [esi + 0x824], 0 */ W32((u32)(r_esi+0x824u), 0x0u);
    /* 006866d5: mov dword ptr [esi + 0x820], 0 */ W32((u32)(r_esi+0x820u), 0x0u);
    /* 006866df: call 0x6a90e4 */ r_esp -= 4; W32(r_esp, 0x6866e4u); f_006a90e4();
    /* 006866e4: mov dword ptr [ebp - 4], 0xd */ W32((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 006866eb: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006866ee: add ecx, 0x89c */ {  u32 a = r_ecx; u32 b = 0x89cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006866f4: call 0x6989d0 */ r_esp -= 4; W32(r_esp, 0x6866f9u); f_006989d0();
    /* 006866f9: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 006866fc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006866fe: mov dword ptr [eax + 0x8a0], ecx */ W32((u32)(r_eax+0x8a0u), r_ecx);
    /* 00686704: lea edx, [eax + 0x8a4] */ r_edx = (u32)(r_eax+0x8a4u);
    /* 0068670a: mov dword ptr [eax + 0x8ac], ecx */ W32((u32)(r_eax+0x8acu), r_ecx);
    /* 00686710: lea esi, [eax + 0x8d0] */ r_esi = (u32)(r_eax+0x8d0u);
    /* 00686716: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00686719: add eax, 0x8d4 */ {  u32 a = r_eax; u32 b = 0x8d4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068671e: mov ebx, 0xa */ r_ebx = 0xau;
L_00686723:; BB(0x00686723);
    /* 00686723: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 00686728: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 0068672b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068672d: mov word ptr [eax + 2], cx */ W16((u32)(r_eax+0x2u), (u16)r_ecx);
    /* 00686731: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00686734: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 00686737: jne 0x686723 */ if (!fZ) goto L_00686723;
L_00686739:; BB(0x00686739);
    /* 00686739: mov ecx, esi */ r_ecx = r_esi;
    /* 0068673b: call 0x6a2e30 */ r_esp -= 4; W32(r_esp, 0x686740u); f_006a2e30();
    /* 00686740: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00686743: call 0x6a2ebc */ r_esp -= 4; W32(r_esp, 0x686748u); f_006a2ebc();
    /* 00686748: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 0068674f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686752: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 00686757: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00686759: mov dword ptr [edx + 0x8fc], eax */ W32((u32)(r_edx+0x8fcu), r_eax);
    /* 0068675f: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686762: mov dword ptr [edx + 0x900], eax */ W32((u32)(r_edx+0x900u), r_eax);
    /* 00686768: mov dword ptr [esi + 0x90c], 0 */ W32((u32)(r_esi+0x90cu), 0x0u);
    /* 00686772: mov word ptr [esi + 0x904], bx */ W16((u32)(r_esi+0x904u), (u16)r_ebx);
    /* 00686779: mov dword ptr [esi + 0x910], 0 */ W32((u32)(r_esi+0x910u), 0x0u);
    /* 00686783: mov dword ptr [esi + 0x908], eax */ W32((u32)(r_esi+0x908u), r_eax);
    /* 00686789: mov dword ptr [esi + 0x918], eax */ W32((u32)(r_esi+0x918u), r_eax);
    /* 0068678f: mov word ptr [esi + 0x906], ax */ W16((u32)(r_esi+0x906u), (u16)r_eax);
    /* 00686796: mov dword ptr [esi + 0x914], 0 */ W32((u32)(r_esi+0x914u), 0x0u);
    /* 006867a0: mov dword ptr [esi + 0x91c], ebx */ W32((u32)(r_esi+0x91cu), r_ebx);
    /* 006867a6: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006867a9: mov dword ptr [edi + 0x928], 0 */ W32((u32)(r_edi+0x928u), 0x0u);
    /* 006867b3: mov dword ptr [edi + 0x924], 0 */ W32((u32)(r_edi+0x924u), 0x0u);
    /* 006867bd: mov dword ptr [edi + 0x920], 0 */ W32((u32)(r_edi+0x920u), 0x0u);
    /* 006867c7: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006867ca: mov dword ptr [ecx + 0x92c], eax */ W32((u32)(r_ecx+0x92cu), r_eax);
    /* 006867d0: mov dword ptr [ecx + 0xdf8], eax */ W32((u32)(r_ecx+0xdf8u), r_eax);
    /* 006867d6: mov dword ptr [ecx + 0xdfc], eax */ W32((u32)(r_ecx+0xdfcu), r_eax);
    /* 006867dc: mov dword ptr [ecx + 0xe00], eax */ W32((u32)(r_ecx+0xe00u), r_eax);
    /* 006867e2: mov dword ptr [ecx + 0xe04], eax */ W32((u32)(r_ecx+0xe04u), r_eax);
    /* 006867e8: mov dword ptr [ecx + 0xe08], eax */ W32((u32)(r_ecx+0xe08u), r_eax);
    /* 006867ee: mov dword ptr [ecx + 0xe0c], eax */ W32((u32)(r_ecx+0xe0cu), r_eax);
    /* 006867f4: mov dword ptr [ecx + 0xe10], eax */ W32((u32)(r_ecx+0xe10u), r_eax);
    /* 006867fa: mov dword ptr [ecx + 0xe14], eax */ W32((u32)(r_ecx+0xe14u), r_eax);
    /* 00686800: mov dword ptr [ecx + 0xe18], eax */ W32((u32)(r_ecx+0xe18u), r_eax);
    /* 00686806: mov dword ptr [ecx + 0xe1c], eax */ W32((u32)(r_ecx+0xe1cu), r_eax);
    /* 0068680c: mov dword ptr [ecx + 0xe20], eax */ W32((u32)(r_ecx+0xe20u), r_eax);
    /* 00686812: mov dword ptr [ecx + 0xe24], eax */ W32((u32)(r_ecx+0xe24u), r_eax);
    /* 00686818: mov dword ptr [ecx + 0xe28], eax */ W32((u32)(r_ecx+0xe28u), r_eax);
    /* 0068681e: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686821: mov byte ptr [edx + 0xeb0], al */ W8((u32)(r_edx+0xeb0u), (u8)r_eax);
    /* 00686827: mov byte ptr [edx + 0xeb1], al */ W8((u32)(r_edx+0xeb1u), (u8)r_eax);
    /* 0068682d: mov word ptr [edx + 0xeb2], ax */ W16((u32)(r_edx+0xeb2u), (u16)r_eax);
    /* 00686834: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686837: mov dword ptr [edx + 0xeb4], eax */ W32((u32)(r_edx+0xeb4u), r_eax);
    /* 0068683d: mov eax, dword ptr [0x9cb9a8] */ r_eax = R32((u32)(0x9cb9a8u));
    /* 00686842: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00686845: call 0x696454 */ r_esp -= 4; W32(r_esp, 0x68684au); f_00696454();
    /* 0068684a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0068684d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00686850: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00686853: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00686854: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 00686858: call 0x686984 */ r_esp -= 4; W32(r_esp, 0x68685du); f_00686984();
    /* 0068685d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00686860: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686863: lea edx, [eax + 0x370] */ r_edx = (u32)(r_eax+0x370u);
    /* 00686869: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068686a: call 0x696370 */ r_esp -= 4; W32(r_esp, 0x68686fu); f_00696370();
    /* 0068686f: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00686872: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686875: movzx edi, byte ptr [esi + 1] */ r_edi = (u32)R8((u32)(r_esi+0x1u));
    /* 00686879: mov word ptr [ecx + 0x2c0], di */ W16((u32)(r_ecx+0x2c0u), (u16)r_edi);
    /* 00686880: movzx eax, byte ptr [esi + 2] */ r_eax = (u32)R8((u32)(r_esi+0x2u));
    /* 00686884: mov word ptr [ecx + 0x2c2], ax */ W16((u32)(r_ecx+0x2c2u), (u16)r_eax);
    /* 0068688b: movzx edx, byte ptr [esi + 0xe7] */ r_edx = (u32)R8((u32)(r_esi+0xe7u));
    /* 00686892: mov byte ptr [ecx + 0x384], dl */ W8((u32)(r_ecx+0x384u), (u8)r_edx);
    /* 00686898: movzx ebx, byte ptr [esi + 0x103] */ r_ebx = (u32)R8((u32)(r_esi+0x103u));
    /* 0068689f: mov byte ptr [ecx + 0x385], bl */ W8((u32)(r_ecx+0x385u), (u8)r_ebx);
    /* 006868a5: movzx eax, byte ptr [esi + 0x11f] */ r_eax = (u32)R8((u32)(r_esi+0x11fu));
    /* 006868ac: mov byte ptr [ecx + 0x386], al */ W8((u32)(r_ecx+0x386u), (u8)r_eax);
    /* 006868b2: movzx eax, byte ptr [esi + 0x13b] */ r_eax = (u32)R8((u32)(r_esi+0x13bu));
    /* 006868b9: mov byte ptr [ecx + 0x387], al */ W8((u32)(r_ecx+0x387u), (u8)r_eax);
    /* 006868bf: movzx eax, byte ptr [esi + 0x157] */ r_eax = (u32)R8((u32)(r_esi+0x157u));
    /* 006868c6: mov byte ptr [ecx + 0x388], al */ W8((u32)(r_ecx+0x388u), (u8)r_eax);
    /* 006868cc: lea eax, [esi + 0x34c] */ r_eax = (u32)(r_esi+0x34cu);
    /* 006868d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006868d3: call 0x6960e4 */ r_esp -= 4; W32(r_esp, 0x6868d8u); f_006960e4();
    /* 006868d8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006868db: call 0x695e00 */ r_esp -= 4; W32(r_esp, 0x6868e0u); f_00695e00();
    /* 006868e0: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006868e3: call 0x695ffc */ r_esp -= 4; W32(r_esp, 0x6868e8u); f_00695ffc();
    /* 006868e8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006868eb: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006868ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006868ef: call 0x696334 */ r_esp -= 4; W32(r_esp, 0x6868f4u); f_00696334();
    /* 006868f4: mov eax, esi */ r_eax = r_esi;
    /* 006868f6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006868f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006868fa: call 0x696060 */ r_esp -= 4; W32(r_esp, 0x6868ffu); f_00696060();
    /* 006868ff: mov eax, esi */ r_eax = r_esi;
    /* 00686901: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686904: lea edx, [eax + 0x3e0] */ r_edx = (u32)(r_eax+0x3e0u);
    /* 0068690a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068690b: call 0x695dac */ r_esp -= 4; W32(r_esp, 0x686910u); f_00695dac();
    /* 00686910: mov eax, esi */ r_eax = r_esi;
    /* 00686912: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686915: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00686916: call 0x695c10 */ r_esp -= 4; W32(r_esp, 0x68691bu); f_00695c10();
    /* 0068691b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0068691e: call 0x695d8c */ r_esp -= 4; W32(r_esp, 0x686923u); f_00695d8c();
    /* 00686923: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686926: call 0x696038 */ r_esp -= 4; W32(r_esp, 0x68692bu); f_00696038();
    /* 0068692b: mov eax, esi */ r_eax = r_esi;
    /* 0068692d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686930: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00686931: call 0x695b48 */ r_esp -= 4; W32(r_esp, 0x686936u); f_00695b48();
    /* 00686936: mov eax, esi */ r_eax = r_esi;
    /* 00686938: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0068693b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068693c: call 0x695ad4 */ r_esp -= 4; W32(r_esp, 0x686941u); f_00695ad4();
    /* 00686941: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686944: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 00686948: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00686949: call 0x78168c */ r_esp -= 4; W32(r_esp, 0x68694eu); f_0078168c();
    /* 0068694e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068694f: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686952: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00686955: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00686958: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068695b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068695d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068695f: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00686962: mov eax, dword ptr [edx + ecx*8 + 0xaaad00] */ r_eax = R32((u32)(r_edx+r_ecx*8+0xaaad00u));
    /* 00686969: mov dword ptr [ebx + 0xeb8], eax */ W32((u32)(r_ebx+0xeb8u), r_eax);
    /* 0068696f: mov eax, ebx */ r_eax = r_ebx;
    /* 00686971: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686974: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00686977: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068697e: mov esp, ebp */ r_esp = r_ebp;
    /* 00686980: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00686981: ret 0x10 */ FN_RET(0x006865d7); r_esp += 20; return;
}

void f_00686863(void)
{
    FN_ENTER(0x00686863);
    /* 00686863: lea edx, [eax + 0x370] */ r_edx = (u32)(r_eax+0x370u);
    /* 00686869: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068686a: call 0x696370 */ r_esp -= 4; W32(r_esp, 0x68686fu); f_00696370();
    /* 0068686f: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00686872: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686875: movzx edi, byte ptr [esi + 1] */ r_edi = (u32)R8((u32)(r_esi+0x1u));
    /* 00686879: mov word ptr [ecx + 0x2c0], di */ W16((u32)(r_ecx+0x2c0u), (u16)r_edi);
    /* 00686880: movzx eax, byte ptr [esi + 2] */ r_eax = (u32)R8((u32)(r_esi+0x2u));
    /* 00686884: mov word ptr [ecx + 0x2c2], ax */ W16((u32)(r_ecx+0x2c2u), (u16)r_eax);
    /* 0068688b: movzx edx, byte ptr [esi + 0xe7] */ r_edx = (u32)R8((u32)(r_esi+0xe7u));
    /* 00686892: mov byte ptr [ecx + 0x384], dl */ W8((u32)(r_ecx+0x384u), (u8)r_edx);
    /* 00686898: movzx ebx, byte ptr [esi + 0x103] */ r_ebx = (u32)R8((u32)(r_esi+0x103u));
    /* 0068689f: mov byte ptr [ecx + 0x385], bl */ W8((u32)(r_ecx+0x385u), (u8)r_ebx);
    /* 006868a5: movzx eax, byte ptr [esi + 0x11f] */ r_eax = (u32)R8((u32)(r_esi+0x11fu));
    /* 006868ac: mov byte ptr [ecx + 0x386], al */ W8((u32)(r_ecx+0x386u), (u8)r_eax);
    /* 006868b2: movzx eax, byte ptr [esi + 0x13b] */ r_eax = (u32)R8((u32)(r_esi+0x13bu));
    /* 006868b9: mov byte ptr [ecx + 0x387], al */ W8((u32)(r_ecx+0x387u), (u8)r_eax);
    /* 006868bf: movzx eax, byte ptr [esi + 0x157] */ r_eax = (u32)R8((u32)(r_esi+0x157u));
    /* 006868c6: mov byte ptr [ecx + 0x388], al */ W8((u32)(r_ecx+0x388u), (u8)r_eax);
    /* 006868cc: lea eax, [esi + 0x34c] */ r_eax = (u32)(r_esi+0x34cu);
    /* 006868d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006868d3: call 0x6960e4 */ r_esp -= 4; W32(r_esp, 0x6868d8u); f_006960e4();
    /* 006868d8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006868db: call 0x695e00 */ r_esp -= 4; W32(r_esp, 0x6868e0u); f_00695e00();
    /* 006868e0: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006868e3: call 0x695ffc */ r_esp -= 4; W32(r_esp, 0x6868e8u); f_00695ffc();
    /* 006868e8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006868eb: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006868ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006868ef: call 0x696334 */ r_esp -= 4; W32(r_esp, 0x6868f4u); f_00696334();
    /* 006868f4: mov eax, esi */ r_eax = r_esi;
    /* 006868f6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006868f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006868fa: call 0x696060 */ r_esp -= 4; W32(r_esp, 0x6868ffu); f_00696060();
    /* 006868ff: mov eax, esi */ r_eax = r_esi;
    /* 00686901: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686904: lea edx, [eax + 0x3e0] */ r_edx = (u32)(r_eax+0x3e0u);
    /* 0068690a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068690b: call 0x695dac */ r_esp -= 4; W32(r_esp, 0x686910u); f_00695dac();
    /* 00686910: mov eax, esi */ r_eax = r_esi;
    /* 00686912: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686915: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00686916: call 0x695c10 */ r_esp -= 4; W32(r_esp, 0x68691bu); f_00695c10();
    /* 0068691b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0068691e: call 0x695d8c */ r_esp -= 4; W32(r_esp, 0x686923u); f_00695d8c();
    /* 00686923: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686926: call 0x696038 */ r_esp -= 4; W32(r_esp, 0x68692bu); f_00696038();
    /* 0068692b: mov eax, esi */ r_eax = r_esi;
    /* 0068692d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686930: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00686931: call 0x695b48 */ r_esp -= 4; W32(r_esp, 0x686936u); f_00695b48();
    /* 00686936: mov eax, esi */ r_eax = r_esi;
    /* 00686938: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0068693b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068693c: call 0x695ad4 */ r_esp -= 4; W32(r_esp, 0x686941u); f_00695ad4();
    /* 00686941: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686944: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 00686948: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00686949: call 0x78168c */ r_esp -= 4; W32(r_esp, 0x68694eu); f_0078168c();
    /* 0068694e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068694f: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686952: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00686955: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00686958: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068695b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068695d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068695f: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00686962: mov eax, dword ptr [edx + ecx*8 + 0xaaad00] */ r_eax = R32((u32)(r_edx+r_ecx*8+0xaaad00u));
    /* 00686969: mov dword ptr [ebx + 0xeb8], eax */ W32((u32)(r_ebx+0xeb8u), r_eax);
    /* 0068696f: mov eax, ebx */ r_eax = r_ebx;
    /* 00686971: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686974: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00686977: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068697e: mov esp, ebp */ r_esp = r_ebp;
    /* 00686980: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00686981: ret 0x10 */ FN_RET(0x00686863); r_esp += 20; return;
}

void f_00686984(void) /* sub_686984 */
{
    FN_ENTER(0x00686984);
    /* 00686984: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00686985: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00686987: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0068698b: mov dword ptr [ebx + 0x3f4], eax */ W32((u32)(r_ebx+0x3f4u), r_eax);
    /* 00686991: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00686994: jge 0x6869a4 */ if ((fS==fO)) goto L_006869a4;
L_00686996:; BB(0x00686996);
    /* 00686996: mov eax, 1 */ r_eax = 0x1u;
    /* 0068699b: mov word ptr [ebx + 0x32c], ax */ W16((u32)(r_ebx+0x32cu), (u16)r_eax);
    /* 006869a2: jmp 0x6869c1 */ goto L_006869c1;
L_006869a4:; BB(0x006869a4);
    /* 006869a4: je 0x686a04 */ if (fZ) goto L_00686a04;
L_006869a6:; BB(0x006869a6);
    /* 006869a6: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006869a9: je 0x6869f6 */ if (fZ) goto L_006869f6;
L_006869ab:; BB(0x006869ab);
    /* 006869ab: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006869ae: je 0x6869e8 */ if (fZ) goto L_006869e8;
L_006869b0:; BB(0x006869b0);
    /* 006869b0: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006869b3: jne 0x686a12 */ if (!fZ) goto L_00686a12;
L_006869b5:; BB(0x006869b5);
    /* 006869b5: mov eax, 7 */ r_eax = 0x7u;
    /* 006869ba: mov word ptr [ebx + 0x32c], ax */ W16((u32)(r_ebx+0x32cu), (u16)r_eax);
L_006869c1:; BB(0x006869c1);
    /* 006869c1: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 006869c4: or eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006869c9: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 006869cc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006869ce: call 0x695f28 */ r_esp -= 4; W32(r_esp, 0x6869d3u); f_00695f28();
    /* 006869d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006869d5: call 0x685f9c */ r_esp -= 4; W32(r_esp, 0x6869dau); f_00685f9c();
    /* 006869da: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006869dd: je 0x686a12 */ if (fZ) goto L_00686a12;
L_006869df:; BB(0x006869df);
    /* 006869df: mov eax, 1 */ r_eax = 0x1u;
    /* 006869e4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006869e5: ret 4 */ FN_RET(0x00686984); r_esp += 8; return;
L_006869e8:; BB(0x006869e8);
    /* 006869e8: mov eax, 6 */ r_eax = 0x6u;
    /* 006869ed: mov word ptr [ebx + 0x32c], ax */ W16((u32)(r_ebx+0x32cu), (u16)r_eax);
    /* 006869f4: jmp 0x6869c1 */ goto L_006869c1;
L_006869f6:; BB(0x006869f6);
    /* 006869f6: mov eax, 3 */ r_eax = 0x3u;
    /* 006869fb: mov word ptr [ebx + 0x32c], ax */ W16((u32)(r_ebx+0x32cu), (u16)r_eax);
    /* 00686a02: jmp 0x6869c1 */ goto L_006869c1;
L_00686a04:; BB(0x00686a04);
    /* 00686a04: mov eax, 2 */ r_eax = 0x2u;
    /* 00686a09: mov word ptr [ebx + 0x32c], ax */ W16((u32)(r_ebx+0x32cu), (u16)r_eax);
    /* 00686a10: jmp 0x6869c1 */ goto L_006869c1;
L_00686a12:; BB(0x00686a12);
    /* 00686a12: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00686a14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00686a15: ret 4 */ FN_RET(0x00686984); r_esp += 8; return;
}

void f_00686a18(void) /* sub_686A18 */
{
    FN_ENTER(0x00686a18);
    /* 00686a18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00686a19: mov ebp, esp */ r_ebp = r_esp;
    /* 00686a1b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00686a1d: push 0x8eb0c8 */ { u32 v = 0x8eb0c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00686a22: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00686a28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00686a29: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00686a30: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00686a33: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00686a36: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00686a39: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00686a3c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00686a3f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00686a42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00686a43: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x686a48u); f_0061cdb0();
    /* 00686a48: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00686a4f: push 0xec0 */ { u32 v = 0xec0u; r_esp -= 4; W32(r_esp, v); }
    /* 00686a54: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x686a59u); f_005caba4();
    /* 00686a59: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00686a5c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00686a5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00686a61: je 0x686a9b */ if (fZ) goto L_00686a9b;
L_00686a63:; BB(0x00686a63);
    /* 00686a63: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00686a6a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00686a71: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00686a74: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00686a77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00686a78: push dword ptr [0xaca374] */ { u32 v = R32((u32)(0xaca374u)); r_esp -= 4; W32(r_esp, v); }
    /* 00686a7e: call 0x686aa0 */ r_esp -= 4; W32(r_esp, 0x686a83u); f_00686aa0();
    /* 00686a83: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00686a86: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00686a8d:; BB(0x00686a8d);
    /* 00686a8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00686a90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00686a97: mov esp, ebp */ r_esp = r_ebp;
    /* 00686a99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00686a9a: ret  */ FN_RET(0x00686a18); r_esp += 4; return;
L_00686a9b:; BB(0x00686a9b);
    /* 00686a9b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00686a9d: jmp 0x686a8d */ goto L_00686a8d;
}

void f_00686aa0(void) /* sub_686AA0 */
{
    FN_ENTER(0x00686aa0);
    /* 00686aa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00686aa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00686aa3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00686aa5: push 0x8eb1ec */ { u32 v = 0x8eb1ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00686aaa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00686ab0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00686ab1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00686ab8: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00686abb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00686abe: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00686ac1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00686ac4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00686ac7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00686aca: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00686acd: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00686ad0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00686ad3: call 0x770748 */ r_esp -= 4; W32(r_esp, 0x686ad8u); f_00770748();
    /* 00686ad8: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686adb: mov dword ptr [edx], 0xb39460 */ W32((u32)(r_edx), 0xb39460u);
    /* 00686ae1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00686ae3: mov byte ptr [edx + 0x354], al */ W8((u32)(r_edx+0x354u), (u8)r_eax);
    /* 00686ae9: mov dword ptr [edx + 0x34c], 0xb39440 */ W32((u32)(r_edx+0x34cu), 0xb39440u);
    /* 00686af3: mov byte ptr [edx + 0x355], al */ W8((u32)(r_edx+0x355u), (u8)r_eax);
    /* 00686af9: mov word ptr [edx + 0x356], ax */ W16((u32)(r_edx+0x356u), (u16)r_eax);
    /* 00686b00: mov dword ptr [edx + 0x350], eax */ W32((u32)(r_edx+0x350u), r_eax);
    /* 00686b06: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00686b0d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686b10: add ecx, 0x358 */ {  u32 a = r_ecx; u32 b = 0x358u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00686b16: call 0x6a8cac */ r_esp -= 4; W32(r_esp, 0x686b1bu); f_006a8cac();
    /* 00686b1b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686b1e: mov dword ptr [eax + 0x36c], 0 */ W32((u32)(r_eax+0x36cu), 0x0u);
    /* 00686b28: mov dword ptr [eax + 0x370], 0xffffffff */ W32((u32)(r_eax+0x370u), 0xffffffffu);
    /* 00686b32: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00686b39: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686b3c: add ecx, 0x380 */ {  u32 a = r_ecx; u32 b = 0x380u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00686b42: call 0x6a6e50 */ r_esp -= 4; W32(r_esp, 0x686b47u); f_006a6e50();
    /* 00686b47: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00686b4e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686b51: add ecx, 0x390 */ {  u32 a = r_ecx; u32 b = 0x390u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00686b57: call 0x6a3754 */ r_esp -= 4; W32(r_esp, 0x686b5cu); f_006a3754();
    /* 00686b5c: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00686b63: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686b66: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00686b68: mov dword ptr [ecx + 0x454], eax */ W32((u32)(r_ecx+0x454u), r_eax);
    /* 00686b6e: lea esi, [ecx + 0x460] */ r_esi = (u32)(r_ecx+0x460u);
    /* 00686b74: mov dword ptr [ecx + 0x470], eax */ W32((u32)(r_ecx+0x470u), r_eax);
    /* 00686b7a: add ecx, 0x480 */ {  u32 a = r_ecx; u32 b = 0x480u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00686b80: mov ebx, 0xa */ r_ebx = 0xau;
L_00686b85:; BB(0x00686b85);
    /* 00686b85: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00686b8a: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 00686b8d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00686b8f: mov word ptr [ecx + 2], dx */ W16((u32)(r_ecx+0x2u), (u16)r_edx);
    /* 00686b93: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00686b96: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 00686b99: jne 0x686b85 */ if (!fZ) goto L_00686b85;
L_00686b9b:; BB(0x00686b9b);
    /* 00686b9b: mov ecx, esi */ r_ecx = r_esi;
    /* 00686b9d: call 0x6acc9c */ r_esp -= 4; W32(r_esp, 0x686ba2u); f_006acc9c();
    /* 00686ba2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686ba5: add ecx, 0x4e4 */ {  u32 a = r_ecx; u32 b = 0x4e4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00686bab: call 0x6a7d34 */ r_esp -= 4; W32(r_esp, 0x686bb0u); f_006a7d34();
    /* 00686bb0: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 00686bb7: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00686bbc: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 00686bc1: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686bc4: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00686bc6: lea eax, [edx + 0x538] */ r_eax = (u32)(r_edx+0x538u);
    /* 00686bcc: add edx, 0x53c */ {  u32 a = r_edx; u32 b = 0x53cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00686bd2: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00686bd5: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00686bd8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00686bda: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00686bdb: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x686be0u); f_00858736();
    /* 00686be0: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 00686be7: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00686bec: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 00686bf1: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686bf4: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00686bf6: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00686bf9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00686bfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00686bfc: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x686c01u); f_00858736();
    /* 00686c01: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00686c04: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 00686c0a: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 00686c11: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00686c16: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 00686c1b: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00686c1e: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00686c20: lea eax, [edx + 0x74] */ r_eax = (u32)(r_edx+0x74u);
    /* 00686c23: add edx, 0x78 */ {  u32 a = r_edx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00686c26: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00686c29: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00686c2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00686c2c: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x686c31u); f_00858736();
    /* 00686c31: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 00686c38: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00686c3d: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 00686c42: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00686c45: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00686c47: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00686c4a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00686c4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00686c4d: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x686c52u); f_00858736();
    /* 00686c52: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00686c55: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 00686c5b: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 00686c62: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686c65: add ecx, 0x628 */ {  u32 a = r_ecx; u32 b = 0x628u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00686c6b: call 0x6a7bbc */ r_esp -= 4; W32(r_esp, 0x686c70u); f_006a7bbc();
    /* 00686c70: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 00686c77: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686c7a: mov dword ptr [edx + 0x6a8], 0 */ W32((u32)(r_edx+0x6a8u), 0x0u);
    /* 00686c84: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00686c86: mov dword ptr [edx + 0x68c], ebx */ W32((u32)(r_edx+0x68cu), r_ebx);
    /* 00686c8c: mov dword ptr [edx + 0x6a4], 0 */ W32((u32)(r_edx+0x6a4u), 0x0u);
    /* 00686c96: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00686c9b: mov word ptr [edx + 0x688], ax */ W16((u32)(r_edx+0x688u), (u16)r_eax);
    /* 00686ca2: mov dword ptr [edx + 0x6a0], 0 */ W32((u32)(r_edx+0x6a0u), 0x0u);
    /* 00686cac: mov dword ptr [edx + 0x6b4], 0 */ W32((u32)(r_edx+0x6b4u), 0x0u);
    /* 00686cb6: mov dword ptr [edx + 0x6b0], 0 */ W32((u32)(r_edx+0x6b0u), 0x0u);
    /* 00686cc0: mov dword ptr [edx + 0x6ac], 0 */ W32((u32)(r_edx+0x6acu), 0x0u);
    /* 00686cca: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686ccd: mov dword ptr [edx + 0x690], 0x3ecccccd */ W32((u32)(r_edx+0x690u), 0x3ecccccdu);
    /* 00686cd7: lea ecx, [esi + 0x6b8] */ r_ecx = (u32)(r_esi+0x6b8u);
    /* 00686cdd: mov dword ptr [edx + 0x69c], 0x3ecccccd */ W32((u32)(r_edx+0x69cu), 0x3ecccccdu);
    /* 00686ce7: mov dword ptr [edx + 0x698], 0x3ecccccd */ W32((u32)(r_edx+0x698u), 0x3ecccccdu);
    /* 00686cf1: mov dword ptr [edx + 0x694], 0x3ecccccd */ W32((u32)(r_edx+0x694u), 0x3ecccccdu);
    /* 00686cfb: mov dword ptr [esi + 0x6c4], ebx */ W32((u32)(r_esi+0x6c4u), r_ebx);
    /* 00686d01: call 0x6989e0 */ r_esp -= 4; W32(r_esp, 0x686d06u); f_006989e0();
    /* 00686d06: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686d09: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00686d0b: mov word ptr [edx + 0x6c8], ax */ W16((u32)(r_edx+0x6c8u), (u16)r_eax);
    /* 00686d12: mov word ptr [edx + 0x6ca], ax */ W16((u32)(r_edx+0x6cau), (u16)r_eax);
    /* 00686d19: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686d1c: mov dword ptr [edx + 0x6cc], eax */ W32((u32)(r_edx+0x6ccu), r_eax);
    /* 00686d22: mov word ptr [edx + 0x6d0], ax */ W16((u32)(r_edx+0x6d0u), (u16)r_eax);
    /* 00686d29: mov dword ptr [ebx + 0x6d4], 0 */ W32((u32)(r_ebx+0x6d4u), 0x0u);
    /* 00686d33: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686d36: mov dword ptr [ebx + 0x6d8], 0 */ W32((u32)(r_ebx+0x6d8u), 0x0u);
    /* 00686d40: add ecx, 0x6e0 */ {  u32 a = r_ecx; u32 b = 0x6e0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00686d46: mov dword ptr [ebx + 0x6dc], 0 */ W32((u32)(r_ebx+0x6dcu), 0x0u);
    /* 00686d50: call 0x6982ec */ r_esp -= 4; W32(r_esp, 0x686d55u); f_006982ec();
    /* 00686d55: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686d58: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00686d5d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00686d5f: mov dword ptr [edx + 0x710], esi */ W32((u32)(r_edx+0x710u), r_esi);
    /* 00686d65: mov word ptr [edx + 0x70c], ax */ W16((u32)(r_edx+0x70cu), (u16)r_eax);
    /* 00686d6c: mov word ptr [edx + 0x70e], si */ W16((u32)(r_edx+0x70eu), (u16)r_esi);
    /* 00686d73: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686d76: mov dword ptr [ecx + 0x718], esi */ W32((u32)(r_ecx+0x718u), r_esi);
    /* 00686d7c: mov dword ptr [ecx + 0x714], esi */ W32((u32)(r_ecx+0x714u), r_esi);
    /* 00686d82: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686d85: mov dword ptr [edi + 0x71c], 0xb39454 */ W32((u32)(r_edi+0x71cu), 0xb39454u);
    /* 00686d8f: mov dword ptr [edi + 0x720], esi */ W32((u32)(r_edi+0x720u), r_esi);
    /* 00686d95: mov dword ptr [ebp - 4], 0xc */ W32((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 00686d9c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686d9f: add ecx, 0x724 */ {  u32 a = r_ecx; u32 b = 0x724u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00686da5: call 0x7c11c0 */ r_esp -= 4; W32(r_esp, 0x686daau); f_007c11c0();
    /* 00686daa: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686dad: mov dword ptr [eax + 0x740], 0 */ W32((u32)(r_eax+0x740u), 0x0u);
    /* 00686db7: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00686db9: mov dword ptr [eax + 0x734], esi */ W32((u32)(r_eax+0x734u), r_esi);
    /* 00686dbf: mov dword ptr [eax + 0x73c], 0 */ W32((u32)(r_eax+0x73cu), 0x0u);
    /* 00686dc9: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 00686dce: mov dword ptr [eax + 0x730], esi */ W32((u32)(r_eax+0x730u), r_esi);
    /* 00686dd4: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686dd7: mov dword ptr [eax + 0x738], 0 */ W32((u32)(r_eax+0x738u), 0x0u);
    /* 00686de1: mov dword ptr [edx + 0x744], 0x3f800000 */ W32((u32)(r_edx+0x744u), 0x3f800000u);
    /* 00686deb: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686dee: mov dword ptr [edx + 0x748], 0x3f800000 */ W32((u32)(r_edx+0x748u), 0x3f800000u);
    /* 00686df8: mov dword ptr [edx + 0x74c], 0x3f800000 */ W32((u32)(r_edx+0x74cu), 0x3f800000u);
    /* 00686e02: mov word ptr [edi + 0x750], bx */ W16((u32)(r_edi+0x750u), (u16)r_ebx);
    /* 00686e09: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686e0c: mov dword ptr [edi + 0x754], esi */ W32((u32)(r_edi+0x754u), r_esi);
    /* 00686e12: add ecx, 0x784 */ {  u32 a = r_ecx; u32 b = 0x784u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00686e18: call 0x697f48 */ r_esp -= 4; W32(r_esp, 0x686e1du); f_00697f48();
    /* 00686e1d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686e20: mov dword ptr [eax + 0x810], 0 */ W32((u32)(r_eax+0x810u), 0x0u);
    /* 00686e2a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00686e2c: mov word ptr [eax + 0x808], bx */ W16((u32)(r_eax+0x808u), (u16)r_ebx);
    /* 00686e33: mov dword ptr [eax + 0x818], 0 */ W32((u32)(r_eax+0x818u), 0x0u);
    /* 00686e3d: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 00686e42: mov word ptr [eax + 0x80a], bx */ W16((u32)(r_eax+0x80au), (u16)r_ebx);
    /* 00686e49: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686e4c: mov dword ptr [eax + 0x814], 0 */ W32((u32)(r_eax+0x814u), 0x0u);
    /* 00686e56: mov word ptr [esi + 0x81c], dx */ W16((u32)(r_esi+0x81cu), (u16)r_edx);
    /* 00686e5d: mov word ptr [esi + 0x81e], bx */ W16((u32)(r_esi+0x81eu), (u16)r_ebx);
    /* 00686e64: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686e67: mov dword ptr [esi + 0x828], 0 */ W32((u32)(r_esi+0x828u), 0x0u);
    /* 00686e71: add ecx, 0x82c */ {  u32 a = r_ecx; u32 b = 0x82cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00686e77: mov dword ptr [esi + 0x824], 0 */ W32((u32)(r_esi+0x824u), 0x0u);
    /* 00686e81: mov dword ptr [esi + 0x820], 0 */ W32((u32)(r_esi+0x820u), 0x0u);
    /* 00686e8b: call 0x6a90e4 */ r_esp -= 4; W32(r_esp, 0x686e90u); f_006a90e4();
    /* 00686e90: mov dword ptr [ebp - 4], 0xd */ W32((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 00686e97: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686e9a: add ecx, 0x89c */ {  u32 a = r_ecx; u32 b = 0x89cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00686ea0: call 0x6989d0 */ r_esp -= 4; W32(r_esp, 0x686ea5u); f_006989d0();
    /* 00686ea5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686ea8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00686eaa: mov dword ptr [eax + 0x8a0], edx */ W32((u32)(r_eax+0x8a0u), r_edx);
    /* 00686eb0: lea ebx, [eax + 0x8a4] */ r_ebx = (u32)(r_eax+0x8a4u);
    /* 00686eb6: mov dword ptr [eax + 0x8ac], edx */ W32((u32)(r_eax+0x8acu), r_edx);
    /* 00686ebc: lea ecx, [eax + 0x8d0] */ r_ecx = (u32)(r_eax+0x8d0u);
    /* 00686ec2: add eax, 0x8d4 */ {  u32 a = r_eax; u32 b = 0x8d4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00686ec7: mov edi, 0xa */ r_edi = 0xau;
L_00686ecc:; BB(0x00686ecc);
    /* 00686ecc: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 00686ed1: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 00686ed4: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00686ed6: mov word ptr [eax + 2], si */ W16((u32)(r_eax+0x2u), (u16)r_esi);
    /* 00686eda: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00686edd: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00686ee0: jne 0x686ecc */ if (!fZ) goto L_00686ecc;
L_00686ee2:; BB(0x00686ee2);
    /* 00686ee2: call 0x6a2e30 */ r_esp -= 4; W32(r_esp, 0x686ee7u); f_006a2e30();
    /* 00686ee7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00686ee9: call 0x6a2ebc */ r_esp -= 4; W32(r_esp, 0x686eeeu); f_006a2ebc();
    /* 00686eee: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 00686ef5: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686ef8: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 00686efd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00686eff: mov dword ptr [edx + 0x8fc], eax */ W32((u32)(r_edx+0x8fcu), r_eax);
    /* 00686f05: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686f08: mov dword ptr [edx + 0x900], eax */ W32((u32)(r_edx+0x900u), r_eax);
    /* 00686f0e: mov dword ptr [esi + 0x90c], 0 */ W32((u32)(r_esi+0x90cu), 0x0u);
    /* 00686f18: mov word ptr [esi + 0x904], bx */ W16((u32)(r_esi+0x904u), (u16)r_ebx);
    /* 00686f1f: mov dword ptr [esi + 0x910], 0 */ W32((u32)(r_esi+0x910u), 0x0u);
    /* 00686f29: mov dword ptr [esi + 0x908], eax */ W32((u32)(r_esi+0x908u), r_eax);
    /* 00686f2f: mov dword ptr [esi + 0x918], eax */ W32((u32)(r_esi+0x918u), r_eax);
    /* 00686f35: mov word ptr [esi + 0x906], ax */ W16((u32)(r_esi+0x906u), (u16)r_eax);
    /* 00686f3c: mov dword ptr [esi + 0x914], 0 */ W32((u32)(r_esi+0x914u), 0x0u);
    /* 00686f46: mov dword ptr [esi + 0x91c], ebx */ W32((u32)(r_esi+0x91cu), r_ebx);
    /* 00686f4c: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686f4f: mov dword ptr [edi + 0x928], 0 */ W32((u32)(r_edi+0x928u), 0x0u);
    /* 00686f59: mov dword ptr [edi + 0x924], 0 */ W32((u32)(r_edi+0x924u), 0x0u);
    /* 00686f63: mov dword ptr [edi + 0x920], 0 */ W32((u32)(r_edi+0x920u), 0x0u);
    /* 00686f6d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686f70: mov dword ptr [ecx + 0x92c], eax */ W32((u32)(r_ecx+0x92cu), r_eax);
    /* 00686f76: mov dword ptr [ecx + 0xdf8], eax */ W32((u32)(r_ecx+0xdf8u), r_eax);
    /* 00686f7c: mov dword ptr [ecx + 0xdfc], eax */ W32((u32)(r_ecx+0xdfcu), r_eax);
    /* 00686f82: mov dword ptr [ecx + 0xe00], eax */ W32((u32)(r_ecx+0xe00u), r_eax);
    /* 00686f88: mov dword ptr [ecx + 0xe04], eax */ W32((u32)(r_ecx+0xe04u), r_eax);
    /* 00686f8e: mov dword ptr [ecx + 0xe08], eax */ W32((u32)(r_ecx+0xe08u), r_eax);
    /* 00686f94: mov dword ptr [ecx + 0xe0c], eax */ W32((u32)(r_ecx+0xe0cu), r_eax);
    /* 00686f9a: mov dword ptr [ecx + 0xe10], eax */ W32((u32)(r_ecx+0xe10u), r_eax);
    /* 00686fa0: mov dword ptr [ecx + 0xe14], eax */ W32((u32)(r_ecx+0xe14u), r_eax);
    /* 00686fa6: mov dword ptr [ecx + 0xe18], eax */ W32((u32)(r_ecx+0xe18u), r_eax);
    /* 00686fac: mov dword ptr [ecx + 0xe1c], eax */ W32((u32)(r_ecx+0xe1cu), r_eax);
    /* 00686fb2: mov dword ptr [ecx + 0xe20], eax */ W32((u32)(r_ecx+0xe20u), r_eax);
    /* 00686fb8: mov dword ptr [ecx + 0xe24], eax */ W32((u32)(r_ecx+0xe24u), r_eax);
    /* 00686fbe: mov dword ptr [ecx + 0xe28], eax */ W32((u32)(r_ecx+0xe28u), r_eax);
    /* 00686fc4: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686fc7: mov byte ptr [edx + 0xeb0], al */ W8((u32)(r_edx+0xeb0u), (u8)r_eax);
    /* 00686fcd: mov byte ptr [edx + 0xeb1], al */ W8((u32)(r_edx+0xeb1u), (u8)r_eax);
    /* 00686fd3: mov word ptr [edx + 0xeb2], ax */ W16((u32)(r_edx+0xeb2u), (u16)r_eax);
    /* 00686fda: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686fdd: mov dword ptr [edx + 0xeb4], eax */ W32((u32)(r_edx+0xeb4u), r_eax);
    /* 00686fe3: mov eax, dword ptr [0x9cb9a8] */ r_eax = R32((u32)(0x9cb9a8u));
    /* 00686fe8: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00686feb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00686fee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00686fef: call 0x6871f0 */ r_esp -= 4; W32(r_esp, 0x686ff4u); f_006871f0();
    /* 00686ff4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00686ff7: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00686ffa: mov dword ptr [ecx + 0x3f4], 4 */ W32((u32)(r_ecx+0x3f4u), 0x4u);
    /* 00687004: mov eax, 2 */ r_eax = 0x2u;
    /* 00687009: or edx, 0x10000000 */ {  u32 a = r_edx; u32 b = 0x10000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0068700f: mov word ptr [ecx + 0x32c], ax */ W16((u32)(r_ecx+0x32cu), (u16)r_eax);
    /* 00687016: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 00687019: call 0x695f28 */ r_esp -= 4; W32(r_esp, 0x68701eu); f_00695f28();
    /* 0068701e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00687021: call 0x685f9c */ r_esp -= 4; W32(r_esp, 0x687026u); f_00685f9c();
    /* 00687026: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00687029: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0068702c: lea edx, [eax + 0xc8] */ r_edx = (u32)(r_eax+0xc8u);
    /* 00687032: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00687033: call 0x696370 */ r_esp -= 4; W32(r_esp, 0x687038u); f_00696370();
    /* 00687038: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068703b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0068703e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068703f: call 0x687348 */ r_esp -= 4; W32(r_esp, 0x687044u); f_00687348();
    /* 00687044: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00687047: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0068704a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068704b: call 0x687520 */ r_esp -= 4; W32(r_esp, 0x687050u); f_00687520();
    /* 00687050: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00687053: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00687056: mov dword ptr [ecx + 0x45c], 0 */ W32((u32)(r_ecx+0x45cu), 0x0u);
    /* 00687060: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00687061: call 0x687560 */ r_esp -= 4; W32(r_esp, 0x687066u); f_00687560();
    /* 00687066: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00687069: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0068706c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068706d: call 0x6877c8 */ r_esp -= 4; W32(r_esp, 0x687072u); f_006877c8();
    /* 00687072: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00687075: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 00687079: movsx edx, byte ptr [ecx + 0x961] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x961u));
    /* 00687080: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00687081: mov word ptr [ecx + 0x4e4], ax */ W16((u32)(r_ecx+0x4e4u), (u16)r_eax);
    /* 00687088: add ecx, 0x460 */ {  u32 a = r_ecx; u32 b = 0x460u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068708e: call 0x6ad264 */ r_esp -= 4; W32(r_esp, 0x687093u); f_006ad264();
    /* 00687093: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00687096: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 00687098: add ecx, 0x460 */ {  u32 a = r_ecx; u32 b = 0x460u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068709e: call 0x6ace3c */ r_esp -= 4; W32(r_esp, 0x6870a3u); f_006ace3c();
    /* 006870a3: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006870a5:; BB(0x006870a5);
    /* 006870a5: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 006870a8: movzx ecx, byte ptr [ebx + esi + 0xb4] */ r_ecx = (u32)R8((u32)(r_ebx+r_esi+0xb4u));
    /* 006870b0: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 006870b3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006870b5: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006870b8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006870ba: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006870bc: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006870be: movzx edi, byte ptr [edx + esi + 0x162] */ r_edi = (u32)R8((u32)(r_edx+r_esi+0x162u));
    /* 006870c6: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006870c8: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006870cb: movsx eax, bx */ r_eax = (u32)(i32)(i16)(u16)r_ebx;
    /* 006870ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006870cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006870d0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006870d3: call 0x699fd8 */ r_esp -= 4; W32(r_esp, 0x6870d8u); f_00699fd8();
    /* 006870d8: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006870db: cmp ebx, 0x13 */ {  u32 a = r_ebx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006870de: jl 0x6870a5 */ if ((fS!=fO)) goto L_006870a5;
L_006870e0:; BB(0x006870e0);
    /* 006870e0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006870e3: mov eax, esi */ r_eax = r_esi;
    /* 006870e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006870e6: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 006870e9: mov dword ptr [ecx + 0x25c], edx */ W32((u32)(r_ecx+0x25cu), r_edx);
    /* 006870ef: mov ebx, dword ptr [eax + 0x2c] */ r_ebx = R32((u32)(r_eax+0x2cu));
    /* 006870f2: mov dword ptr [ecx + 0x260], ebx */ W32((u32)(r_ecx+0x260u), r_ebx);
    /* 006870f8: mov esi, dword ptr [eax + 0x30] */ r_esi = R32((u32)(r_eax+0x30u));
    /* 006870fb: mov dword ptr [ecx + 0x264], esi */ W32((u32)(r_ecx+0x264u), r_esi);
    /* 00687101: mov edi, dword ptr [eax + 0x34] */ r_edi = R32((u32)(r_eax+0x34u));
    /* 00687104: mov dword ptr [ecx + 0x268], edi */ W32((u32)(r_ecx+0x268u), r_edi);
    /* 0068710a: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0068710d: mov dword ptr [ecx + 0x26c], edx */ W32((u32)(r_ecx+0x26cu), r_edx);
    /* 00687113: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00687116: mov dword ptr [ecx + 0x270], edx */ W32((u32)(r_ecx+0x270u), r_edx);
    /* 0068711c: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0068711f: mov dword ptr [ecx + 0x274], edx */ W32((u32)(r_ecx+0x274u), r_edx);
    /* 00687125: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00687128: mov dword ptr [ecx + 0x278], edx */ W32((u32)(r_ecx+0x278u), r_edx);
    /* 0068712e: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 00687131: mov dword ptr [ecx + 0x27c], edx */ W32((u32)(r_ecx+0x27cu), r_edx);
    /* 00687137: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0068713a: mov dword ptr [ecx + 0x280], edx */ W32((u32)(r_ecx+0x280u), r_edx);
    /* 00687140: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 00687143: mov dword ptr [ecx + 0x284], edx */ W32((u32)(r_ecx+0x284u), r_edx);
    /* 00687149: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 0068714c: mov dword ptr [ecx + 0x288], edx */ W32((u32)(r_ecx+0x288u), r_edx);
    /* 00687152: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 00687155: mov dword ptr [ecx + 0x28c], edx */ W32((u32)(r_ecx+0x28cu), r_edx);
    /* 0068715b: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 0068715e: mov dword ptr [ecx + 0x290], edx */ W32((u32)(r_ecx+0x290u), r_edx);
    /* 00687164: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00687167: mov dword ptr [ecx + 0x294], edx */ W32((u32)(r_ecx+0x294u), r_edx);
    /* 0068716d: call 0x6877d8 */ r_esp -= 4; W32(r_esp, 0x687172u); f_006877d8();
    /* 00687172: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00687175: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00687178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00687179: call 0x687e54 */ r_esp -= 4; W32(r_esp, 0x68717eu); f_00687e54();
    /* 0068717e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00687181: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00687184: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00687185: call 0x687e80 */ r_esp -= 4; W32(r_esp, 0x68718au); f_00687e80();
    /* 0068718a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068718d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00687190: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00687191: call 0x687eb0 */ r_esp -= 4; W32(r_esp, 0x687196u); f_00687eb0();
    /* 00687196: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00687199: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0068719c: movzx edx, word ptr [edi + 0x22] */ r_edx = (u32)R16((u32)(r_edi+0x22u));
    /* 006871a0: mov word ptr [ebx + 0x334], dx */ W16((u32)(r_ebx+0x334u), (u16)r_edx);
    /* 006871a7: mov ecx, dword ptr [edi + 0x4ac] */ r_ecx = R32((u32)(r_edi+0x4acu));
    /* 006871ad: mov dword ptr [ebx + 0x41c], ecx */ W32((u32)(r_ebx+0x41cu), r_ecx);
    /* 006871b3: mov eax, dword ptr [edi + 0x4b0] */ r_eax = R32((u32)(r_edi+0x4b0u));
    /* 006871b9: mov dword ptr [ebx + 0x420], eax */ W32((u32)(r_ebx+0x420u), r_eax);
    /* 006871bf: mov esi, dword ptr [edi + 0x4b4] */ r_esi = R32((u32)(r_edi+0x4b4u));
    /* 006871c5: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006871c8: mov dword ptr [ebx + 0x424], esi */ W32((u32)(r_ebx+0x424u), r_esi);
    /* 006871ce: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006871d1: mov dword ptr [ebx + 0xeb8], 0 */ W32((u32)(r_ebx+0xeb8u), 0x0u);
    /* 006871db: mov eax, ebx */ r_eax = r_ebx;
    /* 006871dd: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006871e0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006871e3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006871ea: mov esp, ebp */ r_esp = r_ebp;
    /* 006871ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006871ed: ret 8 */ FN_RET(0x00686aa0); r_esp += 12; return;
}

