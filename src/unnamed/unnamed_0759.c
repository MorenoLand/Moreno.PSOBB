#include "protos.h"

void f_0075901e(void)
{
    FN_ENTER(0x0075901e);
    /* 0075901e: mov eax, ecx */ r_eax = r_ecx;
    /* 00759020: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00759023: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00759025: je 0x759036 */ if (fZ) goto L_00759036;
L_00759027:; BB(0x00759027);
    /* 00759027: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75902cu); f_007127b0();
    /* 0075902c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075902f: mov dword ptr [eax + 0x64], 0 */ W32((u32)(r_eax+0x64u), 0x0u);
L_00759036:; BB(0x00759036);
    /* 00759036: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 00759039: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075903b: je 0x75904c */ if (fZ) goto L_0075904c;
L_0075903d:; BB(0x0075903d);
    /* 0075903d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x759042u); f_007127b0();
    /* 00759042: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759045: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
L_0075904c:; BB(0x0075904c);
    /* 0075904c: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0075904f: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x759054u); f_0073600c();
    /* 00759054: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759057: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075905a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075905c: je 0x759a83 */ if (fZ) goto L_00759a83;
L_00759062:; BB(0x00759062);
    /* 00759062: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00759069: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075906e: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 00759071: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 00759078: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075907a: je 0x759083 */ if (fZ) goto L_00759083;
L_0075907c:; BB(0x0075907c);
    /* 0075907c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075907e: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x759083u); f_00760acc();
L_00759083:; BB(0x00759083);
    /* 00759083: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759086: mov byte ptr [eax + 0x1c], 0x15 */ W8((u32)(r_eax+0x1cu), 0x15u);
    /* 0075908a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075908d: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00759090: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00759097: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00759099: je 0x7590b0 */ if (fZ) goto L_007590b0;
L_0075909b:; BB(0x0075909b);
    /* 0075909b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075909e: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 007590a2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007590a5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007590ac: mov esp, ebp */ r_esp = r_ebp;
    /* 007590ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007590af: ret  */ FN_RET(0x0075901e); r_esp += 4; return;
L_007590b0:; BB(0x007590b0);
    /* 007590b0: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007590b2: je 0x759866 */ if (fZ) goto L_00759866;
L_007590b8:; BB(0x007590b8);
    /* 007590b8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007590bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007590bd: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 007590c1: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x7590c6u); f_007365f4();
    /* 007590c6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007590c9: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 007590cc: jmp 0x759866 */ goto L_00759866;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x0075901e); r_esp += 4; return;
L_00759a83:; BB(0x00759a83);
    /* 00759a83: mov ecx, eax */ r_ecx = r_eax;
    /* 00759a85: call 0x75a28c */ r_esp -= 4; W32(r_esp, 0x759a8au); f_0075a28c();
    /* 00759a8a: mov edx, eax */ r_edx = r_eax;
    /* 00759a8c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759a8f: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 00759a92: jmp 0x759062 */ goto L_00759062;
}

void f_0075908a(void)
{
    FN_ENTER(0x0075908a);
    /* 0075908a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075908d: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00759090: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00759097: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00759099: je 0x7590b0 */ if (fZ) goto L_007590b0;
L_0075909b:; BB(0x0075909b);
    /* 0075909b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075909e: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 007590a2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007590a5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007590ac: mov esp, ebp */ r_esp = r_ebp;
    /* 007590ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007590af: ret  */ FN_RET(0x0075908a); r_esp += 4; return;
L_007590b0:; BB(0x007590b0);
    /* 007590b0: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007590b2: je 0x759866 */ if (fZ) goto L_00759866;
L_007590b8:; BB(0x007590b8);
    /* 007590b8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007590bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007590bd: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 007590c1: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x7590c6u); f_007365f4();
    /* 007590c6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007590c9: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 007590cc: jmp 0x759866 */ goto L_00759866;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x0075908a); r_esp += 4; return;
}

void f_007590d1(void)
{
    FN_ENTER(0x007590d1);
    /* 007590d1: mov eax, ecx */ r_eax = r_ecx;
    /* 007590d3: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 007590d6: jmp 0x75910e */ goto L_0075910e;
L_0075910e:; BB(0x0075910e);
    /* 0075910e: movsx eax, byte ptr [edx + 0x68] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x68u));
    /* 00759112: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00759114: je 0x75912e */ if (fZ) goto L_0075912e;
L_00759116:; BB(0x00759116);
    /* 00759116: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759119: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075911c: mov byte ptr [eax + 0x1c], 0x10 */ W8((u32)(r_eax+0x1cu), 0x10u);
    /* 00759120: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759123: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075912a: mov esp, ebp */ r_esp = r_ebp;
    /* 0075912c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075912d: ret  */ FN_RET(0x007590d1); r_esp += 4; return;
L_0075912e:; BB(0x0075912e);
    /* 0075912e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00759130: je 0x759866 */ if (fZ) goto L_00759866;
L_00759136:; BB(0x00759136);
    /* 00759136: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759139: call 0x75a260 */ r_esp -= 4; W32(r_esp, 0x75913eu); f_0075a260();
    /* 0075913e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759141: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00759144: call 0x714598 */ r_esp -= 4; W32(r_esp, 0x759149u); f_00714598();
    /* 00759149: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075914c: mov byte ptr [eax + 0x1c], 0x10 */ W8((u32)(r_eax+0x1cu), 0x10u);
    /* 00759150: jmp 0x759866 */ goto L_00759866;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x007590d1); r_esp += 4; return;
}

void f_007590d8(void)
{
    FN_ENTER(0x007590d8);
    /* 007590d8: mov eax, ecx */ r_eax = r_ecx;
    /* 007590da: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 007590dd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007590df: je 0x7590ff */ if (fZ) goto L_007590ff;
L_007590e1:; BB(0x007590e1);
    /* 007590e1: call 0x75ca48 */ r_esp -= 4; W32(r_esp, 0x7590e6u); f_0075ca48();
    /* 007590e6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007590e9: mov ecx, dword ptr [edx + 0x5c] */ r_ecx = R32((u32)(r_edx+0x5cu));
    /* 007590ec: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 007590f0: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7590f5u); f_007127b0();
    /* 007590f5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007590f8: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
L_007590ff:; BB(0x007590ff);
    /* 007590ff: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00759102: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00759104: je 0x759a97 */ if (fZ) goto L_00759a97;
L_0075910a:; BB(0x0075910a);
    /* 0075910a: mov byte ptr [eax + 0x1c], 0x13 */ W8((u32)(r_eax+0x1cu), 0x13u);
    /* 0075910e: movsx eax, byte ptr [edx + 0x68] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x68u));
    /* 00759112: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00759114: je 0x75912e */ if (fZ) goto L_0075912e;
L_00759116:; BB(0x00759116);
    /* 00759116: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759119: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075911c: mov byte ptr [eax + 0x1c], 0x10 */ W8((u32)(r_eax+0x1cu), 0x10u);
    /* 00759120: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759123: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075912a: mov esp, ebp */ r_esp = r_ebp;
    /* 0075912c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075912d: ret  */ FN_RET(0x007590d8); r_esp += 4; return;
L_0075912e:; BB(0x0075912e);
    /* 0075912e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00759130: je 0x759866 */ if (fZ) goto L_00759866;
L_00759136:; BB(0x00759136);
    /* 00759136: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759139: call 0x75a260 */ r_esp -= 4; W32(r_esp, 0x75913eu); f_0075a260();
    /* 0075913e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759141: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00759144: call 0x714598 */ r_esp -= 4; W32(r_esp, 0x759149u); f_00714598();
    /* 00759149: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075914c: mov byte ptr [eax + 0x1c], 0x10 */ W8((u32)(r_eax+0x1cu), 0x10u);
    /* 00759150: jmp 0x759866 */ goto L_00759866;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x007590d8); r_esp += 4; return;
L_00759a97:; BB(0x00759a97);
    /* 00759a97: mov ecx, eax */ r_ecx = r_eax;
    /* 00759a99: call 0x75a480 */ r_esp -= 4; W32(r_esp, 0x759a9eu); f_0075a480();
    /* 00759a9e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759aa1: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 00759aa4: lea ebx, [edx + 0x1d] */ r_ebx = (u32)(r_edx+0x1du);
    /* 00759aa7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00759aa8: mov ecx, eax */ r_ecx = r_eax;
    /* 00759aaa: call 0x75dba4 */ r_esp -= 4; W32(r_esp, 0x759aafu); f_0075dba4();
    /* 00759aaf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759ab2: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00759ab5: jmp 0x75910a */ goto L_0075910a;
}

