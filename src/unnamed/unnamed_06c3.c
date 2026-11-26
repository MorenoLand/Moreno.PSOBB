#include "protos.h"

void f_006c306a(void)
{
    FN_ENTER(0x006c306a);
    /* 006c306a: sbb al, 0x89 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x89u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006c306c: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c306d: and al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006c306f: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 006c3073: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 006c3077: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 006c307b: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 006c307f: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 006c3083: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 006c3087: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 006c308b: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 006c308f: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006c3093: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 006c3097: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 006c309b: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 006c309f: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 006c30a3: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 006c30a7: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 006c30ab: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 006c30af: lea esi, [esp + 4] */ r_esi = (u32)(r_esp+0x4u);
    /* 006c30b3: mov edi, 0x9ceb2c */ r_edi = 0x9ceb2cu;
L_006c30b8:; BB(0x006c30b8);
    /* 006c30b8: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 006c30ba: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006c30bd: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 006c30bf: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c30c2: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c30c4: jne 0x6c30b8 */ if (!fZ) goto L_006c30b8;
L_006c30c6:; BB(0x006c30c6);
    /* 006c30c6: lea esi, [esp + 0x16] */ r_esi = (u32)(r_esp+0x16u);
    /* 006c30ca: mov edi, 0x9ceae8 */ r_edi = 0x9ceae8u;
L_006c30cf:; BB(0x006c30cf);
    /* 006c30cf: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 006c30d1: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006c30d4: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 006c30d6: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c30d9: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c30db: jne 0x6c30cf */ if (!fZ) goto L_006c30cf;
L_006c30dd:; BB(0x006c30dd);
    /* 006c30dd: mov esi, 0xa95e6c */ r_esi = 0xa95e6cu;
    /* 006c30e2: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006c30e4: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 006c30e7: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 006c30ea: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 006c30ed: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 006c30f1: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 006c30f5: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 006c30f9: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 006c30fd: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 006c3101: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006c3103: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c3104: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6c3109u); f_0061cdb0();
    /* 006c3109: mov ecx, dword ptr [0xa95e44] */ r_ecx = R32((u32)(0xa95e44u));
    /* 006c310f: mov dword ptr [esp + 0x68], 0xbaa4 */ W32((u32)(r_esp+0x68u), 0xbaa4u);
    /* 006c3117: mov eax, 1 */ r_eax = 0x1u;
    /* 006c311c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006c311e: mov word ptr [esp + 0x58], ax */ W16((u32)(r_esp+0x58u), (u16)r_eax);
    /* 006c3123: mov word ptr [esp + 0x5a], ax */ W16((u32)(r_esp+0x5au), (u16)r_eax);
    /* 006c3128: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 006c312c: mov word ptr [esp + 0x60], dx */ W16((u32)(r_esp+0x60u), (u16)r_edx);
    /* 006c3131: mov dword ptr [esp + 0x64], ecx */ W32((u32)(r_esp+0x64u), r_ecx);
    /* 006c3135: lea esi, [esp + 0xc] */ r_esi = (u32)(r_esp+0xcu);
    /* 006c3139: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c313a: push dword ptr [0xa95e2c] */ { u32 v = R32((u32)(0xa95e2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c3140: call 0x82c34c */ r_esp -= 4; W32(r_esp, 0x6c3145u); f_0082c34c();
    /* 006c3145: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 006c3149: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c314a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6c314fu); f_0061cdb0();
    /* 006c314f: add esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c3152: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c3153: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c3154: ret  */ FN_RET(0x006c306a); r_esp += 4; return;
}

void f_006c3079(void)
{
    FN_ENTER(0x006c3079);
    /* 006c3079: and al, 0x2c */ {  u32 a = (u8)r_eax; u32 b = 0x2cu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006c307b: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 006c307f: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 006c3083: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 006c3087: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 006c308b: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 006c308f: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006c3093: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 006c3097: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 006c309b: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 006c309f: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 006c30a3: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 006c30a7: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 006c30ab: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 006c30af: lea esi, [esp + 4] */ r_esi = (u32)(r_esp+0x4u);
    /* 006c30b3: mov edi, 0x9ceb2c */ r_edi = 0x9ceb2cu;
L_006c30b8:; BB(0x006c30b8);
    /* 006c30b8: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 006c30ba: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006c30bd: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 006c30bf: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c30c2: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c30c4: jne 0x6c30b8 */ if (!fZ) goto L_006c30b8;
L_006c30c6:; BB(0x006c30c6);
    /* 006c30c6: lea esi, [esp + 0x16] */ r_esi = (u32)(r_esp+0x16u);
    /* 006c30ca: mov edi, 0x9ceae8 */ r_edi = 0x9ceae8u;
L_006c30cf:; BB(0x006c30cf);
    /* 006c30cf: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 006c30d1: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006c30d4: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 006c30d6: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c30d9: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c30db: jne 0x6c30cf */ if (!fZ) goto L_006c30cf;
L_006c30dd:; BB(0x006c30dd);
    /* 006c30dd: mov esi, 0xa95e6c */ r_esi = 0xa95e6cu;
    /* 006c30e2: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006c30e4: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 006c30e7: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 006c30ea: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 006c30ed: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 006c30f1: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 006c30f5: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 006c30f9: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 006c30fd: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 006c3101: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006c3103: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c3104: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6c3109u); f_0061cdb0();
    /* 006c3109: mov ecx, dword ptr [0xa95e44] */ r_ecx = R32((u32)(0xa95e44u));
    /* 006c310f: mov dword ptr [esp + 0x68], 0xbaa4 */ W32((u32)(r_esp+0x68u), 0xbaa4u);
    /* 006c3117: mov eax, 1 */ r_eax = 0x1u;
    /* 006c311c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006c311e: mov word ptr [esp + 0x58], ax */ W16((u32)(r_esp+0x58u), (u16)r_eax);
    /* 006c3123: mov word ptr [esp + 0x5a], ax */ W16((u32)(r_esp+0x5au), (u16)r_eax);
    /* 006c3128: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 006c312c: mov word ptr [esp + 0x60], dx */ W16((u32)(r_esp+0x60u), (u16)r_edx);
    /* 006c3131: mov dword ptr [esp + 0x64], ecx */ W32((u32)(r_esp+0x64u), r_ecx);
    /* 006c3135: lea esi, [esp + 0xc] */ r_esi = (u32)(r_esp+0xcu);
    /* 006c3139: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c313a: push dword ptr [0xa95e2c] */ { u32 v = R32((u32)(0xa95e2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c3140: call 0x82c34c */ r_esp -= 4; W32(r_esp, 0x6c3145u); f_0082c34c();
    /* 006c3145: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 006c3149: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c314a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6c314fu); f_0061cdb0();
    /* 006c314f: add esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c3152: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c3153: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c3154: ret  */ FN_RET(0x006c3079); r_esp += 4; return;
}

void f_006c3149(void)
{
    FN_ENTER(0x006c3149);
    /* 006c3149: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c314a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6c314fu); f_0061cdb0();
    /* 006c314f: add esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c3152: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c3153: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c3154: ret  */ FN_RET(0x006c3149); r_esp += 4; return;
}

void f_006c3158(void) /* sub_6C3158 */
{
    FN_ENTER(0x006c3158);
    /* 006c3158: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c3159: mov eax, dword ptr [0xa95df0] */ r_eax = R32((u32)(0xa95df0u));
    /* 006c315e: mov edx, 0xffff0000 */ r_edx = 0xffff0000u;
    /* 006c3163: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c3165: je 0x6c31bf */ if (fZ) goto L_006c31bf;
L_006c3167:; BB(0x006c3167);
    /* 006c3167: mov eax, dword ptr [0xa95de0] */ r_eax = R32((u32)(0xa95de0u));
    /* 006c316c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c316e: jne 0x6c31bf */ if (!fZ) goto L_006c31bf;
L_006c3170:; BB(0x006c3170);
    /* 006c3170: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c3175u); f_00415cec();
    /* 006c3175: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c3178: mov dword ptr [0xa95dcc], eax */ W32((u32)(0xa95dccu), r_eax);
    /* 006c317d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c317e: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c3183u); f_006dc358();
    /* 006c3183: mov edx, eax */ r_edx = r_eax;
    /* 006c3185: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c3188: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c318a: jne 0x6c31bf */ if (!fZ) goto L_006c31bf;
L_006c318c:; BB(0x006c318c);
    /* 006c318c: push 0x9ceb0c */ { u32 v = 0x9ceb0cu; r_esp -= 4; W32(r_esp, v); }
    /* 006c3191: push dword ptr [0xa95dcc] */ { u32 v = R32((u32)(0xa95dccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c3197: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x6c319cu); f_0082c198();
    /* 006c319c: mov edx, eax */ r_edx = r_eax;
    /* 006c319e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c31a1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c31a3: jne 0x6c31bf */ if (!fZ) goto L_006c31bf;
L_006c31a5:; BB(0x006c31a5);
    /* 006c31a5: mov eax, dword ptr [0xa95dcc] */ r_eax = R32((u32)(0xa95dccu));
    /* 006c31aa: call 0x6c31e4 */ r_esp -= 4; W32(r_esp, 0x6c31afu); f_006c31e4();
    /* 006c31af: mov edx, eax */ r_edx = r_eax;
    /* 006c31b1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c31b3: jne 0x6c31bf */ if (!fZ) goto L_006c31bf;
L_006c31b5:; BB(0x006c31b5);
    /* 006c31b5: mov dword ptr [0xa95de0], 0x10 */ W32((u32)(0xa95de0u), 0x10u);
L_006c31bf:; BB(0x006c31bf);
    /* 006c31bf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c31c1: jne 0x6c31cf */ if (!fZ) goto L_006c31cf;
L_006c31c3:; BB(0x006c31c3);
    /* 006c31c3: mov dword ptr [0xa95da8], 1 */ W32((u32)(0xa95da8u), 0x1u);
    /* 006c31cd: jmp 0x6c31d9 */ goto L_006c31d9;
L_006c31cf:; BB(0x006c31cf);
    /* 006c31cf: mov dword ptr [0xa95da8], 0 */ W32((u32)(0xa95da8u), 0x0u);
L_006c31d9:; BB(0x006c31d9);
    /* 006c31d9: mov eax, edx */ r_eax = r_edx;
    /* 006c31db: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c31dc: ret  */ FN_RET(0x006c3158); r_esp += 4; return;
}

void f_006c316a(void)
{
    FN_ENTER(0x006c316a);
    /* 006c316a: test eax, 0x75c08500 */ {  u32 a = r_eax; u32 b = 0x75c08500u; u32 r = (a & b) & 0xffffffffu;   }
    /* 006c316f: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006c3170: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c3175u); f_00415cec();
    /* 006c3175: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c3178: mov dword ptr [0xa95dcc], eax */ W32((u32)(0xa95dccu), r_eax);
    /* 006c317d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c317e: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c3183u); f_006dc358();
    /* 006c3183: mov edx, eax */ r_edx = r_eax;
    /* 006c3185: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c3188: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c318a: jne 0x6c31bf */ if (!fZ) goto L_006c31bf;
L_006c318c:; BB(0x006c318c);
    /* 006c318c: push 0x9ceb0c */ { u32 v = 0x9ceb0cu; r_esp -= 4; W32(r_esp, v); }
    /* 006c3191: push dword ptr [0xa95dcc] */ { u32 v = R32((u32)(0xa95dccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c3197: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x6c319cu); f_0082c198();
    /* 006c319c: mov edx, eax */ r_edx = r_eax;
    /* 006c319e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c31a1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c31a3: jne 0x6c31bf */ if (!fZ) goto L_006c31bf;
L_006c31a5:; BB(0x006c31a5);
    /* 006c31a5: mov eax, dword ptr [0xa95dcc] */ r_eax = R32((u32)(0xa95dccu));
    /* 006c31aa: call 0x6c31e4 */ r_esp -= 4; W32(r_esp, 0x6c31afu); f_006c31e4();
    /* 006c31af: mov edx, eax */ r_edx = r_eax;
    /* 006c31b1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c31b3: jne 0x6c31bf */ if (!fZ) goto L_006c31bf;
L_006c31b5:; BB(0x006c31b5);
    /* 006c31b5: mov dword ptr [0xa95de0], 0x10 */ W32((u32)(0xa95de0u), 0x10u);
L_006c31bf:; BB(0x006c31bf);
    /* 006c31bf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c31c1: jne 0x6c31cf */ if (!fZ) goto L_006c31cf;
L_006c31c3:; BB(0x006c31c3);
    /* 006c31c3: mov dword ptr [0xa95da8], 1 */ W32((u32)(0xa95da8u), 0x1u);
    /* 006c31cd: jmp 0x6c31d9 */ goto L_006c31d9;
L_006c31cf:; BB(0x006c31cf);
    /* 006c31cf: mov dword ptr [0xa95da8], 0 */ W32((u32)(0xa95da8u), 0x0u);
L_006c31d9:; BB(0x006c31d9);
    /* 006c31d9: mov eax, edx */ r_eax = r_edx;
    /* 006c31db: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c31dc: ret  */ FN_RET(0x006c316a); r_esp += 4; return;
}

void f_006c3179(void)
{
    FN_ENTER(0x006c3179);
    /* 006c3179: int3  */ UNSUP(0x006c3179, "int3");
}

void f_006c31e4(void) /* sub_6C31E4 */
{
    FN_ENTER(0x006c31e4);
    /* 006c31e4: mov dword ptr [0xa95dcc], eax */ W32((u32)(0xa95dccu), r_eax);
    /* 006c31e9: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 006c31ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c31f0: jl 0x6c3246 */ if ((fS!=fO)) goto L_006c3246;
L_006c31f2:; BB(0x006c31f2);
    /* 006c31f2: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c31f5: jg 0x6c3246 */ if ((!fZ&&fS==fO)) goto L_006c3246;
L_006c31f7:; BB(0x006c31f7);
    /* 006c31f7: push 0x9ceb0c */ { u32 v = 0x9ceb0cu; r_esp -= 4; W32(r_esp, v); }
    /* 006c31fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c31fd: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x6c3202u); f_0082c198();
    /* 006c3202: mov edx, eax */ r_edx = r_eax;
    /* 006c3204: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c3207: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c3209: jne 0x6c3246 */ if (!fZ) goto L_006c3246;
L_006c320b:; BB(0x006c320b);
    /* 006c320b: mov eax, dword ptr [0xa95dc8] */ r_eax = R32((u32)(0xa95dc8u));
    /* 006c3210: mov dword ptr [0xaab3ac], 1 */ W32((u32)(0xaab3acu), 0x1u);
    /* 006c321a: shl eax, 0xe */ { u32 c = (14u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006c321d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c321e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c3220: push dword ptr [0xa95e24] */ { u32 v = R32((u32)(0xa95e24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c3226: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c322bu); f_0086b688();
    /* 006c322b: push dword ptr [0xa95e24] */ { u32 v = R32((u32)(0xa95e24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c3231: push 0x9ceb0c */ { u32 v = 0x9ceb0cu; r_esp -= 4; W32(r_esp, v); }
    /* 006c3236: push dword ptr [0xa95dcc] */ { u32 v = R32((u32)(0xa95dccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c323c: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c3241u); f_006dc358();
    /* 006c3241: mov edx, eax */ r_edx = r_eax;
    /* 006c3243: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006c3246:; BB(0x006c3246);
    /* 006c3246: mov eax, edx */ r_eax = r_edx;
    /* 006c3248: ret  */ FN_RET(0x006c31e4); r_esp += 4; return;
}

void f_006c324c(void) /* sub_6C324C */
{
    FN_ENTER(0x006c324c);
    /* 006c324c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c324d: mov ebp, esp */ r_ebp = r_esp;
    /* 006c324f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006c3251: push 0x8ec716 */ { u32 v = 0x8ec716u; r_esp -= 4; W32(r_esp, v); }
    /* 006c3256: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006c325c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c325d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006c3264: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c326a: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006c326d: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006c3270: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006c3273: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006c3276: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c3278: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c327a: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c3280: call 0x77eaec */ r_esp -= 4; W32(r_esp, 0x6c3285u); f_0077eaec();
    /* 006c3285: mov ebx, eax */ r_ebx = r_eax;
    /* 006c3287: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c328a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c328c: je 0x6c34c5 */ if (fZ) goto L_006c34c5;
L_006c3292:; BB(0x006c3292);
    /* 006c3292: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c3294: call 0x77ebf8 */ r_esp -= 4; W32(r_esp, 0x6c3299u); f_0077ebf8();
L_006c3299:; BB(0x006c3299);
    /* 006c3299: call 0x83adbc */ r_esp -= 4; W32(r_esp, 0x6c329eu); f_0083adbc();
    /* 006c329e: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006c32a0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c32a2: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x6c32a5u); call_ind(t); }
    /* 006c32a5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c32a7: call 0x77ebe8 */ r_esp -= 4; W32(r_esp, 0x6c32acu); f_0077ebe8();
    /* 006c32ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c32ae: jne 0x6c3329 */ if (!fZ) goto L_006c3329;
L_006c32b0:; BB(0x006c32b0);
    /* 006c32b0: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x6c32b5u); f_007becd4();
    /* 006c32b5: call 0x5ba0e0 */ r_esp -= 4; W32(r_esp, 0x6c32bau); f_005ba0e0();
    /* 006c32ba: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 006c32c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c32c2: je 0x6c32f1 */ if (fZ) goto L_006c32f1;
L_006c32c4:; BB(0x006c32c4);
    /* 006c32c4: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c32c9: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6c32ceu); f_0061cdb0();
    /* 006c32ce: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x6c32d3u); f_007becd4();
    /* 006c32d3: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c32d8: call 0x81888c */ r_esp -= 4; W32(r_esp, 0x6c32ddu); f_0081888c();
    /* 006c32dd: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c32e2: call 0x817604 */ r_esp -= 4; W32(r_esp, 0x6c32e7u); f_00817604();
    /* 006c32e7: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c32ec: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x6c32f1u); f_00818f80();
L_006c32f1:; BB(0x006c32f1);
    /* 006c32f1: call 0x7bfedc */ r_esp -= 4; W32(r_esp, 0x6c32f6u); f_007bfedc();
    /* 006c32f6: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 006c32f9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c32fb: jne 0x6c3304 */ if (!fZ) goto L_006c3304;
L_006c32fd:; BB(0x006c32fd);
    /* 006c32fd: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x6c3302u); f_0080030c();
    /* 006c3302: jmp 0x6c3299 */ goto L_006c3299;
L_006c3304:; BB(0x006c3304);
    /* 006c3304: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c3306: je 0x6c3310 */ if (fZ) goto L_006c3310;
L_006c3308:; BB(0x006c3308);
    /* 006c3308: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c330a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006c330c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c330e: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x6c3310u); call_ind(t); }
L_006c3310:; BB(0x006c3310);
    /* 006c3310: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006c3313: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c3316: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c3319: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c331b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c331e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c3325: mov esp, ebp */ r_esp = r_ebp;
    /* 006c3327: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c3328: ret  */ FN_RET(0x006c324c); r_esp += 4; return;
L_006c3329:; BB(0x006c3329);
    /* 006c3329: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c332b: je 0x6c3335 */ if (fZ) goto L_006c3335;
L_006c332d:; BB(0x006c332d);
    /* 006c332d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c332f: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006c3331: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c3333: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x6c3335u); call_ind(t); }
L_006c3335:; BB(0x006c3335);
    /* 006c3335: movzx eax, byte ptr [0xa95d8c] */ r_eax = (u32)R8((u32)(0xa95d8cu));
    /* 006c333c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c333e: jne 0x6c335c */ if (!fZ) goto L_006c335c;
L_006c3340:; BB(0x006c3340);
    /* 006c3340: mov dword ptr [0xa95d90], 0x42840000 */ W32((u32)(0xa95d90u), 0x42840000u);
    /* 006c334a: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c334d: mov byte ptr [0xa95d8c], al */ W8((u32)(0xa95d8cu), (u8)r_eax);
    /* 006c3352: mov dword ptr [0xa95d94], 0x43b48000 */ W32((u32)(0xa95d94u), 0x43b48000u);
L_006c335c:; BB(0x006c335c);
    /* 006c335c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c335e: jne 0x6c3374 */ if (!fZ) goto L_006c3374;
L_006c3360:; BB(0x006c3360);
    /* 006c3360: mov dword ptr [0xa95d98], 0x43fe0000 */ W32((u32)(0xa95d98u), 0x43fe0000u);
    /* 006c336a: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c336f: mov byte ptr [0xa95d8c], al */ W8((u32)(0xa95d8cu), (u8)r_eax);
L_006c3374:; BB(0x006c3374);
    /* 006c3374: push 0x9ceac8 */ { u32 v = 0x9ceac8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c3379: push dword ptr [0xa95ddc] */ { u32 v = R32((u32)(0xa95ddcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c337f: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x6c3384u); f_0082c198();
    /* 006c3384: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c3387: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c3389: jne 0x6c341e */ if (!fZ) goto L_006c341e;
L_006c338f:; BB(0x006c338f);
    /* 006c338f: mov ebx, dword ptr [0xa95dd4] */ r_ebx = R32((u32)(0xa95dd4u));
    /* 006c3395: shl ebx, 0xe */ { u32 c = (14u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 006c3398: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c3399: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6c339eu); f_0082e940();
    /* 006c339e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006c33a1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c33a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c33a6: je 0x6c341e */ if (fZ) goto L_006c341e;
L_006c33a8:; BB(0x006c33a8);
    /* 006c33a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c33a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c33ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c33ac: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c33b1u); f_0086b688();
    /* 006c33b1: push dword ptr [0xa95dd4] */ { u32 v = R32((u32)(0xa95dd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c33b7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c33ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c33bb: push 0x9ceac8 */ { u32 v = 0x9ceac8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c33c0: push dword ptr [0xa95ddc] */ { u32 v = R32((u32)(0xa95ddcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c33c6: call 0x82c260 */ r_esp -= 4; W32(r_esp, 0x6c33cbu); f_0082c260();
    /* 006c33cb: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c33ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c33d0: je 0x6c34de */ if (fZ) goto L_006c34de;
L_006c33d6:; BB(0x006c33d6);
    /* 006c33d6: push dword ptr [0xa95ddc] */ { u32 v = R32((u32)(0xa95ddcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c33dc: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x6c33e1u); f_0082c204();
    /* 006c33e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c33e2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c33e5: je 0x6c33f3 */ if (fZ) goto L_006c33f3;
L_006c33e7:; BB(0x006c33e7);
    /* 006c33e7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c33ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c33eb: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6c33f0u); f_0082e960();
    /* 006c33f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c33f1: jmp 0x6c341e */ goto L_006c341e;
L_006c33f3:; BB(0x006c33f3);
    /* 006c33f3: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x6c33f8u); f_0080030c();
    /* 006c33f8: push dword ptr [0xa95dd4] */ { u32 v = R32((u32)(0xa95dd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c33fe: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c3401: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c3402: push 0x9ceac8 */ { u32 v = 0x9ceac8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c3407: push dword ptr [0xa95ddc] */ { u32 v = R32((u32)(0xa95ddcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c340d: call 0x82c260 */ r_esp -= 4; W32(r_esp, 0x6c3412u); f_0082c260();
    /* 006c3412: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c3415: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c3417: jne 0x6c33d6 */ if (!fZ) goto L_006c33d6;
L_006c3419:; BB(0x006c3419);
    /* 006c3419: jmp 0x6c34de */ goto L_006c34de;
L_006c341e:; BB(0x006c341e);
    /* 006c341e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c3420: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c3422: push 0x96b870 */ { u32 v = 0x96b870u; r_esp -= 4; W32(r_esp, v); }
    /* 006c3427: push 0x96b868 */ { u32 v = 0x96b868u; r_esp -= 4; W32(r_esp, v); }
    /* 006c342c: call 0x73aa40 */ r_esp -= 4; W32(r_esp, 0x6c3431u); f_0073aa40();
    /* 006c3431: mov ebx, eax */ r_ebx = r_eax;
    /* 006c3433: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c3436: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c3438: je 0x6c3457 */ if (fZ) goto L_006c3457;
L_006c343a:; BB(0x006c343a);
    /* 006c343a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c343c: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 006c343e: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x6c3443u); f_00792fe8();
    /* 006c3443: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c3446: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006c3448: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c3449: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c344b: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6c3450u); f_0073ae38();
    /* 006c3450: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c3452: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x6c3457u); f_00712c00();
L_006c3457:; BB(0x006c3457);
    /* 006c3457: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c3459: call 0x73b0f0 */ r_esp -= 4; W32(r_esp, 0x6c345eu); f_0073b0f0();
L_006c345e:; BB(0x006c345e);
    /* 006c345e: call 0x83adbc */ r_esp -= 4; W32(r_esp, 0x6c3463u); f_0083adbc();
    /* 006c3463: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x6c3468u); f_007becd4();
    /* 006c3468: call 0x5ba0e0 */ r_esp -= 4; W32(r_esp, 0x6c346du); f_005ba0e0();
    /* 006c346d: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 006c3473: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c3475: je 0x6c34a4 */ if (fZ) goto L_006c34a4;
L_006c3477:; BB(0x006c3477);
    /* 006c3477: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c347c: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6c3481u); f_0061cdb0();
    /* 006c3481: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x6c3486u); f_007becd4();
    /* 006c3486: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c348b: call 0x81888c */ r_esp -= 4; W32(r_esp, 0x6c3490u); f_0081888c();
    /* 006c3490: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c3495: call 0x817604 */ r_esp -= 4; W32(r_esp, 0x6c349au); f_00817604();
    /* 006c349a: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c349f: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x6c34a4u); f_00818f80();
L_006c34a4:; BB(0x006c34a4);
    /* 006c34a4: call 0x7bfedc */ r_esp -= 4; W32(r_esp, 0x6c34a9u); f_007bfedc();
    /* 006c34a9: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 006c34ac: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c34ae: jne 0x6c34b7 */ if (!fZ) goto L_006c34b7;
L_006c34b0:; BB(0x006c34b0);
    /* 006c34b0: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x6c34b5u); f_0080030c();
    /* 006c34b5: jmp 0x6c345e */ goto L_006c345e;
L_006c34b7:; BB(0x006c34b7);
    /* 006c34b7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c34b9: je 0x6c34c5 */ if (fZ) goto L_006c34c5;
L_006c34bb:; BB(0x006c34bb);
    /* 006c34bb: je 0x6c34c5 */ if (fZ) goto L_006c34c5;
L_006c34bd:; BB(0x006c34bd);
    /* 006c34bd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c34bf: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006c34c1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c34c3: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x6c34c5u); call_ind(t); }
L_006c34c5:; BB(0x006c34c5);
    /* 006c34c5: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006c34c8: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c34cb: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c34ce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c34d0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c34d3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c34da: mov esp, ebp */ r_esp = r_ebp;
    /* 006c34dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c34dd: ret  */ FN_RET(0x006c324c); r_esp += 4; return;
L_006c34de:; BB(0x006c34de);
    /* 006c34de: push dword ptr [0xa95ddc] */ { u32 v = R32((u32)(0xa95ddcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c34e4: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c34e9u); f_006dc358();
    /* 006c34e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c34ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c34ec: je 0x6c3523 */ if (fZ) goto L_006c3523;
L_006c34ee:; BB(0x006c34ee);
    /* 006c34ee: push dword ptr [0xa95ddc] */ { u32 v = R32((u32)(0xa95ddcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c34f4: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x6c34f9u); f_0082c204();
    /* 006c34f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c34fa: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c34fd: je 0x6c350e */ if (fZ) goto L_006c350e;
L_006c34ff:; BB(0x006c34ff);
    /* 006c34ff: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c3502: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c3503: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6c3508u); f_0082e960();
    /* 006c3508: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c3509: jmp 0x6c341e */ goto L_006c341e;
L_006c350e:; BB(0x006c350e);
    /* 006c350e: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x6c3513u); f_0080030c();
    /* 006c3513: push dword ptr [0xa95ddc] */ { u32 v = R32((u32)(0xa95ddcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c3519: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c351eu); f_006dc358();
    /* 006c351e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c351f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c3521: jne 0x6c34ee */ if (!fZ) goto L_006c34ee;
L_006c3523:; BB(0x006c3523);
    /* 006c3523: mov eax, dword ptr [0xa95df0] */ r_eax = R32((u32)(0xa95df0u));
    /* 006c3528: mov edx, dword ptr [eax + 0x110] */ r_edx = R32((u32)(r_eax+0x110u));
    /* 006c352e: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
    /* 006c3538: mov dword ptr [0xa95dc4], edx */ W32((u32)(0xa95dc4u), r_edx);
    /* 006c353e: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c3543: mov dword ptr [0xa95dc0], edx */ W32((u32)(0xa95dc0u), r_edx);
    /* 006c3549: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c354eu); f_008581c5();
    /* 006c354e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006c3551: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c3554: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 006c355a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c355c: je 0x6c38af */ if (fZ) goto L_006c38af;
L_006c3562:; BB(0x006c3562);
    /* 006c3562: mov dword ptr [ebp - 0x8c], 1 */ W32((u32)(r_ebp+0xffffff74u), 0x1u);
    /* 006c356c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006c3573: push 0x6c1940 */ { u32 v = 0x6c1940u; r_esp -= 4; W32(r_esp, v); }
    /* 006c3578: push 0x6c17f0 */ { u32 v = 0x6c17f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c357d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c357f: lea edx, [eax + 4] */ r_edx = (u32)(r_eax+0x4u);
    /* 006c3582: push 0x2ea4 */ { u32 v = 0x2ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c3587: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c3588: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c358du); f_00858736();
    /* 006c358d: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_006c3597:; BB(0x006c3597);
    /* 006c3597: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c359e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c35a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c35a3: je 0x6c38a0 */ if (fZ) goto L_006c38a0;
L_006c35a9:; BB(0x006c35a9);
    /* 006c35a9: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c35ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c35b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c35b1: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x6c35b6u); f_0086b5cc();
    /* 006c35b6: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c35bb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c35be: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c35c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c35c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c35c3: call 0x86b324 */ r_esp -= 4; W32(r_esp, 0x6c35c8u); f_0086b324();
    /* 006c35c8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c35cb: mov eax, dword ptr [0xa95e44] */ r_eax = R32((u32)(0xa95e44u));
    /* 006c35d0: mov edx, dword ptr [eax + 0xba9c] */ r_edx = R32((u32)(r_eax+0xba9cu));
    /* 006c35d6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c35d9: cmp edx, dword ptr [ecx + 0xba9c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xba9cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c35df: je 0x6c35f7 */ if (fZ) goto L_006c35f7;
L_006c35e1:; BB(0x006c35e1);
    /* 006c35e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c35e3: call 0x6c1780 */ r_esp -= 4; W32(r_esp, 0x6c35e8u); f_006c1780();
    /* 006c35e8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c35eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c35ec: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6c35f1u); f_0082e960();
    /* 006c35f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c35f2: jmp 0x6c341e */ goto L_006c341e;
L_006c35f7:; BB(0x006c35f7);
    /* 006c35f7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c35f9: call 0x6c1780 */ r_esp -= 4; W32(r_esp, 0x6c35feu); f_006c1780();
    /* 006c35fe: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c3601: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c3602: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6c3607u); f_0082e960();
    /* 006c3607: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c3608: call 0x6c26e4 */ r_esp -= 4; W32(r_esp, 0x6c360du); f_006c26e4();
    /* 006c360d: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 006c3613: mov eax, dword ptr [0xa95e44] */ r_eax = R32((u32)(0xa95e44u));
    /* 006c3618: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 006c361e: mov dword ptr [0xa95dc4], ecx */ W32((u32)(0xa95dc4u), r_ecx);
    /* 006c3624: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006c3625: mov dword ptr [0xa95dc0], ecx */ W32((u32)(0xa95dc0u), r_ecx);
    /* 006c362b: call 0x6c26fc */ r_esp -= 4; W32(r_esp, 0x6c3630u); f_006c26fc();
    /* 006c3630: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c3631: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c3633: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 006c3639: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 006c363c: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 006c363f: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 006c3642: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 006c3645: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 006c3648: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 006c364b: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 006c364e: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 006c3651: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 006c3654: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 006c3657: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 006c365a: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 006c365d: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006c3660: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 006c3663: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 006c3666: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 006c3669: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 006c366c: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 006c366f: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 006c3672: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006c3675: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006c3678: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006c367b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006c367e: lea esi, [ebp - 0x84] */ r_esi = (u32)(r_ebp+0xffffff7cu);
    /* 006c3684: mov edi, 0x9ceb2c */ r_edi = 0x9ceb2cu;
L_006c3689:; BB(0x006c3689);
    /* 006c3689: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 006c368b: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006c368e: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 006c3690: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c3693: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c3695: jne 0x6c3689 */ if (!fZ) goto L_006c3689;
L_006c3697:; BB(0x006c3697);
    /* 006c3697: lea esi, [ebp - 0x72] */ r_esi = (u32)(r_ebp+0xffffff8eu);
    /* 006c369a: mov edi, 0x9ceae8 */ r_edi = 0x9ceae8u;
L_006c369f:; BB(0x006c369f);
    /* 006c369f: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 006c36a1: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006c36a4: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 006c36a6: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c36a9: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c36ab: jne 0x6c369f */ if (!fZ) goto L_006c369f;
L_006c36ad:; BB(0x006c36ad);
    /* 006c36ad: mov ebx, 0xa95e6c */ r_ebx = 0xa95e6cu;
    /* 006c36b2: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006c36b4: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 006c36b7: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 006c36ba: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
    /* 006c36bd: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006c36c0: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 006c36c3: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 006c36c6: mov dword ptr [ebp - 0x44], esi */ W32((u32)(r_ebp+0xffffffbcu), r_esi);
    /* 006c36c9: lea eax, [ebp - 0x84] */ r_eax = (u32)(r_ebp+0xffffff7cu);
    /* 006c36cf: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006c36d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c36d2: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6c36d7u); f_0061cdb0();
    /* 006c36d7: mov ecx, dword ptr [0xa95e44] */ r_ecx = R32((u32)(0xa95e44u));
    /* 006c36dd: mov dword ptr [ebp - 0x28], 0xbaa4 */ W32((u32)(r_ebp+0xffffffd8u), 0xbaa4u);
    /* 006c36e4: mov eax, 1 */ r_eax = 0x1u;
    /* 006c36e9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006c36eb: mov word ptr [ebp - 0x38], ax */ W16((u32)(r_ebp+0xffffffc8u), (u16)r_eax);
    /* 006c36ef: mov word ptr [ebp - 0x36], ax */ W16((u32)(r_ebp+0xffffffcau), (u16)r_eax);
    /* 006c36f3: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 006c36f6: mov word ptr [ebp - 0x30], dx */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_edx);
    /* 006c36fa: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 006c36fd: lea ebx, [ebp - 0x84] */ r_ebx = (u32)(r_ebp+0xffffff7cu);
    /* 006c3703: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c3704: push dword ptr [0xa95e2c] */ { u32 v = R32((u32)(0xa95e2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c370a: call 0x82c34c */ r_esp -= 4; W32(r_esp, 0x6c370fu); f_0082c34c();
    /* 006c370f: lea eax, [ebp - 0x84] */ r_eax = (u32)(r_ebp+0xffffff7cu);
    /* 006c3715: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c3716: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6c371bu); f_0061cdb0();
    /* 006c371b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c371e: call 0x6c3de4 */ r_esp -= 4; W32(r_esp, 0x6c3723u); f_006c3de4();
    /* 006c3723: mov dword ptr [0xa95de0], 6 */ W32((u32)(0xa95de0u), 0x6u);
L_006c372d:; BB(0x006c372d);
    /* 006c372d: call 0x83adbc */ r_esp -= 4; W32(r_esp, 0x6c3732u); f_0083adbc();
    /* 006c3732: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x6c3737u); f_007becd4();
    /* 006c3737: call 0x6c38bc */ r_esp -= 4; W32(r_esp, 0x6c373cu); f_006c38bc();
    /* 006c373c: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 006c3741: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c3743: je 0x6c3772 */ if (fZ) goto L_006c3772;
L_006c3745:; BB(0x006c3745);
    /* 006c3745: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c374a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6c374fu); f_0061cdb0();
    /* 006c374f: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x6c3754u); f_007becd4();
    /* 006c3754: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c3759: call 0x81888c */ r_esp -= 4; W32(r_esp, 0x6c375eu); f_0081888c();
    /* 006c375e: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c3763: call 0x817604 */ r_esp -= 4; W32(r_esp, 0x6c3768u); f_00817604();
    /* 006c3768: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c376d: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x6c3772u); f_00818f80();
L_006c3772:; BB(0x006c3772);
    /* 006c3772: push dword ptr [0xa95ddc] */ { u32 v = R32((u32)(0xa95ddcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c3778: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x6c377du); f_0082c204();
    /* 006c377d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c377e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c3781: je 0x6c3787 */ if (fZ) goto L_006c3787;
L_006c3783:; BB(0x006c3783);
    /* 006c3783: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006c3785: jmp 0x6c379c */ goto L_006c379c;
L_006c3787:; BB(0x006c3787);
    /* 006c3787: mov eax, dword ptr [0xa95de0] */ r_eax = R32((u32)(0xa95de0u));
    /* 006c378c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c378e: je 0x6c3797 */ if (fZ) goto L_006c3797;
L_006c3790:; BB(0x006c3790);
    /* 006c3790: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x6c3795u); f_0080030c();
    /* 006c3795: jmp 0x6c372d */ goto L_006c372d;
L_006c3797:; BB(0x006c3797);
    /* 006c3797: mov esi, 1 */ r_esi = 0x1u;
L_006c379c:; BB(0x006c379c);
    /* 006c379c: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 006c379e: call 0x73aba4 */ r_esp -= 4; W32(r_esp, 0x6c37a3u); f_0073aba4();
    /* 006c37a3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c37a5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c37a7: push 0x96b870 */ { u32 v = 0x96b870u; r_esp -= 4; W32(r_esp, v); }
    /* 006c37ac: push 0x96b868 */ { u32 v = 0x96b868u; r_esp -= 4; W32(r_esp, v); }
    /* 006c37b1: call 0x73aa40 */ r_esp -= 4; W32(r_esp, 0x6c37b6u); f_0073aa40();
    /* 006c37b6: mov ebx, eax */ r_ebx = r_eax;
    /* 006c37b8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c37bb: call 0x73b1d4 */ r_esp -= 4; W32(r_esp, 0x6c37c0u); f_0073b1d4();
    /* 006c37c0: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c37c2: je 0x6c37e1 */ if (fZ) goto L_006c37e1;
L_006c37c4:; BB(0x006c37c4);
    /* 006c37c4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006c37c6: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 006c37c8: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x6c37cdu); f_00792fe8();
    /* 006c37cd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c37d0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006c37d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c37d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c37d5: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6c37dau); f_0073ae38();
    /* 006c37da: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c37dc: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x6c37e1u); f_00712c00();
L_006c37e1:; BB(0x006c37e1);
    /* 006c37e1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c37e3: call 0x73b0f0 */ r_esp -= 4; W32(r_esp, 0x6c37e8u); f_0073b0f0();
    /* 006c37e8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c37ea: jne 0x6c3879 */ if (!fZ) goto L_006c3879;
L_006c37f0:; BB(0x006c37f0);
    /* 006c37f0: call 0x83adbc */ r_esp -= 4; W32(r_esp, 0x6c37f5u); f_0083adbc();
    /* 006c37f5: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x6c37fau); f_007becd4();
    /* 006c37fa: call 0x5ba0e0 */ r_esp -= 4; W32(r_esp, 0x6c37ffu); f_005ba0e0();
    /* 006c37ff: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 006c3805: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c3807: je 0x6c3836 */ if (fZ) goto L_006c3836;
L_006c3809:; BB(0x006c3809);
    /* 006c3809: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c380e: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6c3813u); f_0061cdb0();
    /* 006c3813: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x6c3818u); f_007becd4();
    /* 006c3818: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c381d: call 0x81888c */ r_esp -= 4; W32(r_esp, 0x6c3822u); f_0081888c();
    /* 006c3822: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c3827: call 0x817604 */ r_esp -= 4; W32(r_esp, 0x6c382cu); f_00817604();
    /* 006c382c: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c3831: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x6c3836u); f_00818f80();
L_006c3836:; BB(0x006c3836);
    /* 006c3836: call 0x7bfedc */ r_esp -= 4; W32(r_esp, 0x6c383bu); f_007bfedc();
    /* 006c383b: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 006c383e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c3840: jne 0x6c3879 */ if (!fZ) goto L_006c3879;
L_006c3842:; BB(0x006c3842);
    /* 006c3842: mov edx, dword ptr [0xa0f674] */ r_edx = R32((u32)(0xa0f674u));
    /* 006c3848: or edx, dword ptr [0xa0f678] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f678u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006c384e: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 006c3853: or edx, dword ptr [0xa0f67c] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f67cu)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006c3859: or edx, dword ptr [0xa0f698] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006c385f: or edx, dword ptr [0xa0f680] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f680u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006c3865: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c3866: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6c386bu); f_007c1160();
    /* 006c386b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c386d: jne 0x6c3879 */ if (!fZ) goto L_006c3879;
L_006c386f:; BB(0x006c386f);
    /* 006c386f: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x6c3874u); f_0080030c();
    /* 006c3874: jmp 0x6c37f0 */ goto L_006c37f0;
L_006c3879:; BB(0x006c3879);
    /* 006c3879: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c387b: je 0x6c3887 */ if (fZ) goto L_006c3887;
L_006c387d:; BB(0x006c387d);
    /* 006c387d: je 0x6c3887 */ if (fZ) goto L_006c3887;
L_006c387f:; BB(0x006c387f);
    /* 006c387f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c3881: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006c3883: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c3885: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x6c3887u); call_ind(t); }
L_006c3887:; BB(0x006c3887);
    /* 006c3887: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006c388a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c388d: mov eax, esi */ r_eax = r_esi;
    /* 006c388f: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c3892: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c3895: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c389c: mov esp, ebp */ r_esp = r_ebp;
    /* 006c389e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c389f: ret  */ FN_RET(0x006c324c); r_esp += 4; return;
L_006c38a0:; BB(0x006c38a0);
    /* 006c38a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c38a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c38a4: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6c38a9u); f_0082e960();
    /* 006c38a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c38aa: jmp 0x6c341e */ goto L_006c341e;
L_006c38af:; BB(0x006c38af);
    /* 006c38af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c38b1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006c38b4: jmp 0x6c3597 */ goto L_006c3597;
}

void f_006c3800(void)
{
    FN_ENTER(0x006c3800);
    goto L_006c3800;
L_006c37f0:; BB(0x006c37f0);
    /* 006c37f0: call 0x83adbc */ r_esp -= 4; W32(r_esp, 0x6c37f5u); f_0083adbc();
    /* 006c37f5: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x6c37fau); f_007becd4();
    /* 006c37fa: call 0x5ba0e0 */ r_esp -= 4; W32(r_esp, 0x6c37ffu); f_005ba0e0();
    /* 006c37ff: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
L_006c3800:; BB(0x006c3800);
    /* 006c3800: adc eax, 0xa48a54 */ { u32 c = fC; u32 a = r_eax; u32 b = 0xa48a54u; u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 006c3805: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c3807: je 0x6c3836 */ if (fZ) goto L_006c3836;
L_006c3809:; BB(0x006c3809);
    /* 006c3809: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c380e: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6c3813u); f_0061cdb0();
    /* 006c3813: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x6c3818u); f_007becd4();
    /* 006c3818: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c381d: call 0x81888c */ r_esp -= 4; W32(r_esp, 0x6c3822u); f_0081888c();
    /* 006c3822: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c3827: call 0x817604 */ r_esp -= 4; W32(r_esp, 0x6c382cu); f_00817604();
    /* 006c382c: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c3831: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x6c3836u); f_00818f80();
L_006c3836:; BB(0x006c3836);
    /* 006c3836: call 0x7bfedc */ r_esp -= 4; W32(r_esp, 0x6c383bu); f_007bfedc();
    /* 006c383b: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 006c383e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c3840: jne 0x6c3879 */ if (!fZ) goto L_006c3879;
L_006c3842:; BB(0x006c3842);
    /* 006c3842: mov edx, dword ptr [0xa0f674] */ r_edx = R32((u32)(0xa0f674u));
    /* 006c3848: or edx, dword ptr [0xa0f678] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f678u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006c384e: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 006c3853: or edx, dword ptr [0xa0f67c] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f67cu)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006c3859: or edx, dword ptr [0xa0f698] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006c385f: or edx, dword ptr [0xa0f680] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f680u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006c3865: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c3866: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6c386bu); f_007c1160();
    /* 006c386b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c386d: jne 0x6c3879 */ if (!fZ) goto L_006c3879;
L_006c386f:; BB(0x006c386f);
    /* 006c386f: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x6c3874u); f_0080030c();
    /* 006c3874: jmp 0x6c37f0 */ goto L_006c37f0;
L_006c3879:; BB(0x006c3879);
    /* 006c3879: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c387b: je 0x6c3887 */ if (fZ) goto L_006c3887;
L_006c387d:; BB(0x006c387d);
    /* 006c387d: je 0x6c3887 */ if (fZ) goto L_006c3887;
L_006c387f:; BB(0x006c387f);
    /* 006c387f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c3881: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006c3883: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c3885: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x6c3887u); call_ind(t); }
L_006c3887:; BB(0x006c3887);
    /* 006c3887: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006c388a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c388d: mov eax, esi */ r_eax = r_esi;
    /* 006c388f: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c3892: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c3895: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c389c: mov esp, ebp */ r_esp = r_ebp;
    /* 006c389e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c389f: ret  */ FN_RET(0x006c3800); r_esp += 4; return;
}

void f_006c38bc(void) /* sub_6C38BC */
{
    FN_ENTER(0x006c38bc);
    /* 006c38bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c38bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c38be: mov eax, dword ptr [0xa95de0] */ r_eax = R32((u32)(0xa95de0u));
    /* 006c38c3: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c38c6: ja 0x6c3cd3 */ if ((!fC&&!fZ)) goto L_006c3cd3;
L_006c38cc:; BB(0x006c38cc);
    /* 006c38cc: mov eax, dword ptr [eax*4 + 0x96b7a0] */ r_eax = R32((u32)(r_eax*4+0x96b7a0u));
    /* 006c38d3: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006c3cd3:; BB(0x006c3cd3);
    /* 006c3cd3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c3cd4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c3cd5: ret  */ FN_RET(0x006c38bc); r_esp += 4; return;
}

void f_006c38d5(void)
{
    FN_ENTER(0x006c38d5);
    /* 006c38d5: push dword ptr [0xa95dcc] */ { u32 v = R32((u32)(0xa95dccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c38db: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c38e0u); f_006dc358();
    /* 006c38e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c38e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c38e3: jne 0x6c3cd3 */ if (!fZ) goto L_006c3cd3;
L_006c38e9:; BB(0x006c38e9);
    /* 006c38e9: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c38ee: push dword ptr [0xa95e24] */ { u32 v = R32((u32)(0xa95e24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c38f4: push dword ptr [0xa95df0] */ { u32 v = R32((u32)(0xa95df0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c38fa: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6c38ffu); f_0086b6b8();
    /* 006c38ff: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c3902: mov eax, dword ptr [0xa95df0] */ r_eax = R32((u32)(0xa95df0u));
    /* 006c3907: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 006c390d: mov edx, dword ptr [0xa95da8] */ r_edx = R32((u32)(0xa95da8u));
    /* 006c3913: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c3915: je 0x6c392b */ if (fZ) goto L_006c392b;
L_006c3917:; BB(0x006c3917);
    /* 006c3917: mov dword ptr [0xa95da8], 0 */ W32((u32)(0xa95da8u), 0x0u);
    /* 006c3921: call 0x6c3cf8 */ r_esp -= 4; W32(r_esp, 0x6c3926u); f_006c3cf8();
    /* 006c3926: jmp 0x6c3cd3 */ goto L_006c3cd3;
L_006c392b:; BB(0x006c392b);
    /* 006c392b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c392d: mov dword ptr [0xa95de0], eax */ W32((u32)(0xa95de0u), r_eax);
    /* 006c3932: mov dword ptr [0xaab3ac], eax */ W32((u32)(0xaab3acu), r_eax);
    /* 006c3937: jmp 0x6c3cd3 */ goto L_006c3cd3;
L_006c3cd3:; BB(0x006c3cd3);
    /* 006c3cd3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c3cd4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c3cd5: ret  */ FN_RET(0x006c38d5); r_esp += 4; return;
}

void f_006c393c(void)
{
    FN_ENTER(0x006c393c);
    /* 006c393c: push dword ptr [0xa95dcc] */ { u32 v = R32((u32)(0xa95dccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c3942: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c3947u); f_006dc358();
    /* 006c3947: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c3948: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c394a: jne 0x6c3cd3 */ if (!fZ) goto L_006c3cd3;
L_006c3950:; BB(0x006c3950);
    /* 006c3950: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c3955: push dword ptr [0xa95e24] */ { u32 v = R32((u32)(0xa95e24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c395b: push dword ptr [0xa95df0] */ { u32 v = R32((u32)(0xa95df0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c3961: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6c3966u); f_0086b6b8();
    /* 006c3966: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c3969: mov eax, dword ptr [0xa95df0] */ r_eax = R32((u32)(0xa95df0u));
    /* 006c396e: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 006c3970: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 006c3976: mov ecx, dword ptr [0xa95df0] */ r_ecx = R32((u32)(0xa95df0u));
    /* 006c397c: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 006c397f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006c3984: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006c3986:; BB(0x006c3986);
    /* 006c3986: movzx ebp, byte ptr [edx + ecx] */ r_ebp = (u32)R8((u32)(r_edx+r_ecx));
    /* 006c398a: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c398c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c398f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c3991: je 0x6c399c */ if (fZ) goto L_006c399c;
L_006c3993:; BB(0x006c3993);
    /* 006c3993: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c3995: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c399a: jmp 0x6c399e */ goto L_006c399e;
L_006c399c:; BB(0x006c399c);
    /* 006c399c: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c399e:; BB(0x006c399e);
    /* 006c399e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c39a0: je 0x6c39ab */ if (fZ) goto L_006c39ab;
L_006c39a2:; BB(0x006c39a2);
    /* 006c39a2: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c39a4: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c39a9: jmp 0x6c39ad */ goto L_006c39ad;
L_006c39ab:; BB(0x006c39ab);
    /* 006c39ab: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c39ad:; BB(0x006c39ad);
    /* 006c39ad: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c39af: je 0x6c39ba */ if (fZ) goto L_006c39ba;
L_006c39b1:; BB(0x006c39b1);
    /* 006c39b1: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c39b3: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c39b8: jmp 0x6c39bc */ goto L_006c39bc;
L_006c39ba:; BB(0x006c39ba);
    /* 006c39ba: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c39bc:; BB(0x006c39bc);
    /* 006c39bc: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c39be: je 0x6c39c9 */ if (fZ) goto L_006c39c9;
L_006c39c0:; BB(0x006c39c0);
    /* 006c39c0: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c39c2: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c39c7: jmp 0x6c39cb */ goto L_006c39cb;
L_006c39c9:; BB(0x006c39c9);
    /* 006c39c9: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c39cb:; BB(0x006c39cb);
    /* 006c39cb: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c39cd: je 0x6c39d8 */ if (fZ) goto L_006c39d8;
L_006c39cf:; BB(0x006c39cf);
    /* 006c39cf: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c39d1: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c39d6: jmp 0x6c39da */ goto L_006c39da;
L_006c39d8:; BB(0x006c39d8);
    /* 006c39d8: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c39da:; BB(0x006c39da);
    /* 006c39da: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c39dc: je 0x6c39e7 */ if (fZ) goto L_006c39e7;
L_006c39de:; BB(0x006c39de);
    /* 006c39de: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c39e0: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c39e5: jmp 0x6c39e9 */ goto L_006c39e9;
L_006c39e7:; BB(0x006c39e7);
    /* 006c39e7: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c39e9:; BB(0x006c39e9);
    /* 006c39e9: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c39eb: je 0x6c39f6 */ if (fZ) goto L_006c39f6;
L_006c39ed:; BB(0x006c39ed);
    /* 006c39ed: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c39ef: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c39f4: jmp 0x6c39f8 */ goto L_006c39f8;
L_006c39f6:; BB(0x006c39f6);
    /* 006c39f6: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c39f8:; BB(0x006c39f8);
    /* 006c39f8: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c39fa: je 0x6c3a05 */ if (fZ) goto L_006c3a05;
L_006c39fc:; BB(0x006c39fc);
    /* 006c39fc: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c39fe: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c3a03: jmp 0x6c3a07 */ goto L_006c3a07;
L_006c3a05:; BB(0x006c3a05);
    /* 006c3a05: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c3a07:; BB(0x006c3a07);
    /* 006c3a07: cmp edx, 0xaf0 */ {  u32 a = r_edx; u32 b = 0xaf0u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006c3a0d: jb 0x6c3986 */ if (fC) goto L_006c3986;
L_006c3a13:; BB(0x006c3a13);
    /* 006c3a13: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 006c3a16: not eax */ r_eax = ~r_eax;
    /* 006c3a18: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c3a1a: je 0x6c3a21 */ if (fZ) goto L_006c3a21;
L_006c3a1c:; BB(0x006c3a1c);
    /* 006c3a1c: call 0x6c782c */ r_esp -= 4; W32(r_esp, 0x6c3a21u); f_006c782c();
L_006c3a21:; BB(0x006c3a21);
    /* 006c3a21: mov eax, dword ptr [0xa95da8] */ r_eax = R32((u32)(0xa95da8u));
    /* 006c3a26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c3a28: je 0x6c3a3e */ if (fZ) goto L_006c3a3e;
L_006c3a2a:; BB(0x006c3a2a);
    /* 006c3a2a: mov dword ptr [0xa95da8], 0 */ W32((u32)(0xa95da8u), 0x0u);
    /* 006c3a34: call 0x6c3cf8 */ r_esp -= 4; W32(r_esp, 0x6c3a39u); f_006c3cf8();
    /* 006c3a39: jmp 0x6c3cd3 */ goto L_006c3cd3;
L_006c3a3e:; BB(0x006c3a3e);
    /* 006c3a3e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c3a40: mov dword ptr [0xa95de0], eax */ W32((u32)(0xa95de0u), r_eax);
    /* 006c3a45: mov dword ptr [0xaab3ac], eax */ W32((u32)(0xaab3acu), r_eax);
    /* 006c3a4a: jmp 0x6c3cd3 */ goto L_006c3cd3;
L_006c3cd3:; BB(0x006c3cd3);
    /* 006c3cd3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c3cd4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c3cd5: ret  */ FN_RET(0x006c393c); r_esp += 4; return;
}

void f_006c3a4f(void)
{
    FN_ENTER(0x006c3a4f);
    /* 006c3a4f: push dword ptr [0xa95dcc] */ { u32 v = R32((u32)(0xa95dccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c3a55: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c3a5au); f_006dc358();
    /* 006c3a5a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c3a5b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c3a5d: jne 0x6c3cd3 */ if (!fZ) goto L_006c3cd3;
L_006c3a63:; BB(0x006c3a63);
    /* 006c3a63: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c3a65: mov dword ptr [0xa95de0], eax */ W32((u32)(0xa95de0u), r_eax);
    /* 006c3a6a: mov dword ptr [0xaab3ac], eax */ W32((u32)(0xaab3acu), r_eax);
    /* 006c3a6f: jmp 0x6c3cd3 */ goto L_006c3cd3;
L_006c3cd3:; BB(0x006c3cd3);
    /* 006c3cd3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c3cd4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c3cd5: ret  */ FN_RET(0x006c3a4f); r_esp += 4; return;
}

void f_006c3a74(void)
{
    FN_ENTER(0x006c3a74);
    /* 006c3a74: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c3a76: mov dword ptr [0xa95de0], eax */ W32((u32)(0xa95de0u), r_eax);
    /* 006c3a7b: mov dword ptr [0xaab3ac], eax */ W32((u32)(0xaab3acu), r_eax);
    /* 006c3a80: jmp 0x6c3cd3 */ goto L_006c3cd3;
L_006c3cd3:; BB(0x006c3cd3);
    /* 006c3cd3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c3cd4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c3cd5: ret  */ FN_RET(0x006c3a74); r_esp += 4; return;
}

void f_006c3a85(void)
{
    FN_ENTER(0x006c3a85);
    /* 006c3a85: call 0x6ffa24 */ r_esp -= 4; W32(r_esp, 0x6c3a8au); f_006ffa24();
    /* 006c3a8a: push dword ptr [0xa95dd8] */ { u32 v = R32((u32)(0xa95dd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c3a90: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c3a95u); f_006dc358();
    /* 006c3a95: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c3a96: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c3a98: jne 0x6c3cd3 */ if (!fZ) goto L_006c3cd3;
L_006c3a9e:; BB(0x006c3a9e);
    /* 006c3a9e: mov dword ptr [0xa95de0], 0xe */ W32((u32)(0xa95de0u), 0xeu);
    /* 006c3aa8: jmp 0x6c3cd3 */ goto L_006c3cd3;
L_006c3cd3:; BB(0x006c3cd3);
    /* 006c3cd3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c3cd4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c3cd5: ret  */ FN_RET(0x006c3a85); r_esp += 4; return;
}

void f_006c3aad(void)
{
    FN_ENTER(0x006c3aad);
    /* 006c3aad: call 0x6ffa24 */ r_esp -= 4; W32(r_esp, 0x6c3ab2u); f_006ffa24();
    /* 006c3ab2: push dword ptr [0xa95dd8] */ { u32 v = R32((u32)(0xa95dd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c3ab8: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c3abdu); f_006dc358();
    /* 006c3abd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c3abe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c3ac0: jne 0x6c3cd3 */ if (!fZ) goto L_006c3cd3;
L_006c3ac6:; BB(0x006c3ac6);
    /* 006c3ac6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c3ac8: mov dword ptr [0xa95de0], eax */ W32((u32)(0xa95de0u), r_eax);
    /* 006c3acd: mov dword ptr [0xaab3ac], eax */ W32((u32)(0xaab3acu), r_eax);
    /* 006c3ad2: jmp 0x6c3cd3 */ goto L_006c3cd3;
L_006c3cd3:; BB(0x006c3cd3);
    /* 006c3cd3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c3cd4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c3cd5: ret  */ FN_RET(0x006c3aad); r_esp += 4; return;
}

void f_006c3ad7(void)
{
    FN_ENTER(0x006c3ad7);
    /* 006c3ad7: call 0x6ffa24 */ r_esp -= 4; W32(r_esp, 0x6c3adcu); f_006ffa24();
    /* 006c3adc: push dword ptr [0xa95ddc] */ { u32 v = R32((u32)(0xa95ddcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c3ae2: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c3ae7u); f_006dc358();
    /* 006c3ae7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c3ae8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c3aea: jne 0x6c3cd3 */ if (!fZ) goto L_006c3cd3;
L_006c3af0:; BB(0x006c3af0);
    /* 006c3af0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c3af2: mov dword ptr [0xa95de0], eax */ W32((u32)(0xa95de0u), r_eax);
    /* 006c3af7: mov dword ptr [0xaab3ac], eax */ W32((u32)(0xaab3acu), r_eax);
    /* 006c3afc: jmp 0x6c3cd3 */ goto L_006c3cd3;
L_006c3cd3:; BB(0x006c3cd3);
    /* 006c3cd3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c3cd4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c3cd5: ret  */ FN_RET(0x006c3ad7); r_esp += 4; return;
}

void f_006c3b01(void)
{
    FN_ENTER(0x006c3b01);
    /* 006c3b01: call 0x6c3de4 */ r_esp -= 4; W32(r_esp, 0x6c3b06u); f_006c3de4();
    /* 006c3b06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c3b08: jne 0x6c3cd3 */ if (!fZ) goto L_006c3cd3;
L_006c3b0e:; BB(0x006c3b0e);
    /* 006c3b0e: mov dword ptr [0xa95de0], 6 */ W32((u32)(0xa95de0u), 0x6u);
    /* 006c3b18: jmp 0x6c3cd3 */ goto L_006c3cd3;
L_006c3cd3:; BB(0x006c3cd3);
    /* 006c3cd3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c3cd4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c3cd5: ret  */ FN_RET(0x006c3b01); r_esp += 4; return;
}

void f_006c3b1d(void)
{
    FN_ENTER(0x006c3b1d);
    /* 006c3b1d: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c3b22: push dword ptr [0xa95e2c] */ { u32 v = R32((u32)(0xa95e2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c3b28: push dword ptr [0xa95e44] */ { u32 v = R32((u32)(0xa95e44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c3b2e: mov eax, dword ptr [0xa95df0] */ r_eax = R32((u32)(0xa95df0u));
    /* 006c3b33: mov edx, dword ptr [eax + 0x110] */ r_edx = R32((u32)(r_eax+0x110u));
    /* 006c3b39: mov dword ptr [0xa95dc4], edx */ W32((u32)(0xa95dc4u), r_edx);
    /* 006c3b3f: mov dword ptr [0xa95dc0], edx */ W32((u32)(0xa95dc0u), r_edx);
    /* 006c3b45: call 0x86b324 */ r_esp -= 4; W32(r_esp, 0x6c3b4au); f_0086b324();
    /* 006c3b4a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c3b4d: call 0x6c1bdc */ r_esp -= 4; W32(r_esp, 0x6c3b52u); f_006c1bdc();
    /* 006c3b52: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c3b55: jne 0x6c3c17 */ if (!fZ) goto L_006c3c17;
L_006c3b5b:; BB(0x006c3b5b);
    /* 006c3b5b: imul eax, dword ptr [0xa95e48], 0x2ea4 */ { i64 t = (i64)(i32)R32((u32)(0xa95e48u)) * (i64)(i32)0x2ea4u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006c3b65: mov edx, dword ptr [0xa95e44] */ r_edx = R32((u32)(0xa95e44u));
    /* 006c3b6b: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c3b70: lea ecx, [eax + edx + 4] */ r_ecx = (u32)(r_eax+r_edx+0x4u);
    /* 006c3b74: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006c3b75: push dword ptr [0xa95dfc] */ { u32 v = R32((u32)(0xa95dfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c3b7b: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6c3b80u); f_0086b6b8();
    /* 006c3b80: imul eax, dword ptr [0xa95e48], 0x2ea4 */ { i64 t = (i64)(i32)R32((u32)(0xa95e48u)) * (i64)(i32)0x2ea4u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006c3b8a: mov edx, dword ptr [0xa95e44] */ r_edx = R32((u32)(0xa95e44u));
    /* 006c3b90: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c3b95: lea ecx, [eax + edx + 0x4e0] */ r_ecx = (u32)(r_eax+r_edx+0x4e0u);
    /* 006c3b9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006c3b9d: push dword ptr [0xa95df8] */ { u32 v = R32((u32)(0xa95df8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c3ba3: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6c3ba8u); f_0086b6b8();
    /* 006c3ba8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c3baa: call 0x6bb754 */ r_esp -= 4; W32(r_esp, 0x6c3bafu); f_006bb754();
    /* 006c3baf: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c3bb2: mov eax, dword ptr [0xa95db0] */ r_eax = R32((u32)(0xa95db0u));
    /* 006c3bb7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c3bb9: je 0x6c3bc2 */ if (fZ) goto L_006c3bc2;
L_006c3bbb:; BB(0x006c3bbb);
    /* 006c3bbb: mov eax, dword ptr [0xa95dfc] */ r_eax = R32((u32)(0xa95dfcu));
    /* 006c3bc0: jmp 0x6c3c04 */ goto L_006c3c04;
L_006c3bc2:; BB(0x006c3bc2);
    /* 006c3bc2: mov edx, dword ptr [0xa95df8] */ r_edx = R32((u32)(0xa95df8u));
    /* 006c3bc8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c3bca: je 0x6c3bd6 */ if (fZ) goto L_006c3bd6;
L_006c3bcc:; BB(0x006c3bcc);
    /* 006c3bcc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006c3bce: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c3bd0: jne 0x6c3ce7 */ if (!fZ) goto L_006c3ce7;
L_006c3bd6:; BB(0x006c3bd6);
    /* 006c3bd6: mov eax, dword ptr [0xa95dfc] */ r_eax = R32((u32)(0xa95dfcu));
    /* 006c3bdb: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 006c3bde: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c3be0: jne 0x6c3c04 */ if (!fZ) goto L_006c3c04;
L_006c3be2:; BB(0x006c3be2);
    /* 006c3be2: mov ecx, dword ptr [eax + 0x36c] */ r_ecx = R32((u32)(r_eax+0x36cu));
    /* 006c3be8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c3bea: jne 0x6c3c04 */ if (!fZ) goto L_006c3c04;
L_006c3bec:; BB(0x006c3bec);
    /* 006c3bec: mov ecx, dword ptr [edx + 0x21c] */ r_ecx = R32((u32)(r_edx+0x21cu));
    /* 006c3bf2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c3bf4: jne 0x6c3c04 */ if (!fZ) goto L_006c3c04;
L_006c3bf6:; BB(0x006c3bf6);
    /* 006c3bf6: mov edx, dword ptr [edx + 0x220] */ r_edx = R32((u32)(r_edx+0x220u));
    /* 006c3bfc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c3bfe: je 0x6c3cd6 */ if (fZ) goto L_006c3cd6;
L_006c3c04:; BB(0x006c3c04);
    /* 006c3c04: mov edx, dword ptr [0xa9cd44] */ r_edx = R32((u32)(0xa9cd44u));
    /* 006c3c0a: mov byte ptr [eax + 3], dl */ W8((u32)(r_eax+0x3u), (u8)r_edx);
    /* 006c3c0d: mov dword ptr [0xa95db4], 0 */ W32((u32)(0xa95db4u), 0x0u);
L_006c3c17:; BB(0x006c3c17);
    /* 006c3c17: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c3c19: mov dword ptr [0xa95de0], eax */ W32((u32)(0xa95de0u), r_eax);
    /* 006c3c1e: mov dword ptr [0xaab3ac], eax */ W32((u32)(0xaab3acu), r_eax);
    /* 006c3c23: jmp 0x6c3cd3 */ goto L_006c3cd3;
L_006c3cd3:; BB(0x006c3cd3);
    /* 006c3cd3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c3cd4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c3cd5: ret  */ FN_RET(0x006c3b1d); r_esp += 4; return;
L_006c3cd6:; BB(0x006c3cd6);
    /* 006c3cd6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c3cd7: call 0x6ab1b4 */ r_esp -= 4; W32(r_esp, 0x6c3cdcu); f_006ab1b4();
    /* 006c3cdc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c3cdd: mov eax, dword ptr [0xa95dfc] */ r_eax = R32((u32)(0xa95dfcu));
    /* 006c3ce2: jmp 0x6c3c04 */ goto L_006c3c04;
L_006c3ce7:; BB(0x006c3ce7);
    /* 006c3ce7: call 0x6c7754 */ r_esp -= 4; W32(r_esp, 0x6c3cecu); f_006c7754();
    /* 006c3cec: mov eax, dword ptr [0xa95dfc] */ r_eax = R32((u32)(0xa95dfcu));
    /* 006c3cf1: jmp 0x6c3c04 */ goto L_006c3c04;
}

void f_006c3c28(void)
{
    FN_ENTER(0x006c3c28);
    /* 006c3c28: call 0x6ffa24 */ r_esp -= 4; W32(r_esp, 0x6c3c2du); f_006ffa24();
    /* 006c3c2d: push dword ptr [0xa95ddc] */ { u32 v = R32((u32)(0xa95ddcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c3c33: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c3c38u); f_006dc358();
    /* 006c3c38: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c3c39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c3c3b: jne 0x6c3cd3 */ if (!fZ) goto L_006c3cd3;
L_006c3c41:; BB(0x006c3c41);
    /* 006c3c41: mov dword ptr [0xa95de0], 9 */ W32((u32)(0xa95de0u), 0x9u);
    /* 006c3c4b: jmp 0x6c3cd3 */ goto L_006c3cd3;
L_006c3cd3:; BB(0x006c3cd3);
    /* 006c3cd3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c3cd4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c3cd5: ret  */ FN_RET(0x006c3c28); r_esp += 4; return;
}

void f_006c3c50(void)
{
    FN_ENTER(0x006c3c50);
    /* 006c3c50: call 0x6c3d74 */ r_esp -= 4; W32(r_esp, 0x6c3c55u); f_006c3d74();
    /* 006c3c55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c3c57: jne 0x6c3cd3 */ if (!fZ) goto L_006c3cd3;
L_006c3c59:; BB(0x006c3c59);
    /* 006c3c59: mov dword ptr [0xa95de0], 8 */ W32((u32)(0xa95de0u), 0x8u);
    /* 006c3c63: jmp 0x6c3cd3 */ goto L_006c3cd3;
L_006c3cd3:; BB(0x006c3cd3);
    /* 006c3cd3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c3cd4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c3cd5: ret  */ FN_RET(0x006c3c50); r_esp += 4; return;
}

void f_006c3c65(void)
{
    FN_ENTER(0x006c3c65);
    /* 006c3c65: call 0x6ffa24 */ r_esp -= 4; W32(r_esp, 0x6c3c6au); f_006ffa24();
    /* 006c3c6a: push dword ptr [0xa95ddc] */ { u32 v = R32((u32)(0xa95ddcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c3c70: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c3c75u); f_006dc358();
    /* 006c3c75: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c3c76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c3c78: jne 0x6c3cd3 */ if (!fZ) goto L_006c3cd3;
L_006c3c7a:; BB(0x006c3c7a);
    /* 006c3c7a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c3c7c: mov dword ptr [0xa95de0], eax */ W32((u32)(0xa95de0u), r_eax);
    /* 006c3c81: mov dword ptr [0xaab3ac], eax */ W32((u32)(0xaab3acu), r_eax);
    /* 006c3c86: jmp 0x6c3cd3 */ goto L_006c3cd3;
L_006c3cd3:; BB(0x006c3cd3);
    /* 006c3cd3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c3cd4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c3cd5: ret  */ FN_RET(0x006c3c65); r_esp += 4; return;
}

void f_006c3c88(void)
{
    FN_ENTER(0x006c3c88);
    /* 006c3c88: call 0x6c3de4 */ r_esp -= 4; W32(r_esp, 0x6c3c8du); f_006c3de4();
    /* 006c3c8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c3c8f: jne 0x6c3cd3 */ if (!fZ) goto L_006c3cd3;
L_006c3c91:; BB(0x006c3c91);
    /* 006c3c91: mov dword ptr [0xa95de0], 6 */ W32((u32)(0xa95de0u), 0x6u);
    /* 006c3c9b: jmp 0x6c3cd3 */ goto L_006c3cd3;
L_006c3cd3:; BB(0x006c3cd3);
    /* 006c3cd3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c3cd4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c3cd5: ret  */ FN_RET(0x006c3c88); r_esp += 4; return;
}

void f_006c3c9d(void)
{
    FN_ENTER(0x006c3c9d);
    /* 006c3c9d: call 0x6c2fd8 */ r_esp -= 4; W32(r_esp, 0x6c3ca2u); f_006c2fd8();
    /* 006c3ca2: mov dword ptr [0xa95de0], 5 */ W32((u32)(0xa95de0u), 0x5u);
    /* 006c3cac: jmp 0x6c3cd3 */ goto L_006c3cd3;
L_006c3cd3:; BB(0x006c3cd3);
    /* 006c3cd3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c3cd4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c3cd5: ret  */ FN_RET(0x006c3c9d); r_esp += 4; return;
}

void f_006c3cae(void)
{
    FN_ENTER(0x006c3cae);
    /* 006c3cae: call 0x6aa8e8 */ r_esp -= 4; W32(r_esp, 0x6c3cb3u); f_006aa8e8();
    /* 006c3cb3: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x6c3cb8u); f_007083d4();
    /* 006c3cb8: mov dword ptr [0xa95de0], 4 */ W32((u32)(0xa95de0u), 0x4u);
    /* 006c3cc2: jmp 0x6c3cd3 */ goto L_006c3cd3;
L_006c3cd3:; BB(0x006c3cd3);
    /* 006c3cd3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c3cd4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c3cd5: ret  */ FN_RET(0x006c3cae); r_esp += 4; return;
}

void f_006c3cc4(void)
{
    FN_ENTER(0x006c3cc4);
    /* 006c3cc4: call 0x6c78b8 */ r_esp -= 4; W32(r_esp, 0x6c3cc9u); f_006c78b8();
    /* 006c3cc9: mov dword ptr [0xa95de0], 4 */ W32((u32)(0xa95de0u), 0x4u);
    /* 006c3cd3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c3cd4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c3cd5: ret  */ FN_RET(0x006c3cc4); r_esp += 4; return;
}

void f_006c3cd3(void)
{
    FN_ENTER(0x006c3cd3);
    /* 006c3cd3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c3cd4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c3cd5: ret  */ FN_RET(0x006c3cd3); r_esp += 4; return;
}

void f_006c3cf8(void) /* sub_6C3CF8 */
{
    FN_ENTER(0x006c3cf8);
    /* 006c3cf8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c3cf9: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c3cfeu); f_00415cec();
    /* 006c3cfe: mov edx, dword ptr [0xa95dfc] */ r_edx = R32((u32)(0xa95dfcu));
    /* 006c3d04: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c3d07: mov dword ptr [0xa95ddc], eax */ W32((u32)(0xa95ddcu), r_eax);
    /* 006c3d0c: mov ebp, 0xffff0000 */ r_ebp = 0xffff0000u;
    /* 006c3d11: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c3d13: je 0x6c3d34 */ if (fZ) goto L_006c3d34;
L_006c3d15:; BB(0x006c3d15);
    /* 006c3d15: mov edx, dword ptr [0xa95df8] */ r_edx = R32((u32)(0xa95df8u));
    /* 006c3d1b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c3d1d: je 0x6c3d34 */ if (fZ) goto L_006c3d34;
L_006c3d1f:; BB(0x006c3d1f);
    /* 006c3d1f: mov edx, dword ptr [0xa95e44] */ r_edx = R32((u32)(0xa95e44u));
    /* 006c3d25: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c3d27: je 0x6c3d34 */ if (fZ) goto L_006c3d34;
L_006c3d29:; BB(0x006c3d29);
    /* 006c3d29: mov edx, dword ptr [0xa95de0] */ r_edx = R32((u32)(0xa95de0u));
    /* 006c3d2f: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c3d32: je 0x6c3d38 */ if (fZ) goto L_006c3d38;
L_006c3d34:; BB(0x006c3d34);
    /* 006c3d34: mov eax, ebp */ r_eax = r_ebp;
    /* 006c3d36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c3d37: ret  */ FN_RET(0x006c3cf8); r_esp += 4; return;
L_006c3d38:; BB(0x006c3d38);
    /* 006c3d38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c3d3a: jl 0x6c3d34 */ if ((fS!=fO)) goto L_006c3d34;
L_006c3d3c:; BB(0x006c3d3c);
    /* 006c3d3c: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c3d3f: jg 0x6c3d34 */ if ((!fZ&&fS==fO)) goto L_006c3d34;
L_006c3d41:; BB(0x006c3d41);
    /* 006c3d41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c3d42: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c3d47u); f_006dc358();
    /* 006c3d47: mov ebp, eax */ r_ebp = r_eax;
    /* 006c3d49: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c3d4c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c3d4e: jne 0x6c3d34 */ if (!fZ) goto L_006c3d34;
L_006c3d50:; BB(0x006c3d50);
    /* 006c3d50: call 0x6c3d74 */ r_esp -= 4; W32(r_esp, 0x6c3d55u); f_006c3d74();
    /* 006c3d55: mov ebp, eax */ r_ebp = r_eax;
    /* 006c3d57: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c3d59: jne 0x6c3d34 */ if (!fZ) goto L_006c3d34;
L_006c3d5b:; BB(0x006c3d5b);
    /* 006c3d5b: mov dword ptr [0xa95de0], 8 */ W32((u32)(0xa95de0u), 0x8u);
    /* 006c3d65: push 0xa95de4 */ { u32 v = 0xa95de4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c3d6a: call 0x83ace8 */ r_esp -= 4; W32(r_esp, 0x6c3d6fu); f_0083ace8();
    /* 006c3d6f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c3d70: jmp 0x6c3d34 */ goto L_006c3d34;
}

void f_006c3d74(void) /* sub_6C3D74 */
{
    FN_ENTER(0x006c3d74);
    /* 006c3d74: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c3d79u); f_00415cec();
    /* 006c3d79: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c3d7c: mov dword ptr [0xa95ddc], eax */ W32((u32)(0xa95ddcu), r_eax);
    /* 006c3d81: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 006c3d86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c3d88: jl 0x6c3dde */ if ((fS!=fO)) goto L_006c3dde;
L_006c3d8a:; BB(0x006c3d8a);
    /* 006c3d8a: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c3d8d: jg 0x6c3dde */ if ((!fZ&&fS==fO)) goto L_006c3dde;
L_006c3d8f:; BB(0x006c3d8f);
    /* 006c3d8f: push 0x9ceac8 */ { u32 v = 0x9ceac8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c3d94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c3d95: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x6c3d9au); f_0082c198();
    /* 006c3d9a: mov edx, eax */ r_edx = r_eax;
    /* 006c3d9c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c3d9f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c3da1: jne 0x6c3dde */ if (!fZ) goto L_006c3dde;
L_006c3da3:; BB(0x006c3da3);
    /* 006c3da3: mov eax, dword ptr [0xa95dd4] */ r_eax = R32((u32)(0xa95dd4u));
    /* 006c3da8: mov dword ptr [0xaab3ac], 1 */ W32((u32)(0xaab3acu), 0x1u);
    /* 006c3db2: shl eax, 0xe */ { u32 c = (14u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006c3db5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c3db6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c3db8: push dword ptr [0xa95e2c] */ { u32 v = R32((u32)(0xa95e2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c3dbe: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c3dc3u); f_0086b688();
    /* 006c3dc3: push dword ptr [0xa95e2c] */ { u32 v = R32((u32)(0xa95e2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c3dc9: push 0x9ceac8 */ { u32 v = 0x9ceac8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c3dce: push dword ptr [0xa95ddc] */ { u32 v = R32((u32)(0xa95ddcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c3dd4: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c3dd9u); f_006dc358();
    /* 006c3dd9: mov edx, eax */ r_edx = r_eax;
    /* 006c3ddb: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006c3dde:; BB(0x006c3dde);
    /* 006c3dde: mov eax, edx */ r_eax = r_edx;
    /* 006c3de0: ret  */ FN_RET(0x006c3d74); r_esp += 4; return;
}

void f_006c3de4(void) /* sub_6C3DE4 */
{
    FN_ENTER(0x006c3de4);
    /* 006c3de4: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c3de9u); f_00415cec();
    /* 006c3de9: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c3dec: mov dword ptr [0xa95ddc], eax */ W32((u32)(0xa95ddcu), r_eax);
    /* 006c3df1: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 006c3df6: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c3df9: jge 0x6c3e21 */ if ((fS==fO)) goto L_006c3e21;
L_006c3dfb:; BB(0x006c3dfb);
    /* 006c3dfb: push dword ptr [0xa95dd4] */ { u32 v = R32((u32)(0xa95dd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c3e01: push dword ptr [0xa95e2c] */ { u32 v = R32((u32)(0xa95e2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c3e07: mov dword ptr [0xaab3ac], 1 */ W32((u32)(0xaab3acu), 0x1u);
    /* 006c3e11: push 0x9ceac8 */ { u32 v = 0x9ceac8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c3e16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c3e17: call 0x828928 */ r_esp -= 4; W32(r_esp, 0x6c3e1cu); f_00828928();
    /* 006c3e1c: mov edx, eax */ r_edx = r_eax;
    /* 006c3e1e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006c3e21:; BB(0x006c3e21);
    /* 006c3e21: mov eax, edx */ r_eax = r_edx;
    /* 006c3e23: ret  */ FN_RET(0x006c3de4); r_esp += 4; return;
}

void f_006c3e24(void) /* sub_6C3E24 */
{
    FN_ENTER(0x006c3e24);
    /* 006c3e24: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c3e29u); f_00415cec();
    /* 006c3e29: mov edx, dword ptr [0xa95dfc] */ r_edx = R32((u32)(0xa95dfcu));
    /* 006c3e2f: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c3e32: mov dword ptr [0xa95ddc], eax */ W32((u32)(0xa95ddcu), r_eax);
    /* 006c3e37: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c3e39: je 0x6c3e62 */ if (fZ) goto L_006c3e62;
L_006c3e3b:; BB(0x006c3e3b);
    /* 006c3e3b: mov edx, dword ptr [0xa95df8] */ r_edx = R32((u32)(0xa95df8u));
    /* 006c3e41: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c3e43: je 0x6c3e62 */ if (fZ) goto L_006c3e62;
L_006c3e45:; BB(0x006c3e45);
    /* 006c3e45: mov edx, dword ptr [0xa95e44] */ r_edx = R32((u32)(0xa95e44u));
    /* 006c3e4b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c3e4d: je 0x6c3e62 */ if (fZ) goto L_006c3e62;
L_006c3e4f:; BB(0x006c3e4f);
    /* 006c3e4f: mov edx, dword ptr [0xa95de0] */ r_edx = R32((u32)(0xa95de0u));
    /* 006c3e55: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c3e57: jne 0x6c3e62 */ if (!fZ) goto L_006c3e62;
L_006c3e59:; BB(0x006c3e59);
    /* 006c3e59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c3e5b: jl 0x6c3e62 */ if ((fS!=fO)) goto L_006c3e62;
L_006c3e5d:; BB(0x006c3e5d);
    /* 006c3e5d: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c3e60: jle 0x6c3e68 */ if ((fZ||fS!=fO)) goto L_006c3e68;
L_006c3e62:; BB(0x006c3e62);
    /* 006c3e62: mov eax, 0xffff0000 */ r_eax = 0xffff0000u;
    /* 006c3e67: ret  */ FN_RET(0x006c3e24); r_esp += 4; return;
L_006c3e68:; BB(0x006c3e68);
    /* 006c3e68: call 0x6c79f8 */ r_esp -= 4; W32(r_esp, 0x6c3e6du); f_006c79f8();
    /* 006c3e6d: call 0x6c79c0 */ r_esp -= 4; W32(r_esp, 0x6c3e72u); f_006c79c0();
    /* 006c3e72: call 0x6c2fd8 */ r_esp -= 4; W32(r_esp, 0x6c3e77u); f_006c2fd8();
    /* 006c3e77: call 0x6c3de4 */ r_esp -= 4; W32(r_esp, 0x6c3e7cu); f_006c3de4();
    /* 006c3e7c: mov dword ptr [0xa95de0], 6 */ W32((u32)(0xa95de0u), 0x6u);
    /* 006c3e86: mov eax, 7 */ r_eax = 0x7u;
    /* 006c3e8b: ret  */ FN_RET(0x006c3e24); r_esp += 4; return;
}

void f_006c3e8c(void) /* sub_6C3E8C */
{
    FN_ENTER(0x006c3e8c);
    /* 006c3e8c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c3e8d: mov eax, dword ptr [0xa95df0] */ r_eax = R32((u32)(0xa95df0u));
    /* 006c3e92: mov edx, 0xffff0000 */ r_edx = 0xffff0000u;
    /* 006c3e97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c3e99: je 0x6c3ed9 */ if (fZ) goto L_006c3ed9;
L_006c3e9b:; BB(0x006c3e9b);
    /* 006c3e9b: mov eax, dword ptr [0xa95de0] */ r_eax = R32((u32)(0xa95de0u));
    /* 006c3ea0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c3ea2: jne 0x6c3ed9 */ if (!fZ) goto L_006c3ed9;
L_006c3ea4:; BB(0x006c3ea4);
    /* 006c3ea4: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c3ea9u); f_00415cec();
    /* 006c3ea9: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c3eac: mov dword ptr [0xa95dcc], eax */ W32((u32)(0xa95dccu), r_eax);
    /* 006c3eb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c3eb2: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c3eb7u); f_006dc358();
    /* 006c3eb7: mov edx, eax */ r_edx = r_eax;
    /* 006c3eb9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c3ebc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c3ebe: jne 0x6c3ed9 */ if (!fZ) goto L_006c3ed9;
L_006c3ec0:; BB(0x006c3ec0);
    /* 006c3ec0: push 0x9ceb0c */ { u32 v = 0x9ceb0cu; r_esp -= 4; W32(r_esp, v); }
    /* 006c3ec5: push dword ptr [0xa95dcc] */ { u32 v = R32((u32)(0xa95dccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c3ecb: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x6c3ed0u); f_0082c198();
    /* 006c3ed0: mov edx, eax */ r_edx = r_eax;
    /* 006c3ed2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c3ed5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c3ed7: je 0x6c3edd */ if (fZ) goto L_006c3edd;
L_006c3ed9:; BB(0x006c3ed9);
    /* 006c3ed9: mov eax, edx */ r_eax = r_edx;
    /* 006c3edb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c3edc: ret  */ FN_RET(0x006c3e8c); r_esp += 4; return;
L_006c3edd:; BB(0x006c3edd);
    /* 006c3edd: mov eax, dword ptr [0xa95dcc] */ r_eax = R32((u32)(0xa95dccu));
    /* 006c3ee2: call 0x6c31e4 */ r_esp -= 4; W32(r_esp, 0x6c3ee7u); f_006c31e4();
    /* 006c3ee7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c3ee9: jne 0x6c3f09 */ if (!fZ) goto L_006c3f09;
L_006c3eeb:; BB(0x006c3eeb);
    /* 006c3eeb: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 006c3eef: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c3ef1: je 0x6c3eff */ if (fZ) goto L_006c3eff;
L_006c3ef3:; BB(0x006c3ef3);
    /* 006c3ef3: mov dword ptr [0xa95de0], 0x11 */ W32((u32)(0xa95de0u), 0x11u);
    /* 006c3efd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c3efe: ret  */ FN_RET(0x006c3e8c); r_esp += 4; return;
L_006c3eff:; BB(0x006c3eff);
    /* 006c3eff: mov dword ptr [0xa95de0], 0x10 */ W32((u32)(0xa95de0u), 0x10u);
L_006c3f09:; BB(0x006c3f09);
    /* 006c3f09: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c3f0a: ret  */ FN_RET(0x006c3e8c); r_esp += 4; return;
}

void f_006c3f0c(void) /* sub_6C3F0C */
{
    FN_ENTER(0x006c3f0c);
    /* 006c3f0c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006c3f0d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c3f0e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c3f0f: mov edx, 0xffff0000 */ r_edx = 0xffff0000u;
    /* 006c3f14: mov eax, dword ptr [0xa95df0] */ r_eax = R32((u32)(0xa95df0u));
    /* 006c3f19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c3f1b: je 0x6c3f75 */ if (fZ) goto L_006c3f75;
L_006c3f1d:; BB(0x006c3f1d);
    /* 006c3f1d: mov eax, dword ptr [0xa95de0] */ r_eax = R32((u32)(0xa95de0u));
    /* 006c3f22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c3f24: jne 0x6c3f75 */ if (!fZ) goto L_006c3f75;
L_006c3f26:; BB(0x006c3f26);
    /* 006c3f26: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c3f2bu); f_00415cec();
    /* 006c3f2b: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c3f2e: mov dword ptr [0xa95dcc], eax */ W32((u32)(0xa95dccu), r_eax);
    /* 006c3f33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c3f34: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c3f39u); f_006dc358();
    /* 006c3f39: mov edx, eax */ r_edx = r_eax;
    /* 006c3f3b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c3f3e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c3f40: jne 0x6c3f75 */ if (!fZ) goto L_006c3f75;
L_006c3f42:; BB(0x006c3f42);
    /* 006c3f42: push 0x9ceb0c */ { u32 v = 0x9ceb0cu; r_esp -= 4; W32(r_esp, v); }
    /* 006c3f47: push dword ptr [0xa95dcc] */ { u32 v = R32((u32)(0xa95dccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c3f4d: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x6c3f52u); f_0082c198();
    /* 006c3f52: mov edx, eax */ r_edx = r_eax;
    /* 006c3f54: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c3f57: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c3f59: jne 0x6c3f75 */ if (!fZ) goto L_006c3f75;
L_006c3f5b:; BB(0x006c3f5b);
    /* 006c3f5b: mov eax, dword ptr [0xa95dcc] */ r_eax = R32((u32)(0xa95dccu));
    /* 006c3f60: call 0x6c31e4 */ r_esp -= 4; W32(r_esp, 0x6c3f65u); f_006c31e4();
    /* 006c3f65: mov edx, eax */ r_edx = r_eax;
    /* 006c3f67: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c3f69: jne 0x6c3f75 */ if (!fZ) goto L_006c3f75;
L_006c3f6b:; BB(0x006c3f6b);
    /* 006c3f6b: mov dword ptr [0xa95de0], 0x11 */ W32((u32)(0xa95de0u), 0x11u);
L_006c3f75:; BB(0x006c3f75);
    /* 006c3f75: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c3f77: je 0x6c3f89 */ if (fZ) goto L_006c3f89;
L_006c3f79:; BB(0x006c3f79);
    /* 006c3f79: mov dword ptr [0xa95da8], 0 */ W32((u32)(0xa95da8u), 0x0u);
    /* 006c3f83: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c3f85: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c3f86: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c3f87: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c3f88: ret  */ FN_RET(0x006c3f0c); r_esp += 4; return;
L_006c3f89:; BB(0x006c3f89);
    /* 006c3f89: mov dword ptr [0xa95da8], 1 */ W32((u32)(0xa95da8u), 0x1u);
L_006c3f93:; BB(0x006c3f93);
    /* 006c3f93: mov eax, dword ptr [0xa95de0] */ r_eax = R32((u32)(0xa95de0u));
    /* 006c3f98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c3f9a: je 0x6c3fa8 */ if (fZ) goto L_006c3fa8;
L_006c3f9c:; BB(0x006c3f9c);
    /* 006c3f9c: call 0x6c38bc */ r_esp -= 4; W32(r_esp, 0x6c3fa1u); f_006c38bc();
    /* 006c3fa1: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x6c3fa6u); f_0080030c();
    /* 006c3fa6: jmp 0x6c3f93 */ goto L_006c3f93;
L_006c3fa8:; BB(0x006c3fa8);
    /* 006c3fa8: mov dword ptr [0xa95da8], 0 */ W32((u32)(0xa95da8u), 0x0u);
    /* 006c3fb2: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c3fb7: push dword ptr [0xa95e24] */ { u32 v = R32((u32)(0xa95e24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c3fbd: push dword ptr [0xa95df0] */ { u32 v = R32((u32)(0xa95df0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c3fc3: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6c3fc8u); f_0086b6b8();
    /* 006c3fc8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c3fcb: mov eax, dword ptr [0xa95df0] */ r_eax = R32((u32)(0xa95df0u));
    /* 006c3fd0: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 006c3fd2: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 006c3fd8: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006c3fdd: mov ecx, dword ptr [0xa95df0] */ r_ecx = R32((u32)(0xa95df0u));
    /* 006c3fe3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006c3fe5:; BB(0x006c3fe5);
    /* 006c3fe5: movzx edi, byte ptr [edx + ecx] */ r_edi = (u32)R8((u32)(r_edx+r_ecx));
    /* 006c3fe9: xor eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c3feb: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c3fee: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c3ff0: je 0x6c3ffb */ if (fZ) goto L_006c3ffb;
L_006c3ff2:; BB(0x006c3ff2);
    /* 006c3ff2: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c3ff4: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c3ff9: jmp 0x6c3ffd */ goto L_006c3ffd;
L_006c3ffb:; BB(0x006c3ffb);
    /* 006c3ffb: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c3ffd:; BB(0x006c3ffd);
    /* 006c3ffd: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c3fff: je 0x6c400a */ if (fZ) goto L_006c400a;
L_006c4001:; BB(0x006c4001);
    /* 006c4001: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c4003: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c4008: jmp 0x6c400c */ goto L_006c400c;
L_006c400a:; BB(0x006c400a);
    /* 006c400a: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c400c:; BB(0x006c400c);
    /* 006c400c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c400e: je 0x6c4019 */ if (fZ) goto L_006c4019;
L_006c4010:; BB(0x006c4010);
    /* 006c4010: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c4012: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c4017: jmp 0x6c401b */ goto L_006c401b;
L_006c4019:; BB(0x006c4019);
    /* 006c4019: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c401b:; BB(0x006c401b);
    /* 006c401b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c401d: je 0x6c4028 */ if (fZ) goto L_006c4028;
L_006c401f:; BB(0x006c401f);
    /* 006c401f: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c4021: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c4026: jmp 0x6c402a */ goto L_006c402a;
L_006c4028:; BB(0x006c4028);
    /* 006c4028: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c402a:; BB(0x006c402a);
    /* 006c402a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c402c: je 0x6c4037 */ if (fZ) goto L_006c4037;
L_006c402e:; BB(0x006c402e);
    /* 006c402e: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c4030: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c4035: jmp 0x6c4039 */ goto L_006c4039;
L_006c4037:; BB(0x006c4037);
    /* 006c4037: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c4039:; BB(0x006c4039);
    /* 006c4039: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c403b: je 0x6c4046 */ if (fZ) goto L_006c4046;
L_006c403d:; BB(0x006c403d);
    /* 006c403d: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c403f: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c4044: jmp 0x6c4048 */ goto L_006c4048;
L_006c4046:; BB(0x006c4046);
    /* 006c4046: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c4048:; BB(0x006c4048);
    /* 006c4048: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c404a: je 0x6c4055 */ if (fZ) goto L_006c4055;
L_006c404c:; BB(0x006c404c);
    /* 006c404c: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c404e: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c4053: jmp 0x6c4057 */ goto L_006c4057;
L_006c4055:; BB(0x006c4055);
    /* 006c4055: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c4057:; BB(0x006c4057);
    /* 006c4057: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c4059: je 0x6c4064 */ if (fZ) goto L_006c4064;
L_006c405b:; BB(0x006c405b);
    /* 006c405b: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c405d: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c4062: jmp 0x6c4066 */ goto L_006c4066;
L_006c4064:; BB(0x006c4064);
    /* 006c4064: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c4066:; BB(0x006c4066);
    /* 006c4066: cmp edx, 0xaf0 */ {  u32 a = r_edx; u32 b = 0xaf0u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006c406c: jb 0x6c3fe5 */ if (fC) goto L_006c3fe5;
L_006c4072:; BB(0x006c4072);
    /* 006c4072: not eax */ r_eax = ~r_eax;
    /* 006c4074: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c4076: je 0x6c407c */ if (fZ) goto L_006c407c;
L_006c4078:; BB(0x006c4078);
    /* 006c4078: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c407a: jmp 0x6c4081 */ goto L_006c4081;
L_006c407c:; BB(0x006c407c);
    /* 006c407c: mov eax, 1 */ r_eax = 0x1u;
L_006c4081:; BB(0x006c4081);
    /* 006c4081: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c4083: mov eax, 0 */ r_eax = 0x0u;
    /* 006c4088: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 006c408b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c408c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c408d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c408e: ret  */ FN_RET(0x006c3f0c); r_esp += 4; return;
}

