#include "protos.h"

void f_00838740(void) /* sub_838740 */
{
    FN_ENTER(0x00838740);
    /* 00838740: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00838741: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00838742: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00838743: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00838744: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00838747: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00838749: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 0083874d: mov esi, eax */ r_esi = r_eax;
    /* 0083874f: mov edi, dword ptr [0xacd4a0] */ r_edi = R32((u32)(0xacd4a0u));
    /* 00838755: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00838759: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083875a: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0083875c: mov dword ptr [0xacd524], ebp */ W32((u32)(0xacd524u), r_ebp);
    /* 00838762: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00838763: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00838764: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00838766: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x838769u); call_ind(t); }
    /* 00838769: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0083876b: jl 0x838ad5 */ if ((fS!=fO)) goto L_00838ad5;
L_00838771:; BB(0x00838771);
    /* 00838771: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00838775: mov ebp, dword ptr [0xacbef0] */ r_ebp = R32((u32)(0xacbef0u));
    /* 0083877b: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0083877f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00838781: jne 0x838abc */ if (!fZ) goto L_00838abc;
L_00838787:; BB(0x00838787);
    /* 00838787: push 0x42c */ { u32 v = 0x42cu; r_esp -= 4; W32(r_esp, v); }
    /* 0083878c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x838791u); f_008581c5();
    /* 00838791: mov edi, eax */ r_edi = r_eax;
    /* 00838793: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00838796: mov edx, dword ptr [0xacd4a0] */ r_edx = R32((u32)(0xacd4a0u));
    /* 0083879c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083879d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0083879f: mov ebp, dword ptr [edx] */ r_ebp = R32((u32)(r_edx));
    /* 008387a1: push dword ptr [0xacd524] */ { u32 v = R32((u32)(0xacd524u)); r_esp -= 4; W32(r_esp, v); }
    /* 008387a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008387a8: call dword ptr [ebp + 0x14] */ { u32 t = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, 0x8387abu); call_ind(t); }
    /* 008387ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008387ad: jne 0x8388bb */ if (!fZ) goto L_008388bb;