void f_00759155(void)
{
    FN_ENTER(0x00759155);
    /* 00759155: mov eax, ecx */ r_eax = r_ecx;
    /* 00759157: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0075915a: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
    /* 00759161: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00759163: je 0x759174 */ if (fZ) goto L_00759174;
L_00759165:; BB(0x00759165);
    /* 00759165: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75916au); f_007127b0();
    /* 0075916a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075916d: mov dword ptr [eax + 0x60], 0 */ W32((u32)(r_eax+0x60u), 0x0u);
L_00759174:; BB(0x00759174);
    /* 00759174: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 00759177: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00759179: je 0x759b12 */ if (fZ) goto L_00759b12;
L_0075917f:; BB(0x0075917f);
    /* 0075917f: movsx edx, word ptr [eax + 0x1e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1eu));
    /* 00759183: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00759184: call 0x75d25c */ r_esp -= 4; W32(r_esp, 0x759189u); f_0075d25c();
    /* 00759189: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075918c: mov edx, dword ptr [eax + 0x64] */ r_edx = R32((u32)(r_eax+0x64u));
    /* 0075918f: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00759192: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00759194: je 0x759aba */ if (fZ) goto L_00759aba;
L_0075919a:; BB(0x0075919a);
    /* 0075919a: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0075919d: movzx eax, byte ptr [esi + 0x60] */ r_eax = (u32)R8((u32)(r_esi+0x60u));
    /* 007591a1: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007591a6: mov byte ptr [esi + 0x60], al */ W8((u32)(r_esi+0x60u), (u8)r_eax);
    /* 007591a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007591ac: mov ebx, dword ptr [eax + 0x64] */ r_ebx = R32((u32)(r_eax+0x64u));
    /* 007591af: movzx ecx, byte ptr [ebx + 0x60] */ r_ecx = (u32)R8((u32)(r_ebx+0x60u));
    /* 007591b3: lea edi, [eax + 0x28] */ r_edi = (u32)(r_eax+0x28u);
    /* 007591b6: lea edx, [eax + 0x2c] */ r_edx = (u32)(r_eax+0x2cu);
    /* 007591b9: mov dword ptr [ebx + 0x6c], edi */ W32((u32)(r_ebx+0x6cu), r_edi);
    /* 007591bc: mov dword ptr [ebx + 0x70], edx */ W32((u32)(r_ebx+0x70u), r_edx);
    /* 007591bf: or ecx, 0xffffff04 */ {  u32 a = r_ecx; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 007591c5: mov byte ptr [ebx + 0x60], cl */ W8((u32)(r_ebx+0x60u), (u8)r_ecx);
    /* 007591c8: mov byte ptr [eax + 0x1c], 0x11 */ W8((u32)(r_eax+0x1cu), 0x11u);
    /* 007591cc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007591cf: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 007591d2: movsx eax, byte ptr [edx + 0x84] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x84u));
    /* 007591d9: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007591db: je 0x7591fb */ if (fZ) goto L_007591fb;
L_007591dd:; BB(0x007591dd);
    /* 007591dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007591e0: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007591e3: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007591e6: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007591e9: mov byte ptr [eax + 0x1c], 0xa */ W8((u32)(r_eax+0x1cu), 0xau);
    /* 007591ed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007591f0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007591f7: mov esp, ebp */ r_esp = r_ebp;
    /* 007591f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007591fa: ret  */ FN_RET(0x00759155); r_esp += 4; return;
L_007591fb:; BB(0x007591fb);
    /* 007591fb: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007591fd: je 0x759866 */ if (fZ) goto L_00759866;
L_00759203:; BB(0x00759203);
    /* 00759203: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759206: mov byte ptr [eax + 0x1c], 0x12 */ W8((u32)(r_eax+0x1cu), 0x12u);
    /* 0075920a: jmp 0x759866 */ goto L_00759866;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x00759155); r_esp += 4; return;
L_00759aba:; BB(0x00759aba);
    /* 00759aba: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 00759ac1: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 00759ac3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x759ac8u); f_005caba4();
    /* 00759ac8: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00759acb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00759ace: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00759ad1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00759ad3: je 0x759b0b */ if (fZ) goto L_00759b0b;
L_00759ad5:; BB(0x00759ad5);
    /* 00759ad5: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 00759adc: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00759ae3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759ae6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00759ae9: lea ebx, [eax + 0x1d] */ r_ebx = (u32)(r_eax+0x1du);
    /* 00759aec: lea edx, [eax + 0x30] */ r_edx = (u32)(r_eax+0x30u);
    /* 00759aef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00759af0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00759af1: call 0x75b2cc */ r_esp -= 4; W32(r_esp, 0x759af6u); f_0075b2cc();
    /* 00759af6: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00759afd:; BB(0x00759afd);
    /* 00759afd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00759b00: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759b03: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 00759b06: jmp 0x75919a */ goto L_0075919a;
L_00759b0b:; BB(0x00759b0b);
    /* 00759b0b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00759b0d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00759b10: jmp 0x759afd */ goto L_00759afd;
L_00759b12:; BB(0x00759b12);
    /* 00759b12: mov ecx, eax */ r_ecx = r_eax;
    /* 00759b14: call 0x75a39c */ r_esp -= 4; W32(r_esp, 0x759b19u); f_0075a39c();
    /* 00759b19: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759b1c: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
    /* 00759b1f: lea ebx, [edx + 0x1d] */ r_ebx = (u32)(r_edx+0x1du);
    /* 00759b22: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00759b23: mov ecx, eax */ r_ecx = r_eax;
    /* 00759b25: call 0x75d200 */ r_esp -= 4; W32(r_esp, 0x759b2au); f_0075d200();
    /* 00759b2a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759b2d: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 00759b30: jmp 0x75917f */ goto L_0075917f;
}

void f_007591cc(void)
{
    FN_ENTER(0x007591cc);
    /* 007591cc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007591cf: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 007591d2: movsx eax, byte ptr [edx + 0x84] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x84u));
    /* 007591d9: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007591db: je 0x7591fb */ if (fZ) goto L_007591fb;
L_007591dd:; BB(0x007591dd);
    /* 007591dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007591e0: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007591e3: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007591e6: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007591e9: mov byte ptr [eax + 0x1c], 0xa */ W8((u32)(r_eax+0x1cu), 0xau);
    /* 007591ed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007591f0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007591f7: mov esp, ebp */ r_esp = r_ebp;
    /* 007591f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007591fa: ret  */ FN_RET(0x007591cc); r_esp += 4; return;
L_007591fb:; BB(0x007591fb);
    /* 007591fb: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007591fd: je 0x759866 */ if (fZ) goto L_00759866;
L_00759203:; BB(0x00759203);
    /* 00759203: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759206: mov byte ptr [eax + 0x1c], 0x12 */ W8((u32)(r_eax+0x1cu), 0x12u);
    /* 0075920a: jmp 0x759866 */ goto L_00759866;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x007591cc); r_esp += 4; return;
}

void f_0075920f(void)
{
    FN_ENTER(0x0075920f);
    /* 0075920f: mov eax, ecx */ r_eax = r_ecx;
    /* 00759211: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00759214: jmp 0x75924c */ goto L_0075924c;
L_0075924c:; BB(0x0075924c);
    /* 0075924c: movsx eax, byte ptr [edx + 0x68] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x68u));
    /* 00759250: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00759252: je 0x75926c */ if (fZ) goto L_0075926c;
L_00759254:; BB(0x00759254);
    /* 00759254: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759257: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075925a: mov byte ptr [eax + 0x1c], 0xc */ W8((u32)(r_eax+0x1cu), 0xcu);
    /* 0075925e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759261: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759268: mov esp, ebp */ r_esp = r_ebp;
    /* 0075926a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075926b: ret  */ FN_RET(0x0075920f); r_esp += 4; return;
L_0075926c:; BB(0x0075926c);
    /* 0075926c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075926e: je 0x759866 */ if (fZ) goto L_00759866;
L_00759274:; BB(0x00759274);
    /* 00759274: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759277: call 0x75a208 */ r_esp -= 4; W32(r_esp, 0x75927cu); f_0075a208();
    /* 0075927c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075927f: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00759282: call 0x714598 */ r_esp -= 4; W32(r_esp, 0x759287u); f_00714598();
    /* 00759287: call 0x77d9f0 */ r_esp -= 4; W32(r_esp, 0x75928cu); f_0077d9f0();
    /* 0075928c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075928e: jle 0x759b35 */ if ((fZ||fS!=fO)) goto L_00759b35;
L_00759294:; BB(0x00759294);
    /* 00759294: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759297: mov byte ptr [eax + 0x1c], 0xc */ W8((u32)(r_eax+0x1cu), 0xcu);
    /* 0075929b: jmp 0x759866 */ goto L_00759866;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x0075920f); r_esp += 4; return;
L_00759b35:; BB(0x00759b35);
    /* 00759b35: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759b38: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 00759b3b: call 0x75a17c */ r_esp -= 4; W32(r_esp, 0x759b40u); f_0075a17c();
    /* 00759b40: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759b43: mov byte ptr [eax + 0x1c], 0xa */ W8((u32)(r_eax+0x1cu), 0xau);
    /* 00759b47: jmp 0x759866 */ goto L_00759866;
}

void f_00759216(void)
{
    FN_ENTER(0x00759216);
    /* 00759216: mov eax, ecx */ r_eax = r_ecx;
    /* 00759218: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 0075921b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075921d: je 0x75923d */ if (fZ) goto L_0075923d;
L_0075921f:; BB(0x0075921f);
    /* 0075921f: call 0x75ca48 */ r_esp -= 4; W32(r_esp, 0x759224u); f_0075ca48();
    /* 00759224: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759227: mov ecx, dword ptr [edx + 0x5c] */ r_ecx = R32((u32)(r_edx+0x5cu));
    /* 0075922a: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 0075922e: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x759233u); f_007127b0();
    /* 00759233: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759236: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
L_0075923d:; BB(0x0075923d);
    /* 0075923d: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00759240: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00759242: je 0x759b4c */ if (fZ) goto L_00759b4c;
L_00759248:; BB(0x00759248);
    /* 00759248: mov byte ptr [eax + 0x1c], 0xf */ W8((u32)(r_eax+0x1cu), 0xfu);
    /* 0075924c: movsx eax, byte ptr [edx + 0x68] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x68u));
    /* 00759250: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00759252: je 0x75926c */ if (fZ) goto L_0075926c;
L_00759254:; BB(0x00759254);
    /* 00759254: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759257: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075925a: mov byte ptr [eax + 0x1c], 0xc */ W8((u32)(r_eax+0x1cu), 0xcu);
    /* 0075925e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759261: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759268: mov esp, ebp */ r_esp = r_ebp;
    /* 0075926a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075926b: ret  */ FN_RET(0x00759216); r_esp += 4; return;
L_0075926c:; BB(0x0075926c);
    /* 0075926c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075926e: je 0x759866 */ if (fZ) goto L_00759866;
L_00759274:; BB(0x00759274);
    /* 00759274: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759277: call 0x75a208 */ r_esp -= 4; W32(r_esp, 0x75927cu); f_0075a208();
    /* 0075927c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075927f: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00759282: call 0x714598 */ r_esp -= 4; W32(r_esp, 0x759287u); f_00714598();
    /* 00759287: call 0x77d9f0 */ r_esp -= 4; W32(r_esp, 0x75928cu); f_0077d9f0();
    /* 0075928c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075928e: jle 0x759b35 */ if ((fZ||fS!=fO)) goto L_00759b35;
L_00759294:; BB(0x00759294);
    /* 00759294: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759297: mov byte ptr [eax + 0x1c], 0xc */ W8((u32)(r_eax+0x1cu), 0xcu);
    /* 0075929b: jmp 0x759866 */ goto L_00759866;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x00759216); r_esp += 4; return;
L_00759b35:; BB(0x00759b35);
    /* 00759b35: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759b38: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 00759b3b: call 0x75a17c */ r_esp -= 4; W32(r_esp, 0x759b40u); f_0075a17c();
    /* 00759b40: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759b43: mov byte ptr [eax + 0x1c], 0xa */ W8((u32)(r_eax+0x1cu), 0xau);
    /* 00759b47: jmp 0x759866 */ goto L_00759866;
L_00759b4c:; BB(0x00759b4c);
    /* 00759b4c: mov ecx, eax */ r_ecx = r_eax;
    /* 00759b4e: call 0x75a480 */ r_esp -= 4; W32(r_esp, 0x759b53u); f_0075a480();
    /* 00759b53: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759b56: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 00759b59: lea ebx, [edx + 0x30] */ r_ebx = (u32)(r_edx+0x30u);
    /* 00759b5c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00759b5d: mov ecx, eax */ r_ecx = r_eax;
    /* 00759b5f: call 0x75dad8 */ r_esp -= 4; W32(r_esp, 0x759b64u); f_0075dad8();
    /* 00759b64: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759b67: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00759b6a: jmp 0x759248 */ goto L_00759248;
}

