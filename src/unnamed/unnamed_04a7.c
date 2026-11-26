#include "protos.h"

void f_004a7008(void) /* sub_4A7008 */
{
    FN_ENTER(0x004a7008);
    /* 004a7008: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a7009: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a700a: mov esi, ecx */ r_esi = r_ecx;
    /* 004a700c: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 004a7010: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 004a7014: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a7015: mov ecx, esi */ r_ecx = r_esi;
    /* 004a7017: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x4a701cu); f_00520fcc();
    /* 004a701c: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 004a701f: mov dword ptr [esi + 0x39c], eax */ W32((u32)(r_esi+0x39cu), r_eax);
    /* 004a7025: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 004a7028: mov dword ptr [esi + 0x3a4], edx */ W32((u32)(r_esi+0x3a4u), r_edx);
    /* 004a702e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a702f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a7030: ret 4 */ FN_RET(0x004a7008); r_esp += 8; return;
}

void f_004a7034(void) /* sub_4A7034 */
{
    FN_ENTER(0x004a7034);
    /* 004a7034: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a7035: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a7036: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 004a703a: movzx eax, word ptr [esi + 2] */ r_eax = (u32)R16((u32)(r_esi+0x2u));
    /* 004a703e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a703f: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x4a7044u); f_00786b3c();
    /* 004a7044: mov edi, eax */ r_edi = r_eax;
    /* 004a7046: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a7049: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a704b: je 0x4a70dc */ if (fZ) goto L_004a70dc;
L_004a7051:; BB(0x004a7051);
    /* 004a7051: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 004a7054: mov dword ptr [edi + 0x48c], edx */ W32((u32)(r_edi+0x48cu), r_edx);
    /* 004a705a: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 004a705d: mov dword ptr [edi + 0x490], edx */ W32((u32)(r_edi+0x490u), r_edx);
    /* 004a7063: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 004a7066: mov dword ptr [edi + 0x494], edx */ W32((u32)(r_edi+0x494u), r_edx);
    /* 004a706c: lea ecx, [edi + 0x48c] */ r_ecx = (u32)(r_edi+0x48cu);
    /* 004a7072: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 004a7075: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4a707au); f_0082f9c4();
    /* 004a707a: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 004a707d: mov dword ptr [edi + 0x60], edx */ W32((u32)(r_edi+0x60u), r_edx);
    /* 004a7080: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 004a7083: mov dword ptr [edi + 0x49c], ecx */ W32((u32)(r_edi+0x49cu), r_ecx);
    /* 004a7089: movsx edx, cx */ r_edx = (u32)(i32)(i16)(u16)r_ecx;
    /* 004a708c: mov ecx, dword ptr [esi + 0x18] */ r_ecx = R32((u32)(r_esi+0x18u));
    /* 004a708f: cmp dx, word ptr [edi + 0x32e] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_edi+0x32eu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 004a7096: mov dword ptr [edi + 0x4a0], ecx */ W32((u32)(r_edi+0x4a0u), r_ecx);
    /* 004a709c: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 004a709f: mov dword ptr [edi + 0x4a4], ecx */ W32((u32)(r_edi+0x4a4u), r_ecx);
    /* 004a70a5: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 004a70a8: mov dword ptr [edi + 0x4a8], ecx */ W32((u32)(r_edi+0x4a8u), r_ecx);
    /* 004a70ae: mov esi, dword ptr [esi + 0x24] */ r_esi = R32((u32)(r_esi+0x24u));
    /* 004a70b1: mov dword ptr [edi + 0x4ac], esi */ W32((u32)(r_edi+0x4acu), r_esi);
    /* 004a70b7: lea ecx, [edi + 0x49c] */ r_ecx = (u32)(r_edi+0x49cu);
    /* 004a70bd: mov dword ptr [edi + 0x4c4], ecx */ W32((u32)(r_edi+0x4c4u), r_ecx);
    /* 004a70c3: je 0x4a70cd */ if (fZ) goto L_004a70cd;
L_004a70c5:; BB(0x004a70c5);
    /* 004a70c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a70c6: mov ecx, edi */ r_ecx = r_edi;
    /* 004a70c8: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x4a70cdu); f_0051f62c();
L_004a70cd:; BB(0x004a70cd);
    /* 004a70cd: mov edx, dword ptr [edi + 0x4c8] */ r_edx = R32((u32)(r_edi+0x4c8u));
    /* 004a70d3: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a70d6: mov dword ptr [edi + 0x4c8], edx */ W32((u32)(r_edi+0x4c8u), r_edx);
L_004a70dc:; BB(0x004a70dc);
    /* 004a70dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a70dd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a70de: ret  */ FN_RET(0x004a7034); r_esp += 4; return;
}

