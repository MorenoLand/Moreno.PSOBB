#include "protos.h"

void f_005510cc(void) /* sub_5510CC */
{
    FN_ENTER(0x005510cc);
    /* 005510cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005510cd: mov esi, ecx */ r_esi = r_ecx;
    /* 005510cf: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 005510d6: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005510d9: je 0x551139 */ if (fZ) goto L_00551139;
L_005510db:; BB(0x005510db);
    /* 005510db: mov eax, 0xa */ r_eax = 0xau;
    /* 005510e0: mov word ptr [esi + 0x32e], ax */ W16((u32)(r_esi+0x32eu), (u16)r_eax);
    /* 005510e7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005510e9: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
    /* 005510f0: mov ecx, esi */ r_ecx = r_esi;
    /* 005510f2: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5510f7u); f_007751b0();
    /* 005510f7: fcomp dword ptr [0x9245a4] */ fx_compare(ST(0), R_F32((u32)(0x9245a4u))); FPOP();
    /* 005510fd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005510ff: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00551100: jae 0x551110 */ if (!fC) goto L_00551110;
L_00551102:; BB(0x00551102);
    /* 00551102: mov eax, 9 */ r_eax = 0x9u;
    /* 00551107: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0055110e: jmp 0x55111c */ goto L_0055111c;
L_00551110:; BB(0x00551110);
    /* 00551110: mov eax, 0xa */ r_eax = 0xau;
    /* 00551115: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
L_0055111c:; BB(0x0055111c);
    /* 0055111c: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 00551122: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00551125: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00551128: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0055112b: mov ecx, esi */ r_ecx = r_esi;
    /* 0055112d: call 0x787534 */ r_esp -= 4; W32(r_esp, 0x551132u); f_00787534();
    /* 00551132: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00551133: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x551138u); f_008113e4();
    /* 00551138: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00551139:; BB(0x00551139);
    /* 00551139: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055113a: ret  */ FN_RET(0x005510cc); r_esp += 4; return;
}