void f_007592a0(void)
{
    FN_ENTER(0x007592a0);
    /* 007592a0: mov eax, ecx */ r_eax = r_ecx;
    /* 007592a2: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 007592a5: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
    /* 007592ac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007592ae: je 0x7592bf */ if (fZ) goto L_007592bf;
L_007592b0:; BB(0x007592b0);
    /* 007592b0: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7592b5u); f_007127b0();
    /* 007592b5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007592b8: mov dword ptr [eax + 0x60], 0 */ W32((u32)(r_eax+0x60u), 0x0u);
L_007592bf:; BB(0x007592bf);
    /* 007592bf: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 007592c2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007592c4: je 0x759bce */ if (fZ) goto L_00759bce;
L_007592ca:; BB(0x007592ca);
    /* 007592ca: movsx edx, word ptr [eax + 0x1e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1eu));
    /* 007592ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007592cf: call 0x75d25c */ r_esp -= 4; W32(r_esp, 0x7592d4u); f_0075d25c();
    /* 007592d4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007592d7: mov edx, dword ptr [eax + 0x64] */ r_edx = R32((u32)(r_eax+0x64u));
    /* 007592da: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007592dc: je 0x759b6f */ if (fZ) goto L_00759b6f;
L_007592e2:; BB(0x007592e2);
    /* 007592e2: call 0x77d9f0 */ r_esp -= 4; W32(r_esp, 0x7592e7u); f_0077d9f0();
    /* 007592e7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007592ea: jle 0x759300 */ if ((fZ||fS!=fO)) goto L_00759300;
L_007592ec:; BB(0x007592ec);
    /* 007592ec: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 007592ef: mov edx, dword ptr [esi + 0x64] */ r_edx = R32((u32)(r_esi+0x64u));
    /* 007592f2: movzx eax, byte ptr [edx + 0x60] */ r_eax = (u32)R8((u32)(r_edx+0x60u));
    /* 007592f6: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007592fb: mov byte ptr [edx + 0x60], al */ W8((u32)(r_edx+0x60u), (u8)r_eax);
    /* 007592fe: jmp 0x759312 */ goto L_00759312;
L_00759300:; BB(0x00759300);
    /* 00759300: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00759303: mov edx, dword ptr [esi + 0x64] */ r_edx = R32((u32)(r_esi+0x64u));
    /* 00759306: movzx eax, byte ptr [edx + 0x60] */ r_eax = (u32)R8((u32)(r_edx+0x60u));
    /* 0075930a: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075930f: mov byte ptr [edx + 0x60], al */ W8((u32)(r_edx+0x60u), (u8)r_eax);
L_00759312:; BB(0x00759312);
    /* 00759312: mov ecx, esi */ r_ecx = r_esi;
    /* 00759314: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 00759317: movzx eax, byte ptr [edx + 0x60] */ r_eax = (u32)R8((u32)(r_edx+0x60u));
    /* 0075931b: lea esi, [ecx + 0x28] */ r_esi = (u32)(r_ecx+0x28u);
    /* 0075931e: lea edi, [ecx + 0x2c] */ r_edi = (u32)(r_ecx+0x2cu);
    /* 00759321: mov dword ptr [edx + 0x6c], esi */ W32((u32)(r_edx+0x6cu), r_esi);
    /* 00759324: mov dword ptr [edx + 0x70], edi */ W32((u32)(r_edx+0x70u), r_edi);
    /* 00759327: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075932c: mov byte ptr [edx + 0x60], al */ W8((u32)(r_edx+0x60u), (u8)r_eax);
    /* 0075932f: mov byte ptr [ecx + 0x1c], 0xd */ W8((u32)(r_ecx+0x1cu), 0xdu);
    /* 00759333: mov eax, ecx */ r_eax = r_ecx;
    /* 00759335: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 00759338: movsx eax, byte ptr [edx + 0x84] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x84u));
    /* 0075933f: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00759341: je 0x759360 */ if (fZ) goto L_00759360;
L_00759343:; BB(0x00759343);
    /* 00759343: mov eax, ecx */ r_eax = r_ecx;
    /* 00759345: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759348: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075934b: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075934e: mov byte ptr [eax + 0x1c], 0xa */ W8((u32)(r_eax+0x1cu), 0xau);
    /* 00759352: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759355: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075935c: mov esp, ebp */ r_esp = r_ebp;
    /* 0075935e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075935f: ret  */ FN_RET(0x007592a0); r_esp += 4; return;
L_00759360:; BB(0x00759360);
    /* 00759360: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00759362: je 0x759866 */ if (fZ) goto L_00759866;
L_00759368:; BB(0x00759368);
    /* 00759368: mov eax, ecx */ r_eax = r_ecx;
    /* 0075936a: mov byte ptr [eax + 0x1c], 0xe */ W8((u32)(r_eax+0x1cu), 0xeu);
    /* 0075936e: jmp 0x759866 */ goto L_00759866;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x007592a0); r_esp += 4; return;
L_00759b6f:; BB(0x00759b6f);
    /* 00759b6f: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00759b76: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 00759b78: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x759b7du); f_005caba4();
    /* 00759b7d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00759b80: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00759b83: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00759b86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00759b88: je 0x759bc7 */ if (fZ) goto L_00759bc7;
L_00759b8a:; BB(0x00759b8a);
    /* 00759b8a: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 00759b91: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00759b98: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759b9b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00759b9e: lea ebx, [eax + 0x1d] */ r_ebx = (u32)(r_eax+0x1du);
    /* 00759ba1: lea edx, [eax + 0x30] */ r_edx = (u32)(r_eax+0x30u);
    /* 00759ba4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00759ba5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00759ba6: call 0x75b2cc */ r_esp -= 4; W32(r_esp, 0x759babu); f_0075b2cc();
    /* 00759bab: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00759bb2:; BB(0x00759bb2);
    /* 00759bb2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00759bb5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759bb8: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 00759bbb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00759bc2: jmp 0x7592e2 */ goto L_007592e2;
L_00759bc7:; BB(0x00759bc7);
    /* 00759bc7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00759bc9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00759bcc: jmp 0x759bb2 */ goto L_00759bb2;
L_00759bce:; BB(0x00759bce);
    /* 00759bce: mov ecx, eax */ r_ecx = r_eax;
    /* 00759bd0: call 0x75a39c */ r_esp -= 4; W32(r_esp, 0x759bd5u); f_0075a39c();
    /* 00759bd5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759bd8: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
    /* 00759bdb: lea ebx, [edx + 0x30] */ r_ebx = (u32)(r_edx+0x30u);
    /* 00759bde: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00759bdf: mov ecx, eax */ r_ecx = r_eax;
    /* 00759be1: call 0x75d118 */ r_esp -= 4; W32(r_esp, 0x759be6u); f_0075d118();
    /* 00759be6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759be9: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 00759bec: jmp 0x7592ca */ goto L_007592ca;
}

void f_00759333(void)
{
    FN_ENTER(0x00759333);
    /* 00759333: mov eax, ecx */ r_eax = r_ecx;
    /* 00759335: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 00759338: movsx eax, byte ptr [edx + 0x84] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x84u));
    /* 0075933f: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00759341: je 0x759360 */ if (fZ) goto L_00759360;
L_00759343:; BB(0x00759343);
    /* 00759343: mov eax, ecx */ r_eax = r_ecx;
    /* 00759345: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759348: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075934b: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075934e: mov byte ptr [eax + 0x1c], 0xa */ W8((u32)(r_eax+0x1cu), 0xau);
    /* 00759352: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759355: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075935c: mov esp, ebp */ r_esp = r_ebp;
    /* 0075935e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075935f: ret  */ FN_RET(0x00759333); r_esp += 4; return;
L_00759360:; BB(0x00759360);
    /* 00759360: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00759362: je 0x759866 */ if (fZ) goto L_00759866;
L_00759368:; BB(0x00759368);
    /* 00759368: mov eax, ecx */ r_eax = r_ecx;
    /* 0075936a: mov byte ptr [eax + 0x1c], 0xe */ W8((u32)(r_eax+0x1cu), 0xeu);
    /* 0075936e: jmp 0x759866 */ goto L_00759866;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x00759333); r_esp += 4; return;
}

void f_00759373(void)
{
    FN_ENTER(0x00759373);
    /* 00759373: mov eax, ecx */ r_eax = r_ecx;
    /* 00759375: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00759378: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075937a: je 0x75938b */ if (fZ) goto L_0075938b;
L_0075937c:; BB(0x0075937c);
    /* 0075937c: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x759381u); f_007127b0();
    /* 00759381: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759384: mov dword ptr [eax + 0x60], 0 */ W32((u32)(r_eax+0x60u), 0x0u);
L_0075938b:; BB(0x0075938b);
    /* 0075938b: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0075938e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00759390: je 0x7593a1 */ if (fZ) goto L_007593a1;
L_00759392:; BB(0x00759392);
    /* 00759392: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x759397u); f_007127b0();
    /* 00759397: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075939a: mov dword ptr [eax + 0x64], 0 */ W32((u32)(r_eax+0x64u), 0x0u);
L_007593a1:; BB(0x007593a1);
    /* 007593a1: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 007593a4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007593a6: je 0x7593b7 */ if (fZ) goto L_007593b7;
L_007593a8:; BB(0x007593a8);
    /* 007593a8: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7593adu); f_007127b0();
    /* 007593ad: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007593b0: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
L_007593b7:; BB(0x007593b7);
    /* 007593b7: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 007593ba: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x7593bfu); f_0073600c();
    /* 007593bf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007593c2: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 007593c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007593c7: je 0x759bf1 */ if (fZ) goto L_00759bf1;
L_007593cd:; BB(0x007593cd);
    /* 007593cd: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 007593d4: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007593d9: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 007593dc: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 007593e3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007593e5: je 0x7593ee */ if (fZ) goto L_007593ee;
L_007593e7:; BB(0x007593e7);
    /* 007593e7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007593e9: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x7593eeu); f_00760acc();
L_007593ee:; BB(0x007593ee);
    /* 007593ee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007593f1: mov byte ptr [eax + 0x1c], 0xb */ W8((u32)(r_eax+0x1cu), 0xbu);
    /* 007593f5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007593f8: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 007593fb: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00759402: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00759404: je 0x75941b */ if (fZ) goto L_0075941b;
L_00759406:; BB(0x00759406);
    /* 00759406: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759409: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 0075940d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759410: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759417: mov esp, ebp */ r_esp = r_ebp;
    /* 00759419: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075941a: ret  */ FN_RET(0x00759373); r_esp += 4; return;
L_0075941b:; BB(0x0075941b);
    /* 0075941b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075941d: je 0x759866 */ if (fZ) goto L_00759866;
L_00759423:; BB(0x00759423);
    /* 00759423: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759426: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00759428: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 0075942c: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x759431u); f_007365f4();
    /* 00759431: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759434: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 00759437: jmp 0x759866 */ goto L_00759866;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x00759373); r_esp += 4; return;
