#include "protos.h"

void f_006ca068(void) /* sub_6CA068 */
{
    FN_ENTER(0x006ca068);
    /* 006ca068: mov dword ptr [0xa95ec0], 0x3f800000 */ W32((u32)(0xa95ec0u), 0x3f800000u);
    /* 006ca072: mov dword ptr [0xa95ec4], 0x41000000 */ W32((u32)(0xa95ec4u), 0x41000000u);
    /* 006ca07c: mov dword ptr [0xa95ec8], 0x3fc00000 */ W32((u32)(0xa95ec8u), 0x3fc00000u);
    /* 006ca086: ret  */ FN_RET(0x006ca068); r_esp += 4; return;
}

void f_006ca088(void) /* sub_6CA088 */
{
    FN_ENTER(0x006ca088);
    /* 006ca088: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ca08b: mov ecx, dword ptr [0xa95ee0] */ r_ecx = R32((u32)(0xa95ee0u));
    /* 006ca091: call 0x6c8ab4 */ r_esp -= 4; W32(r_esp, 0x6ca096u); f_006c8ab4();
    /* 006ca096: mov edx, dword ptr [0xa95ee0] */ r_edx = R32((u32)(0xa95ee0u));
    /* 006ca09c: mov dword ptr [0xa95ee4], eax */ W32((u32)(0xa95ee4u), r_eax);
    /* 006ca0a1: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006ca0a4: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ca0a7: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 006ca0a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ca0aa: push 0x96b964 */ { u32 v = 0x96b964u; r_esp -= 4; W32(r_esp, v); }
    /* 006ca0af: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ca0b0: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x6ca0b5u); f_00858bf5();
    /* 006ca0b5: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ca0b8: mov edx, dword ptr [0xa95ee4] */ r_edx = R32((u32)(0xa95ee4u));
    /* 006ca0be: mov byte ptr [esp + 0x40], 0xbb */ W8((u32)(r_esp+0x40u), 0xbbu);
    /* 006ca0c3: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006ca0c8: mov byte ptr [esp + 0x41], 2 */ W8((u32)(r_esp+0x41u), 0x2u);
    /* 006ca0cd: mov word ptr [esp + 0x42], ax */ W16((u32)(r_esp+0x42u), (u16)r_eax);
    /* 006ca0d2: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 006ca0d6: lea ecx, [esp + 0x40] */ r_ecx = (u32)(r_esp+0x40u);
    /* 006ca0da: call 0x800518 */ r_esp -= 4; W32(r_esp, 0x6ca0dfu); f_00800518();
    /* 006ca0df: mov dword ptr [0xa95ee8], 1 */ W32((u32)(0xa95ee8u), 0x1u);
    /* 006ca0e9: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ca0ec: ret  */ FN_RET(0x006ca088); r_esp += 4; return;
}