void f_005511a4(void)
{
    FN_ENTER(0x005511a4);
    /* 005511a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005511a5: mov ebp, esp */ r_ebp = r_esp;
    /* 005511a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005511a9: push 0x8d5ed4 */ { u32 v = 0x8d5ed4u; r_esp -= 4; W32(r_esp, v); }
    /* 005511ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005511b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005511b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005511bc: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005511bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005511c2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005511c5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005511c8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005511cb: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 005511d0: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 005511d7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5511dcu); f_008581c5();
    /* 005511dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005511dd: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005511e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005511e2: je 0x551507 */ if (fZ) goto L_00551507;
L_005511e8:; BB(0x005511e8);
    /* 005511e8: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
    /* 005511ef: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005511f6: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005511f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005511fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005511fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005511fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005511fe: push 0x9bd6c8 */ { u32 v = 0x9bd6c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00551203: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00551205: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x55120au); f_005b7a84();
    /* 0055120a: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0055120d: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 00551214: mov dword ptr [0xa73974], eax */ W32((u32)(0xa73974u), r_eax);
    /* 00551219: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00551220: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00551222: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 00551228: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0055122b: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 0055122e: mov ebx, dword ptr [ecx + 0x30] */ r_ebx = R32((u32)(r_ecx+0x30u));
    /* 00551231: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 00551234: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 00551237: mov dword ptr [0xa7399c], 0 */ W32((u32)(0xa7399cu), 0x0u);
    /* 00551241: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00551243: mov dword ptr [0xa73998], 0 */ W32((u32)(0xa73998u), 0x0u);
    /* 0055124d: mov dword ptr [0xa73970], edi */ W32((u32)(0xa73970u), r_edi);
    /* 00551253: mov dword ptr [0xa7396c], eax */ W32((u32)(0xa7396cu), r_eax);
    /* 00551258: mov dword ptr [0xa73994], 0 */ W32((u32)(0xa73994u), 0x0u);
    /* 00551262: mov dword ptr [0xa739a4], eax */ W32((u32)(0xa739a4u), r_eax);
    /* 00551267: mov dword ptr [0xa739a0], eax */ W32((u32)(0xa739a0u), r_eax);
    /* 0055126c: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0055126f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x551274u); f_008581c5();
    /* 00551274: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00551275: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00551278: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055127a: je 0x551500 */ if (fZ) goto L_00551500;
L_00551280:; BB(0x00551280);
    /* 00551280: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 00551287: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0055128e: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00551291: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00551293: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00551298: push 0x42700000 */ { u32 v = 0x42700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055129d: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 005512a2: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x5512a7u); f_005795a0();
    /* 005512a7: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005512aa: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 005512b1: mov dword ptr [0xa73990], eax */ W32((u32)(0xa73990u), r_eax);
    /* 005512b6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005512bd: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 005512c4: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005512c6: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5512cbu); f_008581c5();
    /* 005512cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005512cc: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005512cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005512d1: je 0x5514f9 */ if (fZ) goto L_005514f9;
L_005512d7:; BB(0x005512d7);
    /* 005512d7: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 005512de: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005512e5: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005512e8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005512ea: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005512ef: push dword ptr [0xa73950] */ { u32 v = R32((u32)(0xa73950u)); r_esp -= 4; W32(r_esp, v); }
    /* 005512f5: push dword ptr [0xa7394c] */ { u32 v = R32((u32)(0xa7394cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005512fb: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x551300u); f_005795a0();
    /* 00551300: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00551303: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 0055130a: mov dword ptr [0xa7398c], eax */ W32((u32)(0xa7398cu), r_eax);
    /* 0055130f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00551316: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 0055131d: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0055131f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x551324u); f_008581c5();
    /* 00551324: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00551325: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00551328: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055132a: je 0x5514f2 */ if (fZ) goto L_005514f2;
L_00551330:; BB(0x00551330);
    /* 00551330: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 00551337: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0055133e: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00551341: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00551343: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00551348: push dword ptr [0xa73958] */ { u32 v = R32((u32)(0xa73958u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055134e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00551350: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x551355u); f_005795a0();
    /* 00551355: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00551358: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 0055135f: mov dword ptr [0xa73988], eax */ W32((u32)(0xa73988u), r_eax);
    /* 00551364: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055136b: mov eax, dword ptr [0xa73974] */ r_eax = R32((u32)(0xa73974u));
    /* 00551370: mov ebx, dword ptr [0x9bd604] */ r_ebx = R32((u32)(0x9bd604u));
    /* 00551376: mov ecx, dword ptr [0xa73990] */ r_ecx = R32((u32)(0xa73990u));
    /* 0055137c: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 0055137e: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 00551384: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00551386: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 0055138c: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00551390: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00551393: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x551398u); f_00579a28();
    /* 00551398: mov eax, dword ptr [0xa73974] */ r_eax = R32((u32)(0xa73974u));
    /* 0055139d: mov ebx, dword ptr [0x9bd624] */ r_ebx = R32((u32)(0x9bd624u));
    /* 005513a3: mov ecx, dword ptr [0xa7398c] */ r_ecx = R32((u32)(0xa7398cu));
    /* 005513a9: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 005513ab: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 005513b1: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005513b3: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005513b9: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005513bd: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005513c0: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x5513c5u); f_00579a28();
    /* 005513c5: mov eax, dword ptr [0xa73974] */ r_eax = R32((u32)(0xa73974u));
    /* 005513ca: mov edi, dword ptr [0x9bd614] */ r_edi = R32((u32)(0x9bd614u));
    /* 005513d0: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 005513d6: mov esi, dword ptr [eax + 0x430] */ r_esi = R32((u32)(r_eax+0x430u));
    /* 005513dc: lea ebx, [ebp - 0x44] */ r_ebx = (u32)(r_ebp+0xffffffbcu);
    /* 005513df: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 005513e6: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 005513e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005513ea: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005513f1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005513f2: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 005513f9: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005513fb: mov dword ptr [ebp - 0x38], 0xc1200000 */ W32((u32)(r_ebp+0xffffffc8u), 0xc1200000u);
    /* 00551402: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00551409: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00551410: push dword ptr [esi + edi*8 + 4] */ { u32 v = R32((u32)(r_esi+r_edi*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00551414: push dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00551417: mov ecx, dword ptr [0xa73988] */ r_ecx = R32((u32)(0xa73988u));
    /* 0055141d: call 0x579be8 */ r_esp -= 4; W32(r_esp, 0x551422u); f_00579be8();
    /* 00551422: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00551424: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x551429u); f_008581c5();
    /* 00551429: mov dword ptr [0xa73980], eax */ W32((u32)(0xa73980u), r_eax);
    /* 0055142e: push 0x52 */ { u32 v = 0x52u; r_esp -= 4; W32(r_esp, v); }
    /* 00551430: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x551435u); f_0077a684();
    /* 00551435: mov dword ptr [0xa73984], eax */ W32((u32)(0xa73984u), r_eax);
    /* 0055143a: push 0x57 */ { u32 v = 0x57u; r_esp -= 4; W32(r_esp, v); }
    /* 0055143c: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x551441u); f_0077a698();
    /* 00551441: mov edx, dword ptr [0xa73980] */ r_edx = R32((u32)(0xa73980u));
    /* 00551447: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 00551449: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0055144b: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x551450u); f_0077a698();
    /* 00551450: mov edx, dword ptr [0xa73980] */ r_edx = R32((u32)(0xa73980u));
    /* 00551456: push 0x59 */ { u32 v = 0x59u; r_esp -= 4; W32(r_esp, v); }
    /* 00551458: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0055145b: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x551460u); f_0077a698();
    /* 00551460: mov edx, dword ptr [0xa73980] */ r_edx = R32((u32)(0xa73980u));
    /* 00551466: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00551468: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0055146b: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x551470u); f_0077a6b4();
    /* 00551470: mov dword ptr [0xa7397c], eax */ W32((u32)(0xa7397cu), r_eax);
    /* 00551475: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00551477: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x55147cu); f_0077a6cc();
    /* 0055147c: movzx edx, word ptr [0x924504] */ r_edx = (u32)R16((u32)(0x924504u));
    /* 00551483: movzx ecx, word ptr [0x924506] */ r_ecx = (u32)R16((u32)(0x924506u));
    /* 0055148a: movzx ebx, word ptr [0x924508] */ r_ebx = (u32)R16((u32)(0x924508u));
    /* 00551491: mov edi, dword ptr [0xa73974] */ r_edi = R32((u32)(0xa73974u));
    /* 00551497: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 0055149d: mov dword ptr [0xa73978], eax */ W32((u32)(0xa73978u), r_eax);
    /* 005514a2: mov eax, dword ptr [0x924500] */ r_eax = R32((u32)(0x924500u));
    /* 005514a7: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005514aa: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 005514ae: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 005514b4: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 005514b8: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 005514bc: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 005514bf: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 005514c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005514c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005514c5: push dword ptr [0x9bd704] */ { u32 v = R32((u32)(0x9bd704u)); r_esp -= 4; W32(r_esp, v); }
    /* 005514cb: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005514ce: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005514d1: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 005514d3: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x5514d8u); f_00608470();
    /* 005514d8: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005514db: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005514de: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005514e1: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005514e4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005514e7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005514ee: mov esp, ebp */ r_esp = r_ebp;
    /* 005514f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005514f1: ret  */ FN_RET(0x005511a4); r_esp += 4; return;
L_005514f2:; BB(0x005514f2);
    /* 005514f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005514f4: jmp 0x55135f */ f_0055135f(); return;
L_005514f9:; BB(0x005514f9);
    /* 005514f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005514fb: jmp 0x55130a */ f_0055130a(); return;
L_00551500:; BB(0x00551500);
    /* 00551500: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00551502: jmp 0x5512b1 */ f_005512b1(); return;
L_00551507:; BB(0x00551507);
    /* 00551507: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00551509: jmp 0x551214 */ f_00551214(); return;
}

void f_00551510(void) /* sub_551510 */
{
    FN_ENTER(0x00551510);
    /* 00551510: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00551511: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00551512: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00551515: mov edi, ecx */ r_edi = r_ecx;
    /* 00551517: push dword ptr [edi + 0xc0] */ { u32 v = R32((u32)(r_edi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055151d: mov ecx, dword ptr [0xa73990] */ r_ecx = R32((u32)(0xa73990u));
    /* 00551523: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x551528u); f_00579de0();
    /* 00551528: mov ebx, eax */ r_ebx = r_eax;
    /* 0055152a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055152c: je 0x551578 */ if (fZ) goto L_00551578;
L_0055152e:; BB(0x0055152e);
    /* 0055152e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x551533u); f_0082d7b0();
    /* 00551533: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00551535: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x55153au); f_00830cd8();
    /* 0055153a: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0055153d: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x551542u); f_0082d838();
    /* 00551542: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00551545: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00551547: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x55154cu); f_0082d8bc();
    /* 0055154c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0055154f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00551551: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551552: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00551554: mov edx, ebx */ r_edx = r_ebx;
    /* 00551556: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x55155bu); f_0082f940();
    /* 0055155b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x551560u); f_0082da80();
    /* 00551560: mov ecx, dword ptr [edi + 0x3c8] */ r_ecx = R32((u32)(r_edi+0x3c8u));
    /* 00551566: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551568: je 0x551578 */ if (fZ) goto L_00551578;
L_0055156a:; BB(0x0055156a);
    /* 0055156a: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0055156d: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00551571: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551572: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00551574: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00551575: call dword ptr [ebx + 0x10] */ { u32 t = R32((u32)(r_ebx+0x10u)); r_esp -= 4; W32(r_esp, 0x551578u); call_ind(t); }
L_00551578:; BB(0x00551578);
    /* 00551578: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055157b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055157c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055157d: ret  */ FN_RET(0x00551510); r_esp += 4; return;
}

void f_00551580(void) /* sub_551580 */
{
    FN_ENTER(0x00551580);
    /* 00551580: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00551581: mov edi, ecx */ r_edi = r_ecx;
    /* 00551583: mov ecx, edi */ r_ecx = r_edi;
    /* 00551585: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x55158au); f_007aa094();
    /* 0055158a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055158c: push dword ptr [edi + 0x3a4] */ { u32 v = R32((u32)(r_edi+0x3a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00551592: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x551597u); f_007a8cb8();
    /* 00551597: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055159a: mov dword ptr [edi + 0x3a4], eax */ W32((u32)(r_edi+0x3a4u), r_eax);
    /* 005515a0: movsx eax, word ptr [edi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x330u));
    /* 005515a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005515a9: je 0x551660 */ if (fZ) goto L_00551660;
L_005515af:; BB(0x005515af);
    /* 005515af: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005515b2: jne 0x551606 */ if (!fZ) goto L_00551606;
L_005515b4:; BB(0x005515b4);
    /* 005515b4: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005515b6: mov ecx, edi */ r_ecx = r_edi;
    /* 005515b8: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x5515bbu); call_ind(t); }
    /* 005515bb: fld dword ptr [0x924560] */ FPUSH(R_F32((u32)(0x924560u)));
    /* 005515c1: fld dword ptr [edi + 0x30c] */ FPUSH(R_F32((u32)(r_edi+0x30cu)));
    /* 005515c7: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005515c9: fld dword ptr [edi + 0x314] */ FPUSH(R_F32((u32)(r_edi+0x314u)));
    /* 005515cf: mov eax, dword ptr [edi + 0xb4] */ r_eax = R32((u32)(r_edi+0xb4u));
    /* 005515d5: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 005515d7: fstp dword ptr [edi + 0x30c] */ W_F32((u32)(r_edi+0x30cu), ST(0)); FPOP();
    /* 005515dd: fstp dword ptr [edi + 0x314] */ W_F32((u32)(r_edi+0x314u), ST(0)); FPOP();
    /* 005515e3: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005515e6: je 0x551677 */ if (fZ) goto L_00551677;
L_005515ec:; BB(0x005515ec);
    /* 005515ec: mov eax, 7 */ r_eax = 0x7u;
    /* 005515f1: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005515f8: mov edx, 2 */ r_edx = 0x2u;
    /* 005515fd: mov word ptr [edi + 0x330], dx */ W16((u32)(r_edi+0x330u), (u16)r_edx);
    /* 00551604: jmp 0x551677 */ goto L_00551677;
L_00551606:; BB(0x00551606);
    /* 00551606: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551609: jne 0x551677 */ if (!fZ) goto L_00551677;
L_0055160b:; BB(0x0055160b);
    /* 0055160b: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0055160e: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551613: jne 0x551620 */ if (!fZ) goto L_00551620;
L_00551615:; BB(0x00551615);
    /* 00551615: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00551617: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00551619: mov ecx, edi */ r_ecx = r_edi;
    /* 0055161b: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x551620u); f_00772b44();
L_00551620:; BB(0x00551620);
    /* 00551620: mov eax, dword ptr [edi + 0xb4] */ r_eax = R32((u32)(r_edi+0xb4u));
    /* 00551626: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551629: je 0x551677 */ if (fZ) goto L_00551677;
L_0055162b:; BB(0x0055162b);
    /* 0055162b: movsx eax, word ptr [edi + 0x390] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x390u));
    /* 00551632: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00551634: jg 0x551645 */ if ((!fZ&&fS==fO)) goto L_00551645;
L_00551636:; BB(0x00551636);
    /* 00551636: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 0055163c: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055163f: mov dword ptr [edi + 0x37c], eax */ W32((u32)(r_edi+0x37cu), r_eax);
L_00551645:; BB(0x00551645);
    /* 00551645: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00551648: movzx edx, word ptr [edi + 0x334] */ r_edx = (u32)R16((u32)(r_edi+0x334u));
    /* 0055164f: and eax, 0xfffff9ff */ {  u32 a = r_eax; u32 b = 0xfffff9ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00551654: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00551657: mov word ptr [edi + 0x346], dx */ W16((u32)(r_edi+0x346u), (u16)r_edx);
    /* 0055165e: jmp 0x551677 */ goto L_00551677;
L_00551660:; BB(0x00551660);
    /* 00551660: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00551662: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00551664: mov eax, 1 */ r_eax = 0x1u;
    /* 00551669: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 00551670: mov ecx, edi */ r_ecx = r_edi;
    /* 00551672: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x551677u); f_00772b44();
L_00551677:; BB(0x00551677);
    /* 00551677: mov ecx, edi */ r_ecx = r_edi;
    /* 00551679: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x55167eu); f_007b6894();
    /* 0055167e: mov ecx, edi */ r_ecx = r_edi;
    /* 00551680: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x551685u); f_007b798c();
    /* 00551685: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00551687: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00551689: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0055168c: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00551691: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551692: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x551697u); f_00805608();
    /* 00551697: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00551699: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055169a: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x55169fu); f_006946a8();
    /* 0055169f: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005516a2: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005516a7: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005516aa: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005516ad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005516ae: ret  */ FN_RET(0x00551580); r_esp += 4; return;
}

void f_005516b0(void) /* sub_5516B0 */
{
    FN_ENTER(0x005516b0);
    /* 005516b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005516b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005516b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005516b5: push 0x8d5f38 */ { u32 v = 0x8d5f38u; r_esp -= 4; W32(r_esp, v); }
    /* 005516ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005516c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005516c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005516c8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005516cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005516ce: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005516d1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005516d4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005516d7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005516da: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005516dd: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005516e4: mov eax, ecx */ r_eax = r_ecx;
    /* 005516e6: mov edx, dword ptr [eax + 0x3cc] */ r_edx = R32((u32)(r_eax+0x3ccu));
    /* 005516ec: mov dword ptr [eax], 0xb041e0 */ W32((u32)(r_eax), 0xb041e0u);
    /* 005516f2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005516f4: je 0x55170f */ if (fZ) goto L_0055170f;
L_005516f6:; BB(0x005516f6);
    /* 005516f6: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005516fa: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005516ff: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00551703: mov edx, ecx */ r_edx = r_ecx;
    /* 00551705: mov dword ptr [edx + 0x3cc], 0 */ W32((u32)(r_edx+0x3ccu), 0x0u);
L_0055170f:; BB(0x0055170f);
    /* 0055170f: mov eax, ecx */ r_eax = r_ecx;
    /* 00551711: mov edx, dword ptr [eax + 0x3d0] */ r_edx = R32((u32)(r_eax+0x3d0u));
    /* 00551717: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551719: je 0x551734 */ if (fZ) goto L_00551734;
L_0055171b:; BB(0x0055171b);
    /* 0055171b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0055171f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00551724: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00551728: mov edx, ecx */ r_edx = r_ecx;
    /* 0055172a: mov dword ptr [edx + 0x3d0], 0 */ W32((u32)(r_edx+0x3d0u), 0x0u);
L_00551734:; BB(0x00551734);
    /* 00551734: call 0x786f64 */ r_esp -= 4; W32(r_esp, 0x551739u); f_00786f64();
    /* 00551739: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055173c: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x551741u); f_007b9c8c();
    /* 00551741: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00551748: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0055174d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00551750: lea edx, [eax + 0x3d4] */ r_edx = (u32)(r_eax+0x3d4u);
    /* 00551756: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00551758: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0055175a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055175b: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x551760u); f_008586d6();
    /* 00551760: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00551767: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0055176a: lea ecx, [eax + 0x3b0] */ r_ecx = (u32)(r_eax+0x3b0u);
    /* 00551770: call 0x5122a8 */ r_esp -= 4; W32(r_esp, 0x551775u); f_005122a8();
    /* 00551775: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00551778: call 0x52a684 */ r_esp -= 4; W32(r_esp, 0x55177du); f_0052a684();
    /* 0055177d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00551780: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00551782: jne 0x551794 */ if (!fZ) goto L_00551794;
L_00551784:; BB(0x00551784);
    /* 00551784: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00551787: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0055178e: mov esp, ebp */ r_esp = r_ebp;
    /* 00551790: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00551791: ret 4 */ FN_RET(0x005516b0); r_esp += 8; return;
L_00551794:; BB(0x00551794);
    /* 00551794: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00551797: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551798: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x55179du); f_005c2f74();
    /* 0055179d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055179e: jmp 0x551784 */ goto L_00551784;
}

void f_005517a0(void) /* sub_5517A0 */
{
    FN_ENTER(0x005517a0);
    /* 005517a0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005517a1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005517a3: mov eax, dword ptr [ebx + 0x3b0] */ r_eax = R32((u32)(r_ebx+0x3b0u));
    /* 005517a9: lea ecx, [ebx + 0x3b0] */ r_ecx = (u32)(r_ebx+0x3b0u);
    /* 005517af: mov dword ptr [ebx + 0x398], 1 */ W32((u32)(r_ebx+0x398u), 0x1u);
    /* 005517b9: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5517bcu); call_ind(t); }
    /* 005517bc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005517bf: je 0x5517c3 */ if (fZ) goto L_005517c3;
L_005517c1:; BB(0x005517c1);
    /* 005517c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005517c2: ret  */ FN_RET(0x005517a0); r_esp += 4; return;
L_005517c3:; BB(0x005517c3);
    /* 005517c3: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 005517c7: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005517cc: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 005517d0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005517d1: ret  */ FN_RET(0x005517a0); r_esp += 4; return;
}

void f_005517d4(void) /* sub_5517D4 */
{
    FN_ENTER(0x005517d4);
    /* 005517d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005517d5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005517d6: mov edi, ecx */ r_edi = r_ecx;
    /* 005517d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005517da: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 005517dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005517de: call 0x5786e8 */ r_esp -= 4; W32(r_esp, 0x5517e3u); f_005786e8();
    /* 005517e3: lea eax, [edi + 0x300] */ r_eax = (u32)(r_edi+0x300u);
    /* 005517e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005517ea: call 0x5787fc */ r_esp -= 4; W32(r_esp, 0x5517efu); f_005787fc();
    /* 005517ef: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005517f2: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5517f7u); f_00807ac0();
    /* 005517f7: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005517fa: je 0x55181e */ if (fZ) goto L_0055181e;
L_005517fc:; BB(0x005517fc);
    /* 005517fc: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005517ff: je 0x55181e */ if (fZ) goto L_0055181e;
L_00551801:; BB(0x00551801);
    /* 00551801: push 0x1f0 */ { u32 v = 0x1f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00551806: mov ecx, edi */ r_ecx = r_edi;
    /* 00551808: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x55180du); f_007879b8();
    /* 0055180d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0055180f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00551810: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00551811: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00551812: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551813: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x551818u); f_00814298();
    /* 00551818: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055181b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055181c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055181d: ret  */ FN_RET(0x005517d4); r_esp += 4; return;
L_0055181e:; BB(0x0055181e);
    /* 0055181e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00551820: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551821: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551822: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00551823: push 0x1c5 */ { u32 v = 0x1c5u; r_esp -= 4; W32(r_esp, v); }
    /* 00551828: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x55182du); f_00814298();
    /* 0055182d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00551830: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00551831: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00551832: ret  */ FN_RET(0x005517d4); r_esp += 4; return;
}

void f_00551834(void) /* sub_551834 */
{
    FN_ENTER(0x00551834);
    /* 00551834: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00551835: mov edi, ecx */ r_edi = r_ecx;
    /* 00551837: mov ecx, edi */ r_ecx = r_edi;
    /* 00551839: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x55183eu); f_007751b0();
    /* 0055183e: fcomp dword ptr [0x924830] */ fx_compare(ST(0), R_F32((u32)(0x924830u))); FPOP();
    /* 00551844: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00551846: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00551847: jae 0x551868 */ if (!fC) goto L_00551868;
L_00551849:; BB(0x00551849);
    /* 00551849: push 0x206 */ { u32 v = 0x206u; r_esp -= 4; W32(r_esp, v); }
    /* 0055184e: mov ecx, edi */ r_ecx = r_edi;
    /* 00551850: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x551855u); f_007879b8();
    /* 00551855: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00551858: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0055185a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055185b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055185c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055185d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055185e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x551863u); f_00814298();
    /* 00551863: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551866: jmp 0x551885 */ goto L_00551885;
L_00551868:; BB(0x00551868);
    /* 00551868: push 0x207 */ { u32 v = 0x207u; r_esp -= 4; W32(r_esp, v); }
    /* 0055186d: mov ecx, edi */ r_ecx = r_edi;
    /* 0055186f: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x551874u); f_007879b8();
    /* 00551874: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00551877: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00551879: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055187a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055187b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055187c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055187d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x551882u); f_00814298();
    /* 00551882: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00551885:; BB(0x00551885);
    /* 00551885: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 0055188a: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x55188fu); f_00814680();
    /* 0055188f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00551890: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00551891: ret  */ FN_RET(0x00551834); r_esp += 4; return;
}

void f_00551894(void) /* sub_551894 */
{
    FN_ENTER(0x00551894);
    /* 00551894: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00551895: mov edi, ecx */ r_edi = r_ecx;
    /* 00551897: mov ecx, edi */ r_ecx = r_edi;
    /* 00551899: push 0x20a */ { u32 v = 0x20au; r_esp -= 4; W32(r_esp, v); }
    /* 0055189e: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5518a3u); f_007879b8();
    /* 005518a3: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005518a6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005518a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005518a9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005518aa: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005518ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005518ac: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5518b1u); f_00814298();
    /* 005518b1: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 005518b6: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x5518bbu); f_00814680();
    /* 005518bb: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005518be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005518bf: ret  */ FN_RET(0x00551894); r_esp += 4; return;
}

void f_005518c0(void) /* sub_5518C0 */
{
    FN_ENTER(0x005518c0);
    /* 005518c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005518c1: mov edi, ecx */ r_edi = r_ecx;
    /* 005518c3: mov ecx, edi */ r_ecx = r_edi;
    /* 005518c5: push 0x209 */ { u32 v = 0x209u; r_esp -= 4; W32(r_esp, v); }
    /* 005518ca: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5518cfu); f_007879b8();
    /* 005518cf: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005518d2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005518d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005518d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005518d6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005518d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005518d8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5518ddu); f_00814298();
    /* 005518dd: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 005518e2: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x5518e7u); f_00814680();
    /* 005518e7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005518ea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005518eb: ret  */ FN_RET(0x005518c0); r_esp += 4; return;
}

void f_005518ec(void) /* sub_5518EC */
{
    FN_ENTER(0x005518ec);
    /* 005518ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005518ed: mov edi, ecx */ r_edi = r_ecx;
    /* 005518ef: mov ecx, edi */ r_ecx = r_edi;
    /* 005518f1: push 0x208 */ { u32 v = 0x208u; r_esp -= 4; W32(r_esp, v); }
    /* 005518f6: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5518fbu); f_007879b8();
    /* 005518fb: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005518fe: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00551900: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00551901: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00551902: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00551903: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551904: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x551909u); f_00814298();
    /* 00551909: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 0055190e: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x551913u); f_00814680();
    /* 00551913: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00551916: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00551917: ret  */ FN_RET(0x005518ec); r_esp += 4; return;
}

void f_00551918(void) /* sub_551918 */
{
    FN_ENTER(0x00551918);
    /* 00551918: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00551919: mov edi, ecx */ r_edi = r_ecx;
    /* 0055191b: mov ecx, edi */ r_ecx = r_edi;
    /* 0055191d: push 0x20b */ { u32 v = 0x20bu; r_esp -= 4; W32(r_esp, v); }
    /* 00551922: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x551927u); f_007879b8();
    /* 00551927: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0055192a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0055192c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055192d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055192e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055192f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551930: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x551935u); f_00814298();
    /* 00551935: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 0055193a: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x55193fu); f_00814680();
    /* 0055193f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00551942: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00551943: ret  */ FN_RET(0x00551918); r_esp += 4; return;
}

void f_00551944(void) /* sub_551944 */
{
    FN_ENTER(0x00551944);
    /* 00551944: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00551945: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00551946: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00551947: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00551948: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055194b: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0055194d: mov edx, dword ptr [ebx + 0x370] */ r_edx = R32((u32)(r_ebx+0x370u));
    /* 00551953: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 00551958: cmp eax, dword ptr [edx*4 + 0xa739c8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx*4+0xa739c8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055195f: je 0x55197d */ if (fZ) goto L_0055197d;
L_00551961:; BB(0x00551961);
    /* 00551961: mov dword ptr [edx*4 + 0xa739c8], eax */ W32((u32)(r_edx*4+0xa739c8u), r_eax);
    /* 00551968: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055196a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055196b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055196c: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0055196e: push dword ptr [edx*4 + 0xa739d4] */ { u32 v = R32((u32)(r_edx*4+0xa739d4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00551975: call 0x81a2b0 */ r_esp -= 4; W32(r_esp, 0x55197au); f_0081a2b0();
    /* 0055197a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0055197d:; BB(0x0055197d);
    /* 0055197d: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00551982: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00551984: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00551986: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055198b: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 00551990: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x551993u); call_ind(t); }
    /* 00551993: mov edi, eax */ r_edi = r_eax;
    /* 00551995: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551997: je 0x551b02 */ if (fZ) goto L_00551b02;
L_0055199d:; BB(0x0055199d);
    /* 0055199d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0055199f: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x5519a4u); f_00520e6c();
    /* 005519a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005519a6: je 0x5519c5 */ if (fZ) goto L_005519c5;
L_005519a8:; BB(0x005519a8);
    /* 005519a8: lea ebp, [ebx + 0x3d4] */ r_ebp = (u32)(r_ebx+0x3d4u);
    /* 005519ae: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005519b0: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x5519b5u); f_005771a4();
    /* 005519b5: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 005519bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005519bc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005519be: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x5519c3u); f_0057725c();
    /* 005519c3: mov esi, eax */ r_esi = r_eax;
L_005519c5:; BB(0x005519c5);
    /* 005519c5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005519c6: call 0x794548 */ r_esp -= 4; W32(r_esp, 0x5519cbu); f_00794548();
    /* 005519cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005519cc: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 005519cf: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x5519d4u); f_00829cc8();
    /* 005519d4: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5519d9u); f_0082d7b0();
    /* 005519d9: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 005519dc: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5519e1u); f_0082d838();
    /* 005519e1: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 005519e4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005519e6: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5519ebu); f_0082d8bc();
    /* 005519eb: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x5519f0u); f_004f7c84();
    /* 005519f0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005519f3: je 0x551ba0 */ if (fZ) goto L_00551ba0;
L_005519f9:; BB(0x005519f9);
    /* 005519f9: movsx edx, word ptr [ebx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00551a00: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00551a02: jl 0x551a09 */ if ((fS!=fO)) goto L_00551a09;
L_00551a04:; BB(0x00551a04);
    /* 00551a04: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00551a07: jle 0x551a0e */ if ((fZ||fS!=fO)) goto L_00551a0e;
L_00551a09:; BB(0x00551a09);
    /* 00551a09: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551a0c: jne 0x551a2d */ if (!fZ) goto L_00551a2d;
L_00551a0e:; BB(0x00551a0e);
    /* 00551a0e: mov ebp, dword ptr [ebx + 0x34] */ r_ebp = R32((u32)(r_ebx+0x34u));
    /* 00551a11: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 00551a14: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 00551a17: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 00551a1a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00551a1d: movsx ebp, word ptr [eax + 6] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 00551a21: mov edx, ebp */ r_edx = r_ebp;
    /* 00551a23: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00551a29: mov word ptr [eax + 6], dx */ W16((u32)(r_eax+0x6u), (u16)r_edx);
L_00551a2d:; BB(0x00551a2d);
    /* 00551a2d: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x551a32u); f_00578b38();
    /* 00551a32: mov edx, dword ptr [ebx + 0x398] */ r_edx = R32((u32)(r_ebx+0x398u));
    /* 00551a38: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551a3b: je 0x551b16 */ if (fZ) goto L_00551b16;
L_00551a41:; BB(0x00551a41);
    /* 00551a41: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551a43: je 0x551a62 */ if (fZ) goto L_00551a62;
L_00551a45:; BB(0x00551a45);
    /* 00551a45: mov edx, dword ptr [ebx + 0x3d4] */ r_edx = R32((u32)(r_ebx+0x3d4u));
    /* 00551a4b: lea ecx, [ebx + 0x3d4] */ r_ecx = (u32)(r_ebx+0x3d4u);
    /* 00551a51: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00551a54: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x551a57u); call_ind(t); }
    /* 00551a57: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00551a59: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x551a5eu); f_008173d0();
    /* 00551a5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551a60: jne 0x551a7f */ if (!fZ) goto L_00551a7f;
L_00551a62:; BB(0x00551a62);
    /* 00551a62: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551a65: je 0x551b0a */ if (fZ) goto L_00551b0a;
L_00551a6b:; BB(0x00551a6b);
    /* 00551a6b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00551a6d: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x551a72u); f_007aa7b8();
L_00551a72:; BB(0x00551a72);
    /* 00551a72: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551a74: je 0x551a8b */ if (fZ) goto L_00551a8b;
L_00551a76:; BB(0x00551a76);
    /* 00551a76: lea eax, [ebx + 0x3d4] */ r_eax = (u32)(r_ebx+0x3d4u);
    /* 00551a7c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
L_00551a7f:; BB(0x00551a7f);
    /* 00551a7f: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 00551a82: mov eax, dword ptr [ebx + 0x3d4] */ r_eax = R32((u32)(r_ebx+0x3d4u));
    /* 00551a88: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x551a8bu); call_ind(t); }
L_00551a8b:; BB(0x00551a8b);
    /* 00551a8b: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x551a90u); f_0082dab0();
    /* 00551a90: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00551a97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00551a99: jl 0x551ab8 */ if ((fS!=fO)) goto L_00551ab8;
L_00551a9b:; BB(0x00551a9b);
    /* 00551a9b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00551a9e: jle 0x551aa5 */ if ((fZ||fS!=fO)) goto L_00551aa5;
L_00551aa0:; BB(0x00551aa0);
    /* 00551aa0: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551aa3: jne 0x551ab8 */ if (!fZ) goto L_00551ab8;
L_00551aa5:; BB(0x00551aa5);
    /* 00551aa5: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 00551aa8: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00551aab: mov esi, dword ptr [edx + 0x30] */ r_esi = R32((u32)(r_edx+0x30u));
    /* 00551aae: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 00551ab1: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 00551ab4: mov word ptr [eax + 6], bp */ W16((u32)(r_eax+0x6u), (u16)r_ebp);
L_00551ab8:; BB(0x00551ab8);
    /* 00551ab8: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x551abdu); f_0082da80();
    /* 00551abd: call 0x794750 */ r_esp -= 4; W32(r_esp, 0x551ac2u); f_00794750();
    /* 00551ac2: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00551ac9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00551acb: jl 0x551adc */ if ((fS!=fO)) goto L_00551adc;
L_00551acd:; BB(0x00551acd);
    /* 00551acd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00551ad0: jle 0x551b02 */ if ((fZ||fS!=fO)) goto L_00551b02;
L_00551ad2:; BB(0x00551ad2);
    /* 00551ad2: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00551ad5: jl 0x551adc */ if ((fS!=fO)) goto L_00551adc;
L_00551ad7:; BB(0x00551ad7);
    /* 00551ad7: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00551ada: jle 0x551b02 */ if ((fZ||fS!=fO)) goto L_00551b02;
L_00551adc:; BB(0x00551adc);
    /* 00551adc: mov dword ptr [esp + 4], 0x3fc00000 */ W32((u32)(r_esp+0x4u), 0x3fc00000u);
    /* 00551ae4: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 00551ae8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00551aea: mov dword ptr [esp + 8], 0x3f800000 */ W32((u32)(r_esp+0x8u), 0x3f800000u);
    /* 00551af2: mov dword ptr [esp + 0xc], 0x40000000 */ W32((u32)(r_esp+0xcu), 0x40000000u);
    /* 00551afa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00551afc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551afd: call 0x779d4c */ r_esp -= 4; W32(r_esp, 0x551b02u); f_00779d4c();
L_00551b02:; BB(0x00551b02);
    /* 00551b02: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00551b05: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00551b06: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00551b07: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00551b08: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00551b09: ret  */ FN_RET(0x00551944); r_esp += 4; return;
L_00551b0a:; BB(0x00551b0a);
    /* 00551b0a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00551b0c: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x551b11u); f_007aa668();
    /* 00551b11: jmp 0x551a72 */ goto L_00551a72;
L_00551b16:; BB(0x00551b16);
    /* 00551b16: mov eax, dword ptr [ebx + 0x3b0] */ r_eax = R32((u32)(r_ebx+0x3b0u));
    /* 00551b1c: lea esi, [ebx + 0x3b0] */ r_esi = (u32)(r_ebx+0x3b0u);
    /* 00551b22: mov ecx, esi */ r_ecx = r_esi;
    /* 00551b24: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x551b27u); call_ind(t); }
    /* 00551b27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551b29: je 0x551a8b */ if (fZ) goto L_00551a8b;
L_00551b2f:; BB(0x00551b2f);
    /* 00551b2f: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00551b34: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 00551b3a: mov edi, dword ptr [0xaf0364] */ r_edi = R32((u32)(0xaf0364u));
    /* 00551b40: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00551b45: mov ecx, esi */ r_ecx = r_esi;
    /* 00551b47: mov dword ptr [0xaab504], edx */ W32((u32)(0xaab504u), r_edx);
    /* 00551b4d: mov dword ptr [0xaab500], edi */ W32((u32)(0xaab500u), r_edi);
    /* 00551b53: mov eax, dword ptr [ebx + 0x3b0] */ r_eax = R32((u32)(r_ebx+0x3b0u));
    /* 00551b59: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x551b5cu); call_ind(t); }
    /* 00551b5c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00551b5e: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x551b63u); f_008173d0();
    /* 00551b63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551b65: jne 0x551b6e */ if (!fZ) goto L_00551b6e;
L_00551b67:; BB(0x00551b67);
    /* 00551b67: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00551b69: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x551b6eu); f_007aa668();
L_00551b6e:; BB(0x00551b6e);
    /* 00551b6e: mov eax, dword ptr [ebx + 0x3b0] */ r_eax = R32((u32)(r_ebx+0x3b0u));
    /* 00551b74: mov ecx, esi */ r_ecx = r_esi;
    /* 00551b76: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x551b79u); call_ind(t); }
    /* 00551b79: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 00551b7e: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 00551b84: mov esi, dword ptr [0xaab518] */ r_esi = R32((u32)(0xaab518u));
    /* 00551b8a: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 00551b8f: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 00551b95: mov dword ptr [0xaf034c], esi */ W32((u32)(0xaf034cu), r_esi);
    /* 00551b9b: jmp 0x551a8b */ goto L_00551a8b;
L_00551ba0:; BB(0x00551ba0);
    /* 00551ba0: push dword ptr [ebx + 0x34] */ { u32 v = R32((u32)(r_ebx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00551ba3: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x551ba8u); f_0082e1e8();
    /* 00551ba8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00551ba9: jmp 0x551ab8 */ goto L_00551ab8;
}

void f_00551bb0(void)
{
    FN_ENTER(0x00551bb0);
    /* 00551bb0: mov eax, dword ptr [0xa739c4] */ r_eax = R32((u32)(0xa739c4u));
    /* 00551bb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551bb7: je 0x551bca */ if (fZ) goto L_00551bca;
L_00551bb9:; BB(0x00551bb9);
    /* 00551bb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551bba: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x551bbfu); f_00857e98();
    /* 00551bbf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00551bc0: mov dword ptr [0xa739c4], 0 */ W32((u32)(0xa739c4u), 0x0u);
L_00551bca:; BB(0x00551bca);
    /* 00551bca: mov eax, dword ptr [0xa739c0] */ r_eax = R32((u32)(0xa739c0u));
    /* 00551bcf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551bd1: je 0x551be4 */ if (fZ) goto L_00551be4;
L_00551bd3:; BB(0x00551bd3);
    /* 00551bd3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551bd4: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x551bd9u); f_00857e98();
    /* 00551bd9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00551bda: mov dword ptr [0xa739c0], 0 */ W32((u32)(0xa739c0u), 0x0u);
L_00551be4:; BB(0x00551be4);
    /* 00551be4: mov eax, dword ptr [0xa739bc] */ r_eax = R32((u32)(0xa739bcu));
    /* 00551be9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551beb: je 0x551bfe */ if (fZ) goto L_00551bfe;
L_00551bed:; BB(0x00551bed);
    /* 00551bed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551bee: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x551bf3u); f_00857e98();
    /* 00551bf3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00551bf4: mov dword ptr [0xa739bc], 0 */ W32((u32)(0xa739bcu), 0x0u);
L_00551bfe:; BB(0x00551bfe);
    /* 00551bfe: mov eax, dword ptr [0xa739b8] */ r_eax = R32((u32)(0xa739b8u));
    /* 00551c03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551c05: je 0x551c18 */ if (fZ) goto L_00551c18;
L_00551c07:; BB(0x00551c07);
    /* 00551c07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551c08: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x551c0du); f_00857e98();
    /* 00551c0d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00551c0e: mov dword ptr [0xa739b8], 0 */ W32((u32)(0xa739b8u), 0x0u);
L_00551c18:; BB(0x00551c18);
    /* 00551c18: mov ecx, dword ptr [0xa739e8] */ r_ecx = R32((u32)(0xa739e8u));
    /* 00551c1e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551c20: je 0x551c35 */ if (fZ) goto L_00551c35;
L_00551c22:; BB(0x00551c22);
    /* 00551c22: je 0x551c2b */ if (fZ) goto L_00551c2b;
L_00551c24:; BB(0x00551c24);
    /* 00551c24: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00551c26: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x551c2bu); f_0045a950();
L_00551c2b:; BB(0x00551c2b);
    /* 00551c2b: mov dword ptr [0xa739e8], 0 */ W32((u32)(0xa739e8u), 0x0u);
L_00551c35:; BB(0x00551c35);
    /* 00551c35: mov ecx, dword ptr [0xa739e4] */ r_ecx = R32((u32)(0xa739e4u));
    /* 00551c3b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551c3d: je 0x551c52 */ if (fZ) goto L_00551c52;
L_00551c3f:; BB(0x00551c3f);
    /* 00551c3f: je 0x551c48 */ if (fZ) goto L_00551c48;
L_00551c41:; BB(0x00551c41);
    /* 00551c41: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00551c43: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x551c48u); f_0045a950();
L_00551c48:; BB(0x00551c48);
    /* 00551c48: mov dword ptr [0xa739e4], 0 */ W32((u32)(0xa739e4u), 0x0u);
L_00551c52:; BB(0x00551c52);
    /* 00551c52: mov ecx, dword ptr [0xa739e0] */ r_ecx = R32((u32)(0xa739e0u));
    /* 00551c58: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00551c5a: je 0x551c6f */ if (fZ) goto L_00551c6f;
L_00551c5c:; BB(0x00551c5c);
    /* 00551c5c: je 0x551c65 */ if (fZ) goto L_00551c65;
L_00551c5e:; BB(0x00551c5e);
    /* 00551c5e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00551c60: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x551c65u); f_004066a8();
L_00551c65:; BB(0x00551c65);
    /* 00551c65: mov dword ptr [0xa739e0], 0 */ W32((u32)(0xa739e0u), 0x0u);
L_00551c6f:; BB(0x00551c6f);
    /* 00551c6f: ret  */ FN_RET(0x00551bb0); r_esp += 4; return;
}

void f_00551c70(void)
{
    FN_ENTER(0x00551c70);
    /* 00551c70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00551c71: mov ebp, esp */ r_ebp = r_esp;
    /* 00551c73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00551c75: push 0x8d5f7a */ { u32 v = 0x8d5f7au; r_esp -= 4; W32(r_esp, v); }
    /* 00551c7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00551c80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551c81: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00551c88: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00551c8b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00551c8e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00551c91: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00551c94: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00551c97: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00551c99: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00551ca0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x551ca5u); f_005caba4();
    /* 00551ca5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00551ca6: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00551ca9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551cab: je 0x551d33 */ if (fZ) goto L_00551d33;
L_00551cb1:; BB(0x00551cb1);
    /* 00551cb1: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00551cb8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00551cbf: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00551cc5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00551cc8: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x551ccdu); f_00787a4c();
    /* 00551ccd: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00551cd0: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00551cd7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00551cda:; BB(0x00551cda);
    /* 00551cda: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00551ce1: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00551ce8: push 0x444 */ { u32 v = 0x444u; r_esp -= 4; W32(r_esp, v); }
    /* 00551ced: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x551cf2u); f_005caba4();
    /* 00551cf2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00551cf3: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00551cf6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551cf8: je 0x551d2f */ if (fZ) goto L_00551d2f;
L_00551cfa:; BB(0x00551cfa);
    /* 00551cfa: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00551d01: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00551d08: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00551d0b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00551d0e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00551d11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551d12: call 0x551d3c */ r_esp -= 4; W32(r_esp, 0x551d17u); f_00551d3c();
    /* 00551d17: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00551d1a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00551d21:; BB(0x00551d21);
    /* 00551d21: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00551d24: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00551d2b: mov esp, ebp */ r_esp = r_ebp;
    /* 00551d2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00551d2e: ret  */ FN_RET(0x00551c70); r_esp += 4; return;
L_00551d2f:; BB(0x00551d2f);
    /* 00551d2f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00551d31: jmp 0x551d21 */ goto L_00551d21;
L_00551d33:; BB(0x00551d33);
    /* 00551d33: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00551d35: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00551d38: jmp 0x551cda */ goto L_00551cda;
}

void f_00551d3c(void) /* sub_551D3C */
{
    FN_ENTER(0x00551d3c);
    /* 00551d3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00551d3d: mov ebp, esp */ r_ebp = r_esp;
    /* 00551d3f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00551d41: push 0x8d5fc8 */ { u32 v = 0x8d5fc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00551d46: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00551d4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551d4d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00551d54: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00551d57: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00551d5a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00551d5d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00551d60: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00551d63: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00551d66: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00551d69: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00551d6c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00551d6f: call 0x52b6ec */ r_esp -= 4; W32(r_esp, 0x551d74u); f_0052b6ec();
    /* 00551d74: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00551d7b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00551d7e: mov dword ptr [ecx], 0xb041e0 */ W32((u32)(r_ecx), 0xb041e0u);
    /* 00551d84: add ecx, 0x3b0 */ {  u32 a = r_ecx; u32 b = 0x3b0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00551d8a: call 0x5122f8 */ r_esp -= 4; W32(r_esp, 0x551d8fu); f_005122f8();
    /* 00551d8f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00551d96: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00551d9b: push 0x57713c */ { u32 v = 0x57713cu; r_esp -= 4; W32(r_esp, v); }
    /* 00551da0: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00551da3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00551da5: add eax, 0x3d4 */ {  u32 a = r_eax; u32 b = 0x3d4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00551daa: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00551dac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551dad: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x551db2u); f_00858736();
    /* 00551db2: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00551db9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00551dbc: mov eax, dword ptr [0x9bd944] */ r_eax = R32((u32)(0x9bd944u));
    /* 00551dc1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00551dc4: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00551dc6: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00551dc9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00551dca: call dword ptr [ebx + 0x14c] */ { u32 t = R32((u32)(r_ebx+0x14cu)); r_esp -= 4; W32(r_esp, 0x551dd0u); call_ind(t); }
    /* 00551dd0: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00551dd3: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00551dd6: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00551dd9: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00551ddc: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 00551de2: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 00551de8: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00551deb: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 00551df1: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 00551df7: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 00551dfd: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 00551e03: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 00551e09: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 00551e0f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00551e12: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 00551e18: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00551e1b: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 00551e21: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00551e24: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 00551e2a: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 00551e2d: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 00551e33: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00551e36: mov eax, dword ptr [ecx + 0x370] */ r_eax = R32((u32)(r_ecx+0x370u));
    /* 00551e3c: mov dword ptr [ecx + 0x33c], eax */ W32((u32)(r_ecx+0x33cu), r_eax);
    /* 00551e42: call 0x5520f8 */ r_esp -= 4; W32(r_esp, 0x551e47u); f_005520f8();
    /* 00551e47: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00551e4a: mov eax, dword ptr [0xa739e0] */ r_eax = R32((u32)(0xa739e0u));
    /* 00551e4f: mov edi, dword ptr [ecx + 0x370] */ r_edi = R32((u32)(r_ecx+0x370u));
    /* 00551e55: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00551e5b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00551e5d: mov ebx, dword ptr [edx + edi*8 + 8] */ r_ebx = R32((u32)(r_edx+r_edi*8+0x8u));
    /* 00551e61: mov dword ptr [ecx + 0x34], ebx */ W32((u32)(r_ecx+0x34u), r_ebx);
    /* 00551e64: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 00551e6a: mov edx, dword ptr [esi + edi*8 + 0xc] */ r_edx = R32((u32)(r_esi+r_edi*8+0xcu));
    /* 00551e6e: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 00551e71: mov dword ptr [ecx + 0xd8], 0x9bd840 */ W32((u32)(r_ecx+0xd8u), 0x9bd840u);
    /* 00551e7b: mov eax, dword ptr [eax + 0x430] */ r_eax = R32((u32)(r_eax+0x430u));
    /* 00551e81: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
    /* 00551e87: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00551e89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551e8a: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00551e91: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x551e96u); f_007aa4c8();
    /* 00551e96: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00551e99: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00551e9b: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 00551ea2: mov edx, dword ptr [ecx + 0x33c] */ r_edx = R32((u32)(r_ecx+0x33cu));
    /* 00551ea8: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00551eaf: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 00551eb2: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00551eb4: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00551eb6: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00551eb8: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00551eba: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00551ebc: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00551ebe: lea esi, [ebx + ebx + 0x9bd7a0] */ r_esi = (u32)(r_ebx+r_ebx+0x9bd7a0u);
    /* 00551ec5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00551ec6: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x551ecbu); f_007b9a88();
    /* 00551ecb: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00551ece: mov ebx, dword ptr [0xa739c4] */ r_ebx = R32((u32)(0xa739c4u));
    /* 00551ed4: mov edx, dword ptr [0xa739c0] */ r_edx = R32((u32)(0xa739c0u));
    /* 00551eda: mov eax, dword ptr [0xa739bc] */ r_eax = R32((u32)(0xa739bcu));
    /* 00551edf: mov esi, dword ptr [ecx + 0x33c] */ r_esi = R32((u32)(r_ecx+0x33cu));
    /* 00551ee5: push dword ptr [eax + esi*4] */ { u32 v = R32((u32)(r_eax+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00551ee8: push dword ptr [edx + esi*4] */ { u32 v = R32((u32)(r_edx+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00551eeb: push dword ptr [ebx + esi*4] */ { u32 v = R32((u32)(r_ebx+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00551eee: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x551ef3u); f_007868f8();
    /* 00551ef3: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00551ef6: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 00551efc: movzx esi, word ptr [ecx + 0x334] */ r_esi = (u32)R16((u32)(r_ecx+0x334u));
    /* 00551f03: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00551f05: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00551f07: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00551f0a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00551f0c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00551f0e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00551f10: lea ebx, [edx + 0x9bd740] */ r_ebx = (u32)(r_edx+0x9bd740u);
    /* 00551f16: mov dword ptr [ecx + 0x358], ebx */ W32((u32)(r_ecx+0x358u), r_ebx);
    /* 00551f1c: mov word ptr [ecx + 0x346], si */ W16((u32)(r_ecx+0x346u), (u16)r_esi);
    /* 00551f23: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x551f28u); f_0078730c();
    /* 00551f28: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00551f2b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00551f2e: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 00551f34: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 00551f3a: mov ebx, dword ptr [esi + 0x308] */ r_ebx = R32((u32)(r_esi+0x308u));
    /* 00551f40: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 00551f43: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 00551f46: mov dword ptr [esi + 0x7c], ebx */ W32((u32)(r_esi+0x7cu), r_ebx);
    /* 00551f49: call 0x786bbc */ r_esp -= 4; W32(r_esp, 0x551f4eu); f_00786bbc();
    /* 00551f4e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00551f51: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x551f56u); f_007751b0();
    /* 00551f56: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00551f59: fld dword ptr [0x924814] */ FPUSH(R_F32((u32)(0x924814u)));
    /* 00551f5f: mov ecx, dword ptr [esi + 0x2e8] */ r_ecx = R32((u32)(r_esi+0x2e8u));
    /* 00551f65: mov ebx, dword ptr [esi + 0x30] */ r_ebx = R32((u32)(r_esi+0x30u));
    /* 00551f68: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00551f6a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00551f6c: fmul dword ptr [0x924810] */ ST(0) = ST(0) * R_F32((u32)(0x924810u));
    /* 00551f72: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00551f74: fnstcw word ptr [ebp - 0x2c] */ W16((u32)(r_ebp+0xffffffd4u), fcw);
    /* 00551f77: movzx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd4u));
    /* 00551f7b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00551f80: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00551f83: fldcw word ptr [ebp - 0x24] */ fcw = R16((u32)(r_ebp+0xffffffdcu));
    /* 00551f86: fistp dword ptr [esi + 0x2b0] */ W32((u32)(r_esi+0x2b0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00551f8c: fldcw word ptr [ebp - 0x2c] */ fcw = R16((u32)(r_ebp+0xffffffd4u));
    /* 00551f8f: mov eax, 0xf */ r_eax = 0xfu;
    /* 00551f94: mov dword ptr [esi + 0x390], 0xc0800000 */ W32((u32)(r_esi+0x390u), 0xc0800000u);
    /* 00551f9e: or ebx, 0x40000 */ {  u32 a = r_ebx; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00551fa4: mov word ptr [esi + 0x342], ax */ W16((u32)(r_esi+0x342u), (u16)r_eax);
    /* 00551fab: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 00551fb2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00551fb4: mov word ptr [esi + 0x330], dx */ W16((u32)(r_esi+0x330u), (u16)r_edx);
    /* 00551fbb: mov word ptr [esi + 0x37c], dx */ W16((u32)(r_esi+0x37cu), (u16)r_edx);
    /* 00551fc2: mov word ptr [esi + 0x37e], dx */ W16((u32)(r_esi+0x37eu), (u16)r_edx);
    /* 00551fc9: mov dword ptr [esi + 0x380], edx */ W32((u32)(r_esi+0x380u), r_edx);
    /* 00551fcf: mov dword ptr [esi + 0x384], edx */ W32((u32)(r_esi+0x384u), r_edx);
    /* 00551fd5: or ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00551fd8: mov dword ptr [esi + 0x2e8], ecx */ W32((u32)(r_esi+0x2e8u), r_ecx);
    /* 00551fde: mov dword ptr [esi + 0x30], ebx */ W32((u32)(r_esi+0x30u), r_ebx);
    /* 00551fe1: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x551fe6u); f_00520e6c();
    /* 00551fe6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551fe8: je 0x552012 */ if (fZ) goto L_00552012;
L_00551fea:; BB(0x00551fea);
    /* 00551fea: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00551fed: mov eax, dword ptr [eax + 0x33c] */ r_eax = R32((u32)(r_eax+0x33cu));
    /* 00551ff3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551ff6: jne 0x551fff */ if (!fZ) goto L_00551fff;
L_00551ff8:; BB(0x00551ff8);
    /* 00551ff8: mov ebx, 0xffff0040 */ r_ebx = 0xffff0040u;
    /* 00551ffd: jmp 0x552038 */ goto L_00552038;
L_00551fff:; BB(0x00551fff);
    /* 00551fff: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552002: jne 0x55200b */ if (!fZ) goto L_0055200b;
L_00552004:; BB(0x00552004);
    /* 00552004: mov ebx, 0xffffff00 */ r_ebx = 0xffffff00u;
    /* 00552009: jmp 0x552038 */ goto L_00552038;
L_0055200b:; BB(0x0055200b);
    /* 0055200b: mov ebx, 0xff20ff20 */ r_ebx = 0xff20ff20u;
    /* 00552010: jmp 0x552038 */ goto L_00552038;
L_00552012:; BB(0x00552012);
    /* 00552012: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00552015: mov eax, dword ptr [eax + 0x33c] */ r_eax = R32((u32)(r_eax+0x33cu));
    /* 0055201b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055201e: jne 0x552027 */ if (!fZ) goto L_00552027;
L_00552020:; BB(0x00552020);
    /* 00552020: mov ebx, 0xffff0000 */ r_ebx = 0xffff0000u;
    /* 00552025: jmp 0x552038 */ goto L_00552038;
L_00552027:; BB(0x00552027);
    /* 00552027: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055202a: jne 0x552033 */ if (!fZ) goto L_00552033;
L_0055202c:; BB(0x0055202c);
    /* 0055202c: mov ebx, 0xffffff00 */ r_ebx = 0xffffff00u;
    /* 00552031: jmp 0x552038 */ goto L_00552038;
L_00552033:; BB(0x00552033);
    /* 00552033: mov ebx, 0xff0000ff */ r_ebx = 0xff0000ffu;
L_00552038:; BB(0x00552038);
    /* 00552038: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00552039: push 0xa0303030 */ { u32 v = 0xa0303030u; r_esp -= 4; W32(r_esp, v); }
    /* 0055203e: call 0x578cc4 */ r_esp -= 4; W32(r_esp, 0x552043u); f_00578cc4();
    /* 00552043: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00552046: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00552047: push 0xa0303030 */ { u32 v = 0xa0303030u; r_esp -= 4; W32(r_esp, v); }
    /* 0055204c: mov dword ptr [edx + 0x3cc], eax */ W32((u32)(r_edx+0x3ccu), r_eax);
    /* 00552052: call 0x578cc4 */ r_esp -= 4; W32(r_esp, 0x552057u); f_00578cc4();
    /* 00552057: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055205a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0055205d: mov edx, dword ptr [ecx + 0x33c] */ r_edx = R32((u32)(r_ecx+0x33cu));
    /* 00552063: mov dword ptr [ecx + 0x398], 1 */ W32((u32)(r_ecx+0x398u), 0x1u);
    /* 0055206d: mov dword ptr [ecx + 0x3d0], eax */ W32((u32)(r_ecx+0x3d0u), r_eax);
    /* 00552073: mov eax, dword ptr [0xa739b8] */ r_eax = R32((u32)(0xa739b8u));
    /* 00552078: mov ebx, dword ptr [eax + edx*4] */ r_ebx = R32((u32)(r_eax+r_edx*4));
    /* 0055207b: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 0055207d: mov dword ptr [ecx + 0x3a0], esi */ W32((u32)(r_ecx+0x3a0u), r_esi);
    /* 00552083: mov edi, dword ptr [eax + edx*4] */ r_edi = R32((u32)(r_eax+r_edx*4));
    /* 00552086: mov ebx, dword ptr [edi + 4] */ r_ebx = R32((u32)(r_edi+0x4u));
    /* 00552089: mov dword ptr [ecx + 0x3a8], ebx */ W32((u32)(r_ecx+0x3a8u), r_ebx);
    /* 0055208f: mov ebx, dword ptr [eax + edx*4] */ r_ebx = R32((u32)(r_eax+r_edx*4));
    /* 00552092: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 00552095: mov dword ptr [ecx + 0x3a4], ebx */ W32((u32)(r_ecx+0x3a4u), r_ebx);
    /* 0055209b: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 0055209e: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 005520a1: mov dword ptr [ecx + 0x3ac], eax */ W32((u32)(r_ecx+0x3acu), r_eax);
    /* 005520a7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005520a9:; BB(0x005520a9);
    /* 005520a9: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 005520ac: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005520ae: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005520b1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005520b3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005520b5: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005520b7: lea ecx, [ecx + edx + 0x3d4] */ r_ecx = (u32)(r_ecx+r_edx+0x3d4u);
    /* 005520be: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x5520c3u); f_0057739c();
    /* 005520c3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005520c6: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005520c9: jge 0x5520d0 */ if ((fS==fO)) goto L_005520d0;
L_005520cb:; BB(0x005520cb);
    /* 005520cb: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005520ce: jmp 0x5520a9 */ goto L_005520a9;
L_005520d0:; BB(0x005520d0);
    /* 005520d0: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005520d3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005520d5: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x5520dbu); call_ind(t); }
    /* 005520db: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005520de: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005520e1: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005520e4: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005520e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005520ea: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005520f1: mov esp, ebp */ r_esp = r_ebp;
    /* 005520f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005520f4: ret 8 */ FN_RET(0x00551d3c); r_esp += 12; return;
}

