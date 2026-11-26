#include "protos.h"

void f_0081dd53(void)
{
    FN_ENTER(0x0081dd53);
    /* 0081dd53: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0081dd5a: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0081dd5c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x81dd61u); f_005caba4();
    /* 0081dd61: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0081dd62: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0081dd65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081dd67: je 0x81e0ad */ if (fZ) goto L_0081e0ad;
L_0081dd6d:; BB(0x0081dd6d);
    /* 0081dd6d: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0081dd74: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 0081dd7b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0081dd7e: call 0x788050 */ r_esp -= 4; W32(r_esp, 0x81dd83u); f_00788050();
    /* 0081dd83: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0081dd86: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0081dd8d:; BB(0x0081dd8d);
    /* 0081dd8d: mov dword ptr [0xaca4e0], eax */ W32((u32)(0xaca4e0u), r_eax);
    /* 0081dd92: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0081dd99: jmp 0x81e066 */ goto L_0081e066;
L_0081e066:; BB(0x0081e066);
    /* 0081e066: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 0081e067: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0081e069: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0081e06b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0081e06d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0081e06f: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x81e075u); call_ind(t); }
    /* 0081e075: jmp 0x81e095 */ goto L_0081e095;
L_0081e095:; BB(0x0081e095);
    /* 0081e095: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 0081e096: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0081e099: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0081e09c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0081e09f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0081e0a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0081e0a9: mov esp, ebp */ r_esp = r_ebp;
    /* 0081e0ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0081e0ac: ret  */ FN_RET(0x0081dd53); r_esp += 4; return;
L_0081e0ad:; BB(0x0081e0ad);
    /* 0081e0ad: mov eax, 0 */ r_eax = 0x0u;
    /* 0081e0b2: jmp 0x81dd8d */ goto L_0081dd8d;
}

void f_0081dd9e(void)
{
    FN_ENTER(0x0081dd9e);
    /* 0081dd9e: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0081dda5: push 0x1290 */ { u32 v = 0x1290u; r_esp -= 4; W32(r_esp, v); }
    /* 0081ddaa: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x81ddafu); f_005caba4();
    /* 0081ddaf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0081ddb0: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0081ddb3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081ddb5: je 0x81e0b7 */ if (fZ) goto L_0081e0b7;
L_0081ddbb:; BB(0x0081ddbb);
    /* 0081ddbb: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 0081ddc2: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0081ddc9: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0081ddcf: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0081ddd2: call 0x403018 */ r_esp -= 4; W32(r_esp, 0x81ddd7u); f_00403018();
    /* 0081ddd7: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0081ddda: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0081dde1:; BB(0x0081dde1);
    /* 0081dde1: mov dword ptr [0xaca4e0], eax */ W32((u32)(0xaca4e0u), r_eax);
    /* 0081dde6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0081dded: jmp 0x81e066 */ goto L_0081e066;
L_0081e066:; BB(0x0081e066);
    /* 0081e066: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 0081e067: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0081e069: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0081e06b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0081e06d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0081e06f: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x81e075u); call_ind(t); }
    /* 0081e075: jmp 0x81e095 */ goto L_0081e095;
L_0081e095:; BB(0x0081e095);
    /* 0081e095: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 0081e096: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0081e099: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0081e09c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0081e09f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0081e0a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0081e0a9: mov esp, ebp */ r_esp = r_ebp;
    /* 0081e0ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0081e0ac: ret  */ FN_RET(0x0081dd9e); r_esp += 4; return;
L_0081e0b7:; BB(0x0081e0b7);
    /* 0081e0b7: mov eax, 0 */ r_eax = 0x0u;
    /* 0081e0bc: jmp 0x81dde1 */ goto L_0081dde1;
}

