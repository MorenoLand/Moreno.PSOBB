#include "protos.h"

void f_00876024(void) /* sub_876024 */
{
    FN_ENTER(0x00876024);
    /* 00876024: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00876028: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00876029: mov edi, eax */ r_edi = r_eax;
    /* 0087602b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087602d: je 0x876068 */ if (fZ) goto L_00876068;
L_0087602f:; BB(0x0087602f);
    /* 0087602f: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00876031: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00876033: je 0x87603c */ if (fZ) goto L_0087603c;
L_00876035:; BB(0x00876035);
    /* 00876035: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00876036: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x87603bu); f_00858882();
    /* 0087603b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0087603c:; BB(0x0087603c);
    /* 0087603c: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 0087603f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00876041: je 0x87604a */ if (fZ) goto L_0087604a;
L_00876043:; BB(0x00876043);
    /* 00876043: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00876044: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x876049u); f_00858882();
    /* 00876049: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0087604a:; BB(0x0087604a);
    /* 0087604a: mov edx, dword ptr [edi + 0x14] */ r_edx = R32((u32)(r_edi+0x14u));
    /* 0087604d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087604f: je 0x876058 */ if (fZ) goto L_00876058;
L_00876051:; BB(0x00876051);
    /* 00876051: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00876052: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x876057u); f_00858882();
    /* 00876057: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00876058:; BB(0x00876058);
    /* 00876058: push 0x168 */ { u32 v = 0x168u; r_esp -= 4; W32(r_esp, v); }
    /* 0087605d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0087605f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00876060: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x876065u); f_0086b688();
    /* 00876065: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00876068:; BB(0x00876068);
    /* 00876068: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0087606a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0087606b: ret  */ FN_RET(0x00876024); r_esp += 4; return;
}

void f_0087606c(void) /* sub_87606C */
{
    FN_ENTER(0x0087606c);
    /* 0087606c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0087606d: mov ebx, eax */ r_ebx = r_eax;
    /* 0087606f: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00876072: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00876075: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00876077: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00876079: jg 0x876092 */ if ((!fZ&&fS==fO)) goto L_00876092;
L_0087607b:; BB(0x0087607b);
    /* 0087607b: lea edx, [edx + eax + 0x400] */ r_edx = (u32)(r_edx+r_eax+0x400u);
    /* 00876082: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 00876085: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00876086: push dword ptr [ebx] */ { u32 v = R32((u32)(r_ebx)); r_esp -= 4; W32(r_esp, v); }
    /* 00876088: call 0x860f6c */ r_esp -= 4; W32(r_esp, 0x87608du); f_00860f6c();
    /* 0087608d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00876090: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
L_00876092:; BB(0x00876092);
    /* 00876092: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00876093: ret  */ FN_RET(0x0087606c); r_esp += 4; return;
}