void f_006ca0f0(void) /* sub_6CA0F0 */
{
    FN_ENTER(0x006ca0f0);
    /* 006ca0f0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ca0f1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006ca0f3: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006ca0f5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ca0f7: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6ca0fau); call_ind(t); }
    /* 006ca0fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ca0fc: jne 0x6ca100 */ if (!fZ) goto L_006ca100;
L_006ca0fe:; BB(0x006ca0fe);
    /* 006ca0fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ca0ff: ret  */ FN_RET(0x006ca0f0); r_esp += 4; return;
L_006ca100:; BB(0x006ca100);
    /* 006ca100: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ca102: call 0x6dc988 */ r_esp -= 4; W32(r_esp, 0x6ca107u); f_006dc988();
    /* 006ca107: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ca109: je 0x6ca122 */ if (fZ) goto L_006ca122;
L_006ca10b:; BB(0x006ca10b);
    /* 006ca10b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ca10d: push dword ptr [0xa95ed0] */ { u32 v = R32((u32)(0xa95ed0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ca113: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006ca115: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ca117: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6ca11au); call_ind(t); }
    /* 006ca11a: mov eax, dword ptr [0xa95ecc] */ r_eax = R32((u32)(0xa95eccu));
    /* 006ca11f: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
L_006ca122:; BB(0x006ca122);
    /* 006ca122: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ca123: ret  */ FN_RET(0x006ca0f0); r_esp += 4; return;
}

void f_006ca124(void) /* sub_6CA124 */
{
    FN_ENTER(0x006ca124);
    /* 006ca124: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ca125: mov ebp, esp */ r_ebp = r_esp;
    /* 006ca127: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ca129: push 0x8ed720 */ { u32 v = 0x8ed720u; r_esp -= 4; W32(r_esp, v); }
    /* 006ca12e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ca134: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ca135: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ca13c: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ca13f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ca142: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006ca145: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006ca148: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006ca14b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006ca14e: mov dword ptr [ebp - 0x34], 0x43a60000 */ W32((u32)(r_ebp+0xffffffccu), 0x43a60000u);
    /* 006ca155: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 006ca157: mov dword ptr [ebp - 0x30], 0x42a00000 */ W32((u32)(r_ebp+0xffffffd0u), 0x42a00000u);
    /* 006ca15e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6ca163u); f_0073ec50();
    /* 006ca163: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ca164: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ca167: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 006ca16a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ca16b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ca16c: call 0x6dc794 */ r_esp -= 4; W32(r_esp, 0x6ca171u); f_006dc794();
    /* 006ca171: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ca174: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ca176: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 006ca178: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006ca17a: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6ca17du); call_ind(t); }
    /* 006ca17d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ca180: call 0x6dc9ec */ r_esp -= 4; W32(r_esp, 0x6ca185u); f_006dc9ec();
    /* 006ca185: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 006ca188: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ca189: call 0x73a33c */ r_esp -= 4; W32(r_esp, 0x6ca18eu); f_0073a33c();
    /* 006ca18e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ca191: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006ca198: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 006ca19b: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 006ca19d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6ca1a2u); f_005caba4();
    /* 006ca1a2: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006ca1a5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ca1a8: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006ca1ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ca1ad: je 0x6ca224 */ if (fZ) goto L_006ca224;
L_006ca1af:; BB(0x006ca1af);
    /* 006ca1af: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006ca1b6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ca1bd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ca1c0: call 0x6dc9ec */ r_esp -= 4; W32(r_esp, 0x6ca1c5u); f_006dc9ec();
    /* 006ca1c5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ca1c8: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006ca1cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ca1cc: call 0x71b668 */ r_esp -= 4; W32(r_esp, 0x6ca1d1u); f_0071b668();
    /* 006ca1d1: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006ca1d8:; BB(0x006ca1d8);
    /* 006ca1d8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ca1db: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ca1de: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 006ca1e1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006ca1e8: mov eax, dword ptr [0xa95ee0] */ r_eax = R32((u32)(0xa95ee0u));
    /* 006ca1ed: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ca1f0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ca1f3: call 0x73f040 */ r_esp -= 4; W32(r_esp, 0x6ca1f8u); f_0073f040();
    /* 006ca1f8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ca1fb: mov dword ptr [ecx + 0x2c], 0 */ W32((u32)(r_ecx+0x2cu), 0x0u);
    /* 006ca202: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006ca204: call 0x6dc62c */ r_esp -= 4; W32(r_esp, 0x6ca209u); f_006dc62c();
    /* 006ca209: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ca20c: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 006ca20f: mov dword ptr [edx + 0x20], 3 */ W32((u32)(r_edx+0x20u), 0x3u);
    /* 006ca216: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ca219: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ca220: mov esp, ebp */ r_esp = r_ebp;
    /* 006ca222: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ca223: ret  */ FN_RET(0x006ca124); r_esp += 4; return;
L_006ca224:; BB(0x006ca224);
    /* 006ca224: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ca226: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006ca229: jmp 0x6ca1d8 */ goto L_006ca1d8;
}

void f_006ca22c(void) /* sub_6CA22C */
{
    FN_ENTER(0x006ca22c);
    /* 006ca22c: mov eax, dword ptr [0xa95ee8] */ r_eax = R32((u32)(0xa95ee8u));
    /* 006ca231: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ca233: je 0x6ca236 */ if (fZ) goto L_006ca236;
L_006ca235:; BB(0x006ca235);
    /* 006ca235: ret  */ FN_RET(0x006ca22c); r_esp += 4; return;
L_006ca236:; BB(0x006ca236);
    /* 006ca236: mov dword ptr [ecx + 0x20], 2 */ W32((u32)(r_ecx+0x20u), 0x2u);
    /* 006ca23d: ret  */ FN_RET(0x006ca22c); r_esp += 4; return;
}

void f_006ca240(void) /* sub_6CA240 */
{
    FN_ENTER(0x006ca240);
    /* 006ca240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ca241: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006ca243: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006ca245: call 0x6dc7d4 */ r_esp -= 4; W32(r_esp, 0x6ca24au); f_006dc7d4();
    /* 006ca24a: call 0x6ca088 */ r_esp -= 4; W32(r_esp, 0x6ca24fu); f_006ca088();
    /* 006ca24f: mov dword ptr [ebp + 0x20], 1 */ W32((u32)(r_ebp+0x20u), 0x1u);
    /* 006ca256: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ca257: ret  */ FN_RET(0x006ca240); r_esp += 4; return;
}

void f_006ca258(void) /* sub_6CA258 */
{
    FN_ENTER(0x006ca258);
    /* 006ca258: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006ca25c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ca25e: je 0x6ca27b */ if (fZ) goto L_006ca27b;
L_006ca260:; BB(0x006ca260);
    /* 006ca260: mov dword ptr [0xa95ed0], 0x46 */ W32((u32)(0xa95ed0u), 0x46u);
    /* 006ca26a: mov dword ptr [0xa95ecc], 3 */ W32((u32)(0xa95eccu), 0x3u);
    /* 006ca274: mov dword ptr [eax + 0x20], 0x11 */ W32((u32)(r_eax+0x20u), 0x11u);
L_006ca27b:; BB(0x006ca27b);
    /* 006ca27b: ret  */ FN_RET(0x006ca258); r_esp += 4; return;
}

void f_006ca27c(void)
{
    FN_ENTER(0x006ca27c);
    /* 006ca27c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006ca280: mov dword ptr [0xa95ed0], 0x46 */ W32((u32)(0xa95ed0u), 0x46u);
    /* 006ca28a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ca28c: mov dword ptr [0xa95ecc], 3 */ W32((u32)(0xa95eccu), 0x3u);
    /* 006ca296: je 0x6ca29f */ if (fZ) goto L_006ca29f;
L_006ca298:; BB(0x006ca298);
    /* 006ca298: mov dword ptr [eax + 0x20], 0x11 */ W32((u32)(r_eax+0x20u), 0x11u);
L_006ca29f:; BB(0x006ca29f);
    /* 006ca29f: ret  */ FN_RET(0x006ca27c); r_esp += 4; return;
}

void f_006ca2a0(void) /* sub_6CA2A0 */
{
    FN_ENTER(0x006ca2a0);
    /* 006ca2a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ca2a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006ca2a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ca2a5: push 0x8ed748 */ { u32 v = 0x8ed748u; r_esp -= 4; W32(r_esp, v); }
    /* 006ca2aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ca2b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ca2b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ca2b8: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ca2bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ca2be: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006ca2c1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006ca2c4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006ca2c7: mov eax, dword ptr [0xa95ee0] */ r_eax = R32((u32)(0xa95ee0u));
    /* 006ca2cc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006ca2cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ca2d1: jne 0x6ca318 */ if (!fZ) goto L_006ca318;
L_006ca2d3:; BB(0x006ca2d3);
    /* 006ca2d3: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006ca2da: push 0x12c8 */ { u32 v = 0x12c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006ca2df: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6ca2e4u); f_008581c5();
    /* 006ca2e4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006ca2e7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ca2ea: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006ca2ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ca2ef: je 0x6ca368 */ if (fZ) goto L_006ca368;
L_006ca2f1:; BB(0x006ca2f1);
    /* 006ca2f1: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 006ca2f8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ca2ff: lea ebx, [eax + 8] */ r_ebx = (u32)(r_eax+0x8u);
    /* 006ca302: mov esi, 0xc8 */ r_esi = 0xc8u;
L_006ca307:; BB(0x006ca307);
    /* 006ca307: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ca309: call 0x6ca398 */ r_esp -= 4; W32(r_esp, 0x6ca30eu); f_006ca398();
    /* 006ca30e: add ebx, 0x18 */ {  u32 a = r_ebx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ca311: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 006ca314: jne 0x6ca307 */ if (!fZ) goto L_006ca307;
L_006ca316:; BB(0x006ca316);
    /* 006ca316: jmp 0x6ca350 */ goto L_006ca350;
L_006ca318:; BB(0x006ca318);
    /* 006ca318: mov ecx, eax */ r_ecx = r_eax;
    /* 006ca31a: call 0x6ca370 */ r_esp -= 4; W32(r_esp, 0x6ca31fu); f_006ca370();
    /* 006ca31f: mov ecx, dword ptr [0xa95ee0] */ r_ecx = R32((u32)(0xa95ee0u));
    /* 006ca325: call 0x6c8ab4 */ r_esp -= 4; W32(r_esp, 0x6ca32au); f_006c8ab4();
    /* 006ca32a: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ca32d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006ca330: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ca333: mov dword ptr [0xa95ee4], eax */ W32((u32)(0xa95ee4u), r_eax);
    /* 006ca338: mov dword ptr [0xa95ee8], 0 */ W32((u32)(0xa95ee8u), 0x0u);
    /* 006ca342: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ca345: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ca34c: mov esp, ebp */ r_esp = r_ebp;
    /* 006ca34e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ca34f: ret  */ FN_RET(0x006ca2a0); r_esp += 4; return;
L_006ca350:; BB(0x006ca350);
    /* 006ca350: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_006ca357:; BB(0x006ca357);
    /* 006ca357: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006ca35a: mov dword ptr [0xa95ee0], eax */ W32((u32)(0xa95ee0u), r_eax);
    /* 006ca35f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006ca366: jmp 0x6ca318 */ goto L_006ca318;
L_006ca368:; BB(0x006ca368);
    /* 006ca368: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ca36a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006ca36d: jmp 0x6ca357 */ goto L_006ca357;
}

void f_006ca370(void) /* sub_6CA370 */
{
    FN_ENTER(0x006ca370);
    /* 006ca370: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ca371: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ca372: mov eax, ecx */ r_eax = r_ecx;
    /* 006ca374: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006ca376: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 006ca378: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 006ca37b: lea ecx, [eax + 8] */ r_ecx = (u32)(r_eax+0x8u);
    /* 006ca37e: add eax, 0x12c8 */ {  u32 a = r_eax; u32 b = 0x12c8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ca383: mov ebx, eax */ r_ebx = r_eax;
    /* 006ca385: mov esi, ecx */ r_esi = r_ecx;
L_006ca387:; BB(0x006ca387);
    /* 006ca387: mov ecx, esi */ r_ecx = r_esi;
    /* 006ca389: call 0x6ca398 */ r_esp -= 4; W32(r_esp, 0x6ca38eu); f_006ca398();
    /* 006ca38e: add esi, 0x18 */ {  u32 a = r_esi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006ca391: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ca393: jg 0x6ca387 */ if ((!fZ&&fS==fO)) goto L_006ca387;
L_006ca395:; BB(0x006ca395);
    /* 006ca395: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ca396: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ca397: ret  */ FN_RET(0x006ca370); r_esp += 4; return;
}

void f_006ca398(void) /* sub_6CA398 */
{
    FN_ENTER(0x006ca398);
    /* 006ca398: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ca399: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006ca39b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ca39d: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6ca3a2u); f_005d6a3c();
    /* 006ca3a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ca3a4: mov word ptr [ebx + 0x14], ax */ W16((u32)(r_ebx+0x14u), (u16)r_eax);
    /* 006ca3a8: mov word ptr [ebx + 0x16], ax */ W16((u32)(r_ebx+0x16u), (u16)r_eax);
    /* 006ca3ac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ca3ad: ret  */ FN_RET(0x006ca398); r_esp += 4; return;
}

void f_006ca3b0(void) /* sub_6CA3B0 */
{
    FN_ENTER(0x006ca3b0);
    /* 006ca3b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ca3b1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006ca3b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ca3b5: call 0x6ca3d4 */ r_esp -= 4; W32(r_esp, 0x6ca3bau); f_006ca3d4();
    /* 006ca3ba: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006ca3be: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ca3c0: jne 0x6ca3c6 */ if (!fZ) goto L_006ca3c6;
L_006ca3c2:; BB(0x006ca3c2);
    /* 006ca3c2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ca3c3: ret 4 */ FN_RET(0x006ca3b0); r_esp += 8; return;
L_006ca3c6:; BB(0x006ca3c6);
    /* 006ca3c6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ca3c7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6ca3ccu); f_005c2f74();
    /* 006ca3cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ca3cd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ca3ce: ret 4 */ FN_RET(0x006ca3b0); r_esp += 8; return;
}

void f_006ca3d4(void) /* sub_6CA3D4 */
{
    FN_ENTER(0x006ca3d4);
    /* 006ca3d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ca3d5: mov ebp, esp */ r_ebp = r_esp;
    /* 006ca3d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ca3d9: push 0x8ed764 */ { u32 v = 0x8ed764u; r_esp -= 4; W32(r_esp, v); }
    /* 006ca3de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ca3e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ca3e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ca3ec: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ca3ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ca3f2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006ca3f5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006ca3f8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006ca3fb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006ca3fe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ca405: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ca408: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006ca40b: mov dword ptr [eax], 0xb3b928 */ W32((u32)(r_eax), 0xb3b928u);
    /* 006ca411: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ca413: je 0x6ca424 */ if (fZ) goto L_006ca424;
L_006ca415:; BB(0x006ca415);
    /* 006ca415: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ca41au); f_007127b0();
    /* 006ca41a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ca41d: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
L_006ca424:; BB(0x006ca424);
    /* 006ca424: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006ca427: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ca429: je 0x6ca43a */ if (fZ) goto L_006ca43a;
L_006ca42b:; BB(0x006ca42b);
    /* 006ca42b: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ca430u); f_007127b0();
    /* 006ca430: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ca433: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_006ca43a:; BB(0x006ca43a);
    /* 006ca43a: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 006ca43d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ca43f: je 0x6ca450 */ if (fZ) goto L_006ca450;
L_006ca441:; BB(0x006ca441);
    /* 006ca441: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ca446u); f_007127b0();
    /* 006ca446: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ca449: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_006ca450:; BB(0x006ca450);
    /* 006ca450: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 006ca453: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ca455: je 0x6ca46e */ if (fZ) goto L_006ca46e;
L_006ca457:; BB(0x006ca457);
    /* 006ca457: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006ca45b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006ca460: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006ca464: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ca467: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_006ca46e:; BB(0x006ca46e);
    /* 006ca46e: mov ecx, eax */ r_ecx = r_eax;
    /* 006ca470: call 0x6dc9fc */ r_esp -= 4; W32(r_esp, 0x6ca475u); f_006dc9fc();
    /* 006ca475: mov dword ptr [eax*4 + 0xa95efc], 0 */ W32((u32)(r_eax*4+0xa95efcu), 0x0u);
    /* 006ca480: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ca483: mov eax, dword ptr [eax + 0x3c] */ r_eax = R32((u32)(r_eax+0x3cu));
    /* 006ca486: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ca488: je 0x6ca491 */ if (fZ) goto L_006ca491;
L_006ca48a:; BB(0x006ca48a);
    /* 006ca48a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ca48b: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6ca490u); f_00857e98();
    /* 006ca490: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006ca491:; BB(0x006ca491);
    /* 006ca491: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ca493: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6ca498u); f_00791748();
    /* 006ca498: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ca499: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006ca4a0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ca4a3: call 0x6dc3a0 */ r_esp -= 4; W32(r_esp, 0x6ca4a8u); f_006dc3a0();
    /* 006ca4a8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ca4ab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ca4b2: mov esp, ebp */ r_esp = r_ebp;
    /* 006ca4b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ca4b5: ret  */ FN_RET(0x006ca3d4); r_esp += 4; return;
}

void f_006ca4b8(void) /* sub_6CA4B8 */
{
    FN_ENTER(0x006ca4b8);
    /* 006ca4b8: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 006ca4bb: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ca4be: ja 0x6ca506 */ if ((!fC&&!fZ)) goto L_006ca506;
L_006ca4c0:; BB(0x006ca4c0);
    /* 006ca4c0: mov eax, dword ptr [eax*4 + 0x96b984] */ r_eax = R32((u32)(r_eax*4+0x96b984u));
    /* 006ca4c7: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006ca506:; BB(0x006ca506);
    /* 006ca506: ret  */ FN_RET(0x006ca4b8); r_esp += 4; return;
}

void f_006ca4c9(void)
{
    FN_ENTER(0x006ca4c9);
    /* 006ca4c9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006ca4cb: call dword ptr [eax + 0x2c] */ { u32 t = R32((u32)(r_eax+0x2cu)); r_esp -= 4; W32(r_esp, 0x6ca4ceu); call_ind(t); }
    /* 006ca4ce: jmp 0x6ca506 */ goto L_006ca506;
L_006ca506:; BB(0x006ca506);
    /* 006ca506: ret  */ FN_RET(0x006ca4c9); r_esp += 4; return;
}

void f_006ca4d0(void)
{
    FN_ENTER(0x006ca4d0);
    /* 006ca4d0: call 0x6ca508 */ r_esp -= 4; W32(r_esp, 0x6ca4d5u); f_006ca508();
    /* 006ca4d5: jmp 0x6ca506 */ goto L_006ca506;
L_006ca506:; BB(0x006ca506);
    /* 006ca506: ret  */ FN_RET(0x006ca4d0); r_esp += 4; return;
}

void f_006ca4d7(void)
{
    FN_ENTER(0x006ca4d7);
    /* 006ca4d7: call 0x6caa90 */ r_esp -= 4; W32(r_esp, 0x6ca4dcu); f_006caa90();
    /* 006ca4dc: jmp 0x6ca506 */ goto L_006ca506;
L_006ca506:; BB(0x006ca506);
    /* 006ca506: ret  */ FN_RET(0x006ca4d7); r_esp += 4; return;
}

void f_006ca4de(void)
{
    FN_ENTER(0x006ca4de);
    /* 006ca4de: call 0x6ca540 */ r_esp -= 4; W32(r_esp, 0x6ca4e3u); f_006ca540();
    /* 006ca4e3: jmp 0x6ca506 */ goto L_006ca506;
L_006ca506:; BB(0x006ca506);
    /* 006ca506: ret  */ FN_RET(0x006ca4de); r_esp += 4; return;
}

void f_006ca4e5(void)
{
    FN_ENTER(0x006ca4e5);
    /* 006ca4e5: call 0x6ca600 */ r_esp -= 4; W32(r_esp, 0x6ca4eau); f_006ca600();
    /* 006ca4ea: jmp 0x6ca506 */ goto L_006ca506;
L_006ca506:; BB(0x006ca506);
    /* 006ca506: ret  */ FN_RET(0x006ca4e5); r_esp += 4; return;
}

void f_006ca4ec(void)
{
    FN_ENTER(0x006ca4ec);
    /* 006ca4ec: call 0x6ca660 */ r_esp -= 4; W32(r_esp, 0x6ca4f1u); f_006ca660();
    /* 006ca4f1: jmp 0x6ca506 */ goto L_006ca506;
L_006ca506:; BB(0x006ca506);
    /* 006ca506: ret  */ FN_RET(0x006ca4ec); r_esp += 4; return;
}

void f_006ca4f3(void)
{
    FN_ENTER(0x006ca4f3);
    /* 006ca4f3: call 0x6ca7a8 */ r_esp -= 4; W32(r_esp, 0x6ca4f8u); f_006ca7a8();
    /* 006ca4f8: jmp 0x6ca506 */ goto L_006ca506;
L_006ca506:; BB(0x006ca506);
    /* 006ca506: ret  */ FN_RET(0x006ca4f3); r_esp += 4; return;
}

void f_006ca4fa(void)
{
    FN_ENTER(0x006ca4fa);
    /* 006ca4fa: call 0x6cab9c */ r_esp -= 4; W32(r_esp, 0x6ca4ffu); f_006cab9c();
    /* 006ca4ff: jmp 0x6ca506 */ goto L_006ca506;
L_006ca506:; BB(0x006ca506);
    /* 006ca506: ret  */ FN_RET(0x006ca4fa); r_esp += 4; return;
}

void f_006ca501(void)
{
    FN_ENTER(0x006ca501);
    /* 006ca501: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006ca503: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x6ca506u); call_ind(t); }
    /* 006ca506: ret  */ FN_RET(0x006ca501); r_esp += 4; return;
}

void f_006ca508(void) /* sub_6CA508 */
{
    FN_ENTER(0x006ca508);
    /* 006ca508: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ca509: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006ca50b: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006ca50d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ca50f: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6ca512u); call_ind(t); }
    /* 006ca512: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ca514: jne 0x6ca518 */ if (!fZ) goto L_006ca518;
L_006ca516:; BB(0x006ca516);
    /* 006ca516: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ca517: ret  */ FN_RET(0x006ca508); r_esp += 4; return;
L_006ca518:; BB(0x006ca518);
    /* 006ca518: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ca51a: call 0x6dc988 */ r_esp -= 4; W32(r_esp, 0x6ca51fu); f_006dc988();
    /* 006ca51f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ca521: jne 0x6ca525 */ if (!fZ) goto L_006ca525;
L_006ca523:; BB(0x006ca523);
    /* 006ca523: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ca524: ret  */ FN_RET(0x006ca508); r_esp += 4; return;
L_006ca525:; BB(0x006ca525);
    /* 006ca525: lea eax, [ebx + 0x40] */ r_eax = (u32)(r_ebx+0x40u);
    /* 006ca528: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ca529: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ca52b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006ca52d: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 006ca52f: call 0x6dc5fc */ r_esp -= 4; W32(r_esp, 0x6ca534u); f_006dc5fc();
    /* 006ca534: mov dword ptr [ebx + 0x20], 8 */ W32((u32)(r_ebx+0x20u), 0x8u);
    /* 006ca53b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ca53c: ret  */ FN_RET(0x006ca508); r_esp += 4; return;
}

void f_006ca540(void) /* sub_6CA540 */
{
    FN_ENTER(0x006ca540);
    /* 006ca540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ca541: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ca544: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006ca546: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ca548: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 006ca54c: mov byte ptr [esp], 0xd9 */ W8((u32)(r_esp), 0xd9u);
    /* 006ca550: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 006ca554: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 006ca558: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6ca55du); f_005d6a3c();
    /* 006ca55d: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 006ca561: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6ca566u); f_005d6a3c();
    /* 006ca566: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 006ca569: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ca56b: mov word ptr [esp + 0x34], ax */ W16((u32)(r_esp+0x34u), (u16)r_eax);
    /* 006ca570: mov word ptr [esp + 0x36], ax */ W16((u32)(r_esp+0x36u), (u16)r_eax);
    /* 006ca575: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6ca57au); f_00737d90();
    /* 006ca57a: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 006ca57d: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 006ca580: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006ca584: mov edx, dword ptr [ebp + 0x44] */ r_edx = R32((u32)(r_ebp+0x44u));
    /* 006ca587: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006ca58b: mov edx, dword ptr [ebp + 0x48] */ r_edx = R32((u32)(r_ebp+0x48u));
    /* 006ca58e: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 006ca592: mov edx, dword ptr [ebp + 0x4c] */ r_edx = R32((u32)(r_ebp+0x4cu));
    /* 006ca595: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006ca599: mov edx, dword ptr [ebp + 0x50] */ r_edx = R32((u32)(r_ebp+0x50u));
    /* 006ca59c: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 006ca5a0: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006ca5a3: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 006ca5a6: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006ca5aa: mov eax, dword ptr [ecx + edx*4 + 4] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x4u));
    /* 006ca5ae: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006ca5b2: mov eax, dword ptr [ecx + edx*4 + 8] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x8u));
    /* 006ca5b6: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 006ca5ba: mov eax, dword ptr [ecx + edx*4 + 0xc] */ r_eax = R32((u32)(r_ecx+r_edx*4+0xcu));
    /* 006ca5be: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 006ca5c2: mov eax, dword ptr [ecx + edx*4 + 0x10] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x10u));
    /* 006ca5c6: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 006ca5ca: mov edx, dword ptr [ecx + edx*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_edx*4+0x10u));
    /* 006ca5ce: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 006ca5d3: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006ca5d6: xor edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006ca5d8: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 006ca5dc: xor eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ca5df: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 006ca5e3: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6ca5e8u); f_008003e0();
    /* 006ca5e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ca5ea: call 0x859d2d */ r_esp -= 4; W32(r_esp, 0x6ca5efu); f_00859d2d();
    /* 006ca5ef: mov dword ptr [ebp + 0x20], 6 */ W32((u32)(r_ebp+0x20u), 0x6u);
    /* 006ca5f6: mov dword ptr [ebp + 0x5c], eax */ W32((u32)(r_ebp+0x5cu), r_eax);
    /* 006ca5f9: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ca5fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ca5fd: ret  */ FN_RET(0x006ca540); r_esp += 4; return;
}

void f_006ca600(void) /* sub_6CA600 */
{
    FN_ENTER(0x006ca600);
    /* 006ca600: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006ca601: mov edi, ecx */ r_edi = r_ecx;
    /* 006ca603: lea eax, [edi + 0x40] */ r_eax = (u32)(r_edi+0x40u);
    /* 006ca606: mov ecx, edi */ r_ecx = r_edi;
    /* 006ca608: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ca609: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ca60b: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 006ca60d: call 0x6dc5fc */ r_esp -= 4; W32(r_esp, 0x6ca612u); f_006dc5fc();
    /* 006ca612: mov edx, dword ptr [edi + 0x2c] */ r_edx = R32((u32)(r_edi+0x2cu));
    /* 006ca615: mov dword ptr [edi + 0x20], 8 */ W32((u32)(r_edi+0x20u), 0x8u);
    /* 006ca61c: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006ca623: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 006ca626: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006ca62b: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006ca632: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ca634: je 0x6ca63d */ if (fZ) goto L_006ca63d;
L_006ca636:; BB(0x006ca636);
    /* 006ca636: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ca638: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6ca63du); f_00760acc();
L_006ca63d:; BB(0x006ca63d);
    /* 006ca63d: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006ca640: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ca645u); f_007127b0();
    /* 006ca645: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 006ca648: mov dword ptr [edi + 0x2c], 0 */ W32((u32)(r_edi+0x2cu), 0x0u);
    /* 006ca64f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ca654u); f_007127b0();
    /* 006ca654: mov dword ptr [edi + 0x30], 0 */ W32((u32)(r_edi+0x30u), 0x0u);
    /* 006ca65b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006ca65c: ret  */ FN_RET(0x006ca600); r_esp += 4; return;
}

void f_006ca660(void) /* sub_6CA660 */
{
    FN_ENTER(0x006ca660);
    /* 006ca660: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ca661: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006ca662: mov esi, ecx */ r_esi = r_ecx;
    /* 006ca664: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 006ca667: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ca669: je 0x6ca758 */ if (fZ) goto L_006ca758;
L_006ca66f:; BB(0x006ca66f);
    /* 006ca66f: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006ca676: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ca678: je 0x6ca6b9 */ if (fZ) goto L_006ca6b9;
L_006ca67a:; BB(0x006ca67a);
    /* 006ca67a: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6ca67fu); f_007365f4();
    /* 006ca67f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ca681: je 0x6ca68e */ if (fZ) goto L_006ca68e;
L_006ca683:; BB(0x006ca683);
    /* 006ca683: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ca686: je 0x6ca711 */ if (fZ) goto L_006ca711;
L_006ca68c:; BB(0x006ca68c);
    /* 006ca68c: jmp 0x6ca6a7 */ goto L_006ca6a7;
L_006ca68e:; BB(0x006ca68e);
    /* 006ca68e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ca690: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ca691: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ca692: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ca693: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 006ca698: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6ca69du); f_00814298();
    /* 006ca69d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ca6a0: mov dword ptr [esi + 0x20], 5 */ W32((u32)(r_esi+0x20u), 0x5u);
L_006ca6a7:; BB(0x006ca6a7);
    /* 006ca6a7: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 006ca6aa: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ca6afu); f_007127b0();
    /* 006ca6af: mov dword ptr [esi + 0x34], 0 */ W32((u32)(r_esi+0x34u), 0x0u);
    /* 006ca6b6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ca6b7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ca6b8: ret  */ FN_RET(0x006ca660); r_esp += 4; return;
L_006ca6b9:; BB(0x006ca6b9);
    /* 006ca6b9: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ca6bb: je 0x6ca70e */ if (fZ) goto L_006ca70e;
L_006ca6bd:; BB(0x006ca6bd);
    /* 006ca6bd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ca6bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ca6c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ca6c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ca6c2: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 006ca6c7: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6ca6ccu); f_00814298();
    /* 006ca6cc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ca6cf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ca6d1: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 006ca6d3: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006ca6d5: mov ecx, esi */ r_ecx = r_esi;
    /* 006ca6d7: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6ca6dau); call_ind(t); }
    /* 006ca6da: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 006ca6dd: mov dword ptr [esi + 0x20], 1 */ W32((u32)(r_esi+0x20u), 0x1u);
    /* 006ca6e4: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ca6e9u); f_007127b0();
    /* 006ca6e9: mov ecx, dword ptr [esi + 0x2c] */ r_ecx = R32((u32)(r_esi+0x2cu));
    /* 006ca6ec: mov dword ptr [esi + 0x34], 0 */ W32((u32)(r_esi+0x34u), 0x0u);
    /* 006ca6f3: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ca6f8u); f_007127b0();
    /* 006ca6f8: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 006ca6fb: mov dword ptr [esi + 0x2c], 0 */ W32((u32)(r_esi+0x2cu), 0x0u);
    /* 006ca702: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ca707u); f_007127b0();
    /* 006ca707: mov dword ptr [esi + 0x30], 0 */ W32((u32)(r_esi+0x30u), 0x0u);
L_006ca70e:; BB(0x006ca70e);
    /* 006ca70e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ca70f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ca710: ret  */ FN_RET(0x006ca660); r_esp += 4; return;
L_006ca711:; BB(0x006ca711);
    /* 006ca711: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ca713: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ca714: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ca715: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ca716: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 006ca71b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6ca720u); f_00814298();
    /* 006ca720: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ca723: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ca725: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 006ca727: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006ca729: mov ecx, esi */ r_ecx = r_esi;
    /* 006ca72b: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6ca72eu); call_ind(t); }
    /* 006ca72e: mov ecx, dword ptr [esi + 0x2c] */ r_ecx = R32((u32)(r_esi+0x2cu));
    /* 006ca731: mov dword ptr [esi + 0x20], 1 */ W32((u32)(r_esi+0x20u), 0x1u);
    /* 006ca738: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ca73du); f_007127b0();
    /* 006ca73d: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 006ca740: mov dword ptr [esi + 0x2c], 0 */ W32((u32)(r_esi+0x2cu), 0x0u);
    /* 006ca747: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6ca74cu); f_007127b0();
    /* 006ca74c: mov dword ptr [esi + 0x30], 0 */ W32((u32)(r_esi+0x30u), 0x0u);
    /* 006ca753: jmp 0x6ca6a7 */ goto L_006ca6a7;
L_006ca758:; BB(0x006ca758);
    /* 006ca758: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006ca75a: push 0x52 */ { u32 v = 0x52u; r_esp -= 4; W32(r_esp, v); }
    /* 006ca75c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006ca75e: mov ecx, esi */ r_ecx = r_esi;
    /* 006ca760: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6ca763u); call_ind(t); }
    /* 006ca763: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006ca765: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6ca76au); f_0073ec50();
    /* 006ca76a: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 006ca76d: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006ca771: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ca772: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ca773: call 0x735884 */ r_esp -= 4; W32(r_esp, 0x6ca778u); f_00735884();
    /* 006ca778: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ca77b: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 006ca77e: mov ecx, esi */ r_ecx = r_esi;
    /* 006ca780: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6ca785u); f_006dc8d8();
    /* 006ca785: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006ca788: mov ecx, esi */ r_ecx = r_esi;
    /* 006ca78a: call 0x6dc8d8 */ r_esp -= 4; W32(r_esp, 0x6ca78fu); f_006dc8d8();
    /* 006ca78f: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 006ca792: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ca795: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006ca799: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006ca79c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006ca7a0: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6ca7a5u); f_0070f5a4();
    /* 006ca7a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ca7a6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006ca7a7: ret  */ FN_RET(0x006ca660); r_esp += 4; return;
}

void f_006ca7a8(void) /* sub_6CA7A8 */
{
    FN_ENTER(0x006ca7a8);
    /* 006ca7a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ca7a9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ca7aa: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006ca7ac: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006ca7af: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006ca7b1: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6ca7b4u); call_ind(t); }
    /* 006ca7b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ca7b6: jne 0x6ca7bb */ if (!fZ) goto L_006ca7bb;
L_006ca7b8:; BB(0x006ca7b8);
    /* 006ca7b8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ca7b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ca7ba: ret  */ FN_RET(0x006ca7a8); r_esp += 4; return;
L_006ca7bb:; BB(0x006ca7bb);
    /* 006ca7bb: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 006ca7be: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006ca7c5: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ca7c7: je 0x6ca7e5 */ if (fZ) goto L_006ca7e5;
L_006ca7c9:; BB(0x006ca7c9);
    /* 006ca7c9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ca7cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ca7cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ca7cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ca7ce: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 006ca7d3: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6ca7d8u); f_00814298();
    /* 006ca7d8: mov dword ptr [ebp + 0x20], 4 */ W32((u32)(r_ebp+0x20u), 0x4u);
    /* 006ca7df: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ca7e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ca7e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ca7e4: ret  */ FN_RET(0x006ca7a8); r_esp += 4; return;
L_006ca7e5:; BB(0x006ca7e5);
    /* 006ca7e5: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ca7e7: je 0x6ca805 */ if (fZ) goto L_006ca805;
L_006ca7e9:; BB(0x006ca7e9);
    /* 006ca7e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ca7eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ca7ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ca7ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ca7ee: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 006ca7f3: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6ca7f8u); f_00814298();
    /* 006ca7f8: mov dword ptr [ebp + 0x20], 3 */ W32((u32)(r_ebp+0x20u), 0x3u);
    /* 006ca7ff: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006ca802: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ca803: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ca804: ret  */ FN_RET(0x006ca7a8); r_esp += 4; return;
L_006ca805:; BB(0x006ca805);
    /* 006ca805: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6ca80au); f_00737d90();
    /* 006ca80a: mov ebx, eax */ r_ebx = r_eax;
    /* 006ca80c: mov edx, dword ptr [ebp + 0x54] */ r_edx = R32((u32)(r_ebp+0x54u));
    /* 006ca80f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ca811: jbe 0x6ca82e */ if ((fC||fZ)) goto L_006ca82e;
L_006ca813:; BB(0x006ca813);
    /* 006ca813: cmp ebx, dword ptr [ebp + 0x58] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0x58u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ca816: je 0x6ca82e */ if (fZ) goto L_006ca82e;
L_006ca818:; BB(0x006ca818);
    /* 006ca818: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 006ca81b: lea edx, [ebx + ebx*4] */ r_edx = (u32)(r_ebx+r_ebx*4);
    /* 006ca81e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ca820: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ca822: add edx, dword ptr [ebp + 0x3c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x3cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ca825: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ca826: call 0x725fa8 */ r_esp -= 4; W32(r_esp, 0x6ca82bu); f_00725fa8();
    /* 006ca82b: mov dword ptr [ebp + 0x58], ebx */ W32((u32)(r_ebp+0x58u), r_ebx);
L_006ca82e:; BB(0x006ca82e);
    /* 006ca82e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ca82f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ca830: ret  */ FN_RET(0x006ca7a8); r_esp += 4; return;
}

void f_006ca834(void) /* sub_6CA834 */
{
    FN_ENTER(0x006ca834);
    /* 006ca834: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ca836: mov dword ptr [0xa95efc], eax */ W32((u32)(0xa95efcu), r_eax);
    /* 006ca83b: mov dword ptr [0xa95f00], eax */ W32((u32)(0xa95f00u), r_eax);
    /* 006ca840: mov dword ptr [0xa95f04], eax */ W32((u32)(0xa95f04u), r_eax);
    /* 006ca845: mov dword ptr [0xa95f08], eax */ W32((u32)(0xa95f08u), r_eax);
    /* 006ca84a: ret  */ FN_RET(0x006ca834); r_esp += 4; return;
}

void f_006ca84c(void) /* sub_6CA84C */
{
    FN_ENTER(0x006ca84c);
    /* 006ca84c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ca84d: mov ebp, esp */ r_ebp = r_esp;
    /* 006ca84f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006ca851: push 0x8ed780 */ { u32 v = 0x8ed780u; r_esp -= 4; W32(r_esp, v); }
    /* 006ca856: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006ca85c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ca85d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006ca864: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ca867: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006ca86a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006ca86d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006ca870: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006ca873: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006ca876: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006ca879: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006ca87c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006ca87f: call 0x6dc410 */ r_esp -= 4; W32(r_esp, 0x6ca884u); f_006dc410();
    /* 006ca884: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ca88b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ca88e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ca891: mov dword ptr [ecx], 0xb3b928 */ W32((u32)(r_ecx), 0xb3b928u);
    /* 006ca897: mov eax, dword ptr [0x9cece0] */ r_eax = R32((u32)(0x9cece0u));
    /* 006ca89c: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006ca89f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006ca8a1: mov dword ptr [ecx + 0x20], ebx */ W32((u32)(r_ecx+0x20u), r_ebx);
    /* 006ca8a4: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 006ca8a7: mov dword ptr [ecx + 0x2c], ebx */ W32((u32)(r_ecx+0x2cu), r_ebx);
    /* 006ca8aa: mov dword ptr [ecx + 0x30], ebx */ W32((u32)(r_ecx+0x30u), r_ebx);
    /* 006ca8ad: mov dword ptr [ecx + 0x34], ebx */ W32((u32)(r_ecx+0x34u), r_ebx);
    /* 006ca8b0: mov dword ptr [ecx + 0x38], ebx */ W32((u32)(r_ecx+0x38u), r_ebx);
    /* 006ca8b3: call 0x6dc9fc */ r_esp -= 4; W32(r_esp, 0x6ca8b8u); f_006dc9fc();
    /* 006ca8b8: mov dword ptr [eax*4 + 0xa95efc], 1 */ W32((u32)(r_eax*4+0xa95efcu), 0x1u);
    /* 006ca8c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006ca8c5: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6ca8cau); f_00791748();
    /* 006ca8ca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ca8cb: mov eax, dword ptr [0xa95aa8] */ r_eax = R32((u32)(0xa95aa8u));
    /* 006ca8d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ca8d2: je 0x6caa34 */ if (fZ) goto L_006caa34;
L_006ca8d8:; BB(0x006ca8d8);
    /* 006ca8d8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ca8db: mov ebx, dword ptr [eax + 0x19c] */ r_ebx = R32((u32)(r_eax+0x19cu));
    /* 006ca8e1: mov dword ptr [ecx + 0x54], 0 */ W32((u32)(r_ecx+0x54u), 0x0u);
    /* 006ca8e8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006ca8ea: lea eax, [ebx + 0x42c] */ r_eax = (u32)(r_ebx+0x42cu);
    /* 006ca8f0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006ca8f2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ca8f4: jne 0x6ca904 */ if (!fZ) goto L_006ca904;
L_006ca8f6:; BB(0x006ca8f6);
    /* 006ca8f6: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006ca8f9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ca8fb: jne 0x6ca904 */ if (!fZ) goto L_006ca904;
L_006ca8fd:; BB(0x006ca8fd);
    /* 006ca8fd: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 006ca900: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ca902: je 0x6ca936 */ if (fZ) goto L_006ca936;
L_006ca904:; BB(0x006ca904);
    /* 006ca904: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ca906: je 0x6caa00 */ if (fZ) goto L_006caa00;
L_006ca90c:; BB(0x006ca90c);
    /* 006ca90c: add dword ptr [ecx + 0x54], 1 */ { u32 ad = (u32)(r_ecx+0x54u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_006ca910:; BB(0x006ca910);
    /* 006ca910: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006ca913: cmp esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006ca916: jge 0x6ca936 */ if ((fS==fO)) goto L_006ca936;
L_006ca918:; BB(0x006ca918);
    /* 006ca918: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 006ca91b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ca91d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ca91f: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006ca921: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ca923: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ca925: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ca927: lea eax, [ebx + eax + 0x42c] */ r_eax = (u32)(r_ebx+r_eax+0x42cu);
    /* 006ca92e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006ca930: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ca932: je 0x6ca8f6 */ if (fZ) goto L_006ca8f6;
L_006ca934:; BB(0x006ca934);
    /* 006ca934: jmp 0x6ca904 */ goto L_006ca904;
L_006ca936:; BB(0x006ca936);
    /* 006ca936: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 006ca939: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ca93b: ja 0x6ca958 */ if ((!fC&&!fZ)) goto L_006ca958;
L_006ca93d:; BB(0x006ca93d);
    /* 006ca93d: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ca940: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006ca943: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ca946: mov eax, ecx */ r_eax = r_ecx;
    /* 006ca948: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ca94b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ca952: mov esp, ebp */ r_esp = r_ebp;
    /* 006ca954: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ca955: ret 8 */ FN_RET(0x006ca84c); r_esp += 12; return;
L_006ca958:; BB(0x006ca958);
    /* 006ca958: lea eax, [edx + edx*4] */ r_eax = (u32)(r_edx+r_edx*4);
    /* 006ca95b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ca95d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ca95f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ca960: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6ca965u); f_008581c5();
    /* 006ca965: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ca966: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ca969: mov esi, dword ptr [ecx + 0x54] */ r_esi = R32((u32)(r_ecx+0x54u));
    /* 006ca96c: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 006ca96f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006ca971: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ca973: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006ca976: jbe 0x6ca93d */ if ((fC||fZ)) goto L_006ca93d;
L_006ca978:; BB(0x006ca978);
    /* 006ca978: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 006ca97b: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 006ca97e: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006ca980: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006ca982: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006ca984: lea edi, [edi + edi*4] */ r_edi = (u32)(r_edi+r_edi*4);
    /* 006ca987: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 006ca98a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ca98c: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ca98e: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6ca993u); f_005d6a3c();
    /* 006ca993: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ca996: mov ecx, dword ptr [ebx + esi*8 + 0x464] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x464u));
    /* 006ca99d: mov eax, dword ptr [eax + 0x3c] */ r_eax = R32((u32)(r_eax+0x3cu));
    /* 006ca9a0: mov byte ptr [eax + edi*4], cl */ W8((u32)(r_eax+r_edi*4), (u8)r_ecx);
    /* 006ca9a3: mov edx, dword ptr [ebx + esi*8 + 0x468] */ r_edx = R32((u32)(r_ebx+r_esi*8+0x468u));
    /* 006ca9aa: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ca9ad: mov eax, dword ptr [eax + 0x3c] */ r_eax = R32((u32)(r_eax+0x3cu));
    /* 006ca9b0: mov byte ptr [eax + edi*4 + 1], dl */ W8((u32)(r_eax+r_edi*4+0x1u), (u8)r_edx);
    /* 006ca9b4: mov eax, dword ptr [ebx + esi*8 + 0x46c] */ r_eax = R32((u32)(r_ebx+r_esi*8+0x46cu));
    /* 006ca9bb: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ca9be: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 006ca9c1: mov byte ptr [edx + edi*4 + 2], al */ W8((u32)(r_edx+r_edi*4+0x2u), (u8)r_eax);
    /* 006ca9c5: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ca9c8: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 006ca9cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ca9cd: je 0x6ca9d8 */ if (fZ) goto L_006ca9d8;
L_006ca9cf:; BB(0x006ca9cf);
    /* 006ca9cf: mov edx, dword ptr [edx + 0x3c] */ r_edx = R32((u32)(r_edx+0x3cu));
    /* 006ca9d2: mov dword ptr [edx + edi*4 + 0x10], eax */ W32((u32)(r_edx+r_edi*4+0x10u), r_eax);
    /* 006ca9d6: jmp 0x6ca9e3 */ goto L_006ca9e3;
L_006ca9d8:; BB(0x006ca9d8);
    /* 006ca9d8: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 006ca9db: mov dword ptr [eax + edi*4 + 0x10], 1 */ W32((u32)(r_eax+r_edi*4+0x10u), 0x1u);
L_006ca9e3:; BB(0x006ca9e3);
    /* 006ca9e3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ca9e6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ca9e9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006ca9ec: cmp edx, dword ptr [ecx + 0x54] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x54u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006ca9ef: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006ca9f2: jae 0x6ca93d */ if (!fC) goto L_006ca93d;
L_006ca9f8:; BB(0x006ca9f8);
    /* 006ca9f8: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 006ca9fb: jmp 0x6ca978 */ goto L_006ca978;
L_006caa00:; BB(0x006caa00);
    /* 006caa00: add ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006caa03: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6caa08u); f_005d6a3c();
    /* 006caa08: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006caa0b: mov edx, dword ptr [ebx + 0x42c] */ r_edx = R32((u32)(r_ebx+0x42cu));
    /* 006caa11: mov byte ptr [ecx + 0x40], dl */ W8((u32)(r_ecx+0x40u), (u8)r_edx);
    /* 006caa14: mov edx, dword ptr [ebx + 0x430] */ r_edx = R32((u32)(r_ebx+0x430u));
    /* 006caa1a: mov byte ptr [ecx + 0x41], dl */ W8((u32)(r_ecx+0x41u), (u8)r_edx);
    /* 006caa1d: mov edx, dword ptr [ebx + 0x434] */ r_edx = R32((u32)(r_ebx+0x434u));
    /* 006caa23: mov byte ptr [ecx + 0x42], dl */ W8((u32)(r_ecx+0x42u), (u8)r_edx);
    /* 006caa26: mov edi, dword ptr [ebx + 0x440] */ r_edi = R32((u32)(r_ebx+0x440u));
    /* 006caa2c: mov dword ptr [ecx + 0x50], edi */ W32((u32)(r_ecx+0x50u), r_edi);
    /* 006caa2f: jmp 0x6ca910 */ goto L_006ca910;
L_006caa34:; BB(0x006caa34);
    /* 006caa34: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006caa37: jmp 0x6ca93d */ goto L_006ca93d;
}

void f_006caa3c(void) /* sub_6CAA3C */
{
    FN_ENTER(0x006caa3c);
    /* 006caa3c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006caa3d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006caa3f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006caa41: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006caa43: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6caa46u); call_ind(t); }
    /* 006caa46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006caa48: jne 0x6caa4c */ if (!fZ) goto L_006caa4c;
L_006caa4a:; BB(0x006caa4a);
    /* 006caa4a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006caa4b: ret  */ FN_RET(0x006caa3c); r_esp += 4; return;
L_006caa4c:; BB(0x006caa4c);
    /* 006caa4c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006caa4e: call 0x6dc988 */ r_esp -= 4; W32(r_esp, 0x6caa53u); f_006dc988();
    /* 006caa53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006caa55: jne 0x6caa59 */ if (!fZ) goto L_006caa59;
L_006caa57:; BB(0x006caa57);
    /* 006caa57: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006caa58: ret  */ FN_RET(0x006caa3c); r_esp += 4; return;
L_006caa59:; BB(0x006caa59);
    /* 006caa59: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006caa5b: call 0x6dc4b0 */ r_esp -= 4; W32(r_esp, 0x6caa60u); f_006dc4b0();
    /* 006caa60: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006caa64: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006caa69: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006caa6d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006caa6e: ret  */ FN_RET(0x006caa3c); r_esp += 4; return;
}

void f_006caa70(void) /* sub_6CAA70 */
{
    FN_ENTER(0x006caa70);
    /* 006caa70: mov dword ptr [0xa95ef0], 0x3f800000 */ W32((u32)(0xa95ef0u), 0x3f800000u);
    /* 006caa7a: mov dword ptr [0xa95ef4], 0x41000000 */ W32((u32)(0xa95ef4u), 0x41000000u);
    /* 006caa84: mov dword ptr [0xa95ef8], 0x3fc00000 */ W32((u32)(0xa95ef8u), 0x3fc00000u);
    /* 006caa8e: ret  */ FN_RET(0x006caa70); r_esp += 4; return;
}

void f_006caa90(void) /* sub_6CAA90 */
{
    FN_ENTER(0x006caa90);
    /* 006caa90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006caa91: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006caa93: mov eax, dword ptr [0xa95f10] */ r_eax = R32((u32)(0xa95f10u));
    /* 006caa98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006caa9a: je 0x6cab32 */ if (fZ) goto L_006cab32;
L_006caaa0:; BB(0x006caaa0);
    /* 006caaa0: mov eax, dword ptr [0xa95f0c] */ r_eax = R32((u32)(0xa95f0cu));
    /* 006caaa5: mov dword ptr [0xa95f10], 0 */ W32((u32)(0xa95f10u), 0x0u);
    /* 006caaaf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006caab1: je 0x6caaff */ if (fZ) goto L_006caaff;
L_006caab3:; BB(0x006caab3);
    /* 006caab3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006caab6: jne 0x6caad0 */ if (!fZ) goto L_006caad0;
L_006caab8:; BB(0x006caab8);
    /* 006caab8: lea eax, [ebp + 0x40] */ r_eax = (u32)(r_ebp+0x40u);
    /* 006caabb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006caabc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006caabe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006caac0: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 006caac2: call 0x6dc5fc */ r_esp -= 4; W32(r_esp, 0x6caac7u); f_006dc5fc();
    /* 006caac7: mov dword ptr [ebp + 0x20], 7 */ W32((u32)(r_ebp+0x20u), 0x7u);
    /* 006caace: jmp 0x6cab12 */ goto L_006cab12;
L_006caad0:; BB(0x006caad0);
    /* 006caad0: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006caad3: jne 0x6caaea */ if (!fZ) goto L_006caaea;
L_006caad5:; BB(0x006caad5);
    /* 006caad5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006caad7: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 006caad9: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006caadc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006caade: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6caae1u); call_ind(t); }
    /* 006caae1: mov dword ptr [ebp + 0x20], 7 */ W32((u32)(r_ebp+0x20u), 0x7u);
    /* 006caae8: jmp 0x6cab12 */ goto L_006cab12;
L_006caaea:; BB(0x006caaea);
    /* 006caaea: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006caaec: push 0x56 */ { u32 v = 0x56u; r_esp -= 4; W32(r_esp, v); }
    /* 006caaee: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006caaf1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006caaf3: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6caaf6u); call_ind(t); }
    /* 006caaf6: mov dword ptr [ebp + 0x20], 8 */ W32((u32)(r_ebp+0x20u), 0x8u);
    /* 006caafd: jmp 0x6cab12 */ goto L_006cab12;
L_006caaff:; BB(0x006caaff);
    /* 006caaff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cab01: push 0x53 */ { u32 v = 0x53u; r_esp -= 4; W32(r_esp, v); }
    /* 006cab03: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006cab06: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006cab08: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6cab0bu); call_ind(t); }
    /* 006cab0b: mov dword ptr [ebp + 0x20], 7 */ W32((u32)(r_ebp+0x20u), 0x7u);
L_006cab12:; BB(0x006cab12);
    /* 006cab12: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 006cab15: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cab1au); f_007127b0();
    /* 006cab1a: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 006cab1d: mov dword ptr [ebp + 0x2c], 0 */ W32((u32)(r_ebp+0x2cu), 0x0u);
    /* 006cab24: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cab29u); f_007127b0();
    /* 006cab29: mov dword ptr [ebp + 0x30], 0 */ W32((u32)(r_ebp+0x30u), 0x0u);
L_006cab30:; BB(0x006cab30);
    /* 006cab30: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cab31: ret  */ FN_RET(0x006caa90); r_esp += 4; return;
L_006cab32:; BB(0x006cab32);
    /* 006cab32: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006cab34: call 0x859d2d */ r_esp -= 4; W32(r_esp, 0x6cab39u); f_00859d2d();
    /* 006cab39: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cab3a: mov edx, dword ptr [ebp + 0x5c] */ r_edx = R32((u32)(r_ebp+0x5cu));
    /* 006cab3d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006cab3f: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006cab42: jbe 0x6cab30 */ if ((fC||fZ)) goto L_006cab30;
L_006cab44:; BB(0x006cab44);
    /* 006cab44: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cab46: push 0x57 */ { u32 v = 0x57u; r_esp -= 4; W32(r_esp, v); }
    /* 006cab48: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006cab4b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006cab4d: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6cab50u); call_ind(t); }
    /* 006cab50: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 006cab53: mov dword ptr [ebp + 0x20], 8 */ W32((u32)(r_ebp+0x20u), 0x8u);
    /* 006cab5a: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006cab61: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 006cab64: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006cab69: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006cab70: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cab72: je 0x6cab7b */ if (fZ) goto L_006cab7b;
L_006cab74:; BB(0x006cab74);
    /* 006cab74: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cab76: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6cab7bu); f_00760acc();
L_006cab7b:; BB(0x006cab7b);
    /* 006cab7b: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 006cab7e: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cab83u); f_007127b0();
    /* 006cab83: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 006cab86: mov dword ptr [ebp + 0x2c], 0 */ W32((u32)(r_ebp+0x2cu), 0x0u);
    /* 006cab8d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6cab92u); f_007127b0();
    /* 006cab92: mov dword ptr [ebp + 0x30], 0 */ W32((u32)(r_ebp+0x30u), 0x0u);
    /* 006cab99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cab9a: ret  */ FN_RET(0x006caa90); r_esp += 4; return;
}

void f_006cab9c(void) /* sub_6CAB9C */
{
    FN_ENTER(0x006cab9c);
    /* 006cab9c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cab9d: mov ebp, esp */ r_ebp = r_esp;
    /* 006cab9f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006caba1: push 0x8ed7a8 */ { u32 v = 0x8ed7a8u; r_esp -= 4; W32(r_esp, v); }
    /* 006caba6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006cabac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cabad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006cabb4: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cabb7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006cabba: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006cabbd: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006cabc0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006cabc3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006cabc5: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006cabc8: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x6cabcbu); call_ind(t); }
    /* 006cabcb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cabcd: jne 0x6cabdd */ if (!fZ) goto L_006cabdd;
L_006cabcf:; BB(0x006cabcf);
    /* 006cabcf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cabd2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cabd9: mov esp, ebp */ r_esp = r_ebp;
    /* 006cabdb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cabdc: ret  */ FN_RET(0x006cab9c); r_esp += 4; return;
L_006cabdd:; BB(0x006cabdd);
    /* 006cabdd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cabe0: call 0x6dc988 */ r_esp -= 4; W32(r_esp, 0x6cabe5u); f_006dc988();
    /* 006cabe5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cabe7: je 0x6cabcf */ if (fZ) goto L_006cabcf;
L_006cabe9:; BB(0x006cabe9);
    /* 006cabe9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006cabec: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 006cabef: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cabf1: je 0x6cacbc */ if (fZ) goto L_006cacbc;
L_006cabf7:; BB(0x006cabf7);
    /* 006cabf7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006cabfa: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006cabfd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cabff: je 0x6cac32 */ if (fZ) goto L_006cac32;
L_006cac01:; BB(0x006cac01);
    /* 006cac01: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cac04: lea eax, [ecx + 0x40] */ r_eax = (u32)(r_ecx+0x40u);
    /* 006cac07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cac08: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cac0a: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 006cac0c: call 0x6dc5fc */ r_esp -= 4; W32(r_esp, 0x6cac11u); f_006dc5fc();
    /* 006cac11: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006cac14: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006cac17: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006cac1a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006cac1d: mov dword ptr [eax + 0x20], 2 */ W32((u32)(r_eax+0x20u), 0x2u);
    /* 006cac24: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cac27: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cac2e: mov esp, ebp */ r_esp = r_ebp;
    /* 006cac30: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cac31: ret  */ FN_RET(0x006cab9c); r_esp += 4; return;
L_006cac32:; BB(0x006cac32);
    /* 006cac32: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006cac39: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 006cac3e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6cac43u); f_005caba4();
    /* 006cac43: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006cac46: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cac49: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006cac4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cac4e: je 0x6cacb5 */ if (fZ) goto L_006cacb5;
L_006cac50:; BB(0x006cac50);
    /* 006cac50: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006cac57: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006cac5e: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 006cac60: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6cac65u); f_0073ec50();
    /* 006cac65: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cac66: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cac69: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006cac6c: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 006cac6f: movzx esi, word ptr [ebx + 0x1c] */ r_esi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006cac73: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006cac74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cac75: call 0x725d18 */ r_esp -= 4; W32(r_esp, 0x6cac7au); f_00725d18();
    /* 006cac7a: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006cac81:; BB(0x006cac81);
    /* 006cac81: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006cac84: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cac87: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 006cac8a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006cac91: mov eax, edx */ r_eax = r_edx;
    /* 006cac93: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 006cac96: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006cac98: jbe 0x6cac01 */ if ((fC||fZ)) goto L_006cac01;
L_006cac9e:; BB(0x006cac9e);
    /* 006cac9e: push dword ptr [eax + 0x3c] */ { u32 v = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006caca1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006caca4: mov dword ptr [eax + 0x58], 0 */ W32((u32)(r_eax+0x58u), 0x0u);
    /* 006cacab: call 0x725fa8 */ r_esp -= 4; W32(r_esp, 0x6cacb0u); f_00725fa8();
    /* 006cacb0: jmp 0x6cac01 */ goto L_006cac01;
L_006cacb5:; BB(0x006cacb5);
    /* 006cacb5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006cacb7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006cacba: jmp 0x6cac81 */ goto L_006cac81;
L_006cacbc:; BB(0x006cacbc);
    /* 006cacbc: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 006cacbe: call 0x6dbdb8 */ r_esp -= 4; W32(r_esp, 0x6cacc3u); f_006dbdb8();
    /* 006cacc3: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cacc6: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 006cacc9: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006caccd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006cacce: push dword ptr [ebx + 0x54] */ { u32 v = R32((u32)(r_ebx+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cacd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cacd2: call 0x73ff34 */ r_esp -= 4; W32(r_esp, 0x6cacd7u); f_0073ff34();
    /* 006cacd7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cacda: mov edx, ebx */ r_edx = r_ebx;
    /* 006cacdc: mov esi, dword ptr [edx + 0x54] */ r_esi = R32((u32)(r_edx+0x54u));
    /* 006cacdf: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 006cace2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006cace4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006cace6: jbe 0x6cad11 */ if ((fC||fZ)) goto L_006cad11;
L_006cace8:; BB(0x006cace8);
    /* 006cace8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006caceb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006cacec: lea esi, [ebx + ebx*4] */ r_esi = (u32)(r_ebx+r_ebx*4);
    /* 006cacef: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006cacf1: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006cacf3: add esi, dword ptr [edx + 0x3c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx+0x3cu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006cacf6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006cacf7: mov ecx, eax */ r_ecx = r_eax;
    /* 006cacf9: call 0x7375a4 */ r_esp -= 4; W32(r_esp, 0x6cacfeu); f_007375a4();
    /* 006cacfe: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006cad01: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006cad04: cmp ebx, dword ptr [eax + 0x54] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x54u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006cad07: jae 0x6cad0e */ if (!fC) goto L_006cad0e;
L_006cad09:; BB(0x006cad09);
    /* 006cad09: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 006cad0c: jmp 0x6cace8 */ goto L_006cace8;
L_006cad0e:; BB(0x006cad0e);
    /* 006cad0e: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
L_006cad11:; BB(0x006cad11);
    /* 006cad11: mov ecx, eax */ r_ecx = r_eax;
    /* 006cad13: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x6cad18u); f_00737cdc();
    /* 006cad18: jmp 0x6cabf7 */ goto L_006cabf7;
}

void f_006cad20(void) /* sub_6CAD20 */
{
    FN_ENTER(0x006cad20);
    /* 006cad20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cad21: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cad24: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006cad26: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006cad28: call 0x6dc7d4 */ r_esp -= 4; W32(r_esp, 0x6cad2du); f_006dc7d4();
    /* 006cad2d: mov dword ptr [esp], 0x43a60000 */ W32((u32)(r_esp), 0x43a60000u);
    /* 006cad34: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006cad36: mov dword ptr [ebp + 0x5c], eax */ W32((u32)(r_ebp+0x5cu), r_eax);
    /* 006cad39: mov dword ptr [0xa95f10], eax */ W32((u32)(0xa95f10u), r_eax);
    /* 006cad3e: mov dword ptr [esp + 4], 0x42a00000 */ W32((u32)(r_esp+0x4u), 0x42a00000u);
    /* 006cad46: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 006cad48: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6cad4du); f_0073ec50();
    /* 006cad4d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cad4e: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006cad51: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006cad52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cad53: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006cad55: call 0x6dc794 */ r_esp -= 4; W32(r_esp, 0x6cad5au); f_006dc794();
    /* 006cad5a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006cad5c: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 006cad5e: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006cad61: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006cad63: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x6cad66u); call_ind(t); }
    /* 006cad66: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 006cad68: call 0x4d5ff0 */ r_esp -= 4; W32(r_esp, 0x6cad6du); f_004d5ff0();
    /* 006cad6d: mov dword ptr [ebp + 0x20], 1 */ W32((u32)(r_ebp+0x20u), 0x1u);
    /* 006cad74: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 006cad77: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006cad7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cad7b: ret  */ FN_RET(0x006cad20); r_esp += 4; return;
}

void f_006cad7c(void) /* sub_6CAD7C */
{
    FN_ENTER(0x006cad7c);
    /* 006cad7c: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x6cad81u); f_007a61a4();
    /* 006cad81: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cad84: je 0x6cada1 */ if (fZ) goto L_006cada1;
L_006cad86:; BB(0x006cad86);
    /* 006cad86: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x6cad8bu); f_007a61a4();
    /* 006cad8b: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006cad8e: je 0x6cad91 */ if (fZ) goto L_006cad91;
L_006cad90:; BB(0x006cad90);
    /* 006cad90: ret  */ FN_RET(0x006cad7c); r_esp += 4; return;
L_006cad91:; BB(0x006cad91);
    /* 006cad91: call 0x6ce088 */ r_esp -= 4; W32(r_esp, 0x6cad96u); f_006ce088();
    /* 006cad96: call 0x6ce208 */ r_esp -= 4; W32(r_esp, 0x6cad9bu); f_006ce208();
    /* 006cad9b: call 0x6cc92c */ r_esp -= 4; W32(r_esp, 0x6cada0u); f_006cc92c();
    /* 006cada0: ret  */ FN_RET(0x006cad7c); r_esp += 4; return;
L_006cada1:; BB(0x006cada1);
    /* 006cada1: mov dword ptr [0xa95f24], 0 */ W32((u32)(0xa95f24u), 0x0u);
    /* 006cadab: call 0x6cc1d4 */ r_esp -= 4; W32(r_esp, 0x6cadb0u); f_006cc1d4();
    /* 006cadb0: jmp 0x6cad86 */ goto L_006cad86;
}

void f_006cadb4(void) /* sub_6CADB4 */
{
    FN_ENTER(0x006cadb4);
    /* 006cadb4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006cadb5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cadb6: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cadb9: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x6cadbeu); f_007a61a4();
    /* 006cadbe: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cadc1: je 0x6cae1d */ if (fZ) goto L_006cae1d;
L_006cadc3:; BB(0x006cadc3);
    /* 006cadc3: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x6cadc8u); f_007a61a4();
    /* 006cadc8: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cadcb: jne 0x6cae15 */ if (!fZ) goto L_006cae15;
L_006cadcd:; BB(0x006cadcd);
    /* 006cadcd: mov eax, dword ptr [0xaab1f4] */ r_eax = R32((u32)(0xaab1f4u));
    /* 006cadd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cadd4: je 0x6cade1 */ if (fZ) goto L_006cade1;
L_006cadd6:; BB(0x006cadd6);
    /* 006cadd6: mov eax, 1 */ r_eax = 0x1u;
    /* 006caddb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006cadde: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006caddf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cade0: ret  */ FN_RET(0x006cadb4); r_esp += 4; return;
L_006cade1:; BB(0x006cade1);
    /* 006cade1: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006cade5: mov edx, dword ptr [eax*4 + 0xa96050] */ r_edx = R32((u32)(r_eax*4+0xa96050u));
    /* 006cadec: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cadee: je 0x6cadfb */ if (fZ) goto L_006cadfb;
L_006cadf0:; BB(0x006cadf0);
    /* 006cadf0: mov eax, 1 */ r_eax = 0x1u;
    /* 006cadf5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006cadf8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cadf9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cadfa: ret  */ FN_RET(0x006cadb4); r_esp += 4; return;
L_006cadfb:; BB(0x006cadfb);
    /* 006cadfb: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006cadff: mov edx, dword ptr [eax*4 + 0xa9603c] */ r_edx = R32((u32)(r_eax*4+0xa9603cu));
    /* 006cae06: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cae08: je 0x6cae15 */ if (fZ) goto L_006cae15;
L_006cae0a:; BB(0x006cae0a);
    /* 006cae0a: mov eax, 1 */ r_eax = 0x1u;
    /* 006cae0f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006cae12: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cae13: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cae14: ret  */ FN_RET(0x006cadb4); r_esp += 4; return;
L_006cae15:; BB(0x006cae15);
    /* 006cae15: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006cae17: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006cae1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cae1b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cae1c: ret  */ FN_RET(0x006cadb4); r_esp += 4; return;
L_006cae1d:; BB(0x006cae1d);
    /* 006cae1d: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6cae22u); f_006dc358();
    /* 006cae22: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cae25: je 0x6cae38 */ if (fZ) goto L_006cae38;
L_006cae27:; BB(0x006cae27);
    /* 006cae27: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 006cae2b: mov eax, dword ptr [edx*4 + 0xa95f54] */ r_eax = R32((u32)(r_edx*4+0xa95f54u));
    /* 006cae32: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006cae35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cae36: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cae37: ret  */ FN_RET(0x006cadb4); r_esp += 4; return;
L_006cae38:; BB(0x006cae38);
    /* 006cae38: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x6cae3du); f_0078b1c4();
    /* 006cae3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cae3f: jne 0x6cae4c */ if (!fZ) goto L_006cae4c;
L_006cae41:; BB(0x006cae41);
    /* 006cae41: mov eax, 1 */ r_eax = 0x1u;
    /* 006cae46: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006cae49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cae4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cae4b: ret  */ FN_RET(0x006cadb4); r_esp += 4; return;
L_006cae4c:; BB(0x006cae4c);
    /* 006cae4c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006cae4e: call 0x4d30cc */ r_esp -= 4; W32(r_esp, 0x6cae53u); f_004d30cc();
    /* 006cae53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006cae54: movzx ebp, ax */ r_ebp = (u32)(u16)r_eax;
    /* 006cae57: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006cae5b: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cae5d: je 0x6cae6a */ if (fZ) goto L_006cae6a;
L_006cae5f:; BB(0x006cae5f);
    /* 006cae5f: mov eax, 1 */ r_eax = 0x1u;
    /* 006cae64: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006cae67: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cae68: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cae69: ret  */ FN_RET(0x006cadb4); r_esp += 4; return;
L_006cae6a:; BB(0x006cae6a);
    /* 006cae6a: mov eax, dword ptr [0xa95f24] */ r_eax = R32((u32)(0xa95f24u));
    /* 006cae6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cae71: je 0x6cae7e */ if (fZ) goto L_006cae7e;
L_006cae73:; BB(0x006cae73);
    /* 006cae73: mov eax, 1 */ r_eax = 0x1u;
    /* 006cae78: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006cae7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cae7c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006cae7d: ret  */ FN_RET(0x006cadb4); r_esp += 4; return;
L_006cae7e:; BB(0x006cae7e);
    /* 006cae7e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cae7f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6cae84u); f_0068d5a8();
    /* 006cae84: mov edx, eax */ r_edx = r_eax;
    /* 006cae86: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cae89: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cae8b: je 0x6cafac */ if (fZ) goto L_006cafac;
L_006cae91:; BB(0x006cae91);
    /* 006cae91: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006cae95: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006cae98: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006cae9a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006cae9c: mov ebx, eax */ r_ebx = r_eax;
    /* 006cae9e: mov esi, edx */ r_esi = r_edx;
L_006caea0:; BB(0x006caea0);
    /* 006caea0: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006caea2: jne 0x6caf84 */ if (!fZ) goto L_006caf84;
L_006caea8:; BB(0x006caea8);
    /* 006caea8: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006caeab: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006caeae: jl 0x6caea0 */ if ((fS!=fO)) goto L_006caea0;
L_006caeb0:; BB(0x006caeb0);
    /* 006caeb0: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 006caeb4: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006caeb8: mov edx, esi */ r_edx = r_esi;
    /* 006caeba: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 006caebd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006caebf: mov ebx, eax */ r_ebx = r_eax;
    /* 006caec1: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006caec4: mov esi, edx */ r_esi = r_edx;
L_006caec6:; BB(0x006caec6);
    /* 006caec6: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006caec8: jne 0x6caf4c */ if (!fZ) goto L_006caf4c;
L_006caece:; BB(0x006caece);
    /* 006caece: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006caed1: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006caed4: jl 0x6caec6 */ if ((fS!=fO)) goto L_006caec6;
L_006caed6:; BB(0x006caed6);
    /* 006caed6: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 006caeda: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_006caedd:; BB(0x006caedd);
    /* 006caedd: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006caedf: je 0x6cae27 */ if (fZ) goto L_006cae27;
L_006caee5:; BB(0x006caee5);
    /* 006caee5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006caee6: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6caeebu); f_0068d5a8();
    /* 006caeeb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006caeec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006caeee: je 0x6caf16 */ if (fZ) goto L_006caf16;
L_006caef0:; BB(0x006caef0);
    /* 006caef0: mov ecx, eax */ r_ecx = r_eax;
    /* 006caef2: call 0x694780 */ r_esp -= 4; W32(r_esp, 0x6caef7u); f_00694780();
    /* 006caef7: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 006caefd: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006caf00: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006caf02: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006caf04: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006caf06: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006caf0d: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6caf12u); f_007c1160();
    /* 006caf12: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006caf14: jne 0x6caf21 */ if (!fZ) goto L_006caf21;
L_006caf16:; BB(0x006caf16);
    /* 006caf16: mov eax, 1 */ r_eax = 0x1u;
    /* 006caf1b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006caf1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006caf1f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006caf20: ret  */ FN_RET(0x006cadb4); r_esp += 4; return;
L_006caf21:; BB(0x006caf21);
    /* 006caf21: mov eax, dword ptr [0xa95f24] */ r_eax = R32((u32)(0xa95f24u));
    /* 006caf26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006caf28: jne 0x6caf16 */ if (!fZ) goto L_006caf16;
L_006caf2a:; BB(0x006caf2a);
    /* 006caf2a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006caf2c: jle 0x6caf16 */ if ((fZ||fS!=fO)) goto L_006caf16;
L_006caf2e:; BB(0x006caf2e);
    /* 006caf2e: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006caf31: jle 0x6caf42 */ if ((fZ||fS!=fO)) goto L_006caf42;
L_006caf33:; BB(0x006caf33);
    /* 006caf33: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006caf36: jne 0x6caf16 */ if (!fZ) goto L_006caf16;
L_006caf38:; BB(0x006caf38);
    /* 006caf38: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006caf3a: call 0x6cb714 */ r_esp -= 4; W32(r_esp, 0x6caf3fu); f_006cb714();
    /* 006caf3f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006caf40: jmp 0x6caf16 */ goto L_006caf16;
L_006caf42:; BB(0x006caf42);
    /* 006caf42: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006caf44: call 0x6cb714 */ r_esp -= 4; W32(r_esp, 0x6caf49u); f_006cb714();
    /* 006caf49: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006caf4a: jmp 0x6caf16 */ goto L_006caf16;
L_006caf4c:; BB(0x006caf4c);
    /* 006caf4c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006caf4d: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6caf52u); f_0068d5a8();
    /* 006caf52: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006caf53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006caf55: je 0x6caece */ if (fZ) goto L_006caece;
L_006caf5b:; BB(0x006caf5b);
    /* 006caf5b: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 006caf5e: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006caf61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006caf62: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006caf63: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x6caf68u); f_0078ea50();
    /* 006caf68: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006caf6b: fcomp dword ptr [0x96b9bc] */ fx_compare(ST(0), R_F32((u32)(0x96b9bcu))); FPOP();
    /* 006caf71: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006caf73: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006caf74: jbe 0x6caece */ if ((fC||fZ)) goto L_006caece;
L_006caf7a:; BB(0x006caf7a);
    /* 006caf7a: mov edi, 2 */ r_edi = 0x2u;
    /* 006caf7f: jmp 0x6caece */ goto L_006caece;
L_006caf84:; BB(0x006caf84);
    /* 006caf84: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006caf85: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6caf8au); f_0068d5a8();
    /* 006caf8a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006caf8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006caf8d: je 0x6caea8 */ if (fZ) goto L_006caea8;
L_006caf93:; BB(0x006caf93);
    /* 006caf93: mov ecx, eax */ r_ecx = r_eax;
    /* 006caf95: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6caf9au); f_00689410();
    /* 006caf9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006caf9c: je 0x6caea8 */ if (fZ) goto L_006caea8;
L_006cafa2:; BB(0x006cafa2);
    /* 006cafa2: mov edi, 3 */ r_edi = 0x3u;
    /* 006cafa7: jmp 0x6caea8 */ goto L_006caea8;
L_006cafac:; BB(0x006cafac);
    /* 006cafac: mov edi, 1 */ r_edi = 0x1u;
    /* 006cafb1: jmp 0x6caedd */ goto L_006caedd;
}

void f_006cafb8(void) /* sub_6CAFB8 */
{
    FN_ENTER(0x006cafb8);
    /* 006cafb8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006cafb9: mov ebp, esp */ r_ebp = r_esp;
    /* 006cafbb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006cafbd: push 0x8ed806 */ { u32 v = 0x8ed806u; r_esp -= 4; W32(r_esp, v); }
    /* 006cafc2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006cafc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cafc9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006cafd0: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006cafd3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006cafd6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006cafd9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006cafdc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006cafdf: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x6cafe4u); f_007a61a4();
    /* 006cafe4: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cafe7: je 0x6cb0e1 */ if (fZ) goto L_006cb0e1;
L_006cafed:; BB(0x006cafed);
    /* 006cafed: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x6caff2u); f_007a61a4();
    /* 006caff2: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006caff5: jne 0x6cb0c0 */ if (!fZ) goto L_006cb0c0;
L_006caffb:; BB(0x006caffb);
    /* 006caffb: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 006cb000: cmp eax, dword ptr [0xa9c4dc] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cb006: jne 0x6cb066 */ if (!fZ) goto L_006cb066;
L_006cb008:; BB(0x006cb008);
    /* 006cb008: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006cb00f: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 006cb011: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6cb016u); f_005caba4();
    /* 006cb016: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006cb019: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cb01c: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006cb01f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cb021: je 0x6cb0d0 */ if (fZ) goto L_006cb0d0;
L_006cb027:; BB(0x006cb027);
    /* 006cb027: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 006cb02e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006cb035: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006cb038: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cb03b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cb03c: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cb042: call 0x6cd830 */ r_esp -= 4; W32(r_esp, 0x6cb047u); f_006cd830();
    /* 006cb047: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_006cb04e:; BB(0x006cb04e);
    /* 006cb04e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006cb051: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
    /* 006cb058: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cb05b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cb062: mov esp, ebp */ r_esp = r_ebp;
    /* 006cb064: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cb065: ret  */ FN_RET(0x006cafb8); r_esp += 4; return;
L_006cb066:; BB(0x006cb066);
    /* 006cb066: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006cb06d: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 006cb06f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6cb074u); f_005caba4();
    /* 006cb074: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006cb077: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cb07a: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006cb07d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cb07f: je 0x6cb0da */ if (fZ) goto L_006cb0da;
L_006cb081:; BB(0x006cb081);
    /* 006cb081: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006cb088: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006cb08f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006cb092: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cb095: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cb096: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cb09c: call 0x6cde48 */ r_esp -= 4; W32(r_esp, 0x6cb0a1u); f_006cde48();
    /* 006cb0a1: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006cb0a8:; BB(0x006cb0a8);
    /* 006cb0a8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006cb0ab: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
    /* 006cb0b2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cb0b5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cb0bc: mov esp, ebp */ r_esp = r_ebp;
    /* 006cb0be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cb0bf: ret  */ FN_RET(0x006cafb8); r_esp += 4; return;
L_006cb0c0:; BB(0x006cb0c0);
    /* 006cb0c0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cb0c2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cb0c5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cb0cc: mov esp, ebp */ r_esp = r_ebp;
    /* 006cb0ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cb0cf: ret  */ FN_RET(0x006cafb8); r_esp += 4; return;
L_006cb0d0:; BB(0x006cb0d0);
    /* 006cb0d0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cb0d2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006cb0d5: jmp 0x6cb04e */ goto L_006cb04e;
L_006cb0da:; BB(0x006cb0da);
    /* 006cb0da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cb0dc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006cb0df: jmp 0x6cb0a8 */ goto L_006cb0a8;
L_006cb0e1:; BB(0x006cb0e1);
    /* 006cb0e1: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006cb0e8: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 006cb0ea: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6cb0efu); f_005caba4();
    /* 006cb0ef: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006cb0f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006cb0f5: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006cb0f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006cb0fa: je 0x6cb134 */ if (fZ) goto L_006cb134;
L_006cb0fc:; BB(0x006cb0fc);
    /* 006cb0fc: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 006cb103: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006cb10a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006cb10d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006cb110: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006cb111: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006cb117: call 0x6cc320 */ r_esp -= 4; W32(r_esp, 0x6cb11cu); f_006cc320();
    /* 006cb11c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_006cb123:; BB(0x006cb123);
    /* 006cb123: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006cb126: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006cb129: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006cb130: mov esp, ebp */ r_esp = r_ebp;
    /* 006cb132: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006cb133: ret  */ FN_RET(0x006cafb8); r_esp += 4; return;
L_006cb134:; BB(0x006cb134);
    /* 006cb134: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006cb136: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006cb139: jmp 0x6cb123 */ goto L_006cb123;
}