void f_004a70e0(void) /* sub_4A70E0 */
{
    FN_ENTER(0x004a70e0);
    /* 004a70e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a70e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004a70e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004a70e5: push 0x4a7354 */ { u32 v = 0x4a7354u; r_esp -= 4; W32(r_esp, v); }
    /* 004a70ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004a70f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a70f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004a70f8: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a70fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004a70fe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004a7101: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004a7104: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004a7107: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004a7109: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x4a710eu); f_004f7c84();
    /* 004a710e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7110: jne 0x4a730a */ if (!fZ) goto L_004a730a;
L_004a7116:; BB(0x004a7116);
    /* 004a7116: mov eax, dword ptr [ebx + 0x4c8] */ r_eax = R32((u32)(r_ebx+0x4c8u));
    /* 004a711c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004a711e: je 0x4a7145 */ if (fZ) goto L_004a7145;
L_004a7120:; BB(0x004a7120);
    /* 004a7120: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7121: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x4a7126u); f_008113e4();
    /* 004a7126: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a7127: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 004a712b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a7130: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 004a7134: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a7137: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004a713a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004a7141: mov esp, ebp */ r_esp = r_ebp;
    /* 004a7143: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a7144: ret  */ FN_RET(0x004a70e0); r_esp += 4; return;
L_004a7145:; BB(0x004a7145);
    /* 004a7145: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x4a714au); f_00694cc8();
    /* 004a714a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a714c: je 0x4a7183 */ if (fZ) goto L_004a7183;
L_004a714e:; BB(0x004a714e);
    /* 004a714e: mov esi, dword ptr [ebx + 0x4e8] */ r_esi = R32((u32)(r_ebx+0x4e8u));
    /* 004a7154: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a7156: call 0x520db0 */ r_esp -= 4; W32(r_esp, 0x4a715bu); f_00520db0();
    /* 004a715b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a715d: je 0x4a7179 */ if (fZ) goto L_004a7179;
L_004a715f:; BB(0x004a715f);
    /* 004a715f: mov dword ptr [ebx + 0x4e8], 0 */ W32((u32)(r_ebx+0x4e8u), 0x0u);
    /* 004a7169: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a716b: je 0x4a7183 */ if (fZ) goto L_004a7183;
L_004a716d:; BB(0x004a716d);
    /* 004a716d: mov dword ptr [ebx + 0x738], 1 */ W32((u32)(r_ebx+0x738u), 0x1u);
    /* 004a7177: jmp 0x4a7183 */ goto L_004a7183;
L_004a7179:; BB(0x004a7179);
    /* 004a7179: mov dword ptr [ebx + 0x4e8], 1 */ W32((u32)(r_ebx+0x4e8u), 0x1u);
L_004a7183:; BB(0x004a7183);
    /* 004a7183: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x4a7188u); f_00520db8();
    /* 004a7188: mov edi, eax */ r_edi = r_eax;
    /* 004a718a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004a718c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a718e: call dword ptr [edx + 0xac] */ { u32 t = R32((u32)(r_edx+0xacu)); r_esp -= 4; W32(r_esp, 0x4a7194u); call_ind(t); }
    /* 004a7194: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004a7196: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a7198: call dword ptr [edx + 0xb0] */ { u32 t = R32((u32)(r_edx+0xb0u)); r_esp -= 4; W32(r_esp, 0x4a719eu); call_ind(t); }
    /* 004a719e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a71a0: jne 0x4a7225 */ if (!fZ) goto L_004a7225;
L_004a71a6:; BB(0x004a71a6);
    /* 004a71a6: mov edx, dword ptr [ebx + 0x4c8] */ r_edx = R32((u32)(r_ebx+0x4c8u));
    /* 004a71ac: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004a71af: je 0x4a71bf */ if (fZ) goto L_004a71bf;
L_004a71b1:; BB(0x004a71b1);
    /* 004a71b1: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004a71b4: or edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004a71ba: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 004a71bd: jmp 0x4a71cb */ goto L_004a71cb;
L_004a71bf:; BB(0x004a71bf);
    /* 004a71bf: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004a71c2: and edx, 0xfffff7ff */ {  u32 a = r_edx; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004a71c8: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
L_004a71cb:; BB(0x004a71cb);
    /* 004a71cb: mov edx, dword ptr [ebx + 0x4e8] */ r_edx = R32((u32)(r_ebx+0x4e8u));
    /* 004a71d1: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a71d4: je 0x4a7325 */ if (fZ) goto L_004a7325;
L_004a71da:; BB(0x004a71da);
    /* 004a71da: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004a71dc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a71de: call dword ptr [edx + 0x88] */ { u32 t = R32((u32)(r_edx+0x88u)); r_esp -= 4; W32(r_esp, 0x4a71e4u); call_ind(t); }
    /* 004a71e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a71e6: je 0x4a71ef */ if (fZ) goto L_004a71ef;
L_004a71e8:; BB(0x004a71e8);
    /* 004a71e8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a71ea: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x4a71efu); f_0051f81c();
L_004a71ef:; BB(0x004a71ef);
    /* 004a71ef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a71f1: call 0x4a7360 */ r_esp -= 4; W32(r_esp, 0x4a71f6u); f_004a7360();
    /* 004a71f6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a71f8: call 0x4a7b58 */ r_esp -= 4; W32(r_esp, 0x4a71fdu); f_004a7b58();
    /* 004a71fd: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004a71ff: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 004a7201: movsx edx, word ptr [ebx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 004a7208: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a720a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a720b: call dword ptr [esi + 0x164] */ { u32 t = R32((u32)(r_esi+0x164u)); r_esp -= 4; W32(r_esp, 0x4a7211u); call_ind(t); }
    /* 004a7211: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004a7213: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 004a7215: movsx edx, word ptr [ebx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 004a721c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a721e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a721f: call dword ptr [esi + 0x164] */ { u32 t = R32((u32)(r_esi+0x164u)); r_esp -= 4; W32(r_esp, 0x4a7225u); call_ind(t); }
L_004a7225:; BB(0x004a7225);
    /* 004a7225: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a7227: call 0x51f604 */ r_esp -= 4; W32(r_esp, 0x4a722cu); f_0051f604();
    /* 004a722c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a722e: call 0x4a7c44 */ r_esp -= 4; W32(r_esp, 0x4a7233u); f_004a7c44();
    /* 004a7233: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a7235: call 0x4a7dac */ r_esp -= 4; W32(r_esp, 0x4a723au); f_004a7dac();
    /* 004a723a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a723c: call 0x4a7de8 */ r_esp -= 4; W32(r_esp, 0x4a7241u); f_004a7de8();
    /* 004a7241: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004a7243: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a7245: call dword ptr [edx + 0x168] */ { u32 t = R32((u32)(r_edx+0x168u)); r_esp -= 4; W32(r_esp, 0x4a724bu); call_ind(t); }
    /* 004a724b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a724d: call 0x4a7e44 */ r_esp -= 4; W32(r_esp, 0x4a7252u); f_004a7e44();
    /* 004a7252: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a7254: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x4a7259u); f_006401f0();
    /* 004a7259: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 004a725c: mov edx, 1 */ r_edx = 0x1u;
    /* 004a7261: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7262: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7263: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a7268: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a726d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a726e: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x4a7273u); f_0080575c();
    /* 004a7273: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a7276: mov edx, dword ptr [ebx + 0x300] */ r_edx = R32((u32)(r_ebx+0x300u));
    /* 004a727c: mov dword ptr [ebx + 0x574], edx */ W32((u32)(r_ebx+0x574u), r_edx);
    /* 004a7282: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 004a7288: mov dword ptr [ebx + 0x578], edx */ W32((u32)(r_ebx+0x578u), r_edx);
    /* 004a728e: mov edx, dword ptr [ebx + 0x308] */ r_edx = R32((u32)(r_ebx+0x308u));
    /* 004a7294: mov dword ptr [ebx + 0x57c], edx */ W32((u32)(r_ebx+0x57cu), r_edx);
    /* 004a729a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a729c: jne 0x4a72a9 */ if (!fZ) goto L_004a72a9;
L_004a729e:; BB(0x004a729e);
    /* 004a729e: lea ecx, [ebx + 0x4cc] */ r_ecx = (u32)(r_ebx+0x4ccu);
    /* 004a72a4: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x4a72a9u); f_00817574();
L_004a72a9:; BB(0x004a72a9);
    /* 004a72a9: push 0x3ecccccd */ { u32 v = 0x3ecccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 004a72ae: lea eax, [ebx + 0x568] */ r_eax = (u32)(r_ebx+0x568u);
    /* 004a72b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a72b5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a72b6: call 0x520dc0 */ r_esp -= 4; W32(r_esp, 0x4a72bbu); f_00520dc0();
    /* 004a72bb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a72be: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004a72c0:; BB(0x004a72c0);
    /* 004a72c0: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 004a72c3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a72c5: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004a72c8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a72ca: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a72cc: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004a72ce: lea ecx, [ebx + edx + 0x588] */ r_ecx = (u32)(r_ebx+r_edx+0x588u);
    /* 004a72d5: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x4a72dau); f_005771a4();
    /* 004a72da: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a72dd: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a72e0: jl 0x4a72c0 */ if ((fS!=fO)) goto L_004a72c0;
L_004a72e2:; BB(0x004a72e2);
    /* 004a72e2: mov eax, dword ptr [ebx + 0x4ec] */ r_eax = R32((u32)(r_ebx+0x4ecu));
    /* 004a72e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a72ea: je 0x4a72f3 */ if (fZ) goto L_004a72f3;
L_004a72ec:; BB(0x004a72ec);
    /* 004a72ec: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a72ee: call 0x4a7e74 */ r_esp -= 4; W32(r_esp, 0x4a72f3u); f_004a7e74();
L_004a72f3:; BB(0x004a72f3);
    /* 004a72f3: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004a72f6: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 004a72f9: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a72fc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004a72ff: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004a7306: mov esp, ebp */ r_esp = r_ebp;
    /* 004a7308: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a7309: ret  */ FN_RET(0x004a70e0); r_esp += 4; return;
L_004a730a:; BB(0x004a730a);
    /* 004a730a: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004a730c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a730e: call dword ptr [eax + 0x1ac] */ { u32 t = R32((u32)(r_eax+0x1acu)); r_esp -= 4; W32(r_esp, 0x4a7314u); call_ind(t); }
    /* 004a7314: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a7317: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004a731a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004a7321: mov esp, ebp */ r_esp = r_ebp;
    /* 004a7323: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a7324: ret  */ FN_RET(0x004a70e0); r_esp += 4; return;
L_004a7325:; BB(0x004a7325);
    /* 004a7325: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004a7327: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a7329: call dword ptr [edx + 0x88] */ { u32 t = R32((u32)(r_edx+0x88u)); r_esp -= 4; W32(r_esp, 0x4a732fu); call_ind(t); }
    /* 004a732f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7331: je 0x4a733a */ if (fZ) goto L_004a733a;
L_004a7333:; BB(0x004a7333);
    /* 004a7333: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a7335: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x4a733au); f_0051f81c();
L_004a733a:; BB(0x004a733a);
    /* 004a733a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004a733c: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 004a733e: movsx edx, word ptr [ebx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 004a7345: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a7347: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7348: call dword ptr [esi + 0x164] */ { u32 t = R32((u32)(r_esi+0x164u)); r_esp -= 4; W32(r_esp, 0x4a734eu); call_ind(t); }
    /* 004a734e: jmp 0x4a7225 */ goto L_004a7225;
}

void f_004a72e8(void)
{
    FN_ENTER(0x004a72e8);
    /* 004a72e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a72ea: je 0x4a72f3 */ if (fZ) goto L_004a72f3;
L_004a72ec:; BB(0x004a72ec);
    /* 004a72ec: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a72ee: call 0x4a7e74 */ r_esp -= 4; W32(r_esp, 0x4a72f3u); f_004a7e74();
L_004a72f3:; BB(0x004a72f3);
    /* 004a72f3: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004a72f6: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 004a72f9: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004a72fc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004a72ff: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004a7306: mov esp, ebp */ r_esp = r_ebp;
    /* 004a7308: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a7309: ret  */ FN_RET(0x004a72e8); r_esp += 4; return;
}

void f_004a7354(void)
{
    FN_ENTER(0x004a7354);
    /* 004a7354: mov eax, 0xaf9d18 */ r_eax = 0xaf9d18u;
    /* 004a7359: jmp 0x857a43 */ f_00857a43(); return;
}

void f_004a7360(void) /* sub_4A7360 */
{
    FN_ENTER(0x004a7360);
    /* 004a7360: mov eax, dword ptr [ecx + 0x4c8] */ r_eax = R32((u32)(r_ecx+0x4c8u));
    /* 004a7366: test al, 0xc */ {  u32 a = (u8)r_eax; u32 b = 0xcu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004a7368: jne 0x4a7375 */ if (!fZ) goto L_004a7375;
L_004a736a:; BB(0x004a736a);
    /* 004a736a: movsx eax, word ptr [ecx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x334u));
    /* 004a7371: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004a7373: jle 0x4a7388 */ if ((fZ||fS!=fO)) goto L_004a7388;
L_004a7375:; BB(0x004a7375);
    /* 004a7375: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004a7377: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004a7379: movsx edx, word ptr [ecx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004a7380: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7381: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4a7387u); call_ind(t); }
    /* 004a7387: ret  */ FN_RET(0x004a7360); r_esp += 4; return;
L_004a7388:; BB(0x004a7388);
    /* 004a7388: call 0x4a7390 */ r_esp -= 4; W32(r_esp, 0x4a738du); f_004a7390();
    /* 004a738d: ret  */ FN_RET(0x004a7360); r_esp += 4; return;
}

void f_004a7390(void) /* sub_4A7390 */
{
    FN_ENTER(0x004a7390);
    /* 004a7390: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a7391: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a7392: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a7393: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7394: sub esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a739a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004a739c: mov eax, dword ptr [ebx + 0x4c8] */ r_eax = R32((u32)(r_ebx+0x4c8u));
    /* 004a73a2: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a73a5: mov dword ptr [ebx + 0x4c8], eax */ W32((u32)(r_ebx+0x4c8u), r_eax);
    /* 004a73ab: mov eax, dword ptr [ebx + 0x4ec] */ r_eax = R32((u32)(r_ebx+0x4ecu));
    /* 004a73b1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a73b4: je 0x4a75af */ if (fZ) goto L_004a75af;
L_004a73ba:; BB(0x004a73ba);
    /* 004a73ba: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a73bd: jne 0x4a7465 */ if (!fZ) goto L_004a7465;
L_004a73c3:; BB(0x004a73c3);
    /* 004a73c3: mov eax, dword ptr [ebx + 0x780] */ r_eax = R32((u32)(r_ebx+0x780u));
    /* 004a73c9: mov byte ptr [esp + 0x50], 0xa0 */ W8((u32)(r_esp+0x50u), 0xa0u);
    /* 004a73ce: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a73d0: mov byte ptr [esp + 0x51], 0xa */ W8((u32)(r_esp+0x51u), 0xau);
    /* 004a73d5: lea ebp, [esp + 0x50] */ r_ebp = (u32)(r_esp+0x50u);
    /* 004a73d9: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 004a73dc: mov dword ptr [ebx + 0x77c], edx */ W32((u32)(r_ebx+0x77cu), r_edx);
    /* 004a73e2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a73e3: call 0x4a8e24 */ r_esp -= 4; W32(r_esp, 0x4a73e8u); f_004a8e24();
    /* 004a73e8: mov edi, dword ptr [ebx + 0x77c] */ r_edi = R32((u32)(r_ebx+0x77cu));
    /* 004a73ee: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a73f0: je 0x4a7674 */ if (fZ) goto L_004a7674;
L_004a73f6:; BB(0x004a73f6);
    /* 004a73f6: lea esi, [esp + 0x64] */ r_esi = (u32)(r_esp+0x64u);
L_004a73fa:; BB(0x004a73fa);
    /* 004a73fa: mov ebp, dword ptr [edi] */ r_ebp = R32((u32)(r_edi));
    /* 004a73fc: cmp ebp, 0x21 */ {  u32 a = r_ebp; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a73ff: jne 0x4a7411 */ if (!fZ) goto L_004a7411;
L_004a7401:; BB(0x004a7401);
    /* 004a7401: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a7402: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a7404: call 0x4a771c */ r_esp -= 4; W32(r_esp, 0x4a7409u); f_004a771c();
    /* 004a7409: mov edi, dword ptr [ebx + 0x77c] */ r_edi = R32((u32)(r_ebx+0x77cu));
    /* 004a740f: jmp 0x4a73fa */ goto L_004a73fa;
L_004a7411:; BB(0x004a7411);
    /* 004a7411: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a7412: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a7413: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a7415: call 0x4a8c9c */ r_esp -= 4; W32(r_esp, 0x4a741au); f_004a8c9c();
    /* 004a741a: mov eax, dword ptr [ebp*8 + 0x9a7f60] */ r_eax = R32((u32)(r_ebp*8+0x9a7f60u));
    /* 004a7421: cmp eax, dword ptr [0x903c48] */ {  u32 a = r_eax; u32 b = R32((u32)(0x903c48u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7427: je 0x4a7654 */ if (fZ) goto L_004a7654;
L_004a742d:; BB(0x004a742d);
    /* 004a742d: mov ecx, dword ptr [ebp*8 + 0x9a7f64] */ r_ecx = R32((u32)(r_ebp*8+0x9a7f64u));
L_004a7434:; BB(0x004a7434);
    /* 004a7434: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a7435: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a7436: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a7438: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4a743au); call_ind(t); }
L_004a743a:; BB(0x004a743a);
    /* 004a743a: cmp ebp, 0x22 */ {  u32 a = r_ebp; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a743d: je 0x4a744e */ if (fZ) goto L_004a744e;
L_004a743f:; BB(0x004a743f);
    /* 004a743f: mov eax, dword ptr [ebx + 0x77c] */ r_eax = R32((u32)(r_ebx+0x77cu));
    /* 004a7445: add eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a7448: mov dword ptr [ebx + 0x77c], eax */ W32((u32)(r_ebx+0x77cu), r_eax);
L_004a744e:; BB(0x004a744e);
    /* 004a744e: lea eax, [esp + 0x50] */ r_eax = (u32)(r_esp+0x50u);
    /* 004a7452: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a7453: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a7455: call 0x4a7b28 */ r_esp -= 4; W32(r_esp, 0x4a745au); f_004a7b28();
    /* 004a745a: add esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a7460: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a7461: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a7462: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a7463: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a7464: ret  */ FN_RET(0x004a7390); r_esp += 4; return;
L_004a7465:; BB(0x004a7465);
    /* 004a7465: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7468: jne 0x4a7510 */ if (!fZ) goto L_004a7510;
L_004a746e:; BB(0x004a746e);
    /* 004a746e: mov eax, dword ptr [ebx + 0x780] */ r_eax = R32((u32)(r_ebx+0x780u));
    /* 004a7474: mov byte ptr [esp + 0x28], 0xa0 */ W8((u32)(r_esp+0x28u), 0xa0u);
    /* 004a7479: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a747b: mov byte ptr [esp + 0x29], 0xa */ W8((u32)(r_esp+0x29u), 0xau);
    /* 004a7480: lea ebp, [esp + 0x28] */ r_ebp = (u32)(r_esp+0x28u);
    /* 004a7484: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 004a7487: mov dword ptr [ebx + 0x77c], edx */ W32((u32)(r_ebx+0x77cu), r_edx);
    /* 004a748d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a748e: call 0x4a8e24 */ r_esp -= 4; W32(r_esp, 0x4a7493u); f_004a8e24();
    /* 004a7493: mov edi, dword ptr [ebx + 0x77c] */ r_edi = R32((u32)(r_ebx+0x77cu));
    /* 004a7499: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a749b: je 0x4a76a6 */ if (fZ) goto L_004a76a6;
L_004a74a1:; BB(0x004a74a1);
    /* 004a74a1: lea esi, [esp + 0x3c] */ r_esi = (u32)(r_esp+0x3cu);
L_004a74a5:; BB(0x004a74a5);
    /* 004a74a5: mov ebp, dword ptr [edi] */ r_ebp = R32((u32)(r_edi));
    /* 004a74a7: cmp ebp, 0x21 */ {  u32 a = r_ebp; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a74aa: jne 0x4a74bc */ if (!fZ) goto L_004a74bc;
L_004a74ac:; BB(0x004a74ac);
    /* 004a74ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a74ad: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a74af: call 0x4a771c */ r_esp -= 4; W32(r_esp, 0x4a74b4u); f_004a771c();
    /* 004a74b4: mov edi, dword ptr [ebx + 0x77c] */ r_edi = R32((u32)(r_ebx+0x77cu));
    /* 004a74ba: jmp 0x4a74a5 */ goto L_004a74a5;
L_004a74bc:; BB(0x004a74bc);
    /* 004a74bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a74bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a74be: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a74c0: call 0x4a8c9c */ r_esp -= 4; W32(r_esp, 0x4a74c5u); f_004a8c9c();
    /* 004a74c5: mov eax, dword ptr [ebp*8 + 0x9a7f60] */ r_eax = R32((u32)(r_ebp*8+0x9a7f60u));
    /* 004a74cc: cmp eax, dword ptr [0x903c48] */ {  u32 a = r_eax; u32 b = R32((u32)(0x903c48u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a74d2: je 0x4a7686 */ if (fZ) goto L_004a7686;
L_004a74d8:; BB(0x004a74d8);
    /* 004a74d8: mov ecx, dword ptr [ebp*8 + 0x9a7f64] */ r_ecx = R32((u32)(r_ebp*8+0x9a7f64u));
L_004a74df:; BB(0x004a74df);
    /* 004a74df: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a74e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a74e1: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a74e3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4a74e5u); call_ind(t); }
L_004a74e5:; BB(0x004a74e5);
    /* 004a74e5: cmp ebp, 0x22 */ {  u32 a = r_ebp; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a74e8: je 0x4a74f9 */ if (fZ) goto L_004a74f9;
L_004a74ea:; BB(0x004a74ea);
    /* 004a74ea: mov eax, dword ptr [ebx + 0x77c] */ r_eax = R32((u32)(r_ebx+0x77cu));
    /* 004a74f0: add eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a74f3: mov dword ptr [ebx + 0x77c], eax */ W32((u32)(r_ebx+0x77cu), r_eax);
L_004a74f9:; BB(0x004a74f9);
    /* 004a74f9: lea eax, [esp + 0x28] */ r_eax = (u32)(r_esp+0x28u);
    /* 004a74fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a74fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a7500: call 0x4a7b28 */ r_esp -= 4; W32(r_esp, 0x4a7505u); f_004a7b28();
    /* 004a7505: add esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a750b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a750c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a750d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a750e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a750f: ret  */ FN_RET(0x004a7390); r_esp += 4; return;
L_004a7510:; BB(0x004a7510);
    /* 004a7510: mov eax, dword ptr [ebx + 0x780] */ r_eax = R32((u32)(r_ebx+0x780u));
    /* 004a7516: mov byte ptr [esp], 0xa0 */ W8((u32)(r_esp), 0xa0u);
    /* 004a751a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a751c: mov byte ptr [esp + 1], 0xa */ W8((u32)(r_esp+0x1u), 0xau);
    /* 004a7521: lea ebp, [esp] */ r_ebp = (u32)(r_esp);
    /* 004a7524: mov edx, dword ptr [eax + 0x64] */ r_edx = R32((u32)(r_eax+0x64u));
    /* 004a7527: mov dword ptr [ebx + 0x77c], edx */ W32((u32)(r_ebx+0x77cu), r_edx);
    /* 004a752d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a752e: call 0x4a8e24 */ r_esp -= 4; W32(r_esp, 0x4a7533u); f_004a8e24();
    /* 004a7533: mov edi, dword ptr [ebx + 0x77c] */ r_edi = R32((u32)(r_ebx+0x77cu));
    /* 004a7539: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a753b: je 0x4a76d8 */ if (fZ) goto L_004a76d8;
L_004a7541:; BB(0x004a7541);
    /* 004a7541: lea esi, [esp + 0x14] */ r_esi = (u32)(r_esp+0x14u);
L_004a7545:; BB(0x004a7545);
    /* 004a7545: mov ebp, dword ptr [edi] */ r_ebp = R32((u32)(r_edi));
    /* 004a7547: cmp ebp, 0x21 */ {  u32 a = r_ebp; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a754a: jne 0x4a755c */ if (!fZ) goto L_004a755c;
L_004a754c:; BB(0x004a754c);
    /* 004a754c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a754d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a754f: call 0x4a771c */ r_esp -= 4; W32(r_esp, 0x4a7554u); f_004a771c();
    /* 004a7554: mov edi, dword ptr [ebx + 0x77c] */ r_edi = R32((u32)(r_ebx+0x77cu));
    /* 004a755a: jmp 0x4a7545 */ goto L_004a7545;
L_004a755c:; BB(0x004a755c);
    /* 004a755c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a755d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a755e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a7560: call 0x4a8c9c */ r_esp -= 4; W32(r_esp, 0x4a7565u); f_004a8c9c();
    /* 004a7565: mov eax, dword ptr [ebp*8 + 0x9a7f60] */ r_eax = R32((u32)(r_ebp*8+0x9a7f60u));
    /* 004a756c: cmp eax, dword ptr [0x903c48] */ {  u32 a = r_eax; u32 b = R32((u32)(0x903c48u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7572: je 0x4a76b8 */ if (fZ) goto L_004a76b8;
L_004a7578:; BB(0x004a7578);
    /* 004a7578: mov ecx, dword ptr [ebp*8 + 0x9a7f64] */ r_ecx = R32((u32)(r_ebp*8+0x9a7f64u));
L_004a757f:; BB(0x004a757f);
    /* 004a757f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a7580: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a7581: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a7583: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4a7585u); call_ind(t); }
L_004a7585:; BB(0x004a7585);
    /* 004a7585: cmp ebp, 0x22 */ {  u32 a = r_ebp; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7588: je 0x4a7599 */ if (fZ) goto L_004a7599;
L_004a758a:; BB(0x004a758a);
    /* 004a758a: mov eax, dword ptr [ebx + 0x77c] */ r_eax = R32((u32)(r_ebx+0x77cu));
    /* 004a7590: add eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a7593: mov dword ptr [ebx + 0x77c], eax */ W32((u32)(r_ebx+0x77cu), r_eax);
L_004a7599:; BB(0x004a7599);
    /* 004a7599: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004a759c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a759d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a759f: call 0x4a7b28 */ r_esp -= 4; W32(r_esp, 0x4a75a4u); f_004a7b28();
    /* 004a75a4: add esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a75aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a75ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a75ac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a75ad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a75ae: ret  */ FN_RET(0x004a7390); r_esp += 4; return;
L_004a75af:; BB(0x004a75af);
    /* 004a75af: mov eax, dword ptr [ebx + 0x780] */ r_eax = R32((u32)(r_ebx+0x780u));
    /* 004a75b5: mov byte ptr [esp + 0x78], 0xa0 */ W8((u32)(r_esp+0x78u), 0xa0u);
    /* 004a75ba: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a75bc: mov byte ptr [esp + 0x79], 0xa */ W8((u32)(r_esp+0x79u), 0xau);
    /* 004a75c1: lea ebp, [esp + 0x78] */ r_ebp = (u32)(r_esp+0x78u);
    /* 004a75c5: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 004a75c8: mov dword ptr [ebx + 0x77c], edx */ W32((u32)(r_ebx+0x77cu), r_edx);
    /* 004a75ce: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a75cf: call 0x4a8e24 */ r_esp -= 4; W32(r_esp, 0x4a75d4u); f_004a8e24();
    /* 004a75d4: mov edi, dword ptr [ebx + 0x77c] */ r_edi = R32((u32)(r_ebx+0x77cu));
    /* 004a75da: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a75dc: je 0x4a770a */ if (fZ) goto L_004a770a;
L_004a75e2:; BB(0x004a75e2);
    /* 004a75e2: lea esi, [esp + 0x8c] */ r_esi = (u32)(r_esp+0x8cu);
L_004a75e9:; BB(0x004a75e9);
    /* 004a75e9: mov ebp, dword ptr [edi] */ r_ebp = R32((u32)(r_edi));
    /* 004a75eb: cmp ebp, 0x21 */ {  u32 a = r_ebp; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a75ee: jne 0x4a7600 */ if (!fZ) goto L_004a7600;
L_004a75f0:; BB(0x004a75f0);
    /* 004a75f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a75f1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a75f3: call 0x4a771c */ r_esp -= 4; W32(r_esp, 0x4a75f8u); f_004a771c();
    /* 004a75f8: mov edi, dword ptr [ebx + 0x77c] */ r_edi = R32((u32)(r_ebx+0x77cu));
    /* 004a75fe: jmp 0x4a75e9 */ goto L_004a75e9;
L_004a7600:; BB(0x004a7600);
    /* 004a7600: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a7601: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a7602: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a7604: call 0x4a8c9c */ r_esp -= 4; W32(r_esp, 0x4a7609u); f_004a8c9c();
    /* 004a7609: mov eax, dword ptr [ebp*8 + 0x9a7f60] */ r_eax = R32((u32)(r_ebp*8+0x9a7f60u));
    /* 004a7610: cmp eax, dword ptr [0x903c48] */ {  u32 a = r_eax; u32 b = R32((u32)(0x903c48u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7616: je 0x4a76ea */ if (fZ) goto L_004a76ea;
L_004a761c:; BB(0x004a761c);
    /* 004a761c: mov ecx, dword ptr [ebp*8 + 0x9a7f64] */ r_ecx = R32((u32)(r_ebp*8+0x9a7f64u));
L_004a7623:; BB(0x004a7623);
    /* 004a7623: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a7624: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a7625: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a7627: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4a7629u); call_ind(t); }
L_004a7629:; BB(0x004a7629);
    /* 004a7629: cmp ebp, 0x22 */ {  u32 a = r_ebp; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a762c: je 0x4a763d */ if (fZ) goto L_004a763d;
L_004a762e:; BB(0x004a762e);
    /* 004a762e: mov eax, dword ptr [ebx + 0x77c] */ r_eax = R32((u32)(r_ebx+0x77cu));
    /* 004a7634: add eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a7637: mov dword ptr [ebx + 0x77c], eax */ W32((u32)(r_ebx+0x77cu), r_eax);
L_004a763d:; BB(0x004a763d);
    /* 004a763d: lea eax, [esp + 0x78] */ r_eax = (u32)(r_esp+0x78u);
    /* 004a7641: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a7642: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a7644: call 0x4a7b28 */ r_esp -= 4; W32(r_esp, 0x4a7649u); f_004a7b28();
    /* 004a7649: add esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a764f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a7650: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a7651: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a7652: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a7653: ret  */ FN_RET(0x004a7390); r_esp += 4; return;
L_004a7654:; BB(0x004a7654);
    /* 004a7654: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7656: je 0x4a743a */ if (fZ) goto L_004a743a;
L_004a765c:; BB(0x004a765c);
    /* 004a765c: mov ecx, dword ptr [ebp*8 + 0x9a7f64] */ r_ecx = R32((u32)(r_ebp*8+0x9a7f64u));
    /* 004a7663: cmp ecx, dword ptr [0x903c4c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x903c4cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7669: je 0x4a743a */ if (fZ) goto L_004a743a;
L_004a766f:; BB(0x004a766f);
    /* 004a766f: jmp 0x4a7434 */ goto L_004a7434;
L_004a7674:; BB(0x004a7674);
    /* 004a7674: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a7676: call 0x4a8d0c */ r_esp -= 4; W32(r_esp, 0x4a767bu); f_004a8d0c();
    /* 004a767b: mov edi, dword ptr [ebx + 0x77c] */ r_edi = R32((u32)(r_ebx+0x77cu));
    /* 004a7681: jmp 0x4a73f6 */ goto L_004a73f6;
L_004a7686:; BB(0x004a7686);
    /* 004a7686: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7688: je 0x4a74e5 */ if (fZ) goto L_004a74e5;
L_004a768e:; BB(0x004a768e);
    /* 004a768e: mov ecx, dword ptr [ebp*8 + 0x9a7f64] */ r_ecx = R32((u32)(r_ebp*8+0x9a7f64u));
    /* 004a7695: cmp ecx, dword ptr [0x903c4c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x903c4cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a769b: je 0x4a74e5 */ if (fZ) goto L_004a74e5;
L_004a76a1:; BB(0x004a76a1);
    /* 004a76a1: jmp 0x4a74df */ goto L_004a74df;
L_004a76a6:; BB(0x004a76a6);
    /* 004a76a6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a76a8: call 0x4a8d0c */ r_esp -= 4; W32(r_esp, 0x4a76adu); f_004a8d0c();
    /* 004a76ad: mov edi, dword ptr [ebx + 0x77c] */ r_edi = R32((u32)(r_ebx+0x77cu));
    /* 004a76b3: jmp 0x4a74a1 */ goto L_004a74a1;
L_004a76b8:; BB(0x004a76b8);
    /* 004a76b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a76ba: je 0x4a7585 */ if (fZ) goto L_004a7585;
L_004a76c0:; BB(0x004a76c0);
    /* 004a76c0: mov ecx, dword ptr [ebp*8 + 0x9a7f64] */ r_ecx = R32((u32)(r_ebp*8+0x9a7f64u));
    /* 004a76c7: cmp ecx, dword ptr [0x903c4c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x903c4cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a76cd: je 0x4a7585 */ if (fZ) goto L_004a7585;
L_004a76d3:; BB(0x004a76d3);
    /* 004a76d3: jmp 0x4a757f */ goto L_004a757f;
L_004a76d8:; BB(0x004a76d8);
    /* 004a76d8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a76da: call 0x4a8d0c */ r_esp -= 4; W32(r_esp, 0x4a76dfu); f_004a8d0c();
    /* 004a76df: mov edi, dword ptr [ebx + 0x77c] */ r_edi = R32((u32)(r_ebx+0x77cu));
    /* 004a76e5: jmp 0x4a7541 */ goto L_004a7541;
L_004a76ea:; BB(0x004a76ea);
    /* 004a76ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a76ec: je 0x4a7629 */ if (fZ) goto L_004a7629;
L_004a76f2:; BB(0x004a76f2);
    /* 004a76f2: mov ecx, dword ptr [ebp*8 + 0x9a7f64] */ r_ecx = R32((u32)(r_ebp*8+0x9a7f64u));
    /* 004a76f9: cmp ecx, dword ptr [0x903c4c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x903c4cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a76ff: je 0x4a7629 */ if (fZ) goto L_004a7629;
L_004a7705:; BB(0x004a7705);
    /* 004a7705: jmp 0x4a7623 */ goto L_004a7623;
L_004a770a:; BB(0x004a770a);
    /* 004a770a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a770c: call 0x4a8d0c */ r_esp -= 4; W32(r_esp, 0x4a7711u); f_004a8d0c();
    /* 004a7711: mov edi, dword ptr [ebx + 0x77c] */ r_edi = R32((u32)(r_ebx+0x77cu));
    /* 004a7717: jmp 0x4a75e2 */ goto L_004a75e2;
}

void f_004a771c(void) /* sub_4A771C */
{
    FN_ENTER(0x004a771c);
    /* 004a771c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a771d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a771e: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a7721: mov esi, ecx */ r_esi = r_ecx;
    /* 004a7723: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 004a7727: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004a772a: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a772d: jne 0x4a7b16 */ if (!fZ) goto L_004a7b16;
L_004a7733:; BB(0x004a7733);
    /* 004a7733: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4a7738u); f_008587a5();
    /* 004a7738: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004a773b: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004a773e: fdiv dword ptr [0x903bbc] */ ST(0) = ST(0) / R_F32((u32)(0x903bbcu));
    /* 004a7744: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004a7747: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7749: je 0x4a7ab9 */ if (fZ) goto L_004a7ab9;
L_004a774f:; BB(0x004a774f);
    /* 004a774f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7752: je 0x4a795e */ if (fZ) goto L_004a795e;
L_004a7758:; BB(0x004a7758);
    /* 004a7758: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a775b: je 0x4a791b */ if (fZ) goto L_004a791b;
L_004a7761:; BB(0x004a7761);
    /* 004a7761: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7764: je 0x4a7876 */ if (fZ) goto L_004a7876;
L_004a776a:; BB(0x004a776a);
    /* 004a776a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a776d: je 0x4a77ad */ if (fZ) goto L_004a77ad;
L_004a776f:; BB(0x004a776f);
    /* 004a776f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004a7771: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7774: jne 0x4a778d */ if (!fZ) goto L_004a778d;
L_004a7776:; BB(0x004a7776);
    /* 004a7776: mov eax, dword ptr [esi + 0x780] */ r_eax = R32((u32)(r_esi+0x780u));
    /* 004a777c: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 004a777f: mov dword ptr [esi + 0x77c], edx */ W32((u32)(r_esi+0x77cu), r_edx);
    /* 004a7785: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a7788: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a7789: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a778a: ret 4 */ FN_RET(0x004a771c); r_esp += 8; return;
L_004a778d:; BB(0x004a778d);
    /* 004a778d: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7790: jne 0x4a786e */ if (!fZ) goto L_004a786e;
L_004a7796:; BB(0x004a7796);
    /* 004a7796: mov eax, dword ptr [esi + 0x780] */ r_eax = R32((u32)(r_esi+0x780u));
    /* 004a779c: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 004a779f: mov dword ptr [esi + 0x77c], edx */ W32((u32)(r_esi+0x77cu), r_edx);
    /* 004a77a5: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a77a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a77a9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a77aa: ret 4 */ FN_RET(0x004a771c); r_esp += 8; return;
L_004a77ad:; BB(0x004a77ad);
    /* 004a77ad: fcom dword ptr [0x903bb8] */ fx_compare(ST(0), R_F32((u32)(0x903bb8u))); 
    /* 004a77b3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a77b5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a77b6: jae 0x4a77f5 */ if (!fC) goto L_004a77f5;
L_004a77b8:; BB(0x004a77b8);
    /* 004a77b8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004a77ba: mov eax, dword ptr [0xa47640] */ r_eax = R32((u32)(0xa47640u));
    /* 004a77bf: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 004a77c2: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a77c5: jl 0x4a77de */ if ((fS!=fO)) goto L_004a77de;
L_004a77c7:; BB(0x004a77c7);
    /* 004a77c7: mov eax, dword ptr [esi + 0x780] */ r_eax = R32((u32)(r_esi+0x780u));
    /* 004a77cd: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 004a77d0: mov dword ptr [esi + 0x77c], edx */ W32((u32)(r_esi+0x77cu), r_edx);
    /* 004a77d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a77d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a77da: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a77db: ret 4 */ FN_RET(0x004a771c); r_esp += 8; return;
L_004a77de:; BB(0x004a77de);
    /* 004a77de: mov eax, dword ptr [esi + 0x780] */ r_eax = R32((u32)(r_esi+0x780u));
    /* 004a77e4: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004a77e7: mov dword ptr [esi + 0x77c], edx */ W32((u32)(r_esi+0x77cu), r_edx);
    /* 004a77ed: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a77f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a77f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a77f2: ret 4 */ FN_RET(0x004a771c); r_esp += 8; return;
L_004a77f5:; BB(0x004a77f5);
    /* 004a77f5: fcomp dword ptr [0x903bb4] */ fx_compare(ST(0), R_F32((u32)(0x903bb4u))); FPOP();
    /* 004a77fb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a77fd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a77fe: jae 0x4a783b */ if (!fC) goto L_004a783b;
L_004a7800:; BB(0x004a7800);
    /* 004a7800: mov eax, dword ptr [0xa47640] */ r_eax = R32((u32)(0xa47640u));
    /* 004a7805: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 004a7808: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a780b: jl 0x4a7824 */ if ((fS!=fO)) goto L_004a7824;
L_004a780d:; BB(0x004a780d);
    /* 004a780d: mov eax, dword ptr [esi + 0x780] */ r_eax = R32((u32)(r_esi+0x780u));
    /* 004a7813: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 004a7816: mov dword ptr [esi + 0x77c], edx */ W32((u32)(r_esi+0x77cu), r_edx);
    /* 004a781c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a781f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a7820: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a7821: ret 4 */ FN_RET(0x004a771c); r_esp += 8; return;
L_004a7824:; BB(0x004a7824);
    /* 004a7824: mov eax, dword ptr [esi + 0x780] */ r_eax = R32((u32)(r_esi+0x780u));
    /* 004a782a: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004a782d: mov dword ptr [esi + 0x77c], edx */ W32((u32)(r_esi+0x77cu), r_edx);
    /* 004a7833: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a7836: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a7837: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a7838: ret 4 */ FN_RET(0x004a771c); r_esp += 8; return;
L_004a783b:; BB(0x004a783b);
    /* 004a783b: mov eax, dword ptr [0xa47640] */ r_eax = R32((u32)(0xa47640u));
    /* 004a7840: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 004a7843: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a7846: jl 0x4a785f */ if ((fS!=fO)) goto L_004a785f;
L_004a7848:; BB(0x004a7848);
    /* 004a7848: mov eax, dword ptr [esi + 0x780] */ r_eax = R32((u32)(r_esi+0x780u));
    /* 004a784e: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 004a7851: mov dword ptr [esi + 0x77c], edx */ W32((u32)(r_esi+0x77cu), r_edx);
    /* 004a7857: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a785a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a785b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a785c: ret 4 */ FN_RET(0x004a771c); r_esp += 8; return;
L_004a785f:; BB(0x004a785f);
    /* 004a785f: mov eax, dword ptr [esi + 0x780] */ r_eax = R32((u32)(r_esi+0x780u));
    /* 004a7865: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 004a7868: mov dword ptr [esi + 0x77c], edx */ W32((u32)(r_esi+0x77cu), r_edx);
L_004a786e:; BB(0x004a786e);
    /* 004a786e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a7871: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a7872: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a7873: ret 4 */ FN_RET(0x004a771c); r_esp += 8; return;
L_004a7876:; BB(0x004a7876);
    /* 004a7876: fcom dword ptr [0x903bb0] */ fx_compare(ST(0), R_F32((u32)(0x903bb0u))); 
    /* 004a787c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a787e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a787f: jae 0x4a789a */ if (!fC) goto L_004a789a;
L_004a7881:; BB(0x004a7881);
    /* 004a7881: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004a7883: mov eax, dword ptr [esi + 0x780] */ r_eax = R32((u32)(r_esi+0x780u));
    /* 004a7889: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 004a788c: mov dword ptr [esi + 0x77c], edx */ W32((u32)(r_esi+0x77cu), r_edx);
    /* 004a7892: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a7895: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a7896: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a7897: ret 4 */ FN_RET(0x004a771c); r_esp += 8; return;
L_004a789a:; BB(0x004a789a);
    /* 004a789a: fcom dword ptr [0x903bac] */ fx_compare(ST(0), R_F32((u32)(0x903bacu))); 
    /* 004a78a0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a78a2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a78a3: jae 0x4a78be */ if (!fC) goto L_004a78be;
L_004a78a5:; BB(0x004a78a5);
    /* 004a78a5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004a78a7: mov eax, dword ptr [esi + 0x780] */ r_eax = R32((u32)(r_esi+0x780u));
    /* 004a78ad: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004a78b0: mov dword ptr [esi + 0x77c], edx */ W32((u32)(r_esi+0x77cu), r_edx);
    /* 004a78b6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a78b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a78ba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a78bb: ret 4 */ FN_RET(0x004a771c); r_esp += 8; return;
L_004a78be:; BB(0x004a78be);
    /* 004a78be: fcom dword ptr [0x903bb4] */ fx_compare(ST(0), R_F32((u32)(0x903bb4u))); 
    /* 004a78c4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a78c6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a78c7: jae 0x4a78e2 */ if (!fC) goto L_004a78e2;
L_004a78c9:; BB(0x004a78c9);
    /* 004a78c9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004a78cb: mov eax, dword ptr [esi + 0x780] */ r_eax = R32((u32)(r_esi+0x780u));
    /* 004a78d1: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 004a78d4: mov dword ptr [esi + 0x77c], edx */ W32((u32)(r_esi+0x77cu), r_edx);
    /* 004a78da: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a78dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a78de: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a78df: ret 4 */ FN_RET(0x004a771c); r_esp += 8; return;
L_004a78e2:; BB(0x004a78e2);
    /* 004a78e2: fcomp dword ptr [0x903ba8] */ fx_compare(ST(0), R_F32((u32)(0x903ba8u))); FPOP();
    /* 004a78e8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a78ea: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a78eb: jae 0x4a7904 */ if (!fC) goto L_004a7904;
L_004a78ed:; BB(0x004a78ed);
    /* 004a78ed: mov eax, dword ptr [esi + 0x780] */ r_eax = R32((u32)(r_esi+0x780u));
    /* 004a78f3: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 004a78f6: mov dword ptr [esi + 0x77c], edx */ W32((u32)(r_esi+0x77cu), r_edx);
    /* 004a78fc: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a78ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a7900: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a7901: ret 4 */ FN_RET(0x004a771c); r_esp += 8; return;
L_004a7904:; BB(0x004a7904);
    /* 004a7904: mov eax, dword ptr [esi + 0x780] */ r_eax = R32((u32)(r_esi+0x780u));
    /* 004a790a: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 004a790d: mov dword ptr [esi + 0x77c], edx */ W32((u32)(r_esi+0x77cu), r_edx);
    /* 004a7913: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a7916: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a7917: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a7918: ret 4 */ FN_RET(0x004a771c); r_esp += 8; return;
L_004a791b:; BB(0x004a791b);
    /* 004a791b: mov edx, dword ptr [0xa47640] */ r_edx = R32((u32)(0xa47640u));
    /* 004a7921: mov ebp, dword ptr [edx + 0x28] */ r_ebp = R32((u32)(r_edx+0x28u));
    /* 004a7924: fcomp dword ptr [ebp*4 + 0x903924] */ fx_compare(ST(0), R_F32((u32)(r_ebp*4+0x903924u))); FPOP();
    /* 004a792b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a792d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a792e: jae 0x4a7947 */ if (!fC) goto L_004a7947;
L_004a7930:; BB(0x004a7930);
    /* 004a7930: mov eax, dword ptr [esi + 0x780] */ r_eax = R32((u32)(r_esi+0x780u));
    /* 004a7936: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 004a7939: mov dword ptr [esi + 0x77c], edx */ W32((u32)(r_esi+0x77cu), r_edx);
    /* 004a793f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a7942: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a7943: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a7944: ret 4 */ FN_RET(0x004a771c); r_esp += 8; return;
L_004a7947:; BB(0x004a7947);
    /* 004a7947: mov eax, dword ptr [esi + 0x780] */ r_eax = R32((u32)(r_esi+0x780u));
    /* 004a794d: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 004a7950: mov dword ptr [esi + 0x77c], edx */ W32((u32)(r_esi+0x77cu), r_edx);
    /* 004a7956: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a7959: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a795a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a795b: ret 4 */ FN_RET(0x004a771c); r_esp += 8; return;
L_004a795e:; BB(0x004a795e);
    /* 004a795e: mov eax, dword ptr [esi + 0x4c8] */ r_eax = R32((u32)(r_esi+0x4c8u));
    /* 004a7964: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7969: je 0x4a799f */ if (fZ) goto L_004a799f;
L_004a796b:; BB(0x004a796b);
    /* 004a796b: mov ebp, 0xa47640 */ r_ebp = 0xa47640u;
    /* 004a7970: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 004a7973: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 004a7976: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a7979: jl 0x4a79a7 */ if ((fS!=fO)) goto L_004a79a7;
L_004a797b:; BB(0x004a797b);
    /* 004a797b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004a797d: mov edx, dword ptr [esi + 0x780] */ r_edx = R32((u32)(r_esi+0x780u));
    /* 004a7983: mov ebp, dword ptr [edx + 0x24] */ r_ebp = R32((u32)(r_edx+0x24u));
    /* 004a7986: mov dword ptr [esi + 0x77c], ebp */ W32((u32)(r_esi+0x77cu), r_ebp);
    /* 004a798c: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004a7991: mov dword ptr [esi + 0x4c8], eax */ W32((u32)(r_esi+0x4c8u), r_eax);
    /* 004a7997: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a799a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a799b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a799c: ret 4 */ FN_RET(0x004a771c); r_esp += 8; return;
L_004a799f:; BB(0x004a799f);
    /* 004a799f: mov ebp, 0xa47640 */ r_ebp = 0xa47640u;
    /* 004a79a4: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
L_004a79a7:; BB(0x004a79a7);
    /* 004a79a7: or eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a79ac: mov dword ptr [esi + 0x4c8], eax */ W32((u32)(r_esi+0x4c8u), r_eax);
    /* 004a79b2: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 004a79b5: fcomp dword ptr [edx*4 + 0x903924] */ fx_compare(ST(0), R_F32((u32)(r_edx*4+0x903924u))); FPOP();
    /* 004a79bc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a79be: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a79bf: jae 0x4a79d8 */ if (!fC) goto L_004a79d8;
L_004a79c1:; BB(0x004a79c1);
    /* 004a79c1: mov eax, dword ptr [esi + 0x780] */ r_eax = R32((u32)(r_esi+0x780u));
    /* 004a79c7: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 004a79ca: mov dword ptr [esi + 0x77c], edx */ W32((u32)(r_esi+0x77cu), r_edx);
    /* 004a79d0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a79d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a79d4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a79d5: ret 4 */ FN_RET(0x004a771c); r_esp += 8; return;
L_004a79d8:; BB(0x004a79d8);
    /* 004a79d8: movsx eax, word ptr [esi + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x334u));
    /* 004a79df: movsx edx, word ptr [esi + 0x2bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x2bcu));
    /* 004a79e6: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a79ea: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 004a79ee: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004a79f2: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 004a79f6: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004a79f8: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004a79fc: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4a7a01u); f_008587a5();
    /* 004a7a01: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004a7a04: mov ebp, dword ptr [edx + 0x28] */ r_ebp = R32((u32)(r_edx+0x28u));
    /* 004a7a07: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a7a0b: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 004a7a0f: fdiv dword ptr [0x903bbc] */ ST(0) = ST(0) / R_F32((u32)(0x903bbcu));
    /* 004a7a15: fcomp dword ptr [ebp*4 + 0x903900] */ fx_compare(ST(0), R_F32((u32)(r_ebp*4+0x903900u))); FPOP();
    /* 004a7a1c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a7a1e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a7a1f: jae 0x4a7a6d */ if (!fC) goto L_004a7a6d;
L_004a7a21:; BB(0x004a7a21);
    /* 004a7a21: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4a7a26u); f_008587a5();
    /* 004a7a26: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 004a7a2a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a7a2e: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 004a7a32: fdiv dword ptr [0x903bbc] */ ST(0) = ST(0) / R_F32((u32)(0x903bbcu));
    /* 004a7a38: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 004a7a3a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a7a3c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a7a3d: jae 0x4a7a56 */ if (!fC) goto L_004a7a56;
L_004a7a3f:; BB(0x004a7a3f);
    /* 004a7a3f: mov eax, dword ptr [esi + 0x780] */ r_eax = R32((u32)(r_esi+0x780u));
    /* 004a7a45: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 004a7a48: mov dword ptr [esi + 0x77c], edx */ W32((u32)(r_esi+0x77cu), r_edx);
    /* 004a7a4e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a7a51: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a7a52: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a7a53: ret 4 */ FN_RET(0x004a771c); r_esp += 8; return;
L_004a7a56:; BB(0x004a7a56);
    /* 004a7a56: mov eax, dword ptr [esi + 0x780] */ r_eax = R32((u32)(r_esi+0x780u));
    /* 004a7a5c: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 004a7a5f: mov dword ptr [esi + 0x77c], edx */ W32((u32)(r_esi+0x77cu), r_edx);
    /* 004a7a65: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a7a68: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a7a69: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a7a6a: ret 4 */ FN_RET(0x004a771c); r_esp += 8; return;
L_004a7a6d:; BB(0x004a7a6d);
    /* 004a7a6d: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4a7a72u); f_008587a5();
    /* 004a7a72: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 004a7a76: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a7a7a: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 004a7a7e: fdiv dword ptr [0x903bbc] */ ST(0) = ST(0) / R_F32((u32)(0x903bbcu));
    /* 004a7a84: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 004a7a86: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a7a88: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a7a89: jae 0x4a7aa2 */ if (!fC) goto L_004a7aa2;
L_004a7a8b:; BB(0x004a7a8b);
    /* 004a7a8b: mov eax, dword ptr [esi + 0x780] */ r_eax = R32((u32)(r_esi+0x780u));
    /* 004a7a91: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 004a7a94: mov dword ptr [esi + 0x77c], edx */ W32((u32)(r_esi+0x77cu), r_edx);
    /* 004a7a9a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a7a9d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a7a9e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a7a9f: ret 4 */ FN_RET(0x004a771c); r_esp += 8; return;
L_004a7aa2:; BB(0x004a7aa2);
    /* 004a7aa2: mov eax, dword ptr [esi + 0x780] */ r_eax = R32((u32)(r_esi+0x780u));
    /* 004a7aa8: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 004a7aab: mov dword ptr [esi + 0x77c], edx */ W32((u32)(r_esi+0x77cu), r_edx);
    /* 004a7ab1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a7ab4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a7ab5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a7ab6: ret 4 */ FN_RET(0x004a771c); r_esp += 8; return;
L_004a7ab9:; BB(0x004a7ab9);
    /* 004a7ab9: fcom dword ptr [0x903bb4] */ fx_compare(ST(0), R_F32((u32)(0x903bb4u))); 
    /* 004a7abf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a7ac1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a7ac2: jae 0x4a7add */ if (!fC) goto L_004a7add;
L_004a7ac4:; BB(0x004a7ac4);
    /* 004a7ac4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004a7ac6: mov eax, dword ptr [esi + 0x780] */ r_eax = R32((u32)(r_esi+0x780u));
    /* 004a7acc: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004a7acf: mov dword ptr [esi + 0x77c], edx */ W32((u32)(r_esi+0x77cu), r_edx);
    /* 004a7ad5: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a7ad8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a7ad9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a7ada: ret 4 */ FN_RET(0x004a771c); r_esp += 8; return;
L_004a7add:; BB(0x004a7add);
    /* 004a7add: fcomp dword ptr [0x903ba4] */ fx_compare(ST(0), R_F32((u32)(0x903ba4u))); FPOP();
    /* 004a7ae3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a7ae5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a7ae6: jae 0x4a7aff */ if (!fC) goto L_004a7aff;
L_004a7ae8:; BB(0x004a7ae8);
    /* 004a7ae8: mov eax, dword ptr [esi + 0x780] */ r_eax = R32((u32)(r_esi+0x780u));
    /* 004a7aee: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 004a7af1: mov dword ptr [esi + 0x77c], edx */ W32((u32)(r_esi+0x77cu), r_edx);
    /* 004a7af7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a7afa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a7afb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a7afc: ret 4 */ FN_RET(0x004a771c); r_esp += 8; return;
L_004a7aff:; BB(0x004a7aff);
    /* 004a7aff: mov eax, dword ptr [esi + 0x780] */ r_eax = R32((u32)(r_esi+0x780u));
    /* 004a7b05: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 004a7b08: mov dword ptr [esi + 0x77c], edx */ W32((u32)(r_esi+0x77cu), r_edx);
    /* 004a7b0e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a7b11: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a7b12: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a7b13: ret 4 */ FN_RET(0x004a771c); r_esp += 8; return;
L_004a7b16:; BB(0x004a7b16);
    /* 004a7b16: mov ecx, esi */ r_ecx = r_esi;
    /* 004a7b18: call 0x4a8d0c */ r_esp -= 4; W32(r_esp, 0x4a7b1du); f_004a8d0c();
    /* 004a7b1d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a7b20: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a7b21: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a7b22: ret 4 */ FN_RET(0x004a771c); r_esp += 8; return;
}

void f_004a7b28(void) /* sub_4A7B28 */
{
    FN_ENTER(0x004a7b28);
    /* 004a7b28: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004a7b2c: movzx edx, word ptr [ecx + 0x1c] */ r_edx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 004a7b30: mov word ptr [eax + 2], dx */ W16((u32)(r_eax+0x2u), (u16)r_edx);
    /* 004a7b34: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 004a7b37: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 004a7b3a: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 004a7b3d: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 004a7b40: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 004a7b43: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 004a7b46: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 004a7b49: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 004a7b4c: mov ecx, eax */ r_ecx = r_eax;
    /* 004a7b4e: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4a7b53u); f_008003e0();
    /* 004a7b53: ret 4 */ FN_RET(0x004a7b28); r_esp += 8; return;
}

void f_004a7b58(void) /* sub_4A7B58 */
{
    FN_ENTER(0x004a7b58);
    /* 004a7b58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a7b59: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a7b5a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a7b5b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7b5c: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a7b5f: mov edi, ecx */ r_edi = r_ecx;
    /* 004a7b61: mov eax, dword ptr [edi + 0x4c8] */ r_eax = R32((u32)(r_edi+0x4c8u));
    /* 004a7b67: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004a7b69: je 0x4a7c15 */ if (fZ) goto L_004a7c15;
L_004a7b6f:; BB(0x004a7b6f);
    /* 004a7b6f: lea eax, [edi + 0x4b0] */ r_eax = (u32)(r_edi+0x4b0u);
    /* 004a7b75: cmp eax, dword ptr [edi + 0x4c4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x4c4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004a7b7b: jbe 0x4a7b85 */ if ((fC||fZ)) goto L_004a7b85;
L_004a7b7d:; BB(0x004a7b7d);
    /* 004a7b7d: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a7b80: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a7b81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a7b82: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a7b83: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a7b84: ret  */ FN_RET(0x004a7b58); r_esp += 4; return;
L_004a7b85:; BB(0x004a7b85);
    /* 004a7b85: mov byte ptr [esp], 0xa0 */ W8((u32)(r_esp), 0xa0u);
    /* 004a7b89: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004a7b8c: mov ecx, edi */ r_ecx = r_edi;
    /* 004a7b8e: mov byte ptr [esp + 1], 0xa */ W8((u32)(r_esp+0x1u), 0xau);
    /* 004a7b93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a7b94: call 0x4a8e24 */ r_esp -= 4; W32(r_esp, 0x4a7b99u); f_004a8e24();
    /* 004a7b99: mov esi, dword ptr [edi + 0x77c] */ r_esi = R32((u32)(r_edi+0x77cu));
    /* 004a7b9f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7ba1: je 0x4a7c32 */ if (fZ) goto L_004a7c32;
L_004a7ba7:; BB(0x004a7ba7);
    /* 004a7ba7: lea ebp, [esp + 0x14] */ r_ebp = (u32)(r_esp+0x14u);
L_004a7bab:; BB(0x004a7bab);
    /* 004a7bab: mov ebx, dword ptr [esi] */ r_ebx = R32((u32)(r_esi));
    /* 004a7bad: cmp ebx, 0x21 */ {  u32 a = r_ebx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7bb0: jne 0x4a7bc2 */ if (!fZ) goto L_004a7bc2;
L_004a7bb2:; BB(0x004a7bb2);
    /* 004a7bb2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a7bb3: mov ecx, edi */ r_ecx = r_edi;
    /* 004a7bb5: call 0x4a771c */ r_esp -= 4; W32(r_esp, 0x4a7bbau); f_004a771c();
    /* 004a7bba: mov esi, dword ptr [edi + 0x77c] */ r_esi = R32((u32)(r_edi+0x77cu));
    /* 004a7bc0: jmp 0x4a7bab */ goto L_004a7bab;
L_004a7bc2:; BB(0x004a7bc2);
    /* 004a7bc2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a7bc3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a7bc4: mov ecx, edi */ r_ecx = r_edi;
    /* 004a7bc6: call 0x4a8c9c */ r_esp -= 4; W32(r_esp, 0x4a7bcbu); f_004a8c9c();
    /* 004a7bcb: mov eax, dword ptr [ebx*8 + 0x9a7f60] */ r_eax = R32((u32)(r_ebx*8+0x9a7f60u));
    /* 004a7bd2: cmp eax, dword ptr [0x903c48] */ {  u32 a = r_eax; u32 b = R32((u32)(0x903c48u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7bd8: je 0x4a7c1d */ if (fZ) goto L_004a7c1d;
L_004a7bda:; BB(0x004a7bda);
    /* 004a7bda: mov ecx, dword ptr [ebx*8 + 0x9a7f64] */ r_ecx = R32((u32)(r_ebx*8+0x9a7f64u));
L_004a7be1:; BB(0x004a7be1);
    /* 004a7be1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a7be2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a7be3: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a7be5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4a7be7u); call_ind(t); }
L_004a7be7:; BB(0x004a7be7);
    /* 004a7be7: cmp ebx, 0x22 */ {  u32 a = r_ebx; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7bea: je 0x4a7bfb */ if (fZ) goto L_004a7bfb;
L_004a7bec:; BB(0x004a7bec);
    /* 004a7bec: mov eax, dword ptr [edi + 0x77c] */ r_eax = R32((u32)(r_edi+0x77cu));
    /* 004a7bf2: add eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a7bf5: mov dword ptr [edi + 0x77c], eax */ W32((u32)(r_edi+0x77cu), r_eax);
L_004a7bfb:; BB(0x004a7bfb);
    /* 004a7bfb: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004a7bfe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7bff: mov eax, dword ptr [edi + 0x4c8] */ r_eax = R32((u32)(r_edi+0x4c8u));
    /* 004a7c05: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004a7c08: mov dword ptr [edi + 0x4c8], eax */ W32((u32)(r_edi+0x4c8u), r_eax);
    /* 004a7c0e: mov ecx, edi */ r_ecx = r_edi;
    /* 004a7c10: call 0x4a7b28 */ r_esp -= 4; W32(r_esp, 0x4a7c15u); f_004a7b28();
L_004a7c15:; BB(0x004a7c15);
    /* 004a7c15: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a7c18: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a7c19: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a7c1a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a7c1b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a7c1c: ret  */ FN_RET(0x004a7b58); r_esp += 4; return;
L_004a7c1d:; BB(0x004a7c1d);
    /* 004a7c1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7c1f: je 0x4a7be7 */ if (fZ) goto L_004a7be7;
L_004a7c21:; BB(0x004a7c21);
    /* 004a7c21: mov ecx, dword ptr [ebx*8 + 0x9a7f64] */ r_ecx = R32((u32)(r_ebx*8+0x9a7f64u));
    /* 004a7c28: cmp ecx, dword ptr [0x903c4c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x903c4cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7c2e: je 0x4a7be7 */ if (fZ) goto L_004a7be7;
L_004a7c30:; BB(0x004a7c30);
    /* 004a7c30: jmp 0x4a7be1 */ goto L_004a7be1;
L_004a7c32:; BB(0x004a7c32);
    /* 004a7c32: mov ecx, edi */ r_ecx = r_edi;
    /* 004a7c34: call 0x4a8d0c */ r_esp -= 4; W32(r_esp, 0x4a7c39u); f_004a8d0c();
    /* 004a7c39: mov esi, dword ptr [edi + 0x77c] */ r_esi = R32((u32)(r_edi+0x77cu));
    /* 004a7c3f: jmp 0x4a7ba7 */ goto L_004a7ba7;
}

void f_004a7c44(void) /* sub_4A7C44 */
{
    FN_ENTER(0x004a7c44);
    /* 004a7c44: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7c45: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a7c48: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004a7c4a: movzx edx, byte ptr [0xa474d0] */ r_edx = (u32)R8((u32)(0xa474d0u));
    /* 004a7c51: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004a7c54: jne 0x4a7c7d */ if (!fZ) goto L_004a7c7d;
L_004a7c56:; BB(0x004a7c56);
    /* 004a7c56: mov dword ptr [0xa475d8], 0x3e99999a */ W32((u32)(0xa475d8u), 0x3e99999au);
    /* 004a7c60: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004a7c63: mov byte ptr [0xa474d0], dl */ W8((u32)(0xa474d0u), (u8)r_edx);
    /* 004a7c69: mov dword ptr [0xa475dc], 0x3f400000 */ W32((u32)(0xa475dcu), 0x3f400000u);
    /* 004a7c73: mov dword ptr [0xa475e0], 0x3f400000 */ W32((u32)(0xa475e0u), 0x3f400000u);
L_004a7c7d:; BB(0x004a7c7d);
    /* 004a7c7d: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004a7c80: jne 0x4a7ca4 */ if (!fZ) goto L_004a7ca4;
L_004a7c82:; BB(0x004a7c82);
    /* 004a7c82: mov eax, dword ptr [0xa475f8] */ r_eax = R32((u32)(0xa475f8u));
    /* 004a7c87: mov dword ptr [0xa475e8], 0 */ W32((u32)(0xa475e8u), 0x0u);
    /* 004a7c91: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004a7c94: mov dword ptr [0xa475ec], eax */ W32((u32)(0xa475ecu), r_eax);
    /* 004a7c99: mov dword ptr [0xa475f0], eax */ W32((u32)(0xa475f0u), r_eax);
    /* 004a7c9e: mov byte ptr [0xa474d0], dl */ W8((u32)(0xa474d0u), (u8)r_edx);
L_004a7ca4:; BB(0x004a7ca4);
    /* 004a7ca4: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004a7ca7: jne 0x4a7cd3 */ if (!fZ) goto L_004a7cd3;
L_004a7ca9:; BB(0x004a7ca9);
    /* 004a7ca9: mov dword ptr [0xa475fc], 0 */ W32((u32)(0xa475fcu), 0x0u);
    /* 004a7cb3: or edx, 0xffffff04 */ {  u32 a = r_edx; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004a7cb9: mov byte ptr [0xa474d0], dl */ W8((u32)(0xa474d0u), (u8)r_edx);
    /* 004a7cbf: mov dword ptr [0xa47600], 0x3f400000 */ W32((u32)(0xa47600u), 0x3f400000u);
    /* 004a7cc9: mov dword ptr [0xa47604], 0x3f400000 */ W32((u32)(0xa47604u), 0x3f400000u);
L_004a7cd3:; BB(0x004a7cd3);
    /* 004a7cd3: mov edx, dword ptr [ebx + 0x4c8] */ r_edx = R32((u32)(r_ebx+0x4c8u));
    /* 004a7cd9: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004a7cdc: jne 0x4a7d0f */ if (!fZ) goto L_004a7d0f;
L_004a7cde:; BB(0x004a7cde);
    /* 004a7cde: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 004a7ce1: fadd dword ptr [ebx + 0x47c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x47cu));
    /* 004a7ce7: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 004a7cea: fadd dword ptr [ebx + 0x480] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x480u));
    /* 004a7cf0: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 004a7cf3: fadd dword ptr [ebx + 0x484] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x484u));
    /* 004a7cf9: mov eax, dword ptr [ebx + 0x488] */ r_eax = R32((u32)(r_ebx+0x488u));
    /* 004a7cff: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004a7d01: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 004a7d04: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
    /* 004a7d07: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 004a7d0a: add dword ptr [ebx + 0x60], eax */ { u32 ad = (u32)(r_ebx+0x60u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004a7d0d: jmp 0x4a7d80 */ goto L_004a7d80;
L_004a7d0f:; BB(0x004a7d0f);
    /* 004a7d0f: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 004a7d12: fadd dword ptr [ebx + 0x480] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x480u));
    /* 004a7d18: mov eax, dword ptr [ebx + 0x488] */ r_eax = R32((u32)(r_ebx+0x488u));
    /* 004a7d1e: mov edx, dword ptr [ebx + 0x47c] */ r_edx = R32((u32)(r_ebx+0x47cu));
    /* 004a7d24: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
    /* 004a7d27: add dword ptr [ebx + 0x60], eax */ { u32 ad = (u32)(r_ebx+0x60u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004a7d2a: mov eax, dword ptr [ebx + 0x484] */ r_eax = R32((u32)(r_ebx+0x484u));
    /* 004a7d30: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004a7d33: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004a7d3b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a7d3f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004a7d42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a7d43: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x4a7d48u); f_007828e4();
    /* 004a7d48: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a7d49: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a7d4c: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 004a7d50: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004a7d54: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a7d56: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 004a7d5a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004a7d5d: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004a7d61: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004a7d65: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a7d69: call 0x5206cc */ r_esp -= 4; W32(r_esp, 0x4a7d6eu); f_005206cc();
    /* 004a7d6e: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004a7d72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a7d73: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a7d75: call 0x520750 */ r_esp -= 4; W32(r_esp, 0x4a7d7au); f_00520750();
    /* 004a7d7a: mov edx, dword ptr [ebx + 0x4c8] */ r_edx = R32((u32)(r_ebx+0x4c8u));
L_004a7d80:; BB(0x004a7d80);
    /* 004a7d80: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004a7d83: jne 0x4a7da7 */ if (!fZ) goto L_004a7da7;
L_004a7d85:; BB(0x004a7d85);
    /* 004a7d85: mov eax, dword ptr [ebx + 0x4ec] */ r_eax = R32((u32)(r_ebx+0x4ecu));
    /* 004a7d8b: push dword ptr [eax*4 + 0xa475fc] */ { u32 v = R32((u32)(r_eax*4+0xa475fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004a7d92: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a7d94: push dword ptr [eax*4 + 0xa475e8] */ { u32 v = R32((u32)(r_eax*4+0xa475e8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a7d9b: push dword ptr [eax*4 + 0xa475d8] */ { u32 v = R32((u32)(r_eax*4+0xa475d8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a7da2: call 0x4a4814 */ r_esp -= 4; W32(r_esp, 0x4a7da7u); f_004a4814();
L_004a7da7:; BB(0x004a7da7);
    /* 004a7da7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a7daa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a7dab: ret  */ FN_RET(0x004a7c44); r_esp += 4; return;
}

void f_004a7dac(void) /* sub_4A7DAC */
{
    FN_ENTER(0x004a7dac);
    /* 004a7dac: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 004a7daf: fadd dword ptr [ecx + 0x48c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x48cu));
    /* 004a7db5: fld dword ptr [ecx + 0x40] */ FPUSH(R_F32((u32)(r_ecx+0x40u)));
    /* 004a7db8: fadd dword ptr [ecx + 0x494] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x494u));
    /* 004a7dbe: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a7dc0: fstp dword ptr [ecx + 0x38] */ W_F32((u32)(r_ecx+0x38u), ST(0)); FPOP();
    /* 004a7dc3: fstp dword ptr [ecx + 0x40] */ W_F32((u32)(r_ecx+0x40u), ST(0)); FPOP();
    /* 004a7dc6: mov dword ptr [ecx + 0x48c], 0 */ W32((u32)(r_ecx+0x48cu), 0x0u);
    /* 004a7dd0: mov dword ptr [ecx + 0x490], 0 */ W32((u32)(r_ecx+0x490u), 0x0u);
    /* 004a7dda: mov dword ptr [ecx + 0x494], 0 */ W32((u32)(r_ecx+0x494u), 0x0u);
    /* 004a7de4: ret  */ FN_RET(0x004a7dac); r_esp += 4; return;
}

void f_004a7de8(void) /* sub_4A7DE8 */
{
    FN_ENTER(0x004a7de8);
    /* 004a7de8: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004a7def: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004a7df2: je 0x4a7e1c */ if (fZ) goto L_004a7e1c;
L_004a7df4:; BB(0x004a7df4);
    /* 004a7df4: mov edx, dword ptr [ecx + 0x4c4] */ r_edx = R32((u32)(r_ecx+0x4c4u));
    /* 004a7dfa: movsx eax, word ptr [edx + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x2u));
    /* 004a7dfe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a7e00: jle 0x4a7e1c */ if ((fZ||fS!=fO)) goto L_004a7e1c;
L_004a7e02:; BB(0x004a7e02);
    /* 004a7e02: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a7e05: mov word ptr [edx + 2], ax */ W16((u32)(r_edx+0x2u), (u16)r_eax);
    /* 004a7e09: mov eax, dword ptr [ecx + 0x4c4] */ r_eax = R32((u32)(r_ecx+0x4c4u));
    /* 004a7e0f: movsx edx, word ptr [eax + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 004a7e13: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a7e15: jne 0x4a7e1c */ if (!fZ) goto L_004a7e1c;
L_004a7e17:; BB(0x004a7e17);
    /* 004a7e17: call 0x4a7e20 */ r_esp -= 4; W32(r_esp, 0x4a7e1cu); f_004a7e20();
L_004a7e1c:; BB(0x004a7e1c);
    /* 004a7e1c: ret  */ FN_RET(0x004a7de8); r_esp += 4; return;
}

void f_004a7e20(void) /* sub_4A7E20 */
{
    FN_ENTER(0x004a7e20);
    /* 004a7e20: mov edx, dword ptr [ecx + 0x4c4] */ r_edx = R32((u32)(r_ecx+0x4c4u));
    /* 004a7e26: lea eax, [edx + 0x14] */ r_eax = (u32)(r_edx+0x14u);
    /* 004a7e29: mov dword ptr [ecx + 0x4c4], eax */ W32((u32)(r_ecx+0x4c4u), r_eax);
    /* 004a7e2f: movsx eax, word ptr [edx + 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x14u));
    /* 004a7e33: cmp ax, word ptr [ecx + 0x32e] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ecx+0x32eu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 004a7e3a: je 0x4a7e42 */ if (fZ) goto L_004a7e42;
L_004a7e3c:; BB(0x004a7e3c);
    /* 004a7e3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a7e3d: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x4a7e42u); f_0051f62c();
L_004a7e42:; BB(0x004a7e42);
    /* 004a7e42: ret  */ FN_RET(0x004a7e20); r_esp += 4; return;
}

void f_004a7e44(void) /* sub_4A7E44 */
{
    FN_ENTER(0x004a7e44);
    /* 004a7e44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a7e45: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 004a7e4b: mov edx, dword ptr [ecx + 0x3cc] */ r_edx = R32((u32)(r_ecx+0x3ccu));
    /* 004a7e51: mov edi, dword ptr [ecx + 0x3d0] */ r_edi = R32((u32)(r_ecx+0x3d0u));
    /* 004a7e57: mov dword ptr [ecx + 0x300], eax */ W32((u32)(r_ecx+0x300u), r_eax);
    /* 004a7e5d: mov dword ptr [ecx + 0x304], edx */ W32((u32)(r_ecx+0x304u), r_edx);
    /* 004a7e63: mov dword ptr [ecx + 0x308], edi */ W32((u32)(r_ecx+0x308u), r_edi);
    /* 004a7e69: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 004a7e6c: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
    /* 004a7e6f: mov dword ptr [ecx + 0x7c], edi */ W32((u32)(r_ecx+0x7cu), r_edi);
    /* 004a7e72: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a7e73: ret  */ FN_RET(0x004a7e44); r_esp += 4; return;
}

void f_004a7e74(void) /* sub_4A7E74 */
{
    FN_ENTER(0x004a7e74);
    /* 004a7e74: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a7e77: mov eax, dword ptr [0x903948] */ r_eax = R32((u32)(0x903948u));
    /* 004a7e7c: mov edx, dword ptr [0x903958] */ r_edx = R32((u32)(0x903958u));
    /* 004a7e82: add ecx, 0x3c8 */ {  u32 a = r_ecx; u32 b = 0x3c8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a7e88: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004a7e8b: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004a7e93: mov dword ptr [esp + 8], 0x42a00000 */ W32((u32)(r_esp+0x8u), 0x42a00000u);
    /* 004a7e9b: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 004a7e9f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004a7ea2: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 004a7eaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a7eab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7eac: call 0x4ab94c */ r_esp -= 4; W32(r_esp, 0x4a7eb1u); f_004ab94c();
    /* 004a7eb1: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a7eb4: ret  */ FN_RET(0x004a7e74); r_esp += 4; return;
}

void f_004a7eb8(void) /* sub_4A7EB8 */
{
    FN_ENTER(0x004a7eb8);
    /* 004a7eb8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a7eb9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004a7ebb: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x4a7ec0u); f_004f7c84();
    /* 004a7ec0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7ec2: je 0x4a7ed1 */ if (fZ) goto L_004a7ed1;
L_004a7ec4:; BB(0x004a7ec4);
    /* 004a7ec4: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004a7ec7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a7ec9: call dword ptr [eax + 0x1b0] */ { u32 t = R32((u32)(r_eax+0x1b0u)); r_esp -= 4; W32(r_esp, 0x4a7ecfu); call_ind(t); }
    /* 004a7ecf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a7ed0: ret  */ FN_RET(0x004a7eb8); r_esp += 4; return;
L_004a7ed1:; BB(0x004a7ed1);
    /* 004a7ed1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a7ed3: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x4a7ed8u); f_008173d0();
    /* 004a7ed8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7eda: je 0x4a8077 */ if (fZ) goto L_004a8077;
L_004a7ee0:; BB(0x004a7ee0);
    /* 004a7ee0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a7ee2: call 0x4a8094 */ r_esp -= 4; W32(r_esp, 0x4a7ee7u); f_004a8094();
    /* 004a7ee7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a7ee9: call 0x4a80a8 */ r_esp -= 4; W32(r_esp, 0x4a7eeeu); f_004a80a8();
    /* 004a7eee: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 004a7ef4: mov edx, dword ptr [ebp + 0x3cc] */ r_edx = R32((u32)(r_ebp+0x3ccu));
    /* 004a7efa: mov dword ptr [ebp + 0x4f0], eax */ W32((u32)(r_ebp+0x4f0u), r_eax);
    /* 004a7f00: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 004a7f06: mov dword ptr [ebp + 0x4f4], edx */ W32((u32)(r_ebp+0x4f4u), r_edx);
    /* 004a7f0c: mov dword ptr [ebp + 0x4f8], eax */ W32((u32)(r_ebp+0x4f8u), r_eax);
    /* 004a7f12: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 004a7f18: mov dword ptr [ebp + 0x4fc], eax */ W32((u32)(r_ebp+0x4fcu), r_eax);
    /* 004a7f1e: mov eax, dword ptr [ebp + 0x3d8] */ r_eax = R32((u32)(r_ebp+0x3d8u));
    /* 004a7f24: mov dword ptr [ebp + 0x500], eax */ W32((u32)(r_ebp+0x500u), r_eax);
    /* 004a7f2a: mov eax, dword ptr [ebp + 0x3dc] */ r_eax = R32((u32)(r_ebp+0x3dcu));
    /* 004a7f30: mov dword ptr [ebp + 0x504], eax */ W32((u32)(r_ebp+0x504u), r_eax);
    /* 004a7f36: mov eax, dword ptr [ebp + 0x3e0] */ r_eax = R32((u32)(r_ebp+0x3e0u));
    /* 004a7f3c: mov dword ptr [ebp + 0x508], eax */ W32((u32)(r_ebp+0x508u), r_eax);
    /* 004a7f42: mov eax, dword ptr [ebp + 0x3e4] */ r_eax = R32((u32)(r_ebp+0x3e4u));
    /* 004a7f48: mov dword ptr [ebp + 0x50c], eax */ W32((u32)(r_ebp+0x50cu), r_eax);
    /* 004a7f4e: mov eax, dword ptr [ebp + 0x3e8] */ r_eax = R32((u32)(r_ebp+0x3e8u));
    /* 004a7f54: mov dword ptr [ebp + 0x510], eax */ W32((u32)(r_ebp+0x510u), r_eax);
    /* 004a7f5a: mov eax, dword ptr [ebp + 0x458] */ r_eax = R32((u32)(r_ebp+0x458u));
    /* 004a7f60: mov dword ptr [ebp + 0x514], eax */ W32((u32)(r_ebp+0x514u), r_eax);
    /* 004a7f66: mov eax, dword ptr [ebp + 0x45c] */ r_eax = R32((u32)(r_ebp+0x45cu));
    /* 004a7f6c: mov dword ptr [ebp + 0x518], eax */ W32((u32)(r_ebp+0x518u), r_eax);
    /* 004a7f72: mov eax, dword ptr [ebp + 0x460] */ r_eax = R32((u32)(r_ebp+0x460u));
    /* 004a7f78: mov dword ptr [ebp + 0x51c], eax */ W32((u32)(r_ebp+0x51cu), r_eax);
    /* 004a7f7e: mov eax, dword ptr [ebp + 0x464] */ r_eax = R32((u32)(r_ebp+0x464u));
    /* 004a7f84: mov dword ptr [ebp + 0x520], eax */ W32((u32)(r_ebp+0x520u), r_eax);
    /* 004a7f8a: mov eax, dword ptr [ebp + 0x468] */ r_eax = R32((u32)(r_ebp+0x468u));
    /* 004a7f90: mov dword ptr [ebp + 0x524], eax */ W32((u32)(r_ebp+0x524u), r_eax);
    /* 004a7f96: mov eax, dword ptr [ebp + 0x46c] */ r_eax = R32((u32)(r_ebp+0x46cu));
    /* 004a7f9c: mov dword ptr [ebp + 0x528], eax */ W32((u32)(r_ebp+0x528u), r_eax);
    /* 004a7fa2: mov eax, dword ptr [ebp + 0x44c] */ r_eax = R32((u32)(r_ebp+0x44cu));
    /* 004a7fa8: mov dword ptr [ebp + 0x52c], eax */ W32((u32)(r_ebp+0x52cu), r_eax);
    /* 004a7fae: mov eax, dword ptr [ebp + 0x450] */ r_eax = R32((u32)(r_ebp+0x450u));
    /* 004a7fb4: mov dword ptr [ebp + 0x530], eax */ W32((u32)(r_ebp+0x530u), r_eax);
    /* 004a7fba: mov eax, dword ptr [ebp + 0x454] */ r_eax = R32((u32)(r_ebp+0x454u));
    /* 004a7fc0: mov dword ptr [ebp + 0x534], eax */ W32((u32)(r_ebp+0x534u), r_eax);
    /* 004a7fc6: mov eax, dword ptr [ebp + 0x3ec] */ r_eax = R32((u32)(r_ebp+0x3ecu));
    /* 004a7fcc: mov dword ptr [ebp + 0x538], eax */ W32((u32)(r_ebp+0x538u), r_eax);
    /* 004a7fd2: mov eax, dword ptr [ebp + 0x3f0] */ r_eax = R32((u32)(r_ebp+0x3f0u));
    /* 004a7fd8: mov dword ptr [ebp + 0x53c], eax */ W32((u32)(r_ebp+0x53cu), r_eax);
    /* 004a7fde: mov eax, dword ptr [ebp + 0x3f4] */ r_eax = R32((u32)(r_ebp+0x3f4u));
    /* 004a7fe4: mov dword ptr [ebp + 0x540], eax */ W32((u32)(r_ebp+0x540u), r_eax);
    /* 004a7fea: mov eax, dword ptr [ebp + 0x404] */ r_eax = R32((u32)(r_ebp+0x404u));
    /* 004a7ff0: mov dword ptr [ebp + 0x544], eax */ W32((u32)(r_ebp+0x544u), r_eax);
    /* 004a7ff6: mov eax, dword ptr [ebp + 0x408] */ r_eax = R32((u32)(r_ebp+0x408u));
    /* 004a7ffc: mov dword ptr [ebp + 0x548], eax */ W32((u32)(r_ebp+0x548u), r_eax);
    /* 004a8002: mov eax, dword ptr [ebp + 0x40c] */ r_eax = R32((u32)(r_ebp+0x40cu));
    /* 004a8008: mov dword ptr [ebp + 0x54c], eax */ W32((u32)(r_ebp+0x54cu), r_eax);
    /* 004a800e: mov eax, dword ptr [ebp + 0x41c] */ r_eax = R32((u32)(r_ebp+0x41cu));
    /* 004a8014: mov dword ptr [ebp + 0x550], eax */ W32((u32)(r_ebp+0x550u), r_eax);
    /* 004a801a: mov eax, dword ptr [ebp + 0x420] */ r_eax = R32((u32)(r_ebp+0x420u));
    /* 004a8020: mov dword ptr [ebp + 0x554], eax */ W32((u32)(r_ebp+0x554u), r_eax);
    /* 004a8026: mov eax, dword ptr [ebp + 0x424] */ r_eax = R32((u32)(r_ebp+0x424u));
    /* 004a802c: mov dword ptr [ebp + 0x558], eax */ W32((u32)(r_ebp+0x558u), r_eax);
    /* 004a8032: mov eax, dword ptr [ebp + 0x434] */ r_eax = R32((u32)(r_ebp+0x434u));
    /* 004a8038: mov dword ptr [ebp + 0x55c], eax */ W32((u32)(r_ebp+0x55cu), r_eax);
    /* 004a803e: mov eax, dword ptr [ebp + 0x438] */ r_eax = R32((u32)(r_ebp+0x438u));
    /* 004a8044: mov dword ptr [ebp + 0x560], eax */ W32((u32)(r_ebp+0x560u), r_eax);
    /* 004a804a: mov eax, dword ptr [ebp + 0x43c] */ r_eax = R32((u32)(r_ebp+0x43cu));
    /* 004a8050: mov dword ptr [ebp + 0x564], eax */ W32((u32)(r_ebp+0x564u), r_eax);
    /* 004a8056: lea ecx, [ebp + 0x588] */ r_ecx = (u32)(r_ebp+0x588u);
    /* 004a805c: call 0x577244 */ r_esp -= 4; W32(r_esp, 0x4a8061u); f_00577244();
    /* 004a8061: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a8063: jne 0x4a806e */ if (!fZ) goto L_004a806e;
L_004a8065:; BB(0x004a8065);
    /* 004a8065: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004a8067: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a8069: call 0x4a814c */ r_esp -= 4; W32(r_esp, 0x4a806eu); f_004a814c();
L_004a806e:; BB(0x004a806e);
    /* 004a806e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a8070: call 0x4a83f4 */ r_esp -= 4; W32(r_esp, 0x4a8075u); f_004a83f4();
    /* 004a8075: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a8076: ret  */ FN_RET(0x004a7eb8); r_esp += 4; return;
L_004a8077:; BB(0x004a8077);
    /* 004a8077: lea ecx, [ebp + 0x588] */ r_ecx = (u32)(r_ebp+0x588u);
    /* 004a807d: call 0x577244 */ r_esp -= 4; W32(r_esp, 0x4a8082u); f_00577244();
    /* 004a8082: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004a8084: je 0x4a808f */ if (fZ) goto L_004a808f;
L_004a8086:; BB(0x004a8086);
    /* 004a8086: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004a8088: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a808a: call 0x4a814c */ r_esp -= 4; W32(r_esp, 0x4a808fu); f_004a814c();
L_004a808f:; BB(0x004a808f);
    /* 004a808f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a8090: ret  */ FN_RET(0x004a7eb8); r_esp += 4; return;
}