L_00759bf1:; BB(0x00759bf1);
    /* 00759bf1: mov ecx, eax */ r_ecx = r_eax;
    /* 00759bf3: call 0x75a148 */ r_esp -= 4; W32(r_esp, 0x759bf8u); f_0075a148();
    /* 00759bf8: mov edx, eax */ r_edx = r_eax;
    /* 00759bfa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759bfd: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 00759c00: jmp 0x7593cd */ goto L_007593cd;
}

void f_007593f5(void)
{
    FN_ENTER(0x007593f5);
    /* 007593f5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007593f8: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 007593fb: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00759402: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00759404: je 0x75941b */ if (fZ) goto L_0075941b;
L_00759406:; BB(0x00759406);
    /* 00759406: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759409: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 0075940d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759410: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759417: mov esp, ebp */ r_esp = r_ebp;
    /* 00759419: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075941a: ret  */ FN_RET(0x007593f5); r_esp += 4; return;
L_0075941b:; BB(0x0075941b);
    /* 0075941b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075941d: je 0x759866 */ if (fZ) goto L_00759866;
L_00759423:; BB(0x00759423);
    /* 00759423: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759426: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00759428: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 0075942c: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x759431u); f_007365f4();
    /* 00759431: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759434: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 00759437: jmp 0x759866 */ goto L_00759866;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x007593f5); r_esp += 4; return;
}

void f_0075943c(void)
{
    FN_ENTER(0x0075943c);
    /* 0075943c: mov eax, ecx */ r_eax = r_ecx;
    /* 0075943e: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 00759441: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00759443: je 0x759c64 */ if (fZ) goto L_00759c64;
L_00759449:; BB(0x00759449);
    /* 00759449: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075944c: mov edx, dword ptr [eax + 0x64] */ r_edx = R32((u32)(r_eax+0x64u));
    /* 0075944f: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00759452: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00759454: je 0x759c05 */ if (fZ) goto L_00759c05;
L_0075945a:; BB(0x0075945a);
    /* 0075945a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0075945d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759460: movzx eax, byte ptr [edx + 0x60] */ r_eax = (u32)R8((u32)(r_edx+0x60u));
    /* 00759464: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00759469: mov byte ptr [edx + 0x60], al */ W8((u32)(r_edx+0x60u), (u8)r_eax);
    /* 0075946c: mov byte ptr [ecx + 0x1c], 9 */ W8((u32)(r_ecx+0x1cu), 0x9u);
    /* 00759470: mov eax, ecx */ r_eax = r_ecx;
    /* 00759472: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00759475: movsx eax, byte ptr [ecx + 0x60] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x60u));
    /* 00759479: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075947b: je 0x759495 */ if (fZ) goto L_00759495;
L_0075947d:; BB(0x0075947d);
    /* 0075947d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759480: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00759483: mov byte ptr [eax + 0x1c], 6 */ W8((u32)(r_eax+0x1cu), 0x6u);
    /* 00759487: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075948a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759491: mov esp, ebp */ r_esp = r_ebp;
    /* 00759493: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00759494: ret  */ FN_RET(0x0075943c); r_esp += 4; return;
L_00759495:; BB(0x00759495);
    /* 00759495: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00759497: je 0x759866 */ if (fZ) goto L_00759866;
L_0075949d:; BB(0x0075949d);
    /* 0075949d: call 0x75afa8 */ r_esp -= 4; W32(r_esp, 0x7594a2u); f_0075afa8();
    /* 007594a2: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 007594a5: movsx edx, byte ptr [ebx + 0x1d] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x1du));
    /* 007594a9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007594aa: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 007594ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007594ae: call 0x77da8c */ r_esp -= 4; W32(r_esp, 0x7594b3u); f_0077da8c();
    /* 007594b3: mov eax, ebx */ r_eax = r_ebx;
    /* 007594b5: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 007594b8: call 0x714598 */ r_esp -= 4; W32(r_esp, 0x7594bdu); f_00714598();
    /* 007594bd: mov eax, ebx */ r_eax = r_ebx;
    /* 007594bf: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 007594c3: jmp 0x759866 */ goto L_00759866;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x0075943c); r_esp += 4; return;
L_00759c05:; BB(0x00759c05);
    /* 00759c05: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 00759c0c: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 00759c0e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x759c13u); f_005caba4();
    /* 00759c13: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00759c16: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00759c19: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00759c1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00759c1e: je 0x759c5d */ if (fZ) goto L_00759c5d;
L_00759c20:; BB(0x00759c20);
    /* 00759c20: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 00759c27: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00759c2e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759c31: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00759c34: lea ebx, [eax + 0x1d] */ r_ebx = (u32)(r_eax+0x1du);
    /* 00759c37: lea edx, [eax + 0x30] */ r_edx = (u32)(r_eax+0x30u);
    /* 00759c3a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00759c3b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00759c3c: call 0x75b2cc */ r_esp -= 4; W32(r_esp, 0x759c41u); f_0075b2cc();
    /* 00759c41: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_00759c48:; BB(0x00759c48);
    /* 00759c48: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00759c4b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759c4e: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 00759c51: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00759c58: jmp 0x75945a */ goto L_0075945a;
L_00759c5d:; BB(0x00759c5d);
    /* 00759c5d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00759c5f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00759c62: jmp 0x759c48 */ goto L_00759c48;
L_00759c64:; BB(0x00759c64);
    /* 00759c64: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 00759c6b: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00759c6d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x759c72u); f_005caba4();
    /* 00759c72: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00759c75: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00759c78: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00759c7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00759c7d: je 0x759cc4 */ if (fZ) goto L_00759cc4;
L_00759c7f:; BB(0x00759c7f);
    /* 00759c7f: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 00759c86: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00759c8d: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 00759c92: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x759c97u); f_0073ec50();
    /* 00759c97: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00759c98: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759c9b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00759c9e: lea ebx, [edx + 0x1d] */ r_ebx = (u32)(r_edx+0x1du);
    /* 00759ca1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00759ca2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00759ca3: call 0x75a9b8 */ r_esp -= 4; W32(r_esp, 0x759ca8u); f_0075a9b8();
    /* 00759ca8: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_00759caf:; BB(0x00759caf);
    /* 00759caf: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00759cb2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759cb5: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 00759cb8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00759cbf: jmp 0x759449 */ goto L_00759449;
L_00759cc4:; BB(0x00759cc4);
    /* 00759cc4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00759cc6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00759cc9: jmp 0x759caf */ goto L_00759caf;
}

void f_00759470(void)
{
    FN_ENTER(0x00759470);
    /* 00759470: mov eax, ecx */ r_eax = r_ecx;
    /* 00759472: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00759475: movsx eax, byte ptr [ecx + 0x60] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x60u));
    /* 00759479: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075947b: je 0x759495 */ if (fZ) goto L_00759495;
L_0075947d:; BB(0x0075947d);
    /* 0075947d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759480: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00759483: mov byte ptr [eax + 0x1c], 6 */ W8((u32)(r_eax+0x1cu), 0x6u);
    /* 00759487: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075948a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759491: mov esp, ebp */ r_esp = r_ebp;
    /* 00759493: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00759494: ret  */ FN_RET(0x00759470); r_esp += 4; return;
L_00759495:; BB(0x00759495);
    /* 00759495: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00759497: je 0x759866 */ if (fZ) goto L_00759866;
L_0075949d:; BB(0x0075949d);
    /* 0075949d: call 0x75afa8 */ r_esp -= 4; W32(r_esp, 0x7594a2u); f_0075afa8();
    /* 007594a2: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 007594a5: movsx edx, byte ptr [ebx + 0x1d] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x1du));
    /* 007594a9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007594aa: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 007594ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007594ae: call 0x77da8c */ r_esp -= 4; W32(r_esp, 0x7594b3u); f_0077da8c();
    /* 007594b3: mov eax, ebx */ r_eax = r_ebx;
    /* 007594b5: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 007594b8: call 0x714598 */ r_esp -= 4; W32(r_esp, 0x7594bdu); f_00714598();
    /* 007594bd: mov eax, ebx */ r_eax = r_ebx;
    /* 007594bf: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 007594c3: jmp 0x759866 */ goto L_00759866;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x00759470); r_esp += 4; return;
}

void f_007594c8(void)
{
    FN_ENTER(0x007594c8);
    /* 007594c8: mov eax, ecx */ r_eax = r_ecx;
    /* 007594ca: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 007594cd: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x7594d2u); f_0073600c();
    /* 007594d2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007594d5: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 007594d8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007594da: je 0x7594eb */ if (fZ) goto L_007594eb;
L_007594dc:; BB(0x007594dc);
    /* 007594dc: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7594e1u); f_007127b0();
    /* 007594e1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007594e4: mov dword ptr [eax + 0x64], 0 */ W32((u32)(r_eax+0x64u), 0x0u);
L_007594eb:; BB(0x007594eb);
    /* 007594eb: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 007594ee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007594f0: je 0x759501 */ if (fZ) goto L_00759501;
L_007594f2:; BB(0x007594f2);
    /* 007594f2: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7594f7u); f_007127b0();
    /* 007594f7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007594fa: mov dword ptr [eax + 0x58], 0 */ W32((u32)(r_eax+0x58u), 0x0u);
L_00759501:; BB(0x00759501);
    /* 00759501: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 00759504: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00759506: je 0x759ccb */ if (fZ) goto L_00759ccb;
L_0075950c:; BB(0x0075950c);
    /* 0075950c: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00759513: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00759518: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 0075951b: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 00759522: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00759524: je 0x75952d */ if (fZ) goto L_0075952d;
L_00759526:; BB(0x00759526);
    /* 00759526: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00759528: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x75952du); f_00760acc();
L_0075952d:; BB(0x0075952d);
    /* 0075952d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759530: mov byte ptr [eax + 0x1c], 7 */ W8((u32)(r_eax+0x1cu), 0x7u);
    /* 00759534: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759537: call 0x759fcc */ r_esp -= 4; W32(r_esp, 0x75953cu); f_00759fcc();
    /* 0075953c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075953f: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00759542: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00759549: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075954b: je 0x759562 */ if (fZ) goto L_00759562;
L_0075954d:; BB(0x0075954d);
    /* 0075954d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759550: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 00759554: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759557: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075955e: mov esp, ebp */ r_esp = r_ebp;
    /* 00759560: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00759561: ret  */ FN_RET(0x007594c8); r_esp += 4; return;
L_00759562:; BB(0x00759562);
    /* 00759562: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00759564: je 0x759866 */ if (fZ) goto L_00759866;
L_0075956a:; BB(0x0075956a);
    /* 0075956a: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x75956fu); f_007365f4();
    /* 0075956f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759572: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 00759575: jmp 0x759866 */ goto L_00759866;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x007594c8); r_esp += 4; return;
