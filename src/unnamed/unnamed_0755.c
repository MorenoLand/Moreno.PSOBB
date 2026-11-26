#include "protos.h"

void f_00755032(void)
{
    FN_ENTER(0x00755032);
    /* 00755032: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00755035: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00755038: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0075503f: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00755041: je 0x755063 */ if (fZ) goto L_00755063;
L_00755043:; BB(0x00755043);
    /* 00755043: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00755046: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00755049: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0075504b: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x75504eu); call_ind(t); }
    /* 0075504e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00755051: mov byte ptr [eax + 0x1c], 0xb */ W8((u32)(r_eax+0x1cu), 0xbu);
    /* 00755055: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00755058: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075505f: mov esp, ebp */ r_esp = r_ebp;
    /* 00755061: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755062: ret  */ FN_RET(0x00755032); r_esp += 4; return;
L_00755063:; BB(0x00755063);
    /* 00755063: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00755065: je 0x75506e */ if (fZ) goto L_0075506e;
L_00755067:; BB(0x00755067);
    /* 00755067: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075506a: mov byte ptr [eax + 0x1c], 3 */ W8((u32)(r_eax+0x1cu), 0x3u);
L_0075506e:; BB(0x0075506e);
    /* 0075506e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00755071: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00755074: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075507b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075507d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075507e: ret  */ FN_RET(0x00755032); r_esp += 4; return;
}

void f_007551b8(void) /* sub_7551B8 */
{
    FN_ENTER(0x007551b8);
    /* 007551b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007551b9: mov edi, ecx */ r_edi = r_ecx;
    /* 007551bb: push 0x75 */ { u32 v = 0x75u; r_esp -= 4; W32(r_esp, v); }
    /* 007551bd: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7551c2u); f_0073ec50();
    /* 007551c2: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007551c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007551c6: call 0x7553d8 */ r_esp -= 4; W32(r_esp, 0x7551cbu); f_007553d8();
    /* 007551cb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007551ce: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007551cf: ret  */ FN_RET(0x007551b8); r_esp += 4; return;
}