void f_0081ddf2(void)
{
    FN_ENTER(0x0081ddf2);
    /* 0081ddf2: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 0081ddf9: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0081ddfb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x81de00u); f_005caba4();
    /* 0081de00: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0081de01: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0081de04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081de06: je 0x81e0c1 */ if (fZ) goto L_0081e0c1;
L_0081de0c:; BB(0x0081de0c);
    /* 0081de0c: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 0081de13: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0081de1a: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0081de20: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0081de23: call 0x40d8ec */ r_esp -= 4; W32(r_esp, 0x81de28u); f_0040d8ec();
    /* 0081de28: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0081de2b: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0081de32:; BB(0x0081de32);
    /* 0081de32: mov dword ptr [0xaca4e0], eax */ W32((u32)(0xaca4e0u), r_eax);
    /* 0081de37: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0081de3e: jmp 0x81e066 */ goto L_0081e066;
L_0081e066:; BB(0x0081e066);
    /* 0081e066: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 0081e067: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0081e069: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0081e06b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0081e06d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0081e06f: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x81e075u); call_ind(t); }
    /* 0081e075: jmp 0x81e095 */ goto L_0081e095;
L_0081e095:; BB(0x0081e095);
    /* 0081e095: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 0081e096: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0081e099: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0081e09c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0081e09f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0081e0a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0081e0a9: mov esp, ebp */ r_esp = r_ebp;
    /* 0081e0ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0081e0ac: ret  */ FN_RET(0x0081ddf2); r_esp += 4; return;
L_0081e0c1:; BB(0x0081e0c1);
    /* 0081e0c1: mov eax, 0 */ r_eax = 0x0u;
    /* 0081e0c6: jmp 0x81de32 */ goto L_0081de32;
}

void f_0081de43(void)
{
    FN_ENTER(0x0081de43);
    /* 0081de43: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 0081de4a: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0081de4c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x81de51u); f_005caba4();
    /* 0081de51: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0081de52: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0081de55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081de57: je 0x81e0cb */ if (fZ) goto L_0081e0cb;
L_0081de5d:; BB(0x0081de5d);
    /* 0081de5d: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 0081de64: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0081de6b: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0081de71: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0081de74: call 0x4107fc */ r_esp -= 4; W32(r_esp, 0x81de79u); f_004107fc();
    /* 0081de79: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0081de7c: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0081de83:; BB(0x0081de83);
    /* 0081de83: mov dword ptr [0xaca4e0], eax */ W32((u32)(0xaca4e0u), r_eax);
    /* 0081de88: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0081de8f: jmp 0x81e066 */ goto L_0081e066;
L_0081e066:; BB(0x0081e066);
    /* 0081e066: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 0081e067: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0081e069: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0081e06b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0081e06d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0081e06f: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x81e075u); call_ind(t); }
    /* 0081e075: jmp 0x81e095 */ goto L_0081e095;
L_0081e095:; BB(0x0081e095);
    /* 0081e095: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 0081e096: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0081e099: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0081e09c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0081e09f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0081e0a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0081e0a9: mov esp, ebp */ r_esp = r_ebp;
    /* 0081e0ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0081e0ac: ret  */ FN_RET(0x0081de43); r_esp += 4; return;
L_0081e0cb:; BB(0x0081e0cb);
    /* 0081e0cb: mov eax, 0 */ r_eax = 0x0u;
    /* 0081e0d0: jmp 0x81de83 */ goto L_0081de83;
}