L_00759ccb:; BB(0x00759ccb);
    /* 00759ccb: mov ecx, eax */ r_ecx = r_eax;
    /* 00759ccd: call 0x759ee8 */ r_esp -= 4; W32(r_esp, 0x759cd2u); f_00759ee8();
    /* 00759cd2: mov edx, eax */ r_edx = r_eax;
    /* 00759cd4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759cd7: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 00759cda: jmp 0x75950c */ goto L_0075950c;
}

void f_00759530(void)
{
    FN_ENTER(0x00759530);
    /* 00759530: mov byte ptr [eax + 0x1c], 7 */ W8((u32)(r_eax+0x1cu), 0x7u);
    /* 00759534: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759537: call 0x759fcc */ r_esp -= 4; W32(r_esp, 0x75953cu); f_00759fcc();
    /* 0075953c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075953f: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00759542: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00759549: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075954b: je 0x759562 */ if (fZ) goto L_00759562;
L_0075954d:; BB(0x0075954d);
    /* 0075954d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759550: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 00759554: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759557: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075955e: mov esp, ebp */ r_esp = r_ebp;
    /* 00759560: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00759561: ret  */ FN_RET(0x00759530); r_esp += 4; return;
L_00759562:; BB(0x00759562);
    /* 00759562: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00759564: je 0x759866 */ if (fZ) goto L_00759866;
L_0075956a:; BB(0x0075956a);
    /* 0075956a: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x75956fu); f_007365f4();
    /* 0075956f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759572: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 00759575: jmp 0x759866 */ goto L_00759866;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x00759530); r_esp += 4; return;
}

void f_00759534(void)
{
    FN_ENTER(0x00759534);
    /* 00759534: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759537: call 0x759fcc */ r_esp -= 4; W32(r_esp, 0x75953cu); f_00759fcc();
    /* 0075953c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075953f: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00759542: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00759549: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075954b: je 0x759562 */ if (fZ) goto L_00759562;
L_0075954d:; BB(0x0075954d);
    /* 0075954d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759550: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 00759554: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759557: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075955e: mov esp, ebp */ r_esp = r_ebp;
    /* 00759560: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00759561: ret  */ FN_RET(0x00759534); r_esp += 4; return;
L_00759562:; BB(0x00759562);
    /* 00759562: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00759564: je 0x759866 */ if (fZ) goto L_00759866;
L_0075956a:; BB(0x0075956a);
    /* 0075956a: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x75956fu); f_007365f4();
    /* 0075956f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759572: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 00759575: jmp 0x759866 */ goto L_00759866;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x00759534); r_esp += 4; return;
}

void f_0075957a(void)
{
    FN_ENTER(0x0075957a);
    /* 0075957a: mov eax, ecx */ r_eax = r_ecx;
    /* 0075957c: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0075957f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00759581: je 0x759592 */ if (fZ) goto L_00759592;
L_00759583:; BB(0x00759583);
    /* 00759583: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x759588u); f_007127b0();
    /* 00759588: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075958b: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
L_00759592:; BB(0x00759592);
    /* 00759592: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759595: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 00759598: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075959a: je 0x7595b3 */ if (fZ) goto L_007595b3;
L_0075959c:; BB(0x0075959c);
    /* 0075959c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007595a0: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007595a5: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 007595a9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007595ac: mov dword ptr [edx + 0x68], 0 */ W32((u32)(r_edx+0x68u), 0x0u);
L_007595b3:; BB(0x007595b3);
    /* 007595b3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007595b6: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 007595b9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007595bb: je 0x7595cc */ if (fZ) goto L_007595cc;
L_007595bd:; BB(0x007595bd);
    /* 007595bd: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7595c2u); f_007127b0();
    /* 007595c2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007595c5: mov dword ptr [eax + 0x54], 0 */ W32((u32)(r_eax+0x54u), 0x0u);
L_007595cc:; BB(0x007595cc);
    /* 007595cc: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 007595cf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007595d1: je 0x7595e2 */ if (fZ) goto L_007595e2;
L_007595d3:; BB(0x007595d3);
    /* 007595d3: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x7595d8u); f_0073d160();
    /* 007595d8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007595db: mov dword ptr [eax + 0x50], 0 */ W32((u32)(r_eax+0x50u), 0x0u);
L_007595e2:; BB(0x007595e2);
    /* 007595e2: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 007595e5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007595e7: je 0x7595f8 */ if (fZ) goto L_007595f8;
L_007595e9:; BB(0x007595e9);
    /* 007595e9: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7595eeu); f_007127b0();
    /* 007595ee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007595f1: mov dword ptr [eax + 0x64], 0 */ W32((u32)(r_eax+0x64u), 0x0u);
L_007595f8:; BB(0x007595f8);
    /* 007595f8: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 007595fb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007595fd: je 0x75960e */ if (fZ) goto L_0075960e;
L_007595ff:; BB(0x007595ff);
    /* 007595ff: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x759604u); f_007127b0();
    /* 00759604: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759607: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
L_0075960e:; BB(0x0075960e);
    /* 0075960e: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00759611: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00759613: je 0x759624 */ if (fZ) goto L_00759624;
L_00759615:; BB(0x00759615);
    /* 00759615: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75961au); f_007127b0();
    /* 0075961a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075961d: mov dword ptr [eax + 0x58], 0 */ W32((u32)(r_eax+0x58u), 0x0u);
L_00759624:; BB(0x00759624);
    /* 00759624: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 00759627: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00759629: je 0x75963a */ if (fZ) goto L_0075963a;
L_0075962b:; BB(0x0075962b);
    /* 0075962b: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x759630u); f_007127b0();
    /* 00759630: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759633: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_0075963a:; BB(0x0075963a);
    /* 0075963a: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0075963d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075963f: je 0x759650 */ if (fZ) goto L_00759650;
L_00759641:; BB(0x00759641);
    /* 00759641: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x759646u); f_007127b0();
    /* 00759646: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759649: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
L_00759650:; BB(0x00759650);
    /* 00759650: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00759653: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00759655: je 0x759cf2 */ if (fZ) goto L_00759cf2;
L_0075965b:; BB(0x0075965b);
    /* 0075965b: push 0x7e */ { u32 v = 0x7eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075965d: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x759662u); f_0073ec50();
    /* 00759662: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00759663: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00759666: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 00759669: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0075966b: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 0075966e: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00759671: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 00759674: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00759677: mov dword ptr [ebx + 0x50], 6 */ W32((u32)(r_ebx+0x50u), 0x6u);
    /* 0075967e: mov edx, dword ptr [esi + 0x4c] */ r_edx = R32((u32)(r_esi+0x4cu));
    /* 00759681: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00759683: je 0x759cdf */ if (fZ) goto L_00759cdf;
L_00759689:; BB(0x00759689);
    /* 00759689: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00759690: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00759695: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 00759698: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0075969f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007596a1: je 0x7596aa */ if (fZ) goto L_007596aa;
L_007596a3:; BB(0x007596a3);
    /* 007596a3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007596a5: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x7596aau); f_00760acc();
L_007596aa:; BB(0x007596aa);
    /* 007596aa: mov eax, esi */ r_eax = r_esi;
    /* 007596ac: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 007596af: call 0x73605c */ r_esp -= 4; W32(r_esp, 0x7596b4u); f_0073605c();
    /* 007596b4: mov eax, esi */ r_eax = r_esi;
    /* 007596b6: mov byte ptr [eax + 0x1c], 5 */ W8((u32)(r_eax+0x1cu), 0x5u);
    /* 007596ba: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007596bd: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 007596c0: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 007596c7: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007596c9: je 0x7596e6 */ if (fZ) goto L_007596e6;
L_007596cb:; BB(0x007596cb);
    /* 007596cb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007596ce: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007596d1: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007596d4: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 007596d8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007596db: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007596e2: mov esp, ebp */ r_esp = r_ebp;
    /* 007596e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007596e5: ret  */ FN_RET(0x0075957a); r_esp += 4; return;
L_007596e6:; BB(0x007596e6);
    /* 007596e6: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007596e8: je 0x759866 */ if (fZ) goto L_00759866;
L_007596ee:; BB(0x007596ee);
    /* 007596ee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007596f1: mov dword ptr [eax + 0x34], 1 */ W32((u32)(r_eax+0x34u), 0x1u);
    /* 007596f8: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x7596fdu); f_007365f4();
    /* 007596fd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759700: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 00759703: jmp 0x759866 */ goto L_00759866;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x0075957a); r_esp += 4; return;
L_00759cdf:; BB(0x00759cdf);
    /* 00759cdf: mov ecx, esi */ r_ecx = r_esi;
    /* 00759ce1: call 0x759e10 */ r_esp -= 4; W32(r_esp, 0x759ce6u); f_00759e10();
    /* 00759ce6: mov edx, eax */ r_edx = r_eax;
    /* 00759ce8: mov ecx, esi */ r_ecx = r_esi;
    /* 00759cea: mov dword ptr [ecx + 0x4c], edx */ W32((u32)(r_ecx+0x4cu), r_edx);
    /* 00759ced: jmp 0x759689 */ goto L_00759689;
L_00759cf2:; BB(0x00759cf2);
    /* 00759cf2: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 00759cf9: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 00759cfb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x759d00u); f_005caba4();
    /* 00759d00: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00759d03: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00759d06: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00759d09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00759d0b: je 0x759d55 */ if (fZ) goto L_00759d55;
L_00759d0d:; BB(0x00759d0d);
    /* 00759d0d: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
    /* 00759d14: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00759d1b: push 0x7e */ { u32 v = 0x7eu; r_esp -= 4; W32(r_esp, v); }
    /* 00759d1d: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x759d22u); f_0073ec50();
    /* 00759d22: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00759d23: push 0x974290 */ { u32 v = 0x974290u; r_esp -= 4; W32(r_esp, v); }
    /* 00759d28: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00759d2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00759d2c: call 0x714468 */ r_esp -= 4; W32(r_esp, 0x759d31u); f_00714468();
    /* 00759d31: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_00759d38:; BB(0x00759d38);
    /* 00759d38: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00759d3f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00759d42: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759d45: push dword ptr [eax + 0x38] */ { u32 v = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00759d48: mov dword ptr [eax + 0x40], ecx */ W32((u32)(r_eax+0x40u), r_ecx);
    /* 00759d4b: call 0x714584 */ r_esp -= 4; W32(r_esp, 0x759d50u); f_00714584();
    /* 00759d50: jmp 0x75965b */ goto L_0075965b;
L_00759d55:; BB(0x00759d55);
    /* 00759d55: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00759d57: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00759d5a: jmp 0x759d38 */ goto L_00759d38;
}