L_008387b3:; BB(0x008387b3);
    /* 008387b3: push 0x300 */ { u32 v = 0x300u; r_esp -= 4; W32(r_esp, v); }
    /* 008387b8: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x8387bdu); f_008581c5();
    /* 008387bd: mov ebp, eax */ r_ebp = r_eax;
    /* 008387bf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008387c0: push 0x98a8ec */ { u32 v = 0x98a8ecu; r_esp -= 4; W32(r_esp, v); }
    /* 008387c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008387c6: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x8387cbu); f_00858bf5();
    /* 008387cb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008387ce: mov ecx, ebp */ r_ecx = r_ebp;
    /* 008387d0: call 0x83c070 */ r_esp -= 4; W32(r_esp, 0x8387d5u); f_0083c070();
    /* 008387d5: mov ecx, 1 */ r_ecx = 0x1u;
    /* 008387da: mov edx, ebp */ r_edx = r_ebp;
    /* 008387dc: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x8387e1u); f_0083bf84();
    /* 008387e1: lea eax, [edi + 0x200] */ r_eax = (u32)(r_edi+0x200u);
    /* 008387e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008387e8: push 0x98a8fc */ { u32 v = 0x98a8fcu; r_esp -= 4; W32(r_esp, v); }
    /* 008387ed: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008387ee: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x8387f3u); f_00858bf5();
    /* 008387f3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008387f6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 008387f8: call 0x83c070 */ r_esp -= 4; W32(r_esp, 0x8387fdu); f_0083c070();
    /* 008387fd: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00838802: mov edx, ebp */ r_edx = r_ebp;
    /* 00838804: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x838809u); f_0083bf84();
    /* 00838809: push dword ptr [edi + 0x408] */ { u32 v = R32((u32)(r_edi+0x408u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083880f: push 0x98a90c */ { u32 v = 0x98a90cu; r_esp -= 4; W32(r_esp, v); }
    /* 00838814: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00838815: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x83881au); f_00858bf5();
    /* 0083881a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0083881d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0083881f: call 0x83c070 */ r_esp -= 4; W32(r_esp, 0x838824u); f_0083c070();
    /* 00838824: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00838829: mov edx, ebp */ r_edx = r_ebp;
    /* 0083882b: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x838830u); f_0083bf84();
    /* 00838830: push dword ptr [edi + 0x40c] */ { u32 v = R32((u32)(r_edi+0x40cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00838836: push 0x98a920 */ { u32 v = 0x98a920u; r_esp -= 4; W32(r_esp, v); }
    /* 0083883b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083883c: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x838841u); f_00858bf5();
    /* 00838841: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00838844: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00838846: call 0x83c070 */ r_esp -= 4; W32(r_esp, 0x83884bu); f_0083c070();
    /* 0083884b: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00838850: mov edx, ebp */ r_edx = r_ebp;
    /* 00838852: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x838857u); f_0083bf84();
    /* 00838857: push dword ptr [edi + 0x410] */ { u32 v = R32((u32)(r_edi+0x410u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083885d: push 0x98a934 */ { u32 v = 0x98a934u; r_esp -= 4; W32(r_esp, v); }
    /* 00838862: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00838863: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x838868u); f_00858bf5();
    /* 00838868: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0083886b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0083886d: call 0x83c070 */ r_esp -= 4; W32(r_esp, 0x838872u); f_0083c070();
    /* 00838872: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00838877: mov edx, ebp */ r_edx = r_ebp;
    /* 00838879: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x83887eu); f_0083bf84();
    /* 0083887e: push dword ptr [edi + 0x414] */ { u32 v = R32((u32)(r_edi+0x414u)); r_esp -= 4; W32(r_esp, v); }
    /* 00838884: push 0x98a948 */ { u32 v = 0x98a948u; r_esp -= 4; W32(r_esp, v); }
    /* 00838889: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083888a: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x83888fu); f_00858bf5();
    /* 0083888f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00838892: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00838894: call 0x83c070 */ r_esp -= 4; W32(r_esp, 0x838899u); f_0083c070();
    /* 00838899: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0083889e: mov edx, ebp */ r_edx = r_ebp;
    /* 008388a0: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x8388a5u); f_0083bf84();
    /* 008388a5: mov ecx, 1 */ r_ecx = 0x1u;
    /* 008388aa: mov edx, 0x8f8814 */ r_edx = 0x8f8814u;
    /* 008388af: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x8388b4u); f_0083bf84();
    /* 008388b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008388b5: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8388bau); f_00857e98();
    /* 008388ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008388bb:; BB(0x008388bb);
    /* 008388bb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008388bc: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8388c1u); f_00857e98();
    /* 008388c1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008388c2: push dword ptr [0xacd524] */ { u32 v = R32((u32)(0xacd524u)); r_esp -= 4; W32(r_esp, v); }
    /* 008388c8: mov edx, dword ptr [0xacd4a0] */ r_edx = R32((u32)(0xacd4a0u));
    /* 008388ce: mov ebp, dword ptr [edx] */ r_ebp = R32((u32)(r_edx));
    /* 008388d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008388d1: call dword ptr [ebp + 0x18] */ { u32 t = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, 0x8388d4u); call_ind(t); }
    /* 008388d4: mov edi, eax */ r_edi = r_eax;
    /* 008388d6: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 008388d8: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008388da: je 0x838912 */ if (fZ) goto L_00838912;
L_008388dc:; BB(0x008388dc);
    /* 008388dc: mov eax, dword ptr [0xacd4a0] */ r_eax = R32((u32)(0xacd4a0u));
    /* 008388e1: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 008388e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008388e6: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008388e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008388e9: push dword ptr [0xacd524] */ { u32 v = R32((u32)(0xacd524u)); r_esp -= 4; W32(r_esp, v); }
    /* 008388ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008388f0: call dword ptr [ecx + 0x1c] */ { u32 t = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, 0x8388f3u); call_ind(t); }
    /* 008388f3: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008388f7: cmp edx, dword ptr [0xaf0350] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaf0350u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008388fd: jne 0x83890b */ if (!fZ) goto L_0083890b;
L_008388ff:; BB(0x008388ff);
    /* 008388ff: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00838903: cmp edx, dword ptr [0xaf0354] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaf0354u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00838909: je 0x83891c */ if (fZ) goto L_0083891c;
L_0083890b:; BB(0x0083890b);
    /* 0083890b: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0083890e: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00838910: jb 0x8388dc */ if (fC) goto L_008388dc;
L_00838912:; BB(0x00838912);
    /* 00838912: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00838914: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00838917: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00838918: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00838919: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083891a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083891b: ret  */ FN_RET(0x00838740); r_esp += 4; return;
L_0083891c:; BB(0x0083891c);
    /* 0083891c: mov edx, dword ptr [0xaf0344] */ r_edx = R32((u32)(0xaf0344u));
    /* 00838922: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00838924: je 0x838ab2 */ if (fZ) goto L_00838ab2;
L_0083892a:; BB(0x0083892a);
    /* 0083892a: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083892d: je 0x838aa8 */ if (fZ) goto L_00838aa8;
L_00838933:; BB(0x00838933);
    /* 00838933: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00838936: je 0x838954 */ if (fZ) goto L_00838954;
L_00838938:; BB(0x00838938);
    /* 00838938: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083893b: jne 0x838944 */ if (!fZ) goto L_00838944;
L_0083893d:; BB(0x0083893d);
    /* 0083893d: mov edx, 0x16 */ r_edx = 0x16u;
    /* 00838942: jmp 0x838959 */ goto L_00838959;
L_00838944:; BB(0x00838944);
    /* 00838944: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00838947: jne 0x838950 */ if (!fZ) goto L_00838950;
L_00838949:; BB(0x00838949);
    /* 00838949: mov edx, 0x15 */ r_edx = 0x15u;
    /* 0083894e: jmp 0x838959 */ goto L_00838959;
L_00838950:; BB(0x00838950);
    /* 00838950: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00838952: jmp 0x838959 */ goto L_00838959;
L_00838954:; BB(0x00838954);
    /* 00838954: mov edx, 0x19 */ r_edx = 0x19u;
L_00838959:; BB(0x00838959);
    /* 00838959: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0083895d: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083895f: jne 0x83890b */ if (!fZ) goto L_0083890b;
L_00838961:; BB(0x00838961);
    /* 00838961: mov edx, dword ptr [0xacbef0] */ r_edx = R32((u32)(0xacbef0u));
    /* 00838967: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0083896b: mov dword ptr [esp + 0x24], 0x47 */ W32((u32)(r_esp+0x24u), 0x47u);
    /* 00838973: mov dword ptr [esp + 0x28], 0x4d */ W32((u32)(r_esp+0x28u), 0x4du);
    /* 0083897b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083897d: mov dword ptr [esp + 0x2c], 0x4b */ W32((u32)(r_esp+0x2cu), 0x4bu);
    /* 00838985: mov dword ptr [esp + 0x30], 0x50 */ W32((u32)(r_esp+0x30u), 0x50u);
    /* 0083898d: mov dword ptr [esp + 0x34], 0x49 */ W32((u32)(r_esp+0x34u), 0x49u);
    /* 00838995: je 0x838a24 */ if (fZ) goto L_00838a24;
L_0083899b:; BB(0x0083899b);
    /* 0083899b: mov eax, dword ptr [0xacd4a0] */ r_eax = R32((u32)(0xacd4a0u));
    /* 008389a0: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008389a2: mov edi, 1 */ r_edi = 0x1u;
    /* 008389a7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008389a8: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 008389ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008389ad: mov ebp, dword ptr [esp + 0x48] */ r_ebp = R32((u32)(r_esp+0x48u));
    /* 008389b1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008389b2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008389b3: push dword ptr [0xacd524] */ { u32 v = R32((u32)(0xacd524u)); r_esp -= 4; W32(r_esp, v); }
    /* 008389b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008389ba: call dword ptr [ecx + 0x24] */ { u32 t = R32((u32)(r_ecx+0x24u)); r_esp -= 4; W32(r_esp, 0x8389bdu); call_ind(t); }
    /* 008389bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008389bf: jne 0x838912 */ if (!fZ) goto L_00838912;
L_008389c5:; BB(0x008389c5);
    /* 008389c5: mov edi, ebp */ r_edi = r_ebp;
    /* 008389c7: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
    /* 008389cb: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 008389cf: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_008389d1:; BB(0x008389d1);
    /* 008389d1: push dword ptr [esp + ebp*4 + 0x24] */ { u32 v = R32((u32)(r_esp+r_ebp*4+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 008389d5: mov ecx, dword ptr [0xacd4a0] */ r_ecx = R32((u32)(0xacd4a0u));
    /* 008389db: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008389dd: mov edx, 1 */ r_edx = 0x1u;
    /* 008389e2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008389e3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008389e5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008389e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008389e7: push dword ptr [0xacd524] */ { u32 v = R32((u32)(0xacd524u)); r_esp -= 4; W32(r_esp, v); }
    /* 008389ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008389ee: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x8389f1u); call_ind(t); }
    /* 008389f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008389f3: jne 0x838a17 */ if (!fZ) goto L_00838a17;
L_008389f5:; BB(0x008389f5);
    /* 008389f5: push dword ptr [esp + ebp*4 + 0x24] */ { u32 v = R32((u32)(r_esp+r_ebp*4+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 008389f9: mov edx, dword ptr [0xacd4a0] */ r_edx = R32((u32)(0xacd4a0u));
    /* 008389ff: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00838a01: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00838a02: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00838a03: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00838a05: push dword ptr [0xacd524] */ { u32 v = R32((u32)(0xacd524u)); r_esp -= 4; W32(r_esp, v); }
    /* 00838a0b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00838a0c: call dword ptr [ecx + 0x30] */ { u32 t = R32((u32)(r_ecx+0x30u)); r_esp -= 4; W32(r_esp, 0x838a0fu); call_ind(t); }
    /* 00838a0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00838a11: je 0x838aee */ if (fZ) goto L_00838aee;
L_00838a17:; BB(0x00838a17);
    /* 00838a17: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00838a1a: cmp ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00838a1d: jb 0x8389d1 */ if (fC) goto L_008389d1;
L_00838a1f:; BB(0x00838a1f);
    /* 00838a1f: jmp 0x838912 */ goto L_00838912;
L_00838a24:; BB(0x00838a24);
    /* 00838a24: mov ebp, dword ptr [0xacd4a0] */ r_ebp = R32((u32)(0xacd4a0u));
    /* 00838a2a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00838a2c: mov edx, eax */ r_edx = r_eax;
    /* 00838a2e: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 00838a31: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00838a32: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00838a33: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00838a35: push dword ptr [0xacd524] */ { u32 v = R32((u32)(0xacd524u)); r_esp -= 4; W32(r_esp, v); }
    /* 00838a3b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00838a3c: call dword ptr [edi + 0x24] */ { u32 t = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, 0x838a3fu); call_ind(t); }
    /* 00838a3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00838a41: jne 0x838912 */ if (!fZ) goto L_00838912;
L_00838a47:; BB(0x00838a47);
    /* 00838a47: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 00838a4b: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
    /* 00838a4f: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 00838a53: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_00838a55:; BB(0x00838a55);
    /* 00838a55: push dword ptr [esp + ebp*4 + 0x24] */ { u32 v = R32((u32)(r_esp+r_ebp*4+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00838a59: mov ecx, dword ptr [0xacd4a0] */ r_ecx = R32((u32)(0xacd4a0u));
    /* 00838a5f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00838a61: mov edx, 1 */ r_edx = 0x1u;
    /* 00838a66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00838a67: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00838a69: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00838a6a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00838a6b: push dword ptr [0xacd524] */ { u32 v = R32((u32)(0xacd524u)); r_esp -= 4; W32(r_esp, v); }
    /* 00838a71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00838a72: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x838a75u); call_ind(t); }
    /* 00838a75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00838a77: jne 0x838a9b */ if (!fZ) goto L_00838a9b;
L_00838a79:; BB(0x00838a79);
    /* 00838a79: push dword ptr [esp + ebp*4 + 0x24] */ { u32 v = R32((u32)(r_esp+r_ebp*4+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00838a7d: mov edx, dword ptr [0xacd4a0] */ r_edx = R32((u32)(0xacd4a0u));
    /* 00838a83: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00838a85: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00838a86: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00838a87: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00838a89: push dword ptr [0xacd524] */ { u32 v = R32((u32)(0xacd524u)); r_esp -= 4; W32(r_esp, v); }
    /* 00838a8f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00838a90: call dword ptr [ecx + 0x30] */ { u32 t = R32((u32)(r_ecx+0x30u)); r_esp -= 4; W32(r_esp, 0x838a93u); call_ind(t); }
    /* 00838a93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00838a95: je 0x838b19 */ if (fZ) goto L_00838b19;
L_00838a9b:; BB(0x00838a9b);
    /* 00838a9b: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00838a9e: cmp ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00838aa1: jb 0x838a55 */ if (fC) goto L_00838a55;
L_00838aa3:; BB(0x00838aa3);
    /* 00838aa3: jmp 0x838912 */ goto L_00838912;
L_00838aa8:; BB(0x00838aa8);
    /* 00838aa8: mov edx, 0x18 */ r_edx = 0x18u;
    /* 00838aad: jmp 0x838959 */ goto L_00838959;
L_00838ab2:; BB(0x00838ab2);
    /* 00838ab2: mov edx, 0x17 */ r_edx = 0x17u;
    /* 00838ab7: jmp 0x838959 */ goto L_00838959;
L_00838abc:; BB(0x00838abc);
    /* 00838abc: mov eax, edx */ r_eax = r_edx;
    /* 00838abe: call 0x837a08 */ r_esp -= 4; W32(r_esp, 0x838ac3u); f_00837a08();
    /* 00838ac3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00838ac5: jl 0x838787 */ if ((fS!=fO)) goto L_00838787;
L_00838acb:; BB(0x00838acb);
    /* 00838acb: mov dword ptr [0xaf0344], eax */ W32((u32)(0xaf0344u), r_eax);
    /* 00838ad0: jmp 0x838787 */ goto L_00838787;
L_00838ad5:; BB(0x00838ad5);
    /* 00838ad5: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00838ada: mov edx, 0x98a8cc */ r_edx = 0x98a8ccu;
    /* 00838adf: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x838ae4u); f_0083bf84();
    /* 00838ae4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00838ae6: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00838ae9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00838aea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00838aeb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00838aec: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00838aed: ret  */ FN_RET(0x00838740); r_esp += 4; return;
L_00838aee:; BB(0x00838aee);
    /* 00838aee: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 00838af2: mov dword ptr [esi], 1 */ W32((u32)(r_esi), 0x1u);
    /* 00838af8: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
    /* 00838afc: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 00838b00: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 00838b04: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00838b06: mov eax, 1 */ r_eax = 0x1u;
    /* 00838b0b: mov ebp, dword ptr [esp + ebp*4 + 0x24] */ r_ebp = R32((u32)(r_esp+r_ebp*4+0x24u));
    /* 00838b0f: mov dword ptr [ebx], ebp */ W32((u32)(r_ebx), r_ebp);
    /* 00838b11: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00838b14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00838b15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00838b16: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00838b17: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00838b18: ret  */ FN_RET(0x00838740); r_esp += 4; return;
L_00838b19:; BB(0x00838b19);
    /* 00838b19: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 00838b1d: mov dword ptr [esi], 1 */ W32((u32)(r_esi), 0x1u);
    /* 00838b23: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
    /* 00838b27: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 00838b2b: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 00838b2f: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00838b31: mov eax, 1 */ r_eax = 0x1u;
    /* 00838b36: mov ebp, dword ptr [esp + ebp*4 + 0x24] */ r_ebp = R32((u32)(r_esp+r_ebp*4+0x24u));
    /* 00838b3a: mov dword ptr [ebx], ebp */ W32((u32)(r_ebx), r_ebp);
    /* 00838b3c: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00838b3f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00838b40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00838b41: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00838b42: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00838b43: ret  */ FN_RET(0x00838740); r_esp += 4; return;
}

void f_00838b44(void) /* sub_838B44 */
{
    FN_ENTER(0x00838b44);
    /* 00838b44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00838b45: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00838b46: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00838b47: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00838b49: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00838b4b: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00838b50: mov edx, 2 */ r_edx = 0x2u;
    /* 00838b55: mov eax, 3 */ r_eax = 0x3u;
L_00838b5a:; BB(0x00838b5a);
    /* 00838b5a: mov edi, esi */ r_edi = r_esi;
    /* 00838b5c: shl edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00838b5f: movzx edi, di */ r_edi = (u32)(u16)r_edi;
    /* 00838b62: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00838b65: mov word ptr [esi*2 + 0xacd1e0], di */ W16((u32)(r_esi*2+0xacd1e0u), (u16)r_edi);
    /* 00838b6d: mov word ptr [esi*2 + 0xaccfe0], di */ W16((u32)(r_esi*2+0xaccfe0u), (u16)r_edi);
    /* 00838b75: mov word ptr [esi*2 + 0xaccde0], di */ W16((u32)(r_esi*2+0xaccde0u), (u16)r_edi);
    /* 00838b7d: movzx esi, cx */ r_esi = (u32)(u16)r_ecx;
    /* 00838b80: mov edi, esi */ r_edi = r_esi;
    /* 00838b82: shl edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00838b85: movzx edi, di */ r_edi = (u32)(u16)r_edi;
    /* 00838b88: mov word ptr [esi*2 + 0xacd1e0], di */ W16((u32)(r_esi*2+0xacd1e0u), (u16)r_edi);
    /* 00838b90: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00838b93: mov word ptr [esi*2 + 0xaccfe0], di */ W16((u32)(r_esi*2+0xaccfe0u), (u16)r_edi);
    /* 00838b9b: mov word ptr [esi*2 + 0xaccde0], di */ W16((u32)(r_esi*2+0xaccde0u), (u16)r_edi);
    /* 00838ba3: movzx edi, dx */ r_edi = (u32)(u16)r_edx;
    /* 00838ba6: mov esi, edi */ r_esi = r_edi;
    /* 00838ba8: shl esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00838bab: movzx esi, si */ r_esi = (u32)(u16)r_esi;
    /* 00838bae: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00838bb1: mov word ptr [edi*2 + 0xacd1e0], si */ W16((u32)(r_edi*2+0xacd1e0u), (u16)r_esi);
    /* 00838bb9: mov word ptr [edi*2 + 0xaccfe0], si */ W16((u32)(r_edi*2+0xaccfe0u), (u16)r_esi);
    /* 00838bc1: mov word ptr [edi*2 + 0xaccde0], si */ W16((u32)(r_edi*2+0xaccde0u), (u16)r_esi);
    /* 00838bc9: movzx esi, ax */ r_esi = (u32)(u16)r_eax;
    /* 00838bcc: mov edi, esi */ r_edi = r_esi;
    /* 00838bce: shl edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00838bd1: movzx edi, di */ r_edi = (u32)(u16)r_edi;
    /* 00838bd4: mov word ptr [esi*2 + 0xacd1e0], di */ W16((u32)(r_esi*2+0xacd1e0u), (u16)r_edi);
    /* 00838bdc: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00838bdf: mov word ptr [esi*2 + 0xaccfe0], di */ W16((u32)(r_esi*2+0xaccfe0u), (u16)r_edi);
    /* 00838be7: mov word ptr [esi*2 + 0xaccde0], di */ W16((u32)(r_esi*2+0xaccde0u), (u16)r_edi);
    /* 00838bef: mov esi, ebx */ r_esi = r_ebx;
    /* 00838bf1: cmp esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00838bf7: jl 0x838b5a */ if ((fS!=fO)) goto L_00838b5a;
L_00838bfd:; BB(0x00838bfd);
    /* 00838bfd: mov dword ptr [0xacd520], 0 */ W32((u32)(0xacd520u), 0x0u);
    /* 00838c07: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00838c08: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00838c09: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00838c0a: ret  */ FN_RET(0x00838b44); r_esp += 4; return;
}

void f_00838c0c(void)
{
    FN_ENTER(0x00838c0c);
    /* 00838c0c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00838c10: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00838c15: jne 0x838c46 */ if (!fZ) goto L_00838c46;
L_00838c17:; BB(0x00838c17);
    /* 00838c17: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00838c1c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00838c1e: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00838c20: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00838c22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00838c23: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x838c29u); call_ind(t); }
    /* 00838c29: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00838c2e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00838c30: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 00838c32: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00838c34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00838c35: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x838c3bu); call_ind(t); }
    /* 00838c3b: call 0x836550 */ r_esp -= 4; W32(r_esp, 0x838c40u); f_00836550();
    /* 00838c40: mov eax, 1 */ r_eax = 0x1u;
    /* 00838c45: ret  */ FN_RET(0x00838c0c); r_esp += 4; return;
L_00838c46:; BB(0x00838c46);
    /* 00838c46: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00838c48: ret  */ FN_RET(0x00838c0c); r_esp += 4; return;
}

void f_00838c4c(void) /* sub_838C4C */
{
    FN_ENTER(0x00838c4c);
    /* 00838c4c: mov edx, 0x838c0c */ r_edx = 0x838c0cu;
    /* 00838c51: call 0x8370e4 */ r_esp -= 4; W32(r_esp, 0x838c56u); f_008370e4();
    /* 00838c56: ret  */ FN_RET(0x00838c4c); r_esp += 4; return;
}

void f_00838c58(void) /* sub_838C58 */
{
    FN_ENTER(0x00838c58);
    /* 00838c58: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00838c5c: mov dword ptr [0xacd534], eax */ W32((u32)(0xacd534u), r_eax);
    /* 00838c61: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00838c63: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00838c65: lea eax, [edx + edx*8] */ r_eax = (u32)(r_edx+r_edx*8);
    /* 00838c68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00838c69: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x838c6eu); f_00859c55();
    /* 00838c6e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00838c6f: mov dword ptr [0xacd52c], eax */ W32((u32)(0xacd52cu), r_eax);
    /* 00838c74: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00838c76:; BB(0x00838c76);
    /* 00838c76: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00838c78: mov dword ptr [eax + 0xaccac0], edx */ W32((u32)(r_eax+0xaccac0u), r_edx);
    /* 00838c7e: mov dword ptr [eax + 0xaccac4], edx */ W32((u32)(r_eax+0xaccac4u), r_edx);
    /* 00838c84: mov dword ptr [eax + 0xaccac8], edx */ W32((u32)(r_eax+0xaccac8u), r_edx);
    /* 00838c8a: mov dword ptr [eax + 0xaccacc], edx */ W32((u32)(r_eax+0xaccaccu), r_edx);
    /* 00838c90: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00838c93: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00838c98: jl 0x838c76 */ if ((fS!=fO)) goto L_00838c76;
L_00838c9a:; BB(0x00838c9a);
    /* 00838c9a: ret 4 */ FN_RET(0x00838c58); r_esp += 8; return;
}

void f_00838ca0(void) /* sub_838CA0 */
{
    FN_ENTER(0x00838ca0);
    /* 00838ca0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00838ca1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00838ca4: mov edi, ecx */ r_edi = r_ecx;
    /* 00838ca6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00838ca8: jne 0x838cae */ if (!fZ) goto L_00838cae;
L_00838caa:; BB(0x00838caa);
    /* 00838caa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00838cac: jmp 0x838cb3 */ goto L_00838cb3;
L_00838cae:; BB(0x00838cae);
    /* 00838cae: mov eax, 1 */ r_eax = 0x1u;
L_00838cb3:; BB(0x00838cb3);
    /* 00838cb3: mov dword ptr [0xacd514], eax */ W32((u32)(0xacd514u), r_eax);
    /* 00838cb8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00838cba:; BB(0x00838cba);
    /* 00838cba: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00838cbc: mov dword ptr [eax + 0xaccac0], edx */ W32((u32)(r_eax+0xaccac0u), r_edx);
    /* 00838cc2: mov dword ptr [eax + 0xaccac4], edx */ W32((u32)(r_eax+0xaccac4u), r_edx);
    /* 00838cc8: mov dword ptr [eax + 0xaccac8], edx */ W32((u32)(r_eax+0xaccac8u), r_edx);
    /* 00838cce: mov dword ptr [eax + 0xaccacc], edx */ W32((u32)(r_eax+0xaccaccu), r_edx);
    /* 00838cd4: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00838cd7: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00838cdc: jl 0x838cba */ if ((fS!=fO)) goto L_00838cba;
L_00838cde:; BB(0x00838cde);
    /* 00838cde: mov dword ptr [0xacd538], 0 */ W32((u32)(0xacd538u), 0x0u);
    /* 00838ce8: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 00838ced: mov dword ptr [0xacd498], 0 */ W32((u32)(0xacd498u), 0x0u);
    /* 00838cf7: mov dword ptr [0xacd494], 0 */ W32((u32)(0xacd494u), 0x0u);
    /* 00838d01: mov dword ptr [0xacd490], 0 */ W32((u32)(0xacd490u), 0x0u);
    /* 00838d0b: mov dword ptr [0xacd48c], 0 */ W32((u32)(0xacd48cu), 0x0u);
    /* 00838d15: mov dword ptr [0xacd484], 0 */ W32((u32)(0xacd484u), 0x0u);
    /* 00838d1f: mov dword ptr [0xacd480], 0 */ W32((u32)(0xacd480u), 0x0u);
    /* 00838d29: mov dword ptr [0xacd47c], 0 */ W32((u32)(0xacd47cu), 0x0u);
    /* 00838d33: mov dword ptr [0xacd478], 0 */ W32((u32)(0xacd478u), 0x0u);
    /* 00838d3d: mov dword ptr [0xacd470], 0 */ W32((u32)(0xacd470u), 0x0u);
    /* 00838d47: mov dword ptr [0xacd46c], 0 */ W32((u32)(0xacd46cu), 0x0u);
    /* 00838d51: mov dword ptr [0xacd468], 0 */ W32((u32)(0xacd468u), 0x0u);
    /* 00838d5b: mov dword ptr [0xacd464], 0 */ W32((u32)(0xacd464u), 0x0u);
    /* 00838d65: mov dword ptr [0xacd49c], 0x3f800000 */ W32((u32)(0xacd49cu), 0x3f800000u);
    /* 00838d6f: mov dword ptr [0xacd488], 0x3f800000 */ W32((u32)(0xacd488u), 0x3f800000u);
    /* 00838d79: mov dword ptr [0xacd474], 0x3f800000 */ W32((u32)(0xacd474u), 0x3f800000u);
    /* 00838d83: mov dword ptr [0xacd460], 0x3f800000 */ W32((u32)(0xacd460u), 0x3f800000u);
    /* 00838d8d: mov dword ptr [0xacd458], 0 */ W32((u32)(0xacd458u), 0x0u);
    /* 00838d97: mov dword ptr [0xacd454], 0 */ W32((u32)(0xacd454u), 0x0u);
    /* 00838da1: mov dword ptr [0xacd450], 0 */ W32((u32)(0xacd450u), 0x0u);
    /* 00838dab: mov dword ptr [0xacd44c], 0 */ W32((u32)(0xacd44cu), 0x0u);
    /* 00838db5: mov dword ptr [0xacd444], 0 */ W32((u32)(0xacd444u), 0x0u);
    /* 00838dbf: mov dword ptr [0xacd440], 0 */ W32((u32)(0xacd440u), 0x0u);
    /* 00838dc9: mov dword ptr [0xacd43c], 0 */ W32((u32)(0xacd43cu), 0x0u);
    /* 00838dd3: mov dword ptr [0xacd438], 0 */ W32((u32)(0xacd438u), 0x0u);
    /* 00838ddd: mov dword ptr [0xacd430], 0 */ W32((u32)(0xacd430u), 0x0u);
    /* 00838de7: mov dword ptr [0xacd42c], 0 */ W32((u32)(0xacd42cu), 0x0u);
    /* 00838df1: mov dword ptr [0xacd428], 0 */ W32((u32)(0xacd428u), 0x0u);
    /* 00838dfb: mov dword ptr [0xacd424], 0 */ W32((u32)(0xacd424u), 0x0u);
    /* 00838e05: mov dword ptr [0xacd45c], 0x3f800000 */ W32((u32)(0xacd45cu), 0x3f800000u);
    /* 00838e0f: mov dword ptr [0xacd448], 0x3f800000 */ W32((u32)(0xacd448u), 0x3f800000u);
    /* 00838e19: mov dword ptr [0xacd434], 0x3f800000 */ W32((u32)(0xacd434u), 0x3f800000u);
    /* 00838e23: mov dword ptr [0xacd420], 0x3f800000 */ W32((u32)(0xacd420u), 0x3f800000u);
    /* 00838e2d: mov dword ptr [0xacd418], 0 */ W32((u32)(0xacd418u), 0x0u);
    /* 00838e37: mov dword ptr [0xacd414], 0 */ W32((u32)(0xacd414u), 0x0u);
    /* 00838e41: mov dword ptr [0xacd410], 0 */ W32((u32)(0xacd410u), 0x0u);
    /* 00838e4b: mov dword ptr [0xacd40c], 0 */ W32((u32)(0xacd40cu), 0x0u);
    /* 00838e55: mov dword ptr [0xacd404], 0 */ W32((u32)(0xacd404u), 0x0u);
    /* 00838e5f: mov dword ptr [0xacd400], 0 */ W32((u32)(0xacd400u), 0x0u);
    /* 00838e69: mov dword ptr [0xacd3fc], 0 */ W32((u32)(0xacd3fcu), 0x0u);
    /* 00838e73: mov dword ptr [0xacd3f8], 0 */ W32((u32)(0xacd3f8u), 0x0u);
    /* 00838e7d: mov dword ptr [0xacd3f0], 0 */ W32((u32)(0xacd3f0u), 0x0u);
    /* 00838e87: mov dword ptr [0xacd3ec], 0 */ W32((u32)(0xacd3ecu), 0x0u);
    /* 00838e91: mov dword ptr [0xacd3e8], 0 */ W32((u32)(0xacd3e8u), 0x0u);
    /* 00838e9b: mov dword ptr [0xacd3e4], 0 */ W32((u32)(0xacd3e4u), 0x0u);
    /* 00838ea5: mov dword ptr [0xacd41c], 0x3f800000 */ W32((u32)(0xacd41cu), 0x3f800000u);
    /* 00838eaf: mov dword ptr [0xacd408], 0x3f800000 */ W32((u32)(0xacd408u), 0x3f800000u);
    /* 00838eb9: mov dword ptr [0xacd3f4], 0x3f800000 */ W32((u32)(0xacd3f4u), 0x3f800000u);
    /* 00838ec3: mov dword ptr [0xacd3e0], 0x3f800000 */ W32((u32)(0xacd3e0u), 0x3f800000u);
    /* 00838ecd: call 0x8beff2 */ r_esp -= 4; W32(r_esp, 0x838ed2u); f_008beff2();
    /* 00838ed2: mov dword ptr [0xacd4a0], eax */ W32((u32)(0xacd4a0u), r_eax);
    /* 00838ed7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00838ed9: je 0x8390cb */ if (fZ) goto L_008390cb;
L_00838edf:; BB(0x00838edf);
    /* 00838edf: mov dword ptr [0xacd528], 0 */ W32((u32)(0xacd528u), 0x0u);
    /* 00838ee9: call 0x837a44 */ r_esp -= 4; W32(r_esp, 0x838eeeu); f_00837a44();
    /* 00838eee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00838ef0: jne 0x838ef9 */ if (!fZ) goto L_00838ef9;
L_00838ef2:; BB(0x00838ef2);
    /* 00838ef2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00838ef4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00838ef7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00838ef8: ret  */ FN_RET(0x00838ca0); r_esp += 4; return;
L_00838ef9:; BB(0x00838ef9);
    /* 00838ef9: push 0xaccd00 */ { u32 v = 0xaccd00u; r_esp -= 4; W32(r_esp, v); }
    /* 00838efe: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00838f03: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00838f05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00838f06: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x838f09u); call_ind(t); }
    /* 00838f09: call 0x839f30 */ r_esp -= 4; W32(r_esp, 0x838f0eu); f_00839f30();
    /* 00838f0e: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x838f13u); f_0061cdb0();
    /* 00838f13: push 0xacd4c0 */ { u32 v = 0xacd4c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00838f18: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00838f1d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00838f1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00838f20: call dword ptr [edx + 0xa4] */ { u32 t = R32((u32)(r_edx+0xa4u)); r_esp -= 4; W32(r_esp, 0x838f26u); call_ind(t); }
    /* 00838f26: fild dword ptr [0xacd4c8] */ FPUSH((long double)(i32)R32((u32)(0xacd4c8u)));
    /* 00838f2c: fild dword ptr [0xacd4cc] */ FPUSH((long double)(i32)R32((u32)(0xacd4ccu)));
    /* 00838f32: fild dword ptr [0xacd4c0] */ FPUSH((long double)(i32)R32((u32)(0xacd4c0u)));
    /* 00838f38: fild dword ptr [0xacd4c4] */ FPUSH((long double)(i32)R32((u32)(0xacd4c4u)));
    /* 00838f3e: mov edx, dword ptr [0xacd4c8] */ r_edx = R32((u32)(0xacd4c8u));
    /* 00838f44: fld dword ptr [0x98a848] */ FPUSH(R_F32((u32)(0x98a848u)));
    /* 00838f4a: mov dword ptr [0xacd4d8], 0 */ W32((u32)(0xacd4d8u), 0x0u);
    /* 00838f54: mov eax, edx */ r_eax = r_edx;
    /* 00838f56: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00838f59: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00838f5b: fadd dword ptr [eax*4 + 0x98a828] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98a828u));
    /* 00838f62: fdiv st(4) */ ST(0) = ST(0) / ST(4);
    /* 00838f64: mov eax, dword ptr [0xacd4cc] */ r_eax = R32((u32)(0xacd4ccu));
    /* 00838f69: fstp dword ptr [0xacd518] */ W_F32((u32)(0xacd518u), ST(0)); FPOP();
    /* 00838f6f: mov ecx, eax */ r_ecx = r_eax;
    /* 00838f71: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00838f74: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00838f76: fadd dword ptr [ecx*4 + 0x98a828] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x98a828u));
    /* 00838f7d: fdivrp st(3) */ ST(3) = ST(0) / ST(3); FPOP();
    /* 00838f7f: mov ecx, dword ptr [0xacd460] */ r_ecx = R32((u32)(0xacd460u));
    /* 00838f85: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00838f87: fstp dword ptr [0xacd51c] */ W_F32((u32)(0xacd51cu), ST(0)); FPOP();
    /* 00838f8d: mov dword ptr [0xacccc0], ecx */ W32((u32)(0xacccc0u), r_ecx);
    /* 00838f93: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00838f96: mov ecx, dword ptr [0xacd464] */ r_ecx = R32((u32)(0xacd464u));
    /* 00838f9c: mov dword ptr [0xacccc4], ecx */ W32((u32)(0xacccc4u), r_ecx);
    /* 00838fa2: mov ecx, dword ptr [0xacd468] */ r_ecx = R32((u32)(0xacd468u));
    /* 00838fa8: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00838fab: mov dword ptr [0xacccc8], ecx */ W32((u32)(0xacccc8u), r_ecx);
    /* 00838fb1: mov ecx, dword ptr [0xacd46c] */ r_ecx = R32((u32)(0xacd46cu));
    /* 00838fb7: mov dword ptr [0xaccccc], ecx */ W32((u32)(0xacccccu), r_ecx);
    /* 00838fbd: mov ecx, dword ptr [0xacd470] */ r_ecx = R32((u32)(0xacd470u));
    /* 00838fc3: mov dword ptr [0xacccd0], ecx */ W32((u32)(0xacccd0u), r_ecx);
    /* 00838fc9: mov ecx, dword ptr [0xacd474] */ r_ecx = R32((u32)(0xacd474u));
    /* 00838fcf: mov dword ptr [0xacccd4], ecx */ W32((u32)(0xacccd4u), r_ecx);
    /* 00838fd5: mov ecx, dword ptr [0xacd478] */ r_ecx = R32((u32)(0xacd478u));
    /* 00838fdb: mov dword ptr [0xacccd8], ecx */ W32((u32)(0xacccd8u), r_ecx);
    /* 00838fe1: mov ecx, dword ptr [0xacd47c] */ r_ecx = R32((u32)(0xacd47cu));
    /* 00838fe7: mov dword ptr [0xacccdc], ecx */ W32((u32)(0xacccdcu), r_ecx);
    /* 00838fed: mov ecx, dword ptr [0xacd480] */ r_ecx = R32((u32)(0xacd480u));
    /* 00838ff3: mov dword ptr [0xaccce0], ecx */ W32((u32)(0xaccce0u), r_ecx);
    /* 00838ff9: mov ecx, dword ptr [0xacd484] */ r_ecx = R32((u32)(0xacd484u));
    /* 00838fff: mov dword ptr [0xaccce4], ecx */ W32((u32)(0xaccce4u), r_ecx);
    /* 00839005: mov ecx, dword ptr [0xacd488] */ r_ecx = R32((u32)(0xacd488u));
    /* 0083900b: mov dword ptr [0xaccce8], ecx */ W32((u32)(0xaccce8u), r_ecx);
    /* 00839011: mov ecx, dword ptr [0xacd48c] */ r_ecx = R32((u32)(0xacd48cu));
    /* 00839017: mov dword ptr [0xacccec], ecx */ W32((u32)(0xacccecu), r_ecx);
    /* 0083901d: mov ecx, dword ptr [0xacd490] */ r_ecx = R32((u32)(0xacd490u));
    /* 00839023: mov dword ptr [0xacccf0], ecx */ W32((u32)(0xacccf0u), r_ecx);
    /* 00839029: mov ecx, dword ptr [0xacd494] */ r_ecx = R32((u32)(0xacd494u));
    /* 0083902f: mov dword ptr [0xacccf4], ecx */ W32((u32)(0xacccf4u), r_ecx);
    /* 00839035: mov ecx, dword ptr [0xacd498] */ r_ecx = R32((u32)(0xacd498u));
    /* 0083903b: mov dword ptr [0xacccf8], ecx */ W32((u32)(0xacccf8u), r_ecx);
    /* 00839041: mov ecx, dword ptr [0xacd49c] */ r_ecx = R32((u32)(0xacd49cu));
    /* 00839047: mov dword ptr [0xacccfc], ecx */ W32((u32)(0xacccfcu), r_ecx);
    /* 0083904d: mov ecx, dword ptr [0xacd4c0] */ r_ecx = R32((u32)(0xacd4c0u));
    /* 00839053: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00839056: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00839059: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0083905d: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00839061: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00839062: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00839065: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00839067: fadd dword ptr [ecx*4 + 0x98a828] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x98a828u));
    /* 0083906e: mov ecx, dword ptr [0xacd4c4] */ r_ecx = R32((u32)(0xacd4c4u));
    /* 00839074: fst dword ptr [0xacd4b0] */ W_F32((u32)(0xacd4b0u), ST(0));
    /* 0083907a: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0083907d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083907f: fadd dword ptr [ecx*4 + 0x98a828] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x98a828u));
    /* 00839086: fst dword ptr [0xacd4b4] */ W_F32((u32)(0xacd4b4u), ST(0));
    /* 0083908c: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0083908f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00839091: fadd dword ptr [edx*4 + 0x98a828] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x98a828u));
    /* 00839098: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083909a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083909c: fstp dword ptr [0xacd4b8] */ W_F32((u32)(0xacd4b8u), ST(0)); FPOP();
    /* 008390a2: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008390a5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008390a7: fadd dword ptr [eax*4 + 0x98a828] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98a828u));
    /* 008390ae: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008390b0: fstp dword ptr [0xacd4bc] */ W_F32((u32)(0xacd4bcu), ST(0)); FPOP();
    /* 008390b6: call 0x82c40c */ r_esp -= 4; W32(r_esp, 0x8390bbu); f_0082c40c();
    /* 008390bb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008390bc: call 0x838b44 */ r_esp -= 4; W32(r_esp, 0x8390c1u); f_00838b44();
    /* 008390c1: mov eax, 1 */ r_eax = 0x1u;
    /* 008390c6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008390c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008390ca: ret  */ FN_RET(0x00838ca0); r_esp += 4; return;
L_008390cb:; BB(0x008390cb);
    /* 008390cb: mov ecx, 2 */ r_ecx = 0x2u;
    /* 008390d0: call 0x83c084 */ r_esp -= 4; W32(r_esp, 0x8390d5u); f_0083c084();
    /* 008390d5: mov ecx, 2 */ r_ecx = 0x2u;
    /* 008390da: mov edx, 0x98a878 */ r_edx = 0x98a878u;
    /* 008390df: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x8390e4u); f_0083bf84();
    /* 008390e4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008390e6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008390e9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008390ea: ret  */ FN_RET(0x00838ca0); r_esp += 4; return;
}