void f_0081de94(void)
{
    FN_ENTER(0x0081de94);
    /* 0081de94: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 0081de9b: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0081de9d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x81dea2u); f_005caba4();
    /* 0081dea2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0081dea3: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0081dea6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081dea8: je 0x81e0d5 */ if (fZ) goto L_0081e0d5;
L_0081deae:; BB(0x0081deae);
    /* 0081deae: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 0081deb5: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0081debc: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0081dec2: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0081dec5: call 0x4135e0 */ r_esp -= 4; W32(r_esp, 0x81decau); f_004135e0();
    /* 0081deca: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0081decd: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_0081ded4:; BB(0x0081ded4);
    /* 0081ded4: mov dword ptr [0xaca4e0], eax */ W32((u32)(0xaca4e0u), r_eax);
    /* 0081ded9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0081dee0: jmp 0x81e066 */ goto L_0081e066;
L_0081e066:; BB(0x0081e066);
    /* 0081e066: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 0081e067: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0081e069: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0081e06b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0081e06d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0081e06f: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x81e075u); call_ind(t); }
    /* 0081e075: jmp 0x81e095 */ goto L_0081e095;
L_0081e095:; BB(0x0081e095);
    /* 0081e095: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 0081e096: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0081e099: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0081e09c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0081e09f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0081e0a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0081e0a9: mov esp, ebp */ r_esp = r_ebp;
    /* 0081e0ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0081e0ac: ret  */ FN_RET(0x0081de94); r_esp += 4; return;
L_0081e0d5:; BB(0x0081e0d5);
    /* 0081e0d5: mov eax, 0 */ r_eax = 0x0u;
    /* 0081e0da: jmp 0x81ded4 */ goto L_0081ded4;
}

void f_0081dee5(void)
{
    FN_ENTER(0x0081dee5);
    /* 0081dee5: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 0081deec: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0081deee: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x81def3u); f_005caba4();
    /* 0081def3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0081def4: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0081def7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081def9: je 0x81e0df */ if (fZ) goto L_0081e0df;
L_0081deff:; BB(0x0081deff);
    /* 0081deff: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
    /* 0081df06: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0081df0d: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0081df13: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0081df16: call 0x412a48 */ r_esp -= 4; W32(r_esp, 0x81df1bu); f_00412a48();
    /* 0081df1b: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0081df1e: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_0081df25:; BB(0x0081df25);
    /* 0081df25: mov dword ptr [0xaca4e0], eax */ W32((u32)(0xaca4e0u), r_eax);
    /* 0081df2a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0081df31: jmp 0x81e066 */ goto L_0081e066;
L_0081e066:; BB(0x0081e066);
    /* 0081e066: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 0081e067: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0081e069: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0081e06b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0081e06d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0081e06f: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x81e075u); call_ind(t); }
    /* 0081e075: jmp 0x81e095 */ goto L_0081e095;
L_0081e095:; BB(0x0081e095);
    /* 0081e095: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 0081e096: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0081e099: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0081e09c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0081e09f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0081e0a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0081e0a9: mov esp, ebp */ r_esp = r_ebp;
    /* 0081e0ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0081e0ac: ret  */ FN_RET(0x0081dee5); r_esp += 4; return;
L_0081e0df:; BB(0x0081e0df);
    /* 0081e0df: mov eax, 0 */ r_eax = 0x0u;
    /* 0081e0e4: jmp 0x81df25 */ goto L_0081df25;
}

void f_0081df36(void)
{
    FN_ENTER(0x0081df36);
    /* 0081df36: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 0081df3d: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0081df3f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x81df44u); f_005caba4();
    /* 0081df44: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0081df45: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0081df48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081df4a: je 0x81e0e9 */ if (fZ) goto L_0081e0e9;
L_0081df50:; BB(0x0081df50);
    /* 0081df50: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
    /* 0081df57: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0081df5e: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0081df64: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0081df67: call 0x41450c */ r_esp -= 4; W32(r_esp, 0x81df6cu); f_0041450c();
    /* 0081df6c: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0081df6f: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_0081df76:; BB(0x0081df76);
    /* 0081df76: mov dword ptr [0xaca4e0], eax */ W32((u32)(0xaca4e0u), r_eax);
    /* 0081df7b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0081df82: jmp 0x81e066 */ goto L_0081e066;
L_0081e066:; BB(0x0081e066);
    /* 0081e066: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 0081e067: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0081e069: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0081e06b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0081e06d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0081e06f: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x81e075u); call_ind(t); }
    /* 0081e075: jmp 0x81e095 */ goto L_0081e095;
L_0081e095:; BB(0x0081e095);
    /* 0081e095: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 0081e096: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0081e099: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0081e09c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0081e09f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0081e0a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0081e0a9: mov esp, ebp */ r_esp = r_ebp;
    /* 0081e0ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0081e0ac: ret  */ FN_RET(0x0081df36); r_esp += 4; return;
L_0081e0e9:; BB(0x0081e0e9);
    /* 0081e0e9: mov eax, 0 */ r_eax = 0x0u;
    /* 0081e0ee: jmp 0x81df76 */ goto L_0081df76;
}

