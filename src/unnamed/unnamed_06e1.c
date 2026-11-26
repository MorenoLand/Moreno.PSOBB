#include "protos.h"

void f_006e104c(void) /* sub_6E104C */
{
    FN_ENTER(0x006e104c);
    /* 006e104c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e104d: mov ebp, esp */ r_ebp = r_esp;
    /* 006e104f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e1051: push 0x8ee908 */ { u32 v = 0x8ee908u; r_esp -= 4; W32(r_esp, v); }
    /* 006e1056: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e105c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e105d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e1064: sub esp, 0x1a0 */ {  u32 a = r_esp; u32 b = 0x1a0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e106a: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e106d: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006e1070: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006e1073: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006e1076: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 006e1079: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 006e107c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e107e: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006e1080: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e1082: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e1084: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006e1086: movsx edx, word ptr [eax*4 + 0x9cf3d2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax*4+0x9cf3d2u));
    /* 006e108e: movsx ecx, word ptr [eax*4 + 0x9cf3e0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*4+0x9cf3e0u));
    /* 006e1096: lea eax, [edx + ecx + 0x32] */ r_eax = (u32)(r_edx+r_ecx+0x32u);
    /* 006e109a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006e109d: cmp ebx, 0x12 */ {  u32 a = r_ebx; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e10a0: ja 0x6e1908 */ if ((!fC&&!fZ)) goto L_006e1908;
L_006e10a6:; BB(0x006e10a6);
    /* 006e10a6: mov eax, dword ptr [ebx*4 + 0x96cc80] */ r_eax = R32((u32)(r_ebx*4+0x96cc80u));
    /* 006e10ad: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006e1908:; BB(0x006e1908);
    /* 006e1908: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e190b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e190e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e1911: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e1914: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e191b: mov esp, ebp */ r_esp = r_ebp;
    /* 006e191d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e191e: ret  */ FN_RET(0x006e104c); r_esp += 4; return;
}

void f_006e10af(void)
{
    FN_ENTER(0x006e10af);
    /* 006e10af: mov dword ptr [ebp - 0x4c], 0x3f800000 */ W32((u32)(r_ebp+0xffffffb4u), 0x3f800000u);
    /* 006e10b6: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 006e10b8: mov dword ptr [ebp - 0x48], 0x3f19999a */ W32((u32)(r_ebp+0xffffffb8u), 0x3f19999au);
    /* 006e10bf: mov dword ptr [ebp - 0x44], 0x3e4ccccd */ W32((u32)(r_ebp+0xffffffbcu), 0x3e4ccccdu);
    /* 006e10c6: mov dword ptr [ebp - 0x40], 0x3f333333 */ W32((u32)(r_ebp+0xffffffc0u), 0x3f333333u);
    /* 006e10cd: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 006e10d4: mov dword ptr [ebp - 0x38], 0xbf800000 */ W32((u32)(r_ebp+0xffffffc8u), 0xbf800000u);
    /* 006e10db: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006e10e2: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006e10e9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e10eeu); f_005caba4();
    /* 006e10ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e10ef: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006e10f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e10f4: je 0x6e1138 */ if (fZ) goto L_006e1138;
L_006e10f6:; BB(0x006e10f6);
    /* 006e10f6: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 006e10fd: mov dword ptr [ebp - 4], 0x10 */ W32((u32)(r_ebp+0xfffffffcu), 0x10u);
    /* 006e1104: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e110a: mov ecx, eax */ r_ecx = r_eax;
    /* 006e110c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006e110f: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e1112: push dword ptr [0xa9d47c] */ { u32 v = R32((u32)(0xa9d47cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e1118: push 0x3eb33333 */ { u32 v = 0x3eb33333u; r_esp -= 4; W32(r_esp, v); }
    /* 006e111d: lea edi, [ebp - 0x4c] */ r_edi = (u32)(r_ebp+0xffffffb4u);
    /* 006e1120: lea esi, [ebp - 0x3c] */ r_esi = (u32)(r_ebp+0xffffffc4u);
    /* 006e1123: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e1124: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 006e1129: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e112a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e112b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e112c: call 0x6eb618 */ r_esp -= 4; W32(r_esp, 0x6e1131u); f_006eb618();
    /* 006e1131: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_006e1138:; BB(0x006e1138);
    /* 006e1138: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e113f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006e1142: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 006e1149: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e114c: jne 0x6e1908 */ if (!fZ) goto L_006e1908;
L_006e1152:; BB(0x006e1152);
    /* 006e1152: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006e1159: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 006e115b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e1160u); f_005caba4();
    /* 006e1160: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e1161: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006e1164: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e1166: je 0x6e1908 */ if (fZ) goto L_006e1908;
L_006e116c:; BB(0x006e116c);
    /* 006e116c: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 006e1173: mov dword ptr [ebp - 4], 0x11 */ W32((u32)(r_ebp+0xfffffffcu), 0x11u);
    /* 006e117a: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e1180: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006e1183: mov ecx, eax */ r_ecx = r_eax;
    /* 006e1185: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e1186: call 0x6e244c */ r_esp -= 4; W32(r_esp, 0x6e118bu); f_006e244c();
    /* 006e118b: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006e1192: jmp 0x6e1908 */ goto L_006e1908;
L_006e1908:; BB(0x006e1908);
    /* 006e1908: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e190b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e190e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e1911: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e1914: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e191b: mov esp, ebp */ r_esp = r_ebp;
    /* 006e191d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e191e: ret  */ FN_RET(0x006e10af); r_esp += 4; return;
}

void f_006e1197(void)
{
    FN_ENTER(0x006e1197);
    /* 006e1197: mov dword ptr [ebp - 0x78], 0x3f800000 */ W32((u32)(r_ebp+0xffffff88u), 0x3f800000u);
    /* 006e119e: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 006e11a0: mov dword ptr [ebp - 0x74], 0x3f666666 */ W32((u32)(r_ebp+0xffffff8cu), 0x3f666666u);
    /* 006e11a7: mov dword ptr [ebp - 0x70], 0x3e99999a */ W32((u32)(r_ebp+0xffffff90u), 0x3e99999au);
    /* 006e11ae: mov dword ptr [ebp - 0x6c], 0x3f800000 */ W32((u32)(r_ebp+0xffffff94u), 0x3f800000u);
    /* 006e11b5: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 006e11bc: mov dword ptr [ebp - 0x64], 0xbf800000 */ W32((u32)(r_ebp+0xffffff9cu), 0xbf800000u);
    /* 006e11c3: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 006e11ca: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 006e11d1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e11d6u); f_005caba4();
    /* 006e11d6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e11d7: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 006e11da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e11dc: je 0x6e1220 */ if (fZ) goto L_006e1220;
L_006e11de:; BB(0x006e11de);
    /* 006e11de: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
    /* 006e11e5: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 006e11ec: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e11f2: mov ecx, eax */ r_ecx = r_eax;
    /* 006e11f4: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006e11f7: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e11fa: push dword ptr [0xa9d47c] */ { u32 v = R32((u32)(0xa9d47cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e1200: push 0x3eb33333 */ { u32 v = 0x3eb33333u; r_esp -= 4; W32(r_esp, v); }
    /* 006e1205: lea edi, [ebp - 0x78] */ r_edi = (u32)(r_ebp+0xffffff88u);
    /* 006e1208: lea esi, [ebp - 0x68] */ r_esi = (u32)(r_ebp+0xffffff98u);
    /* 006e120b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e120c: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 006e1211: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e1212: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e1213: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e1214: call 0x6eb618 */ r_esp -= 4; W32(r_esp, 0x6e1219u); f_006eb618();
    /* 006e1219: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_006e1220:; BB(0x006e1220);
    /* 006e1220: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e1227: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006e122a: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 006e1231: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e1234: jne 0x6e1908 */ if (!fZ) goto L_006e1908;
L_006e123a:; BB(0x006e123a);
    /* 006e123a: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 006e1241: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 006e1243: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e1248u); f_005caba4();
    /* 006e1248: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e1249: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e124c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e124e: je 0x6e1908 */ if (fZ) goto L_006e1908;
L_006e1254:; BB(0x006e1254);
    /* 006e1254: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 006e125b: mov dword ptr [ebp - 4], 0xf */ W32((u32)(r_ebp+0xfffffffcu), 0xfu);
    /* 006e1262: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e1268: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006e126b: mov ecx, eax */ r_ecx = r_eax;
    /* 006e126d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e126e: call 0x6ebb58 */ r_esp -= 4; W32(r_esp, 0x6e1273u); f_006ebb58();
    /* 006e1273: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 006e127a: jmp 0x6e1908 */ goto L_006e1908;
L_006e1908:; BB(0x006e1908);
    /* 006e1908: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e190b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e190e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e1911: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e1914: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e191b: mov esp, ebp */ r_esp = r_ebp;
    /* 006e191d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e191e: ret  */ FN_RET(0x006e1197); r_esp += 4; return;
}

void f_006e127f(void)
{
    FN_ENTER(0x006e127f);
    /* 006e127f: mov dword ptr [ebp - 0xa4], 0x3f800000 */ W32((u32)(r_ebp+0xffffff5cu), 0x3f800000u);
    /* 006e1289: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 006e128b: mov dword ptr [ebp - 0xa0], 0x3e99999a */ W32((u32)(r_ebp+0xffffff60u), 0x3e99999au);
    /* 006e1295: mov dword ptr [ebp - 0x9c], 0x3f666666 */ W32((u32)(r_ebp+0xffffff64u), 0x3f666666u);
    /* 006e129f: mov dword ptr [ebp - 0x98], 0x3f800000 */ W32((u32)(r_ebp+0xffffff68u), 0x3f800000u);
    /* 006e12a9: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
    /* 006e12b3: mov dword ptr [ebp - 0x90], 0xbf800000 */ W32((u32)(r_ebp+0xffffff70u), 0xbf800000u);
    /* 006e12bd: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
    /* 006e12c7: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 006e12d1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e12d6u); f_005caba4();
    /* 006e12d6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e12d7: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 006e12dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e12df: je 0x6e132f */ if (fZ) goto L_006e132f;
L_006e12e1:; BB(0x006e12e1);
    /* 006e12e1: mov dword ptr [ebp - 0x88], 1 */ W32((u32)(r_ebp+0xffffff78u), 0x1u);
    /* 006e12eb: mov dword ptr [ebp - 4], 0xc */ W32((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 006e12f2: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e12f8: mov ecx, eax */ r_ecx = r_eax;
    /* 006e12fa: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006e12fd: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e1300: push dword ptr [0xa9d47c] */ { u32 v = R32((u32)(0xa9d47cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e1306: push 0x3eb33333 */ { u32 v = 0x3eb33333u; r_esp -= 4; W32(r_esp, v); }
    /* 006e130b: lea edi, [ebp - 0xa4] */ r_edi = (u32)(r_ebp+0xffffff5cu);
    /* 006e1311: lea esi, [ebp - 0x94] */ r_esi = (u32)(r_ebp+0xffffff6cu);
    /* 006e1317: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e1318: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 006e131d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e131e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e131f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e1320: call 0x6eb618 */ r_esp -= 4; W32(r_esp, 0x6e1325u); f_006eb618();
    /* 006e1325: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_006e132f:; BB(0x006e132f);
    /* 006e132f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e1336: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006e1339: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 006e1340: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e1343: jne 0x6e1908 */ if (!fZ) goto L_006e1908;
L_006e1349:; BB(0x006e1349);
    /* 006e1349: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
    /* 006e1350: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 006e1352: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e1357u); f_005caba4();
    /* 006e1357: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e1358: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 006e135b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e135d: je 0x6e1908 */ if (fZ) goto L_006e1908;
L_006e1363:; BB(0x006e1363);
    /* 006e1363: mov dword ptr [ebp - 0x80], 1 */ W32((u32)(r_ebp+0xffffff80u), 0x1u);
    /* 006e136a: mov dword ptr [ebp - 4], 0xd */ W32((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 006e1371: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e1377: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006e137a: mov ecx, eax */ r_ecx = r_eax;
    /* 006e137c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e137d: call 0x6ebb58 */ r_esp -= 4; W32(r_esp, 0x6e1382u); f_006ebb58();
    /* 006e1382: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
    /* 006e1389: jmp 0x6e1908 */ goto L_006e1908;
L_006e1908:; BB(0x006e1908);
    /* 006e1908: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e190b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e190e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e1911: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e1914: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e191b: mov esp, ebp */ r_esp = r_ebp;
    /* 006e191d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e191e: ret  */ FN_RET(0x006e127f); r_esp += 4; return;
}

void f_006e138e(void)
{
    FN_ENTER(0x006e138e);
    /* 006e138e: mov dword ptr [ebp - 0xd0], 0x3f800000 */ W32((u32)(r_ebp+0xffffff30u), 0x3f800000u);
    /* 006e1398: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 006e139a: mov dword ptr [ebp - 0xcc], 0x3f800000 */ W32((u32)(r_ebp+0xffffff34u), 0x3f800000u);
    /* 006e13a4: mov dword ptr [ebp - 0xc8], 0x3f800000 */ W32((u32)(r_ebp+0xffffff38u), 0x3f800000u);
    /* 006e13ae: mov dword ptr [ebp - 0xc4], 0x3f800000 */ W32((u32)(r_ebp+0xffffff3cu), 0x3f800000u);
    /* 006e13b8: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
    /* 006e13c2: mov dword ptr [ebp - 0xbc], 0xbf800000 */ W32((u32)(r_ebp+0xffffff44u), 0xbf800000u);
    /* 006e13cc: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
    /* 006e13d6: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
    /* 006e13e0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e13e5u); f_005caba4();
    /* 006e13e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e13e6: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 006e13ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e13ee: je 0x6e143e */ if (fZ) goto L_006e143e;
L_006e13f0:; BB(0x006e13f0);
    /* 006e13f0: mov dword ptr [ebp - 0xb4], 1 */ W32((u32)(r_ebp+0xffffff4cu), 0x1u);
    /* 006e13fa: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 006e1401: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e1407: mov ecx, eax */ r_ecx = r_eax;
    /* 006e1409: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006e140c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e140f: push dword ptr [0xa9d47c] */ { u32 v = R32((u32)(0xa9d47cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e1415: push 0x3eb33333 */ { u32 v = 0x3eb33333u; r_esp -= 4; W32(r_esp, v); }
    /* 006e141a: lea edi, [ebp - 0xd0] */ r_edi = (u32)(r_ebp+0xffffff30u);
    /* 006e1420: lea esi, [ebp - 0xc0] */ r_esi = (u32)(r_ebp+0xffffff40u);
    /* 006e1426: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e1427: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 006e142c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e142d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e142e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e142f: call 0x6eb618 */ r_esp -= 4; W32(r_esp, 0x6e1434u); f_006eb618();
    /* 006e1434: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
L_006e143e:; BB(0x006e143e);
    /* 006e143e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e1445: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006e1448: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 006e144f: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e1452: jne 0x6e1908 */ if (!fZ) goto L_006e1908;
L_006e1458:; BB(0x006e1458);
    /* 006e1458: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
    /* 006e1462: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 006e1464: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e1469u); f_005caba4();
    /* 006e1469: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e146a: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 006e1470: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e1472: je 0x6e1908 */ if (fZ) goto L_006e1908;
L_006e1478:; BB(0x006e1478);
    /* 006e1478: mov dword ptr [ebp - 0xac], 1 */ W32((u32)(r_ebp+0xffffff54u), 0x1u);
    /* 006e1482: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 006e1489: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e148f: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006e1492: mov ecx, eax */ r_ecx = r_eax;
    /* 006e1494: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e1495: call 0x6e7fc8 */ r_esp -= 4; W32(r_esp, 0x6e149au); f_006e7fc8();
    /* 006e149a: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
    /* 006e14a4: jmp 0x6e1908 */ goto L_006e1908;
L_006e1908:; BB(0x006e1908);
    /* 006e1908: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e190b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e190e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e1911: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e1914: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e191b: mov esp, ebp */ r_esp = r_ebp;
    /* 006e191d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e191e: ret  */ FN_RET(0x006e138e); r_esp += 4; return;
}

void f_006e14a9(void)
{
    FN_ENTER(0x006e14a9);
    /* 006e14a9: mov dword ptr [ebp - 0xfc], 0x3f800000 */ W32((u32)(r_ebp+0xffffff04u), 0x3f800000u);
    /* 006e14b3: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 006e14b5: mov dword ptr [ebp - 0xf8], 0x3f800000 */ W32((u32)(r_ebp+0xffffff08u), 0x3f800000u);
    /* 006e14bf: mov dword ptr [ebp - 0xf4], 0x3f800000 */ W32((u32)(r_ebp+0xffffff0cu), 0x3f800000u);
    /* 006e14c9: mov dword ptr [ebp - 0xf0], 0x3e99999a */ W32((u32)(r_ebp+0xffffff10u), 0x3e99999au);
    /* 006e14d3: mov dword ptr [ebp - 0xec], 0 */ W32((u32)(r_ebp+0xffffff14u), 0x0u);
    /* 006e14dd: mov dword ptr [ebp - 0xe8], 0xbf800000 */ W32((u32)(r_ebp+0xffffff18u), 0xbf800000u);
    /* 006e14e7: mov dword ptr [ebp - 0xe4], 0 */ W32((u32)(r_ebp+0xffffff1cu), 0x0u);
    /* 006e14f1: mov dword ptr [ebp - 0xe0], 0 */ W32((u32)(r_ebp+0xffffff20u), 0x0u);
    /* 006e14fb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e1500u); f_005caba4();
    /* 006e1500: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e1501: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 006e1507: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e1509: je 0x6e1559 */ if (fZ) goto L_006e1559;
L_006e150b:; BB(0x006e150b);
    /* 006e150b: mov dword ptr [ebp - 0xe0], 1 */ W32((u32)(r_ebp+0xffffff20u), 0x1u);
    /* 006e1515: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 006e151c: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e1522: mov ecx, eax */ r_ecx = r_eax;
    /* 006e1524: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006e1527: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e152a: push dword ptr [0xa9d47c] */ { u32 v = R32((u32)(0xa9d47cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e1530: push 0x3eb33333 */ { u32 v = 0x3eb33333u; r_esp -= 4; W32(r_esp, v); }
    /* 006e1535: lea edi, [ebp - 0xfc] */ r_edi = (u32)(r_ebp+0xffffff04u);
    /* 006e153b: lea esi, [ebp - 0xec] */ r_esi = (u32)(r_ebp+0xffffff14u);
    /* 006e1541: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e1542: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 006e1547: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e1548: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e1549: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e154a: call 0x6eb618 */ r_esp -= 4; W32(r_esp, 0x6e154fu); f_006eb618();
    /* 006e154f: mov dword ptr [ebp - 0xe0], 0 */ W32((u32)(r_ebp+0xffffff20u), 0x0u);
L_006e1559:; BB(0x006e1559);
    /* 006e1559: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e1560: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006e1563: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 006e156a: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e156d: jne 0x6e1908 */ if (!fZ) goto L_006e1908;
L_006e1573:; BB(0x006e1573);
    /* 006e1573: mov dword ptr [ebp - 0xd8], 0 */ W32((u32)(r_ebp+0xffffff28u), 0x0u);
    /* 006e157d: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 006e157f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e1584u); f_005caba4();
    /* 006e1584: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e1585: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 006e158b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e158d: je 0x6e1908 */ if (fZ) goto L_006e1908;
L_006e1593:; BB(0x006e1593);
    /* 006e1593: mov dword ptr [ebp - 0xd8], 1 */ W32((u32)(r_ebp+0xffffff28u), 0x1u);
    /* 006e159d: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 006e15a4: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e15aa: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006e15ad: mov ecx, eax */ r_ecx = r_eax;
    /* 006e15af: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e15b0: call 0x6f1cc8 */ r_esp -= 4; W32(r_esp, 0x6e15b5u); f_006f1cc8();
    /* 006e15b5: mov dword ptr [ebp - 0xd8], 0 */ W32((u32)(r_ebp+0xffffff28u), 0x0u);
    /* 006e15bf: jmp 0x6e1908 */ goto L_006e1908;
L_006e1908:; BB(0x006e1908);
    /* 006e1908: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e190b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e190e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e1911: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e1914: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e191b: mov esp, ebp */ r_esp = r_ebp;
    /* 006e191d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e191e: ret  */ FN_RET(0x006e14a9); r_esp += 4; return;
}

void f_006e15c4(void)
{
    FN_ENTER(0x006e15c4);
    /* 006e15c4: mov dword ptr [ebp - 0x128], 0x3f800000 */ W32((u32)(r_ebp+0xfffffed8u), 0x3f800000u);
    /* 006e15ce: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 006e15d0: mov dword ptr [ebp - 0x124], 0x3e99999a */ W32((u32)(r_ebp+0xfffffedcu), 0x3e99999au);
    /* 006e15da: mov dword ptr [ebp - 0x120], 0x3f333333 */ W32((u32)(r_ebp+0xfffffee0u), 0x3f333333u);
    /* 006e15e4: mov dword ptr [ebp - 0x11c], 0x3f800000 */ W32((u32)(r_ebp+0xfffffee4u), 0x3f800000u);
    /* 006e15ee: mov dword ptr [ebp - 0x118], 0 */ W32((u32)(r_ebp+0xfffffee8u), 0x0u);
    /* 006e15f8: mov dword ptr [ebp - 0x114], 0xbf800000 */ W32((u32)(r_ebp+0xfffffeecu), 0xbf800000u);
    /* 006e1602: mov dword ptr [ebp - 0x110], 0 */ W32((u32)(r_ebp+0xfffffef0u), 0x0u);
    /* 006e160c: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
    /* 006e1616: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e161bu); f_005caba4();
    /* 006e161b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e161c: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
    /* 006e1622: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e1624: je 0x6e1674 */ if (fZ) goto L_006e1674;
L_006e1626:; BB(0x006e1626);
    /* 006e1626: mov dword ptr [ebp - 0x10c], 1 */ W32((u32)(r_ebp+0xfffffef4u), 0x1u);
    /* 006e1630: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 006e1637: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e163d: mov ecx, eax */ r_ecx = r_eax;
    /* 006e163f: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006e1642: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e1645: push dword ptr [0xa9d47c] */ { u32 v = R32((u32)(0xa9d47cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e164b: push 0x3eb33333 */ { u32 v = 0x3eb33333u; r_esp -= 4; W32(r_esp, v); }
    /* 006e1650: lea edi, [ebp - 0x128] */ r_edi = (u32)(r_ebp+0xfffffed8u);
    /* 006e1656: lea esi, [ebp - 0x118] */ r_esi = (u32)(r_ebp+0xfffffee8u);
    /* 006e165c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e165d: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 006e1662: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e1663: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e1664: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e1665: call 0x6eb618 */ r_esp -= 4; W32(r_esp, 0x6e166au); f_006eb618();
    /* 006e166a: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
L_006e1674:; BB(0x006e1674);
    /* 006e1674: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e167b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006e167e: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 006e1685: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e1688: jne 0x6e1908 */ if (!fZ) goto L_006e1908;
L_006e168e:; BB(0x006e168e);
    /* 006e168e: mov dword ptr [ebp - 0x104], 0 */ W32((u32)(r_ebp+0xfffffefcu), 0x0u);
    /* 006e1698: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 006e169a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e169fu); f_005caba4();
    /* 006e169f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e16a0: mov dword ptr [ebp - 0x100], eax */ W32((u32)(r_ebp+0xffffff00u), r_eax);
    /* 006e16a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e16a8: je 0x6e1908 */ if (fZ) goto L_006e1908;
L_006e16ae:; BB(0x006e16ae);
    /* 006e16ae: mov dword ptr [ebp - 0x104], 1 */ W32((u32)(r_ebp+0xfffffefcu), 0x1u);
    /* 006e16b8: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 006e16bf: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e16c5: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006e16c8: mov ecx, eax */ r_ecx = r_eax;
    /* 006e16ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e16cb: call 0x6e77b0 */ r_esp -= 4; W32(r_esp, 0x6e16d0u); f_006e77b0();
    /* 006e16d0: mov dword ptr [ebp - 0x104], 0 */ W32((u32)(r_ebp+0xfffffefcu), 0x0u);
    /* 006e16da: jmp 0x6e1908 */ goto L_006e1908;
L_006e1908:; BB(0x006e1908);
    /* 006e1908: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e190b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e190e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e1911: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e1914: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e191b: mov esp, ebp */ r_esp = r_ebp;
    /* 006e191d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e191e: ret  */ FN_RET(0x006e15c4); r_esp += 4; return;
}

void f_006e16df(void)
{
    FN_ENTER(0x006e16df);
    /* 006e16df: mov dword ptr [ebp - 0x154], 0x3f800000 */ W32((u32)(r_ebp+0xfffffeacu), 0x3f800000u);
    /* 006e16e9: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 006e16eb: mov dword ptr [ebp - 0x150], 0x3f800000 */ W32((u32)(r_ebp+0xfffffeb0u), 0x3f800000u);
    /* 006e16f5: mov dword ptr [ebp - 0x14c], 0x3f800000 */ W32((u32)(r_ebp+0xfffffeb4u), 0x3f800000u);
    /* 006e16ff: mov dword ptr [ebp - 0x148], 0x3f800000 */ W32((u32)(r_ebp+0xfffffeb8u), 0x3f800000u);
    /* 006e1709: mov dword ptr [ebp - 0x144], 0 */ W32((u32)(r_ebp+0xfffffebcu), 0x0u);
    /* 006e1713: mov dword ptr [ebp - 0x140], 0xbf800000 */ W32((u32)(r_ebp+0xfffffec0u), 0xbf800000u);
    /* 006e171d: mov dword ptr [ebp - 0x13c], 0 */ W32((u32)(r_ebp+0xfffffec4u), 0x0u);
    /* 006e1727: mov dword ptr [ebp - 0x138], 0 */ W32((u32)(r_ebp+0xfffffec8u), 0x0u);
    /* 006e1731: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e1736u); f_005caba4();
    /* 006e1736: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e1737: mov dword ptr [ebp - 0x134], eax */ W32((u32)(r_ebp+0xfffffeccu), r_eax);
    /* 006e173d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e173f: je 0x6e178f */ if (fZ) goto L_006e178f;
L_006e1741:; BB(0x006e1741);
    /* 006e1741: mov dword ptr [ebp - 0x138], 1 */ W32((u32)(r_ebp+0xfffffec8u), 0x1u);
    /* 006e174b: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 006e1752: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e1758: mov ecx, eax */ r_ecx = r_eax;
    /* 006e175a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006e175d: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e1760: push dword ptr [0xa9d47c] */ { u32 v = R32((u32)(0xa9d47cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e1766: push 0x3eb33333 */ { u32 v = 0x3eb33333u; r_esp -= 4; W32(r_esp, v); }
    /* 006e176b: lea edi, [ebp - 0x154] */ r_edi = (u32)(r_ebp+0xfffffeacu);
    /* 006e1771: lea esi, [ebp - 0x144] */ r_esi = (u32)(r_ebp+0xfffffebcu);
    /* 006e1777: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e1778: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 006e177d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e177e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e177f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e1780: call 0x6eb618 */ r_esp -= 4; W32(r_esp, 0x6e1785u); f_006eb618();
    /* 006e1785: mov dword ptr [ebp - 0x138], 0 */ W32((u32)(r_ebp+0xfffffec8u), 0x0u);
L_006e178f:; BB(0x006e178f);
    /* 006e178f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e1796: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006e1799: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 006e17a0: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e17a3: jne 0x6e1908 */ if (!fZ) goto L_006e1908;
L_006e17a9:; BB(0x006e17a9);
    /* 006e17a9: mov dword ptr [ebp - 0x130], 0 */ W32((u32)(r_ebp+0xfffffed0u), 0x0u);
    /* 006e17b3: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 006e17b5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e17bau); f_005caba4();
    /* 006e17ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e17bb: mov dword ptr [ebp - 0x12c], eax */ W32((u32)(r_ebp+0xfffffed4u), r_eax);
    /* 006e17c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e17c3: je 0x6e1908 */ if (fZ) goto L_006e1908;
L_006e17c9:; BB(0x006e17c9);
    /* 006e17c9: mov dword ptr [ebp - 0x130], 1 */ W32((u32)(r_ebp+0xfffffed0u), 0x1u);
    /* 006e17d3: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 006e17da: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e17e0: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006e17e3: mov ecx, eax */ r_ecx = r_eax;
    /* 006e17e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e17e6: call 0x6e77b0 */ r_esp -= 4; W32(r_esp, 0x6e17ebu); f_006e77b0();
    /* 006e17eb: mov dword ptr [ebp - 0x130], 0 */ W32((u32)(r_ebp+0xfffffed0u), 0x0u);
    /* 006e17f5: jmp 0x6e1908 */ goto L_006e1908;
L_006e1908:; BB(0x006e1908);
    /* 006e1908: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e190b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e190e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e1911: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e1914: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e191b: mov esp, ebp */ r_esp = r_ebp;
    /* 006e191d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e191e: ret  */ FN_RET(0x006e16df); r_esp += 4; return;
}

void f_006e17fa(void)
{
    FN_ENTER(0x006e17fa);
    /* 006e17fa: mov dword ptr [ebp - 0x1ac], 0x3f800000 */ W32((u32)(r_ebp+0xfffffe54u), 0x3f800000u);
    /* 006e1804: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 006e1806: mov dword ptr [ebp - 0x1a8], 0x3f800000 */ W32((u32)(r_ebp+0xfffffe58u), 0x3f800000u);
    /* 006e1810: mov dword ptr [ebp - 0x1a4], 0x3f000000 */ W32((u32)(r_ebp+0xfffffe5cu), 0x3f000000u);
    /* 006e181a: mov dword ptr [ebp - 0x1a0], 0 */ W32((u32)(r_ebp+0xfffffe60u), 0x0u);
    /* 006e1824: mov dword ptr [ebp - 0x19c], 0 */ W32((u32)(r_ebp+0xfffffe64u), 0x0u);
    /* 006e182e: mov dword ptr [ebp - 0x198], 0xbf800000 */ W32((u32)(r_ebp+0xfffffe68u), 0xbf800000u);
    /* 006e1838: mov dword ptr [ebp - 0x194], 0 */ W32((u32)(r_ebp+0xfffffe6cu), 0x0u);
    /* 006e1842: mov dword ptr [ebp - 0x190], 0 */ W32((u32)(r_ebp+0xfffffe70u), 0x0u);
    /* 006e184c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e1851u); f_005caba4();
    /* 006e1851: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e1852: mov dword ptr [ebp - 0x18c], eax */ W32((u32)(r_ebp+0xfffffe74u), r_eax);
    /* 006e1858: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e185a: je 0x6e18aa */ if (fZ) goto L_006e18aa;
L_006e185c:; BB(0x006e185c);
    /* 006e185c: mov dword ptr [ebp - 0x190], 1 */ W32((u32)(r_ebp+0xfffffe70u), 0x1u);
    /* 006e1866: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e186d: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e1873: mov ecx, eax */ r_ecx = r_eax;
    /* 006e1875: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006e1878: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e187b: push dword ptr [0xa9d47c] */ { u32 v = R32((u32)(0xa9d47cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e1881: push 0x3eb33333 */ { u32 v = 0x3eb33333u; r_esp -= 4; W32(r_esp, v); }
    /* 006e1886: lea edi, [ebp - 0x1ac] */ r_edi = (u32)(r_ebp+0xfffffe54u);
    /* 006e188c: lea esi, [ebp - 0x19c] */ r_esi = (u32)(r_ebp+0xfffffe64u);
    /* 006e1892: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e1893: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 006e1898: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e1899: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e189a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e189b: call 0x6eb618 */ r_esp -= 4; W32(r_esp, 0x6e18a0u); f_006eb618();
    /* 006e18a0: mov dword ptr [ebp - 0x190], 0 */ W32((u32)(r_ebp+0xfffffe70u), 0x0u);
L_006e18aa:; BB(0x006e18aa);
    /* 006e18aa: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e18b1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006e18b4: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 006e18bb: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e18be: jne 0x6e1908 */ if (!fZ) goto L_006e1908;
L_006e18c0:; BB(0x006e18c0);
    /* 006e18c0: mov dword ptr [ebp - 0x188], 0 */ W32((u32)(r_ebp+0xfffffe78u), 0x0u);
    /* 006e18ca: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 006e18cc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e18d1u); f_005caba4();
    /* 006e18d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e18d2: mov dword ptr [ebp - 0x184], eax */ W32((u32)(r_ebp+0xfffffe7cu), r_eax);
    /* 006e18d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e18da: je 0x6e1908 */ if (fZ) goto L_006e1908;
L_006e18dc:; BB(0x006e18dc);
    /* 006e18dc: mov dword ptr [ebp - 0x188], 1 */ W32((u32)(r_ebp+0xfffffe78u), 0x1u);
    /* 006e18e6: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006e18ed: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e18f3: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006e18f6: mov ecx, eax */ r_ecx = r_eax;
    /* 006e18f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e18f9: call 0x6e2cd8 */ r_esp -= 4; W32(r_esp, 0x6e18feu); f_006e2cd8();
    /* 006e18fe: mov dword ptr [ebp - 0x188], 0 */ W32((u32)(r_ebp+0xfffffe78u), 0x0u);
L_006e1908:; BB(0x006e1908);
    /* 006e1908: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e190b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e190e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e1911: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e1914: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e191b: mov esp, ebp */ r_esp = r_ebp;
    /* 006e191d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e191e: ret  */ FN_RET(0x006e17fa); r_esp += 4; return;
}

void f_006e191f(void)
{
    FN_ENTER(0x006e191f);
    goto L_006e191f;
L_006e1908:; BB(0x006e1908);
    /* 006e1908: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e190b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e190e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e1911: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e1914: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e191b: mov esp, ebp */ r_esp = r_ebp;
    /* 006e191d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e191e: ret  */ FN_RET(0x006e191f); r_esp += 4; return;
L_006e191f:; BB(0x006e191f);
    /* 006e191f: mov dword ptr [ebp - 0x180], 0x3f800000 */ W32((u32)(r_ebp+0xfffffe80u), 0x3f800000u);
    /* 006e1929: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 006e192b: mov dword ptr [ebp - 0x17c], 0x3f800000 */ W32((u32)(r_ebp+0xfffffe84u), 0x3f800000u);
    /* 006e1935: mov dword ptr [ebp - 0x178], 0x3f000000 */ W32((u32)(r_ebp+0xfffffe88u), 0x3f000000u);
    /* 006e193f: mov dword ptr [ebp - 0x174], 0 */ W32((u32)(r_ebp+0xfffffe8cu), 0x0u);
    /* 006e1949: mov dword ptr [ebp - 0x170], 0 */ W32((u32)(r_ebp+0xfffffe90u), 0x0u);
    /* 006e1953: mov dword ptr [ebp - 0x16c], 0xbf800000 */ W32((u32)(r_ebp+0xfffffe94u), 0xbf800000u);
    /* 006e195d: mov dword ptr [ebp - 0x168], 0 */ W32((u32)(r_ebp+0xfffffe98u), 0x0u);
    /* 006e1967: mov dword ptr [ebp - 0x164], 0 */ W32((u32)(r_ebp+0xfffffe9cu), 0x0u);
    /* 006e1971: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e1976u); f_005caba4();
    /* 006e1976: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e1977: mov dword ptr [ebp - 0x160], eax */ W32((u32)(r_ebp+0xfffffea0u), r_eax);
    /* 006e197d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e197f: je 0x6e19cf */ if (fZ) goto L_006e19cf;
L_006e1981:; BB(0x006e1981);
    /* 006e1981: mov dword ptr [ebp - 0x164], 1 */ W32((u32)(r_ebp+0xfffffe9cu), 0x1u);
    /* 006e198b: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006e1992: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e1998: mov ecx, eax */ r_ecx = r_eax;
    /* 006e199a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006e199d: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e19a0: push dword ptr [0xa9d47c] */ { u32 v = R32((u32)(0xa9d47cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e19a6: push 0x3eb33333 */ { u32 v = 0x3eb33333u; r_esp -= 4; W32(r_esp, v); }
    /* 006e19ab: lea edi, [ebp - 0x180] */ r_edi = (u32)(r_ebp+0xfffffe80u);
    /* 006e19b1: lea esi, [ebp - 0x170] */ r_esi = (u32)(r_ebp+0xfffffe90u);
    /* 006e19b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e19b8: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 006e19bd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e19be: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e19bf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e19c0: call 0x6eb618 */ r_esp -= 4; W32(r_esp, 0x6e19c5u); f_006eb618();
    /* 006e19c5: mov dword ptr [ebp - 0x164], 0 */ W32((u32)(r_ebp+0xfffffe9cu), 0x0u);
L_006e19cf:; BB(0x006e19cf);
    /* 006e19cf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e19d6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006e19d9: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 006e19e0: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e19e3: jne 0x6e1908 */ if (!fZ) goto L_006e1908;
L_006e19e9:; BB(0x006e19e9);
    /* 006e19e9: mov dword ptr [ebp - 0x15c], 0 */ W32((u32)(r_ebp+0xfffffea4u), 0x0u);
    /* 006e19f3: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 006e19f5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e19fau); f_005caba4();
    /* 006e19fa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e19fb: mov dword ptr [ebp - 0x158], eax */ W32((u32)(r_ebp+0xfffffea8u), r_eax);
    /* 006e1a01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e1a03: je 0x6e1a31 */ if (fZ) goto L_006e1a31;
L_006e1a05:; BB(0x006e1a05);
    /* 006e1a05: mov dword ptr [ebp - 0x15c], 1 */ W32((u32)(r_ebp+0xfffffea4u), 0x1u);
    /* 006e1a0f: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 006e1a16: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e1a1c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006e1a1f: mov ecx, eax */ r_ecx = r_eax;
    /* 006e1a21: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e1a22: call 0x6e2cd8 */ r_esp -= 4; W32(r_esp, 0x6e1a27u); f_006e2cd8();
    /* 006e1a27: mov dword ptr [ebp - 0x15c], 0 */ W32((u32)(r_ebp+0xfffffea4u), 0x0u);
L_006e1a31:; BB(0x006e1a31);
    /* 006e1a31: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e1a34: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e1a37: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e1a3a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e1a3d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e1a44: mov esp, ebp */ r_esp = r_ebp;
    /* 006e1a46: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e1a47: ret  */ FN_RET(0x006e191f); r_esp += 4; return;
}

void f_006e1a48(void) /* sub_6E1A48 */
{
    FN_ENTER(0x006e1a48);
    /* 006e1a48: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e1a49: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e1a4a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e1a4b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e1a4c: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 006e1a50: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 006e1a54: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e1a56: je 0x6e1ce4 */ if (fZ) goto L_006e1ce4;
L_006e1a5c:; BB(0x006e1a5c);
    /* 006e1a5c: mov eax, dword ptr [edi + 0x45c] */ r_eax = R32((u32)(r_edi+0x45cu));
    /* 006e1a62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e1a64: je 0x6e1ce4 */ if (fZ) goto L_006e1ce4;
L_006e1a6a:; BB(0x006e1a6a);
    /* 006e1a6a: mov ebx, edi */ r_ebx = r_edi;
    /* 006e1a6c: add ebx, 0x460 */ {  u32 a = r_ebx; u32 b = 0x460u; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e1a72: je 0x6e1ce4 */ if (fZ) goto L_006e1ce4;
L_006e1a78:; BB(0x006e1a78);
    /* 006e1a78: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e1a7a: call 0x6acde0 */ r_esp -= 4; W32(r_esp, 0x6e1a7fu); f_006acde0();
    /* 006e1a7f: mov ecx, dword ptr [edi + 0x45c] */ r_ecx = R32((u32)(r_edi+0x45cu));
    /* 006e1a85: movsx eax, si */ r_eax = (u32)(i32)(i16)(u16)r_esi;
    /* 006e1a88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e1a89: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006e1a8b: call 0x7a401c */ r_esp -= 4; W32(r_esp, 0x6e1a90u); f_007a401c();
    /* 006e1a90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e1a92: je 0x6e1ce4 */ if (fZ) goto L_006e1ce4;
L_006e1a98:; BB(0x006e1a98);
    /* 006e1a98: cmp esi, 0x12 */ {  u32 a = r_esi; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e1a9b: ja 0x6e1ce4 */ if ((!fC&&!fZ)) goto L_006e1ce4;
L_006e1aa1:; BB(0x006e1aa1);
    /* 006e1aa1: mov edx, dword ptr [esi*4 + 0x96cde0] */ r_edx = R32((u32)(r_esi*4+0x96cde0u));
    /* 006e1aa8: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_006e1ce4:; BB(0x006e1ce4);
    /* 006e1ce4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e1ce5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e1ce6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e1ce7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e1ce8: ret  */ FN_RET(0x006e1a48); r_esp += 4; return;
}

void f_006e1aaa(void)
{
    FN_ENTER(0x006e1aaa);
    /* 006e1aaa: movzx edx, word ptr [eax + 0xa0] */ r_edx = (u32)R16((u32)(r_eax+0xa0u));
    /* 006e1ab1: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e1ab7: je 0x6e1ce4 */ if (fZ) goto L_006e1ce4;
L_006e1abd:; BB(0x006e1abd);
    /* 006e1abd: movsx eax, word ptr [eax + 0xa2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xa2u));
    /* 006e1ac4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e1ac5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e1ac6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e1ac8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e1aca: call 0x6ad21c */ r_esp -= 4; W32(r_esp, 0x6e1acfu); f_006ad21c();
    /* 006e1acf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006e1ad1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e1ad3: call 0x6ad1ec */ r_esp -= 4; W32(r_esp, 0x6e1ad8u); f_006ad1ec();
    /* 006e1ad8: jmp 0x6e1ce4 */ goto L_006e1ce4;
L_006e1ce4:; BB(0x006e1ce4);
    /* 006e1ce4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e1ce5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e1ce6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e1ce7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e1ce8: ret  */ FN_RET(0x006e1aaa); r_esp += 4; return;
}

void f_006e1add(void)
{
    FN_ENTER(0x006e1add);
    /* 006e1add: movzx edx, word ptr [eax + 0xa0] */ r_edx = (u32)R16((u32)(r_eax+0xa0u));
    /* 006e1ae4: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e1aea: je 0x6e1ce4 */ if (fZ) goto L_006e1ce4;
L_006e1af0:; BB(0x006e1af0);
    /* 006e1af0: movsx eax, word ptr [eax + 0xa2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xa2u));
    /* 006e1af7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e1af8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e1af9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e1afb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e1afd: call 0x6ad21c */ r_esp -= 4; W32(r_esp, 0x6e1b02u); f_006ad21c();
    /* 006e1b02: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006e1b04: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e1b06: call 0x6ad1ec */ r_esp -= 4; W32(r_esp, 0x6e1b0bu); f_006ad1ec();
    /* 006e1b0b: jmp 0x6e1ce4 */ goto L_006e1ce4;
L_006e1ce4:; BB(0x006e1ce4);
    /* 006e1ce4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e1ce5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e1ce6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e1ce7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e1ce8: ret  */ FN_RET(0x006e1add); r_esp += 4; return;
}

void f_006e1b10(void)
{
    FN_ENTER(0x006e1b10);
    /* 006e1b10: mov edx, dword ptr [eax + 0x9c] */ r_edx = R32((u32)(r_eax+0x9cu));
    /* 006e1b16: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006e1b18: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006e1b1a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e1b1c: jle 0x6e1b58 */ if ((fZ||fS!=fO)) goto L_006e1b58;
L_006e1b1e:; BB(0x006e1b1e);
    /* 006e1b1e: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 006e1b21: mov ebp, eax */ r_ebp = r_eax;
L_006e1b23:; BB(0x006e1b23);
    /* 006e1b23: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006e1b26: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e1b28: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006e1b2b: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e1b2d: movzx ecx, word ptr [eax + ebp + 0xa0] */ r_ecx = (u32)R16((u32)(r_eax+r_ebp+0xa0u));
    /* 006e1b35: movsx edx, word ptr [eax + ebp + 0xa2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+r_ebp+0xa2u));
    /* 006e1b3d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e1b3e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e1b3f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e1b41: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e1b42: call 0x6ad21c */ r_esp -= 4; W32(r_esp, 0x6e1b47u); f_006ad21c();
    /* 006e1b47: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006e1b4a: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006e1b4d: cmp edi, dword ptr [ebp + 0x9c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0x9cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e1b53: jl 0x6e1b23 */ if ((fS!=fO)) goto L_006e1b23;
L_006e1b55:; BB(0x006e1b55);
    /* 006e1b55: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_006e1b58:; BB(0x006e1b58);
    /* 006e1b58: movsx eax, si */ r_eax = (u32)(i32)(i16)(u16)r_esi;
    /* 006e1b5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e1b5c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e1b5e: call 0x6ad1ec */ r_esp -= 4; W32(r_esp, 0x6e1b63u); f_006ad1ec();
    /* 006e1b63: jmp 0x6e1ce4 */ goto L_006e1ce4;
L_006e1ce4:; BB(0x006e1ce4);
    /* 006e1ce4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e1ce5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e1ce6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e1ce7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e1ce8: ret  */ FN_RET(0x006e1b10); r_esp += 4; return;
}

void f_006e1b68(void)
{
    FN_ENTER(0x006e1b68);
    /* 006e1b68: movzx edx, word ptr [eax + 0xa0] */ r_edx = (u32)R16((u32)(r_eax+0xa0u));
    /* 006e1b6f: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e1b75: je 0x6e1ce4 */ if (fZ) goto L_006e1ce4;
L_006e1b7b:; BB(0x006e1b7b);
    /* 006e1b7b: movsx eax, word ptr [eax + 0xa2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xa2u));
    /* 006e1b82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e1b83: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e1b84: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e1b86: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e1b88: call 0x6ad21c */ r_esp -= 4; W32(r_esp, 0x6e1b8du); f_006ad21c();
    /* 006e1b8d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006e1b8f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e1b91: call 0x6ad1ec */ r_esp -= 4; W32(r_esp, 0x6e1b96u); f_006ad1ec();
    /* 006e1b96: jmp 0x6e1ce4 */ goto L_006e1ce4;
L_006e1ce4:; BB(0x006e1ce4);
    /* 006e1ce4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e1ce5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e1ce6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e1ce7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e1ce8: ret  */ FN_RET(0x006e1b68); r_esp += 4; return;
}

void f_006e1b9b(void)
{
    FN_ENTER(0x006e1b9b);
    /* 006e1b9b: mov edx, dword ptr [eax + 0x9c] */ r_edx = R32((u32)(r_eax+0x9cu));
    /* 006e1ba1: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006e1ba3: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006e1ba5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e1ba7: jle 0x6e1bec */ if ((fZ||fS!=fO)) goto L_006e1bec;
L_006e1ba9:; BB(0x006e1ba9);
    /* 006e1ba9: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 006e1bac: mov ebp, eax */ r_ebp = r_eax;
L_006e1bae:; BB(0x006e1bae);
    /* 006e1bae: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 006e1bb1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e1bb3: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 006e1bb6: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e1bb8: movzx eax, word ptr [ecx + ebp + 0xa0] */ r_eax = (u32)R16((u32)(r_ecx+r_ebp+0xa0u));
    /* 006e1bc0: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e1bc5: je 0x6e1be2 */ if (fZ) goto L_006e1be2;
L_006e1bc7:; BB(0x006e1bc7);
    /* 006e1bc7: movsx edx, word ptr [ecx + ebp + 0xa2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+r_ebp+0xa2u));
    /* 006e1bcf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e1bd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e1bd1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e1bd3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e1bd4: call 0x6ad21c */ r_esp -= 4; W32(r_esp, 0x6e1bd9u); f_006ad21c();
    /* 006e1bd9: mov edx, dword ptr [ebp + 0x9c] */ r_edx = R32((u32)(r_ebp+0x9cu));
    /* 006e1bdf: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_006e1be2:; BB(0x006e1be2);
    /* 006e1be2: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006e1be5: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e1be7: jl 0x6e1bae */ if ((fS!=fO)) goto L_006e1bae;
L_006e1be9:; BB(0x006e1be9);
    /* 006e1be9: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_006e1bec:; BB(0x006e1bec);
    /* 006e1bec: movsx eax, si */ r_eax = (u32)(i32)(i16)(u16)r_esi;
    /* 006e1bef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e1bf0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e1bf2: call 0x6ad1ec */ r_esp -= 4; W32(r_esp, 0x6e1bf7u); f_006ad1ec();
    /* 006e1bf7: jmp 0x6e1ce4 */ goto L_006e1ce4;
L_006e1ce4:; BB(0x006e1ce4);
    /* 006e1ce4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e1ce5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e1ce6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e1ce7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e1ce8: ret  */ FN_RET(0x006e1b9b); r_esp += 4; return;
}

void f_006e1bfc(void)
{
    FN_ENTER(0x006e1bfc);
    /* 006e1bfc: movzx edx, word ptr [eax + 0xa0] */ r_edx = (u32)R16((u32)(r_eax+0xa0u));
    /* 006e1c03: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e1c09: je 0x6e1ce4 */ if (fZ) goto L_006e1ce4;
L_006e1c0f:; BB(0x006e1c0f);
    /* 006e1c0f: movsx eax, word ptr [eax + 0xa2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xa2u));
    /* 006e1c16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e1c17: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e1c18: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e1c1a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e1c1c: call 0x6ad21c */ r_esp -= 4; W32(r_esp, 0x6e1c21u); f_006ad21c();
    /* 006e1c21: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006e1c23: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e1c25: call 0x6ad1ec */ r_esp -= 4; W32(r_esp, 0x6e1c2au); f_006ad1ec();
    /* 006e1c2a: jmp 0x6e1ce4 */ goto L_006e1ce4;
L_006e1ce4:; BB(0x006e1ce4);
    /* 006e1ce4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e1ce5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e1ce6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e1ce7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e1ce8: ret  */ FN_RET(0x006e1bfc); r_esp += 4; return;
}

void f_006e1c2f(void)
{
    FN_ENTER(0x006e1c2f);
    /* 006e1c2f: movzx edx, word ptr [eax + 0xa0] */ r_edx = (u32)R16((u32)(r_eax+0xa0u));
    /* 006e1c36: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e1c3c: je 0x6e1ce4 */ if (fZ) goto L_006e1ce4;
L_006e1c42:; BB(0x006e1c42);
    /* 006e1c42: movsx eax, word ptr [eax + 0xa2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xa2u));
    /* 006e1c49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e1c4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e1c4b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e1c4d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e1c4f: call 0x6ad21c */ r_esp -= 4; W32(r_esp, 0x6e1c54u); f_006ad21c();
    /* 006e1c54: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006e1c56: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e1c58: call 0x6ad1ec */ r_esp -= 4; W32(r_esp, 0x6e1c5du); f_006ad1ec();
    /* 006e1c5d: jmp 0x6e1ce4 */ goto L_006e1ce4;
L_006e1ce4:; BB(0x006e1ce4);
    /* 006e1ce4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e1ce5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e1ce6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e1ce7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e1ce8: ret  */ FN_RET(0x006e1c2f); r_esp += 4; return;
}

void f_006e1c62(void)
{
    FN_ENTER(0x006e1c62);
    /* 006e1c62: movzx edx, word ptr [eax + 0xa0] */ r_edx = (u32)R16((u32)(r_eax+0xa0u));
    /* 006e1c69: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e1c6f: je 0x6e1ce4 */ if (fZ) goto L_006e1ce4;
L_006e1c71:; BB(0x006e1c71);
    /* 006e1c71: movsx eax, word ptr [eax + 0xa2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xa2u));
    /* 006e1c78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e1c79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e1c7a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e1c7c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e1c7e: call 0x6ad21c */ r_esp -= 4; W32(r_esp, 0x6e1c83u); f_006ad21c();
    /* 006e1c83: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006e1c85: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e1c87: call 0x6ad1ec */ r_esp -= 4; W32(r_esp, 0x6e1c8cu); f_006ad1ec();
    /* 006e1c8c: jmp 0x6e1ce4 */ goto L_006e1ce4;
L_006e1ce4:; BB(0x006e1ce4);
    /* 006e1ce4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e1ce5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e1ce6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e1ce7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e1ce8: ret  */ FN_RET(0x006e1c62); r_esp += 4; return;
}

void f_006e1c8e(void)
{
    FN_ENTER(0x006e1c8e);
    /* 006e1c8e: movzx edx, word ptr [eax + 0xa0] */ r_edx = (u32)R16((u32)(r_eax+0xa0u));
    /* 006e1c95: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e1c9b: je 0x6e1ce4 */ if (fZ) goto L_006e1ce4;
L_006e1c9d:; BB(0x006e1c9d);
    /* 006e1c9d: movsx eax, word ptr [eax + 0xa2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xa2u));
    /* 006e1ca4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e1ca5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e1ca6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e1ca8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e1caa: call 0x6ad21c */ r_esp -= 4; W32(r_esp, 0x6e1cafu); f_006ad21c();
    /* 006e1caf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006e1cb1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e1cb3: call 0x6ad1ec */ r_esp -= 4; W32(r_esp, 0x6e1cb8u); f_006ad1ec();
    /* 006e1cb8: jmp 0x6e1ce4 */ goto L_006e1ce4;
L_006e1ce4:; BB(0x006e1ce4);
    /* 006e1ce4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e1ce5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e1ce6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e1ce7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e1ce8: ret  */ FN_RET(0x006e1c8e); r_esp += 4; return;
}

void f_006e1cba(void)
{
    FN_ENTER(0x006e1cba);
    /* 006e1cba: movzx edx, word ptr [eax + 0xa0] */ r_edx = (u32)R16((u32)(r_eax+0xa0u));
    /* 006e1cc1: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e1cc7: je 0x6e1ce4 */ if (fZ) goto L_006e1ce4;
L_006e1cc9:; BB(0x006e1cc9);
    /* 006e1cc9: movsx eax, word ptr [eax + 0xa2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xa2u));
    /* 006e1cd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e1cd1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e1cd2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e1cd4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e1cd6: call 0x6ad21c */ r_esp -= 4; W32(r_esp, 0x6e1cdbu); f_006ad21c();
    /* 006e1cdb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006e1cdd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e1cdf: call 0x6ad1ec */ r_esp -= 4; W32(r_esp, 0x6e1ce4u); f_006ad1ec();
L_006e1ce4:; BB(0x006e1ce4);
    /* 006e1ce4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e1ce5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e1ce6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e1ce7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e1ce8: ret  */ FN_RET(0x006e1cba); r_esp += 4; return;
}

void f_006e1ce4(void)
{
    FN_ENTER(0x006e1ce4);
    /* 006e1ce4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e1ce5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e1ce6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e1ce7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e1ce8: ret  */ FN_RET(0x006e1ce4); r_esp += 4; return;
}

void f_006e1cec(void) /* sub_6E1CEC */
{
    FN_ENTER(0x006e1cec);
    /* 006e1cec: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006e1cf0: mov ecx, eax */ r_ecx = r_eax;
    /* 006e1cf2: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006e1cf7: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e1cf9: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 006e1cfc: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e1cfe: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e1d00: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e1d02: je 0x6e1d35 */ if (fZ) goto L_006e1d35;
L_006e1d04:; BB(0x006e1d04);
    /* 006e1d04: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e1d07: je 0x6e1d2f */ if (fZ) goto L_006e1d2f;
L_006e1d09:; BB(0x006e1d09);
    /* 006e1d09: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e1d0c: je 0x6e1d38 */ if (fZ) goto L_006e1d38;
L_006e1d0e:; BB(0x006e1d0e);
    /* 006e1d0e: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e1d11: je 0x6e1d29 */ if (fZ) goto L_006e1d29;
L_006e1d13:; BB(0x006e1d13);
    /* 006e1d13: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e1d16: jne 0x6e1d1e */ if (!fZ) goto L_006e1d1e;
L_006e1d18:; BB(0x006e1d18);
    /* 006e1d18: mov eax, 4 */ r_eax = 0x4u;
    /* 006e1d1d: ret  */ FN_RET(0x006e1cec); r_esp += 4; return;
L_006e1d1e:; BB(0x006e1d1e);
    /* 006e1d1e: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e1d21: jne 0x6e1d35 */ if (!fZ) goto L_006e1d35;
L_006e1d23:; BB(0x006e1d23);
    /* 006e1d23: mov eax, 5 */ r_eax = 0x5u;
    /* 006e1d28: ret  */ FN_RET(0x006e1cec); r_esp += 4; return;
L_006e1d29:; BB(0x006e1d29);
    /* 006e1d29: mov eax, 3 */ r_eax = 0x3u;
    /* 006e1d2e: ret  */ FN_RET(0x006e1cec); r_esp += 4; return;
L_006e1d2f:; BB(0x006e1d2f);
    /* 006e1d2f: mov eax, 1 */ r_eax = 0x1u;
    /* 006e1d34: ret  */ FN_RET(0x006e1cec); r_esp += 4; return;
L_006e1d35:; BB(0x006e1d35);
    /* 006e1d35: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e1d37: ret  */ FN_RET(0x006e1cec); r_esp += 4; return;
L_006e1d38:; BB(0x006e1d38);
    /* 006e1d38: mov eax, 2 */ r_eax = 0x2u;
    /* 006e1d3d: ret  */ FN_RET(0x006e1cec); r_esp += 4; return;
}

void f_006e1d40(void) /* sub_6E1D40 */
{
    FN_ENTER(0x006e1d40);
    /* 006e1d40: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 006e1d45: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e1d48: jl 0x6e1d4b */ if ((fS!=fO)) goto L_006e1d4b;
L_006e1d4a:; BB(0x006e1d4a);
    /* 006e1d4a: ret  */ FN_RET(0x006e1d40); r_esp += 4; return;
L_006e1d4b:; BB(0x006e1d4b);
    /* 006e1d4b: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 006e1d4f: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 006e1d52: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e1d54: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e1d56: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e1d58: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e1d5b: jge 0x6e1d96 */ if ((fS==fO)) goto L_006e1d96;
L_006e1d5d:; BB(0x006e1d5d);
    /* 006e1d5d: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006e1d61: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 006e1d64: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 006e1d68: mov word ptr [eax + edx*8 + 0xa96520], cx */ W16((u32)(r_eax+r_edx*8+0xa96520u), (u16)r_ecx);
    /* 006e1d70: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006e1d74: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 006e1d78: movzx edx, word ptr [edx + 2] */ r_edx = (u32)R16((u32)(r_edx+0x2u));
    /* 006e1d7c: mov word ptr [eax + ecx*8 + 0xa96522], dx */ W16((u32)(r_eax+r_ecx*8+0xa96522u), (u16)r_edx);
    /* 006e1d84: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006e1d88: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 006e1d8b: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 006e1d8f: mov dword ptr [eax + ecx*8 + 0xa96524], edx */ W32((u32)(r_eax+r_ecx*8+0xa96524u), r_edx);
L_006e1d96:; BB(0x006e1d96);
    /* 006e1d96: ret  */ FN_RET(0x006e1d40); r_esp += 4; return;
}

void f_006e1d98(void) /* sub_6E1D98 */
{
    FN_ENTER(0x006e1d98);
    /* 006e1d98: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e1d99: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e1d9a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e1d9b: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 006e1d9f: movzx ebp, word ptr [esp + 0x14] */ r_ebp = (u32)R16((u32)(r_esp+0x14u));
    /* 006e1da4: fld dword ptr [0x96ce60] */ FPUSH(R_F32((u32)(0x96ce60u)));
    /* 006e1daa: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006e1dad: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e1db0: jge 0x6e1ec7 */ if ((fS==fO)) goto L_006e1ec7;
L_006e1db6:; BB(0x006e1db6);
    /* 006e1db6: lea eax, [ebp + ebp*8] */ r_eax = (u32)(r_ebp+r_ebp*8);
    /* 006e1dba: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006e1dbd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e1dbf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e1dc1: movsx ecx, word ptr [edx + 0xa96520] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0xa96520u));
    /* 006e1dc8: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e1dca: jne 0x6e1dd9 */ if (!fZ) goto L_006e1dd9;
L_006e1dcc:; BB(0x006e1dcc);
    /* 006e1dcc: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006e1dcf: fadd dword ptr [eax*8 + 0xa96524] */ ST(0) = ST(0) + R_F32((u32)(r_eax*8+0xa96524u));
    /* 006e1dd6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_006e1dd9:; BB(0x006e1dd9);
    /* 006e1dd9: movsx edx, word ptr [eax*8 + 0xa96528] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax*8+0xa96528u));
    /* 006e1de1: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e1de3: jne 0x6e1df2 */ if (!fZ) goto L_006e1df2;
L_006e1de5:; BB(0x006e1de5);
    /* 006e1de5: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006e1de8: fadd dword ptr [eax*8 + 0xa9652c] */ ST(0) = ST(0) + R_F32((u32)(r_eax*8+0xa9652cu));
    /* 006e1def: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_006e1df2:; BB(0x006e1df2);
    /* 006e1df2: movsx edx, word ptr [eax*8 + 0xa96530] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax*8+0xa96530u));
    /* 006e1dfa: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e1dfc: jne 0x6e1e0b */ if (!fZ) goto L_006e1e0b;
L_006e1dfe:; BB(0x006e1dfe);
    /* 006e1dfe: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006e1e01: fadd dword ptr [eax*8 + 0xa96534] */ ST(0) = ST(0) + R_F32((u32)(r_eax*8+0xa96534u));
    /* 006e1e08: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_006e1e0b:; BB(0x006e1e0b);
    /* 006e1e0b: movsx edx, word ptr [eax*8 + 0xa96538] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax*8+0xa96538u));
    /* 006e1e13: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e1e15: jne 0x6e1e24 */ if (!fZ) goto L_006e1e24;
L_006e1e17:; BB(0x006e1e17);
    /* 006e1e17: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006e1e1a: fadd dword ptr [eax*8 + 0xa9653c] */ ST(0) = ST(0) + R_F32((u32)(r_eax*8+0xa9653cu));
    /* 006e1e21: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_006e1e24:; BB(0x006e1e24);
    /* 006e1e24: movsx edx, word ptr [eax*8 + 0xa96540] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax*8+0xa96540u));
    /* 006e1e2c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e1e2e: jne 0x6e1e3d */ if (!fZ) goto L_006e1e3d;
L_006e1e30:; BB(0x006e1e30);
    /* 006e1e30: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006e1e33: fadd dword ptr [eax*8 + 0xa96544] */ ST(0) = ST(0) + R_F32((u32)(r_eax*8+0xa96544u));
    /* 006e1e3a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_006e1e3d:; BB(0x006e1e3d);
    /* 006e1e3d: movsx edx, word ptr [eax*8 + 0xa96548] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax*8+0xa96548u));
    /* 006e1e45: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e1e47: jne 0x6e1e56 */ if (!fZ) goto L_006e1e56;
L_006e1e49:; BB(0x006e1e49);
    /* 006e1e49: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006e1e4c: fadd dword ptr [eax*8 + 0xa9654c] */ ST(0) = ST(0) + R_F32((u32)(r_eax*8+0xa9654cu));
    /* 006e1e53: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_006e1e56:; BB(0x006e1e56);
    /* 006e1e56: movsx edx, word ptr [eax*8 + 0xa96550] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax*8+0xa96550u));
    /* 006e1e5e: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e1e60: jne 0x6e1e6f */ if (!fZ) goto L_006e1e6f;
L_006e1e62:; BB(0x006e1e62);
    /* 006e1e62: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006e1e65: fadd dword ptr [eax*8 + 0xa96554] */ ST(0) = ST(0) + R_F32((u32)(r_eax*8+0xa96554u));
    /* 006e1e6c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_006e1e6f:; BB(0x006e1e6f);
    /* 006e1e6f: movsx edx, word ptr [eax*8 + 0xa96558] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax*8+0xa96558u));
    /* 006e1e77: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e1e79: jne 0x6e1e88 */ if (!fZ) goto L_006e1e88;
L_006e1e7b:; BB(0x006e1e7b);
    /* 006e1e7b: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006e1e7e: fadd dword ptr [eax*8 + 0xa9655c] */ ST(0) = ST(0) + R_F32((u32)(r_eax*8+0xa9655cu));
    /* 006e1e85: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_006e1e88:; BB(0x006e1e88);
    /* 006e1e88: movsx edx, word ptr [eax*8 + 0xa96560] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax*8+0xa96560u));
    /* 006e1e90: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e1e92: jne 0x6e1ea1 */ if (!fZ) goto L_006e1ea1;
L_006e1e94:; BB(0x006e1e94);
    /* 006e1e94: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006e1e97: fadd dword ptr [eax*8 + 0xa96564] */ ST(0) = ST(0) + R_F32((u32)(r_eax*8+0xa96564u));
    /* 006e1e9e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_006e1ea1:; BB(0x006e1ea1);
    /* 006e1ea1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e1ea2: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6e1ea7u); f_0068d5a8();
    /* 006e1ea7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e1ea8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e1eaa: je 0x6e1ec0 */ if (fZ) goto L_006e1ec0;
L_006e1eac:; BB(0x006e1eac);
    /* 006e1eac: movsx edx, di */ r_edx = (u32)(i32)(i16)(u16)r_edi;
    /* 006e1eaf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e1eb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e1eb1: mov ecx, eax */ r_ecx = r_eax;
    /* 006e1eb3: call 0x68c3dc */ r_esp -= 4; W32(r_esp, 0x6e1eb8u); f_0068c3dc();
    /* 006e1eb8: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006e1ebb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006e1ebd: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_006e1ec0:; BB(0x006e1ec0);
    /* 006e1ec0: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006e1ec3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e1ec4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e1ec5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e1ec6: ret  */ FN_RET(0x006e1d98); r_esp += 4; return;
L_006e1ec7:; BB(0x006e1ec7);
    /* 006e1ec7: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006e1eca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e1ecb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e1ecc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e1ecd: ret  */ FN_RET(0x006e1d98); r_esp += 4; return;
}

void f_006e1ed0(void) /* sub_6E1ED0 */
{
    FN_ENTER(0x006e1ed0);
    /* 006e1ed0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e1ed1: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e1ed4: movzx edx, word ptr [esp + 0x40] */ r_edx = (u32)R16((u32)(r_esp+0x40u));
    /* 006e1ed9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e1edb: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e1ede: jge 0x6e1fbf */ if ((fS==fO)) goto L_006e1fbf;
L_006e1ee4:; BB(0x006e1ee4);
    /* 006e1ee4: mov dword ptr [esp + 0x2c], esi */ W32((u32)(r_esp+0x2cu), r_esi);
    /* 006e1ee8: mov esi, edx */ r_esi = r_edx;
    /* 006e1eea: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 006e1eee: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 006e1ef2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006e1ef4: lea ecx, [edx + edx*8] */ r_ecx = (u32)(r_edx+r_edx*8);
    /* 006e1ef7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e1ef9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e1efb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e1efd: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 006e1f01: mov ebp, eax */ r_ebp = r_eax;
L_006e1f03:; BB(0x006e1f03);
    /* 006e1f03: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e1f04: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6e1f09u); f_0068d5a8();
    /* 006e1f09: mov edi, eax */ r_edi = r_eax;
    /* 006e1f0b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e1f0e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e1f10: je 0x6e1f7e */ if (fZ) goto L_006e1f7e;
L_006e1f12:; BB(0x006e1f12);
    /* 006e1f12: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 006e1f16: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006e1f19: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 006e1f1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e1f1e: mov ecx, edi */ r_ecx = r_edi;
    /* 006e1f20: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e1f21: call 0x68c3dc */ r_esp -= 4; W32(r_esp, 0x6e1f26u); f_0068c3dc();
    /* 006e1f26: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 006e1f29: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006e1f2c: shr ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 006e1f2f: fadd dword ptr [ebp*4 + 0x96ce30] */ ST(0) = ST(0) + R_F32((u32)(r_ebp*4+0x96ce30u));
    /* 006e1f36: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006e1f38: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 006e1f3c: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 006e1f41: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e1f46: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006e1f4a: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 006e1f4e: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 006e1f52: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 006e1f56: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 006e1f5a: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 006e1f5e: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e1f61: jne 0x6e1f7e */ if (!fZ) goto L_006e1f7e;
L_006e1f63:; BB(0x006e1f63);
    /* 006e1f63: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 006e1f67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e1f68: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e1f69: mov ecx, edi */ r_ecx = r_edi;
    /* 006e1f6b: call 0x68c3dc */ r_esp -= 4; W32(r_esp, 0x6e1f70u); f_0068c3dc();
    /* 006e1f70: fcomp dword ptr [0x96ce5c] */ fx_compare(ST(0), R_F32((u32)(0x96ce5cu))); FPOP();
    /* 006e1f76: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006e1f78: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006e1f79: jne 0x6e1f7e */ if (!fZ) goto L_006e1f7e;
L_006e1f7b:; BB(0x006e1f7b);
    /* 006e1f7b: or ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
L_006e1f7e:; BB(0x006e1f7e);
    /* 006e1f7e: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 006e1f82: movsx ecx, word ptr [ecx + ebx*8 + 0xa96520] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+r_ebx*8+0xa96520u));
    /* 006e1f8a: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 006e1f8e: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e1f90: jne 0x6e1fa0 */ if (!fZ) goto L_006e1fa0;
L_006e1f92:; BB(0x006e1f92);
    /* 006e1f92: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 006e1f96: movzx edi, word ptr [ecx + ebx*8 + 0xa96522] */ r_edi = (u32)R16((u32)(r_ecx+r_ebx*8+0xa96522u));
    /* 006e1f9e: or ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
L_006e1fa0:; BB(0x006e1fa0);
    /* 006e1fa0: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e1fa3: cmp ebx, 9 */ {  u32 a = r_ebx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e1fa6: jl 0x6e1f03 */ if ((fS!=fO)) goto L_006e1f03;
L_006e1fac:; BB(0x006e1fac);
    /* 006e1fac: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 006e1fb0: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 006e1fb4: mov eax, ebp */ r_eax = r_ebp;
    /* 006e1fb6: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 006e1fba: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e1fbd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e1fbe: ret  */ FN_RET(0x006e1ed0); r_esp += 4; return;
L_006e1fbf:; BB(0x006e1fbf);
    /* 006e1fbf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e1fc1: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e1fc4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e1fc5: ret  */ FN_RET(0x006e1ed0); r_esp += 4; return;
}

void f_006e1fc8(void) /* sub_6E1FC8 */
{
    FN_ENTER(0x006e1fc8);
    /* 006e1fc8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e1fc9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e1fca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e1fcb: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e1fce: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 006e1fd2: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 006e1fd6: movzx ebp, word ptr [esp + 0x28] */ r_ebp = (u32)R16((u32)(r_esp+0x28u));
    /* 006e1fdb: mov eax, ebx */ r_eax = r_ebx;
    /* 006e1fdd: mov edx, edi */ r_edx = r_edi;
    /* 006e1fdf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006e1fe1: call 0x6ded21 */ r_esp -= 4; W32(r_esp, 0x6e1fe6u); f_006ded21();
    /* 006e1fe6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e1fe8: je 0x6e216a */ if (fZ) goto L_006e216a;
L_006e1fee:; BB(0x006e1fee);
    /* 006e1fee: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e1ff1: je 0x6e216a */ if (fZ) goto L_006e216a;
L_006e1ff7:; BB(0x006e1ff7);
    /* 006e1ff7: fld dword ptr [0x96ce58] */ FPUSH(R_F32((u32)(0x96ce58u)));
    /* 006e1ffd: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e2001: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e2004: jge 0x6e2128 */ if ((fS==fO)) goto L_006e2128;
L_006e200a:; BB(0x006e200a);
    /* 006e200a: lea edx, [ebp + ebp*8] */ r_edx = (u32)(r_ebp+r_ebp*8);
    /* 006e200e: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 006e2011: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006e2013: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006e2015: movsx edi, word ptr [edi + 0xa96520] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edi+0xa96520u));
    /* 006e201c: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e201e: jne 0x6e202f */ if (!fZ) goto L_006e202f;
L_006e2020:; BB(0x006e2020);
    /* 006e2020: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 006e2024: fadd dword ptr [edx*8 + 0xa96524] */ ST(0) = ST(0) + R_F32((u32)(r_edx*8+0xa96524u));
    /* 006e202b: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
L_006e202f:; BB(0x006e202f);
    /* 006e202f: movsx edi, word ptr [edx*8 + 0xa96528] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx*8+0xa96528u));
    /* 006e2037: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e2039: jne 0x6e204a */ if (!fZ) goto L_006e204a;
L_006e203b:; BB(0x006e203b);
    /* 006e203b: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 006e203f: fadd dword ptr [edx*8 + 0xa9652c] */ ST(0) = ST(0) + R_F32((u32)(r_edx*8+0xa9652cu));
    /* 006e2046: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
L_006e204a:; BB(0x006e204a);
    /* 006e204a: movsx edi, word ptr [edx*8 + 0xa96530] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx*8+0xa96530u));
    /* 006e2052: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e2054: jne 0x6e2065 */ if (!fZ) goto L_006e2065;
L_006e2056:; BB(0x006e2056);
    /* 006e2056: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 006e205a: fadd dword ptr [edx*8 + 0xa96534] */ ST(0) = ST(0) + R_F32((u32)(r_edx*8+0xa96534u));
    /* 006e2061: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
L_006e2065:; BB(0x006e2065);
    /* 006e2065: movsx edi, word ptr [edx*8 + 0xa96538] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx*8+0xa96538u));
    /* 006e206d: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e206f: jne 0x6e2080 */ if (!fZ) goto L_006e2080;
L_006e2071:; BB(0x006e2071);
    /* 006e2071: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 006e2075: fadd dword ptr [edx*8 + 0xa9653c] */ ST(0) = ST(0) + R_F32((u32)(r_edx*8+0xa9653cu));
    /* 006e207c: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
L_006e2080:; BB(0x006e2080);
    /* 006e2080: movsx edi, word ptr [edx*8 + 0xa96540] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx*8+0xa96540u));
    /* 006e2088: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e208a: jne 0x6e209b */ if (!fZ) goto L_006e209b;
L_006e208c:; BB(0x006e208c);
    /* 006e208c: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 006e2090: fadd dword ptr [edx*8 + 0xa96544] */ ST(0) = ST(0) + R_F32((u32)(r_edx*8+0xa96544u));
    /* 006e2097: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
L_006e209b:; BB(0x006e209b);
    /* 006e209b: movsx edi, word ptr [edx*8 + 0xa96548] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx*8+0xa96548u));
    /* 006e20a3: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e20a5: jne 0x6e20b6 */ if (!fZ) goto L_006e20b6;
L_006e20a7:; BB(0x006e20a7);
    /* 006e20a7: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 006e20ab: fadd dword ptr [edx*8 + 0xa9654c] */ ST(0) = ST(0) + R_F32((u32)(r_edx*8+0xa9654cu));
    /* 006e20b2: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
L_006e20b6:; BB(0x006e20b6);
    /* 006e20b6: movsx edi, word ptr [edx*8 + 0xa96550] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx*8+0xa96550u));
    /* 006e20be: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e20c0: jne 0x6e20d1 */ if (!fZ) goto L_006e20d1;
L_006e20c2:; BB(0x006e20c2);
    /* 006e20c2: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 006e20c6: fadd dword ptr [edx*8 + 0xa96554] */ ST(0) = ST(0) + R_F32((u32)(r_edx*8+0xa96554u));
    /* 006e20cd: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
L_006e20d1:; BB(0x006e20d1);
    /* 006e20d1: movsx edi, word ptr [edx*8 + 0xa96558] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx*8+0xa96558u));
    /* 006e20d9: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e20db: jne 0x6e20ec */ if (!fZ) goto L_006e20ec;
L_006e20dd:; BB(0x006e20dd);
    /* 006e20dd: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 006e20e1: fadd dword ptr [edx*8 + 0xa9655c] */ ST(0) = ST(0) + R_F32((u32)(r_edx*8+0xa9655cu));
    /* 006e20e8: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
L_006e20ec:; BB(0x006e20ec);
    /* 006e20ec: movsx edi, word ptr [edx*8 + 0xa96560] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx*8+0xa96560u));
    /* 006e20f4: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e20f6: jne 0x6e2107 */ if (!fZ) goto L_006e2107;
L_006e20f8:; BB(0x006e20f8);
    /* 006e20f8: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 006e20fc: fadd dword ptr [edx*8 + 0xa96564] */ ST(0) = ST(0) + R_F32((u32)(r_edx*8+0xa96564u));
    /* 006e2103: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
L_006e2107:; BB(0x006e2107);
    /* 006e2107: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e2108: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6e210du); f_0068d5a8();
    /* 006e210d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e210e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e2110: je 0x6e2128 */ if (fZ) goto L_006e2128;
L_006e2112:; BB(0x006e2112);
    /* 006e2112: movsx edx, bx */ r_edx = (u32)(i32)(i16)(u16)r_ebx;
    /* 006e2115: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e2116: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e2117: mov ecx, eax */ r_ecx = r_eax;
    /* 006e2119: call 0x68c3dc */ r_esp -= 4; W32(r_esp, 0x6e211eu); f_0068c3dc();
    /* 006e211e: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 006e2122: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006e2124: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
L_006e2128:; BB(0x006e2128);
    /* 006e2128: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 006e212c: fcomp dword ptr [0x96ce54] */ fx_compare(ST(0), R_F32((u32)(0x96ce54u))); FPOP();
    /* 006e2132: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006e2134: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006e2135: jb 0x6e215e */ if (fC) goto L_006e215e;
L_006e2137:; BB(0x006e2137);
    /* 006e2137: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 006e213b: fcomp dword ptr [0x96ce50] */ fx_compare(ST(0), R_F32((u32)(0x96ce50u))); FPOP();
    /* 006e2141: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006e2143: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006e2144: jae 0x6e2152 */ if (!fC) goto L_006e2152;
L_006e2146:; BB(0x006e2146);
    /* 006e2146: mov eax, 2 */ r_eax = 0x2u;
    /* 006e214b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e214e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e214f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e2150: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e2151: ret  */ FN_RET(0x006e1fc8); r_esp += 4; return;
L_006e2152:; BB(0x006e2152);
    /* 006e2152: mov eax, 3 */ r_eax = 0x3u;
    /* 006e2157: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e215a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e215b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e215c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e215d: ret  */ FN_RET(0x006e1fc8); r_esp += 4; return;
L_006e215e:; BB(0x006e215e);
    /* 006e215e: mov eax, 1 */ r_eax = 0x1u;
    /* 006e2163: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e2166: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e2167: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e2168: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e2169: ret  */ FN_RET(0x006e1fc8); r_esp += 4; return;
L_006e216a:; BB(0x006e216a);
    /* 006e216a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e216c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e216f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e2170: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e2171: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e2172: ret  */ FN_RET(0x006e1fc8); r_esp += 4; return;
}