void f_00759592(void)
{
    FN_ENTER(0x00759592);
    /* 00759592: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759595: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 00759598: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075959a: je 0x7595b3 */ if (fZ) goto L_007595b3;
L_0075959c:; BB(0x0075959c);
    /* 0075959c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007595a0: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007595a5: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 007595a9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007595ac: mov dword ptr [edx + 0x68], 0 */ W32((u32)(r_edx+0x68u), 0x0u);
L_007595b3:; BB(0x007595b3);
    /* 007595b3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007595b6: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 007595b9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007595bb: je 0x7595cc */ if (fZ) goto L_007595cc;
L_007595bd:; BB(0x007595bd);
    /* 007595bd: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7595c2u); f_007127b0();
    /* 007595c2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007595c5: mov dword ptr [eax + 0x54], 0 */ W32((u32)(r_eax+0x54u), 0x0u);
L_007595cc:; BB(0x007595cc);
    /* 007595cc: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 007595cf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007595d1: je 0x7595e2 */ if (fZ) goto L_007595e2;
L_007595d3:; BB(0x007595d3);
    /* 007595d3: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x7595d8u); f_0073d160();
    /* 007595d8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007595db: mov dword ptr [eax + 0x50], 0 */ W32((u32)(r_eax+0x50u), 0x0u);
L_007595e2:; BB(0x007595e2);
    /* 007595e2: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 007595e5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007595e7: je 0x7595f8 */ if (fZ) goto L_007595f8;
L_007595e9:; BB(0x007595e9);
    /* 007595e9: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7595eeu); f_007127b0();
    /* 007595ee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007595f1: mov dword ptr [eax + 0x64], 0 */ W32((u32)(r_eax+0x64u), 0x0u);
L_007595f8:; BB(0x007595f8);
    /* 007595f8: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 007595fb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007595fd: je 0x75960e */ if (fZ) goto L_0075960e;
L_007595ff:; BB(0x007595ff);
    /* 007595ff: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x759604u); f_007127b0();
    /* 00759604: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759607: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
L_0075960e:; BB(0x0075960e);
    /* 0075960e: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00759611: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00759613: je 0x759624 */ if (fZ) goto L_00759624;
L_00759615:; BB(0x00759615);
    /* 00759615: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75961au); f_007127b0();
    /* 0075961a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075961d: mov dword ptr [eax + 0x58], 0 */ W32((u32)(r_eax+0x58u), 0x0u);
L_00759624:; BB(0x00759624);
    /* 00759624: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 00759627: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00759629: je 0x75963a */ if (fZ) goto L_0075963a;
L_0075962b:; BB(0x0075962b);
    /* 0075962b: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x759630u); f_007127b0();
    /* 00759630: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759633: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_0075963a:; BB(0x0075963a);
    /* 0075963a: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0075963d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075963f: je 0x759650 */ if (fZ) goto L_00759650;
L_00759641:; BB(0x00759641);
    /* 00759641: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x759646u); f_007127b0();
    /* 00759646: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759649: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
L_00759650:; BB(0x00759650);
    /* 00759650: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00759653: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00759655: je 0x759cf2 */ if (fZ) goto L_00759cf2;
L_0075965b:; BB(0x0075965b);
    /* 0075965b: push 0x7e */ { u32 v = 0x7eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075965d: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x759662u); f_0073ec50();
    /* 00759662: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00759663: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00759666: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 00759669: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0075966b: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 0075966e: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00759671: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 00759674: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00759677: mov dword ptr [ebx + 0x50], 6 */ W32((u32)(r_ebx+0x50u), 0x6u);
    /* 0075967e: mov edx, dword ptr [esi + 0x4c] */ r_edx = R32((u32)(r_esi+0x4cu));
    /* 00759681: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00759683: je 0x759cdf */ if (fZ) goto L_00759cdf;
L_00759689:; BB(0x00759689);
    /* 00759689: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00759690: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00759695: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 00759698: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0075969f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007596a1: je 0x7596aa */ if (fZ) goto L_007596aa;
L_007596a3:; BB(0x007596a3);
    /* 007596a3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007596a5: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x7596aau); f_00760acc();
L_007596aa:; BB(0x007596aa);
    /* 007596aa: mov eax, esi */ r_eax = r_esi;
    /* 007596ac: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 007596af: call 0x73605c */ r_esp -= 4; W32(r_esp, 0x7596b4u); f_0073605c();
    /* 007596b4: mov eax, esi */ r_eax = r_esi;
    /* 007596b6: mov byte ptr [eax + 0x1c], 5 */ W8((u32)(r_eax+0x1cu), 0x5u);
    /* 007596ba: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007596bd: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 007596c0: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 007596c7: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007596c9: je 0x7596e6 */ if (fZ) goto L_007596e6;
L_007596cb:; BB(0x007596cb);
    /* 007596cb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007596ce: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007596d1: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007596d4: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 007596d8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007596db: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007596e2: mov esp, ebp */ r_esp = r_ebp;
    /* 007596e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007596e5: ret  */ FN_RET(0x00759592); r_esp += 4; return;
L_007596e6:; BB(0x007596e6);
    /* 007596e6: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007596e8: je 0x759866 */ if (fZ) goto L_00759866;
L_007596ee:; BB(0x007596ee);
    /* 007596ee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007596f1: mov dword ptr [eax + 0x34], 1 */ W32((u32)(r_eax+0x34u), 0x1u);
    /* 007596f8: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x7596fdu); f_007365f4();
    /* 007596fd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759700: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 00759703: jmp 0x759866 */ goto L_00759866;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x00759592); r_esp += 4; return;
L_00759cdf:; BB(0x00759cdf);
    /* 00759cdf: mov ecx, esi */ r_ecx = r_esi;
    /* 00759ce1: call 0x759e10 */ r_esp -= 4; W32(r_esp, 0x759ce6u); f_00759e10();
    /* 00759ce6: mov edx, eax */ r_edx = r_eax;
    /* 00759ce8: mov ecx, esi */ r_ecx = r_esi;
    /* 00759cea: mov dword ptr [ecx + 0x4c], edx */ W32((u32)(r_ecx+0x4cu), r_edx);
    /* 00759ced: jmp 0x759689 */ goto L_00759689;
L_00759cf2:; BB(0x00759cf2);
    /* 00759cf2: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 00759cf9: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 00759cfb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x759d00u); f_005caba4();
    /* 00759d00: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00759d03: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00759d06: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00759d09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00759d0b: je 0x759d55 */ if (fZ) goto L_00759d55;
L_00759d0d:; BB(0x00759d0d);
    /* 00759d0d: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
    /* 00759d14: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00759d1b: push 0x7e */ { u32 v = 0x7eu; r_esp -= 4; W32(r_esp, v); }
    /* 00759d1d: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x759d22u); f_0073ec50();
    /* 00759d22: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00759d23: push 0x974290 */ { u32 v = 0x974290u; r_esp -= 4; W32(r_esp, v); }
    /* 00759d28: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00759d2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00759d2c: call 0x714468 */ r_esp -= 4; W32(r_esp, 0x759d31u); f_00714468();
    /* 00759d31: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_00759d38:; BB(0x00759d38);
    /* 00759d38: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00759d3f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00759d42: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759d45: push dword ptr [eax + 0x38] */ { u32 v = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00759d48: mov dword ptr [eax + 0x40], ecx */ W32((u32)(r_eax+0x40u), r_ecx);
    /* 00759d4b: call 0x714584 */ r_esp -= 4; W32(r_esp, 0x759d50u); f_00714584();
    /* 00759d50: jmp 0x75965b */ goto L_0075965b;
L_00759d55:; BB(0x00759d55);
    /* 00759d55: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00759d57: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00759d5a: jmp 0x759d38 */ goto L_00759d38;
}

void f_007596ba(void)
{
    FN_ENTER(0x007596ba);
    /* 007596ba: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007596bd: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 007596c0: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 007596c7: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007596c9: je 0x7596e6 */ if (fZ) goto L_007596e6;
L_007596cb:; BB(0x007596cb);
    /* 007596cb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007596ce: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007596d1: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007596d4: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 007596d8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007596db: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007596e2: mov esp, ebp */ r_esp = r_ebp;
    /* 007596e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007596e5: ret  */ FN_RET(0x007596ba); r_esp += 4; return;
L_007596e6:; BB(0x007596e6);
    /* 007596e6: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007596e8: je 0x759866 */ if (fZ) goto L_00759866;
L_007596ee:; BB(0x007596ee);
    /* 007596ee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007596f1: mov dword ptr [eax + 0x34], 1 */ W32((u32)(r_eax+0x34u), 0x1u);
    /* 007596f8: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x7596fdu); f_007365f4();
    /* 007596fd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759700: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 00759703: jmp 0x759866 */ goto L_00759866;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x007596ba); r_esp += 4; return;
}

void f_00759708(void)
{
    FN_ENTER(0x00759708);
    /* 00759708: mov eax, ecx */ r_eax = r_ecx;
    /* 0075970a: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0075970d: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00759710: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00759713: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x759718u); f_007365f4();
    /* 00759718: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00759719: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075971c: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0075971f: call 0x714568 */ r_esp -= 4; W32(r_esp, 0x759724u); f_00714568();
    /* 00759724: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759727: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0075972a: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00759731: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00759733: je 0x75975e */ if (fZ) goto L_0075975e;
L_00759735:; BB(0x00759735);
    /* 00759735: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759738: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0075973b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0075973d: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x759740u); call_ind(t); }
    /* 00759740: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759743: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759746: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00759749: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075974c: mov byte ptr [eax + 0x1c], 0x2a */ W8((u32)(r_eax+0x1cu), 0x2au);
    /* 00759750: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759753: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075975a: mov esp, ebp */ r_esp = r_ebp;
    /* 0075975c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075975d: ret  */ FN_RET(0x00759708); r_esp += 4; return;
L_0075975e:; BB(0x0075975e);
    /* 0075975e: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00759760: je 0x759866 */ if (fZ) goto L_00759866;
L_00759766:; BB(0x00759766);
    /* 00759766: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x75976bu); f_007365f4();
    /* 0075976b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075976e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075976f: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00759772: call 0x77d988 */ r_esp -= 4; W32(r_esp, 0x759777u); f_0077d988();
    /* 00759777: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00759778: mov ecx, dword ptr [0xa9b418] */ r_ecx = R32((u32)(0xa9b418u));
    /* 0075977e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759781: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 00759784: call 0x77d880 */ r_esp -= 4; W32(r_esp, 0x759789u); f_0077d880();
    /* 00759789: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075978c: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0075978f: or dword ptr [eax], 2 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00759792: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 00759795: call 0x714598 */ r_esp -= 4; W32(r_esp, 0x75979au); f_00714598();
    /* 0075979a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075979d: mov byte ptr [eax + 0x1c], 3 */ W8((u32)(r_eax+0x1cu), 0x3u);
    /* 007597a1: jmp 0x759866 */ goto L_00759866;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x00759708); r_esp += 4; return;
}