void f_0081df87(void)
{
    FN_ENTER(0x0081df87);
    /* 0081df87: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0081df8e: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0081df90: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x81df95u); f_005caba4();
    /* 0081df95: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0081df96: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0081df99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081df9b: je 0x81e0f3 */ if (fZ) goto L_0081e0f3;
L_0081dfa1:; BB(0x0081dfa1);
    /* 0081dfa1: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0081dfa8: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 0081dfaf: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0081dfb2: call 0x7bddc8 */ r_esp -= 4; W32(r_esp, 0x81dfb7u); f_007bddc8();
    /* 0081dfb7: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0081dfba: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0081dfc1:; BB(0x0081dfc1);
    /* 0081dfc1: mov dword ptr [0xaca4e0], eax */ W32((u32)(0xaca4e0u), r_eax);
    /* 0081dfc6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0081dfcd: jmp 0x81e066 */ goto L_0081e066;
L_0081e066:; BB(0x0081e066);
    /* 0081e066: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 0081e067: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0081e069: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0081e06b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0081e06d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0081e06f: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x81e075u); call_ind(t); }
    /* 0081e075: jmp 0x81e095 */ goto L_0081e095;
L_0081e095:; BB(0x0081e095);
    /* 0081e095: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 0081e096: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0081e099: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0081e09c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0081e09f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0081e0a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0081e0a9: mov esp, ebp */ r_esp = r_ebp;
    /* 0081e0ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0081e0ac: ret  */ FN_RET(0x0081df87); r_esp += 4; return;
L_0081e0f3:; BB(0x0081e0f3);
    /* 0081e0f3: mov eax, 0 */ r_eax = 0x0u;
    /* 0081e0f8: jmp 0x81dfc1 */ goto L_0081dfc1;
}

void f_0081dfd2(void)
{
    FN_ENTER(0x0081dfd2);
    /* 0081dfd2: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0081dfd9: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0081dfdb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x81dfe0u); f_005caba4();
    /* 0081dfe0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0081dfe1: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0081dfe4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081dfe6: je 0x81e0fd */ if (fZ) goto L_0081e0fd;
L_0081dfec:; BB(0x0081dfec);
    /* 0081dfec: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0081dff3: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 0081dffa: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0081dffd: call 0x793458 */ r_esp -= 4; W32(r_esp, 0x81e002u); f_00793458();
    /* 0081e002: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0081e005: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0081e00c:; BB(0x0081e00c);
    /* 0081e00c: mov dword ptr [0xaca4e0], eax */ W32((u32)(0xaca4e0u), r_eax);
    /* 0081e011: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0081e018: jmp 0x81e066 */ goto L_0081e066;
L_0081e066:; BB(0x0081e066);
    /* 0081e066: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 0081e067: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0081e069: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0081e06b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0081e06d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0081e06f: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x81e075u); call_ind(t); }
    /* 0081e075: jmp 0x81e095 */ goto L_0081e095;
L_0081e095:; BB(0x0081e095);
    /* 0081e095: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 0081e096: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0081e099: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0081e09c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0081e09f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0081e0a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0081e0a9: mov esp, ebp */ r_esp = r_ebp;
    /* 0081e0ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0081e0ac: ret  */ FN_RET(0x0081dfd2); r_esp += 4; return;
L_0081e0fd:; BB(0x0081e0fd);
    /* 0081e0fd: mov eax, 0 */ r_eax = 0x0u;
    /* 0081e102: jmp 0x81e00c */ goto L_0081e00c;
}

