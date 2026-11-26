#include "protos.h"

void f_0079800a(void)
{
    FN_ENTER(0x0079800a);
    /* 0079800a: mov ecx, esi */ r_ecx = r_esi;
    /* 0079800c: call 0x799dfc */ r_esp -= 4; W32(r_esp, 0x798011u); f_00799dfc();
    /* 00798011: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x0079800a); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_00798016(void)
{
    FN_ENTER(0x00798016);
    /* 00798016: mov ecx, esi */ r_ecx = r_esi;
    /* 00798018: call 0x79a004 */ r_esp -= 4; W32(r_esp, 0x79801du); f_0079a004();
    /* 0079801d: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x00798016); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_00798022(void)
{
    FN_ENTER(0x00798022);
    /* 00798022: mov ecx, esi */ r_ecx = r_esi;
    /* 00798024: call 0x79a458 */ r_esp -= 4; W32(r_esp, 0x798029u); f_0079a458();
    /* 00798029: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x00798022); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_0079802e(void)
{
    FN_ENTER(0x0079802e);
    /* 0079802e: mov ecx, esi */ r_ecx = r_esi;
    /* 00798030: call 0x79a600 */ r_esp -= 4; W32(r_esp, 0x798035u); f_0079a600();
    /* 00798035: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x0079802e); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_0079803a(void)
{
    FN_ENTER(0x0079803a);
    /* 0079803a: mov ecx, esi */ r_ecx = r_esi;
    /* 0079803c: call 0x79a644 */ r_esp -= 4; W32(r_esp, 0x798041u); f_0079a644();
    /* 00798041: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x0079803a); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_00798046(void)
{
    FN_ENTER(0x00798046);
    /* 00798046: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00798049: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0079804a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079804b: ret  */ FN_RET(0x00798046); r_esp += 4; return;
}

void f_0079804c(void)
{
    FN_ENTER(0x0079804c);
    /* 0079804c: mov ecx, esi */ r_ecx = r_esi;
    /* 0079804e: call 0x7a0b2c */ r_esp -= 4; W32(r_esp, 0x798053u); f_007a0b2c();
    /* 00798053: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x0079804c); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_00798055(void)
{
    FN_ENTER(0x00798055);
    /* 00798055: mov ecx, esi */ r_ecx = r_esi;
    /* 00798057: call 0x79a948 */ r_esp -= 4; W32(r_esp, 0x79805cu); f_0079a948();
    /* 0079805c: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x00798055); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_0079805e(void)
{
    FN_ENTER(0x0079805e);
    /* 0079805e: mov ecx, esi */ r_ecx = r_esi;
    /* 00798060: call 0x7a0c58 */ r_esp -= 4; W32(r_esp, 0x798065u); f_007a0c58();
    /* 00798065: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x0079805e); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_00798067(void)
{
    FN_ENTER(0x00798067);
    /* 00798067: mov ecx, esi */ r_ecx = r_esi;
    /* 00798069: call 0x79a9c8 */ r_esp -= 4; W32(r_esp, 0x79806eu); f_0079a9c8();
    /* 0079806e: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x00798067); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_00798070(void)
{
    FN_ENTER(0x00798070);
    /* 00798070: mov ecx, esi */ r_ecx = r_esi;
    /* 00798072: call 0x7a0aac */ r_esp -= 4; W32(r_esp, 0x798077u); f_007a0aac();
    /* 00798077: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x00798070); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_00798079(void)
{
    FN_ENTER(0x00798079);
    /* 00798079: mov ecx, esi */ r_ecx = r_esi;
    /* 0079807b: call 0x79ad48 */ r_esp -= 4; W32(r_esp, 0x798080u); f_0079ad48();
    /* 00798080: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00798083: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00798084: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00798085: ret  */ FN_RET(0x00798079); r_esp += 4; return;
}