void f_007597a6(void)
{
    FN_ENTER(0x007597a6);
    goto L_007597a6;
L_00759710:; BB(0x00759710);
    /* 00759710: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00759713: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x759718u); f_007365f4();
    /* 00759718: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00759719: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075971c: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0075971f: call 0x714568 */ r_esp -= 4; W32(r_esp, 0x759724u); f_00714568();
    /* 00759724: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759727: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0075972a: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00759731: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00759733: je 0x75975e */ if (fZ) goto L_0075975e;
L_00759735:; BB(0x00759735);
    /* 00759735: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759738: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0075973b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0075973d: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x759740u); call_ind(t); }
    /* 00759740: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759743: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759746: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00759749: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075974c: mov byte ptr [eax + 0x1c], 0x2a */ W8((u32)(r_eax+0x1cu), 0x2au);
    /* 00759750: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759753: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075975a: mov esp, ebp */ r_esp = r_ebp;
    /* 0075975c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075975d: ret  */ FN_RET(0x007597a6); r_esp += 4; return;
L_0075975e:; BB(0x0075975e);
    /* 0075975e: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00759760: je 0x759866 */ if (fZ) goto L_00759866;
L_00759766:; BB(0x00759766);
    /* 00759766: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x75976bu); f_007365f4();
    /* 0075976b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075976e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075976f: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00759772: call 0x77d988 */ r_esp -= 4; W32(r_esp, 0x759777u); f_0077d988();
    /* 00759777: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00759778: mov ecx, dword ptr [0xa9b418] */ r_ecx = R32((u32)(0xa9b418u));
    /* 0075977e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759781: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 00759784: call 0x77d880 */ r_esp -= 4; W32(r_esp, 0x759789u); f_0077d880();
    /* 00759789: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075978c: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0075978f: or dword ptr [eax], 2 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00759792: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 00759795: call 0x714598 */ r_esp -= 4; W32(r_esp, 0x75979au); f_00714598();
    /* 0075979a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075979d: mov byte ptr [eax + 0x1c], 3 */ W8((u32)(r_eax+0x1cu), 0x3u);
    /* 007597a1: jmp 0x759866 */ goto L_00759866;
L_007597a6:; BB(0x007597a6);
    /* 007597a6: mov eax, ecx */ r_eax = r_ecx;
    /* 007597a8: mov eax, dword ptr [eax + 0x38] */ r_eax = R32((u32)(r_eax+0x38u));
    /* 007597ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007597ad: je 0x7597bb */ if (fZ) goto L_007597bb;
L_007597af:; BB(0x007597af);
    /* 007597af: and dword ptr [eax], 0xfffffffd */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 007597b2: mov eax, ecx */ r_eax = r_ecx;
    /* 007597b4: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_007597bb:; BB(0x007597bb);
    /* 007597bb: mov eax, ecx */ r_eax = r_ecx;
    /* 007597bd: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 007597c0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007597c2: je 0x7597d3 */ if (fZ) goto L_007597d3;
L_007597c4:; BB(0x007597c4);
    /* 007597c4: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x7597c9u); f_0073d160();
    /* 007597c9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007597cc: mov dword ptr [eax + 0x50], 0 */ W32((u32)(r_eax+0x50u), 0x0u);
L_007597d3:; BB(0x007597d3);
    /* 007597d3: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 007597d6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007597d8: je 0x7597e9 */ if (fZ) goto L_007597e9;
L_007597da:; BB(0x007597da);
    /* 007597da: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7597dfu); f_007127b0();
    /* 007597df: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007597e2: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
L_007597e9:; BB(0x007597e9);
    /* 007597e9: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 007597ec: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 007597ef: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007597f1: je 0x759dab */ if (fZ) goto L_00759dab;
L_007597f7:; BB(0x007597f7);
    /* 007597f7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007597fa: call 0x714598 */ r_esp -= 4; W32(r_esp, 0x7597ffu); f_00714598();
    /* 007597ff: push 0x7a */ { u32 v = 0x7au; r_esp -= 4; W32(r_esp, v); }
    /* 00759801: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x759806u); f_0073ec50();
    /* 00759806: mov ebx, eax */ r_ebx = r_eax;
    /* 00759808: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 0075980a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75980fu); f_0079317c();
    /* 0075980f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00759810: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00759812: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00759813: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x759818u); f_00735460();
    /* 00759818: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0075981b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075981e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00759820:; BB(0x00759820);
    /* 00759820: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00759821: call 0x77d8d0 */ r_esp -= 4; W32(r_esp, 0x759826u); f_0077d8d0();
    /* 00759826: mov edi, eax */ r_edi = r_eax;
    /* 00759828: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075982b: mov ecx, edi */ r_ecx = r_edi;
    /* 0075982d: call 0x77d910 */ r_esp -= 4; W32(r_esp, 0x759832u); f_0077d910();
    /* 00759832: mov ebx, eax */ r_ebx = r_eax;
    /* 00759834: mov ecx, edi */ r_ecx = r_edi;
    /* 00759836: call 0x77d948 */ r_esp -= 4; W32(r_esp, 0x75983bu); f_0077d948();
    /* 0075983b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075983d: je 0x75984d */ if (fZ) goto L_0075984d;
L_0075983f:; BB(0x0075983f);
    /* 0075983f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00759842: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00759843: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 00759845: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00759846: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75984bu); f_00735c90();
    /* 0075984b: jmp 0x759859 */ goto L_00759859;
L_0075984d:; BB(0x0075984d);
    /* 0075984d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00759850: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00759851: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 00759853: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00759854: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x759859u); f_00735c90();
L_00759859:; BB(0x00759859);
    /* 00759859: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075985c: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075985f: jl 0x759820 */ if ((fS!=fO)) goto L_00759820;
L_00759861:; BB(0x00759861);
    /* 00759861: jmp 0x759d5c */ goto L_00759d5c;
L_00759866:; BB(0x00759866);
    /* 00759866: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00759869: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075986c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075986f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00759872: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00759879: mov esp, ebp */ r_esp = r_ebp;
    /* 0075987b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075987c: ret  */ FN_RET(0x007597a6); r_esp += 4; return;
L_00759d5c:; BB(0x00759d5c);
    /* 00759d5c: push 0x433c0000 */ { u32 v = 0x433c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00759d61: push 0x435c0000 */ { u32 v = 0x435c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00759d66: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00759d69: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00759d70: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00759d75: mov word ptr [ecx + 0x84], ax */ W16((u32)(r_ecx+0x84u), (u16)r_eax);
    /* 00759d7c: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x759d81u); f_007361d0();
    /* 00759d81: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00759d84: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x759d89u); f_00736458();
    /* 00759d89: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00759d8c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00759d8f: movsx edx, word ptr [eax + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x20u));
    /* 00759d93: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00759d94: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x759d99u); f_00736510();
    /* 00759d99: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00759d9c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759d9f: mov byte ptr [edx + 0x1c], 2 */ W8((u32)(r_edx+0x1cu), 0x2u);
    /* 00759da3: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 00759da6: jmp 0x759710 */ goto L_00759710;
L_00759dab:; BB(0x00759dab);
    /* 00759dab: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 00759db2: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 00759db4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x759db9u); f_005caba4();
    /* 00759db9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00759dbc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00759dbf: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00759dc2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00759dc4: je 0x759e06 */ if (fZ) goto L_00759e06;
L_00759dc6:; BB(0x00759dc6);
    /* 00759dc6: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
    /* 00759dcd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00759dd4: push 0x7e */ { u32 v = 0x7eu; r_esp -= 4; W32(r_esp, v); }
    /* 00759dd6: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x759ddbu); f_0073ec50();
    /* 00759ddb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00759ddc: push 0x974298 */ { u32 v = 0x974298u; r_esp -= 4; W32(r_esp, v); }
    /* 00759de1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00759de4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00759de5: call 0x714468 */ r_esp -= 4; W32(r_esp, 0x759deau); f_00714468();
    /* 00759dea: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_00759df1:; BB(0x00759df1);
    /* 00759df1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00759df8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00759dfb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00759dfe: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 00759e01: jmp 0x7597f7 */ goto L_007597f7;
L_00759e06:; BB(0x00759e06);
    /* 00759e06: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00759e08: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00759e0b: jmp 0x759df1 */ goto L_00759df1;
}

void f_00759e10(void) /* sub_759E10 */
{
    FN_ENTER(0x00759e10);
    /* 00759e10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00759e11: push 0x7b */ { u32 v = 0x7bu; r_esp -= 4; W32(r_esp, v); }
    /* 00759e13: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x759e18u); f_0073ec50();
    /* 00759e18: mov edi, eax */ r_edi = r_eax;
    /* 00759e1a: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00759e1c: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x759e21u); f_0079317c();
    /* 00759e21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00759e22: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00759e24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00759e25: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x759e2au); f_00735460();
    /* 00759e2a: mov edi, eax */ r_edi = r_eax;
    /* 00759e2c: push 0xc6 */ { u32 v = 0xc6u; r_esp -= 4; W32(r_esp, v); }
    /* 00759e31: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x759e36u); f_0079317c();
    /* 00759e36: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00759e39: mov edx, 6 */ r_edx = 0x6u;
    /* 00759e3e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00759e3f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00759e40: mov ecx, edi */ r_ecx = r_edi;
    /* 00759e42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00759e43: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x759e48u); f_00735c90();
    /* 00759e48: push 0xc7 */ { u32 v = 0xc7u; r_esp -= 4; W32(r_esp, v); }
    /* 00759e4d: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x759e52u); f_0079317c();
    /* 00759e52: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00759e53: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00759e55: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00759e57: mov ecx, edi */ r_ecx = r_edi;
    /* 00759e59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00759e5a: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x759e5fu); f_00735c90();
    /* 00759e5f: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00759e64: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x759e69u); f_0079317c();
    /* 00759e69: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00759e6a: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00759e6c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00759e6e: mov ecx, edi */ r_ecx = r_edi;
    /* 00759e70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00759e71: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x759e76u); f_00735c90();
    /* 00759e76: push 0xc9 */ { u32 v = 0xc9u; r_esp -= 4; W32(r_esp, v); }
    /* 00759e7b: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x759e80u); f_0079317c();
    /* 00759e80: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00759e81: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 00759e83: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00759e85: mov ecx, edi */ r_ecx = r_edi;
    /* 00759e87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00759e88: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x759e8du); f_00735c90();
    /* 00759e8d: push 0xca */ { u32 v = 0xcau; r_esp -= 4; W32(r_esp, v); }
    /* 00759e92: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x759e97u); f_0079317c();
    /* 00759e97: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00759e98: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 00759e9a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00759e9c: mov ecx, edi */ r_ecx = r_edi;
    /* 00759e9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00759e9f: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x759ea4u); f_00735c90();
    /* 00759ea4: push 0xcb */ { u32 v = 0xcbu; r_esp -= 4; W32(r_esp, v); }
    /* 00759ea9: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x759eaeu); f_0079317c();
    /* 00759eae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00759eaf: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00759eb1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00759eb3: mov ecx, edi */ r_ecx = r_edi;
    /* 00759eb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00759eb6: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x759ebbu); f_00735c90();
    /* 00759ebb: push 0x43410000 */ { u32 v = 0x43410000u; r_esp -= 4; W32(r_esp, v); }
    /* 00759ec0: movzx edx, word ptr [edi + 0x84] */ r_edx = (u32)R16((u32)(r_edi+0x84u));
    /* 00759ec7: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00759ecd: mov word ptr [edi + 0x84], dx */ W16((u32)(r_edi+0x84u), (u16)r_edx);
    /* 00759ed4: mov ecx, edi */ r_ecx = r_edi;
    /* 00759ed6: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x759edbu); f_00736138();
    /* 00759edb: mov ecx, edi */ r_ecx = r_edi;
    /* 00759edd: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x759ee2u); f_00736458();
    /* 00759ee2: mov eax, edi */ r_eax = r_edi;
    /* 00759ee4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00759ee5: ret  */ FN_RET(0x00759e10); r_esp += 4; return;
}

void f_00759ee8(void) /* sub_759EE8 */
{
    FN_ENTER(0x00759ee8);
    /* 00759ee8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00759ee9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00759eea: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00759eec: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00759eee: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x759ef3u); f_0073ec50();
    /* 00759ef3: mov edi, eax */ r_edi = r_eax;
    /* 00759ef5: push 0xc6 */ { u32 v = 0xc6u; r_esp -= 4; W32(r_esp, v); }
    /* 00759efa: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x759effu); f_0079317c();
    /* 00759eff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00759f00: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00759f02: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00759f03: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x759f08u); f_00735460();
    /* 00759f08: mov edi, eax */ r_edi = r_eax;
    /* 00759f0a: push 0xd1 */ { u32 v = 0xd1u; r_esp -= 4; W32(r_esp, v); }
    /* 00759f0f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x759f14u); f_0079317c();
    /* 00759f14: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00759f17: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00759f19: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00759f1b: mov ecx, edi */ r_ecx = r_edi;
    /* 00759f1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00759f1e: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x759f23u); f_00735c90();
    /* 00759f23: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 00759f26: mov ebp, dword ptr [edx] */ r_ebp = R32((u32)(r_edx));
    /* 00759f28: test ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00759f2e: je 0x759f49 */ if (fZ) goto L_00759f49;
L_00759f30:; BB(0x00759f30);
    /* 00759f30: push 0xd2 */ { u32 v = 0xd2u; r_esp -= 4; W32(r_esp, v); }
    /* 00759f35: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x759f3au); f_0079317c();
    /* 00759f3a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00759f3b: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00759f3d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00759f3f: mov ecx, edi */ r_ecx = r_edi;
    /* 00759f41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00759f42: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x759f47u); f_00735c90();
    /* 00759f47: jmp 0x759f60 */ goto L_00759f60;
L_00759f49:; BB(0x00759f49);
    /* 00759f49: push 0xd2 */ { u32 v = 0xd2u; r_esp -= 4; W32(r_esp, v); }
    /* 00759f4e: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x759f53u); f_0079317c();
    /* 00759f53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00759f54: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00759f56: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00759f58: mov ecx, edi */ r_ecx = r_edi;
    /* 00759f5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00759f5b: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x759f60u); f_00735ee0();
L_00759f60:; BB(0x00759f60);
    /* 00759f60: movsx edx, byte ptr [0xa9b414] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa9b414u));
    /* 00759f67: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00759f69: jle 0x759fb3 */ if ((fZ||fS!=fO)) goto L_00759fb3;
L_00759f6b:; BB(0x00759f6b);
    /* 00759f6b: push 0xd3 */ { u32 v = 0xd3u; r_esp -= 4; W32(r_esp, v); }
    /* 00759f70: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x759f75u); f_0079317c();
    /* 00759f75: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00759f76: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00759f78: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00759f7a: mov ecx, edi */ r_ecx = r_edi;
    /* 00759f7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00759f7d: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x759f82u); f_00735c90();
L_00759f82:; BB(0x00759f82);
    /* 00759f82: push 0x43000000 */ { u32 v = 0x43000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00759f87: mov ecx, edi */ r_ecx = r_edi;
    /* 00759f89: movzx edx, word ptr [edi + 0x84] */ r_edx = (u32)R16((u32)(r_edi+0x84u));
    /* 00759f90: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00759f96: mov word ptr [edi + 0x84], dx */ W16((u32)(r_edi+0x84u), (u16)r_edx);
    /* 00759f9d: push 0x43410000 */ { u32 v = 0x43410000u; r_esp -= 4; W32(r_esp, v); }
    /* 00759fa2: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x759fa7u); f_007361d0();
    /* 00759fa7: mov ecx, edi */ r_ecx = r_edi;
    /* 00759fa9: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x759faeu); f_00736458();
    /* 00759fae: mov eax, edi */ r_eax = r_edi;
    /* 00759fb0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00759fb1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00759fb2: ret  */ FN_RET(0x00759ee8); r_esp += 4; return;
L_00759fb3:; BB(0x00759fb3);
    /* 00759fb3: push 0xd3 */ { u32 v = 0xd3u; r_esp -= 4; W32(r_esp, v); }
    /* 00759fb8: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x759fbdu); f_0079317c();
    /* 00759fbd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00759fbe: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00759fc0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00759fc2: mov ecx, edi */ r_ecx = r_edi;
    /* 00759fc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00759fc5: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x759fcau); f_00735ee0();
    /* 00759fca: jmp 0x759f82 */ goto L_00759f82;
}

void f_00759fcc(void) /* sub_759FCC */
{
    FN_ENTER(0x00759fcc);
    /* 00759fcc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00759fcd: mov ebp, esp */ r_ebp = r_esp;
    /* 00759fcf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00759fd1: push 0x8f3228 */ { u32 v = 0x8f3228u; r_esp -= 4; W32(r_esp, v); }
    /* 00759fd6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00759fdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00759fdd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00759fe4: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00759fe7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00759fea: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00759fed: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00759ff0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00759ff3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00759ff6: call 0x75a114 */ r_esp -= 4; W32(r_esp, 0x759ffbu); f_0075a114();
    /* 00759ffb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00759ffd: jne 0x75a04f */ if (!fZ) goto L_0075a04f;
L_00759fff:; BB(0x00759fff);
    /* 00759fff: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075a002: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0075a005: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075a007: je 0x75a03b */ if (fZ) goto L_0075a03b;
L_0075a009:; BB(0x0075a009);
    /* 0075a009: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x75a00eu); f_007127b0();
    /* 0075a00e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075a011: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
    /* 0075a018: push 0x7e */ { u32 v = 0x7eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075a01a: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75a01fu); f_0073ec50();
    /* 0075a01f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075a020: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075a023: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 0075a026: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0075a028: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 0075a02b: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0075a02e: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0075a031: mov esi, dword ptr [ebx + 0x40] */ r_esi = R32((u32)(r_ebx+0x40u));
    /* 0075a034: mov dword ptr [esi + 0x50], 6 */ W32((u32)(r_esi+0x50u), 0x6u);
L_0075a03b:; BB(0x0075a03b);
    /* 0075a03b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075a03e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075a041: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075a044: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075a04b: mov esp, ebp */ r_esp = r_ebp;
    /* 0075a04d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075a04e: ret  */ FN_RET(0x00759fcc); r_esp += 4; return;
L_0075a04f:; BB(0x0075a04f);
    /* 0075a04f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075a052: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0075a055: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075a057: je 0x75a072 */ if (fZ) goto L_0075a072;
L_0075a059:; BB(0x0075a059);
    /* 0075a059: call 0x714598 */ r_esp -= 4; W32(r_esp, 0x75a05eu); f_00714598();
    /* 0075a05e: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075a061: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075a064: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075a067: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075a06e: mov esp, ebp */ r_esp = r_ebp;
    /* 0075a070: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075a071: ret  */ FN_RET(0x00759fcc); r_esp += 4; return;
L_0075a072:; BB(0x0075a072);
    /* 0075a072: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0075a079: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a07b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x75a080u); f_005caba4();
    /* 0075a080: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0075a083: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075a086: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0075a089: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075a08b: je 0x75a10a */ if (fZ) goto L_0075a10a;
L_0075a08d:; BB(0x0075a08d);
    /* 0075a08d: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0075a094: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075a09b: push 0x7e */ { u32 v = 0x7eu; r_esp -= 4; W32(r_esp, v); }
    /* 0075a09d: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75a0a2u); f_0073ec50();
    /* 0075a0a2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075a0a3: push 0x9742a0 */ { u32 v = 0x9742a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a0a8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0075a0ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a0ac: call 0x714468 */ r_esp -= 4; W32(r_esp, 0x75a0b1u); f_00714468();
    /* 0075a0b1: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0075a0b8:; BB(0x0075a0b8);
    /* 0075a0b8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075a0bf: push 0xa9b3a0 */ { u32 v = 0xa9b3a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a0c4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0075a0c7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075a0ca: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 0075a0cd: call 0x714584 */ r_esp -= 4; W32(r_esp, 0x75a0d2u); f_00714584();
    /* 0075a0d2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075a0d5: push 0x7f */ { u32 v = 0x7fu; r_esp -= 4; W32(r_esp, v); }
    /* 0075a0d7: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0075a0da: mov dword ptr [edx + 0x64], 1 */ W32((u32)(r_edx+0x64u), 0x1u);
    /* 0075a0e1: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75a0e6u); f_0073ec50();
    /* 0075a0e6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075a0e7: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0075a0ea: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 0075a0ed: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0075a0ef: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 0075a0f2: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0075a0f5: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0075a0f8: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0075a0fb: mov dword ptr [ebx + 0x50], 6 */ W32((u32)(r_ebx+0x50u), 0x6u);
    /* 0075a102: mov ecx, dword ptr [esi + 0x44] */ r_ecx = R32((u32)(r_esi+0x44u));
    /* 0075a105: jmp 0x75a059 */ goto L_0075a059;
L_0075a10a:; BB(0x0075a10a);
    /* 0075a10a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075a10c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0075a10f: jmp 0x75a0b8 */ goto L_0075a0b8;
}