void f_00876094(void) /* sub_876094 */
{
    FN_ENTER(0x00876094);
    /* 00876094: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00876095: mov edi, eax */ r_edi = r_eax;
    /* 00876097: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 0087609a: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 0087609d: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087609f: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008760a1: jg 0x8760d2 */ if ((!fZ&&fS==fO)) goto L_008760d2;
L_008760a3:; BB(0x008760a3);
    /* 008760a3: lea edx, [edx + eax + 0x20] */ r_edx = (u32)(r_edx+r_eax+0x20u);
    /* 008760a7: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
    /* 008760aa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008760ac: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008760ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008760af: push dword ptr [edi + 0x10] */ { u32 v = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008760b2: call 0x860f6c */ r_esp -= 4; W32(r_esp, 0x8760b7u); f_00860f6c();
    /* 008760b7: mov dword ptr [edi + 0x10], eax */ W32((u32)(r_edi+0x10u), r_eax);
    /* 008760ba: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 008760bd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008760bf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008760c1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008760c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008760c4: push dword ptr [edi + 0x14] */ { u32 v = R32((u32)(r_edi+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008760c7: call 0x860f6c */ r_esp -= 4; W32(r_esp, 0x8760ccu); f_00860f6c();
    /* 008760cc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008760cf: mov dword ptr [edi + 0x14], eax */ W32((u32)(r_edi+0x14u), r_eax);
L_008760d2:; BB(0x008760d2);
    /* 008760d2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008760d3: ret  */ FN_RET(0x00876094); r_esp += 4; return;
}

void f_008760d4(void) /* sub_8760D4 */
{
    FN_ENTER(0x008760d4);
    /* 008760d4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008760d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008760d9: mov ebp, eax */ r_ebp = r_eax;
    /* 008760db: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008760dd: je 0x8760f4 */ if (fZ) goto L_008760f4;
L_008760df:; BB(0x008760df);
    /* 008760df: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 008760e2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008760e4: je 0x8760ed */ if (fZ) goto L_008760ed;
L_008760e6:; BB(0x008760e6);
    /* 008760e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008760e7: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8760ecu); f_00858882();
    /* 008760ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008760ed:; BB(0x008760ed);
    /* 008760ed: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008760ee: call 0x876bc0 */ r_esp -= 4; W32(r_esp, 0x8760f3u); f_00876bc0();
    /* 008760f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008760f4:; BB(0x008760f4);
    /* 008760f4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008760f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008760f7: ret  */ FN_RET(0x008760d4); r_esp += 4; return;
}

void f_008760f8(void) /* sub_8760F8 */
{
    FN_ENTER(0x008760f8);
    /* 008760f8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008760f9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008760fa: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 008760fe: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00876101: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00876103: je 0x87612c */ if (fZ) goto L_0087612c;
L_00876105:; BB(0x00876105);
    /* 00876105: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00876108: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087610a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087610c: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 0087610f: jle 0x876123 */ if ((fZ||fS!=fO)) goto L_00876123;
L_00876111:; BB(0x00876111);
    /* 00876111: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 00876113: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00876115: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00876116: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00876117: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00876118: call 0x858c80 */ r_esp -= 4; W32(r_esp, 0x87611du); f_00858c80();
    /* 0087611d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00876120: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
L_00876123:; BB(0x00876123);
    /* 00876123: mov dword ptr [ebx + 0xc], 0 */ W32((u32)(r_ebx+0xcu), 0x0u);
    /* 0087612a: jmp 0x87612f */ goto L_0087612f;
L_0087612c:; BB(0x0087612c);
    /* 0087612c: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
L_0087612f:; BB(0x0087612f);
    /* 0087612f: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00876132: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00876134: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00876138: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087613a: jle 0x876163 */ if ((fZ||fS!=fO)) goto L_00876163;
L_0087613c:; BB(0x0087613c);
    /* 0087613c: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00876140: lea esi, [edx + eax + 0x1000] */ r_esi = (u32)(r_edx+r_eax+0x1000u);
    /* 00876147: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00876149: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087614b: je 0x87616a */ if (fZ) goto L_0087616a;
L_0087614d:; BB(0x0087614d);
    /* 0087614d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0087614e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0087614f: call 0x860f6c */ r_esp -= 4; W32(r_esp, 0x876154u); f_00860f6c();
    /* 00876154: mov edx, eax */ r_edx = r_eax;
    /* 00876156: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00876159: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
L_0087615b:; BB(0x0087615b);
    /* 0087615b: mov dword ptr [ebx + 4], esi */ W32((u32)(r_ebx+0x4u), r_esi);
    /* 0087615e: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00876161: jmp 0x876165 */ goto L_00876165;
L_00876163:; BB(0x00876163);
    /* 00876163: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
L_00876165:; BB(0x00876165);
    /* 00876165: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00876167: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00876168: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00876169: ret  */ FN_RET(0x008760f8); r_esp += 4; return;
L_0087616a:; BB(0x0087616a);
    /* 0087616a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0087616b: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x876170u); f_00859c55();
    /* 00876170: mov edx, eax */ r_edx = r_eax;
    /* 00876172: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00876175: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 00876177: jmp 0x87615b */ goto L_0087615b;
}

void f_0087617c(void) /* sub_87617C */
{
    FN_ENTER(0x0087617c);
    /* 0087617c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00876180: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00876184: add eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00876187: cmp eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0087618a: jle 0x876192 */ if ((fZ||fS!=fO)) goto L_00876192;
L_0087618c:; BB(0x0087618c);
    /* 0087618c: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00876191: ret  */ FN_RET(0x0087617c); r_esp += 4; return;
L_00876192:; BB(0x00876192);
    /* 00876192: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00876195: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00876197: ret  */ FN_RET(0x0087617c); r_esp += 4; return;
}

void f_00876198(void) /* sub_876198 */
{
    FN_ENTER(0x00876198);
    /* 00876198: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0087619c: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 008761a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008761a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008761a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008761a3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008761a4: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008761a7: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 008761ab: mov ebx, eax */ r_ebx = r_eax;
    /* 008761ad: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 008761af: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 008761b3: mov ebp, dword ptr [ebx + 0xc] */ r_ebp = R32((u32)(r_ebx+0xcu));
    /* 008761b6: lea edx, [ebp + ecx] */ r_edx = (u32)(r_ebp+r_ecx);
    /* 008761ba: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 008761be: mov edi, dword ptr [ebx + 0x14] */ r_edi = R32((u32)(r_ebx+0x14u));
    /* 008761c1: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 008761c5: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 008761c8: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008761ca: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008761cc: jne 0x876269 */ if (!fZ) goto L_00876269;
L_008761d2:; BB(0x008761d2);
    /* 008761d2: cmp edx, 0x1b */ {  u32 a = r_edx; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008761d5: jl 0x876272 */ if ((fS!=fO)) goto L_00876272;
L_008761db:; BB(0x008761db);
    /* 008761db: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 008761df: mov edi, 0x99a684 */ r_edi = 0x99a684u;
    /* 008761e4: mov ecx, 4 */ r_ecx = 0x4u;
    /* 008761e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008761eb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 008761ed: je 0x876200 */ if (fZ) goto L_00876200;
L_008761ef:; BB(0x008761ef);
    /* 008761ef: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008761f1: sub al, byte ptr [edi] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_edi)); u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fC = (a < b); }
    /* 008761f3: jne 0x876200 */ if (!fZ) goto L_00876200;
L_008761f5:; BB(0x008761f5);
    /* 008761f5: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008761f8: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008761fb: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fC = (a < b); }
    /* 008761fe: jne 0x8761ef */ if (!fZ) goto L_008761ef;
L_00876200:; BB(0x00876200);
    /* 00876200: seta al */ r_eax = (r_eax & 0xffffff00u) | ((((!fC&&!fZ)) ? 1 : 0) & 0xffu);
    /* 00876203: setb cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fC) ? 1 : 0) & 0xffu);
    /* 00876206: sub al, cl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ecx; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00876208: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0087620b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087620d: jne 0x87651f */ if (!fZ) goto L_0087651f;
L_00876213:; BB(0x00876213);
    /* 00876213: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00876217: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 0087621b: movzx ecx, byte ptr [ecx + ebp + 0x1a] */ r_ecx = (u32)R8((u32)(r_ecx+r_ebp+0x1au));
    /* 00876220: lea edi, [ecx + 0x1b] */ r_edi = (u32)(r_ecx+0x1bu);
    /* 00876223: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00876225: jl 0x876272 */ if ((fS!=fO)) goto L_00876272;
L_00876227:; BB(0x00876227);
    /* 00876227: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00876229: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087622b: jle 0x87655b */ if ((fZ||fS!=fO)) goto L_0087655b;
L_00876231:; BB(0x00876231);
    /* 00876231: mov esi, dword ptr [ebx + 0x18] */ r_esi = R32((u32)(r_ebx+0x18u));
    /* 00876234: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00876238: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0087623c: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00876240: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00876244: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
L_00876248:; BB(0x00876248);
    /* 00876248: movzx edi, byte ptr [ebp + eax + 0x1b] */ r_edi = (u32)R8((u32)(r_ebp+r_eax+0x1bu));
    /* 0087624d: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087624f: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00876250: mov dword ptr [ebx + 0x18], esi */ W32((u32)(r_ebx+0x18u), r_esi);
    /* 00876253: movzx edi, byte ptr [ecx + edx + 0x1a] */ r_edi = (u32)R8((u32)(r_ecx+r_edx+0x1au));
    /* 00876258: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087625a: jl 0x876248 */ if ((fS!=fO)) goto L_00876248;
L_0087625c:; BB(0x0087625c);
    /* 0087625c: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 00876260: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
L_00876264:; BB(0x00876264);
    /* 00876264: mov dword ptr [ebx + 0x14], edi */ W32((u32)(r_ebx+0x14u), r_edi);
    /* 00876267: jmp 0x87626c */ goto L_0087626c;
L_00876269:; BB(0x00876269);
    /* 00876269: mov esi, dword ptr [ebx + 0x18] */ r_esi = R32((u32)(r_ebx+0x18u));
L_0087626c:; BB(0x0087626c);
    /* 0087626c: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087626e: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00876270: jle 0x87627c */ if ((fZ||fS!=fO)) goto L_0087627c;
L_00876272:; BB(0x00876272);
    /* 00876272: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00876274: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00876277: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00876278: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00876279: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0087627a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0087627b: ret  */ FN_RET(0x00876198); r_esp += 4; return;
L_0087627c:; BB(0x0087627c);
    /* 0087627c: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00876280: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00876284: lea esi, [ecx + ebp + 0x16] */ r_esi = (u32)(r_ecx+r_ebp+0x16u);
    /* 00876288: mov dword ptr [esp + 0x2c], esi */ W32((u32)(r_esp+0x2cu), r_esi);
    /* 0087628c: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 0087628e: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 00876292: mov ecx, esi */ r_ecx = r_esi;
    /* 00876294: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 0087629a: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0087629e: mov ebp, dword ptr [ebx + 0x14] */ r_ebp = R32((u32)(r_ebx+0x14u));
    /* 008762a1: mov esi, dword ptr [ebx + 0x18] */ r_esi = R32((u32)(r_ebx+0x18u));
    /* 008762a4: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 008762a7: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 008762ab: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008762ad: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 008762b1: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 008762b5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008762b7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008762b9: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 008762bd: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 008762c1: mov byte ptr [ebp + esi + 0x16], cl */ W8((u32)(r_ebp+r_esi+0x16u), (u8)r_ecx);
    /* 008762c5: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 008762c8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008762ca: mov byte ptr [edi + 0x17], cl */ W8((u32)(r_edi+0x17u), (u8)r_ecx);
    /* 008762cd: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 008762d0: mov byte ptr [ebp + 0x18], cl */ W8((u32)(r_ebp+0x18u), (u8)r_ecx);
    /* 008762d3: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 008762d6: mov byte ptr [ebp + 0x19], cl */ W8((u32)(r_ebp+0x19u), (u8)r_ecx);
    /* 008762d9: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 008762dd: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008762df: jle 0x87657f */ if ((fZ||fS!=fO)) goto L_0087657f;
L_008762e5:; BB(0x008762e5);
    /* 008762e5: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008762e8: jl 0x876573 */ if ((fS!=fO)) goto L_00876573;
L_008762ee:; BB(0x008762ee);
    /* 008762ee: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 008762f1: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 008762f5: lea ecx, [ebp - 6] */ r_ecx = (u32)(r_ebp+0xfffffffau);
    /* 008762f8: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 008762fc: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00876300: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
L_00876304:; BB(0x00876304);
    /* 00876304: mov ebx, eax */ r_ebx = r_eax;
    /* 00876306: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00876309: shr eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0087630c: movzx edi, byte ptr [edx + esi] */ r_edi = (u32)R8((u32)(r_edx+r_esi));
    /* 00876310: xor eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00876312: xor ebx, dword ptr [eax*4 + 0xa24e60] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax*4+0xa24e60u)); u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00876319: mov edi, ebx */ r_edi = r_ebx;
    /* 0087631b: shl edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0087631e: shr ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00876321: movzx eax, byte ptr [edx + esi + 1] */ r_eax = (u32)R8((u32)(r_edx+r_esi+0x1u));
    /* 00876326: xor ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00876328: xor edi, dword ptr [ebx*4 + 0xa24e60] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx*4+0xa24e60u)); u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0087632f: mov eax, edi */ r_eax = r_edi;
    /* 00876331: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00876334: shr edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00876337: movzx ebx, byte ptr [edx + esi + 2] */ r_ebx = (u32)R8((u32)(r_edx+r_esi+0x2u));
    /* 0087633c: xor edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0087633e: xor eax, dword ptr [edi*4 + 0xa24e60] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi*4+0xa24e60u)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00876345: mov ebx, eax */ r_ebx = r_eax;
    /* 00876347: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0087634a: shr eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0087634d: movzx edi, byte ptr [edx + esi + 3] */ r_edi = (u32)R8((u32)(r_edx+r_esi+0x3u));
    /* 00876352: xor eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00876354: xor ebx, dword ptr [eax*4 + 0xa24e60] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax*4+0xa24e60u)); u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0087635b: mov eax, ebx */ r_eax = r_ebx;
    /* 0087635d: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00876360: shr ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00876363: movzx edi, byte ptr [edx + esi + 4] */ r_edi = (u32)R8((u32)(r_edx+r_esi+0x4u));
    /* 00876368: xor ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0087636a: xor eax, dword ptr [ebx*4 + 0xa24e60] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx*4+0xa24e60u)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00876371: add esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00876374: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00876376: jle 0x876304 */ if ((fZ||fS!=fO)) goto L_00876304;
L_00876378:; BB(0x00876378);
    /* 00876378: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0087637c: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
L_00876380:; BB(0x00876380);
    /* 00876380: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00876384: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_00876388:; BB(0x00876388);
    /* 00876388: mov ebx, eax */ r_ebx = r_eax;
    /* 0087638a: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0087638d: shr eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00876390: movzx ecx, byte ptr [edi + esi] */ r_ecx = (u32)R8((u32)(r_edi+r_esi));
    /* 00876394: xor eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00876396: mov ecx, eax */ r_ecx = r_eax;
    /* 00876398: mov eax, ebx */ r_eax = r_ebx;
    /* 0087639a: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087639b: xor eax, dword ptr [ecx*4 + 0xa24e60] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx*4+0xa24e60u)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008763a2: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008763a4: jl 0x876388 */ if ((fS!=fO)) goto L_00876388;
L_008763a6:; BB(0x008763a6);
    /* 008763a6: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
L_008763aa:; BB(0x008763aa);
    /* 008763aa: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008763ac: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 008763b0: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008763b2: jle 0x876474 */ if ((fZ||fS!=fO)) goto L_00876474;
L_008763b8:; BB(0x008763b8);
    /* 008763b8: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008763bb: jl 0x87656a */ if ((fS!=fO)) goto L_0087656a;
L_008763c1:; BB(0x008763c1);
    /* 008763c1: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 008763c5: lea ecx, [esi - 6] */ r_ecx = (u32)(r_esi+0xfffffffau);
    /* 008763c8: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 008763cc: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
L_008763d0:; BB(0x008763d0);
    /* 008763d0: mov edx, eax */ r_edx = r_eax;
    /* 008763d2: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008763d5: shr eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008763d8: movzx ebx, byte ptr [ebp + edi] */ r_ebx = (u32)R8((u32)(r_ebp+r_edi));
    /* 008763dd: xor eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008763df: xor edx, dword ptr [eax*4 + 0xa24e60] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax*4+0xa24e60u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008763e6: mov ebx, edx */ r_ebx = r_edx;
    /* 008763e8: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 008763eb: shr edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008763ee: movzx eax, byte ptr [ebp + edi + 1] */ r_eax = (u32)R8((u32)(r_ebp+r_edi+0x1u));
    /* 008763f3: xor edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008763f5: xor ebx, dword ptr [edx*4 + 0xa24e60] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx*4+0xa24e60u)); u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008763fc: mov eax, ebx */ r_eax = r_ebx;
    /* 008763fe: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00876401: shr ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00876404: movzx edx, byte ptr [ebp + edi + 2] */ r_edx = (u32)R8((u32)(r_ebp+r_edi+0x2u));
    /* 00876409: xor ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0087640b: xor eax, dword ptr [ebx*4 + 0xa24e60] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx*4+0xa24e60u)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00876412: mov edx, eax */ r_edx = r_eax;
    /* 00876414: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00876417: shr eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0087641a: movzx ebx, byte ptr [ebp + edi + 3] */ r_ebx = (u32)R8((u32)(r_ebp+r_edi+0x3u));
    /* 0087641f: xor eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00876421: xor edx, dword ptr [eax*4 + 0xa24e60] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax*4+0xa24e60u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00876428: mov eax, edx */ r_eax = r_edx;
    /* 0087642a: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0087642d: shr edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00876430: movzx ebx, byte ptr [ebp + edi + 4] */ r_ebx = (u32)R8((u32)(r_ebp+r_edi+0x4u));
    /* 00876435: xor edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00876437: xor eax, dword ptr [edx*4 + 0xa24e60] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx*4+0xa24e60u)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087643e: add edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00876441: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00876443: jle 0x8763d0 */ if ((fZ||fS!=fO)) goto L_008763d0;
L_00876445:; BB(0x00876445);
    /* 00876445: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00876449: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
L_0087644d:; BB(0x0087644d);
    /* 0087644d: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
L_00876451:; BB(0x00876451);
    /* 00876451: mov ebx, eax */ r_ebx = r_eax;
    /* 00876453: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00876456: shr eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00876459: movzx ecx, byte ptr [ebp + edi] */ r_ecx = (u32)R8((u32)(r_ebp+r_edi));
    /* 0087645e: xor eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00876460: mov ecx, eax */ r_ecx = r_eax;
    /* 00876462: mov eax, ebx */ r_eax = r_ebx;
    /* 00876464: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00876465: xor eax, dword ptr [ecx*4 + 0xa24e60] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx*4+0xa24e60u)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087646c: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087646e: jl 0x876451 */ if ((fS!=fO)) goto L_00876451;
L_00876470:; BB(0x00876470);
    /* 00876470: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
L_00876474:; BB(0x00876474);
    /* 00876474: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00876478: mov ecx, eax */ r_ecx = r_eax;
    /* 0087647a: shr ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0087647d: mov byte ptr [ebp + 0x16], al */ W8((u32)(r_ebp+0x16u), (u8)r_eax);
    /* 00876480: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00876483: mov byte ptr [esi + 0x17], cl */ W8((u32)(r_esi+0x17u), (u8)r_ecx);
    /* 00876486: mov ecx, eax */ r_ecx = r_eax;
    /* 00876488: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0087648b: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0087648e: shr eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00876491: mov byte ptr [edi + 0x18], cl */ W8((u32)(r_edi+0x18u), (u8)r_ecx);
    /* 00876494: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 00876497: mov byte ptr [ecx + 0x19], al */ W8((u32)(r_ecx+0x19u), (u8)r_eax);
    /* 0087649a: lea esi, [esp + 0x10] */ r_esi = (u32)(r_esp+0x10u);
    /* 0087649e: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 008764a2: mov ecx, 4 */ r_ecx = 0x4u;
    /* 008764a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008764a9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 008764ab: je 0x8764be */ if (fZ) goto L_008764be;
L_008764ad:; BB(0x008764ad);
    /* 008764ad: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008764af: sub al, byte ptr [edi] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_edi)); u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fC = (a < b); }
    /* 008764b1: jne 0x8764be */ if (!fZ) goto L_008764be;
L_008764b3:; BB(0x008764b3);
    /* 008764b3: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008764b6: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008764b9: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fC = (a < b); }
    /* 008764bc: jne 0x8764ad */ if (!fZ) goto L_008764ad;
L_008764be:; BB(0x008764be);
    /* 008764be: seta al */ r_eax = (r_eax & 0xffffff00u) | ((((!fC&&!fZ)) ? 1 : 0) & 0xffu);
    /* 008764c1: setb cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fC) ? 1 : 0) & 0xffu);
    /* 008764c4: sub al, cl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ecx; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008764c6: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 008764c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008764cb: jne 0x876514 */ if (!fZ) goto L_00876514;
L_008764cd:; BB(0x008764cd);
    /* 008764cd: mov ebp, dword ptr [ebx + 0xc] */ r_ebp = R32((u32)(r_ebx+0xcu));
    /* 008764d0: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 008764d2: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008764d4: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008764d8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008764da: je 0x8764f6 */ if (fZ) goto L_008764f6;
L_008764dc:; BB(0x008764dc);
    /* 008764dc: mov ebp, edx */ r_ebp = r_edx;
    /* 008764de: mov dword ptr [ebp], ecx */ W32((u32)(r_ebp), r_ecx);
    /* 008764e1: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 008764e4: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 008764e7: add ecx, dword ptr [ebx + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0x14u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008764ea: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 008764ed: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 008764f0: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 008764f3: mov ebp, dword ptr [ebx + 0xc] */ r_ebp = R32((u32)(r_ebx+0xcu));
L_008764f6:; BB(0x008764f6);
    /* 008764f6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008764f8: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 008764fb: mov dword ptr [ebx + 0x10], edx */ W32((u32)(r_ebx+0x10u), r_edx);
    /* 008764fe: add eax, dword ptr [ebx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00876501: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00876503: mov dword ptr [ebx + 0xc], ebp */ W32((u32)(r_ebx+0xcu), r_ebp);
    /* 00876506: mov dword ptr [ebx + 0x14], edx */ W32((u32)(r_ebx+0x14u), r_edx);
    /* 00876509: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 0087650c: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0087650f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00876510: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00876511: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00876512: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00876513: ret  */ FN_RET(0x00876198); r_esp += 4; return;
L_00876514:; BB(0x00876514);
    /* 00876514: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00876518: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 0087651c: mov dword ptr [ebp], ecx */ W32((u32)(r_ebp), r_ecx);
L_0087651f:; BB(0x0087651f);
    /* 0087651f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00876521: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 00876525: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 00876529: mov dword ptr [ebx + 0x14], ecx */ W32((u32)(r_ebx+0x14u), r_ecx);
    /* 0087652c: lea edi, [ebp + esi + 1] */ r_edi = (u32)(r_ebp+r_esi+0x1u);
    /* 00876530: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00876531: mov dword ptr [ebx + 0x18], ecx */ W32((u32)(r_ebx+0x18u), r_ecx);
    /* 00876534: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00876535: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 00876537: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00876538: call 0x8cacc0 */ r_esp -= 4; W32(r_esp, 0x87653du); f_008cacc0();
    /* 0087653d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00876540: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00876542: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00876544: je 0x876563 */ if (fZ) goto L_00876563;
L_00876546:; BB(0x00876546);
    /* 00876546: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00876548: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087654a: mov dword ptr [ebx + 0xc], edx */ W32((u32)(r_ebx+0xcu), r_edx);
    /* 0087654d: sub eax, dword ptr [esp + 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00876551: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00876553: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00876556: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00876557: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00876558: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00876559: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0087655a: ret  */ FN_RET(0x00876198); r_esp += 4; return;
L_0087655b:; BB(0x0087655b);
    /* 0087655b: mov esi, dword ptr [ebx + 0x18] */ r_esi = R32((u32)(r_ebx+0x18u));
    /* 0087655e: jmp 0x876264 */ goto L_00876264;
L_00876563:; BB(0x00876563);
    /* 00876563: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00876566: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00876568: jmp 0x876546 */ goto L_00876546;
L_0087656a:; BB(0x0087656a);
    /* 0087656a: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 0087656e: jmp 0x87644d */ goto L_0087644d;
L_00876573:; BB(0x00876573);
    /* 00876573: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 00876576: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 0087657a: jmp 0x876380 */ goto L_00876380;
L_0087657f:; BB(0x0087657f);
    /* 0087657f: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 00876582: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 00876586: jmp 0x8763aa */ goto L_008763aa;
}

void f_0087658c(void) /* sub_87658C */
{
    FN_ENTER(0x0087658c);
    /* 0087658c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0087658d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0087658e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087658f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00876590: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00876593: mov ebp, dword ptr [esp + 0x54] */ r_ebp = R32((u32)(r_esp+0x54u));
    /* 00876597: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 0087659b: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 0087659d: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 008765a0: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 008765a4: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 008765a7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008765a9: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 008765ad: movzx ecx, byte ptr [ebx + 5] */ r_ecx = (u32)R8((u32)(r_ebx+0x5u));
    /* 008765b1: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 008765b5: movzx edx, byte ptr [ebx + 4] */ r_edx = (u32)R8((u32)(r_ebx+0x4u));
    /* 008765b9: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 008765bd: mov edx, ecx */ r_edx = r_ecx;
    /* 008765bf: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008765c2: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 008765c6: mov edx, ecx */ r_edx = r_ecx;
    /* 008765c8: and edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008765cb: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 008765cf: and ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008765d2: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 008765d6: call 0x8768ec */ r_esp -= 4; W32(r_esp, 0x8765dbu); f_008768ec();
    /* 008765db: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 008765df: movzx edi, byte ptr [ebx + 0xe] */ r_edi = (u32)R8((u32)(r_ebx+0xeu));
    /* 008765e3: movzx edx, byte ptr [ebx + 0xf] */ r_edx = (u32)R8((u32)(r_ebx+0xfu));
    /* 008765e7: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 008765eb: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008765ee: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008765f0: movzx ecx, byte ptr [ebx + 0x10] */ r_ecx = (u32)R8((u32)(r_ebx+0x10u));
    /* 008765f4: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008765f7: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008765f9: movzx esi, byte ptr [ebx + 0x11] */ r_esi = (u32)R8((u32)(r_ebx+0x11u));
    /* 008765fd: shl esi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00876600: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00876602: movzx ecx, byte ptr [ebx + 0x12] */ r_ecx = (u32)R8((u32)(r_ebx+0x12u));
    /* 00876606: movzx edx, byte ptr [ebx + 0x13] */ r_edx = (u32)R8((u32)(r_ebx+0x13u));
    /* 0087660a: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0087660d: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0087660f: movzx edx, byte ptr [ebx + 0x14] */ r_edx = (u32)R8((u32)(r_ebx+0x14u));
    /* 00876613: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00876616: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00876618: movzx edx, byte ptr [ebx + 0x15] */ r_edx = (u32)R8((u32)(r_ebx+0x15u));
    /* 0087661c: shl edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0087661f: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00876621: movzx edx, byte ptr [ebx + 0x1a] */ r_edx = (u32)R8((u32)(r_ebx+0x1au));
    /* 00876625: mov esi, dword ptr [ebp + 0x24] */ r_esi = R32((u32)(r_ebp+0x24u));
    /* 00876628: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 0087662c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0087662f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00876631: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00876635: je 0x876658 */ if (fZ) goto L_00876658;
L_00876637:; BB(0x00876637);
    /* 00876637: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0087663a: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0087663c: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 0087663f: je 0x876651 */ if (fZ) goto L_00876651;
L_00876641:; BB(0x00876641);
    /* 00876641: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00876644: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00876646: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00876647: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00876648: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00876649: call 0x858c80 */ r_esp -= 4; W32(r_esp, 0x87664eu); f_00858c80();
    /* 0087664e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00876651:; BB(0x00876651);
    /* 00876651: mov dword ptr [ebp + 0xc], 0 */ W32((u32)(r_ebp+0xcu), 0x0u);
L_00876658:; BB(0x00876658);
    /* 00876658: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087665a: je 0x8766e1 */ if (fZ) goto L_008766e1;
L_00876660:; BB(0x00876660);
    /* 00876660: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00876663: mov edx, eax */ r_edx = r_eax;
    /* 00876665: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00876667: je 0x8766cf */ if (fZ) goto L_008766cf;
L_00876669:; BB(0x00876669);
    /* 00876669: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 0087666d: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00876670: mov edx, esi */ r_edx = r_esi;
    /* 00876672: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00876674: lea esi, [esi + esi] */ r_esi = (u32)(r_esi+r_esi);
    /* 00876677: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00876679: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0087667d: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087667f: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 00876682: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00876684: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00876686: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00876688: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087668a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0087668b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0087668c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0087668d: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
    /* 00876691: call 0x858c80 */ r_esp -= 4; W32(r_esp, 0x876696u); f_00858c80();
    /* 00876696: mov dword ptr [esp + 0x48], esi */ W32((u32)(r_esp+0x48u), r_esi);
    /* 0087669a: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0087669d: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 008766a0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008766a2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008766a4: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008766a6: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 008766aa: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008766ac: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008766ae: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008766b0: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 008766b3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008766b5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008766b7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008766b9: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008766bb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008766bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008766bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008766be: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
    /* 008766c2: call 0x858c80 */ r_esp -= 4; W32(r_esp, 0x8766c7u); f_00858c80();
    /* 008766c7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008766ca: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 008766cd: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
L_008766cf:; BB(0x008766cf);
    /* 008766cf: mov dword ptr [ebp + 0x1c], edx */ W32((u32)(r_ebp+0x1cu), r_edx);
    /* 008766d2: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 008766d5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008766d7: mov dword ptr [ebp + 0x20], edx */ W32((u32)(r_ebp+0x20u), r_edx);
    /* 008766da: mov dword ptr [ebp + 0x24], 0 */ W32((u32)(r_ebp+0x24u), 0x0u);
L_008766e1:; BB(0x008766e1);
    /* 008766e1: cmp edi, dword ptr [ebp + 0x150] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0x150u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008766e7: jne 0x8766f1 */ if (!fZ) goto L_008766f1;
L_008766e9:; BB(0x008766e9);
    /* 008766e9: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 008766ed: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008766ef: jle 0x8766fe */ if ((fZ||fS!=fO)) goto L_008766fe;
L_008766f1:; BB(0x008766f1);
    /* 008766f1: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 008766f6: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008766f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008766fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008766fb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008766fc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008766fd: ret  */ FN_RET(0x0087658c); r_esp += 4; return;
L_008766fe:; BB(0x008766fe);
    /* 008766fe: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 00876702: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 00876705: mov eax, ebp */ r_eax = r_ebp;
    /* 00876707: call 0x876094 */ r_esp -= 4; W32(r_esp, 0x87670cu); f_00876094();
    /* 0087670c: mov edi, dword ptr [ebp + 0x154] */ r_edi = R32((u32)(r_ebp+0x154u));
    /* 00876712: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00876716: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00876718: je 0x8767c1 */ if (fZ) goto L_008767c1;
L_0087671e:; BB(0x0087671e);
    /* 0087671e: mov esi, dword ptr [ebp + 0x20] */ r_esi = R32((u32)(r_ebp+0x20u));
    /* 00876721: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00876724: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00876726: jge 0x87675b */ if ((fS==fO)) goto L_0087675b;
L_00876728:; BB(0x00876728);
    /* 00876728: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0087672b: lea eax, [edx + esi*4] */ r_eax = (u32)(r_edx+r_esi*4);
    /* 0087672e: lea edx, [edx + ecx*4] */ r_edx = (u32)(r_edx+r_ecx*4);
    /* 00876731: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00876735: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00876738: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0087673c: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00876740: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00876744: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
L_00876748:; BB(0x00876748);
    /* 00876748: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0087674b: sub ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0087674d: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00876750: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
    /* 00876753: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00876755: jb 0x876748 */ if (fC) goto L_00876748;
L_00876757:; BB(0x00876757);
    /* 00876757: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
L_0087675b:; BB(0x0087675b);
    /* 0087675b: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087675e: je 0x8768de */ if (fZ) goto L_008768de;
L_00876764:; BB(0x00876764);
    /* 00876764: lea edx, [esi + 1] */ r_edx = (u32)(r_esi+0x1u);
    /* 00876767: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0087676a: mov dword ptr [ebp + 0x1c], edx */ W32((u32)(r_ebp+0x1cu), r_edx);
    /* 0087676d: mov dword ptr [ecx + esi*4], 0x400 */ W32((u32)(r_ecx+r_esi*4), 0x400u);
    /* 00876774: inc dword ptr [ebp + 0x20] */ { u32 ad = (u32)(r_ebp+0x20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00876777:; BB(0x00876777);
    /* 00876777: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0087677b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087677d: je 0x8767c1 */ if (fZ) goto L_008767c1;
L_0087677f:; BB(0x0087677f);
    /* 0087677f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00876781: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 00876785: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00876787: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0087678b: jle 0x8767c1 */ if ((fZ||fS!=fO)) goto L_008767c1;
L_0087678d:; BB(0x0087678d);
    /* 0087678d: mov eax, ecx */ r_eax = r_ecx;
    /* 0087678f: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00876793: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00876797: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
L_0087679b:; BB(0x0087679b);
    /* 0087679b: movzx esi, byte ptr [edi + ebx + 0x1b] */ r_esi = (u32)R8((u32)(r_edi+r_ebx+0x1bu));
    /* 008767a0: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008767a2: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008767a4: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008767a5: cmp esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008767ab: jl 0x8768cd */ if ((fS!=fO)) goto L_008768cd;
L_008767b1:; BB(0x008767b1);
    /* 008767b1: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008767b3: jl 0x87679b */ if ((fS!=fO)) goto L_0087679b;
L_008767b5:; BB(0x008767b5);
    /* 008767b5: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 008767b9: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 008767bd: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
L_008767c1:; BB(0x008767c1);
    /* 008767c1: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 008767c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008767c7: je 0x8767f0 */ if (fZ) goto L_008767f0;
L_008767c9:; BB(0x008767c9);
    /* 008767c9: mov eax, ebp */ r_eax = r_ebp;
    /* 008767cb: call 0x87606c */ r_esp -= 4; W32(r_esp, 0x8767d0u); f_0087606c();
    /* 008767d0: mov esi, dword ptr [ebp] */ r_esi = R32((u32)(r_ebp));
    /* 008767d3: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 008767d7: add esi, dword ptr [ebp + 8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008767da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008767db: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 008767df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008767e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008767e1: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x8767e6u); f_0086b6b8();
    /* 008767e6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008767e9: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 008767ed: add dword ptr [ebp + 8], edx */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008767f0:; BB(0x008767f0);
    /* 008767f0: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 008767f5: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 008767f9: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 008767fd: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008767ff: jge 0x87688e */ if ((fS==fO)) goto L_0087688e;
L_00876805:; BB(0x00876805);
    /* 00876805: mov esi, dword ptr [ebp + 0x1c] */ r_esi = R32((u32)(r_ebp+0x1cu));
    /* 00876808: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0087680c: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 00876810: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00876814: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
L_00876818:; BB(0x00876818);
    /* 00876818: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0087681c: movzx edx, byte ptr [ebx + edx + 0x1b] */ r_edx = (u32)R8((u32)(r_ebx+r_edx+0x1bu));
    /* 00876821: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 00876824: mov dword ptr [edi + esi*4], edx */ W32((u32)(r_edi+r_esi*4), r_edx);
    /* 00876827: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0087682a: mov edi, dword ptr [ebp + 0x14] */ r_edi = R32((u32)(r_ebp+0x14u));
    /* 0087682d: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 00876832: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00876834: mov dword ptr [edi + eax*8], esi */ W32((u32)(r_edi+r_eax*8), r_esi);
    /* 00876837: mov dword ptr [edi + eax*8 + 4], esi */ W32((u32)(r_edi+r_eax*8+0x4u), r_esi);
    /* 0087683b: je 0x87684c */ if (fZ) goto L_0087684c;
L_0087683d:; BB(0x0087683d);
    /* 0087683d: mov esi, dword ptr [ebp + 0x1c] */ r_esi = R32((u32)(r_ebp+0x1cu));
    /* 00876840: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00876843: or dword ptr [ecx + esi*4], 0x100 */ { u32 ad = (u32)(r_ecx+r_esi*4);  u32 a = R32(ad); u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0087684a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0087684c:; BB(0x0087684c);
    /* 0087684c: mov esi, dword ptr [ebp + 0x1c] */ r_esi = R32((u32)(r_ebp+0x1cu));
    /* 0087684f: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00876855: jge 0x87685b */ if ((fS==fO)) goto L_0087685b;
L_00876857:; BB(0x00876857);
    /* 00876857: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
L_0087685b:; BB(0x0087685b);
    /* 0087685b: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087685c: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0087685d: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00876863: mov dword ptr [ebp + 0x1c], esi */ W32((u32)(r_ebp+0x1cu), r_esi);
    /* 00876866: jge 0x87686b */ if ((fS==fO)) goto L_0087686b;
L_00876868:; BB(0x00876868);
    /* 00876868: mov dword ptr [ebp + 0x20], esi */ W32((u32)(r_ebp+0x20u), r_esi);
L_0087686b:; BB(0x0087686b);
    /* 0087686b: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0087686f: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00876871: jl 0x876818 */ if ((fS!=fO)) goto L_00876818;
L_00876873:; BB(0x00876873);
    /* 00876873: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00876877: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087687a: je 0x87688e */ if (fZ) goto L_0087688e;
L_0087687c:; BB(0x0087687c);
    /* 0087687c: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
    /* 0087687f: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00876883: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 00876887: mov dword ptr [esi + edx*8], ecx */ W32((u32)(r_esi+r_edx*8), r_ecx);
    /* 0087688a: mov dword ptr [esi + edx*8 + 4], ebx */ W32((u32)(r_esi+r_edx*8+0x4u), r_ebx);
L_0087688e:; BB(0x0087688e);
    /* 0087688e: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00876892: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00876894: je 0x8768b8 */ if (fZ) goto L_008768b8;
L_00876896:; BB(0x00876896);
    /* 00876896: mov dword ptr [ebp + 0x148], 1 */ W32((u32)(r_ebp+0x148u), 0x1u);
    /* 008768a0: mov ebx, dword ptr [ebp + 0x1c] */ r_ebx = R32((u32)(r_ebp+0x1cu));
    /* 008768a3: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008768a5: jle 0x8768b8 */ if ((fZ||fS!=fO)) goto L_008768b8;
L_008768a7:; BB(0x008768a7);
    /* 008768a7: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008768aa: mov edx, dword ptr [ecx + ebx*4 - 4] */ r_edx = R32((u32)(r_ecx+r_ebx*4+0xfffffffcu));
    /* 008768ae: or edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 008768b4: mov dword ptr [ecx + ebx*4 - 4], edx */ W32((u32)(r_ecx+r_ebx*4+0xfffffffcu), r_edx);
L_008768b8:; BB(0x008768b8);
    /* 008768b8: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 008768bc: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008768bd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008768bf: mov dword ptr [ebp + 0x154], edx */ W32((u32)(r_ebp+0x154u), r_edx);
    /* 008768c5: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008768c8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008768c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008768ca: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008768cb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008768cc: ret  */ FN_RET(0x0087658c); r_esp += 4; return;
L_008768cd:; BB(0x008768cd);
    /* 008768cd: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 008768d1: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 008768d5: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 008768d9: jmp 0x8767c1 */ goto L_008767c1;
L_008768de:; BB(0x008768de);
    /* 008768de: mov dword ptr [ebp + 0x1c], esi */ W32((u32)(r_ebp+0x1cu), r_esi);
    /* 008768e1: jmp 0x876777 */ goto L_00876777;
}

void f_008768e8(void) /* sub_8768E8 */
{
    FN_ENTER(0x008768e8);
    /* 008768e8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008768ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008768ed: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008768ef: movzx eax, byte ptr [ecx + 0xd] */ r_eax = (u32)R8((u32)(r_ecx+0xdu));
    /* 008768f3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008768f5: movzx edi, byte ptr [ecx + 0xc] */ r_edi = (u32)R8((u32)(r_ecx+0xcu));
    /* 008768f9: shld edx, eax, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 b = r_eax; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_edx = r; } }
    /* 008768fd: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00876900: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00876902: shld edx, eax, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 b = r_eax; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_edx = r; } }
    /* 00876906: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00876909: movzx edi, byte ptr [ecx + 0xb] */ r_edi = (u32)R8((u32)(r_ecx+0xbu));
    /* 0087690d: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0087690f: movzx edi, byte ptr [ecx + 0xa] */ r_edi = (u32)R8((u32)(r_ecx+0xau));
    /* 00876913: shld edx, eax, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 b = r_eax; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_edx = r; } }
    /* 00876917: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0087691a: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0087691c: shld edx, eax, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 b = r_eax; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_edx = r; } }
    /* 00876920: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00876923: movzx edi, byte ptr [ecx + 9] */ r_edi = (u32)R8((u32)(r_ecx+0x9u));
    /* 00876927: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00876929: movzx edi, byte ptr [ecx + 8] */ r_edi = (u32)R8((u32)(r_ecx+0x8u));
    /* 0087692d: shld edx, eax, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 b = r_eax; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_edx = r; } }
    /* 00876931: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00876934: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00876936: shld edx, eax, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 b = r_eax; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_edx = r; } }
    /* 0087693a: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0087693d: movzx edi, byte ptr [ecx + 7] */ r_edi = (u32)R8((u32)(r_ecx+0x7u));
    /* 00876941: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00876943: movzx ecx, byte ptr [ecx + 6] */ r_ecx = (u32)R8((u32)(r_ecx+0x6u));
    /* 00876947: shld edx, eax, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 b = r_eax; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_edx = r; } }
    /* 0087694b: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0087694e: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00876950: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00876951: ret  */ FN_RET(0x008768e8); r_esp += 4; return;
}

void f_008768ec(void) /* sub_8768EC */
{
    FN_ENTER(0x008768ec);
    /* 008768ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008768ed: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008768ef: movzx eax, byte ptr [ecx + 0xd] */ r_eax = (u32)R8((u32)(r_ecx+0xdu));
    /* 008768f3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008768f5: movzx edi, byte ptr [ecx + 0xc] */ r_edi = (u32)R8((u32)(r_ecx+0xcu));
    /* 008768f9: shld edx, eax, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 b = r_eax; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_edx = r; } }
    /* 008768fd: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00876900: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00876902: shld edx, eax, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 b = r_eax; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_edx = r; } }
    /* 00876906: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00876909: movzx edi, byte ptr [ecx + 0xb] */ r_edi = (u32)R8((u32)(r_ecx+0xbu));
    /* 0087690d: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0087690f: movzx edi, byte ptr [ecx + 0xa] */ r_edi = (u32)R8((u32)(r_ecx+0xau));
    /* 00876913: shld edx, eax, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 b = r_eax; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_edx = r; } }
    /* 00876917: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0087691a: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0087691c: shld edx, eax, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 b = r_eax; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_edx = r; } }
    /* 00876920: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00876923: movzx edi, byte ptr [ecx + 9] */ r_edi = (u32)R8((u32)(r_ecx+0x9u));
    /* 00876927: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00876929: movzx edi, byte ptr [ecx + 8] */ r_edi = (u32)R8((u32)(r_ecx+0x8u));
    /* 0087692d: shld edx, eax, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 b = r_eax; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_edx = r; } }
    /* 00876931: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00876934: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00876936: shld edx, eax, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 b = r_eax; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_edx = r; } }
    /* 0087693a: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0087693d: movzx edi, byte ptr [ecx + 7] */ r_edi = (u32)R8((u32)(r_ecx+0x7u));
    /* 00876941: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00876943: movzx ecx, byte ptr [ecx + 6] */ r_ecx = (u32)R8((u32)(r_ecx+0x6u));
    /* 00876947: shld edx, eax, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 b = r_eax; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_edx = r; } }
    /* 0087694b: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0087694e: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00876950: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00876951: ret  */ FN_RET(0x008768ec); r_esp += 4; return;
}

void f_00876954(void) /* sub_876954 */
{
    FN_ENTER(0x00876954);
    /* 00876954: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00876958: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087695a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0087695c: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0087695f: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 00876962: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 00876965: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 00876968: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 0087696b: ret  */ FN_RET(0x00876954); r_esp += 4; return;
}

void f_0087696c(void) /* sub_87696C */
{
    FN_ENTER(0x0087696c);
    /* 0087696c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087696d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0087696e: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00876972: mov eax, ebp */ r_eax = r_ebp;
    /* 00876974: call 0x87698c */ r_esp -= 4; W32(r_esp, 0x876979u); f_0087698c();
    /* 00876979: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0087697d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0087697f: mov dword ptr [ebp + 0x150], edx */ W32((u32)(r_ebp+0x150u), r_edx);
    /* 00876985: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00876986: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00876987: ret  */ FN_RET(0x0087696c); r_esp += 4; return;
}

void f_00876988(void) /* sub_876988 */
{
    FN_ENTER(0x00876988);
    /* 00876988: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0087698c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087698e: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00876991: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 00876994: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 00876997: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 0087699a: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 0087699d: mov dword ptr [eax + 0x144], edx */ W32((u32)(r_eax+0x144u), r_edx);
    /* 008769a3: mov dword ptr [eax + 0x148], edx */ W32((u32)(r_eax+0x148u), r_edx);
    /* 008769a9: mov dword ptr [eax + 0x14c], edx */ W32((u32)(r_eax+0x14cu), r_edx);
    /* 008769af: mov dword ptr [eax + 0x154], 0xffffffff */ W32((u32)(r_eax+0x154u), 0xffffffffu);
    /* 008769b9: mov dword ptr [eax + 0x158], edx */ W32((u32)(r_eax+0x158u), r_edx);
    /* 008769bf: mov dword ptr [eax + 0x15c], edx */ W32((u32)(r_eax+0x15cu), r_edx);
    /* 008769c5: mov dword ptr [eax + 0x160], edx */ W32((u32)(r_eax+0x160u), r_edx);
    /* 008769cb: mov dword ptr [eax + 0x164], edx */ W32((u32)(r_eax+0x164u), r_edx);
    /* 008769d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008769d3: ret  */ FN_RET(0x00876988); r_esp += 4; return;
}

void f_0087698c(void) /* sub_87698C */
{
    FN_ENTER(0x0087698c);
    /* 0087698c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087698e: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00876991: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 00876994: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 00876997: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 0087699a: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 0087699d: mov dword ptr [eax + 0x144], edx */ W32((u32)(r_eax+0x144u), r_edx);
    /* 008769a3: mov dword ptr [eax + 0x148], edx */ W32((u32)(r_eax+0x148u), r_edx);
    /* 008769a9: mov dword ptr [eax + 0x14c], edx */ W32((u32)(r_eax+0x14cu), r_edx);
    /* 008769af: mov dword ptr [eax + 0x154], 0xffffffff */ W32((u32)(r_eax+0x154u), 0xffffffffu);
    /* 008769b9: mov dword ptr [eax + 0x158], edx */ W32((u32)(r_eax+0x158u), r_edx);
    /* 008769bf: mov dword ptr [eax + 0x15c], edx */ W32((u32)(r_eax+0x15cu), r_edx);
    /* 008769c5: mov dword ptr [eax + 0x160], edx */ W32((u32)(r_eax+0x160u), r_edx);
    /* 008769cb: mov dword ptr [eax + 0x164], edx */ W32((u32)(r_eax+0x164u), r_edx);
    /* 008769d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008769d3: ret  */ FN_RET(0x0087698c); r_esp += 4; return;
}

void f_008769d4(void) /* sub_8769D4 */
{
    FN_ENTER(0x008769d4);
    /* 008769d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008769d5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008769d6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008769d7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008769d8: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008769dc: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 008769e0: mov edi, dword ptr [edx + 0x24] */ r_edi = R32((u32)(r_edx+0x24u));
    /* 008769e3: cmp edi, dword ptr [edx + 0x20] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008769e6: jge 0x876a9d */ if ((fS==fO)) goto L_00876a9d;
L_008769ec:; BB(0x008769ec);
    /* 008769ec: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 008769ef: mov ebx, dword ptr [ecx + edi*4] */ r_ebx = R32((u32)(r_ecx+r_edi*4));
    /* 008769f2: test bh, 4 */ {  u32 a = (u8)(r_ebx>>8); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008769f5: jne 0x876aa4 */ if (!fZ) goto L_00876aa4;
L_008769fb:; BB(0x008769fb);
    /* 008769fb: movzx esi, bl */ r_esi = (u32)(u8)r_ebx;
    /* 008769fe: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00876a00: and ebp, 0x200 */ {  u32 a = r_ebp; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00876a06: and ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00876a0c: cmp esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00876a12: jne 0x876a38 */ if (!fZ) goto L_00876a38;
L_00876a14:; BB(0x00876a14);
    /* 00876a14: mov eax, dword ptr [ecx + edi*4 + 4] */ r_eax = R32((u32)(r_ecx+r_edi*4+0x4u));
    /* 00876a18: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00876a19: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00876a1c: test ah, 2 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00876a1f: je 0x876a26 */ if (fZ) goto L_00876a26;
L_00876a21:; BB(0x00876a21);
    /* 00876a21: mov ebp, 0x200 */ r_ebp = 0x200u;
L_00876a26:; BB(0x00876a26);
    /* 00876a26: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00876a28: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00876a2e: je 0x876a14 */ if (fZ) goto L_00876a14;
L_00876a30:; BB(0x00876a30);
    /* 00876a30: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00876a34: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
L_00876a38:; BB(0x00876a38);
    /* 00876a38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00876a3a: je 0x876a6e */ if (fZ) goto L_00876a6e;
L_00876a3c:; BB(0x00876a3c);
    /* 00876a3c: mov dword ptr [eax + 0xc], ebp */ W32((u32)(r_eax+0xcu), r_ebp);
    /* 00876a3f: mov dword ptr [eax + 8], ebx */ W32((u32)(r_eax+0x8u), r_ebx);
    /* 00876a42: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00876a44: add ecx, dword ptr [edx + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00876a47: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00876a49: mov ebx, dword ptr [edx + 0x158] */ r_ebx = R32((u32)(r_edx+0x158u));
    /* 00876a4f: mov ebp, dword ptr [edx + 0x15c] */ r_ebp = R32((u32)(r_edx+0x15cu));
    /* 00876a55: mov dword ptr [eax + 0x18], ebx */ W32((u32)(r_eax+0x18u), r_ebx);
    /* 00876a58: mov dword ptr [eax + 0x1c], ebp */ W32((u32)(r_eax+0x1cu), r_ebp);
    /* 00876a5b: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00876a5e: mov ebx, dword ptr [ecx + edi*8] */ r_ebx = R32((u32)(r_ecx+r_edi*8));
    /* 00876a61: mov ecx, dword ptr [ecx + edi*8 + 4] */ r_ecx = R32((u32)(r_ecx+r_edi*8+0x4u));
    /* 00876a65: mov dword ptr [eax + 0x10], ebx */ W32((u32)(r_eax+0x10u), r_ebx);
    /* 00876a68: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 00876a6b: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
L_00876a6e:; BB(0x00876a6e);
    /* 00876a6e: add dword ptr [edx + 0xc], esi */ { u32 ad = (u32)(r_edx+0xcu);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00876a71: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00876a72: mov eax, dword ptr [edx + 0x158] */ r_eax = R32((u32)(r_edx+0x158u));
    /* 00876a78: mov dword ptr [edx + 0x24], edi */ W32((u32)(r_edx+0x24u), r_edi);
    /* 00876a7b: mov ecx, dword ptr [edx + 0x15c] */ r_ecx = R32((u32)(r_edx+0x15cu));
    /* 00876a81: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 00876a84: adc ecx, 0 */ { u32 c = fC; u32 a = r_ecx; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (unsigned)((((u64)a + b + c) >> 32) & 1); }
    /* 00876a87: mov dword ptr [edx + 0x158], eax */ W32((u32)(r_edx+0x158u), r_eax);
    /* 00876a8d: mov eax, 1 */ r_eax = 0x1u;
    /* 00876a92: mov dword ptr [edx + 0x15c], ecx */ W32((u32)(r_edx+0x15cu), r_ecx);
    /* 00876a98: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00876a99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00876a9a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00876a9b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00876a9c: ret  */ FN_RET(0x008769d4); r_esp += 4; return;
L_00876a9d:; BB(0x00876a9d);
    /* 00876a9d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00876a9f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00876aa0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00876aa1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00876aa2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00876aa3: ret  */ FN_RET(0x008769d4); r_esp += 4; return;
L_00876aa4:; BB(0x00876aa4);
    /* 00876aa4: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00876aa5: mov eax, dword ptr [edx + 0x158] */ r_eax = R32((u32)(r_edx+0x158u));
    /* 00876aab: mov ecx, dword ptr [edx + 0x15c] */ r_ecx = R32((u32)(r_edx+0x15cu));
    /* 00876ab1: mov dword ptr [edx + 0x24], edi */ W32((u32)(r_edx+0x24u), r_edi);
    /* 00876ab4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 00876ab7: adc ecx, 0 */ { u32 c = fC; u32 a = r_ecx; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (unsigned)((((u64)a + b + c) >> 32) & 1); }
    /* 00876aba: mov dword ptr [edx + 0x158], eax */ W32((u32)(r_edx+0x158u), r_eax);
    /* 00876ac0: mov dword ptr [edx + 0x15c], ecx */ W32((u32)(r_edx+0x15cu), r_ecx);
    /* 00876ac6: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00876acb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00876acc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00876acd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00876ace: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00876acf: ret  */ FN_RET(0x008769d4); r_esp += 4; return;
}

void f_00876ad0(void) /* sub_876AD0 */
{
    FN_ENTER(0x00876ad0);
    /* 00876ad0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00876ad1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00876ad2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00876ad3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00876ad4: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00876ad8: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00876adc: mov ebp, dword ptr [esi + 0x24] */ r_ebp = R32((u32)(r_esi+0x24u));
    /* 00876adf: cmp ebp, dword ptr [esi + 0x20] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esi+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00876ae2: jge 0x876b83 */ if ((fS==fO)) goto L_00876b83;
L_00876ae8:; BB(0x00876ae8);
    /* 00876ae8: mov ecx, dword ptr [esi + 0x10] */ r_ecx = R32((u32)(r_esi+0x10u));
    /* 00876aeb: mov edx, dword ptr [ecx + ebp*4] */ r_edx = R32((u32)(r_ecx+r_ebp*4));
    /* 00876aee: test dh, 4 */ {  u32 a = (u8)(r_edx>>8); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00876af1: jne 0x876b94 */ if (!fZ) goto L_00876b94;
L_00876af7:; BB(0x00876af7);
    /* 00876af7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00876af9: je 0x876b8a */ if (fZ) goto L_00876b8a;
L_00876aff:; BB(0x00876aff);
    /* 00876aff: movzx ebx, dl */ r_ebx = (u32)(u8)r_edx;
    /* 00876b02: mov eax, edx */ r_eax = r_edx;
    /* 00876b04: and eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00876b09: and edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00876b0f: cmp ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00876b15: jne 0x876b47 */ if (!fZ) goto L_00876b47;
L_00876b17:; BB(0x00876b17);
    /* 00876b17: mov esi, dword ptr [ecx + ebp*4 + 4] */ r_esi = R32((u32)(r_ecx+r_ebp*4+0x4u));
    /* 00876b1b: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00876b1c: mov edi, esi */ r_edi = r_esi;
    /* 00876b1e: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00876b24: test esi, 0x200 */ {  u32 a = r_esi; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00876b2a: je 0x876b31 */ if (fZ) goto L_00876b31;
L_00876b2c:; BB(0x00876b2c);
    /* 00876b2c: mov eax, 0x200 */ r_eax = 0x200u;
L_00876b31:; BB(0x00876b31);
    /* 00876b31: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00876b33: cmp edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00876b39: je 0x876b17 */ if (fZ) goto L_00876b17;
L_00876b3b:; BB(0x00876b3b);
    /* 00876b3b: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00876b3f: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00876b43: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00876b45: je 0x876b79 */ if (fZ) goto L_00876b79;
L_00876b47:; BB(0x00876b47);
    /* 00876b47: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 00876b4a: mov dword ptr [edi + 8], edx */ W32((u32)(r_edi+0x8u), r_edx);
    /* 00876b4d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00876b4f: add eax, dword ptr [esi + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00876b52: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 00876b54: mov edx, dword ptr [esi + 0x158] */ r_edx = R32((u32)(r_esi+0x158u));
    /* 00876b5a: mov ecx, dword ptr [esi + 0x15c] */ r_ecx = R32((u32)(r_esi+0x15cu));
    /* 00876b60: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
    /* 00876b63: mov dword ptr [edi + 0x1c], ecx */ W32((u32)(r_edi+0x1cu), r_ecx);
    /* 00876b66: mov esi, dword ptr [esi + 0x14] */ r_esi = R32((u32)(r_esi+0x14u));
    /* 00876b69: mov eax, dword ptr [esi + ebp*8] */ r_eax = R32((u32)(r_esi+r_ebp*8));
    /* 00876b6c: mov ebp, dword ptr [esi + ebp*8 + 4] */ r_ebp = R32((u32)(r_esi+r_ebp*8+0x4u));
    /* 00876b70: mov dword ptr [edi + 0x10], eax */ W32((u32)(r_edi+0x10u), r_eax);
    /* 00876b73: mov dword ptr [edi + 0x14], ebp */ W32((u32)(r_edi+0x14u), r_ebp);
    /* 00876b76: mov dword ptr [edi + 4], ebx */ W32((u32)(r_edi+0x4u), r_ebx);
L_00876b79:; BB(0x00876b79);
    /* 00876b79: mov eax, 1 */ r_eax = 0x1u;
    /* 00876b7e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00876b7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00876b80: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00876b81: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00876b82: ret  */ FN_RET(0x00876ad0); r_esp += 4; return;
L_00876b83:; BB(0x00876b83);
    /* 00876b83: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00876b85: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00876b86: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00876b87: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00876b88: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00876b89: ret  */ FN_RET(0x00876ad0); r_esp += 4; return;
L_00876b8a:; BB(0x00876b8a);
    /* 00876b8a: mov eax, 1 */ r_eax = 0x1u;
    /* 00876b8f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00876b90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00876b91: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00876b92: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00876b93: ret  */ FN_RET(0x00876ad0); r_esp += 4; return;
L_00876b94:; BB(0x00876b94);
    /* 00876b94: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00876b95: mov eax, dword ptr [esi + 0x158] */ r_eax = R32((u32)(r_esi+0x158u));
    /* 00876b9b: mov edx, dword ptr [esi + 0x15c] */ r_edx = R32((u32)(r_esi+0x15cu));
    /* 00876ba1: mov dword ptr [esi + 0x24], ebp */ W32((u32)(r_esi+0x24u), r_ebp);
    /* 00876ba4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 00876ba7: adc edx, 0 */ { u32 c = fC; u32 a = r_edx; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (unsigned)((((u64)a + b + c) >> 32) & 1); }
    /* 00876baa: mov dword ptr [esi + 0x158], eax */ W32((u32)(r_esi+0x158u), r_eax);
    /* 00876bb0: mov dword ptr [esi + 0x15c], edx */ W32((u32)(r_esi+0x15cu), r_edx);
    /* 00876bb6: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00876bbb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00876bbc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00876bbd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00876bbe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00876bbf: ret  */ FN_RET(0x00876ad0); r_esp += 4; return;
}

void f_00876bc0(void) /* sub_876BC0 */
{
    FN_ENTER(0x00876bc0);
    /* 00876bc0: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00876bc4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00876bc6: je 0x876bde */ if (fZ) goto L_00876bde;
L_00876bc8:; BB(0x00876bc8);
    /* 00876bc8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00876bca: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00876bcc: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00876bcf: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00876bd2: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00876bd5: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00876bd8: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 00876bdb: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
L_00876bde:; BB(0x00876bde);
    /* 00876bde: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00876be0: ret  */ FN_RET(0x00876bc0); r_esp += 4; return;
}

void f_00876be4(void) /* sub_876BE4 */
{
    FN_ENTER(0x00876be4);
    /* 00876be4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00876be5: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 00876be9: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00876beb: je 0x876c42 */ if (fZ) goto L_00876c42;
L_00876bed:; BB(0x00876bed);
    /* 00876bed: push 0x168 */ { u32 v = 0x168u; r_esp -= 4; W32(r_esp, v); }
    /* 00876bf2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00876bf4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00876bf5: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x876bfau); f_0086b688();
    /* 00876bfa: mov eax, 0x4000 */ r_eax = 0x4000u;
    /* 00876bff: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 00876c02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00876c03: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x876c08u); f_00859c55();
    /* 00876c08: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 00876c0b: mov dword ptr [ebp + 0x18], 0x400 */ W32((u32)(r_ebp+0x18u), 0x400u);
    /* 00876c12: push 0x1000 */ { u32 v = 0x1000u; r_esp -= 4; W32(r_esp, v); }
    /* 00876c17: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x876c1cu); f_00859c55();
    /* 00876c1c: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 00876c1f: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00876c22: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00876c24: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00876c26: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00876c28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00876c29: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x876c2eu); f_00859c55();
    /* 00876c2e: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 00876c31: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00876c35: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00876c37: mov dword ptr [ebp + 0x150], edx */ W32((u32)(r_ebp+0x150u), r_edx);
    /* 00876c3d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00876c40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00876c41: ret  */ FN_RET(0x00876be4); r_esp += 4; return;
L_00876c42:; BB(0x00876c42);
    /* 00876c42: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00876c47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00876c48: ret  */ FN_RET(0x00876be4); r_esp += 4; return;
}

void f_00876c4c(void) /* sub_876C4C */
{
    FN_ENTER(0x00876c4c);
    /* 00876c4c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00876c4d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00876c4e: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 00876c52: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00876c54: je 0x876ca8 */ if (fZ) goto L_00876ca8;
L_00876c56:; BB(0x00876c56);
    /* 00876c56: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00876c58: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00876c5b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00876c5d: jle 0x876cb8 */ if ((fZ||fS!=fO)) goto L_00876cb8;
L_00876c5f:; BB(0x00876c5f);
    /* 00876c5f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00876c61: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00876c64: mov esi, ecx */ r_esi = r_ecx;
L_00876c66:; BB(0x00876c66);
    /* 00876c66: mov ecx, dword ptr [eax + esi*4] */ r_ecx = R32((u32)(r_eax+r_esi*4));
    /* 00876c69: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00876c6b: je 0x876c79 */ if (fZ) goto L_00876c79;
L_00876c6d:; BB(0x00876c6d);
    /* 00876c6d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00876c6e: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x876c73u); f_00858882();
    /* 00876c73: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00876c74: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00876c77: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
L_00876c79:; BB(0x00876c79);
    /* 00876c79: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00876c7a: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00876c7c: jl 0x876c66 */ if ((fS!=fO)) goto L_00876c66;
L_00876c7e:; BB(0x00876c7e);
    /* 00876c7e: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_00876c81:; BB(0x00876c81);
    /* 00876c81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00876c83: je 0x876c8c */ if (fZ) goto L_00876c8c;
L_00876c85:; BB(0x00876c85);
    /* 00876c85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00876c86: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x876c8bu); f_00858882();
    /* 00876c8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00876c8c:; BB(0x00876c8c);
    /* 00876c8c: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00876c8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00876c91: je 0x876c9a */ if (fZ) goto L_00876c9a;
L_00876c93:; BB(0x00876c93);
    /* 00876c93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00876c94: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x876c99u); f_00858882();
    /* 00876c99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00876c9a:; BB(0x00876c9a);
    /* 00876c9a: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00876c9d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00876c9f: je 0x876ca8 */ if (fZ) goto L_00876ca8;
L_00876ca1:; BB(0x00876ca1);
    /* 00876ca1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00876ca2: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x876ca7u); f_00858882();
    /* 00876ca7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00876ca8:; BB(0x00876ca8);
    /* 00876ca8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00876caa: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 00876cac: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 00876caf: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 00876cb2: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 00876cb5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00876cb6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00876cb7: ret  */ FN_RET(0x00876c4c); r_esp += 4; return;
L_00876cb8:; BB(0x00876cb8);
    /* 00876cb8: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00876cba: jmp 0x876c81 */ goto L_00876c81;
}

void f_00876cbc(void) /* sub_876CBC */
{
    FN_ENTER(0x00876cbc);
    /* 00876cbc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00876cc0: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 00876cc3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00876cc5: je 0x876ccf */ if (fZ) goto L_00876ccf;
L_00876cc7:; BB(0x00876cc7);
    /* 00876cc7: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00876ccb: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 00876cce: ret  */ FN_RET(0x00876cbc); r_esp += 4; return;
L_00876ccf:; BB(0x00876ccf);
    /* 00876ccf: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00876cd4: ret  */ FN_RET(0x00876cbc); r_esp += 4; return;
}

void f_00876cd8(void) /* sub_876CD8 */
{
    FN_ENTER(0x00876cd8);
    /* 00876cd8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00876cd9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00876cda: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00876cdb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00876cdc: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00876ce0: mov ebp, dword ptr [edi + 0x1c] */ r_ebp = R32((u32)(r_edi+0x1cu));
    /* 00876ce3: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00876ce5: je 0x876e0e */ if (fZ) goto L_00876e0e;
L_00876ceb:; BB(0x00876ceb);
    /* 00876ceb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00876ced: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00876cf0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00876cf2: jle 0x876d0d */ if ((fZ||fS!=fO)) goto L_00876d0d;
L_00876cf4:; BB(0x00876cf4);
    /* 00876cf4: mov esi, edx */ r_esi = r_edx;
L_00876cf6:; BB(0x00876cf6);
    /* 00876cf6: mov ecx, dword ptr [ebp + esi*4 + 0x20] */ r_ecx = R32((u32)(r_ebp+r_esi*4+0x20u));
    /* 00876cfa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00876cfc: je 0x876d08 */ if (fZ) goto L_00876d08;
L_00876cfe:; BB(0x00876cfe);
    /* 00876cfe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00876cff: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x876d04u); f_00858882();
    /* 00876d04: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00876d05: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_00876d08:; BB(0x00876d08);
    /* 00876d08: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00876d09: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00876d0b: jl 0x876cf6 */ if ((fS!=fO)) goto L_00876cf6;
L_00876d0d:; BB(0x00876d0d);
    /* 00876d0d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00876d0f: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00876d13: jle 0x876d36 */ if ((fZ||fS!=fO)) goto L_00876d36;
L_00876d15:; BB(0x00876d15);
    /* 00876d15: mov esi, eax */ r_esi = r_eax;
L_00876d17:; BB(0x00876d17);
    /* 00876d17: mov edx, dword ptr [ebp + esi*4 + 0x120] */ r_edx = R32((u32)(r_ebp+r_esi*4+0x120u));
    /* 00876d1e: mov ecx, dword ptr [edx*4 + 0xa25354] */ r_ecx = R32((u32)(r_edx*4+0xa25354u));
    /* 00876d25: push dword ptr [ebp + esi*4 + 0x220] */ { u32 v = R32((u32)(r_ebp+r_esi*4+0x220u)); r_esp -= 4; W32(r_esp, v); }
    /* 00876d2c: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x876d2fu); call_ind(t); }
    /* 00876d2f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00876d30: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00876d31: cmp esi, dword ptr [ebp + 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00876d34: jl 0x876d17 */ if ((fS!=fO)) goto L_00876d17;
L_00876d36:; BB(0x00876d36);
    /* 00876d36: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00876d38: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00876d3c: jle 0x876d5f */ if ((fZ||fS!=fO)) goto L_00876d5f;
L_00876d3e:; BB(0x00876d3e);
    /* 00876d3e: mov esi, eax */ r_esi = r_eax;
L_00876d40:; BB(0x00876d40);
    /* 00876d40: mov edx, dword ptr [ebp + esi*4 + 0x320] */ r_edx = R32((u32)(r_ebp+r_esi*4+0x320u));
    /* 00876d47: mov ecx, dword ptr [edx*4 + 0xa25340] */ r_ecx = R32((u32)(r_edx*4+0xa25340u));
    /* 00876d4e: push dword ptr [ebp + esi*4 + 0x420] */ { u32 v = R32((u32)(r_ebp+r_esi*4+0x420u)); r_esp -= 4; W32(r_esp, v); }
    /* 00876d55: call dword ptr [ecx + 0xc] */ { u32 t = R32((u32)(r_ecx+0xcu)); r_esp -= 4; W32(r_esp, 0x876d58u); call_ind(t); }
    /* 00876d58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00876d59: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00876d5a: cmp esi, dword ptr [ebp + 0x10] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00876d5d: jl 0x876d40 */ if ((fS!=fO)) goto L_00876d40;
L_00876d5f:; BB(0x00876d5f);
    /* 00876d5f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00876d61: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00876d65: jle 0x876d88 */ if ((fZ||fS!=fO)) goto L_00876d88;
L_00876d67:; BB(0x00876d67);
    /* 00876d67: mov esi, eax */ r_esi = r_eax;
L_00876d69:; BB(0x00876d69);
    /* 00876d69: mov edx, dword ptr [ebp + esi*4 + 0x520] */ r_edx = R32((u32)(r_ebp+r_esi*4+0x520u));
    /* 00876d70: mov ecx, dword ptr [edx*4 + 0xa25348] */ r_ecx = R32((u32)(r_edx*4+0xa25348u));
    /* 00876d77: push dword ptr [ebp + esi*4 + 0x620] */ { u32 v = R32((u32)(r_ebp+r_esi*4+0x620u)); r_esp -= 4; W32(r_esp, v); }
    /* 00876d7e: call dword ptr [ecx + 0xc] */ { u32 t = R32((u32)(r_ecx+0xcu)); r_esp -= 4; W32(r_esp, 0x876d81u); call_ind(t); }
    /* 00876d81: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00876d82: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00876d83: cmp esi, dword ptr [ebp + 0x14] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00876d86: jl 0x876d69 */ if ((fS!=fO)) goto L_00876d69;
L_00876d88:; BB(0x00876d88);
    /* 00876d88: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00876d8a: cmp dword ptr [ebp + 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00876d8e: jle 0x876dd9 */ if ((fZ||fS!=fO)) goto L_00876dd9;
L_00876d90:; BB(0x00876d90);
    /* 00876d90: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00876d93: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00876d95: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00876d97: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00876d99: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00876d9b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00876d9d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00876d9f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00876da1: mov esi, edx */ r_esi = r_edx;
    /* 00876da3: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00876da6: mov ebx, eax */ r_ebx = r_eax;
L_00876da8:; BB(0x00876da8);
    /* 00876da8: mov ecx, dword ptr [ebp + esi*4 + 0x720] */ r_ecx = R32((u32)(r_ebp+r_esi*4+0x720u));
    /* 00876daf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00876db1: je 0x876dba */ if (fZ) goto L_00876dba;
L_00876db3:; BB(0x00876db3);
    /* 00876db3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00876db4: call 0x884a00 */ r_esp -= 4; W32(r_esp, 0x876db9u); f_00884a00();
    /* 00876db9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00876dba:; BB(0x00876dba);
    /* 00876dba: mov ecx, dword ptr [ebp + 0xb20] */ r_ecx = R32((u32)(r_ebp+0xb20u));
    /* 00876dc0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00876dc2: je 0x876dcd */ if (fZ) goto L_00876dcd;
L_00876dc4:; BB(0x00876dc4);
    /* 00876dc4: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00876dc6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00876dc7: call 0x884b64 */ r_esp -= 4; W32(r_esp, 0x876dccu); f_00884b64();
    /* 00876dcc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00876dcd:; BB(0x00876dcd);
    /* 00876dcd: add ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00876dd0: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00876dd1: cmp esi, dword ptr [ebp + 0x18] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00876dd4: jl 0x876da8 */ if ((fS!=fO)) goto L_00876da8;
L_00876dd6:; BB(0x00876dd6);
    /* 00876dd6: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_00876dd9:; BB(0x00876dd9);
    /* 00876dd9: mov eax, dword ptr [ebp + 0xb20] */ r_eax = R32((u32)(r_ebp+0xb20u));
    /* 00876ddf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00876de1: je 0x876dea */ if (fZ) goto L_00876dea;
L_00876de3:; BB(0x00876de3);
    /* 00876de3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00876de4: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x876de9u); f_00858882();
    /* 00876de9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00876dea:; BB(0x00876dea);
    /* 00876dea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00876dec: cmp dword ptr [ebp + 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00876df0: jle 0x876e07 */ if ((fZ||fS!=fO)) goto L_00876e07;
L_00876df2:; BB(0x00876df2);
    /* 00876df2: mov esi, eax */ r_esi = r_eax;
L_00876df4:; BB(0x00876df4);
    /* 00876df4: push dword ptr [ebp + esi*4 + 0xb24] */ { u32 v = R32((u32)(r_ebp+r_esi*4+0xb24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00876dfb: call 0x879098 */ r_esp -= 4; W32(r_esp, 0x876e00u); f_00879098();
    /* 00876e00: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00876e01: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00876e02: cmp esi, dword ptr [ebp + 0x1c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00876e05: jl 0x876df4 */ if ((fS!=fO)) goto L_00876df4;
L_00876e07:; BB(0x00876e07);
    /* 00876e07: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00876e08: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x876e0du); f_00858882();
    /* 00876e0d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00876e0e:; BB(0x00876e0e);
    /* 00876e0e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00876e10: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 00876e12: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 00876e15: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 00876e18: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 00876e1b: mov dword ptr [edi + 0x10], eax */ W32((u32)(r_edi+0x10u), r_eax);
    /* 00876e1e: mov dword ptr [edi + 0x14], eax */ W32((u32)(r_edi+0x14u), r_eax);
    /* 00876e21: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 00876e24: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 00876e27: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00876e28: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00876e29: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00876e2a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00876e2b: ret  */ FN_RET(0x00876cd8); r_esp += 4; return;
}

void f_00876e2c(void) /* sub_876E2C */
{
    FN_ENTER(0x00876e2c);
    /* 00876e2c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00876e2d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00876e2e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00876e2f: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00876e32: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 00876e36: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00876e38: je 0x876eec */ if (fZ) goto L_00876eec;
L_00876e3e:; BB(0x00876e3e);
    /* 00876e3e: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00876e42: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00876e45: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 00876e48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00876e49: call 0x877da4 */ r_esp -= 4; W32(r_esp, 0x876e4eu); f_00877da4();
    /* 00876e4e: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 00876e52: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00876e54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00876e55: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x876e5au); f_00877c98();
    /* 00876e5a: mov edx, eax */ r_edx = r_eax;
    /* 00876e5c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00876e5f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00876e61: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 00876e65: mov word ptr [esp + 0x20], cx */ W16((u32)(r_esp+0x20u), (u16)r_ecx);
    /* 00876e6a: lea edi, [esp + 0x1c] */ r_edi = (u32)(r_esp+0x1cu);
    /* 00876e6e: mov esi, 6 */ r_esi = 0x6u;
    /* 00876e73: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 00876e77: mov ebx, edx */ r_ebx = r_edx;
L_00876e79:; BB(0x00876e79);
    /* 00876e79: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 00876e7d: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00876e7f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00876e80: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x876e85u); f_00877c98();
    /* 00876e85: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00876e88: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 00876e8a: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00876e8b: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 00876e8c: jne 0x876e79 */ if (!fZ) goto L_00876e79;
L_00876e8e:; BB(0x00876e8e);
    /* 00876e8e: mov edx, ebx */ r_edx = r_ebx;
    /* 00876e90: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 00876e94: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 00876e98: lea esi, [esp + 0x1c] */ r_esi = (u32)(r_esp+0x1cu);
    /* 00876e9c: mov edi, 0x99a6d8 */ r_edi = 0x99a6d8u;
    /* 00876ea1: mov ecx, 6 */ r_ecx = 0x6u;
    /* 00876ea6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00876ea8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00876eaa: je 0x876ebd */ if (fZ) goto L_00876ebd;
L_00876eac:; BB(0x00876eac);
    /* 00876eac: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00876eae: sub al, byte ptr [edi] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_edi)); u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fC = (a < b); }
    /* 00876eb0: jne 0x876ebd */ if (!fZ) goto L_00876ebd;
L_00876eb2:; BB(0x00876eb2);
    /* 00876eb2: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00876eb5: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00876eb8: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fC = (a < b); }
    /* 00876ebb: jne 0x876eac */ if (!fZ) goto L_00876eac;
L_00876ebd:; BB(0x00876ebd);
    /* 00876ebd: seta al */ r_eax = (r_eax & 0xffffff00u) | ((((!fC&&!fZ)) ? 1 : 0) & 0xffu);
    /* 00876ec0: setb cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fC) ? 1 : 0) & 0xffu);
    /* 00876ec3: sub al, cl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ecx; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00876ec5: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00876ec8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00876eca: jne 0x87712b */ if (!fZ) goto L_0087712b;
L_00876ed0:; BB(0x00876ed0);
    /* 00876ed0: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00876ed3: je 0x8770f7 */ if (fZ) goto L_008770f7;
L_00876ed9:; BB(0x00876ed9);
    /* 00876ed9: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00876edc: jne 0x8770be */ if (!fZ) goto L_008770be;
L_00876ee2:; BB(0x00876ee2);
    /* 00876ee2: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00876ee6: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00876eea: jne 0x876ef8 */ if (!fZ) goto L_00876ef8;
L_00876eec:; BB(0x00876eec);
    /* 00876eec: mov eax, 0xffffff7b */ r_eax = 0xffffff7bu;
    /* 00876ef1: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00876ef4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00876ef5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00876ef6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00876ef7: ret  */ FN_RET(0x00876e2c); r_esp += 4; return;
L_00876ef8:; BB(0x00876ef8);
    /* 00876ef8: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00876efc: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00876efe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00876eff: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x876f04u); f_00877c98();
    /* 00876f04: mov edi, eax */ r_edi = r_eax;
    /* 00876f06: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00876f09: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00876f0b: jl 0x877037 */ if ((fS!=fO)) goto L_00877037;
L_00876f11:; BB(0x00876f11);
    /* 00876f11: lea edx, [edi + 1] */ r_edx = (u32)(r_edi+0x1u);
    /* 00876f14: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00876f16: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00876f17: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x876f1cu); f_008587c7();
    /* 00876f1c: mov esi, eax */ r_esi = r_eax;
    /* 00876f1e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00876f21: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00876f25: lea ebp, [edi - 1] */ r_ebp = (u32)(r_edi+0xffffffffu);
    /* 00876f28: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00876f2a: mov dword ptr [edx + 0xc], esi */ W32((u32)(r_edx+0xcu), r_esi);
    /* 00876f2d: je 0x876f52 */ if (fZ) goto L_00876f52;
L_00876f2f:; BB(0x00876f2f);
    /* 00876f2f: lea edi, [ebp + 1] */ r_edi = (u32)(r_ebp+0x1u);
    /* 00876f32: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
L_00876f36:; BB(0x00876f36);
    /* 00876f36: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00876f3a: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00876f3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00876f3d: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x876f42u); f_00877c98();
    /* 00876f42: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00876f45: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 00876f47: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00876f48: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00876f49: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00876f4a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00876f4c: jne 0x876f36 */ if (!fZ) goto L_00876f36;
L_00876f4e:; BB(0x00876f4e);
    /* 00876f4e: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
L_00876f52:; BB(0x00876f52);
    /* 00876f52: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00876f56: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00876f58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00876f59: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x876f5eu); f_00877c98();
    /* 00876f5e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00876f61: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00876f65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00876f67: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00876f6a: jl 0x877037 */ if ((fS!=fO)) goto L_00877037;
L_00876f70:; BB(0x00876f70);
    /* 00876f70: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00876f71: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00876f73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00876f74: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x876f79u); f_008587c7();
    /* 00876f79: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00876f7d: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00876f7f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00876f82: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00876f83: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00876f85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00876f86: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x876f8bu); f_008587c7();
    /* 00876f8b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00876f8e: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00876f92: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00876f94: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00876f98: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00876f9b: jle 0x87701f */ if ((fZ||fS!=fO)) goto L_0087701f;
L_00876fa1:; BB(0x00876fa1);
    /* 00876fa1: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 00876fa5: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
L_00876fa9:; BB(0x00876fa9);
    /* 00876fa9: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00876fad: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00876faf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00876fb0: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x876fb5u); f_00877c98();
    /* 00876fb5: mov esi, eax */ r_esi = r_eax;
    /* 00876fb7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00876fba: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00876fbc: jl 0x87713e */ if ((fS!=fO)) goto L_0087713e;
L_00876fc2:; BB(0x00876fc2);
    /* 00876fc2: lea ebx, [ebp + ebp] */ r_ebx = (u32)(r_ebp+r_ebp);
    /* 00876fc6: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 00876fc9: lea ecx, [esi + 1] */ r_ecx = (u32)(r_esi+0x1u);
    /* 00876fcc: mov dword ptr [edx + ebp*4], esi */ W32((u32)(r_edx+r_ebp*4), r_esi);
    /* 00876fcf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00876fd1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00876fd2: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x876fd7u); f_008587c7();
    /* 00876fd7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00876fda: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00876fdc: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00876fde: mov dword ptr [edx + ebx*2], eax */ W32((u32)(r_edx+r_ebx*2), r_eax);
    /* 00876fe1: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00876fe3: mov eax, dword ptr [ecx + ebx*2] */ r_eax = R32((u32)(r_ecx+r_ebx*2));
    /* 00876fe6: lea ebx, [esi - 1] */ r_ebx = (u32)(r_esi+0xffffffffu);
    /* 00876fe9: je 0x877015 */ if (fZ) goto L_00877015;
L_00876feb:; BB(0x00876feb);
    /* 00876feb: lea esi, [ebx + 1] */ r_esi = (u32)(r_ebx+0x1u);
    /* 00876fee: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00876ff2: mov ebp, eax */ r_ebp = r_eax;
L_00876ff4:; BB(0x00876ff4);
    /* 00876ff4: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00876ff8: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00876ffa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00876ffb: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x877000u); f_00877c98();
    /* 00877000: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00877003: mov byte ptr [ebp], al */ W8((u32)(r_ebp), (u8)r_eax);
    /* 00877006: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00877007: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00877008: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00877009: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087700b: jne 0x876ff4 */ if (!fZ) goto L_00876ff4;
L_0087700d:; BB(0x0087700d);
    /* 0087700d: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 00877011: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
L_00877015:; BB(0x00877015);
    /* 00877015: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00877016: cmp ebp, dword ptr [edi + 8] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edi+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00877019: jl 0x876fa9 */ if ((fS!=fO)) goto L_00876fa9;
L_0087701b:; BB(0x0087701b);
    /* 0087701b: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
L_0087701f:; BB(0x0087701f);
    /* 0087701f: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00877023: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00877025: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00877026: call 0x877c98 */ r_esp -= 4; W32(r_esp, 0x87702bu); f_00877c98();
    /* 0087702b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087702e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00877031: je 0x877137 */ if (fZ) goto L_00877137;
L_00877037:; BB(0x00877037);
    /* 00877037: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0087703b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087703d: je 0x8770a1 */ if (fZ) goto L_008770a1;
L_0087703f:; BB(0x0087703f);
    /* 0087703f: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00877041: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00877045: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00877048: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087704a: jle 0x877147 */ if ((fZ||fS!=fO)) goto L_00877147;
L_00877050:; BB(0x00877050);
    /* 00877050: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00877054: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00877056: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
L_0087705a:; BB(0x0087705a);
    /* 0087705a: mov ecx, dword ptr [edx + ebp*4] */ r_ecx = R32((u32)(r_edx+r_ebp*4));
    /* 0087705d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087705f: je 0x87706d */ if (fZ) goto L_0087706d;
L_00877061:; BB(0x00877061);
    /* 00877061: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00877062: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x877067u); f_00858882();
    /* 00877067: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00877068: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0087706b: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
L_0087706d:; BB(0x0087706d);
    /* 0087706d: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0087706e: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00877070: jl 0x87705a */ if ((fS!=fO)) goto L_0087705a;
L_00877072:; BB(0x00877072);
    /* 00877072: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00877074: je 0x87707d */ if (fZ) goto L_0087707d;
L_00877076:; BB(0x00877076);
    /* 00877076: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00877077: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x87707cu); f_00858882();
    /* 0087707c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0087707d:; BB(0x0087707d);
    /* 0087707d: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00877081: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00877084: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00877086: je 0x87708f */ if (fZ) goto L_0087708f;
L_00877088:; BB(0x00877088);
    /* 00877088: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00877089: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x87708eu); f_00858882();
    /* 0087708e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0087708f:; BB(0x0087708f);
    /* 0087708f: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00877093: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 00877096: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00877098: je 0x8770a1 */ if (fZ) goto L_008770a1;
L_0087709a:; BB(0x0087709a);
    /* 0087709a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0087709b: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8770a0u); f_00858882();
    /* 008770a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008770a1:; BB(0x008770a1);
    /* 008770a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008770a3: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 008770a7: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008770a9: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 008770ac: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 008770af: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 008770b2: mov eax, 0xffffff7b */ r_eax = 0xffffff7bu;
L_008770b7:; BB(0x008770b7);
    /* 008770b7: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008770ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008770bb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008770bc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008770bd: ret  */ FN_RET(0x00876e2c); r_esp += 4; return;
L_008770be:; BB(0x008770be);
    /* 008770be: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008770c1: jne 0x876eec */ if (!fZ) goto L_00876eec;
L_008770c7:; BB(0x008770c7);
    /* 008770c7: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 008770cb: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008770cf: je 0x876eec */ if (fZ) goto L_00876eec;
L_008770d5:; BB(0x008770d5);
    /* 008770d5: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 008770d9: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008770dd: je 0x876eec */ if (fZ) goto L_00876eec;
L_008770e3:; BB(0x008770e3);
    /* 008770e3: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 008770e7: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 008770eb: call 0x877154 */ r_esp -= 4; W32(r_esp, 0x8770f0u); f_00877154();
    /* 008770f0: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008770f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008770f4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008770f5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008770f6: ret  */ FN_RET(0x00876e2c); r_esp += 4; return;
L_008770f7:; BB(0x008770f7);
    /* 008770f7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008770fb: je 0x876eec */ if (fZ) goto L_00876eec;
L_00877101:; BB(0x00877101);
    /* 00877101: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00877105: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00877109: je 0x877117 */ if (fZ) goto L_00877117;
L_0087710b:; BB(0x0087710b);
    /* 0087710b: mov eax, 0xffffff7b */ r_eax = 0xffffff7bu;
    /* 00877110: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00877113: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00877114: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00877115: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00877116: ret  */ FN_RET(0x00876e2c); r_esp += 4; return;
L_00877117:; BB(0x00877117);
    /* 00877117: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0087711b: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0087711f: call 0x877500 */ r_esp -= 4; W32(r_esp, 0x877124u); f_00877500();
    /* 00877124: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00877127: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00877128: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00877129: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0087712a: ret  */ FN_RET(0x00876e2c); r_esp += 4; return;
L_0087712b:; BB(0x0087712b);
    /* 0087712b: mov eax, 0xffffff7c */ r_eax = 0xffffff7cu;
    /* 00877130: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00877133: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00877134: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00877135: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00877136: ret  */ FN_RET(0x00876e2c); r_esp += 4; return;
L_00877137:; BB(0x00877137);
    /* 00877137: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00877139: jmp 0x8770b7 */ goto L_008770b7;
L_0087713e:; BB(0x0087713e);
    /* 0087713e: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 00877142: jmp 0x877037 */ goto L_00877037;
L_00877147:; BB(0x00877147);
    /* 00877147: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0087714b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0087714d: jmp 0x877072 */ goto L_00877072;
}