void f_00798086(void)
{
    FN_ENTER(0x00798086);
    /* 00798086: mov ecx, esi */ r_ecx = r_esi;
    /* 00798088: call 0x79adb8 */ r_esp -= 4; W32(r_esp, 0x79808du); f_0079adb8();
    /* 0079808d: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x00798086); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_0079808f(void)
{
    FN_ENTER(0x0079808f);
    /* 0079808f: mov ecx, esi */ r_ecx = r_esi;
    /* 00798091: call 0x79ae78 */ r_esp -= 4; W32(r_esp, 0x798096u); f_0079ae78();
    /* 00798096: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x0079808f); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_00798098(void)
{
    FN_ENTER(0x00798098);
    /* 00798098: mov ecx, esi */ r_ecx = r_esi;
    /* 0079809a: call 0x79af40 */ r_esp -= 4; W32(r_esp, 0x79809fu); f_0079af40();
    /* 0079809f: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x00798098); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_007980a1(void)
{
    FN_ENTER(0x007980a1);
    /* 007980a1: mov ecx, esi */ r_ecx = r_esi;
    /* 007980a3: call 0x79b1bc */ r_esp -= 4; W32(r_esp, 0x7980a8u); f_0079b1bc();
    /* 007980a8: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x007980a1); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_007980aa(void)
{
    FN_ENTER(0x007980aa);
    /* 007980aa: mov ecx, esi */ r_ecx = r_esi;
    /* 007980ac: call 0x79b264 */ r_esp -= 4; W32(r_esp, 0x7980b1u); f_0079b264();
    /* 007980b1: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x007980aa); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_007980b3(void)
{
    FN_ENTER(0x007980b3);
    /* 007980b3: mov ecx, esi */ r_ecx = r_esi;
    /* 007980b5: call 0x79b430 */ r_esp -= 4; W32(r_esp, 0x7980bau); f_0079b430();
    /* 007980ba: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x007980b3); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_007980bc(void)
{
    FN_ENTER(0x007980bc);
    /* 007980bc: mov ecx, esi */ r_ecx = r_esi;
    /* 007980be: call 0x798390 */ r_esp -= 4; W32(r_esp, 0x7980c3u); f_00798390();
    /* 007980c3: jmp 0x7980cc */ goto L_007980cc;
L_007980cc:; BB(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x007980bc); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_007980c5(void)
{
    FN_ENTER(0x007980c5);
    /* 007980c5: mov ecx, esi */ r_ecx = r_esi;
    /* 007980c7: call 0x798390 */ r_esp -= 4; W32(r_esp, 0x7980ccu); f_00798390();
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x007980c5); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_007980cc(void)
{
    FN_ENTER(0x007980cc);
    /* 007980cc: mov eax, dword ptr [0xa96060] */ r_eax = R32((u32)(0xa96060u));
    /* 007980d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980d3: je 0x7980da */ if (fZ) goto L_007980da;
L_007980d5:; BB(0x007980d5);
    /* 007980d5: call 0x40835c */ r_esp -= 4; W32(r_esp, 0x7980dau); f_0040835c();
L_007980da:; BB(0x007980da);
    /* 007980da: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7980dfu); f_006dc358();
    /* 007980df: mov ebx, eax */ r_ebx = r_eax;
    /* 007980e1: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x7980e6u); f_00708734();
    /* 007980e6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007980ec: movsx edx, byte ptr [ecx + 0x10074] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x10074u));
    /* 007980f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980f5: jne 0x798103 */ if (!fZ) goto L_00798103;
L_007980f7:; BB(0x007980f7);
    /* 007980f7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007980f9: jl 0x798103 */ if ((fS!=fO)) goto L_00798103;
L_007980fb:; BB(0x007980fb);
    /* 007980fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007980fd: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798103:; BB(0x00798103);
    /* 00798103: mov byte ptr [ecx + 0x10074], 0 */ W8((u32)(r_ecx+0x10074u), 0x0u);
    /* 0079810a: call 0x6ccf28 */ r_esp -= 4; W32(r_esp, 0x79810fu); f_006ccf28();
    /* 0079810f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00798111: jl 0x798386 */ if ((fS!=fO)) goto L_00798386;
L_00798117:; BB(0x00798117);
    /* 00798117: mov eax, dword ptr [0xaab180] */ r_eax = R32((u32)(0xaab180u));
    /* 0079811c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079811e: je 0x79826b */ if (fZ) goto L_0079826b;
L_00798124:; BB(0x00798124);
    /* 00798124: mov eax, dword ptr [0xaab2a0] */ r_eax = R32((u32)(0xaab2a0u));
    /* 00798129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079812b: jne 0x79824d */ if (!fZ) goto L_0079824d;
L_00798131:; BB(0x00798131);
    /* 00798131: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 00798136: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798139: je 0x798261 */ if (fZ) goto L_00798261;
L_0079813f:; BB(0x0079813f);
    /* 0079813f: call 0x708734 */ r_esp -= 4; W32(r_esp, 0x798144u); f_00708734();
    /* 00798144: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798147: je 0x7982ee */ if (fZ) goto L_007982ee;
L_0079814d:; BB(0x0079814d);
    /* 0079814d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798150: je 0x7982cd */ if (fZ) goto L_007982cd;
L_00798156:; BB(0x00798156);
    /* 00798156: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798159: je 0x7981bd */ if (fZ) goto L_007981bd;
L_0079815b:; BB(0x0079815b);
    /* 0079815b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079815e: jne 0x79817e */ if (!fZ) goto L_0079817e;
L_00798160:; BB(0x00798160);
    /* 00798160: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00798162: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798164: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x798169u); f_00792fe8();
    /* 00798169: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0079816e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079816f: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798174: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798179u); f_00857e29();
    /* 00798179: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079817c: jmp 0x7981d9 */ goto L_007981d9;
L_0079817e:; BB(0x0079817e);
    /* 0079817e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798181: jne 0x7981a1 */ if (!fZ) goto L_007981a1;
L_00798183:; BB(0x00798183);
    /* 00798183: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00798185: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00798187: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79818cu); f_00792fe8();
    /* 0079818c: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 00798191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798192: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798197: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79819cu); f_00857e29();
    /* 0079819c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079819f: jmp 0x7981d9 */ goto L_007981d9;
L_007981a1:; BB(0x007981a1);
    /* 007981a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007981a3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7981a8u); f_00793168();
    /* 007981a8: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981ae: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981b3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981b8u); f_00857e29();
    /* 007981b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007981bb: jmp 0x7981d9 */ goto L_007981d9;
L_007981bd:; BB(0x007981bd);
    /* 007981bd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007981bf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007981c1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7981c6u); f_00792fe8();
    /* 007981c6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007981cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007981cc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007981d1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7981d6u); f_00857e29();
    /* 007981d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007981d9:; BB(0x007981d9);
    /* 007981d9: mov eax, dword ptr [0xa9ab38] */ r_eax = R32((u32)(0xa9ab38u));
    /* 007981de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007981e0: jne 0x7981f7 */ if (!fZ) goto L_007981f7;
L_007981e2:; BB(0x007981e2);
    /* 007981e2: mov eax, 0xaaaac0 */ r_eax = 0xaaaac0u;
    /* 007981e7: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x7981ecu); f_0079a8c4();
    /* 007981ec: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007981f2: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x7981f7u); f_00712c00();
L_007981f7:; BB(0x007981f7);
    /* 007981f7: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x7981fcu); f_00798468();
    /* 007981fc: mov edx, dword ptr [0xaab284] */ r_edx = R32((u32)(0xaab284u));
    /* 00798202: mov dword ptr [0xaab200], 0 */ W32((u32)(0xaab200u), 0x0u);
    /* 0079820c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079820e: mov dword ptr [0xaab218], 0xc */ W32((u32)(0xaab218u), 0xcu);
    /* 00798218: je 0x79822c */ if (fZ) goto L_0079822c;
L_0079821a:; BB(0x0079821a);
    /* 0079821a: movzx eax, byte ptr [edx + 0x10074] */ r_eax = (u32)R8((u32)(r_edx+0x10074u));
    /* 00798221: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798226: mov byte ptr [edx + 0x10074], al */ W8((u32)(r_edx+0x10074u), (u8)r_eax);
L_0079822c:; BB(0x0079822c);
    /* 0079822c: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 00798231: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00798234: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798236: je 0x798261 */ if (fZ) goto L_00798261;
L_00798238:; BB(0x00798238);
    /* 00798238: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079823a: je 0x798244 */ if (fZ) goto L_00798244;
L_0079823c:; BB(0x0079823c);
    /* 0079823c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079823e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00798240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798242: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x798244u); call_ind(t); }
L_00798244:; BB(0x00798244);
    /* 00798244: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00798247: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798249: jne 0x798238 */ if (!fZ) goto L_00798238;
L_0079824b:; BB(0x0079824b);
    /* 0079824b: jmp 0x798261 */ goto L_00798261;
L_0079824d:; BB(0x0079824d);
    /* 0079824d: mov dword ptr [0xaab220], 5 */ W32((u32)(0xaab220u), 0x5u);
    /* 00798257: mov dword ptr [0xaab218], 0x17 */ W32((u32)(0xaab218u), 0x17u);
L_00798261:; BB(0x00798261);
    /* 00798261: mov dword ptr [0xaab1f4], 1 */ W32((u32)(0xaab1f4u), 0x1u);
L_0079826b:; BB(0x0079826b);
    /* 0079826b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0079826e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798270: je 0x7982c7 */ if (fZ) goto L_007982c7;
L_00798272:; BB(0x00798272);
    /* 00798272: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00798276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798278: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0079827a: mov edi, esi */ r_edi = r_esi;
    /* 0079827c: mov esi, eax */ r_esi = r_eax;
L_0079827e:; BB(0x0079827e);
    /* 0079827e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079827f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798284u); f_0068d5a8();
    /* 00798284: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798287: je 0x798349 */ if (fZ) goto L_00798349;
L_0079828d:; BB(0x0079828d);
    /* 0079828d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798290: mov eax, dword ptr [eax + 0xeb4] */ r_eax = R32((u32)(r_eax+0xeb4u));
    /* 00798296: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00798299: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079829f: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a5: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ab: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007982ad: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007982af: cmp eax, dword ptr [ecx + edx*4 + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007982b3: jne 0x79830f */ if (!fZ) goto L_0079830f;
L_007982b5:; BB(0x007982b5);
    /* 007982b5: add ebx, 0x85c */ {  u32 a = r_ebx; u32 b = 0x85cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007982bb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007982be: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007982c1: jb 0x79827e */ if (fC) goto L_0079827e;
L_007982c3:; BB(0x007982c3);
    /* 007982c3: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007982c7:; BB(0x007982c7);
    /* 007982c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007982ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007982cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007982cc: ret  */ FN_RET(0x007980cc); r_esp += 4; return;
L_007982cd:; BB(0x007982cd);
    /* 007982cd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007982cf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982d1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982d6u); f_00792fe8();
    /* 007982d6: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982dc: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 007982e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7982e6u); f_00857e29();
    /* 007982e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007982e9: jmp 0x7981d9 */ goto L_007981d9;
L_007982ee:; BB(0x007982ee);
    /* 007982ee: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007982f0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 007982f2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7982f7u); f_00792fe8();
    /* 007982f7: push 0xaa6d00 */ { u32 v = 0xaa6d00u; r_esp -= 4; W32(r_esp, v); }
    /* 007982fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007982fd: push 0xaaaac0 */ { u32 v = 0xaaaac0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798302: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798307u); f_00857e29();
    /* 00798307: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079830a: jmp 0x7981d9 */ goto L_007981d9;
L_0079830f:; BB(0x0079830f);
    /* 0079830f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00798311: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 00798314: mov dword ptr [ecx + edx*4 + 4], eax */ W32((u32)(r_ecx+r_edx*4+0x4u), r_eax);
    /* 00798318: mov dword ptr [ecx + edx*4 + 8], eax */ W32((u32)(r_ecx+r_edx*4+0x8u), r_eax);
    /* 0079831c: mov dword ptr [ecx + edx*4 + 0xc], eax */ W32((u32)(r_ecx+r_edx*4+0xcu), r_eax);
    /* 00798320: mov byte ptr [ecx + edx*4 + 0x10], al */ W8((u32)(r_ecx+r_edx*4+0x10u), (u8)r_eax);
    /* 00798324: mov byte ptr [ecx + edx*4 + 0x11], al */ W8((u32)(r_ecx+r_edx*4+0x11u), (u8)r_eax);
    /* 00798328: mov byte ptr [ecx + edx*4 + 0x12], al */ W8((u32)(r_ecx+r_edx*4+0x12u), (u8)r_eax);
    /* 0079832c: mov byte ptr [ecx + edx*4 + 0x13], al */ W8((u32)(r_ecx+r_edx*4+0x13u), (u8)r_eax);
    /* 00798330: mov word ptr [ecx + edx*4 + 0x14], ax */ W16((u32)(r_ecx+r_edx*4+0x14u), (u16)r_eax);
    /* 00798335: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798338: mov word ptr [ecx + edx*4 + 0x3c], ax */ W16((u32)(r_ecx+r_edx*4+0x3cu), (u16)r_eax);
    /* 0079833d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798340: mov dword ptr [ecx + edx*4 + 0x34], eax */ W32((u32)(r_ecx+r_edx*4+0x34u), r_eax);
    /* 00798344: jmp 0x7982b5 */ goto L_007982b5;
L_00798349:; BB(0x00798349);
    /* 00798349: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079834c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079834e: mov dword ptr [ebx + edx], eax */ W32((u32)(r_ebx+r_edx), r_eax);
    /* 00798351: mov dword ptr [ebx + edx + 4], eax */ W32((u32)(r_ebx+r_edx+0x4u), r_eax);
    /* 00798355: mov dword ptr [ebx + edx + 8], eax */ W32((u32)(r_ebx+r_edx+0x8u), r_eax);
    /* 00798359: mov dword ptr [ebx + edx + 0xc], eax */ W32((u32)(r_ebx+r_edx+0xcu), r_eax);
    /* 0079835d: mov byte ptr [ebx + edx + 0x10], al */ W8((u32)(r_ebx+r_edx+0x10u), (u8)r_eax);
    /* 00798361: mov byte ptr [ebx + edx + 0x11], al */ W8((u32)(r_ebx+r_edx+0x11u), (u8)r_eax);
    /* 00798365: mov byte ptr [ebx + edx + 0x12], al */ W8((u32)(r_ebx+r_edx+0x12u), (u8)r_eax);
    /* 00798369: mov byte ptr [ebx + edx + 0x13], al */ W8((u32)(r_ebx+r_edx+0x13u), (u8)r_eax);
    /* 0079836d: mov word ptr [ebx + edx + 0x14], ax */ W16((u32)(r_ebx+r_edx+0x14u), (u16)r_eax);
    /* 00798372: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00798375: mov word ptr [ebx + ecx + 0x3c], ax */ W16((u32)(r_ebx+r_ecx+0x3cu), (u16)r_eax);
    /* 0079837a: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0079837d: mov dword ptr [ebx + edx + 0x34], eax */ W32((u32)(r_ebx+r_edx+0x34u), r_eax);
    /* 00798381: jmp 0x7982b5 */ goto L_007982b5;
L_00798386:; BB(0x00798386);
    /* 00798386: call 0x7a09ec */ r_esp -= 4; W32(r_esp, 0x79838bu); f_007a09ec();
    /* 0079838b: jmp 0x79826b */ goto L_0079826b;
}

void f_00798390(void) /* sub_798390 */
{
    FN_ENTER(0x00798390);
    /* 00798390: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00798391: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 00798397: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00798399: je 0x79844e */ if (fZ) goto L_0079844e;
L_0079839f:; BB(0x0079839f);
    /* 0079839f: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 007983a6: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007983a8: je 0x7983fb */ if (fZ) goto L_007983fb;
L_007983aa:; BB(0x007983aa);
    /* 007983aa: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x7983afu); f_00737d90();
    /* 007983af: mov esi, eax */ r_esi = r_eax;
    /* 007983b1: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 007983b7: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7983bcu); f_007127b0();
    /* 007983bc: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007983c2: mov dword ptr [0xaab268], 0 */ W32((u32)(0xaab268u), 0x0u);
    /* 007983cc: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 007983cf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007983d1: push 0x8f8818 */ { u32 v = 0x8f8818u; r_esp -= 4; W32(r_esp, v); }
    /* 007983d6: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007983d8: push 0x97cf0c */ { u32 v = 0x97cf0cu; r_esp -= 4; W32(r_esp, v); }
    /* 007983dd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007983df: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007983e1: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007983e3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007983e5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007983e7: lea esi, [ecx + edx + 0x126b8] */ r_esi = (u32)(r_ecx+r_edx+0x126b8u);
    /* 007983ee: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007983ef: call 0x7d3b28 */ r_esp -= 4; W32(r_esp, 0x7983f4u); f_007d3b28();
    /* 007983f4: call 0x798450 */ r_esp -= 4; W32(r_esp, 0x7983f9u); f_00798450();
    /* 007983f9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007983fa: ret  */ FN_RET(0x00798390); r_esp += 4; return;
L_007983fb:; BB(0x007983fb);
    /* 007983fb: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x798400u); f_00694c6c();
    /* 00798400: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00798406: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00798409: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079840b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079840d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079840f: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00798416: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x79841bu); f_007c1160();
    /* 0079841b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079841d: je 0x79844e */ if (fZ) goto L_0079844e;
L_0079841f:; BB(0x0079841f);
    /* 0079841f: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 00798425: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x79842au); f_00737d90();
    /* 0079842a: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 00798430: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00798433: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00798435: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00798437: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00798439: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079843b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0079843d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079843f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00798441: lea eax, [ecx + edx + 0x126b8] */ r_eax = (u32)(r_ecx+r_edx+0x126b8u);
    /* 00798448: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798449: call 0x7d3eec */ r_esp -= 4; W32(r_esp, 0x79844eu); f_007d3eec();
L_0079844e:; BB(0x0079844e);
    /* 0079844e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079844f: ret  */ FN_RET(0x00798390); r_esp += 4; return;
}

void f_00798450(void) /* sub_798450 */
{
    FN_ENTER(0x00798450);
    /* 00798450: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x798455u); f_0079a050();
    /* 00798455: call 0x798468 */ r_esp -= 4; W32(r_esp, 0x79845au); f_00798468();
    /* 0079845a: mov dword ptr [0xaab218], 0x12 */ W32((u32)(0xaab218u), 0x12u);
    /* 00798464: ret  */ FN_RET(0x00798450); r_esp += 4; return;
}

void f_00798468(void) /* sub_798468 */
{
    FN_ENTER(0x00798468);
    /* 00798468: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079846e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798473u); f_0068d5a8();
    /* 00798473: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798474: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798476: je 0x79847f */ if (fZ) goto L_0079847f;
L_00798478:; BB(0x00798478);
    /* 00798478: mov ecx, eax */ r_ecx = r_eax;
    /* 0079847a: call 0x6942cc */ r_esp -= 4; W32(r_esp, 0x79847fu); f_006942cc();
L_0079847f:; BB(0x0079847f);
    /* 0079847f: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00798485: call 0x717f08 */ r_esp -= 4; W32(r_esp, 0x79848au); f_00717f08();
    /* 0079848a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079848b: ret  */ FN_RET(0x00798468); r_esp += 4; return;
}

void f_0079848c(void) /* sub_79848C */
{
    FN_ENTER(0x0079848c);
    /* 0079848c: mov eax, dword ptr [0xaab240] */ r_eax = R32((u32)(0xaab240u));
    /* 00798491: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798493: je 0x7984ad */ if (fZ) goto L_007984ad;
L_00798495:; BB(0x00798495);
    /* 00798495: movzx eax, byte ptr [eax + 0x1d] */ r_eax = (u32)R8((u32)(r_eax+0x1du));
    /* 00798499: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0079849b: je 0x7984a3 */ if (fZ) goto L_007984a3;
L_0079849d:; BB(0x0079849d);
    /* 0079849d: call 0x7984b4 */ r_esp -= 4; W32(r_esp, 0x7984a2u); f_007984b4();
    /* 007984a2: ret  */ FN_RET(0x0079848c); r_esp += 4; return;
L_007984a3:; BB(0x007984a3);
    /* 007984a3: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007984a5: je 0x7984ac */ if (fZ) goto L_007984ac;
L_007984a7:; BB(0x007984a7);
    /* 007984a7: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x7984acu); f_0079a050();
L_007984ac:; BB(0x007984ac);
    /* 007984ac: ret  */ FN_RET(0x0079848c); r_esp += 4; return;
L_007984ad:; BB(0x007984ad);
    /* 007984ad: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x7984b2u); f_0079a050();
    /* 007984b2: ret  */ FN_RET(0x0079848c); r_esp += 4; return;
}

void f_007984b4(void) /* sub_7984B4 */
{
    FN_ENTER(0x007984b4);
    /* 007984b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007984b5: sub esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007984bb: mov eax, dword ptr [0xaab240] */ r_eax = R32((u32)(0xaab240u));
    /* 007984c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007984c2: je 0x798567 */ if (fZ) goto L_00798567;
L_007984c8:; BB(0x007984c8);
    /* 007984c8: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 007984ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007984d0: je 0x7984e1 */ if (fZ) goto L_007984e1;
L_007984d2:; BB(0x007984d2);
    /* 007984d2: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x7984d7u); f_0073d160();
    /* 007984d7: mov dword ptr [0xaab23c], 0 */ W32((u32)(0xaab23cu), 0x0u);
L_007984e1:; BB(0x007984e1);
    /* 007984e1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007984e3: push dword ptr [0xaab180] */ { u32 v = R32((u32)(0xaab180u)); r_esp -= 4; W32(r_esp, v); }
    /* 007984e9: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x7984eeu); f_0073cd8c();
    /* 007984ee: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007984f1: mov dword ptr [0xaab23c], eax */ W32((u32)(0xaab23cu), r_eax);
    /* 007984f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007984f8: je 0x798555 */ if (fZ) goto L_00798555;
L_007984fa:; BB(0x007984fa);
    /* 007984fa: mov dword ptr [esp], 0x43340000 */ W32((u32)(r_esp), 0x43340000u);
    /* 00798501: mov dword ptr [esp + 4], 0x43700000 */ W32((u32)(r_esp+0x4u), 0x43700000u);
    /* 00798509: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 0079850b: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x798510u); f_00793168();
    /* 00798510: mov ebp, eax */ r_ebp = r_eax;
    /* 00798512: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00798515: mov ecx, dword ptr [0xaab240] */ r_ecx = R32((u32)(0xaab240u));
    /* 0079851b: call 0x723eb8 */ r_esp -= 4; W32(r_esp, 0x798520u); f_00723eb8();
    /* 00798520: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00798524: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798525: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00798526: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00798527: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79852cu); f_00857e29();
    /* 0079852c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079852f: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00798535: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00798539: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0079853c: push 0x43960000 */ { u32 v = 0x43960000u; r_esp -= 4; W32(r_esp, v); }
    /* 00798541: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798542: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00798543: call 0x73ce70 */ r_esp -= 4; W32(r_esp, 0x798548u); f_0073ce70();
    /* 00798548: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 0079854e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00798550: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x798555u); f_0073d148();
L_00798555:; BB(0x00798555);
    /* 00798555: mov dword ptr [0xaab218], 0x24 */ W32((u32)(0xaab218u), 0x24u);
    /* 0079855f: add esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00798565: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00798566: ret  */ FN_RET(0x007984b4); r_esp += 4; return;
L_00798567:; BB(0x00798567);
    /* 00798567: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x79856cu); f_0079a050();
    /* 0079856c: add esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00798572: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00798573: ret  */ FN_RET(0x007984b4); r_esp += 4; return;
}

void f_00798574(void) /* sub_798574 */
{
    FN_ENTER(0x00798574);
    /* 00798574: mov ecx, dword ptr [0xaab234] */ r_ecx = R32((u32)(0xaab234u));
    /* 0079857a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079857c: je 0x79858c */ if (fZ) goto L_0079858c;
L_0079857e:; BB(0x0079857e);
    /* 0079857e: call 0x78bb6c */ r_esp -= 4; W32(r_esp, 0x798583u); f_0078bb6c();
    /* 00798583: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00798585: je 0x79858c */ if (fZ) goto L_0079858c;
L_00798587:; BB(0x00798587);
    /* 00798587: call 0x798e98 */ r_esp -= 4; W32(r_esp, 0x79858cu); f_00798e98();
L_0079858c:; BB(0x0079858c);
    /* 0079858c: ret  */ FN_RET(0x00798574); r_esp += 4; return;
}

void f_00798590(void) /* sub_798590 */
{
    FN_ENTER(0x00798590);
    /* 00798590: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 00798596: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798598: je 0x79860f */ if (fZ) goto L_0079860f;
L_0079859a:; BB(0x0079859a);
    /* 0079859a: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 007985a1: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007985a3: je 0x798605 */ if (fZ) goto L_00798605;
L_007985a5:; BB(0x007985a5);
    /* 007985a5: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x7985aau); f_007365f4();
    /* 007985aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007985ac: jne 0x7985ff */ if (!fZ) goto L_007985ff;
L_007985ae:; BB(0x007985ae);
    /* 007985ae: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 007985b4: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x7985b9u); f_00737d90();
    /* 007985b9: mov dword ptr [0xaab198], eax */ W32((u32)(0xaab198u), r_eax);
    /* 007985be: mov eax, dword ptr [0xaab268] */ r_eax = R32((u32)(0xaab268u));
    /* 007985c3: movsx ecx, word ptr [eax + 0x88] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x88u));
    /* 007985ca: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 007985cd: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 007985d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007985d2: je 0x7985e9 */ if (fZ) goto L_007985e9;
L_007985d4:; BB(0x007985d4);
    /* 007985d4: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 007985d9: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 007985dc: push 0xa9f960 */ { u32 v = 0xa9f960u; r_esp -= 4; W32(r_esp, v); }
    /* 007985e1: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7985e6u); f_00857dec();
    /* 007985e6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007985e9:; BB(0x007985e9);
    /* 007985e9: mov eax, dword ptr [0xaab198] */ r_eax = R32((u32)(0xaab198u));
    /* 007985ee: cmp eax, 0x1a */ {  u32 a = r_eax; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007985f1: jne 0x7985f9 */ if (!fZ) goto L_007985f9;
L_007985f3:; BB(0x007985f3);
    /* 007985f3: call 0x79880c */ r_esp -= 4; W32(r_esp, 0x7985f8u); f_0079880c();
    /* 007985f8: ret  */ FN_RET(0x00798590); r_esp += 4; return;
L_007985f9:; BB(0x007985f9);
    /* 007985f9: call 0x79863c */ r_esp -= 4; W32(r_esp, 0x7985feu); f_0079863c();
    /* 007985fe: ret  */ FN_RET(0x00798590); r_esp += 4; return;
L_007985ff:; BB(0x007985ff);
    /* 007985ff: call 0x798618 */ r_esp -= 4; W32(r_esp, 0x798604u); f_00798618();
    /* 00798604: ret  */ FN_RET(0x00798590); r_esp += 4; return;
L_00798605:; BB(0x00798605);
    /* 00798605: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00798607: je 0x79860e */ if (fZ) goto L_0079860e;
L_00798609:; BB(0x00798609);
    /* 00798609: call 0x798618 */ r_esp -= 4; W32(r_esp, 0x79860eu); f_00798618();
L_0079860e:; BB(0x0079860e);
    /* 0079860e: ret  */ FN_RET(0x00798590); r_esp += 4; return;
L_0079860f:; BB(0x0079860f);
    /* 0079860f: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x798614u); f_0079a050();
    /* 00798614: ret  */ FN_RET(0x00798590); r_esp += 4; return;
}

void f_00798618(void) /* sub_798618 */
{
    FN_ENTER(0x00798618);
    /* 00798618: mov ecx, dword ptr [0xaab254] */ r_ecx = R32((u32)(0xaab254u));
    /* 0079861e: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x798623u); f_0073600c();
    /* 00798623: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 00798629: call 0x7f67e0 */ r_esp -= 4; W32(r_esp, 0x79862eu); f_007f67e0();
    /* 0079862e: mov dword ptr [0xaab218], 0x4d */ W32((u32)(0xaab218u), 0x4du);
    /* 00798638: ret  */ FN_RET(0x00798618); r_esp += 4; return;
}

void f_0079863c(void) /* sub_79863C */
{
    FN_ENTER(0x0079863c);
    /* 0079863c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079863d: sub esp, 0x180 */ {  u32 a = r_esp; u32 b = 0x180u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00798643: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 00798649: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079864b: je 0x79865c */ if (fZ) goto L_0079865c;
L_0079864d:; BB(0x0079864d);
    /* 0079864d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x798652u); f_007127b0();
    /* 00798652: mov dword ptr [0xaab270], 0 */ W32((u32)(0xaab270u), 0x0u);
L_0079865c:; BB(0x0079865c);
    /* 0079865c: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 00798661: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x798666u); f_0073ec50();
    /* 00798666: mov edi, eax */ r_edi = r_eax;
    /* 00798668: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 0079866d: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x798672u); f_0073ec50();
    /* 00798672: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798673: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00798674: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x798679u); f_0073a888();
    /* 00798679: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079867c: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 00798682: mov dword ptr [0xaab270], eax */ W32((u32)(0xaab270u), r_eax);
    /* 00798687: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x79868cu); f_00737d90();
    /* 0079868c: cmp eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079868f: jl 0x7986ad */ if ((fS!=fO)) goto L_007986ad;
L_00798691:; BB(0x00798691);
    /* 00798691: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00798694: jle 0x7986a0 */ if ((fZ||fS!=fO)) goto L_007986a0;
L_00798696:; BB(0x00798696);
    /* 00798696: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00798699: jl 0x7986ad */ if ((fS!=fO)) goto L_007986ad;
L_0079869b:; BB(0x0079869b);
    /* 0079869b: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079869e: jg 0x7986ad */ if ((!fZ&&fS==fO)) goto L_007986ad;
L_007986a0:; BB(0x007986a0);
    /* 007986a0: call 0x79879c */ r_esp -= 4; W32(r_esp, 0x7986a5u); f_0079879c();
    /* 007986a5: add esp, 0x180 */ {  u32 a = r_esp; u32 b = 0x180u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007986ab: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007986ac: ret  */ FN_RET(0x0079863c); r_esp += 4; return;
L_007986ad:; BB(0x007986ad);
    /* 007986ad: mov eax, dword ptr [0xaab270] */ r_eax = R32((u32)(0xaab270u));
    /* 007986b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007986b4: je 0x798792 */ if (fZ) goto L_00798792;
L_007986ba:; BB(0x007986ba);
    /* 007986ba: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 007986c0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007986c2: je 0x798724 */ if (fZ) goto L_00798724;
L_007986c4:; BB(0x007986c4);
    /* 007986c4: movsx edx, word ptr [ecx + 0x88] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x88u));
    /* 007986cb: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 007986ce: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 007986d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007986d3: je 0x7986e9 */ if (fZ) goto L_007986e9;
L_007986d5:; BB(0x007986d5);
    /* 007986d5: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007986d8: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 007986db: push 0x92c4cc */ { u32 v = 0x92c4ccu; r_esp -= 4; W32(r_esp, v); }
    /* 007986e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007986e1: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7986e6u); f_00857e29();
    /* 007986e6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007986e9:; BB(0x007986e9);
    /* 007986e9: push 0x8b */ { u32 v = 0x8bu; r_esp -= 4; W32(r_esp, v); }
    /* 007986ee: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7986f3u); f_00793168();
    /* 007986f3: lea ecx, [esp + 0x84] */ r_ecx = (u32)(r_esp+0x84u);
    /* 007986fa: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 007986fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007986ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798700: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00798701: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798706u); f_00857e29();
    /* 00798706: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00798709: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 0079870f: lea eax, [esp + 0x80] */ r_eax = (u32)(r_esp+0x80u);
    /* 00798716: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00798718: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798719: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x79871eu); f_0073ae38();
    /* 0079871e: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
L_00798724:; BB(0x00798724);
    /* 00798724: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798726: je 0x79874e */ if (fZ) goto L_0079874e;
L_00798728:; BB(0x00798728);
    /* 00798728: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x79872du); f_00737d90();
    /* 0079872d: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 00798733: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798734: call 0x7f6870 */ r_esp -= 4; W32(r_esp, 0x798739u); f_007f6870();
    /* 00798739: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 0079873f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x798744u); f_007127b0();
    /* 00798744: mov dword ptr [0xaab268], 0 */ W32((u32)(0xaab268u), 0x0u);
L_0079874e:; BB(0x0079874e);
    /* 0079874e: mov ecx, dword ptr [0xaab238] */ r_ecx = R32((u32)(0xaab238u));
    /* 00798754: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798756: je 0x798767 */ if (fZ) goto L_00798767;
L_00798758:; BB(0x00798758);
    /* 00798758: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79875du); f_007127b0();
    /* 0079875d: mov dword ptr [0xaab238], 0 */ W32((u32)(0xaab238u), 0x0u);
L_00798767:; BB(0x00798767);
    /* 00798767: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 0079876d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079876f: je 0x798780 */ if (fZ) goto L_00798780;
L_00798771:; BB(0x00798771);
    /* 00798771: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x798776u); f_007127b0();
    /* 00798776: mov dword ptr [0xaab250], 0 */ W32((u32)(0xaab250u), 0x0u);
L_00798780:; BB(0x00798780);
    /* 00798780: mov dword ptr [0xaab218], 0x51 */ W32((u32)(0xaab218u), 0x51u);
    /* 0079878a: add esp, 0x180 */ {  u32 a = r_esp; u32 b = 0x180u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00798790: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00798791: ret  */ FN_RET(0x0079863c); r_esp += 4; return;
L_00798792:; BB(0x00798792);
    /* 00798792: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 00798798: jmp 0x798724 */ goto L_00798724;
}

void f_00798793(void)
{
    FN_ENTER(0x00798793);
    goto L_00798793;
L_00798724:; BB(0x00798724);
    /* 00798724: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798726: je 0x79874e */ if (fZ) goto L_0079874e;
L_00798728:; BB(0x00798728);
    /* 00798728: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x79872du); f_00737d90();
    /* 0079872d: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 00798733: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798734: call 0x7f6870 */ r_esp -= 4; W32(r_esp, 0x798739u); f_007f6870();
    /* 00798739: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 0079873f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x798744u); f_007127b0();
    /* 00798744: mov dword ptr [0xaab268], 0 */ W32((u32)(0xaab268u), 0x0u);
L_0079874e:; BB(0x0079874e);
    /* 0079874e: mov ecx, dword ptr [0xaab238] */ r_ecx = R32((u32)(0xaab238u));
    /* 00798754: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798756: je 0x798767 */ if (fZ) goto L_00798767;
L_00798758:; BB(0x00798758);
    /* 00798758: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79875du); f_007127b0();
    /* 0079875d: mov dword ptr [0xaab238], 0 */ W32((u32)(0xaab238u), 0x0u);
L_00798767:; BB(0x00798767);
    /* 00798767: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 0079876d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079876f: je 0x798780 */ if (fZ) goto L_00798780;
L_00798771:; BB(0x00798771);
    /* 00798771: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x798776u); f_007127b0();
    /* 00798776: mov dword ptr [0xaab250], 0 */ W32((u32)(0xaab250u), 0x0u);
L_00798780:; BB(0x00798780);
    /* 00798780: mov dword ptr [0xaab218], 0x51 */ W32((u32)(0xaab218u), 0x51u);
    /* 0079878a: add esp, 0x180 */ {  u32 a = r_esp; u32 b = 0x180u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00798790: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00798791: ret  */ FN_RET(0x00798793); r_esp += 4; return;
L_00798793:; BB(0x00798793);
    /* 00798793: or eax, 0xaab268 */ {  u32 a = r_eax; u32 b = 0xaab268u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798798: jmp 0x798724 */ goto L_00798724;
}

void f_0079879c(void) /* sub_79879C */
{
    FN_ENTER(0x0079879c);
    /* 0079879c: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 007987a2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007987a4: je 0x7987cc */ if (fZ) goto L_007987cc;
L_007987a6:; BB(0x007987a6);
    /* 007987a6: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x7987abu); f_00737d90();
    /* 007987ab: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007987b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007987b2: call 0x7f6920 */ r_esp -= 4; W32(r_esp, 0x7987b7u); f_007f6920();
    /* 007987b7: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 007987bd: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7987c2u); f_007127b0();
    /* 007987c2: mov dword ptr [0xaab268], 0 */ W32((u32)(0xaab268u), 0x0u);
L_007987cc:; BB(0x007987cc);
    /* 007987cc: mov ecx, dword ptr [0xaab238] */ r_ecx = R32((u32)(0xaab238u));
    /* 007987d2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007987d4: je 0x7987e5 */ if (fZ) goto L_007987e5;
L_007987d6:; BB(0x007987d6);
    /* 007987d6: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7987dbu); f_007127b0();
    /* 007987db: mov dword ptr [0xaab238], 0 */ W32((u32)(0xaab238u), 0x0u);
L_007987e5:; BB(0x007987e5);
    /* 007987e5: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 007987eb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007987ed: je 0x7987fe */ if (fZ) goto L_007987fe;
L_007987ef:; BB(0x007987ef);
    /* 007987ef: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7987f4u); f_007127b0();
    /* 007987f4: mov dword ptr [0xaab250], 0 */ W32((u32)(0xaab250u), 0x0u);
L_007987fe:; BB(0x007987fe);
    /* 007987fe: mov dword ptr [0xaab218], 0x26 */ W32((u32)(0xaab218u), 0x26u);
    /* 00798808: ret  */ FN_RET(0x0079879c); r_esp += 4; return;
}

void f_0079880c(void) /* sub_79880C */
{
    FN_ENTER(0x0079880c);
    /* 0079880c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079880d: mov ebp, esp */ r_ebp = r_esp;
    /* 0079880f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00798811: push 0x8f53cc */ { u32 v = 0x8f53ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00798816: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0079881c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079881d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00798824: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00798827: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0079882a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0079882d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00798830: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00798833: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 00798839: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079883b: je 0x79884c */ if (fZ) goto L_0079884c;
L_0079883d:; BB(0x0079883d);
    /* 0079883d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x798842u); f_007127b0();
    /* 00798842: mov dword ptr [0xaab270], 0 */ W32((u32)(0xaab270u), 0x0u);
L_0079884c:; BB(0x0079884c);
    /* 0079884c: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00798852: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798854: je 0x798865 */ if (fZ) goto L_00798865;
L_00798856:; BB(0x00798856);
    /* 00798856: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x79885bu); f_0073d160();
    /* 0079885b: mov dword ptr [0xaab23c], 0 */ W32((u32)(0xaab23cu), 0x0u);
L_00798865:; BB(0x00798865);
    /* 00798865: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 0079886b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079886d: je 0x79887e */ if (fZ) goto L_0079887e;
L_0079886f:; BB(0x0079886f);
    /* 0079886f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x798874u); f_007127b0();
    /* 00798874: mov dword ptr [0xaab268], 0 */ W32((u32)(0xaab268u), 0x0u);
L_0079887e:; BB(0x0079887e);
    /* 0079887e: mov ecx, dword ptr [0xaab238] */ r_ecx = R32((u32)(0xaab238u));
    /* 00798884: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798886: je 0x798897 */ if (fZ) goto L_00798897;
L_00798888:; BB(0x00798888);
    /* 00798888: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x79888du); f_007127b0();
    /* 0079888d: mov dword ptr [0xaab238], 0 */ W32((u32)(0xaab238u), 0x0u);
L_00798897:; BB(0x00798897);
    /* 00798897: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 0079889d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079889f: je 0x7988b0 */ if (fZ) goto L_007988b0;
L_007988a1:; BB(0x007988a1);
    /* 007988a1: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7988a6u); f_007127b0();
    /* 007988a6: mov dword ptr [0xaab250], 0 */ W32((u32)(0xaab250u), 0x0u);
L_007988b0:; BB(0x007988b0);
    /* 007988b0: mov eax, dword ptr [0xaab240] */ r_eax = R32((u32)(0xaab240u));
    /* 007988b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007988b7: je 0x7988d1 */ if (fZ) goto L_007988d1;
L_007988b9:; BB(0x007988b9);
    /* 007988b9: mov dword ptr [0xaab218], 0x53 */ W32((u32)(0xaab218u), 0x53u);
    /* 007988c3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007988c6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007988cd: mov esp, ebp */ r_esp = r_ebp;
    /* 007988cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007988d0: ret  */ FN_RET(0x0079880c); r_esp += 4; return;
L_007988d1:; BB(0x007988d1);
    /* 007988d1: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007988d8: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 007988da: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7988dfu); f_005caba4();
    /* 007988df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007988e0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007988e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007988e5: je 0x798914 */ if (fZ) goto L_00798914;
L_007988e7:; BB(0x007988e7);
    /* 007988e7: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007988ee: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007988f5: push dword ptr [0xaab180] */ { u32 v = R32((u32)(0xaab180u)); r_esp -= 4; W32(r_esp, v); }
    /* 007988fb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007988fe: call 0x723f84 */ r_esp -= 4; W32(r_esp, 0x798903u); f_00723f84();
    /* 00798903: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00798906: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0079890d:; BB(0x0079890d);
    /* 0079890d: mov dword ptr [0xaab240], eax */ W32((u32)(0xaab240u), r_eax);
    /* 00798912: jmp 0x7988b9 */ goto L_007988b9;
L_00798914:; BB(0x00798914);
    /* 00798914: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00798916: jmp 0x79890d */ goto L_0079890d;
}

void f_00798918(void) /* sub_798918 */
{
    FN_ENTER(0x00798918);
    /* 00798918: mov edx, dword ptr [0xaab268] */ r_edx = R32((u32)(0xaab268u));
    /* 0079891e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798920: je 0x79898a */ if (fZ) goto L_0079898a;
L_00798922:; BB(0x00798922);
    /* 00798922: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00798929: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0079892b: je 0x798933 */ if (fZ) goto L_00798933;
L_0079892d:; BB(0x0079892d);
    /* 0079892d: call 0x798990 */ r_esp -= 4; W32(r_esp, 0x798932u); f_00798990();
    /* 00798932: ret  */ FN_RET(0x00798918); r_esp += 4; return;
L_00798933:; BB(0x00798933);
    /* 00798933: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00798935: je 0x79893d */ if (fZ) goto L_0079893d;
L_00798937:; BB(0x00798937);
    /* 00798937: call 0x798e98 */ r_esp -= 4; W32(r_esp, 0x79893cu); f_00798e98();
    /* 0079893c: ret  */ FN_RET(0x00798918); r_esp += 4; return;
L_0079893d:; BB(0x0079893d);
    /* 0079893d: movsx eax, word ptr [edx + 0x88] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x88u));
    /* 00798944: cmp eax, dword ptr [0xaab1c4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaab1c4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079894a: je 0x798989 */ if (fZ) goto L_00798989;
L_0079894c:; BB(0x0079894c);
    /* 0079894c: mov ecx, dword ptr [0xaab238] */ r_ecx = R32((u32)(0xaab238u));
    /* 00798952: mov dword ptr [0xaab1c4], eax */ W32((u32)(0xaab1c4u), r_eax);
    /* 00798957: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00798959: je 0x798989 */ if (fZ) goto L_00798989;
L_0079895b:; BB(0x0079895b);
    /* 0079895b: mov edx, dword ptr [0xaab1c0] */ r_edx = R32((u32)(0xaab1c0u));
    /* 00798961: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00798963: je 0x798989 */ if (fZ) goto L_00798989;
L_00798965:; BB(0x00798965);
    /* 00798965: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00798967: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0079896a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079896c: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0079896e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00798970: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00798972: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00798974: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00798976: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00798978: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079897a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079897c: lea eax, [eax + eax + 0xa9fa6c] */ r_eax = (u32)(r_eax+r_eax+0xa9fa6cu);
    /* 00798983: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798984: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x798989u); f_0073ae38();
L_00798989:; BB(0x00798989);
    /* 00798989: ret  */ FN_RET(0x00798918); r_esp += 4; return;
L_0079898a:; BB(0x0079898a);
    /* 0079898a: call 0x798e98 */ r_esp -= 4; W32(r_esp, 0x79898fu); f_00798e98();
    /* 0079898f: ret  */ FN_RET(0x00798918); r_esp += 4; return;
}

void f_00798990(void) /* sub_798990 */
{
    FN_ENTER(0x00798990);
    /* 00798990: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00798993: mov eax, dword ptr [0xaab264] */ r_eax = R32((u32)(0xaab264u));
    /* 00798998: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079899a: je 0x798a82 */ if (fZ) goto L_00798a82;
L_007989a0:; BB(0x007989a0);
    /* 007989a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007989a2: je 0x7989bd */ if (fZ) goto L_007989bd;
L_007989a4:; BB(0x007989a4);
    /* 007989a4: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 007989a9: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7989aeu); f_00793168();
    /* 007989ae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007989af: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 007989b5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007989b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007989b8: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x7989bdu); f_0073ae38();
L_007989bd:; BB(0x007989bd);
    /* 007989bd: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 007989c3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007989c5: je 0x7989d6 */ if (fZ) goto L_007989d6;
L_007989c7:; BB(0x007989c7);
    /* 007989c7: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7989ccu); f_007127b0();
    /* 007989cc: mov dword ptr [0xaab250], 0 */ W32((u32)(0xaab250u), 0x0u);
L_007989d6:; BB(0x007989d6);
    /* 007989d6: mov dword ptr [esp + 8], 0x43a00000 */ W32((u32)(r_esp+0x8u), 0x43a00000u);
    /* 007989de: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 007989e2: mov dword ptr [esp + 0xc], 0x43700000 */ W32((u32)(r_esp+0xcu), 0x43700000u);
    /* 007989ea: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007989ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007989ed: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x7989f2u); f_00735708();
    /* 007989f2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007989f5: mov dword ptr [0xaab250], eax */ W32((u32)(0xaab250u), r_eax);
    /* 007989fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007989fc: je 0x798a74 */ if (fZ) goto L_00798a74;
L_007989fe:; BB(0x007989fe);
    /* 007989fe: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00798a00: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x798a05u); f_00793168();
    /* 00798a05: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798a06: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 00798a0c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798a0e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00798a10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798a11: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x798a16u); f_00735c90();
    /* 00798a16: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 00798a18: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x798a1du); f_00793168();
    /* 00798a1d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798a1e: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 00798a24: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00798a26: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00798a28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798a29: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x798a2eu); f_00735c90();
    /* 00798a2e: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 00798a34: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00798a36: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00798a3d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798a42: mov word ptr [ecx + 0x84], ax */ W16((u32)(r_ecx+0x84u), (u16)r_eax);
    /* 00798a49: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x798a4eu); f_00736510();
    /* 00798a4e: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 00798a54: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x798a59u); f_0073608c();
    /* 00798a59: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 00798a5f: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x798a64u); f_00736458();
    /* 00798a64: push 0x3f333333 */ { u32 v = 0x3f333333u; r_esp -= 4; W32(r_esp, v); }
    /* 00798a69: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 00798a6f: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x798a74u); f_00712624();
L_00798a74:; BB(0x00798a74);
    /* 00798a74: mov dword ptr [0xaab218], 0x50 */ W32((u32)(0xaab218u), 0x50u);
    /* 00798a7e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00798a81: ret  */ FN_RET(0x00798990); r_esp += 4; return;
L_00798a82:; BB(0x00798a82);
    /* 00798a82: mov dword ptr [esp], 0x43ab0000 */ W32((u32)(r_esp), 0x43ab0000u);
    /* 00798a89: mov dword ptr [esp + 4], 0x43100000 */ W32((u32)(r_esp+0x4u), 0x43100000u);
    /* 00798a91: push 0xd5 */ { u32 v = 0xd5u; r_esp -= 4; W32(r_esp, v); }
    /* 00798a96: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x798a9bu); f_0073ec50();
    /* 00798a9b: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00798a9f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00798aa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798aa1: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x798aa6u); f_0073a888();
    /* 00798aa6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00798aa9: mov dword ptr [0xaab264], eax */ W32((u32)(0xaab264u), r_eax);
    /* 00798aae: jmp 0x7989a0 */ goto L_007989a0;
}

void f_00798ab4(void) /* sub_798AB4 */
{
    FN_ENTER(0x00798ab4);
    /* 00798ab4: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00798aba: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798abc: je 0x798b1c */ if (fZ) goto L_00798b1c;
L_00798abe:; BB(0x00798abe);
    /* 00798abe: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x798ac3u); f_0073ce50();
    /* 00798ac3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798ac5: je 0x798b07 */ if (fZ) goto L_00798b07;
L_00798ac7:; BB(0x00798ac7);
    /* 00798ac7: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00798acd: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x798ad2u); f_0073d134();
    /* 00798ad2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798ad4: jne 0x798b01 */ if (!fZ) goto L_00798b01;
L_00798ad6:; BB(0x00798ad6);
    /* 00798ad6: mov eax, dword ptr [0xa95df0] */ r_eax = R32((u32)(0xa95df0u));
    /* 00798adb: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00798add: add eax, 0x2cc */ {  u32 a = r_eax; u32 b = 0x2ccu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00798ae2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798ae3: push 0xaab1a0 */ { u32 v = 0xaab1a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798ae8: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x798aedu); f_00857dec();
    /* 00798aed: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00798af0: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 00798af6: call 0x7f6718 */ r_esp -= 4; W32(r_esp, 0x798afbu); f_007f6718();
    /* 00798afb: call 0x798b24 */ r_esp -= 4; W32(r_esp, 0x798b00u); f_00798b24();
    /* 00798b00: ret  */ FN_RET(0x00798ab4); r_esp += 4; return;
L_00798b01:; BB(0x00798b01);
    /* 00798b01: call 0x798e98 */ r_esp -= 4; W32(r_esp, 0x798b06u); f_00798e98();
    /* 00798b06: ret  */ FN_RET(0x00798ab4); r_esp += 4; return;
L_00798b07:; BB(0x00798b07);
    /* 00798b07: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00798b0d: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x798b12u); f_0073d114();
    /* 00798b12: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00798b14: je 0x798b1b */ if (fZ) goto L_00798b1b;
L_00798b16:; BB(0x00798b16);
    /* 00798b16: call 0x798e98 */ r_esp -= 4; W32(r_esp, 0x798b1bu); f_00798e98();
L_00798b1b:; BB(0x00798b1b);
    /* 00798b1b: ret  */ FN_RET(0x00798ab4); r_esp += 4; return;
L_00798b1c:; BB(0x00798b1c);
    /* 00798b1c: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x798b21u); f_0079a050();
    /* 00798b21: ret  */ FN_RET(0x00798ab4); r_esp += 4; return;
}

void f_00798b24(void) /* sub_798B24 */
{
    FN_ENTER(0x00798b24);
    /* 00798b24: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00798b2a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00798b2c: je 0x798b3d */ if (fZ) goto L_00798b3d;
L_00798b2e:; BB(0x00798b2e);
    /* 00798b2e: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x798b33u); f_0073d160();
    /* 00798b33: mov dword ptr [0xaab23c], 0 */ W32((u32)(0xaab23cu), 0x0u);
L_00798b3d:; BB(0x00798b3d);
    /* 00798b3d: mov dword ptr [0xaab218], 0x4a */ W32((u32)(0xaab218u), 0x4au);
    /* 00798b47: ret  */ FN_RET(0x00798b24); r_esp += 4; return;
}

void f_00798b48(void) /* sub_798B48 */
{
    FN_ENTER(0x00798b48);
    /* 00798b48: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00798b49: movzx eax, word ptr [0x9ff4fc] */ r_eax = (u32)R16((u32)(0x9ff4fcu));
    /* 00798b50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798b51: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798b56u); f_0068d5a8();
    /* 00798b56: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798b57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798b59: je 0x798bbe */ if (fZ) goto L_00798bbe;
L_00798b5b:; BB(0x00798b5b);
    /* 00798b5b: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 00798b61: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798b63: je 0x798bb7 */ if (fZ) goto L_00798bb7;
L_00798b65:; BB(0x00798b65);
    /* 00798b65: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x798b6au); f_007365f4();
    /* 00798b6a: mov edi, eax */ r_edi = r_eax;
    /* 00798b6c: movzx edx, word ptr [0xa98474] */ r_edx = (u32)R16((u32)(0xa98474u));
    /* 00798b73: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00798b79: je 0x798bb5 */ if (fZ) goto L_00798bb5;
L_00798b7b:; BB(0x00798b7b);
    /* 00798b7b: call 0x78c0a8 */ r_esp -= 4; W32(r_esp, 0x798b80u); f_0078c0a8();
    /* 00798b80: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798b83: je 0x798bb0 */ if (fZ) goto L_00798bb0;
L_00798b85:; BB(0x00798b85);
    /* 00798b85: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798b88: jne 0x798ba4 */ if (!fZ) goto L_00798ba4;
L_00798b8a:; BB(0x00798b8a);
    /* 00798b8a: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 00798b90: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00798b92: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00798b93: call 0x7f6748 */ r_esp -= 4; W32(r_esp, 0x798b98u); f_007f6748();
    /* 00798b98: mov dword ptr [0xaab218], 0x45 */ W32((u32)(0xaab218u), 0x45u);
    /* 00798ba2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00798ba3: ret  */ FN_RET(0x00798b48); r_esp += 4; return;
L_00798ba4:; BB(0x00798ba4);
    /* 00798ba4: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00798ba7: jne 0x798bb5 */ if (!fZ) goto L_00798bb5;
L_00798ba9:; BB(0x00798ba9);
    /* 00798ba9: call 0x798bc8 */ r_esp -= 4; W32(r_esp, 0x798baeu); f_00798bc8();
    /* 00798bae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00798baf: ret  */ FN_RET(0x00798b48); r_esp += 4; return;
L_00798bb0:; BB(0x00798bb0);
    /* 00798bb0: call 0x7a060c */ r_esp -= 4; W32(r_esp, 0x798bb5u); f_007a060c();
L_00798bb5:; BB(0x00798bb5);
    /* 00798bb5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00798bb6: ret  */ FN_RET(0x00798b48); r_esp += 4; return;
L_00798bb7:; BB(0x00798bb7);
    /* 00798bb7: call 0x7a060c */ r_esp -= 4; W32(r_esp, 0x798bbcu); f_007a060c();
    /* 00798bbc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00798bbd: ret  */ FN_RET(0x00798b48); r_esp += 4; return;
L_00798bbe:; BB(0x00798bbe);
    /* 00798bbe: call 0x7a060c */ r_esp -= 4; W32(r_esp, 0x798bc3u); f_007a060c();
    /* 00798bc3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00798bc4: ret  */ FN_RET(0x00798b48); r_esp += 4; return;
}

void f_00798bc8(void) /* sub_798BC8 */
{
    FN_ENTER(0x00798bc8);
    /* 00798bc8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00798bc9: sub esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00798bcf: mov eax, dword ptr [0xaab270] */ r_eax = R32((u32)(0xaab270u));
    /* 00798bd4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798bd6: je 0x798c54 */ if (fZ) goto L_00798c54;
L_00798bd8:; BB(0x00798bd8);
    /* 00798bd8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798bda: je 0x798c17 */ if (fZ) goto L_00798c17;
L_00798bdc:; BB(0x00798bdc);
    /* 00798bdc: mov eax, dword ptr [0xaab250] */ r_eax = R32((u32)(0xaab250u));
    /* 00798be1: push 0x7f */ { u32 v = 0x7fu; r_esp -= 4; W32(r_esp, v); }
    /* 00798be3: movsx ecx, word ptr [eax + 0x8c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x8cu));
    /* 00798bea: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00798bed: mov esi, dword ptr [edx + ecx*4] */ r_esi = R32((u32)(r_edx+r_ecx*4));
    /* 00798bf0: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x798bf5u); f_00793168();
    /* 00798bf5: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00798bf9: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00798bfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798bfd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00798bfe: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798c03u); f_00857e29();
    /* 00798c03: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00798c06: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 00798c0c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00798c0f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00798c11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798c12: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x798c17u); f_0073ae38();
L_00798c17:; BB(0x00798c17);
    /* 00798c17: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 00798c1d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798c1f: je 0x798c30 */ if (fZ) goto L_00798c30;
L_00798c21:; BB(0x00798c21);
    /* 00798c21: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x798c26u); f_007127b0();
    /* 00798c26: mov dword ptr [0xaab250], 0 */ W32((u32)(0xaab250u), 0x0u);
L_00798c30:; BB(0x00798c30);
    /* 00798c30: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 00798c37: mov dword ptr [0xaab218], 0x47 */ W32((u32)(0xaab218u), 0x47u);
    /* 00798c41: and eax, 0xff7f */ {  u32 a = r_eax; u32 b = 0xff7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00798c46: mov word ptr [0xa98474], ax */ W16((u32)(0xa98474u), (u16)r_eax);
    /* 00798c4c: add esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00798c52: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00798c53: ret  */ FN_RET(0x00798bc8); r_esp += 4; return;
L_00798c54:; BB(0x00798c54);
    /* 00798c54: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 00798c59: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x798c5eu); f_0073ec50();
    /* 00798c5e: mov esi, eax */ r_esi = r_eax;
    /* 00798c60: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 00798c65: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x798c6au); f_0073ec50();
    /* 00798c6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798c6b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00798c6c: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x798c71u); f_0073a888();
    /* 00798c71: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00798c74: mov dword ptr [0xaab270], eax */ W32((u32)(0xaab270u), r_eax);
    /* 00798c79: jmp 0x798bd8 */ goto L_00798bd8;
}

void f_00798c80(void) /* sub_798C80 */
{
    FN_ENTER(0x00798c80);
    /* 00798c80: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00798c81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00798c82: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00798c83: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00798c84: sub esp, 0x164 */ {  u32 a = r_esp; u32 b = 0x164u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00798c8a: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00798c90: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798c92: je 0x798e88 */ if (fZ) goto L_00798e88;
L_00798c98:; BB(0x00798c98);
    /* 00798c98: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x798c9du); f_0073ce50();
    /* 00798c9d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798c9f: je 0x798db3 */ if (fZ) goto L_00798db3;
L_00798ca5:; BB(0x00798ca5);
    /* 00798ca5: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00798cab: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x798cb0u); f_0073d134();
    /* 00798cb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798cb2: jne 0x798da3 */ if (!fZ) goto L_00798da3;
L_00798cb8:; BB(0x00798cb8);
    /* 00798cb8: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00798cbe: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00798cc3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798cc5: mov word ptr [0x9ff4fc], ax */ W16((u32)(0x9ff4fcu), (u16)r_eax);
    /* 00798ccb: je 0x798cdc */ if (fZ) goto L_00798cdc;
L_00798ccd:; BB(0x00798ccd);
    /* 00798ccd: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x798cd2u); f_0073d160();
    /* 00798cd2: mov dword ptr [0xaab23c], 0 */ W32((u32)(0xaab23cu), 0x0u);
L_00798cdc:; BB(0x00798cdc);
    /* 00798cdc: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 00798ce2: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00798ce4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798ce6: je 0x798cef */ if (fZ) goto L_00798cef;
L_00798ce8:; BB(0x00798ce8);
    /* 00798ce8: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x798cedu); f_007365f4();
    /* 00798ced: mov edi, eax */ r_edi = r_eax;
L_00798cef:; BB(0x00798cef);
    /* 00798cef: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00798cf5: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798cfau); f_0068d5a8();
    /* 00798cfa: mov ebx, eax */ r_ebx = r_eax;
    /* 00798cfc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00798cff: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798d01: je 0x798e78 */ if (fZ) goto L_00798e78;
L_00798d07:; BB(0x00798d07);
    /* 00798d07: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_00798d09:; BB(0x00798d09);
    /* 00798d09: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00798d0a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x798d0fu); f_0068d5a8();
    /* 00798d0f: mov esi, eax */ r_esi = r_eax;
    /* 00798d11: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00798d14: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798d16: je 0x798d24 */ if (fZ) goto L_00798d24;
L_00798d18:; BB(0x00798d18);
    /* 00798d18: cmp edi, dword ptr [esi + 0xeb4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0xeb4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798d1e: je 0x798e14 */ if (fZ) goto L_00798e14;
L_00798d24:; BB(0x00798d24);
    /* 00798d24: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00798d27: cmp ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00798d2a: jl 0x798d09 */ if ((fS!=fO)) goto L_00798d09;
L_00798d2c:; BB(0x00798d2c);
    /* 00798d2c: je 0x798e04 */ if (fZ) goto L_00798e04;
L_00798d32:; BB(0x00798d32);
    /* 00798d32: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00798d34: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798d36: je 0x798df4 */ if (fZ) goto L_00798df4;
L_00798d3c:; BB(0x00798d3c);
    /* 00798d3c: mov eax, dword ptr [0xaab264] */ r_eax = R32((u32)(0xaab264u));
    /* 00798d41: mov dword ptr [esp + 0x5c], 0x43ab0000 */ W32((u32)(r_esp+0x5cu), 0x43ab0000u);
    /* 00798d49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798d4b: mov dword ptr [esp + 0x60], 0x43100000 */ W32((u32)(r_esp+0x60u), 0x43100000u);
    /* 00798d53: je 0x798dd2 */ if (fZ) goto L_00798dd2;
L_00798d55:; BB(0x00798d55);
    /* 00798d55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798d57: je 0x798d8e */ if (fZ) goto L_00798d8e;
L_00798d59:; BB(0x00798d59);
    /* 00798d59: push 0x7d */ { u32 v = 0x7du; r_esp -= 4; W32(r_esp, v); }
    /* 00798d5b: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x798d60u); f_00793168();
    /* 00798d60: mov ebx, eax */ r_ebx = r_eax;
    /* 00798d62: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00798d65: mov ecx, esi */ r_ecx = r_esi;
    /* 00798d67: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x798d6cu); f_006936b4();
    /* 00798d6c: lea edx, [esp + 0x64] */ r_edx = (u32)(r_esp+0x64u);
    /* 00798d70: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00798d71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798d72: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00798d73: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00798d74: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x798d79u); f_00857e29();
    /* 00798d79: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00798d7c: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 00798d82: lea eax, [esp + 0x64] */ r_eax = (u32)(r_esp+0x64u);
    /* 00798d86: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00798d88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798d89: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x798d8eu); f_0073ae38();
L_00798d8e:; BB(0x00798d8e);
    /* 00798d8e: mov dword ptr [0xaab218], 0x44 */ W32((u32)(0xaab218u), 0x44u);
    /* 00798d98: add esp, 0x164 */ {  u32 a = r_esp; u32 b = 0x164u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00798d9e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00798d9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00798da0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00798da1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00798da2: ret  */ FN_RET(0x00798c80); r_esp += 4; return;
L_00798da3:; BB(0x00798da3);
    /* 00798da3: call 0x798e98 */ r_esp -= 4; W32(r_esp, 0x798da8u); f_00798e98();
    /* 00798da8: add esp, 0x164 */ {  u32 a = r_esp; u32 b = 0x164u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00798dae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00798daf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00798db0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00798db1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00798db2: ret  */ FN_RET(0x00798c80); r_esp += 4; return;
L_00798db3:; BB(0x00798db3);
    /* 00798db3: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00798db9: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x798dbeu); f_0073d114();
    /* 00798dbe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798dc0: je 0x798dc7 */ if (fZ) goto L_00798dc7;
L_00798dc2:; BB(0x00798dc2);
    /* 00798dc2: call 0x798e98 */ r_esp -= 4; W32(r_esp, 0x798dc7u); f_00798e98();
L_00798dc7:; BB(0x00798dc7);
    /* 00798dc7: add esp, 0x164 */ {  u32 a = r_esp; u32 b = 0x164u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00798dcd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00798dce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00798dcf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00798dd0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00798dd1: ret  */ FN_RET(0x00798c80); r_esp += 4; return;
L_00798dd2:; BB(0x00798dd2);
    /* 00798dd2: push 0xd5 */ { u32 v = 0xd5u; r_esp -= 4; W32(r_esp, v); }
    /* 00798dd7: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x798ddcu); f_0073ec50();
    /* 00798ddc: lea edx, [esp + 0x60] */ r_edx = (u32)(r_esp+0x60u);
    /* 00798de0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00798de1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798de2: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x798de7u); f_0073a888();
    /* 00798de7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00798dea: mov dword ptr [0xaab264], eax */ W32((u32)(0xaab264u), r_eax);
    /* 00798def: jmp 0x798d55 */ goto L_00798d55;
L_00798df4:; BB(0x00798df4);
    /* 00798df4: call 0x7a060c */ r_esp -= 4; W32(r_esp, 0x798df9u); f_007a060c();
    /* 00798df9: add esp, 0x164 */ {  u32 a = r_esp; u32 b = 0x164u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00798dff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00798e00: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00798e01: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00798e02: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00798e03: ret  */ FN_RET(0x00798c80); r_esp += 4; return;
L_00798e04:; BB(0x00798e04);
    /* 00798e04: call 0x7a060c */ r_esp -= 4; W32(r_esp, 0x798e09u); f_007a060c();
    /* 00798e09: add esp, 0x164 */ {  u32 a = r_esp; u32 b = 0x164u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00798e0f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00798e10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00798e11: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00798e12: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00798e13: ret  */ FN_RET(0x00798c80); r_esp += 4; return;
L_00798e14:; BB(0x00798e14);
    /* 00798e14: mov edi, dword ptr [0xa95df0] */ r_edi = R32((u32)(0xa95df0u));
    /* 00798e1a: mov byte ptr [esp], 0xcd */ W8((u32)(r_esp), 0xcdu);
    /* 00798e1e: add edi, 0x2cc */ {  u32 a = r_edi; u32 b = 0x2ccu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00798e24: mov word ptr [0x9ff4fc], bp */ W16((u32)(0x9ff4fcu), (u16)r_ebp);
    /* 00798e2b: mov byte ptr [esp + 1], 0x17 */ W8((u32)(r_esp+0x1u), 0x17u);
    /* 00798e30: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 00798e34: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00798e36: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00798e37: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00798e38: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x798e3du); f_00857dec();
    /* 00798e3d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00798e40: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00798e42: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x798e47u); f_006936b4();
    /* 00798e47: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00798e4b: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00798e4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798e4e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00798e4f: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x798e54u); f_00857dec();
    /* 00798e54: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00798e57: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 00798e5d: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00798e65: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00798e69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00798e6a: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00798e6e: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x798e73u); f_00800464();
    /* 00798e73: jmp 0x798d3c */ goto L_00798d3c;
L_00798e78:; BB(0x00798e78);
    /* 00798e78: call 0x798e98 */ r_esp -= 4; W32(r_esp, 0x798e7du); f_00798e98();
    /* 00798e7d: add esp, 0x164 */ {  u32 a = r_esp; u32 b = 0x164u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00798e83: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00798e84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00798e85: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00798e86: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00798e87: ret  */ FN_RET(0x00798c80); r_esp += 4; return;
L_00798e88:; BB(0x00798e88);
    /* 00798e88: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x798e8du); f_0079a050();
    /* 00798e8d: add esp, 0x164 */ {  u32 a = r_esp; u32 b = 0x164u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00798e93: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00798e94: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00798e95: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00798e96: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00798e97: ret  */ FN_RET(0x00798c80); r_esp += 4; return;
}

void f_00798da9(void)
{
    FN_ENTER(0x00798da9);
    /* 00798da9: les esp, ptr [ecx + eax] */ UNSUP(0x00798da9, "les esp, ptr [ecx + eax]");
    /* 00798dad: add byte ptr [ebx + 0x5d], bl */ { u32 ad = (u32)(r_ebx+0x5du);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00798db0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00798db1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00798db2: ret  */ FN_RET(0x00798da9); r_esp += 4; return;
}

void f_00798e98(void) /* sub_798E98 */
{
    FN_ENTER(0x00798e98);
    /* 00798e98: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00798e99: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 00798e9f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798ea1: je 0x798eb2 */ if (fZ) goto L_00798eb2;
L_00798ea3:; BB(0x00798ea3);
    /* 00798ea3: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x798ea8u); f_007127b0();
    /* 00798ea8: mov dword ptr [0xaab270], 0 */ W32((u32)(0xaab270u), 0x0u);
L_00798eb2:; BB(0x00798eb2);
    /* 00798eb2: mov edx, dword ptr [0xaab234] */ r_edx = R32((u32)(0xaab234u));
    /* 00798eb8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798eba: je 0x798ed3 */ if (fZ) goto L_00798ed3;
L_00798ebc:; BB(0x00798ebc);
    /* 00798ebc: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00798ec0: mov dword ptr [0xaab234], 0 */ W32((u32)(0xaab234u), 0x0u);
    /* 00798eca: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798ecf: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00798ed3:; BB(0x00798ed3);
    /* 00798ed3: mov ecx, dword ptr [0xaab268] */ r_ecx = R32((u32)(0xaab268u));
    /* 00798ed9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798edb: je 0x798eec */ if (fZ) goto L_00798eec;
L_00798edd:; BB(0x00798edd);
    /* 00798edd: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x798ee2u); f_007127b0();
    /* 00798ee2: mov dword ptr [0xaab268], 0 */ W32((u32)(0xaab268u), 0x0u);
L_00798eec:; BB(0x00798eec);
    /* 00798eec: mov ecx, dword ptr [0xaab254] */ r_ecx = R32((u32)(0xaab254u));
    /* 00798ef2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798ef4: je 0x798f05 */ if (fZ) goto L_00798f05;
L_00798ef6:; BB(0x00798ef6);
    /* 00798ef6: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x798efbu); f_007127b0();
    /* 00798efb: mov dword ptr [0xaab254], 0 */ W32((u32)(0xaab254u), 0x0u);
L_00798f05:; BB(0x00798f05);
    /* 00798f05: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 00798f0b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798f0d: je 0x798f1e */ if (fZ) goto L_00798f1e;
L_00798f0f:; BB(0x00798f0f);
    /* 00798f0f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x798f14u); f_007127b0();
    /* 00798f14: mov dword ptr [0xaab250], 0 */ W32((u32)(0xaab250u), 0x0u);
L_00798f1e:; BB(0x00798f1e);
    /* 00798f1e: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00798f24: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798f26: je 0x798f37 */ if (fZ) goto L_00798f37;
L_00798f28:; BB(0x00798f28);
    /* 00798f28: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x798f2du); f_0073d160();
    /* 00798f2d: mov dword ptr [0xaab23c], 0 */ W32((u32)(0xaab23cu), 0x0u);
L_00798f37:; BB(0x00798f37);
    /* 00798f37: mov edx, dword ptr [0xaab244] */ r_edx = R32((u32)(0xaab244u));
    /* 00798f3d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798f3f: je 0x798f58 */ if (fZ) goto L_00798f58;
L_00798f41:; BB(0x00798f41);
    /* 00798f41: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00798f45: mov dword ptr [0xaab244], 0 */ W32((u32)(0xaab244u), 0x0u);
    /* 00798f4f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798f54: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00798f58:; BB(0x00798f58);
    /* 00798f58: mov ecx, dword ptr [0xaab238] */ r_ecx = R32((u32)(0xaab238u));
    /* 00798f5e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798f60: je 0x798f71 */ if (fZ) goto L_00798f71;
L_00798f62:; BB(0x00798f62);
    /* 00798f62: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x798f67u); f_007127b0();
    /* 00798f67: mov dword ptr [0xaab238], 0 */ W32((u32)(0xaab238u), 0x0u);
L_00798f71:; BB(0x00798f71);
    /* 00798f71: mov edx, dword ptr [0xaab240] */ r_edx = R32((u32)(0xaab240u));
    /* 00798f77: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798f79: je 0x798f92 */ if (fZ) goto L_00798f92;
L_00798f7b:; BB(0x00798f7b);
    /* 00798f7b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00798f7f: mov dword ptr [0xaab240], 0 */ W32((u32)(0xaab240u), 0x0u);
    /* 00798f89: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00798f8e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00798f92:; BB(0x00798f92);
    /* 00798f92: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00798f94: push dword ptr [0xaab180] */ { u32 v = R32((u32)(0xaab180u)); r_esp -= 4; W32(r_esp, v); }
    /* 00798f9a: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x798f9fu); f_0073cd8c();
    /* 00798f9f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00798fa2: mov dword ptr [0xaab23c], eax */ W32((u32)(0xaab23cu), r_eax);
    /* 00798fa7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00798fa9: je 0x798fcd */ if (fZ) goto L_00798fcd;
L_00798fab:; BB(0x00798fab);
    /* 00798fab: push 0x87 */ { u32 v = 0x87u; r_esp -= 4; W32(r_esp, v); }
    /* 00798fb0: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x798fb5u); f_00793168();
    /* 00798fb5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00798fb6: push dword ptr [0x9ff514] */ { u32 v = R32((u32)(0x9ff514u)); r_esp -= 4; W32(r_esp, v); }
    /* 00798fbc: push 0x9ff50c */ { u32 v = 0x9ff50cu; r_esp -= 4; W32(r_esp, v); }
    /* 00798fc1: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00798fc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00798fc8: call 0x73ce70 */ r_esp -= 4; W32(r_esp, 0x798fcdu); f_0073ce70();
L_00798fcd:; BB(0x00798fcd);
    /* 00798fcd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798fcf: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x798fd4u); f_00791748();
    /* 00798fd4: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 00798fdb: and eax, 0xff7f */ {  u32 a = r_eax; u32 b = 0xff7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00798fe0: mov word ptr [0xa98474], ax */ W16((u32)(0xa98474u), (u16)r_eax);
    /* 00798fe6: push 0x620c */ { u32 v = 0x620cu; r_esp -= 4; W32(r_esp, v); }
    /* 00798feb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798fed: push 0xa9f9e0 */ { u32 v = 0xa9f9e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00798ff2: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x798ff7u); f_0086b5cc();
    /* 00798ff7: mov dword ptr [0xaab1c0], 0 */ W32((u32)(0xaab1c0u), 0x0u);
    /* 00799001: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00799003: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x799008u); f_00793168();
    /* 00799008: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079900b: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x799010u); f_0079a8c4();
    /* 00799010: mov dword ptr [0xaab218], 0x1b */ W32((u32)(0xaab218u), 0x1bu);
    /* 0079901a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079901b: ret  */ FN_RET(0x00798e98); r_esp += 4; return;
}