void f_007551d0(void) /* sub_7551D0 */
{
    FN_ENTER(0x007551d0);
    /* 007551d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007551d1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007551d2: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 007551d5: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x7551dau); f_00737d90();
    /* 007551da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007551db: call 0x77d66c */ r_esp -= 4; W32(r_esp, 0x7551e0u); f_0077d66c();
    /* 007551e0: mov ebx, eax */ r_ebx = r_eax;
    /* 007551e2: push 0x77 */ { u32 v = 0x77u; r_esp -= 4; W32(r_esp, v); }
    /* 007551e4: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7551e9u); f_0073ec50();
    /* 007551e9: mov edi, eax */ r_edi = r_eax;
    /* 007551eb: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 007551ed: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7551f2u); f_0079317c();
    /* 007551f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007551f3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007551f5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007551f6: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x7551fbu); f_00735460();
    /* 007551fb: mov edi, eax */ r_edi = r_eax;
    /* 007551fd: push 0x97 */ { u32 v = 0x97u; r_esp -= 4; W32(r_esp, v); }
    /* 00755202: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x755207u); f_0079317c();
    /* 00755207: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075520a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0075520c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075520e: mov ecx, edi */ r_ecx = r_edi;
    /* 00755210: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00755211: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x755216u); f_00735c90();
    /* 00755216: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00755218: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075521a: je 0x755232 */ if (fZ) goto L_00755232;
L_0075521c:; BB(0x0075521c);
    /* 0075521c: push 0x6d */ { u32 v = 0x6du; r_esp -= 4; W32(r_esp, v); }
    /* 0075521e: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x755223u); f_0079317c();
    /* 00755223: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00755224: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00755226: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00755228: mov ecx, edi */ r_ecx = r_edi;
    /* 0075522a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075522b: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x755230u); f_00735c90();
    /* 00755230: jmp 0x755246 */ goto L_00755246;
L_00755232:; BB(0x00755232);
    /* 00755232: push 0x6d */ { u32 v = 0x6du; r_esp -= 4; W32(r_esp, v); }
    /* 00755234: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x755239u); f_0079317c();
    /* 00755239: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075523a: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0075523c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075523e: mov ecx, edi */ r_ecx = r_edi;
    /* 00755240: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00755241: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x755246u); f_00735ee0();
L_00755246:; BB(0x00755246);
    /* 00755246: push 0x434d0000 */ { u32 v = 0x434d0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075524b: movzx edx, word ptr [edi + 0x84] */ r_edx = (u32)R16((u32)(r_edi+0x84u));
    /* 00755252: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00755258: mov word ptr [edi + 0x84], dx */ W16((u32)(r_edi+0x84u), (u16)r_edx);
    /* 0075525f: mov ecx, edi */ r_ecx = r_edi;
    /* 00755261: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x755266u); f_00736138();
    /* 00755266: mov ecx, edi */ r_ecx = r_edi;
    /* 00755268: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x75526du); f_00736458();
    /* 0075526d: mov eax, edi */ r_eax = r_edi;
    /* 0075526f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00755270: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00755271: ret  */ FN_RET(0x007551d0); r_esp += 4; return;
}

void f_00755274(void) /* sub_755274 */
{
    FN_ENTER(0x00755274);
    /* 00755274: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00755275: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00755276: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00755277: push dword ptr [ecx + 0x20] */ { u32 v = R32((u32)(r_ecx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075527a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0075527b: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x755280u); f_0073cd8c();
    /* 00755280: mov edi, eax */ r_edi = r_eax;
    /* 00755282: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00755284: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x755289u); f_0079317c();
    /* 00755289: mov esi, eax */ r_esi = r_eax;
    /* 0075528b: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 0075528d: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x755292u); f_0079317c();
    /* 00755292: mov ebp, eax */ r_ebp = r_eax;
    /* 00755294: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00755296: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75529bu); f_0073ec50();
    /* 0075529b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075529e: push 0x434d0000 */ { u32 v = 0x434d0000u; r_esp -= 4; W32(r_esp, v); }
    /* 007552a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007552a4: mov ecx, edi */ r_ecx = r_edi;
    /* 007552a6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007552a7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007552a8: call 0x73cfec */ r_esp -= 4; W32(r_esp, 0x7552adu); f_0073cfec();
    /* 007552ad: mov ecx, edi */ r_ecx = r_edi;
    /* 007552af: call 0x73d170 */ r_esp -= 4; W32(r_esp, 0x7552b4u); f_0073d170();
    /* 007552b4: mov eax, edi */ r_eax = r_edi;
    /* 007552b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007552b7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007552b8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007552b9: ret  */ FN_RET(0x00755274); r_esp += 4; return;
}

void f_007552bc(void) /* sub_7552BC */
{
    FN_ENTER(0x007552bc);
    /* 007552bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007552bd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007552be: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007552bf: push dword ptr [ecx + 0x20] */ { u32 v = R32((u32)(r_ecx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 007552c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007552c3: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x7552c8u); f_0073cd8c();
    /* 007552c8: mov esi, eax */ r_esi = r_eax;
    /* 007552ca: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 007552cc: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7552d1u); f_0079317c();
    /* 007552d1: mov ebp, eax */ r_ebp = r_eax;
    /* 007552d3: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 007552d5: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7552dau); f_0079317c();
    /* 007552da: mov ebx, eax */ r_ebx = r_eax;
    /* 007552dc: push 0x79 */ { u32 v = 0x79u; r_esp -= 4; W32(r_esp, v); }
    /* 007552de: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7552e3u); f_0073ec50();
    /* 007552e3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007552e6: push 0x434d0000 */ { u32 v = 0x434d0000u; r_esp -= 4; W32(r_esp, v); }
    /* 007552eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007552ec: mov ecx, esi */ r_ecx = r_esi;
    /* 007552ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007552ef: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007552f0: call 0x73cfec */ r_esp -= 4; W32(r_esp, 0x7552f5u); f_0073cfec();
    /* 007552f5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007552f7: mov ecx, esi */ r_ecx = r_esi;
    /* 007552f9: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x7552feu); f_0073d148();
    /* 007552fe: mov ecx, esi */ r_ecx = r_esi;
    /* 00755300: call 0x73d170 */ r_esp -= 4; W32(r_esp, 0x755305u); f_0073d170();
    /* 00755305: mov eax, esi */ r_eax = r_esi;
    /* 00755307: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00755308: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755309: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075530a: ret  */ FN_RET(0x007552bc); r_esp += 4; return;
}

void f_0075530c(void) /* sub_75530C */
{
    FN_ENTER(0x0075530c);
    /* 0075530c: mov dword ptr [0xa9ac94], 0x3f800000 */ W32((u32)(0xa9ac94u), 0x3f800000u);
    /* 00755316: mov dword ptr [0xa9ac98], 0x41000000 */ W32((u32)(0xa9ac98u), 0x41000000u);
    /* 00755320: mov dword ptr [0xa9ac9c], 0x3fc00000 */ W32((u32)(0xa9ac9cu), 0x3fc00000u);
    /* 0075532a: ret  */ FN_RET(0x0075530c); r_esp += 4; return;
}

void f_0075532c(void) /* sub_75532C */
{
    FN_ENTER(0x0075532c);
    /* 0075532c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075532d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0075532f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00755331: call 0x755350 */ r_esp -= 4; W32(r_esp, 0x755336u); f_00755350();
    /* 00755336: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0075533a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075533c: jne 0x755342 */ if (!fZ) goto L_00755342;
L_0075533e:; BB(0x0075533e);
    /* 0075533e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075533f: ret 4 */ FN_RET(0x0075532c); r_esp += 8; return;
L_00755342:; BB(0x00755342);
    /* 00755342: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00755343: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x755348u); f_005c2f74();
    /* 00755348: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00755349: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075534a: ret 4 */ FN_RET(0x0075532c); r_esp += 8; return;
}

void f_00755350(void) /* sub_755350 */
{
    FN_ENTER(0x00755350);
    /* 00755350: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00755351: mov ebp, esp */ r_ebp = r_esp;
    /* 00755353: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00755355: push 0x8f2f38 */ { u32 v = 0x8f2f38u; r_esp -= 4; W32(r_esp, v); }
    /* 0075535a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00755360: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00755361: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00755368: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075536b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075536e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00755371: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00755374: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00755377: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0075537a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00755381: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00755384: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 0075538a: mov dword ptr [edx], 0xb42760 */ W32((u32)(r_edx), 0xb42760u);
    /* 00755390: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755392: je 0x7553a6 */ if (fZ) goto L_007553a6;
L_00755394:; BB(0x00755394);
    /* 00755394: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0075539a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075539c: je 0x7553a6 */ if (fZ) goto L_007553a6;
L_0075539e:; BB(0x0075539e);
    /* 0075539e: call 0x7f2820 */ r_esp -= 4; W32(r_esp, 0x7553a3u); f_007f2820();
    /* 007553a3: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
L_007553a6:; BB(0x007553a6);
    /* 007553a6: mov ecx, dword ptr [edx + 0x94] */ r_ecx = R32((u32)(r_edx+0x94u));
    /* 007553ac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007553ae: je 0x7553ba */ if (fZ) goto L_007553ba;
L_007553b0:; BB(0x007553b0);
    /* 007553b0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007553b2: call 0x721474 */ r_esp -= 4; W32(r_esp, 0x7553b7u); f_00721474();
    /* 007553b7: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
L_007553ba:; BB(0x007553ba);
    /* 007553ba: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007553c1: mov ecx, edx */ r_ecx = r_edx;
    /* 007553c3: call 0x7366bc */ r_esp -= 4; W32(r_esp, 0x7553c8u); f_007366bc();
    /* 007553c8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007553cb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007553d2: mov esp, ebp */ r_esp = r_ebp;
    /* 007553d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007553d5: ret  */ FN_RET(0x00755350); r_esp += 4; return;
}

void f_007553d8(void) /* sub_7553D8 */
{
    FN_ENTER(0x007553d8);
    /* 007553d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007553d9: mov ebp, esp */ r_ebp = r_esp;
    /* 007553db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007553dd: push 0x8f2f60 */ { u32 v = 0x8f2f60u; r_esp -= 4; W32(r_esp, v); }
    /* 007553e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007553e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007553e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007553f0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007553f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007553f6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007553f9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007553fc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007553ff: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00755401: push 0x973fd4 */ { u32 v = 0x973fd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00755406: call 0x737f80 */ r_esp -= 4; W32(r_esp, 0x75540bu); f_00737f80();
    /* 0075540b: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00755412: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00755417: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x75541cu); f_005caba4();
    /* 0075541c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075541f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00755422: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755424: je 0x75545a */ if (fZ) goto L_0075545a;
L_00755426:; BB(0x00755426);
    /* 00755426: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0075542d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00755434: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00755437: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075543a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075543d: call 0x755460 */ r_esp -= 4; W32(r_esp, 0x755442u); f_00755460();
    /* 00755442: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00755445: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0075544c:; BB(0x0075544c);
    /* 0075544c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075544f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00755456: mov esp, ebp */ r_esp = r_ebp;
    /* 00755458: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755459: ret  */ FN_RET(0x007553d8); r_esp += 4; return;
L_0075545a:; BB(0x0075545a);
    /* 0075545a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075545c: jmp 0x75544c */ goto L_0075544c;
}

void f_00755460(void) /* sub_755460 */
{
    FN_ENTER(0x00755460);
    /* 00755460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00755461: mov ebp, esp */ r_ebp = r_esp;
    /* 00755463: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00755465: push 0x8f2f96 */ { u32 v = 0x8f2f96u; r_esp -= 4; W32(r_esp, v); }
    /* 0075546a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00755470: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00755471: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00755478: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075547b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075547e: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00755481: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00755484: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 00755487: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0075548a: movsx edx, word ptr [0xa9c4f4] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa9c4f4u));
    /* 00755491: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00755494: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00755495: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00755498: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0075549a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075549d: call 0x736988 */ r_esp -= 4; W32(r_esp, 0x7554a2u); f_00736988();
    /* 007554a2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007554a9: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 007554ac: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007554af: mov dword ptr [edi], 0xb42760 */ W32((u32)(r_edi), 0xb42760u);
    /* 007554b5: mov esi, dword ptr [0x9f46a4] */ r_esi = R32((u32)(0x9f46a4u));
    /* 007554bb: mov dword ptr [edi + 0x98], 0 */ W32((u32)(r_edi+0x98u), 0x0u);
    /* 007554c5: mov dword ptr [edi + 4], esi */ W32((u32)(r_edi+0x4u), r_esi);
    /* 007554c8: mov ecx, eax */ r_ecx = r_eax;
    /* 007554ca: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 007554cc: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 007554ce: shr ecx, 0x1e */ { u32 c = (30u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007554d1: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007554d3: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 007554d6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 007554d9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007554da: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007554dc: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007554de: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007554e1: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007554e3: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007554e5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007554e8: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7554edu); f_0079317c();
    /* 007554ed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007554ee: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 007554f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007554f2: call 0x737ae4 */ r_esp -= 4; W32(r_esp, 0x7554f7u); f_00737ae4();
    /* 007554f7: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 007554fe: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00755500: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x755505u); f_008581c5();
    /* 00755505: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00755508: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075550b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0075550e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755510: je 0x755595 */ if (fZ) goto L_00755595;
L_00755516:; BB(0x00755516);
    /* 00755516: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0075551d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00755524: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075552a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075552d: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 00755530: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00755533: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00755535: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00755536: call 0x73e5d4 */ r_esp -= 4; W32(r_esp, 0x75553bu); f_0073e5d4();
    /* 0075553b: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00755542:; BB(0x00755542);
    /* 00755542: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00755545: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00755548: mov dword ptr [ecx + 0x94], eax */ W32((u32)(r_ecx+0x94u), r_eax);
    /* 0075554e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00755555: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 0075555c: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00755561: mov word ptr [ecx + 0x84], ax */ W16((u32)(r_ecx+0x84u), (u16)r_eax);
    /* 00755568: call 0x755640 */ r_esp -= 4; W32(r_esp, 0x75556du); f_00755640();
    /* 0075556d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00755570: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00755573: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00755576: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00755577: call 0x737c40 */ r_esp -= 4; W32(r_esp, 0x75557cu); f_00737c40();
    /* 0075557c: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0075557f: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00755582: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00755585: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00755588: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075558f: mov esp, ebp */ r_esp = r_ebp;
    /* 00755591: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755592: ret 8 */ FN_RET(0x00755460); r_esp += 12; return;
L_00755595:; BB(0x00755595);
    /* 00755595: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00755597: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0075559a: jmp 0x755542 */ goto L_00755542;
}

void f_0075559c(void) /* sub_75559C */
{
    FN_ENTER(0x0075559c);
    /* 0075559c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075559d: mov esi, ecx */ r_esi = r_ecx;
    /* 0075559f: mov ecx, esi */ r_ecx = r_esi;
    /* 007555a1: call 0x7369bc */ r_esp -= 4; W32(r_esp, 0x7555a6u); f_007369bc();
    /* 007555a6: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 007555ad: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007555af: jne 0x7555c8 */ if (!fZ) goto L_007555c8;
L_007555b1:; BB(0x007555b1);
    /* 007555b1: mov ecx, esi */ r_ecx = r_esi;
    /* 007555b3: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x7555b8u); f_007108f4();
    /* 007555b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007555b9: mov ecx, dword ptr [esi + 0x94] */ r_ecx = R32((u32)(r_esi+0x94u));
    /* 007555bf: call 0x73e60c */ r_esp -= 4; W32(r_esp, 0x7555c4u); f_0073e60c();
    /* 007555c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007555c6: jne 0x7555ca */ if (!fZ) goto L_007555ca;
L_007555c8:; BB(0x007555c8);
    /* 007555c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007555c9: ret  */ FN_RET(0x0075559c); r_esp += 4; return;
L_007555ca:; BB(0x007555ca);
    /* 007555ca: mov ecx, esi */ r_ecx = r_esi;
    /* 007555cc: call 0x755640 */ r_esp -= 4; W32(r_esp, 0x7555d1u); f_00755640();
    /* 007555d1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007555d2: ret  */ FN_RET(0x0075559c); r_esp += 4; return;
}

void f_007555d4(void) /* sub_7555D4 */
{
    FN_ENTER(0x007555d4);
    /* 007555d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007555d5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007555d6: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007555d8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007555da: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x7555dfu); f_007108f4();
    /* 007555df: mov ebp, eax */ r_ebp = r_eax;
    /* 007555e1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007555e2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007555e4: call 0x710f80 */ r_esp -= 4; W32(r_esp, 0x7555e9u); f_00710f80();
    /* 007555e9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007555ea: lea edx, [ebx + 0x24] */ r_edx = (u32)(r_ebx+0x24u);
    /* 007555ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007555ee: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007555f0: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x7555f5u); f_0072a648();
    /* 007555f5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007555f6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007555f8: call 0x73746c */ r_esp -= 4; W32(r_esp, 0x7555fdu); f_0073746c();
    /* 007555fd: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00755600: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755602: je 0x75560a */ if (fZ) goto L_0075560a;
L_00755604:; BB(0x00755604);
    /* 00755604: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00755605: call 0x761390 */ r_esp -= 4; W32(r_esp, 0x75560au); f_00761390();
L_0075560a:; BB(0x0075560a);
    /* 0075560a: mov ecx, dword ptr [ebx + 0x94] */ r_ecx = R32((u32)(r_ebx+0x94u));
    /* 00755610: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00755612: je 0x75561a */ if (fZ) goto L_0075561a;
L_00755614:; BB(0x00755614);
    /* 00755614: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00755615: call 0x73e6b4 */ r_esp -= 4; W32(r_esp, 0x75561au); f_0073e6b4();
L_0075561a:; BB(0x0075561a);
    /* 0075561a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075561b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075561c: ret  */ FN_RET(0x007555d4); r_esp += 4; return;
}

void f_00755620(void) /* sub_755620 */
{
    FN_ENTER(0x00755620);
    /* 00755620: mov dword ptr [0xa9aca4], 0x3f800000 */ W32((u32)(0xa9aca4u), 0x3f800000u);
    /* 0075562a: mov dword ptr [0xa9aca8], 0x41000000 */ W32((u32)(0xa9aca8u), 0x41000000u);
    /* 00755634: mov dword ptr [0xa9acac], 0x3fc00000 */ W32((u32)(0xa9acacu), 0x3fc00000u);
    /* 0075563e: ret  */ FN_RET(0x00755620); r_esp += 4; return;
}

void f_00755640(void) /* sub_755640 */
{
    FN_ENTER(0x00755640);
    /* 00755640: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00755641: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00755642: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00755643: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00755645: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00755647: call 0x737d70 */ r_esp -= 4; W32(r_esp, 0x75564cu); f_00737d70();
    /* 0075564c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075564e: call 0x737d1c */ r_esp -= 4; W32(r_esp, 0x755653u); f_00737d1c();
    /* 00755653: mov eax, dword ptr [ebx + 0x94] */ r_eax = R32((u32)(r_ebx+0x94u));
    /* 00755659: movsx edx, byte ptr [eax] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0075565c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075565e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00755660: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00755662: mov esi, eax */ r_esi = r_eax;
    /* 00755664: mov edi, edx */ r_edi = r_edx;
L_00755666:; BB(0x00755666);
    /* 00755666: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00755667: call 0x77d66c */ r_esp -= 4; W32(r_esp, 0x75566cu); f_0077d66c();
    /* 0075566c: mov edx, eax */ r_edx = r_eax;
    /* 0075566e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00755671: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00755673: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755675: je 0x7556e0 */ if (fZ) goto L_007556e0;
L_00755677:; BB(0x00755677);
    /* 00755677: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075567a: je 0x7556ef */ if (fZ) goto L_007556ef;
L_0075567c:; BB(0x0075567c);
    /* 0075567c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075567f: jne 0x7556ac */ if (!fZ) goto L_007556ac;
L_00755681:; BB(0x00755681);
    /* 00755681: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 00755688: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00755689: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075568c: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 00755691: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00755692: call 0x707170 */ r_esp -= 4; W32(r_esp, 0x755697u); f_00707170();
    /* 00755697: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075569a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075569b: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 007556a0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007556a2: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007556a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007556a5: call 0x737754 */ r_esp -= 4; W32(r_esp, 0x7556aau); f_00737754();
    /* 007556aa: jmp 0x755705 */ goto L_00755705;
L_007556ac:; BB(0x007556ac);
    /* 007556ac: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007556af: jne 0x7556d0 */ if (!fZ) goto L_007556d0;
L_007556b1:; BB(0x007556b1);
    /* 007556b1: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007556b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007556b5: call 0x77d8c0 */ r_esp -= 4; W32(r_esp, 0x7556bau); f_0077d8c0();
    /* 007556ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007556bb: mov ecx, eax */ r_ecx = r_eax;
    /* 007556bd: call 0x77d910 */ r_esp -= 4; W32(r_esp, 0x7556c2u); f_0077d910();
    /* 007556c2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007556c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007556c4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007556c6: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007556c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007556c9: call 0x737754 */ r_esp -= 4; W32(r_esp, 0x7556ceu); f_00737754();
    /* 007556ce: jmp 0x755705 */ goto L_00755705;
L_007556d0:; BB(0x007556d0);
    /* 007556d0: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 007556d6: mov dword ptr [ebx + 0x98], 1 */ W32((u32)(r_ebx+0x98u), 0x1u);
L_007556e0:; BB(0x007556e0);
    /* 007556e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007556e1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007556e3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007556e5: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007556e7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007556e8: call 0x737754 */ r_esp -= 4; W32(r_esp, 0x7556edu); f_00737754();
    /* 007556ed: jmp 0x755705 */ goto L_00755705;
L_007556ef:; BB(0x007556ef);
    /* 007556ef: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007556f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007556f3: call 0x83ddc4 */ r_esp -= 4; W32(r_esp, 0x7556f8u); f_0083ddc4();
    /* 007556f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007556f9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007556fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007556fb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007556fd: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 007556ff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00755700: call 0x737754 */ r_esp -= 4; W32(r_esp, 0x755705u); f_00737754();
L_00755705:; BB(0x00755705);
    /* 00755705: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00755708: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075570b: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075570e: jl 0x755666 */ if ((fS!=fO)) goto L_00755666;
L_00755714:; BB(0x00755714);
    /* 00755714: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00755716: call 0x737da4 */ r_esp -= 4; W32(r_esp, 0x75571bu); f_00737da4();
    /* 0075571b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075571c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075571d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075571e: ret  */ FN_RET(0x00755640); r_esp += 4; return;
}

void f_00755720(void) /* sub_755720 */
{
    FN_ENTER(0x00755720);
    /* 00755720: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00755721: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00755723: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00755725: call 0x755744 */ r_esp -= 4; W32(r_esp, 0x75572au); f_00755744();
    /* 0075572a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0075572e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00755730: jne 0x755736 */ if (!fZ) goto L_00755736;
L_00755732:; BB(0x00755732);
    /* 00755732: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00755733: ret 4 */ FN_RET(0x00755720); r_esp += 8; return;
L_00755736:; BB(0x00755736);
    /* 00755736: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00755737: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x75573cu); f_005c2f74();
    /* 0075573c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075573d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075573e: ret 4 */ FN_RET(0x00755720); r_esp += 8; return;
}

void f_00755744(void) /* sub_755744 */
{
    FN_ENTER(0x00755744);
    /* 00755744: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00755745: mov ebp, esp */ r_ebp = r_esp;
    /* 00755747: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00755749: push 0x8f2fb0 */ { u32 v = 0x8f2fb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075574e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00755754: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00755755: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0075575c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075575f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00755762: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00755765: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00755768: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0075576b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0075576e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00755775: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00755778: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 0075577b: mov dword ptr [eax], 0xb427f0 */ W32((u32)(r_eax), 0xb427f0u);
    /* 00755781: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755783: je 0x755794 */ if (fZ) goto L_00755794;
L_00755785:; BB(0x00755785);
    /* 00755785: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75578au); f_0073d160();
    /* 0075578a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075578d: mov dword ptr [eax + 0x54], 0 */ W32((u32)(r_eax+0x54u), 0x0u);
L_00755794:; BB(0x00755794);
    /* 00755794: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00755797: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755799: je 0x7557b2 */ if (fZ) goto L_007557b2;
L_0075579b:; BB(0x0075579b);
    /* 0075579b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0075579f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007557a4: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 007557a8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007557ab: mov dword ptr [eax + 0x60], 0 */ W32((u32)(r_eax+0x60u), 0x0u);
L_007557b2:; BB(0x007557b2);
    /* 007557b2: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 007557b5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007557b7: je 0x7557c8 */ if (fZ) goto L_007557c8;
L_007557b9:; BB(0x007557b9);
    /* 007557b9: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7557beu); f_007127b0();
    /* 007557be: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007557c1: mov dword ptr [eax + 0x50], 0 */ W32((u32)(r_eax+0x50u), 0x0u);
L_007557c8:; BB(0x007557c8);
    /* 007557c8: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 007557cb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007557cd: je 0x7557de */ if (fZ) goto L_007557de;
L_007557cf:; BB(0x007557cf);
    /* 007557cf: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7557d4u); f_007127b0();
    /* 007557d4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007557d7: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
L_007557de:; BB(0x007557de);
    /* 007557de: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 007557e1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007557e3: je 0x7557f4 */ if (fZ) goto L_007557f4;
L_007557e5:; BB(0x007557e5);
    /* 007557e5: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7557eau); f_007127b0();
    /* 007557ea: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007557ed: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
L_007557f4:; BB(0x007557f4);
    /* 007557f4: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 007557f7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007557f9: je 0x75580a */ if (fZ) goto L_0075580a;
L_007557fb:; BB(0x007557fb);
    /* 007557fb: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x755800u); f_007127b0();
    /* 00755800: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00755803: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_0075580a:; BB(0x0075580a);
    /* 0075580a: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0075580d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075580f: je 0x755820 */ if (fZ) goto L_00755820;
L_00755811:; BB(0x00755811);
    /* 00755811: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x755816u); f_007127b0();
    /* 00755816: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00755819: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
L_00755820:; BB(0x00755820);
    /* 00755820: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00755823: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755825: je 0x755836 */ if (fZ) goto L_00755836;
L_00755827:; BB(0x00755827);
    /* 00755827: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75582cu); f_007127b0();
    /* 0075582c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075582f: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_00755836:; BB(0x00755836);
    /* 00755836: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 00755839: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075583b: je 0x75584c */ if (fZ) goto L_0075584c;
L_0075583d:; BB(0x0075583d);
    /* 0075583d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x755842u); f_007127b0();
    /* 00755842: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00755845: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
L_0075584c:; BB(0x0075584c);
    /* 0075584c: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0075584f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755851: je 0x755862 */ if (fZ) goto L_00755862;
L_00755853:; BB(0x00755853);
    /* 00755853: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x755858u); f_007127b0();
    /* 00755858: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075585b: mov dword ptr [eax + 0x58], 0 */ W32((u32)(r_eax+0x58u), 0x0u);
L_00755862:; BB(0x00755862);
    /* 00755862: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 00755865: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755867: je 0x755878 */ if (fZ) goto L_00755878;
L_00755869:; BB(0x00755869);
    /* 00755869: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75586eu); f_007127b0();
    /* 0075586e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00755871: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_00755878:; BB(0x00755878);
    /* 00755878: call 0x8136c0 */ r_esp -= 4; W32(r_esp, 0x75587du); f_008136c0();
    /* 0075587d: call 0x77a5c4 */ r_esp -= 4; W32(r_esp, 0x755882u); f_0077a5c4();
    /* 00755882: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00755889: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075588c: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x755891u); f_008171e8();
    /* 00755891: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00755894: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075589b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075589d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075589e: ret  */ FN_RET(0x00755744); r_esp += 4; return;
}

void f_007558a0(void) /* sub_7558A0 */
{
    FN_ENTER(0x007558a0);
    /* 007558a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007558a1: mov ebp, esp */ r_ebp = r_esp;
    /* 007558a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007558a5: push 0x8f2fcc */ { u32 v = 0x8f2fccu; r_esp -= 4; W32(r_esp, v); }
    /* 007558aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007558b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007558b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007558b8: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007558bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007558be: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 007558c1: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 007558c4: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 007558c7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 007558ca: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 007558cd: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 007558d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007558d1: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 007558d4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007558d7: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7558dcu); f_008193cc();
    /* 007558dc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007558e3: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 007558e6: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 007558e9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007558ec: mov dword ptr [ebx + 0x34], edi */ W32((u32)(r_ebx+0x34u), r_edi);
    /* 007558ef: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 007558f2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007558f4: mov dword ptr [ebx], 0xb427f0 */ W32((u32)(r_ebx), 0xb427f0u);
    /* 007558fa: mov esi, dword ptr [0x9f46a8] */ r_esi = R32((u32)(0x9f46a8u));
    /* 00755900: mov dword ptr [ebx + 4], esi */ W32((u32)(r_ebx+0x4u), r_esi);
    /* 00755903: mov dword ptr [ebx + 0x44], ecx */ W32((u32)(r_ebx+0x44u), r_ecx);
    /* 00755906: mov dword ptr [ebx + 0x58], ecx */ W32((u32)(r_ebx+0x58u), r_ecx);
    /* 00755909: mov dword ptr [ebx + 0x5c], ecx */ W32((u32)(r_ebx+0x5cu), r_ecx);
    /* 0075590c: mov dword ptr [ebx + 0x38], ecx */ W32((u32)(r_ebx+0x38u), r_ecx);
    /* 0075590f: mov dword ptr [ebx + 0x3c], ecx */ W32((u32)(r_ebx+0x3cu), r_ecx);
    /* 00755912: mov dword ptr [ebx + 0x40], ecx */ W32((u32)(r_ebx+0x40u), r_ecx);
    /* 00755915: mov dword ptr [ebx + 0x48], ecx */ W32((u32)(r_ebx+0x48u), r_ecx);
    /* 00755918: mov dword ptr [ebx + 0x4c], ecx */ W32((u32)(r_ebx+0x4cu), r_ecx);
    /* 0075591b: mov dword ptr [ebx + 0x50], ecx */ W32((u32)(r_ebx+0x50u), r_ecx);
    /* 0075591e: mov dword ptr [ebx + 0x60], ecx */ W32((u32)(r_ebx+0x60u), r_ecx);
    /* 00755921: mov dword ptr [ebx + 0x54], ecx */ W32((u32)(r_ebx+0x54u), r_ecx);
    /* 00755924: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00755929: mov dword ptr [ebx + 0x24], edx */ W32((u32)(r_ebx+0x24u), r_edx);
    /* 0075592c: mov dword ptr [ebx + 0x28], edx */ W32((u32)(r_ebx+0x28u), r_edx);
    /* 0075592f: mov dword ptr [ebx + 0x2c], ecx */ W32((u32)(r_ebx+0x2cu), r_ecx);
    /* 00755932: mov dword ptr [ebx + 0x30], ecx */ W32((u32)(r_ebx+0x30u), r_ecx);
    /* 00755935: mov byte ptr [ebx + 0x1c], cl */ W8((u32)(r_ebx+0x1cu), (u8)r_ecx);
    /* 00755938: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x75593du); f_006dc358();
    /* 0075593d: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00755940: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00755943: jne 0x75594b */ if (!fZ) goto L_0075594b;
L_00755945:; BB(0x00755945);
    /* 00755945: mov byte ptr [edx + 0x1d], 1 */ W8((u32)(r_edx+0x1du), 0x1u);
    /* 00755949: jmp 0x75594f */ goto L_0075594f;
L_0075594b:; BB(0x0075594b);
    /* 0075594b: mov byte ptr [edx + 0x1d], 0 */ W8((u32)(r_edx+0x1du), 0x0u);
L_0075594f:; BB(0x0075594f);
    /* 0075594f: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00755952: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00755955: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00755958: mov eax, edx */ r_eax = r_edx;
    /* 0075595a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075595d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00755964: mov esp, ebp */ r_esp = r_ebp;
    /* 00755966: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755967: ret 8 */ FN_RET(0x007558a0); r_esp += 12; return;
}

void f_0075596c(void) /* sub_75596C */
{
    FN_ENTER(0x0075596c);
    /* 0075596c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075596d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075596e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075596f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00755970: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00755973: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00755975: movzx eax, byte ptr [ebx + 0x1c] */ r_eax = (u32)R8((u32)(r_ebx+0x1cu));
    /* 00755979: cmp eax, 0x1b */ {  u32 a = r_eax; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0075597c: ja 0x7564c9 */ if ((!fC&&!fZ)) goto L_007564c9;
L_00755982:; BB(0x00755982);
    /* 00755982: mov eax, dword ptr [eax*4 + 0x974020] */ r_eax = R32((u32)(r_eax*4+0x974020u));
    /* 00755989: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_007564c9:; BB(0x007564c9);
    /* 007564c9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007564cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007564cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007564ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007564cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007564d0: ret  */ FN_RET(0x0075596c); r_esp += 4; return;
}

void f_0075598b(void)
{
    FN_ENTER(0x0075598b);
    /* 0075598b: mov ecx, dword ptr [ebx + 0x54] */ r_ecx = R32((u32)(r_ebx+0x54u));
    /* 0075598e: jmp 0x7559bb */ goto L_007559bb;
L_007559bb:; BB(0x007559bb);
    /* 007559bb: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x7559c0u); f_0073d114();
    /* 007559c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007559c2: je 0x7559d0 */ if (fZ) goto L_007559d0;
L_007559c4:; BB(0x007559c4);
    /* 007559c4: mov byte ptr [ebx + 0x1c], 0x18 */ W8((u32)(r_ebx+0x1cu), 0x18u);
    /* 007559c8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007559cb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007559cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007559cd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007559ce: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007559cf: ret  */ FN_RET(0x0075598b); r_esp += 4; return;
L_007559d0:; BB(0x007559d0);
    /* 007559d0: mov ecx, dword ptr [ebx + 0x54] */ r_ecx = R32((u32)(r_ebx+0x54u));
    /* 007559d3: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x7559d8u); f_0073ce50();
    /* 007559d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007559da: je 0x7564c9 */ if (fZ) goto L_007564c9;
L_007559e0:; BB(0x007559e0);
    /* 007559e0: mov ecx, dword ptr [ebx + 0x54] */ r_ecx = R32((u32)(r_ebx+0x54u));
    /* 007559e3: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x7559e8u); f_0073d134();
    /* 007559e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007559ea: je 0x7559f8 */ if (fZ) goto L_007559f8;
L_007559ec:; BB(0x007559ec);
    /* 007559ec: mov byte ptr [ebx + 0x1c], 0x18 */ W8((u32)(r_ebx+0x1cu), 0x18u);
    /* 007559f0: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007559f3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007559f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007559f5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007559f6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007559f7: ret  */ FN_RET(0x0075598b); r_esp += 4; return;
L_007559f8:; BB(0x007559f8);
    /* 007559f8: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 007559fb: call 0x78ed4c */ r_esp -= 4; W32(r_esp, 0x755a00u); f_0078ed4c();
    /* 00755a00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00755a01: call 0x77a4fc */ r_esp -= 4; W32(r_esp, 0x755a06u); f_0077a4fc();
    /* 00755a06: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00755a07: mov byte ptr [ebx + 0x1c], 1 */ W8((u32)(r_ebx+0x1cu), 0x1u);
    /* 00755a0b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00755a0e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00755a0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755a10: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00755a11: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00755a12: ret  */ FN_RET(0x0075598b); r_esp += 4; return;
L_007564c9:; BB(0x007564c9);
    /* 007564c9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007564cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007564cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007564ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007564cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007564d0: ret  */ FN_RET(0x0075598b); r_esp += 4; return;
}

void f_00755990(void)
{
    FN_ENTER(0x00755990);
    /* 00755990: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00755995: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75599au); f_0073ec50();
    /* 0075599a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075599b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075599c: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 0075599f: call 0x78edec */ r_esp -= 4; W32(r_esp, 0x7559a4u); f_0078edec();
    /* 007559a4: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 007559a7: call 0x78ee54 */ r_esp -= 4; W32(r_esp, 0x7559acu); f_0078ee54();
    /* 007559ac: mov ecx, dword ptr [ebx + 0x54] */ r_ecx = R32((u32)(r_ebx+0x54u));
    /* 007559af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007559b1: je 0x7564d1 */ if (fZ) goto L_007564d1;
L_007559b7:; BB(0x007559b7);
    /* 007559b7: mov byte ptr [ebx + 0x1c], 0x1b */ W8((u32)(r_ebx+0x1cu), 0x1bu);
    /* 007559bb: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x7559c0u); f_0073d114();
    /* 007559c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007559c2: je 0x7559d0 */ if (fZ) goto L_007559d0;
L_007559c4:; BB(0x007559c4);
    /* 007559c4: mov byte ptr [ebx + 0x1c], 0x18 */ W8((u32)(r_ebx+0x1cu), 0x18u);
    /* 007559c8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007559cb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007559cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007559cd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007559ce: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007559cf: ret  */ FN_RET(0x00755990); r_esp += 4; return;
L_007559d0:; BB(0x007559d0);
    /* 007559d0: mov ecx, dword ptr [ebx + 0x54] */ r_ecx = R32((u32)(r_ebx+0x54u));
    /* 007559d3: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x7559d8u); f_0073ce50();
    /* 007559d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007559da: je 0x7564c9 */ if (fZ) goto L_007564c9;
L_007559e0:; BB(0x007559e0);
    /* 007559e0: mov ecx, dword ptr [ebx + 0x54] */ r_ecx = R32((u32)(r_ebx+0x54u));
    /* 007559e3: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x7559e8u); f_0073d134();
    /* 007559e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007559ea: je 0x7559f8 */ if (fZ) goto L_007559f8;
L_007559ec:; BB(0x007559ec);
    /* 007559ec: mov byte ptr [ebx + 0x1c], 0x18 */ W8((u32)(r_ebx+0x1cu), 0x18u);
    /* 007559f0: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007559f3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007559f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007559f5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007559f6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007559f7: ret  */ FN_RET(0x00755990); r_esp += 4; return;
L_007559f8:; BB(0x007559f8);
    /* 007559f8: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 007559fb: call 0x78ed4c */ r_esp -= 4; W32(r_esp, 0x755a00u); f_0078ed4c();
    /* 00755a00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00755a01: call 0x77a4fc */ r_esp -= 4; W32(r_esp, 0x755a06u); f_0077a4fc();
    /* 00755a06: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00755a07: mov byte ptr [ebx + 0x1c], 1 */ W8((u32)(r_ebx+0x1cu), 0x1u);
    /* 00755a0b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00755a0e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00755a0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755a10: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00755a11: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00755a12: ret  */ FN_RET(0x00755990); r_esp += 4; return;
L_007564c9:; BB(0x007564c9);
    /* 007564c9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007564cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007564cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007564ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007564cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007564d0: ret  */ FN_RET(0x00755990); r_esp += 4; return;
L_007564d1:; BB(0x007564d1);
    /* 007564d1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007564d3: call 0x756808 */ r_esp -= 4; W32(r_esp, 0x7564d8u); f_00756808();
    /* 007564d8: mov ecx, eax */ r_ecx = r_eax;
    /* 007564da: mov dword ptr [ebx + 0x54], ecx */ W32((u32)(r_ebx+0x54u), r_ecx);
    /* 007564dd: jmp 0x7559b7 */ goto L_007559b7;
}

void f_00755a13(void)
{
    FN_ENTER(0x00755a13);
    /* 00755a13: mov ecx, dword ptr [ebx + 0x54] */ r_ecx = R32((u32)(r_ebx+0x54u));
    /* 00755a16: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755a18: je 0x755a26 */ if (fZ) goto L_00755a26;
L_00755a1a:; BB(0x00755a1a);
    /* 00755a1a: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x755a1fu); f_0073d160();
    /* 00755a1f: mov dword ptr [ebx + 0x54], 0 */ W32((u32)(r_ebx+0x54u), 0x0u);
L_00755a26:; BB(0x00755a26);
    /* 00755a26: mov ecx, dword ptr [ebx + 0x4c] */ r_ecx = R32((u32)(r_ebx+0x4cu));
    /* 00755a29: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755a2b: je 0x755a39 */ if (fZ) goto L_00755a39;
L_00755a2d:; BB(0x00755a2d);
    /* 00755a2d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x755a32u); f_007127b0();
    /* 00755a32: mov dword ptr [ebx + 0x4c], 0 */ W32((u32)(r_ebx+0x4cu), 0x0u);
L_00755a39:; BB(0x00755a39);
    /* 00755a39: mov ecx, dword ptr [ebx + 0x48] */ r_ecx = R32((u32)(r_ebx+0x48u));
    /* 00755a3c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755a3e: je 0x755a4c */ if (fZ) goto L_00755a4c;
L_00755a40:; BB(0x00755a40);
    /* 00755a40: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x755a45u); f_007127b0();
    /* 00755a45: mov dword ptr [ebx + 0x48], 0 */ W32((u32)(r_ebx+0x48u), 0x0u);
L_00755a4c:; BB(0x00755a4c);
    /* 00755a4c: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 00755a4f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755a51: je 0x755a5f */ if (fZ) goto L_00755a5f;
L_00755a53:; BB(0x00755a53);
    /* 00755a53: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x755a58u); f_007127b0();
    /* 00755a58: mov dword ptr [ebx + 0x44], 0 */ W32((u32)(r_ebx+0x44u), 0x0u);
L_00755a5f:; BB(0x00755a5f);
    /* 00755a5f: mov eax, dword ptr [ebx + 0x60] */ r_eax = R32((u32)(r_ebx+0x60u));
    /* 00755a62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755a64: je 0x7564e2 */ if (fZ) goto L_007564e2;
L_00755a6a:; BB(0x00755a6a);
    /* 00755a6a: push 0xcf */ { u32 v = 0xcfu; r_esp -= 4; W32(r_esp, v); }
    /* 00755a6f: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x755a74u); f_0073ec50();
    /* 00755a74: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00755a75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00755a76: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00755a79: call 0x78edec */ r_esp -= 4; W32(r_esp, 0x755a7eu); f_0078edec();
    /* 00755a7e: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00755a81: call 0x78ed2c */ r_esp -= 4; W32(r_esp, 0x755a86u); f_0078ed2c();
    /* 00755a86: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00755a89: call 0x78ee34 */ r_esp -= 4; W32(r_esp, 0x755a8eu); f_0078ee34();
    /* 00755a8e: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00755a91: call 0x78ee74 */ r_esp -= 4; W32(r_esp, 0x755a96u); f_0078ee74();
    /* 00755a96: mov byte ptr [ebx + 0x1c], 0x19 */ W8((u32)(r_ebx+0x1cu), 0x19u);
    /* 00755a9a: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00755a9d: call 0x78ed20 */ r_esp -= 4; W32(r_esp, 0x755aa2u); f_0078ed20();
    /* 00755aa2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755aa4: je 0x755ab2 */ if (fZ) goto L_00755ab2;
L_00755aa6:; BB(0x00755aa6);
    /* 00755aa6: mov byte ptr [ebx + 0x1c], 1 */ W8((u32)(r_ebx+0x1cu), 0x1u);
    /* 00755aaa: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00755aad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00755aae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755aaf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00755ab0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00755ab1: ret  */ FN_RET(0x00755a13); r_esp += 4; return;
L_00755ab2:; BB(0x00755ab2);
    /* 00755ab2: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00755ab5: call 0x78ed14 */ r_esp -= 4; W32(r_esp, 0x755abau); f_0078ed14();
    /* 00755aba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755abc: je 0x7564c9 */ if (fZ) goto L_007564c9;
L_00755ac2:; BB(0x00755ac2);
    /* 00755ac2: mov byte ptr [ebx + 0x1c], 0x1a */ W8((u32)(r_ebx+0x1cu), 0x1au);
    /* 00755ac6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00755ac9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00755aca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755acb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00755acc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00755acd: ret  */ FN_RET(0x00755a13); r_esp += 4; return;
L_007564c9:; BB(0x007564c9);
    /* 007564c9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007564cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007564cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007564ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007564cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007564d0: ret  */ FN_RET(0x00755a13); r_esp += 4; return;
L_007564e2:; BB(0x007564e2);
    /* 007564e2: call 0x756ab0 */ r_esp -= 4; W32(r_esp, 0x7564e7u); f_00756ab0();
    /* 007564e7: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 007564ea: call 0x77a5b0 */ r_esp -= 4; W32(r_esp, 0x7564efu); f_0077a5b0();
    /* 007564ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007564f0: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 007564f3: call 0x78ed74 */ r_esp -= 4; W32(r_esp, 0x7564f8u); f_0078ed74();
    /* 007564f8: jmp 0x755a6a */ goto L_00755a6a;
}

void f_00755a9a(void)
{
    FN_ENTER(0x00755a9a);
    /* 00755a9a: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00755a9d: call 0x78ed20 */ r_esp -= 4; W32(r_esp, 0x755aa2u); f_0078ed20();
    /* 00755aa2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755aa4: je 0x755ab2 */ if (fZ) goto L_00755ab2;
L_00755aa6:; BB(0x00755aa6);
    /* 00755aa6: mov byte ptr [ebx + 0x1c], 1 */ W8((u32)(r_ebx+0x1cu), 0x1u);
    /* 00755aaa: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00755aad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00755aae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755aaf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00755ab0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00755ab1: ret  */ FN_RET(0x00755a9a); r_esp += 4; return;
L_00755ab2:; BB(0x00755ab2);
    /* 00755ab2: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00755ab5: call 0x78ed14 */ r_esp -= 4; W32(r_esp, 0x755abau); f_0078ed14();
    /* 00755aba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755abc: je 0x7564c9 */ if (fZ) goto L_007564c9;
L_00755ac2:; BB(0x00755ac2);
    /* 00755ac2: mov byte ptr [ebx + 0x1c], 0x1a */ W8((u32)(r_ebx+0x1cu), 0x1au);
    /* 00755ac6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00755ac9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00755aca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755acb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00755acc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00755acd: ret  */ FN_RET(0x00755a9a); r_esp += 4; return;
L_007564c9:; BB(0x007564c9);
    /* 007564c9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007564cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007564cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007564ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007564cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007564d0: ret  */ FN_RET(0x00755a9a); r_esp += 4; return;
}

void f_00755ace(void)
{
    FN_ENTER(0x00755ace);
    /* 00755ace: mov ecx, dword ptr [ebx + 0x50] */ r_ecx = R32((u32)(r_ebx+0x50u));
    /* 00755ad1: jmp 0x755ae2 */ goto L_00755ae2;
L_00755ae2:; BB(0x00755ae2);
    /* 00755ae2: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 00755ae9: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00755aec: je 0x755afa */ if (fZ) goto L_00755afa;
L_00755aee:; BB(0x00755aee);
    /* 00755aee: mov byte ptr [ebx + 0x1c], 0x14 */ W8((u32)(r_ebx+0x1cu), 0x14u);
    /* 00755af2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00755af5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00755af6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755af7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00755af8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00755af9: ret  */ FN_RET(0x00755ace); r_esp += 4; return;
L_00755afa:; BB(0x00755afa);
    /* 00755afa: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00755afd: je 0x7564c9 */ if (fZ) goto L_007564c9;
L_00755b03:; BB(0x00755b03);
    /* 00755b03: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x755b08u); f_007365f4();
    /* 00755b08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00755b09: call 0x77a4c0 */ r_esp -= 4; W32(r_esp, 0x755b0eu); f_0077a4c0();
    /* 00755b0e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00755b0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755b11: je 0x755b26 */ if (fZ) goto L_00755b26;
L_00755b13:; BB(0x00755b13);
    /* 00755b13: mov ecx, dword ptr [ebx + 0x4c] */ r_ecx = R32((u32)(r_ebx+0x4cu));
    /* 00755b16: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755b18: je 0x755b26 */ if (fZ) goto L_00755b26;
L_00755b1a:; BB(0x00755b1a);
    /* 00755b1a: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x755b1fu); f_007127b0();
    /* 00755b1f: mov dword ptr [ebx + 0x4c], 0 */ W32((u32)(r_ebx+0x4cu), 0x0u);
L_00755b26:; BB(0x00755b26);
    /* 00755b26: mov byte ptr [ebx + 0x1c], 0x14 */ W8((u32)(r_ebx+0x1cu), 0x14u);
    /* 00755b2a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00755b2d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00755b2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755b2f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00755b30: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00755b31: ret  */ FN_RET(0x00755ace); r_esp += 4; return;
L_007564c9:; BB(0x007564c9);
    /* 007564c9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007564cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007564cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007564ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007564cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007564d0: ret  */ FN_RET(0x00755ace); r_esp += 4; return;
}

void f_00755ad3(void)
{
    FN_ENTER(0x00755ad3);
    /* 00755ad3: mov ecx, dword ptr [ebx + 0x50] */ r_ecx = R32((u32)(r_ebx+0x50u));
    /* 00755ad6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755ad8: je 0x7564fd */ if (fZ) goto L_007564fd;
L_00755ade:; BB(0x00755ade);
    /* 00755ade: mov byte ptr [ebx + 0x1c], 0x17 */ W8((u32)(r_ebx+0x1cu), 0x17u);
    /* 00755ae2: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 00755ae9: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00755aec: je 0x755afa */ if (fZ) goto L_00755afa;
L_00755aee:; BB(0x00755aee);
    /* 00755aee: mov byte ptr [ebx + 0x1c], 0x14 */ W8((u32)(r_ebx+0x1cu), 0x14u);
    /* 00755af2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00755af5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00755af6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755af7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00755af8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00755af9: ret  */ FN_RET(0x00755ad3); r_esp += 4; return;
L_00755afa:; BB(0x00755afa);
    /* 00755afa: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00755afd: je 0x7564c9 */ if (fZ) goto L_007564c9;
L_00755b03:; BB(0x00755b03);
    /* 00755b03: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x755b08u); f_007365f4();
    /* 00755b08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00755b09: call 0x77a4c0 */ r_esp -= 4; W32(r_esp, 0x755b0eu); f_0077a4c0();
    /* 00755b0e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00755b0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755b11: je 0x755b26 */ if (fZ) goto L_00755b26;
L_00755b13:; BB(0x00755b13);
    /* 00755b13: mov ecx, dword ptr [ebx + 0x4c] */ r_ecx = R32((u32)(r_ebx+0x4cu));
    /* 00755b16: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755b18: je 0x755b26 */ if (fZ) goto L_00755b26;
L_00755b1a:; BB(0x00755b1a);
    /* 00755b1a: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x755b1fu); f_007127b0();
    /* 00755b1f: mov dword ptr [ebx + 0x4c], 0 */ W32((u32)(r_ebx+0x4cu), 0x0u);
L_00755b26:; BB(0x00755b26);
    /* 00755b26: mov byte ptr [ebx + 0x1c], 0x14 */ W8((u32)(r_ebx+0x1cu), 0x14u);
    /* 00755b2a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00755b2d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00755b2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755b2f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00755b30: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00755b31: ret  */ FN_RET(0x00755ad3); r_esp += 4; return;
L_007564c9:; BB(0x007564c9);
    /* 007564c9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007564cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007564cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007564ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007564cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007564d0: ret  */ FN_RET(0x00755ad3); r_esp += 4; return;
L_007564fd:; BB(0x007564fd);
    /* 007564fd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007564ff: call 0x756860 */ r_esp -= 4; W32(r_esp, 0x756504u); f_00756860();
    /* 00756504: mov ecx, eax */ r_ecx = r_eax;
    /* 00756506: mov dword ptr [ebx + 0x50], ecx */ W32((u32)(r_ebx+0x50u), r_ecx);
    /* 00756509: jmp 0x755ade */ goto L_00755ade;
}

void f_00755b32(void)
{
    FN_ENTER(0x00755b32);
    /* 00755b32: mov ecx, dword ptr [ebx + 0x50] */ r_ecx = R32((u32)(r_ebx+0x50u));
    /* 00755b35: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755b37: je 0x755b45 */ if (fZ) goto L_00755b45;
L_00755b39:; BB(0x00755b39);
    /* 00755b39: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x755b3eu); f_007127b0();
    /* 00755b3e: mov dword ptr [ebx + 0x50], 0 */ W32((u32)(r_ebx+0x50u), 0x0u);
L_00755b45:; BB(0x00755b45);
    /* 00755b45: mov eax, dword ptr [ebx + 0x48] */ r_eax = R32((u32)(r_ebx+0x48u));
    /* 00755b48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755b4a: je 0x756520 */ if (fZ) goto L_00756520;
L_00755b50:; BB(0x00755b50);
    /* 00755b50: mov edx, dword ptr [ebx + 0x4c] */ r_edx = R32((u32)(r_ebx+0x4cu));
    /* 00755b53: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755b55: je 0x75650e */ if (fZ) goto L_0075650e;
L_00755b5b:; BB(0x00755b5b);
    /* 00755b5b: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 00755b62: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00755b68: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00755b6b: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 00755b72: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755b74: je 0x755b7d */ if (fZ) goto L_00755b7d;
L_00755b76:; BB(0x00755b76);
    /* 00755b76: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00755b78: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x755b7du); f_00760acc();
L_00755b7d:; BB(0x00755b7d);
    /* 00755b7d: mov byte ptr [ebx + 0x1c], 0x15 */ W8((u32)(r_ebx+0x1cu), 0x15u);
    /* 00755b81: mov ecx, dword ptr [ebx + 0x48] */ r_ecx = R32((u32)(r_ebx+0x48u));
    /* 00755b84: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00755b8b: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00755b8d: je 0x755b9b */ if (fZ) goto L_00755b9b;
L_00755b8f:; BB(0x00755b8f);
    /* 00755b8f: mov byte ptr [ebx + 0x1c], 1 */ W8((u32)(r_ebx+0x1cu), 0x1u);
    /* 00755b93: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00755b96: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00755b97: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755b98: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00755b99: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00755b9a: ret  */ FN_RET(0x00755b32); r_esp += 4; return;
L_00755b9b:; BB(0x00755b9b);
    /* 00755b9b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00755b9d: je 0x7564c9 */ if (fZ) goto L_007564c9;
L_00755ba3:; BB(0x00755ba3);
    /* 00755ba3: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x755ba8u); f_007365f4();
    /* 00755ba8: mov byte ptr [ebx + 0x1c], al */ W8((u32)(r_ebx+0x1cu), (u8)r_eax);
    /* 00755bab: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00755bae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00755baf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755bb0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00755bb1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00755bb2: ret  */ FN_RET(0x00755b32); r_esp += 4; return;
L_007564c9:; BB(0x007564c9);
    /* 007564c9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007564cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007564cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007564ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007564cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007564d0: ret  */ FN_RET(0x00755b32); r_esp += 4; return;
L_0075650e:; BB(0x0075650e);
    /* 0075650e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00756510: call 0x756948 */ r_esp -= 4; W32(r_esp, 0x756515u); f_00756948();
    /* 00756515: mov dword ptr [ebx + 0x4c], eax */ W32((u32)(r_ebx+0x4cu), r_eax);
    /* 00756518: mov eax, dword ptr [ebx + 0x48] */ r_eax = R32((u32)(r_ebx+0x48u));
    /* 0075651b: jmp 0x755b5b */ goto L_00755b5b;
L_00756520:; BB(0x00756520);
    /* 00756520: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00756522: call 0x7568dc */ r_esp -= 4; W32(r_esp, 0x756527u); f_007568dc();
    /* 00756527: mov dword ptr [ebx + 0x48], eax */ W32((u32)(r_ebx+0x48u), r_eax);
    /* 0075652a: jmp 0x755b50 */ goto L_00755b50;
}

void f_00755b81(void)
{
    FN_ENTER(0x00755b81);
    /* 00755b81: mov ecx, dword ptr [ebx + 0x48] */ r_ecx = R32((u32)(r_ebx+0x48u));
    /* 00755b84: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00755b8b: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00755b8d: je 0x755b9b */ if (fZ) goto L_00755b9b;
L_00755b8f:; BB(0x00755b8f);
    /* 00755b8f: mov byte ptr [ebx + 0x1c], 1 */ W8((u32)(r_ebx+0x1cu), 0x1u);
    /* 00755b93: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00755b96: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00755b97: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755b98: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00755b99: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00755b9a: ret  */ FN_RET(0x00755b81); r_esp += 4; return;
L_00755b9b:; BB(0x00755b9b);
    /* 00755b9b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00755b9d: je 0x7564c9 */ if (fZ) goto L_007564c9;
L_00755ba3:; BB(0x00755ba3);
    /* 00755ba3: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x755ba8u); f_007365f4();
    /* 00755ba8: mov byte ptr [ebx + 0x1c], al */ W8((u32)(r_ebx+0x1cu), (u8)r_eax);
    /* 00755bab: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00755bae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00755baf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755bb0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00755bb1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00755bb2: ret  */ FN_RET(0x00755b81); r_esp += 4; return;
L_007564c9:; BB(0x007564c9);
    /* 007564c9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007564cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007564cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007564ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007564cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007564d0: ret  */ FN_RET(0x00755b81); r_esp += 4; return;
}

void f_00755bb3(void)
{
    FN_ENTER(0x00755bb3);
    /* 00755bb3: call 0x77a598 */ r_esp -= 4; W32(r_esp, 0x755bb8u); f_0077a598();
    /* 00755bb8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755bba: je 0x755bc8 */ if (fZ) goto L_00755bc8;
L_00755bbc:; BB(0x00755bbc);
    /* 00755bbc: mov byte ptr [ebx + 0x1c], 0x14 */ W8((u32)(r_ebx+0x1cu), 0x14u);
    /* 00755bc0: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00755bc3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00755bc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755bc5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00755bc6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00755bc7: ret  */ FN_RET(0x00755bb3); r_esp += 4; return;
L_00755bc8:; BB(0x00755bc8);
    /* 00755bc8: mov byte ptr [ebx + 0x1c], 0x18 */ W8((u32)(r_ebx+0x1cu), 0x18u);
    /* 00755bcc: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00755bcf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00755bd0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755bd1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00755bd2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00755bd3: ret  */ FN_RET(0x00755bb3); r_esp += 4; return;
}

void f_00755bd4(void)
{
    FN_ENTER(0x00755bd4);
    /* 00755bd4: mov ecx, dword ptr [ebx + 0x48] */ r_ecx = R32((u32)(r_ebx+0x48u));
    /* 00755bd7: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x755bdcu); f_0073600c();
    /* 00755bdc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00755bde: call 0x7569e4 */ r_esp -= 4; W32(r_esp, 0x755be3u); f_007569e4();
    /* 00755be3: mov byte ptr [ebx + 0x1c], 0x12 */ W8((u32)(r_ebx+0x1cu), 0x12u);
    /* 00755be7: mov dword ptr [ebx + 0x54], eax */ W32((u32)(r_ebx+0x54u), r_eax);
    /* 00755bea: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 00755bf1: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00755bf3: je 0x755ccf */ if (fZ) goto L_00755ccf;
L_00755bf9:; BB(0x00755bf9);
    /* 00755bf9: mov esi, dword ptr [ebx + 0x38] */ r_esi = R32((u32)(r_ebx+0x38u));
    /* 00755bfc: mov ecx, esi */ r_ecx = r_esi;
    /* 00755bfe: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x755c03u); f_00737d90();
    /* 00755c03: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00755c07: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 00755c0e: and eax, 0xfffe */ {  u32 a = r_eax; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00755c13: mov ecx, esi */ r_ecx = r_esi;
    /* 00755c15: mov word ptr [0xa98474], ax */ W16((u32)(0xa98474u), (u16)r_eax);
    /* 00755c1b: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 00755c20: call 0x737d70 */ r_esp -= 4; W32(r_esp, 0x755c25u); f_00737d70();
    /* 00755c25: mov ecx, esi */ r_ecx = r_esi;
    /* 00755c27: call 0x737d1c */ r_esp -= 4; W32(r_esp, 0x755c2cu); f_00737d1c();
    /* 00755c2c: mov ecx, esi */ r_ecx = r_esi;
    /* 00755c2e: call 0x737c94 */ r_esp -= 4; W32(r_esp, 0x755c33u); f_00737c94();
    /* 00755c33: mov edi, dword ptr [0xab59b8] */ r_edi = R32((u32)(0xab59b8u));
    /* 00755c39: lea eax, [edi - 1] */ r_eax = (u32)(r_edi+0xffffffffu);
    /* 00755c3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00755c3e: jl 0x755c99 */ if ((fS!=fO)) goto L_00755c99;
L_00755c40:; BB(0x00755c40);
    /* 00755c40: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 00755c44: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00755c48: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00755c4c: mov esi, eax */ r_esi = r_eax;
    /* 00755c4e: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
L_00755c52:; BB(0x00755c52);
    /* 00755c52: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00755c53: call 0x81364c */ r_esp -= 4; W32(r_esp, 0x755c58u); f_0081364c();
    /* 00755c58: mov ebx, eax */ r_ebx = r_eax;
    /* 00755c5a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00755c5d: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00755c60: movsx ecx, byte ptr [ebx + 0x1b8] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebx+0x1b8u));
    /* 00755c67: lea edx, [ebx + 8] */ r_edx = (u32)(r_ebx+0x8u);
    /* 00755c6a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00755c6b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00755c6c: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00755c70: call 0x73791c */ r_esp -= 4; W32(r_esp, 0x755c75u); f_0073791c();
    /* 00755c75: cmp edi, dword ptr [ebx + 4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755c78: jne 0x755c86 */ if (!fZ) goto L_00755c86;
L_00755c7a:; BB(0x00755c7a);
    /* 00755c7a: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00755c7e: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00755c80: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00755c83: movsx ebp, dx */ r_ebp = (u32)(i32)(i16)(u16)r_edx;
L_00755c86:; BB(0x00755c86);
    /* 00755c86: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00755c89: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00755c8b: jge 0x755c52 */ if ((fS==fO)) goto L_00755c52;
L_00755c8d:; BB(0x00755c8d);
    /* 00755c8d: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00755c91: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00755c95: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
L_00755c99:; BB(0x00755c99);
    /* 00755c99: mov ecx, esi */ r_ecx = r_esi;
    /* 00755c9b: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x755ca0u); f_00737cdc();
    /* 00755ca0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00755ca2: jle 0x75658d */ if ((fZ||fS!=fO)) goto L_0075658d;
L_00755ca8:; BB(0x00755ca8);
    /* 00755ca8: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 00755cab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755cad: je 0x756564 */ if (fZ) goto L_00756564;
L_00755cb3:; BB(0x00755cb3);
    /* 00755cb3: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 00755cb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755cb8: je 0x756542 */ if (fZ) goto L_00756542;
L_00755cbe:; BB(0x00755cbe);
    /* 00755cbe: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755cc1: je 0x75652f */ if (fZ) goto L_0075652f;
L_00755cc7:; BB(0x00755cc7);
    /* 00755cc7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00755cc8: mov ecx, esi */ r_ecx = r_esi;
    /* 00755cca: call 0x737c40 */ r_esp -= 4; W32(r_esp, 0x755ccfu); f_00737c40();
L_00755ccf:; BB(0x00755ccf);
    /* 00755ccf: mov ecx, dword ptr [ebx + 0x54] */ r_ecx = R32((u32)(r_ebx+0x54u));
    /* 00755cd2: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x755cd7u); f_0073d114();
    /* 00755cd7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755cd9: je 0x755ce7 */ if (fZ) goto L_00755ce7;
L_00755cdb:; BB(0x00755cdb);
    /* 00755cdb: mov byte ptr [ebx + 0x1c], 9 */ W8((u32)(r_ebx+0x1cu), 0x9u);
    /* 00755cdf: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00755ce2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00755ce3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755ce4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00755ce5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00755ce6: ret  */ FN_RET(0x00755bd4); r_esp += 4; return;
L_00755ce7:; BB(0x00755ce7);
    /* 00755ce7: mov ecx, dword ptr [ebx + 0x54] */ r_ecx = R32((u32)(r_ebx+0x54u));
    /* 00755cea: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x755cefu); f_0073ce50();
    /* 00755cef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755cf1: je 0x7564c9 */ if (fZ) goto L_007564c9;
L_00755cf7:; BB(0x00755cf7);
    /* 00755cf7: mov ecx, dword ptr [ebx + 0x54] */ r_ecx = R32((u32)(r_ebx+0x54u));
    /* 00755cfa: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x755cffu); f_0073d134();
    /* 00755cff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755d01: je 0x755d0f */ if (fZ) goto L_00755d0f;
L_00755d03:; BB(0x00755d03);
    /* 00755d03: mov byte ptr [ebx + 0x1c], 9 */ W8((u32)(r_ebx+0x1cu), 0x9u);
    /* 00755d07: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00755d0a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00755d0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755d0c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00755d0d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00755d0e: ret  */ FN_RET(0x00755bd4); r_esp += 4; return;
L_00755d0f:; BB(0x00755d0f);
    /* 00755d0f: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 00755d12: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x755d17u); f_00737d90();
    /* 00755d17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00755d18: call 0x81358c */ r_esp -= 4; W32(r_esp, 0x755d1du); f_0081358c();
    /* 00755d1d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00755d1e: mov byte ptr [ebx + 0x1c], 7 */ W8((u32)(r_ebx+0x1cu), 0x7u);
    /* 00755d22: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00755d25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00755d26: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755d27: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00755d28: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00755d29: ret  */ FN_RET(0x00755bd4); r_esp += 4; return;
L_007564c9:; BB(0x007564c9);
    /* 007564c9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007564cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007564cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007564ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007564cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007564d0: ret  */ FN_RET(0x00755bd4); r_esp += 4; return;
L_0075652f:; BB(0x0075652f);
    /* 0075652f: mov ecx, esi */ r_ecx = r_esi;
    /* 00756531: call 0x737da4 */ r_esp -= 4; W32(r_esp, 0x756536u); f_00737da4();
    /* 00756536: mov byte ptr [ebx + 0x1c], 7 */ W8((u32)(r_ebx+0x1cu), 0x7u);
    /* 0075653a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075653d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075653e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075653f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00756540: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00756541: ret  */ FN_RET(0x00755bd4); r_esp += 4; return;
L_00756542:; BB(0x00756542);
    /* 00756542: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 00756547: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75654cu); f_0073ec50();
    /* 0075654c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0075654e: push 0x9740c0 */ { u32 v = 0x9740c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00756553: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756554: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x756559u); f_0073a8dc();
    /* 00756559: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075655c: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 0075655f: jmp 0x755cbe */ goto L_00755cbe;
L_00756564:; BB(0x00756564);
    /* 00756564: push 0xa2 */ { u32 v = 0xa2u; r_esp -= 4; W32(r_esp, v); }
    /* 00756569: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75656eu); f_0073ec50();
    /* 0075656e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00756570: push 0x9740c8 */ { u32 v = 0x9740c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00756575: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756576: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x75657bu); f_0073a8dc();
    /* 0075657b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075657e: mov dword ptr [ebx + 0x24], 0xffffffff */ W32((u32)(r_ebx+0x24u), 0xffffffffu);
    /* 00756585: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 00756588: jmp 0x755cb3 */ goto L_00755cb3;
L_0075658d:; BB(0x0075658d);
    /* 0075658d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0075658f: mov ecx, esi */ r_ecx = r_esi;
    /* 00756591: call 0x737840 */ r_esp -= 4; W32(r_esp, 0x756596u); f_00737840();
    /* 00756596: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 00756599: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075659b: je 0x7565a9 */ if (fZ) goto L_007565a9;
L_0075659d:; BB(0x0075659d);
    /* 0075659d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7565a2u); f_007127b0();
    /* 007565a2: mov dword ptr [ebx + 0x3c], 0 */ W32((u32)(r_ebx+0x3cu), 0x0u);
L_007565a9:; BB(0x007565a9);
    /* 007565a9: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 007565ac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007565ae: je 0x755cbe */ if (fZ) goto L_00755cbe;
L_007565b4:; BB(0x007565b4);
    /* 007565b4: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7565b9u); f_007127b0();
    /* 007565b9: mov dword ptr [ebx + 0x40], 0 */ W32((u32)(r_ebx+0x40u), 0x0u);
    /* 007565c0: jmp 0x755cbe */ goto L_00755cbe;
}

void f_00755bea(void)
{
    FN_ENTER(0x00755bea);
    /* 00755bea: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 00755bf1: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00755bf3: je 0x755ccf */ if (fZ) goto L_00755ccf;
L_00755bf9:; BB(0x00755bf9);
    /* 00755bf9: mov esi, dword ptr [ebx + 0x38] */ r_esi = R32((u32)(r_ebx+0x38u));
    /* 00755bfc: mov ecx, esi */ r_ecx = r_esi;
    /* 00755bfe: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x755c03u); f_00737d90();
    /* 00755c03: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00755c07: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 00755c0e: and eax, 0xfffe */ {  u32 a = r_eax; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00755c13: mov ecx, esi */ r_ecx = r_esi;
    /* 00755c15: mov word ptr [0xa98474], ax */ W16((u32)(0xa98474u), (u16)r_eax);
    /* 00755c1b: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 00755c20: call 0x737d70 */ r_esp -= 4; W32(r_esp, 0x755c25u); f_00737d70();
    /* 00755c25: mov ecx, esi */ r_ecx = r_esi;
    /* 00755c27: call 0x737d1c */ r_esp -= 4; W32(r_esp, 0x755c2cu); f_00737d1c();
    /* 00755c2c: mov ecx, esi */ r_ecx = r_esi;
    /* 00755c2e: call 0x737c94 */ r_esp -= 4; W32(r_esp, 0x755c33u); f_00737c94();
    /* 00755c33: mov edi, dword ptr [0xab59b8] */ r_edi = R32((u32)(0xab59b8u));
    /* 00755c39: lea eax, [edi - 1] */ r_eax = (u32)(r_edi+0xffffffffu);
    /* 00755c3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00755c3e: jl 0x755c99 */ if ((fS!=fO)) goto L_00755c99;
L_00755c40:; BB(0x00755c40);
    /* 00755c40: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 00755c44: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00755c48: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00755c4c: mov esi, eax */ r_esi = r_eax;
    /* 00755c4e: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
L_00755c52:; BB(0x00755c52);
    /* 00755c52: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00755c53: call 0x81364c */ r_esp -= 4; W32(r_esp, 0x755c58u); f_0081364c();
    /* 00755c58: mov ebx, eax */ r_ebx = r_eax;
    /* 00755c5a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00755c5d: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00755c60: movsx ecx, byte ptr [ebx + 0x1b8] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebx+0x1b8u));
    /* 00755c67: lea edx, [ebx + 8] */ r_edx = (u32)(r_ebx+0x8u);
    /* 00755c6a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00755c6b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00755c6c: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00755c70: call 0x73791c */ r_esp -= 4; W32(r_esp, 0x755c75u); f_0073791c();
    /* 00755c75: cmp edi, dword ptr [ebx + 4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755c78: jne 0x755c86 */ if (!fZ) goto L_00755c86;
L_00755c7a:; BB(0x00755c7a);
    /* 00755c7a: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00755c7e: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00755c80: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00755c83: movsx ebp, dx */ r_ebp = (u32)(i32)(i16)(u16)r_edx;
L_00755c86:; BB(0x00755c86);
    /* 00755c86: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00755c89: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00755c8b: jge 0x755c52 */ if ((fS==fO)) goto L_00755c52;
L_00755c8d:; BB(0x00755c8d);
    /* 00755c8d: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00755c91: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00755c95: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
L_00755c99:; BB(0x00755c99);
    /* 00755c99: mov ecx, esi */ r_ecx = r_esi;
    /* 00755c9b: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x755ca0u); f_00737cdc();
    /* 00755ca0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00755ca2: jle 0x75658d */ if ((fZ||fS!=fO)) goto L_0075658d;
L_00755ca8:; BB(0x00755ca8);
    /* 00755ca8: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 00755cab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755cad: je 0x756564 */ if (fZ) goto L_00756564;
L_00755cb3:; BB(0x00755cb3);
    /* 00755cb3: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 00755cb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755cb8: je 0x756542 */ if (fZ) goto L_00756542;
L_00755cbe:; BB(0x00755cbe);
    /* 00755cbe: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755cc1: je 0x75652f */ if (fZ) goto L_0075652f;
L_00755cc7:; BB(0x00755cc7);
    /* 00755cc7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00755cc8: mov ecx, esi */ r_ecx = r_esi;
    /* 00755cca: call 0x737c40 */ r_esp -= 4; W32(r_esp, 0x755ccfu); f_00737c40();
L_00755ccf:; BB(0x00755ccf);
    /* 00755ccf: mov ecx, dword ptr [ebx + 0x54] */ r_ecx = R32((u32)(r_ebx+0x54u));
    /* 00755cd2: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x755cd7u); f_0073d114();
    /* 00755cd7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755cd9: je 0x755ce7 */ if (fZ) goto L_00755ce7;
L_00755cdb:; BB(0x00755cdb);
    /* 00755cdb: mov byte ptr [ebx + 0x1c], 9 */ W8((u32)(r_ebx+0x1cu), 0x9u);
    /* 00755cdf: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00755ce2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00755ce3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755ce4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00755ce5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00755ce6: ret  */ FN_RET(0x00755bea); r_esp += 4; return;
L_00755ce7:; BB(0x00755ce7);
    /* 00755ce7: mov ecx, dword ptr [ebx + 0x54] */ r_ecx = R32((u32)(r_ebx+0x54u));
    /* 00755cea: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x755cefu); f_0073ce50();
    /* 00755cef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755cf1: je 0x7564c9 */ if (fZ) goto L_007564c9;
L_00755cf7:; BB(0x00755cf7);
    /* 00755cf7: mov ecx, dword ptr [ebx + 0x54] */ r_ecx = R32((u32)(r_ebx+0x54u));
    /* 00755cfa: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x755cffu); f_0073d134();
    /* 00755cff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755d01: je 0x755d0f */ if (fZ) goto L_00755d0f;
L_00755d03:; BB(0x00755d03);
    /* 00755d03: mov byte ptr [ebx + 0x1c], 9 */ W8((u32)(r_ebx+0x1cu), 0x9u);
    /* 00755d07: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00755d0a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00755d0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755d0c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00755d0d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00755d0e: ret  */ FN_RET(0x00755bea); r_esp += 4; return;
L_00755d0f:; BB(0x00755d0f);
    /* 00755d0f: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 00755d12: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x755d17u); f_00737d90();
    /* 00755d17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00755d18: call 0x81358c */ r_esp -= 4; W32(r_esp, 0x755d1du); f_0081358c();
    /* 00755d1d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00755d1e: mov byte ptr [ebx + 0x1c], 7 */ W8((u32)(r_ebx+0x1cu), 0x7u);
    /* 00755d22: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00755d25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00755d26: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755d27: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00755d28: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00755d29: ret  */ FN_RET(0x00755bea); r_esp += 4; return;
L_007564c9:; BB(0x007564c9);
    /* 007564c9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007564cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007564cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007564ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007564cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007564d0: ret  */ FN_RET(0x00755bea); r_esp += 4; return;
L_0075652f:; BB(0x0075652f);
    /* 0075652f: mov ecx, esi */ r_ecx = r_esi;
    /* 00756531: call 0x737da4 */ r_esp -= 4; W32(r_esp, 0x756536u); f_00737da4();
    /* 00756536: mov byte ptr [ebx + 0x1c], 7 */ W8((u32)(r_ebx+0x1cu), 0x7u);
    /* 0075653a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075653d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075653e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075653f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00756540: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00756541: ret  */ FN_RET(0x00755bea); r_esp += 4; return;
L_00756542:; BB(0x00756542);
    /* 00756542: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 00756547: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75654cu); f_0073ec50();
    /* 0075654c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0075654e: push 0x9740c0 */ { u32 v = 0x9740c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00756553: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756554: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x756559u); f_0073a8dc();
    /* 00756559: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075655c: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 0075655f: jmp 0x755cbe */ goto L_00755cbe;
L_00756564:; BB(0x00756564);
    /* 00756564: push 0xa2 */ { u32 v = 0xa2u; r_esp -= 4; W32(r_esp, v); }
    /* 00756569: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75656eu); f_0073ec50();
    /* 0075656e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00756570: push 0x9740c8 */ { u32 v = 0x9740c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00756575: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756576: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x75657bu); f_0073a8dc();
    /* 0075657b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075657e: mov dword ptr [ebx + 0x24], 0xffffffff */ W32((u32)(r_ebx+0x24u), 0xffffffffu);
    /* 00756585: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 00756588: jmp 0x755cb3 */ goto L_00755cb3;
L_0075658d:; BB(0x0075658d);
    /* 0075658d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0075658f: mov ecx, esi */ r_ecx = r_esi;
    /* 00756591: call 0x737840 */ r_esp -= 4; W32(r_esp, 0x756596u); f_00737840();
    /* 00756596: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 00756599: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075659b: je 0x7565a9 */ if (fZ) goto L_007565a9;
L_0075659d:; BB(0x0075659d);
    /* 0075659d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7565a2u); f_007127b0();
    /* 007565a2: mov dword ptr [ebx + 0x3c], 0 */ W32((u32)(r_ebx+0x3cu), 0x0u);
L_007565a9:; BB(0x007565a9);
    /* 007565a9: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 007565ac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007565ae: je 0x755cbe */ if (fZ) goto L_00755cbe;
L_007565b4:; BB(0x007565b4);
    /* 007565b4: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7565b9u); f_007127b0();
    /* 007565b9: mov dword ptr [ebx + 0x40], 0 */ W32((u32)(r_ebx+0x40u), 0x0u);
    /* 007565c0: jmp 0x755cbe */ goto L_00755cbe;
}

void f_00755d2a(void)
{
    FN_ENTER(0x00755d2a);
    /* 00755d2a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00755d2c: call 0x756a38 */ r_esp -= 4; W32(r_esp, 0x755d31u); f_00756a38();
    /* 00755d31: mov byte ptr [ebx + 0x1c], 1 */ W8((u32)(r_ebx+0x1cu), 0x1u);
    /* 00755d35: jmp 0x7564c9 */ goto L_007564c9;
L_007564c9:; BB(0x007564c9);
    /* 007564c9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007564cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007564cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007564ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007564cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007564d0: ret  */ FN_RET(0x00755d2a); r_esp += 4; return;
}

void f_00755d31(void)
{
    FN_ENTER(0x00755d31);
    /* 00755d31: mov byte ptr [ebx + 0x1c], 1 */ W8((u32)(r_ebx+0x1cu), 0x1u);
    /* 00755d35: jmp 0x7564c9 */ goto L_007564c9;
L_007564c9:; BB(0x007564c9);
    /* 007564c9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007564cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007564cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007564ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007564cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007564d0: ret  */ FN_RET(0x00755d31); r_esp += 4; return;
}

void f_00755d3a(void)
{
    FN_ENTER(0x00755d3a);
    /* 00755d3a: mov eax, dword ptr [ebx + 0x54] */ r_eax = R32((u32)(r_ebx+0x54u));
    /* 00755d3d: jmp 0x755d6c */ goto L_00755d6c;
L_00755d6c:; BB(0x00755d6c);
    /* 00755d6c: mov ecx, eax */ r_ecx = r_eax;
    /* 00755d6e: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x755d73u); f_0073d114();
    /* 00755d73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755d75: je 0x755d83 */ if (fZ) goto L_00755d83;
L_00755d77:; BB(0x00755d77);
    /* 00755d77: mov byte ptr [ebx + 0x1c], 0xb */ W8((u32)(r_ebx+0x1cu), 0xbu);
    /* 00755d7b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00755d7e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00755d7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755d80: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00755d81: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00755d82: ret  */ FN_RET(0x00755d3a); r_esp += 4; return;
L_00755d83:; BB(0x00755d83);
    /* 00755d83: mov ecx, dword ptr [ebx + 0x54] */ r_ecx = R32((u32)(r_ebx+0x54u));
    /* 00755d86: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x755d8bu); f_0073ce50();
    /* 00755d8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755d8d: je 0x7564c9 */ if (fZ) goto L_007564c9;
L_00755d93:; BB(0x00755d93);
    /* 00755d93: mov ecx, dword ptr [ebx + 0x54] */ r_ecx = R32((u32)(r_ebx+0x54u));
    /* 00755d96: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x755d9bu); f_0073d134();
    /* 00755d9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755d9d: je 0x755dab */ if (fZ) goto L_00755dab;
L_00755d9f:; BB(0x00755d9f);
    /* 00755d9f: mov byte ptr [ebx + 0x1c], 0xb */ W8((u32)(r_ebx+0x1cu), 0xbu);
    /* 00755da3: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00755da6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00755da7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755da8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00755da9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00755daa: ret  */ FN_RET(0x00755d3a); r_esp += 4; return;
L_00755dab:; BB(0x00755dab);
    /* 00755dab: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00755dae: call 0x78ed4c */ r_esp -= 4; W32(r_esp, 0x755db3u); f_0078ed4c();
    /* 00755db3: mov ebp, eax */ r_ebp = r_eax;
    /* 00755db5: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 00755dba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00755dbb: call 0x813a78 */ r_esp -= 4; W32(r_esp, 0x755dc0u); f_00813a78();
    /* 00755dc0: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 00755dc5: push dword ptr [ebx + 0x2c] */ { u32 v = R32((u32)(r_ebx+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00755dc8: call 0x8136f0 */ r_esp -= 4; W32(r_esp, 0x755dcdu); f_008136f0();
    /* 00755dcd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00755dce: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x755dd3u); f_00857e98();
    /* 00755dd3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00755dd6: mov esi, dword ptr [0xab59b8] */ r_esi = R32((u32)(0xab59b8u));
    /* 00755ddc: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00755dde: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00755de0: jle 0x755dfc */ if ((fZ||fS!=fO)) goto L_00755dfc;
L_00755de2:; BB(0x00755de2);
    /* 00755de2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00755de3: call 0x81364c */ r_esp -= 4; W32(r_esp, 0x755de8u); f_0081364c();
    /* 00755de8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00755de9: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00755dec: cmp edx, dword ptr [ebx + 0x30] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x30u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755def: je 0x7565c5 */ if (fZ) goto L_007565c5;
L_00755df5:; BB(0x00755df5);
    /* 00755df5: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00755df8: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00755dfa: jl 0x755de2 */ if ((fS!=fO)) goto L_00755de2;
L_00755dfc:; BB(0x00755dfc);
    /* 00755dfc: mov byte ptr [ebx + 0x1c], 1 */ W8((u32)(r_ebx+0x1cu), 0x1u);
    /* 00755e00: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00755e03: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00755e04: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755e05: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00755e06: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00755e07: ret  */ FN_RET(0x00755d3a); r_esp += 4; return;
L_007564c9:; BB(0x007564c9);
    /* 007564c9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007564cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007564cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007564ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007564cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007564d0: ret  */ FN_RET(0x00755d3a); r_esp += 4; return;
L_007565c5:; BB(0x007565c5);
    /* 007565c5: movzx edx, byte ptr [eax + 0x1b8] */ r_edx = (u32)R8((u32)(r_eax+0x1b8u));
    /* 007565cc: and edx, 0xf5 */ {  u32 a = r_edx; u32 b = 0xf5u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007565d2: or edx, 0xffffff04 */ {  u32 a = r_edx; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007565d8: mov byte ptr [eax + 0x1b8], dl */ W8((u32)(r_eax+0x1b8u), (u8)r_edx);
    /* 007565de: jmp 0x755dfc */ goto L_00755dfc;
}

void f_00755d3f(void)
{
    FN_ENTER(0x00755d3f);
    /* 00755d3f: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00755d44: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x755d49u); f_0073ec50();
    /* 00755d49: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00755d4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00755d4b: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00755d4e: call 0x78edec */ r_esp -= 4; W32(r_esp, 0x755d53u); f_0078edec();
    /* 00755d53: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00755d56: call 0x78ee54 */ r_esp -= 4; W32(r_esp, 0x755d5bu); f_0078ee54();
    /* 00755d5b: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 00755d5e: mov eax, ebx */ r_eax = r_ebx;
    /* 00755d60: call 0x756a60 */ r_esp -= 4; W32(r_esp, 0x755d65u); f_00756a60();
    /* 00755d65: mov byte ptr [ebx + 0x1c], 0xe */ W8((u32)(r_ebx+0x1cu), 0xeu);
    /* 00755d69: mov dword ptr [ebx + 0x54], eax */ W32((u32)(r_ebx+0x54u), r_eax);
    /* 00755d6c: mov ecx, eax */ r_ecx = r_eax;
    /* 00755d6e: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x755d73u); f_0073d114();
    /* 00755d73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755d75: je 0x755d83 */ if (fZ) goto L_00755d83;
L_00755d77:; BB(0x00755d77);
    /* 00755d77: mov byte ptr [ebx + 0x1c], 0xb */ W8((u32)(r_ebx+0x1cu), 0xbu);
    /* 00755d7b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00755d7e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00755d7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755d80: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00755d81: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00755d82: ret  */ FN_RET(0x00755d3f); r_esp += 4; return;
L_00755d83:; BB(0x00755d83);
    /* 00755d83: mov ecx, dword ptr [ebx + 0x54] */ r_ecx = R32((u32)(r_ebx+0x54u));
    /* 00755d86: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x755d8bu); f_0073ce50();
    /* 00755d8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755d8d: je 0x7564c9 */ if (fZ) goto L_007564c9;
L_00755d93:; BB(0x00755d93);
    /* 00755d93: mov ecx, dword ptr [ebx + 0x54] */ r_ecx = R32((u32)(r_ebx+0x54u));
    /* 00755d96: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x755d9bu); f_0073d134();
    /* 00755d9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755d9d: je 0x755dab */ if (fZ) goto L_00755dab;
L_00755d9f:; BB(0x00755d9f);
    /* 00755d9f: mov byte ptr [ebx + 0x1c], 0xb */ W8((u32)(r_ebx+0x1cu), 0xbu);
    /* 00755da3: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00755da6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00755da7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755da8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00755da9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00755daa: ret  */ FN_RET(0x00755d3f); r_esp += 4; return;
L_00755dab:; BB(0x00755dab);
    /* 00755dab: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00755dae: call 0x78ed4c */ r_esp -= 4; W32(r_esp, 0x755db3u); f_0078ed4c();
    /* 00755db3: mov ebp, eax */ r_ebp = r_eax;
    /* 00755db5: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 00755dba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00755dbb: call 0x813a78 */ r_esp -= 4; W32(r_esp, 0x755dc0u); f_00813a78();
    /* 00755dc0: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 00755dc5: push dword ptr [ebx + 0x2c] */ { u32 v = R32((u32)(r_ebx+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00755dc8: call 0x8136f0 */ r_esp -= 4; W32(r_esp, 0x755dcdu); f_008136f0();
    /* 00755dcd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00755dce: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x755dd3u); f_00857e98();
    /* 00755dd3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00755dd6: mov esi, dword ptr [0xab59b8] */ r_esi = R32((u32)(0xab59b8u));
    /* 00755ddc: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00755dde: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00755de0: jle 0x755dfc */ if ((fZ||fS!=fO)) goto L_00755dfc;
L_00755de2:; BB(0x00755de2);
    /* 00755de2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00755de3: call 0x81364c */ r_esp -= 4; W32(r_esp, 0x755de8u); f_0081364c();
    /* 00755de8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00755de9: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00755dec: cmp edx, dword ptr [ebx + 0x30] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x30u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755def: je 0x7565c5 */ if (fZ) goto L_007565c5;
L_00755df5:; BB(0x00755df5);
    /* 00755df5: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00755df8: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00755dfa: jl 0x755de2 */ if ((fS!=fO)) goto L_00755de2;
L_00755dfc:; BB(0x00755dfc);
    /* 00755dfc: mov byte ptr [ebx + 0x1c], 1 */ W8((u32)(r_ebx+0x1cu), 0x1u);
    /* 00755e00: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00755e03: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00755e04: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755e05: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00755e06: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00755e07: ret  */ FN_RET(0x00755d3f); r_esp += 4; return;
L_007564c9:; BB(0x007564c9);
    /* 007564c9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007564cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007564cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007564ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007564cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007564d0: ret  */ FN_RET(0x00755d3f); r_esp += 4; return;
L_007565c5:; BB(0x007565c5);
    /* 007565c5: movzx edx, byte ptr [eax + 0x1b8] */ r_edx = (u32)R8((u32)(r_eax+0x1b8u));
    /* 007565cc: and edx, 0xf5 */ {  u32 a = r_edx; u32 b = 0xf5u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007565d2: or edx, 0xffffff04 */ {  u32 a = r_edx; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007565d8: mov byte ptr [eax + 0x1b8], dl */ W8((u32)(r_eax+0x1b8u), (u8)r_edx);
    /* 007565de: jmp 0x755dfc */ goto L_00755dfc;
}

void f_00755e08(void)
{
    FN_ENTER(0x00755e08);
    /* 00755e08: mov ecx, dword ptr [ebx + 0x54] */ r_ecx = R32((u32)(r_ebx+0x54u));
    /* 00755e0b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755e0d: je 0x755e1b */ if (fZ) goto L_00755e1b;
L_00755e0f:; BB(0x00755e0f);
    /* 00755e0f: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x755e14u); f_0073d160();
    /* 00755e14: mov dword ptr [ebx + 0x54], 0 */ W32((u32)(r_ebx+0x54u), 0x0u);
L_00755e1b:; BB(0x00755e1b);
    /* 00755e1b: mov ecx, dword ptr [ebx + 0x48] */ r_ecx = R32((u32)(r_ebx+0x48u));
    /* 00755e1e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755e20: je 0x755e2e */ if (fZ) goto L_00755e2e;
L_00755e22:; BB(0x00755e22);
    /* 00755e22: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x755e27u); f_007127b0();
    /* 00755e27: mov dword ptr [ebx + 0x48], 0 */ W32((u32)(r_ebx+0x48u), 0x0u);
L_00755e2e:; BB(0x00755e2e);
    /* 00755e2e: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 00755e31: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755e33: je 0x755e41 */ if (fZ) goto L_00755e41;
L_00755e35:; BB(0x00755e35);
    /* 00755e35: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x755e3au); f_007127b0();
    /* 00755e3a: mov dword ptr [ebx + 0x3c], 0 */ W32((u32)(r_ebx+0x3cu), 0x0u);
L_00755e41:; BB(0x00755e41);
    /* 00755e41: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 00755e44: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755e46: je 0x755e54 */ if (fZ) goto L_00755e54;
L_00755e48:; BB(0x00755e48);
    /* 00755e48: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x755e4du); f_007127b0();
    /* 00755e4d: mov dword ptr [ebx + 0x40], 0 */ W32((u32)(r_ebx+0x40u), 0x0u);
L_00755e54:; BB(0x00755e54);
    /* 00755e54: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 00755e57: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755e59: je 0x755e67 */ if (fZ) goto L_00755e67;
L_00755e5b:; BB(0x00755e5b);
    /* 00755e5b: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x755e60u); f_007127b0();
    /* 00755e60: mov dword ptr [ebx + 0x38], 0 */ W32((u32)(r_ebx+0x38u), 0x0u);
L_00755e67:; BB(0x00755e67);
    /* 00755e67: mov ecx, dword ptr [ebx + 0x5c] */ r_ecx = R32((u32)(r_ebx+0x5cu));
    /* 00755e6a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755e6c: je 0x755e7a */ if (fZ) goto L_00755e7a;
L_00755e6e:; BB(0x00755e6e);
    /* 00755e6e: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x755e73u); f_007127b0();
    /* 00755e73: mov dword ptr [ebx + 0x5c], 0 */ W32((u32)(r_ebx+0x5cu), 0x0u);
L_00755e7a:; BB(0x00755e7a);
    /* 00755e7a: mov ecx, dword ptr [ebx + 0x58] */ r_ecx = R32((u32)(r_ebx+0x58u));
    /* 00755e7d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755e7f: je 0x755e8d */ if (fZ) goto L_00755e8d;
L_00755e81:; BB(0x00755e81);
    /* 00755e81: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x755e86u); f_007127b0();
    /* 00755e86: mov dword ptr [ebx + 0x58], 0 */ W32((u32)(r_ebx+0x58u), 0x0u);
L_00755e8d:; BB(0x00755e8d);
    /* 00755e8d: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 00755e90: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755e92: je 0x755ea0 */ if (fZ) goto L_00755ea0;
L_00755e94:; BB(0x00755e94);
    /* 00755e94: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x755e99u); f_007127b0();
    /* 00755e99: mov dword ptr [ebx + 0x44], 0 */ W32((u32)(r_ebx+0x44u), 0x0u);
L_00755ea0:; BB(0x00755ea0);
    /* 00755ea0: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00755ea3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755ea5: je 0x7565e3 */ if (fZ) goto L_007565e3;
L_00755eab:; BB(0x00755eab);
    /* 00755eab: push 0xcf */ { u32 v = 0xcfu; r_esp -= 4; W32(r_esp, v); }
    /* 00755eb0: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x755eb5u); f_0073ec50();
    /* 00755eb5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00755eb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00755eb7: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00755eba: call 0x78edec */ r_esp -= 4; W32(r_esp, 0x755ebfu); f_0078edec();
    /* 00755ebf: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00755ec2: call 0x78ed2c */ r_esp -= 4; W32(r_esp, 0x755ec7u); f_0078ed2c();
    /* 00755ec7: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00755eca: call 0x78ee34 */ r_esp -= 4; W32(r_esp, 0x755ecfu); f_0078ee34();
    /* 00755ecf: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00755ed2: call 0x78ee74 */ r_esp -= 4; W32(r_esp, 0x755ed7u); f_0078ee74();
    /* 00755ed7: mov byte ptr [ebx + 0x1c], 0xc */ W8((u32)(r_ebx+0x1cu), 0xcu);
    /* 00755edb: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00755ede: call 0x78ed20 */ r_esp -= 4; W32(r_esp, 0x755ee3u); f_0078ed20();
    /* 00755ee3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755ee5: je 0x755ef3 */ if (fZ) goto L_00755ef3;
L_00755ee7:; BB(0x00755ee7);
    /* 00755ee7: mov byte ptr [ebx + 0x1c], 1 */ W8((u32)(r_ebx+0x1cu), 0x1u);
    /* 00755eeb: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00755eee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00755eef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755ef0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00755ef1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00755ef2: ret  */ FN_RET(0x00755e08); r_esp += 4; return;
L_00755ef3:; BB(0x00755ef3);
    /* 00755ef3: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00755ef6: call 0x78ed14 */ r_esp -= 4; W32(r_esp, 0x755efbu); f_0078ed14();
    /* 00755efb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755efd: je 0x7564c9 */ if (fZ) goto L_007564c9;
L_00755f03:; BB(0x00755f03);
    /* 00755f03: mov byte ptr [ebx + 0x1c], 0xd */ W8((u32)(r_ebx+0x1cu), 0xdu);
    /* 00755f07: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00755f0a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00755f0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755f0c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00755f0d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00755f0e: ret  */ FN_RET(0x00755e08); r_esp += 4; return;
L_007564c9:; BB(0x007564c9);
    /* 007564c9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007564cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007564cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007564ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007564cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007564d0: ret  */ FN_RET(0x00755e08); r_esp += 4; return;
L_007565e3:; BB(0x007565e3);
    /* 007565e3: call 0x756ab0 */ r_esp -= 4; W32(r_esp, 0x7565e8u); f_00756ab0();
    /* 007565e8: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 007565eb: jmp 0x755eab */ goto L_00755eab;
}

void f_00755edb(void)
{
    FN_ENTER(0x00755edb);
    /* 00755edb: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00755ede: call 0x78ed20 */ r_esp -= 4; W32(r_esp, 0x755ee3u); f_0078ed20();
    /* 00755ee3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755ee5: je 0x755ef3 */ if (fZ) goto L_00755ef3;
L_00755ee7:; BB(0x00755ee7);
    /* 00755ee7: mov byte ptr [ebx + 0x1c], 1 */ W8((u32)(r_ebx+0x1cu), 0x1u);
    /* 00755eeb: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00755eee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00755eef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755ef0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00755ef1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00755ef2: ret  */ FN_RET(0x00755edb); r_esp += 4; return;
L_00755ef3:; BB(0x00755ef3);
    /* 00755ef3: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00755ef6: call 0x78ed14 */ r_esp -= 4; W32(r_esp, 0x755efbu); f_0078ed14();
    /* 00755efb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755efd: je 0x7564c9 */ if (fZ) goto L_007564c9;
L_00755f03:; BB(0x00755f03);
    /* 00755f03: mov byte ptr [ebx + 0x1c], 0xd */ W8((u32)(r_ebx+0x1cu), 0xdu);
    /* 00755f07: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00755f0a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00755f0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00755f0c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00755f0d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00755f0e: ret  */ FN_RET(0x00755edb); r_esp += 4; return;
L_007564c9:; BB(0x007564c9);
    /* 007564c9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007564cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007564cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007564ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007564cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007564d0: ret  */ FN_RET(0x00755edb); r_esp += 4; return;
}

void f_00755f0f(void)
{
    FN_ENTER(0x00755f0f);
    /* 00755f0f: mov ecx, dword ptr [ebx + 0x54] */ r_ecx = R32((u32)(r_ebx+0x54u));
    /* 00755f12: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755f14: je 0x755f22 */ if (fZ) goto L_00755f22;
L_00755f16:; BB(0x00755f16);
    /* 00755f16: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x755f1bu); f_0073d160();
    /* 00755f1b: mov dword ptr [ebx + 0x54], 0 */ W32((u32)(r_ebx+0x54u), 0x0u);
L_00755f22:; BB(0x00755f22);
    /* 00755f22: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 00755f25: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755f27: je 0x755f35 */ if (fZ) goto L_00755f35;
L_00755f29:; BB(0x00755f29);
    /* 00755f29: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x755f2eu); f_007127b0();
    /* 00755f2e: mov dword ptr [ebx + 0x3c], 0 */ W32((u32)(r_ebx+0x3cu), 0x0u);
L_00755f35:; BB(0x00755f35);
    /* 00755f35: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 00755f38: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755f3a: je 0x755f48 */ if (fZ) goto L_00755f48;
L_00755f3c:; BB(0x00755f3c);
    /* 00755f3c: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x755f41u); f_007127b0();
    /* 00755f41: mov dword ptr [ebx + 0x40], 0 */ W32((u32)(r_ebx+0x40u), 0x0u);
L_00755f48:; BB(0x00755f48);
    /* 00755f48: mov eax, dword ptr [ebx + 0x48] */ r_eax = R32((u32)(r_ebx+0x48u));
    /* 00755f4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755f4d: je 0x756686 */ if (fZ) goto L_00756686;
L_00755f53:; BB(0x00755f53);
    /* 00755f53: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 00755f5a: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00755f60: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00755f63: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 00755f6a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00755f6c: je 0x755f75 */ if (fZ) goto L_00755f75;
L_00755f6e:; BB(0x00755f6e);
    /* 00755f6e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00755f70: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x755f75u); f_00760acc();
L_00755f75:; BB(0x00755f75);
    /* 00755f75: mov ecx, dword ptr [ebx + 0x48] */ r_ecx = R32((u32)(r_ebx+0x48u));
    /* 00755f78: call 0x73605c */ r_esp -= 4; W32(r_esp, 0x755f7du); f_0073605c();
    /* 00755f7d: mov byte ptr [ebx + 0x1c], 0xa */ W8((u32)(r_ebx+0x1cu), 0xau);
    /* 00755f81: movzx edx, word ptr [0xa98474] */ r_edx = (u32)R16((u32)(0xa98474u));
    /* 00755f88: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00755f8b: je 0x756069 */ if (fZ) goto L_00756069;
L_00755f91:; BB(0x00755f91);
    /* 00755f91: mov esi, dword ptr [ebx + 0x38] */ r_esi = R32((u32)(r_ebx+0x38u));
    /* 00755f94: mov ecx, esi */ r_ecx = r_esi;
    /* 00755f96: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x755f9bu); f_00737d90();
    /* 00755f9b: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00755f9f: movzx edx, word ptr [0xa98474] */ r_edx = (u32)R16((u32)(0xa98474u));
    /* 00755fa6: and edx, 0xfffe */ {  u32 a = r_edx; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00755fac: mov ecx, esi */ r_ecx = r_esi;
    /* 00755fae: mov word ptr [0xa98474], dx */ W16((u32)(0xa98474u), (u16)r_edx);
    /* 00755fb5: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 00755fba: call 0x737d70 */ r_esp -= 4; W32(r_esp, 0x755fbfu); f_00737d70();
    /* 00755fbf: mov ecx, esi */ r_ecx = r_esi;
    /* 00755fc1: call 0x737d1c */ r_esp -= 4; W32(r_esp, 0x755fc6u); f_00737d1c();
    /* 00755fc6: mov ecx, esi */ r_ecx = r_esi;
    /* 00755fc8: call 0x737c94 */ r_esp -= 4; W32(r_esp, 0x755fcdu); f_00737c94();
    /* 00755fcd: mov edi, dword ptr [0xab59b8] */ r_edi = R32((u32)(0xab59b8u));
    /* 00755fd3: lea eax, [edi - 1] */ r_eax = (u32)(r_edi+0xffffffffu);
    /* 00755fd6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00755fd8: jl 0x756033 */ if ((fS!=fO)) goto L_00756033;
L_00755fda:; BB(0x00755fda);
    /* 00755fda: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 00755fde: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00755fe2: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00755fe6: mov esi, eax */ r_esi = r_eax;
    /* 00755fe8: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
L_00755fec:; BB(0x00755fec);
    /* 00755fec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00755fed: call 0x81364c */ r_esp -= 4; W32(r_esp, 0x755ff2u); f_0081364c();
    /* 00755ff2: mov ebx, eax */ r_ebx = r_eax;
    /* 00755ff4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00755ff7: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00755ffa: movsx ecx, byte ptr [ebx + 0x1b8] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebx+0x1b8u));
    /* 00756001: lea edx, [ebx + 8] */ r_edx = (u32)(r_ebx+0x8u);
    /* 00756004: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00756005: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00756006: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0075600a: call 0x73791c */ r_esp -= 4; W32(r_esp, 0x75600fu); f_0073791c();
    /* 0075600f: cmp edi, dword ptr [ebx + 4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00756012: jne 0x756020 */ if (!fZ) goto L_00756020;
L_00756014:; BB(0x00756014);
    /* 00756014: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00756018: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0075601a: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075601d: movsx ebp, dx */ r_ebp = (u32)(i32)(i16)(u16)r_edx;
L_00756020:; BB(0x00756020);
    /* 00756020: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00756023: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00756025: jge 0x755fec */ if ((fS==fO)) goto L_00755fec;
L_00756027:; BB(0x00756027);
    /* 00756027: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0075602b: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0075602f: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
L_00756033:; BB(0x00756033);
    /* 00756033: mov ecx, esi */ r_ecx = r_esi;
    /* 00756035: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x75603au); f_00737cdc();
    /* 0075603a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0075603c: jle 0x75664e */ if ((fZ||fS!=fO)) goto L_0075664e;
L_00756042:; BB(0x00756042);
    /* 00756042: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 00756045: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00756047: je 0x756625 */ if (fZ) goto L_00756625;
L_0075604d:; BB(0x0075604d);
    /* 0075604d: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 00756050: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00756052: je 0x756603 */ if (fZ) goto L_00756603;
L_00756058:; BB(0x00756058);
    /* 00756058: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075605b: je 0x7565f0 */ if (fZ) goto L_007565f0;
L_00756061:; BB(0x00756061);
    /* 00756061: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00756062: mov ecx, esi */ r_ecx = r_esi;
    /* 00756064: call 0x737c40 */ r_esp -= 4; W32(r_esp, 0x756069u); f_00737c40();
L_00756069:; BB(0x00756069);
    /* 00756069: mov edx, dword ptr [ebx + 0x48] */ r_edx = R32((u32)(r_ebx+0x48u));
    /* 0075606c: movzx edx, word ptr [edx + 0x84] */ r_edx = (u32)R16((u32)(r_edx+0x84u));
    /* 00756073: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00756076: je 0x756084 */ if (fZ) goto L_00756084;
L_00756078:; BB(0x00756078);
    /* 00756078: mov byte ptr [ebx + 0x1c], 7 */ W8((u32)(r_ebx+0x1cu), 0x7u);
    /* 0075607c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075607f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00756080: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00756081: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00756082: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00756083: ret  */ FN_RET(0x00755f0f); r_esp += 4; return;
L_00756084:; BB(0x00756084);
    /* 00756084: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00756087: je 0x7564c9 */ if (fZ) goto L_007564c9;
L_0075608d:; BB(0x0075608d);
    /* 0075608d: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 00756090: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x756095u); f_00737d90();
    /* 00756095: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756096: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00756099: call 0x813670 */ r_esp -= 4; W32(r_esp, 0x75609eu); f_00813670();
    /* 0075609e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075609f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007560a1: je 0x7560a8 */ if (fZ) goto L_007560a8;
L_007560a3:; BB(0x007560a3);
    /* 007560a3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007560a5: mov dword ptr [ebx + 0x2c], edx */ W32((u32)(r_ebx+0x2cu), r_edx);
L_007560a8:; BB(0x007560a8);
    /* 007560a8: mov ecx, dword ptr [ebx + 0x48] */ r_ecx = R32((u32)(r_ebx+0x48u));
    /* 007560ab: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x7560b0u); f_007365f4();
    /* 007560b0: mov byte ptr [ebx + 0x1c], al */ W8((u32)(r_ebx+0x1cu), (u8)r_eax);
    /* 007560b3: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007560b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007560b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007560b8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007560b9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007560ba: ret  */ FN_RET(0x00755f0f); r_esp += 4; return;
L_007564c9:; BB(0x007564c9);
    /* 007564c9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007564cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007564cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007564ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007564cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007564d0: ret  */ FN_RET(0x00755f0f); r_esp += 4; return;
L_007565f0:; BB(0x007565f0);
    /* 007565f0: mov ecx, esi */ r_ecx = r_esi;
    /* 007565f2: call 0x737da4 */ r_esp -= 4; W32(r_esp, 0x7565f7u); f_00737da4();
    /* 007565f7: mov byte ptr [ebx + 0x1c], 7 */ W8((u32)(r_ebx+0x1cu), 0x7u);
    /* 007565fb: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007565fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007565ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00756600: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00756601: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00756602: ret  */ FN_RET(0x00755f0f); r_esp += 4; return;
L_00756603:; BB(0x00756603);
    /* 00756603: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 00756608: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75660du); f_0073ec50();
    /* 0075660d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0075660f: push 0x9740b0 */ { u32 v = 0x9740b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00756614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756615: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x75661au); f_0073a8dc();
    /* 0075661a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075661d: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 00756620: jmp 0x756058 */ goto L_00756058;
L_00756625:; BB(0x00756625);
    /* 00756625: push 0xa2 */ { u32 v = 0xa2u; r_esp -= 4; W32(r_esp, v); }
    /* 0075662a: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75662fu); f_0073ec50();
    /* 0075662f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00756631: push 0x9740b8 */ { u32 v = 0x9740b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00756636: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756637: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x75663cu); f_0073a8dc();
    /* 0075663c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075663f: mov dword ptr [ebx + 0x24], 0xffffffff */ W32((u32)(r_ebx+0x24u), 0xffffffffu);
    /* 00756646: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 00756649: jmp 0x75604d */ goto L_0075604d;
L_0075664e:; BB(0x0075664e);
    /* 0075664e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00756650: mov ecx, esi */ r_ecx = r_esi;
    /* 00756652: call 0x737840 */ r_esp -= 4; W32(r_esp, 0x756657u); f_00737840();
    /* 00756657: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 0075665a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075665c: je 0x75666a */ if (fZ) goto L_0075666a;
L_0075665e:; BB(0x0075665e);
    /* 0075665e: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x756663u); f_007127b0();
    /* 00756663: mov dword ptr [ebx + 0x3c], 0 */ W32((u32)(r_ebx+0x3cu), 0x0u);
L_0075666a:; BB(0x0075666a);
    /* 0075666a: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 0075666d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075666f: je 0x756058 */ if (fZ) goto L_00756058;
L_00756675:; BB(0x00756675);
    /* 00756675: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75667au); f_007127b0();
    /* 0075667a: mov dword ptr [ebx + 0x40], 0 */ W32((u32)(r_ebx+0x40u), 0x0u);
    /* 00756681: jmp 0x756058 */ goto L_00756058;
L_00756686:; BB(0x00756686);
    /* 00756686: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00756688: call 0x756b68 */ r_esp -= 4; W32(r_esp, 0x75668du); f_00756b68();
    /* 0075668d: mov dword ptr [ebx + 0x48], eax */ W32((u32)(r_ebx+0x48u), r_eax);
    /* 00756690: jmp 0x755f53 */ goto L_00755f53;
}

void f_00755f81(void)
{
    FN_ENTER(0x00755f81);
    /* 00755f81: movzx edx, word ptr [0xa98474] */ r_edx = (u32)R16((u32)(0xa98474u));
    /* 00755f88: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00755f8b: je 0x756069 */ if (fZ) goto L_00756069;
L_00755f91:; BB(0x00755f91);
    /* 00755f91: mov esi, dword ptr [ebx + 0x38] */ r_esi = R32((u32)(r_ebx+0x38u));
    /* 00755f94: mov ecx, esi */ r_ecx = r_esi;
    /* 00755f96: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x755f9bu); f_00737d90();
    /* 00755f9b: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00755f9f: movzx edx, word ptr [0xa98474] */ r_edx = (u32)R16((u32)(0xa98474u));
    /* 00755fa6: and edx, 0xfffe */ {  u32 a = r_edx; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00755fac: mov ecx, esi */ r_ecx = r_esi;
    /* 00755fae: mov word ptr [0xa98474], dx */ W16((u32)(0xa98474u), (u16)r_edx);
    /* 00755fb5: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 00755fba: call 0x737d70 */ r_esp -= 4; W32(r_esp, 0x755fbfu); f_00737d70();
    /* 00755fbf: mov ecx, esi */ r_ecx = r_esi;
    /* 00755fc1: call 0x737d1c */ r_esp -= 4; W32(r_esp, 0x755fc6u); f_00737d1c();
    /* 00755fc6: mov ecx, esi */ r_ecx = r_esi;
    /* 00755fc8: call 0x737c94 */ r_esp -= 4; W32(r_esp, 0x755fcdu); f_00737c94();
    /* 00755fcd: mov edi, dword ptr [0xab59b8] */ r_edi = R32((u32)(0xab59b8u));
    /* 00755fd3: lea eax, [edi - 1] */ r_eax = (u32)(r_edi+0xffffffffu);
    /* 00755fd6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00755fd8: jl 0x756033 */ if ((fS!=fO)) goto L_00756033;
L_00755fda:; BB(0x00755fda);
    /* 00755fda: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 00755fde: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00755fe2: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00755fe6: mov esi, eax */ r_esi = r_eax;
    /* 00755fe8: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
L_00755fec:; BB(0x00755fec);
    /* 00755fec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00755fed: call 0x81364c */ r_esp -= 4; W32(r_esp, 0x755ff2u); f_0081364c();
    /* 00755ff2: mov ebx, eax */ r_ebx = r_eax;
    /* 00755ff4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00755ff7: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00755ffa: movsx ecx, byte ptr [ebx + 0x1b8] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebx+0x1b8u));
    /* 00756001: lea edx, [ebx + 8] */ r_edx = (u32)(r_ebx+0x8u);
    /* 00756004: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00756005: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00756006: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0075600a: call 0x73791c */ r_esp -= 4; W32(r_esp, 0x75600fu); f_0073791c();
    /* 0075600f: cmp edi, dword ptr [ebx + 4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00756012: jne 0x756020 */ if (!fZ) goto L_00756020;
L_00756014:; BB(0x00756014);
    /* 00756014: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00756018: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0075601a: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075601d: movsx ebp, dx */ r_ebp = (u32)(i32)(i16)(u16)r_edx;
L_00756020:; BB(0x00756020);
    /* 00756020: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00756023: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00756025: jge 0x755fec */ if ((fS==fO)) goto L_00755fec;
L_00756027:; BB(0x00756027);
    /* 00756027: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0075602b: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0075602f: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
L_00756033:; BB(0x00756033);
    /* 00756033: mov ecx, esi */ r_ecx = r_esi;
    /* 00756035: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x75603au); f_00737cdc();
    /* 0075603a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0075603c: jle 0x75664e */ if ((fZ||fS!=fO)) goto L_0075664e;
L_00756042:; BB(0x00756042);
    /* 00756042: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 00756045: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00756047: je 0x756625 */ if (fZ) goto L_00756625;
L_0075604d:; BB(0x0075604d);
    /* 0075604d: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 00756050: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00756052: je 0x756603 */ if (fZ) goto L_00756603;
L_00756058:; BB(0x00756058);
    /* 00756058: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075605b: je 0x7565f0 */ if (fZ) goto L_007565f0;
L_00756061:; BB(0x00756061);
    /* 00756061: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00756062: mov ecx, esi */ r_ecx = r_esi;
    /* 00756064: call 0x737c40 */ r_esp -= 4; W32(r_esp, 0x756069u); f_00737c40();
L_00756069:; BB(0x00756069);
    /* 00756069: mov edx, dword ptr [ebx + 0x48] */ r_edx = R32((u32)(r_ebx+0x48u));
    /* 0075606c: movzx edx, word ptr [edx + 0x84] */ r_edx = (u32)R16((u32)(r_edx+0x84u));
    /* 00756073: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00756076: je 0x756084 */ if (fZ) goto L_00756084;
L_00756078:; BB(0x00756078);
    /* 00756078: mov byte ptr [ebx + 0x1c], 7 */ W8((u32)(r_ebx+0x1cu), 0x7u);
    /* 0075607c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075607f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00756080: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00756081: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00756082: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00756083: ret  */ FN_RET(0x00755f81); r_esp += 4; return;
L_00756084:; BB(0x00756084);
    /* 00756084: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00756087: je 0x7564c9 */ if (fZ) goto L_007564c9;
L_0075608d:; BB(0x0075608d);
    /* 0075608d: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 00756090: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x756095u); f_00737d90();
    /* 00756095: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756096: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00756099: call 0x813670 */ r_esp -= 4; W32(r_esp, 0x75609eu); f_00813670();
    /* 0075609e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075609f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007560a1: je 0x7560a8 */ if (fZ) goto L_007560a8;
L_007560a3:; BB(0x007560a3);
    /* 007560a3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007560a5: mov dword ptr [ebx + 0x2c], edx */ W32((u32)(r_ebx+0x2cu), r_edx);
L_007560a8:; BB(0x007560a8);
    /* 007560a8: mov ecx, dword ptr [ebx + 0x48] */ r_ecx = R32((u32)(r_ebx+0x48u));
    /* 007560ab: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x7560b0u); f_007365f4();
    /* 007560b0: mov byte ptr [ebx + 0x1c], al */ W8((u32)(r_ebx+0x1cu), (u8)r_eax);
    /* 007560b3: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007560b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007560b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007560b8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007560b9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007560ba: ret  */ FN_RET(0x00755f81); r_esp += 4; return;
L_007564c9:; BB(0x007564c9);
    /* 007564c9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007564cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007564cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007564ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007564cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007564d0: ret  */ FN_RET(0x00755f81); r_esp += 4; return;
L_007565f0:; BB(0x007565f0);
    /* 007565f0: mov ecx, esi */ r_ecx = r_esi;
    /* 007565f2: call 0x737da4 */ r_esp -= 4; W32(r_esp, 0x7565f7u); f_00737da4();
    /* 007565f7: mov byte ptr [ebx + 0x1c], 7 */ W8((u32)(r_ebx+0x1cu), 0x7u);
    /* 007565fb: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007565fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007565ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00756600: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00756601: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00756602: ret  */ FN_RET(0x00755f81); r_esp += 4; return;
L_00756603:; BB(0x00756603);
    /* 00756603: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 00756608: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75660du); f_0073ec50();
    /* 0075660d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0075660f: push 0x9740b0 */ { u32 v = 0x9740b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00756614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756615: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x75661au); f_0073a8dc();
    /* 0075661a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075661d: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 00756620: jmp 0x756058 */ goto L_00756058;
L_00756625:; BB(0x00756625);
    /* 00756625: push 0xa2 */ { u32 v = 0xa2u; r_esp -= 4; W32(r_esp, v); }
    /* 0075662a: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75662fu); f_0073ec50();
    /* 0075662f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00756631: push 0x9740b8 */ { u32 v = 0x9740b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00756636: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00756637: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x75663cu); f_0073a8dc();
    /* 0075663c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075663f: mov dword ptr [ebx + 0x24], 0xffffffff */ W32((u32)(r_ebx+0x24u), 0xffffffffu);
    /* 00756646: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 00756649: jmp 0x75604d */ goto L_0075604d;
L_0075664e:; BB(0x0075664e);
    /* 0075664e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00756650: mov ecx, esi */ r_ecx = r_esi;
    /* 00756652: call 0x737840 */ r_esp -= 4; W32(r_esp, 0x756657u); f_00737840();
    /* 00756657: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 0075665a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075665c: je 0x75666a */ if (fZ) goto L_0075666a;
L_0075665e:; BB(0x0075665e);
    /* 0075665e: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x756663u); f_007127b0();
    /* 00756663: mov dword ptr [ebx + 0x3c], 0 */ W32((u32)(r_ebx+0x3cu), 0x0u);
L_0075666a:; BB(0x0075666a);
    /* 0075666a: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 0075666d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075666f: je 0x756058 */ if (fZ) goto L_00756058;
L_00756675:; BB(0x00756675);
    /* 00756675: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75667au); f_007127b0();
    /* 0075667a: mov dword ptr [ebx + 0x40], 0 */ W32((u32)(r_ebx+0x40u), 0x0u);
    /* 00756681: jmp 0x756058 */ goto L_00756058;
}

