#include "protos.h"

void f_00499034(void)
{
    FN_ENTER(0x00499034);
    /* 00499034: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00499035: mov esi, ecx */ r_esi = r_ecx;
    /* 00499037: mov eax, 0x22b */ r_eax = 0x22bu;
    /* 0049903c: mov dword ptr [esi + 0x414], eax */ W32((u32)(r_esi+0x414u), r_eax);
    /* 00499042: mov dword ptr [esi + 0x418], eax */ W32((u32)(r_esi+0x418u), r_eax);
    /* 00499048: mov ecx, esi */ r_ecx = r_esi;
    /* 0049904a: call 0x496378 */ r_esp -= 4; W32(r_esp, 0x49904fu); f_00496378();
    /* 0049904f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00499051: mov ecx, esi */ r_ecx = r_esi;
    /* 00499053: call 0x497104 */ r_esp -= 4; W32(r_esp, 0x499058u); f_00497104();
    /* 00499058: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049905a: mov ecx, esi */ r_ecx = r_esi;
    /* 0049905c: call 0x497104 */ r_esp -= 4; W32(r_esp, 0x499061u); f_00497104();
    /* 00499061: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00499063: mov ecx, esi */ r_ecx = r_esi;
    /* 00499065: call 0x4970a0 */ r_esp -= 4; W32(r_esp, 0x49906au); f_004970a0();
    /* 0049906a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049906b: ret  */ FN_RET(0x00499034); r_esp += 4; return;
}

void f_0049906c(void)
{
    FN_ENTER(0x0049906c);
    /* 0049906c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049906d: mov edi, ecx */ r_edi = r_ecx;
    /* 0049906f: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 00499074: mov dword ptr [edi + 0x414], eax */ W32((u32)(r_edi+0x414u), r_eax);
    /* 0049907a: mov dword ptr [edi + 0x428], 0 */ W32((u32)(r_edi+0x428u), 0x0u);
    /* 00499084: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00499086: mov dword ptr [edi + 0x418], eax */ W32((u32)(r_edi+0x418u), r_eax);
    /* 0049908c: mov dword ptr [edi + 0x42c], 0xc3110000 */ W32((u32)(r_edi+0x42cu), 0xc3110000u);
    /* 00499096: mov ecx, edi */ r_ecx = r_edi;
    /* 00499098: mov dword ptr [edi + 0x430], 0 */ W32((u32)(r_edi+0x430u), 0x0u);
    /* 004990a2: call 0x497104 */ r_esp -= 4; W32(r_esp, 0x4990a7u); f_00497104();
    /* 004990a7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004990a9: mov ecx, edi */ r_ecx = r_edi;
    /* 004990ab: call 0x497104 */ r_esp -= 4; W32(r_esp, 0x4990b0u); f_00497104();
    /* 004990b0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004990b1: ret  */ FN_RET(0x0049906c); r_esp += 4; return;
}

void f_004990b4(void)
{
    FN_ENTER(0x004990b4);
    /* 004990b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004990b5: mov edi, ecx */ r_edi = r_ecx;
    /* 004990b7: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 004990bc: mov dword ptr [edi + 0x414], eax */ W32((u32)(r_edi+0x414u), r_eax);
    /* 004990c2: mov dword ptr [edi + 0x428], 0 */ W32((u32)(r_edi+0x428u), 0x0u);
    /* 004990cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004990ce: mov dword ptr [edi + 0x418], eax */ W32((u32)(r_edi+0x418u), r_eax);
    /* 004990d4: mov dword ptr [edi + 0x42c], 0xc3340000 */ W32((u32)(r_edi+0x42cu), 0xc3340000u);
    /* 004990de: mov ecx, edi */ r_ecx = r_edi;
    /* 004990e0: mov dword ptr [edi + 0x430], 0 */ W32((u32)(r_edi+0x430u), 0x0u);
    /* 004990ea: call 0x497104 */ r_esp -= 4; W32(r_esp, 0x4990efu); f_00497104();
    /* 004990ef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004990f1: mov ecx, edi */ r_ecx = r_edi;
    /* 004990f3: call 0x497104 */ r_esp -= 4; W32(r_esp, 0x4990f8u); f_00497104();
    /* 004990f8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004990f9: ret  */ FN_RET(0x004990b4); r_esp += 4; return;
}

void f_004990fc(void)
{
    FN_ENTER(0x004990fc);
    /* 004990fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004990fd: mov esi, ecx */ r_esi = r_ecx;
    /* 004990ff: mov eax, 0x3c */ r_eax = 0x3cu;
    /* 00499104: mov dword ptr [esi + 0x414], eax */ W32((u32)(r_esi+0x414u), r_eax);
    /* 0049910a: mov dword ptr [esi + 0x428], 0 */ W32((u32)(r_esi+0x428u), 0x0u);
    /* 00499114: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00499116: mov dword ptr [esi + 0x418], eax */ W32((u32)(r_esi+0x418u), r_eax);
    /* 0049911c: mov dword ptr [esi + 0x42c], 0xc3110000 */ W32((u32)(r_esi+0x42cu), 0xc3110000u);
    /* 00499126: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00499128: lea edx, [esi + 0x58c] */ r_edx = (u32)(r_esi+0x58cu);
    /* 0049912e: mov dword ptr [esi + 0x430], 0 */ W32((u32)(r_esi+0x430u), 0x0u);
    /* 00499138: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00499139: push 0x3b7 */ { u32 v = 0x3b7u; r_esp -= 4; W32(r_esp, v); }
    /* 0049913e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x499143u); f_00814298();
    /* 00499143: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00499145: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00499147: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 0049914a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049914b: push 0x3c5 */ { u32 v = 0x3c5u; r_esp -= 4; W32(r_esp, v); }
    /* 00499150: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x499155u); f_00814298();
    /* 00499155: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00499158: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049915a: mov ecx, esi */ r_ecx = r_esi;
    /* 0049915c: call 0x497104 */ r_esp -= 4; W32(r_esp, 0x499161u); f_00497104();
    /* 00499161: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00499163: mov ecx, esi */ r_ecx = r_esi;
    /* 00499165: call 0x4970a0 */ r_esp -= 4; W32(r_esp, 0x49916au); f_004970a0();
    /* 0049916a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049916b: ret  */ FN_RET(0x004990fc); r_esp += 4; return;
}

void f_0049916c(void)
{
    FN_ENTER(0x0049916c);
    /* 0049916c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049916d: mov esi, ecx */ r_esi = r_ecx;
    /* 0049916f: mov eax, 0x3c */ r_eax = 0x3cu;
    /* 00499174: mov dword ptr [esi + 0x414], eax */ W32((u32)(r_esi+0x414u), r_eax);
    /* 0049917a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049917c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049917e: mov dword ptr [esi + 0x418], eax */ W32((u32)(r_esi+0x418u), r_eax);
    /* 00499184: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00499187: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00499188: push 0x3c5 */ { u32 v = 0x3c5u; r_esp -= 4; W32(r_esp, v); }
    /* 0049918d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x499192u); f_00814298();
    /* 00499192: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00499195: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00499197: mov ecx, esi */ r_ecx = r_esi;
    /* 00499199: call 0x497104 */ r_esp -= 4; W32(r_esp, 0x49919eu); f_00497104();
    /* 0049919e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004991a0: mov ecx, esi */ r_ecx = r_esi;
    /* 004991a2: call 0x4970a0 */ r_esp -= 4; W32(r_esp, 0x4991a7u); f_004970a0();
    /* 004991a7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004991a8: ret  */ FN_RET(0x0049916c); r_esp += 4; return;
}

void f_004991ac(void)
{
    FN_ENTER(0x004991ac);
    /* 004991ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004991ad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004991ae: mov edi, ecx */ r_edi = r_ecx;
    /* 004991b0: mov eax, 0x5a */ r_eax = 0x5au;
    /* 004991b5: mov dword ptr [edi + 0x414], eax */ W32((u32)(r_edi+0x414u), r_eax);
    /* 004991bb: mov dword ptr [edi + 0x418], eax */ W32((u32)(r_edi+0x418u), r_eax);
    /* 004991c1: mov ecx, edi */ r_ecx = r_edi;
    /* 004991c3: call 0x492a60 */ r_esp -= 4; W32(r_esp, 0x4991c8u); f_00492a60();
    /* 004991c8: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 004991cb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004991cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004991ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004991cf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004991d0: push 0x3c9 */ { u32 v = 0x3c9u; r_esp -= 4; W32(r_esp, v); }
    /* 004991d5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4991dau); f_00814298();
    /* 004991da: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004991dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004991df: mov ecx, edi */ r_ecx = r_edi;
    /* 004991e1: call 0x4970a0 */ r_esp -= 4; W32(r_esp, 0x4991e6u); f_004970a0();
    /* 004991e6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004991e8: mov ecx, edi */ r_ecx = r_edi;
    /* 004991ea: call 0x497104 */ r_esp -= 4; W32(r_esp, 0x4991efu); f_00497104();
    /* 004991ef: mov ecx, dword ptr [edi + 0x400] */ r_ecx = R32((u32)(r_edi+0x400u));
    /* 004991f5: call 0x48d72c */ r_esp -= 4; W32(r_esp, 0x4991fau); f_0048d72c();
    /* 004991fa: mov ecx, dword ptr [edi + 0x400] */ r_ecx = R32((u32)(r_edi+0x400u));
    /* 00499200: call 0x48d73c */ r_esp -= 4; W32(r_esp, 0x499205u); f_0048d73c();
    /* 00499205: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00499207: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00499209: mov ecx, edi */ r_ecx = r_edi;
    /* 0049920b: call 0x496b54 */ r_esp -= 4; W32(r_esp, 0x499210u); f_00496b54();
    /* 00499210: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00499212: jne 0x499226 */ if (!fZ) goto L_00499226;
L_00499214:; BB(0x00499214);
    /* 00499214: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00499216: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00499218: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00499219: push 0x5b4 */ { u32 v = 0x5b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0049921e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x499223u); f_00814298();
    /* 00499223: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00499226:; BB(0x00499226);
    /* 00499226: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00499227: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00499228: ret  */ FN_RET(0x004991ac); r_esp += 4; return;
}

void f_0049922c(void)
{
    FN_ENTER(0x0049922c);
    /* 0049922c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049922d: mov edi, ecx */ r_edi = r_ecx;
    /* 0049922f: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 00499234: mov dword ptr [edi + 0x414], eax */ W32((u32)(r_edi+0x414u), r_eax);
    /* 0049923a: mov dword ptr [edi + 0x418], eax */ W32((u32)(r_edi+0x418u), r_eax);
    /* 00499240: mov ecx, edi */ r_ecx = r_edi;
    /* 00499242: call 0x495fe0 */ r_esp -= 4; W32(r_esp, 0x499247u); f_00495fe0();
    /* 00499247: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0049924a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049924c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049924d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049924e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049924f: push 0x3cd */ { u32 v = 0x3cdu; r_esp -= 4; W32(r_esp, v); }
    /* 00499254: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x499259u); f_00814298();
    /* 00499259: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049925c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049925d: ret  */ FN_RET(0x0049922c); r_esp += 4; return;
}

void f_00499260(void) /* sub_499260 */
{
    FN_ENTER(0x00499260);
    /* 00499260: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00499261: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00499263: mov ecx, dword ptr [ebx + 0x400] */ r_ecx = R32((u32)(r_ebx+0x400u));
    /* 00499269: mov eax, 0x12c */ r_eax = 0x12cu;
    /* 0049926e: mov dword ptr [ebx + 0x414], eax */ W32((u32)(r_ebx+0x414u), r_eax);
    /* 00499274: mov dword ptr [ebx + 0x418], eax */ W32((u32)(r_ebx+0x418u), r_eax);
    /* 0049927a: call 0x48ede4 */ r_esp -= 4; W32(r_esp, 0x49927fu); f_0048ede4();
    /* 0049927f: mov ecx, dword ptr [ebx + 0x400] */ r_ecx = R32((u32)(r_ebx+0x400u));
    /* 00499285: call 0x48d74c */ r_esp -= 4; W32(r_esp, 0x49928au); f_0048d74c();
    /* 0049928a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0049928c: call 0x497174 */ r_esp -= 4; W32(r_esp, 0x499291u); f_00497174();
    /* 00499291: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 00499294: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00499296: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00499297: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00499298: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00499299: push 0x3c7 */ { u32 v = 0x3c7u; r_esp -= 4; W32(r_esp, v); }
    /* 0049929e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4992a3u); f_00814298();
    /* 004992a3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004992a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004992a8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004992aa: call 0x497104 */ r_esp -= 4; W32(r_esp, 0x4992afu); f_00497104();
    /* 004992af: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004992b1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004992b3: call 0x497104 */ r_esp -= 4; W32(r_esp, 0x4992b8u); f_00497104();
    /* 004992b8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004992ba: call 0x497e20 */ r_esp -= 4; W32(r_esp, 0x4992bfu); f_00497e20();
    /* 004992bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004992c0: ret  */ FN_RET(0x00499260); r_esp += 4; return;
}

void f_004992c4(void)
{
    FN_ENTER(0x004992c4);
    /* 004992c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004992c5: mov esi, ecx */ r_esi = r_ecx;
    /* 004992c7: mov ecx, esi */ r_ecx = r_esi;
    /* 004992c9: call 0x49628c */ r_esp -= 4; W32(r_esp, 0x4992ceu); f_0049628c();
    /* 004992ce: mov dword ptr [esi + 0x428], 0 */ W32((u32)(r_esi+0x428u), 0x0u);
    /* 004992d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004992da: mov eax, 0x12c */ r_eax = 0x12cu;
    /* 004992df: mov dword ptr [esi + 0x42c], 0x43100000 */ W32((u32)(r_esi+0x42cu), 0x43100000u);
    /* 004992e9: mov dword ptr [esi + 0x414], eax */ W32((u32)(r_esi+0x414u), r_eax);
    /* 004992ef: mov dword ptr [esi + 0x418], eax */ W32((u32)(r_esi+0x418u), r_eax);
    /* 004992f5: mov ecx, esi */ r_ecx = r_esi;
    /* 004992f7: mov dword ptr [esi + 0x430], 0 */ W32((u32)(r_esi+0x430u), 0x0u);
    /* 00499301: call 0x4970a0 */ r_esp -= 4; W32(r_esp, 0x499306u); f_004970a0();
    /* 00499306: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00499308: mov ecx, esi */ r_ecx = r_esi;
    /* 0049930a: call 0x497104 */ r_esp -= 4; W32(r_esp, 0x49930fu); f_00497104();
    /* 0049930f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00499310: ret  */ FN_RET(0x004992c4); r_esp += 4; return;
}

void f_00499314(void)
{
    FN_ENTER(0x00499314);
    /* 00499314: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00499315: mov edi, ecx */ r_edi = r_ecx;
    /* 00499317: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 0049931c: mov dword ptr [edi + 0x414], eax */ W32((u32)(r_edi+0x414u), r_eax);
    /* 00499322: mov dword ptr [edi + 0x428], 0 */ W32((u32)(r_edi+0x428u), 0x0u);
    /* 0049932c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049932e: mov dword ptr [edi + 0x418], eax */ W32((u32)(r_edi+0x418u), r_eax);
    /* 00499334: mov dword ptr [edi + 0x42c], 0x43898000 */ W32((u32)(r_edi+0x42cu), 0x43898000u);
    /* 0049933e: mov ecx, edi */ r_ecx = r_edi;
    /* 00499340: mov dword ptr [edi + 0x430], 0 */ W32((u32)(r_edi+0x430u), 0x0u);
    /* 0049934a: call 0x4970a0 */ r_esp -= 4; W32(r_esp, 0x49934fu); f_004970a0();
    /* 0049934f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00499351: mov ecx, edi */ r_ecx = r_edi;
    /* 00499353: call 0x497104 */ r_esp -= 4; W32(r_esp, 0x499358u); f_00497104();
    /* 00499358: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00499359: ret  */ FN_RET(0x00499314); r_esp += 4; return;
}

void f_0049935c(void)
{
    FN_ENTER(0x0049935c);
    /* 0049935c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049935d: mov edi, ecx */ r_edi = r_ecx;
    /* 0049935f: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 00499364: mov dword ptr [edi + 0x414], eax */ W32((u32)(r_edi+0x414u), r_eax);
    /* 0049936a: mov dword ptr [edi + 0x428], 0 */ W32((u32)(r_edi+0x428u), 0x0u);
    /* 00499374: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00499376: mov dword ptr [edi + 0x418], eax */ W32((u32)(r_edi+0x418u), r_eax);
    /* 0049937c: mov dword ptr [edi + 0x42c], 0x43610000 */ W32((u32)(r_edi+0x42cu), 0x43610000u);
    /* 00499386: mov ecx, edi */ r_ecx = r_edi;
    /* 00499388: mov dword ptr [edi + 0x430], 0 */ W32((u32)(r_edi+0x430u), 0x0u);
    /* 00499392: call 0x4970a0 */ r_esp -= 4; W32(r_esp, 0x499397u); f_004970a0();
    /* 00499397: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00499399: mov ecx, edi */ r_ecx = r_edi;
    /* 0049939b: call 0x497104 */ r_esp -= 4; W32(r_esp, 0x4993a0u); f_00497104();
    /* 004993a0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004993a1: ret  */ FN_RET(0x0049935c); r_esp += 4; return;
}

void f_004993a4(void)
{
    FN_ENTER(0x004993a4);
    /* 004993a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004993a5: mov esi, ecx */ r_esi = r_ecx;
    /* 004993a7: mov eax, 0x3c */ r_eax = 0x3cu;
    /* 004993ac: mov dword ptr [esi + 0x414], eax */ W32((u32)(r_esi+0x414u), r_eax);
    /* 004993b2: mov dword ptr [esi + 0x428], 0 */ W32((u32)(r_esi+0x428u), 0x0u);
    /* 004993bc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004993be: mov dword ptr [esi + 0x418], eax */ W32((u32)(r_esi+0x418u), r_eax);
    /* 004993c4: mov dword ptr [esi + 0x42c], 0x43898000 */ W32((u32)(r_esi+0x42cu), 0x43898000u);
    /* 004993ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004993d0: lea edx, [esi + 0x58c] */ r_edx = (u32)(r_esi+0x58cu);
    /* 004993d6: mov dword ptr [esi + 0x430], 0 */ W32((u32)(r_esi+0x430u), 0x0u);
    /* 004993e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004993e1: push 0x3b7 */ { u32 v = 0x3b7u; r_esp -= 4; W32(r_esp, v); }
    /* 004993e6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4993ebu); f_00814298();
    /* 004993eb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004993ed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004993ef: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 004993f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004993f3: push 0x3c5 */ { u32 v = 0x3c5u; r_esp -= 4; W32(r_esp, v); }
    /* 004993f8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4993fdu); f_00814298();
    /* 004993fd: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00499400: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00499402: mov ecx, esi */ r_ecx = r_esi;
    /* 00499404: call 0x497104 */ r_esp -= 4; W32(r_esp, 0x499409u); f_00497104();
    /* 00499409: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049940b: mov ecx, esi */ r_ecx = r_esi;
    /* 0049940d: call 0x4970a0 */ r_esp -= 4; W32(r_esp, 0x499412u); f_004970a0();
    /* 00499412: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00499413: ret  */ FN_RET(0x004993a4); r_esp += 4; return;
}

void f_00499414(void)
{
    FN_ENTER(0x00499414);
    /* 00499414: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00499415: mov edi, ecx */ r_edi = r_ecx;
    /* 00499417: mov eax, 0x12c */ r_eax = 0x12cu;
    /* 0049941c: mov dword ptr [edi + 0x414], eax */ W32((u32)(r_edi+0x414u), r_eax);
    /* 00499422: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00499424: mov dword ptr [edi + 0x418], eax */ W32((u32)(r_edi+0x418u), r_eax);
    /* 0049942a: mov ecx, edi */ r_ecx = r_edi;
    /* 0049942c: call 0x4970a0 */ r_esp -= 4; W32(r_esp, 0x499431u); f_004970a0();
    /* 00499431: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00499433: mov ecx, edi */ r_ecx = r_edi;
    /* 00499435: call 0x497104 */ r_esp -= 4; W32(r_esp, 0x49943au); f_00497104();
    /* 0049943a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049943b: ret  */ FN_RET(0x00499414); r_esp += 4; return;
}

void f_0049943c(void)
{
    FN_ENTER(0x0049943c);
    /* 0049943c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049943d: mov esi, ecx */ r_esi = r_ecx;
    /* 0049943f: mov eax, 0x5a */ r_eax = 0x5au;
    /* 00499444: mov dword ptr [esi + 0x414], eax */ W32((u32)(r_esi+0x414u), r_eax);
    /* 0049944a: mov dword ptr [esi + 0x418], eax */ W32((u32)(r_esi+0x418u), r_eax);
    /* 00499450: mov ecx, esi */ r_ecx = r_esi;
    /* 00499452: call 0x497e20 */ r_esp -= 4; W32(r_esp, 0x499457u); f_00497e20();
    /* 00499457: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00499459: mov ecx, esi */ r_ecx = r_esi;
    /* 0049945b: call 0x4970a0 */ r_esp -= 4; W32(r_esp, 0x499460u); f_004970a0();
    /* 00499460: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00499462: mov ecx, esi */ r_ecx = r_esi;
    /* 00499464: call 0x497104 */ r_esp -= 4; W32(r_esp, 0x499469u); f_00497104();
    /* 00499469: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049946a: ret  */ FN_RET(0x0049943c); r_esp += 4; return;
}

void f_0049946c(void)
{
    FN_ENTER(0x0049946c);
    /* 0049946c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049946d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0049946f: mov eax, 0x7b */ r_eax = 0x7bu;
    /* 00499474: mov dword ptr [ebp + 0x414], eax */ W32((u32)(r_ebp+0x414u), r_eax);
    /* 0049947a: mov dword ptr [ebp + 0x418], eax */ W32((u32)(r_ebp+0x418u), r_eax);
    /* 00499480: lea edx, [ebp + 0x428] */ r_edx = (u32)(r_ebp+0x428u);
    /* 00499486: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00499487: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00499489: call 0x496ad4 */ r_esp -= 4; W32(r_esp, 0x49948eu); f_00496ad4();
    /* 0049948e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00499490: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00499491: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00499492: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00499493: push 0x3b6 */ { u32 v = 0x3b6u; r_esp -= 4; W32(r_esp, v); }
    /* 00499498: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49949du); f_00814298();
    /* 0049949d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004994a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004994a2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004994a4: call 0x4970a0 */ r_esp -= 4; W32(r_esp, 0x4994a9u); f_004970a0();
    /* 004994a9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004994ab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004994ad: call 0x497104 */ r_esp -= 4; W32(r_esp, 0x4994b2u); f_00497104();
    /* 004994b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004994b3: ret  */ FN_RET(0x0049946c); r_esp += 4; return;
}

void f_004994b4(void)
{
    FN_ENTER(0x004994b4);
    /* 004994b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004994b5: mov edi, ecx */ r_edi = r_ecx;
    /* 004994b7: mov eax, dword ptr [edi + 0x4a4] */ r_eax = R32((u32)(r_edi+0x4a4u));
    /* 004994bd: mov edx, dword ptr [edi + 0x4a8] */ r_edx = R32((u32)(r_edi+0x4a8u));
    /* 004994c3: lea eax, [eax + edx + 0x1e] */ r_eax = (u32)(r_eax+r_edx+0x1eu);
    /* 004994c7: mov dword ptr [edi + 0x414], eax */ W32((u32)(r_edi+0x414u), r_eax);
    /* 004994cd: mov dword ptr [edi + 0x418], eax */ W32((u32)(r_edi+0x418u), r_eax);
    /* 004994d3: lea edx, [edi + 0x5d4] */ r_edx = (u32)(r_edi+0x5d4u);
    /* 004994d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004994db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004994dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004994dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004994de: push 0x3bc */ { u32 v = 0x3bcu; r_esp -= 4; W32(r_esp, v); }
    /* 004994e3: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4994e8u); f_00814298();
    /* 004994e8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004994eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004994ed: mov ecx, edi */ r_ecx = r_edi;
    /* 004994ef: call 0x497104 */ r_esp -= 4; W32(r_esp, 0x4994f4u); f_00497104();
    /* 004994f4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004994f6: mov ecx, edi */ r_ecx = r_edi;
    /* 004994f8: call 0x4970a0 */ r_esp -= 4; W32(r_esp, 0x4994fdu); f_004970a0();
    /* 004994fd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004994ff: mov ecx, edi */ r_ecx = r_edi;
    /* 00499501: call 0x4970a0 */ r_esp -= 4; W32(r_esp, 0x499506u); f_004970a0();
    /* 00499506: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00499507: ret  */ FN_RET(0x004994b4); r_esp += 4; return;
}

void f_00499508(void)
{
    FN_ENTER(0x00499508);
    /* 00499508: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00499509: mov edi, ecx */ r_edi = r_ecx;
    /* 0049950b: mov eax, 0x3e */ r_eax = 0x3eu;
    /* 00499510: mov dword ptr [edi + 0x414], eax */ W32((u32)(r_edi+0x414u), r_eax);
    /* 00499516: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00499518: mov dword ptr [edi + 0x418], eax */ W32((u32)(r_edi+0x418u), r_eax);
    /* 0049951e: mov ecx, edi */ r_ecx = r_edi;
    /* 00499520: call 0x497104 */ r_esp -= 4; W32(r_esp, 0x499525u); f_00497104();
    /* 00499525: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00499527: mov ecx, edi */ r_ecx = r_edi;
    /* 00499529: call 0x4970a0 */ r_esp -= 4; W32(r_esp, 0x49952eu); f_004970a0();
    /* 0049952e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049952f: ret  */ FN_RET(0x00499508); r_esp += 4; return;
}

void f_00499530(void)
{
    FN_ENTER(0x00499530);
    /* 00499530: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00499531: mov esi, ecx */ r_esi = r_ecx;
    /* 00499533: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 00499539: mov edx, 0x3e */ r_edx = 0x3eu;
    /* 0049953e: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00499541: je 0x499592 */ if (fZ) goto L_00499592;
L_00499543:; BB(0x00499543);
    /* 00499543: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00499546: je 0x499592 */ if (fZ) goto L_00499592;
L_00499548:; BB(0x00499548);
    /* 00499548: mov dword ptr [esi + 0x414], 0x3e */ W32((u32)(r_esi+0x414u), 0x3eu);
L_00499552:; BB(0x00499552);
    /* 00499552: mov dword ptr [esi + 0x418], edx */ W32((u32)(r_esi+0x418u), r_edx);
    /* 00499558: lea eax, [esi + 0x428] */ r_eax = (u32)(r_esi+0x428u);
    /* 0049955e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049955f: mov ecx, esi */ r_ecx = r_esi;
    /* 00499561: call 0x4969a0 */ r_esp -= 4; W32(r_esp, 0x499566u); f_004969a0();
    /* 00499566: lea edx, [esi + 0x5ec] */ r_edx = (u32)(r_esi+0x5ecu);
    /* 0049956c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049956e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049956f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00499570: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00499571: push 0x3d5 */ { u32 v = 0x3d5u; r_esp -= 4; W32(r_esp, v); }
    /* 00499576: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49957bu); f_00814298();
    /* 0049957b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049957e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00499580: mov ecx, esi */ r_ecx = r_esi;
    /* 00499582: call 0x497104 */ r_esp -= 4; W32(r_esp, 0x499587u); f_00497104();
    /* 00499587: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00499589: mov ecx, esi */ r_ecx = r_esi;
    /* 0049958b: call 0x497104 */ r_esp -= 4; W32(r_esp, 0x499590u); f_00497104();
    /* 00499590: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00499591: ret  */ FN_RET(0x00499530); r_esp += 4; return;
L_00499592:; BB(0x00499592);
    /* 00499592: mov dword ptr [esi + 0x414], 0x5c */ W32((u32)(r_esi+0x414u), 0x5cu);
    /* 0049959c: mov edx, 0x5c */ r_edx = 0x5cu;
    /* 004995a1: jmp 0x499552 */ goto L_00499552;
}

void f_004995a4(void)
{
    FN_ENTER(0x004995a4);
    /* 004995a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004995a5: mov esi, ecx */ r_esi = r_ecx;
    /* 004995a7: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 004995ad: mov edx, 0x3e */ r_edx = 0x3eu;
    /* 004995b2: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004995b5: je 0x499601 */ if (fZ) goto L_00499601;
L_004995b7:; BB(0x004995b7);
    /* 004995b7: mov dword ptr [esi + 0x414], 0x3e */ W32((u32)(r_esi+0x414u), 0x3eu);
L_004995c1:; BB(0x004995c1);
    /* 004995c1: mov dword ptr [esi + 0x418], edx */ W32((u32)(r_esi+0x418u), r_edx);
    /* 004995c7: lea eax, [esi + 0x428] */ r_eax = (u32)(r_esi+0x428u);
    /* 004995cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004995ce: mov ecx, esi */ r_ecx = r_esi;
    /* 004995d0: call 0x496a48 */ r_esp -= 4; W32(r_esp, 0x4995d5u); f_00496a48();
    /* 004995d5: lea edx, [esi + 0x5ec] */ r_edx = (u32)(r_esi+0x5ecu);
    /* 004995db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004995dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004995de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004995df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004995e0: push 0x3bb */ { u32 v = 0x3bbu; r_esp -= 4; W32(r_esp, v); }
    /* 004995e5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4995eau); f_00814298();
    /* 004995ea: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004995ed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004995ef: mov ecx, esi */ r_ecx = r_esi;
    /* 004995f1: call 0x497104 */ r_esp -= 4; W32(r_esp, 0x4995f6u); f_00497104();
    /* 004995f6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004995f8: mov ecx, esi */ r_ecx = r_esi;
    /* 004995fa: call 0x4970a0 */ r_esp -= 4; W32(r_esp, 0x4995ffu); f_004970a0();
    /* 004995ff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00499600: ret  */ FN_RET(0x004995a4); r_esp += 4; return;
L_00499601:; BB(0x00499601);
    /* 00499601: mov dword ptr [esi + 0x414], 0x5c */ W32((u32)(r_esi+0x414u), 0x5cu);
    /* 0049960b: mov edx, 0x5c */ r_edx = 0x5cu;
    /* 00499610: jmp 0x4995c1 */ goto L_004995c1;
}

void f_00499614(void)
{
    FN_ENTER(0x00499614);
    /* 00499614: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00499615: mov esi, ecx */ r_esi = r_ecx;
    /* 00499617: mov eax, 0x3e */ r_eax = 0x3eu;
    /* 0049961c: mov dword ptr [esi + 0x414], eax */ W32((u32)(r_esi+0x414u), r_eax);
    /* 00499622: mov dword ptr [esi + 0x418], eax */ W32((u32)(r_esi+0x418u), r_eax);
    /* 00499628: lea eax, [esi + 0x5ec] */ r_eax = (u32)(r_esi+0x5ecu);
    /* 0049962e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00499630: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00499631: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00499632: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00499633: push 0x3bb */ { u32 v = 0x3bbu; r_esp -= 4; W32(r_esp, v); }
    /* 00499638: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49963du); f_00814298();
    /* 0049963d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00499640: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00499642: mov ecx, esi */ r_ecx = r_esi;
    /* 00499644: call 0x4970a0 */ r_esp -= 4; W32(r_esp, 0x499649u); f_004970a0();
    /* 00499649: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049964b: mov ecx, esi */ r_ecx = r_esi;
    /* 0049964d: call 0x497104 */ r_esp -= 4; W32(r_esp, 0x499652u); f_00497104();
    /* 00499652: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00499653: ret  */ FN_RET(0x00499614); r_esp += 4; return;
}

void f_00499654(void)
{
    FN_ENTER(0x00499654);
    /* 00499654: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00499655: mov edi, ecx */ r_edi = r_ecx;
    /* 00499657: mov eax, 0x5a */ r_eax = 0x5au;
    /* 0049965c: mov dword ptr [edi + 0x414], eax */ W32((u32)(r_edi+0x414u), r_eax);
    /* 00499662: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00499664: mov dword ptr [edi + 0x418], eax */ W32((u32)(r_edi+0x418u), r_eax);
    /* 0049966a: mov ecx, edi */ r_ecx = r_edi;
    /* 0049966c: call 0x497104 */ r_esp -= 4; W32(r_esp, 0x499671u); f_00497104();
    /* 00499671: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00499673: mov ecx, edi */ r_ecx = r_edi;
    /* 00499675: call 0x4970a0 */ r_esp -= 4; W32(r_esp, 0x49967au); f_004970a0();
    /* 0049967a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049967b: ret  */ FN_RET(0x00499654); r_esp += 4; return;
}

void f_0049967c(void)
{
    FN_ENTER(0x0049967c);
    /* 0049967c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049967d: mov edi, ecx */ r_edi = r_ecx;
    /* 0049967f: mov eax, 0x5a */ r_eax = 0x5au;
    /* 00499684: mov dword ptr [edi + 0x414], eax */ W32((u32)(r_edi+0x414u), r_eax);
    /* 0049968a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049968c: mov dword ptr [edi + 0x418], eax */ W32((u32)(r_edi+0x418u), r_eax);
    /* 00499692: mov ecx, edi */ r_ecx = r_edi;
    /* 00499694: call 0x4970a0 */ r_esp -= 4; W32(r_esp, 0x499699u); f_004970a0();
    /* 00499699: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049969b: mov ecx, edi */ r_ecx = r_edi;
    /* 0049969d: call 0x497104 */ r_esp -= 4; W32(r_esp, 0x4996a2u); f_00497104();
    /* 004996a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004996a3: ret  */ FN_RET(0x0049967c); r_esp += 4; return;
}

void f_004996a4(void)
{
    FN_ENTER(0x004996a4);
    /* 004996a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004996a5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004996a6: mov edi, ecx */ r_edi = r_ecx;
    /* 004996a8: mov eax, dword ptr [edi + 0x41c] */ r_eax = R32((u32)(r_edi+0x41cu));
    /* 004996ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004996b0: jne 0x4996c5 */ if (!fZ) goto L_004996c5;
L_004996b2:; BB(0x004996b2);
    /* 004996b2: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 004996b7: mov dword ptr [edi + 0x414], eax */ W32((u32)(r_edi+0x414u), r_eax);
    /* 004996bd: mov dword ptr [edi + 0x418], eax */ W32((u32)(r_edi+0x418u), r_eax);
    /* 004996c3: jmp 0x4996d6 */ goto L_004996d6;
L_004996c5:; BB(0x004996c5);
    /* 004996c5: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 004996ca: mov dword ptr [edi + 0x414], eax */ W32((u32)(r_edi+0x414u), r_eax);
    /* 004996d0: mov dword ptr [edi + 0x418], eax */ W32((u32)(r_edi+0x418u), r_eax);
L_004996d6:; BB(0x004996d6);
    /* 004996d6: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 004996d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004996db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004996dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004996dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004996de: push 0x3ba */ { u32 v = 0x3bau; r_esp -= 4; W32(r_esp, v); }
    /* 004996e3: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4996e8u); f_00814298();
    /* 004996e8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004996eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004996ed: mov ecx, edi */ r_ecx = r_edi;
    /* 004996ef: call 0x497104 */ r_esp -= 4; W32(r_esp, 0x4996f4u); f_00497104();
    /* 004996f4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004996f6: mov ecx, edi */ r_ecx = r_edi;
    /* 004996f8: call 0x4970a0 */ r_esp -= 4; W32(r_esp, 0x4996fdu); f_004970a0();
    /* 004996fd: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004996ff: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00499701: mov ecx, edi */ r_ecx = r_edi;
    /* 00499703: call 0x496b54 */ r_esp -= 4; W32(r_esp, 0x499708u); f_00496b54();
    /* 00499708: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049970a: jle 0x499725 */ if ((fZ||fS!=fO)) goto L_00499725;
L_0049970c:; BB(0x0049970c);
    /* 0049970c: mov ecx, edi */ r_ecx = r_edi;
    /* 0049970e: call 0x497e20 */ r_esp -= 4; W32(r_esp, 0x499713u); f_00497e20();
    /* 00499713: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00499715: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00499717: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00499718: push 0x5b4 */ { u32 v = 0x5b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0049971d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x499722u); f_00814298();
    /* 00499722: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00499725:; BB(0x00499725);
    /* 00499725: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00499726: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00499727: ret  */ FN_RET(0x004996a4); r_esp += 4; return;
}

void f_00499728(void) /* sub_499728 */
{
    FN_ENTER(0x00499728);
    /* 00499728: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00499729: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0049972b: mov eax, dword ptr [ebx + 0x41c] */ r_eax = R32((u32)(r_ebx+0x41cu));
    /* 00499731: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00499733: jne 0x499748 */ if (!fZ) goto L_00499748;
L_00499735:; BB(0x00499735);
    /* 00499735: mov eax, 0x5a */ r_eax = 0x5au;
    /* 0049973a: mov dword ptr [ebx + 0x414], eax */ W32((u32)(r_ebx+0x414u), r_eax);
    /* 00499740: mov dword ptr [ebx + 0x418], eax */ W32((u32)(r_ebx+0x418u), r_eax);
    /* 00499746: jmp 0x499778 */ goto L_00499778;
L_00499748:; BB(0x00499748);
    /* 00499748: mov eax, dword ptr [ebx + 0x4b4] */ r_eax = R32((u32)(r_ebx+0x4b4u));
    /* 0049974e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00499750: je 0x499766 */ if (fZ) goto L_00499766;
L_00499752:; BB(0x00499752);
    /* 00499752: mov eax, dword ptr [ebx + 0x4b0] */ r_eax = R32((u32)(r_ebx+0x4b0u));
    /* 00499758: mov dword ptr [ebx + 0x414], eax */ W32((u32)(r_ebx+0x414u), r_eax);
    /* 0049975e: mov dword ptr [ebx + 0x418], eax */ W32((u32)(r_ebx+0x418u), r_eax);
    /* 00499764: jmp 0x499778 */ goto L_00499778;
L_00499766:; BB(0x00499766);
    /* 00499766: mov eax, dword ptr [ebx + 0x4ac] */ r_eax = R32((u32)(r_ebx+0x4acu));
    /* 0049976c: mov dword ptr [ebx + 0x414], eax */ W32((u32)(r_ebx+0x414u), r_eax);
    /* 00499772: mov dword ptr [ebx + 0x418], eax */ W32((u32)(r_ebx+0x418u), r_eax);
L_00499778:; BB(0x00499778);
    /* 00499778: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049977a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0049977c: call 0x4970a0 */ r_esp -= 4; W32(r_esp, 0x499781u); f_004970a0();
    /* 00499781: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00499783: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00499785: call 0x497104 */ r_esp -= 4; W32(r_esp, 0x49978au); f_00497104();
    /* 0049978a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049978b: ret  */ FN_RET(0x00499728); r_esp += 4; return;
}

void f_0049978c(void) /* sub_49978C */
{
    FN_ENTER(0x0049978c);
    /* 0049978c: mov eax, dword ptr [0xa47394] */ r_eax = R32((u32)(0xa47394u));
    /* 00499791: mov edx, dword ptr [0xa47398] */ r_edx = R32((u32)(0xa47398u));
    /* 00499797: mov dword ptr [ecx + 0x428], eax */ W32((u32)(r_ecx+0x428u), r_eax);
    /* 0049979d: mov eax, dword ptr [0xa4739c] */ r_eax = R32((u32)(0xa4739cu));
    /* 004997a2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004997a4: mov dword ptr [ecx + 0x42c], edx */ W32((u32)(r_ecx+0x42cu), r_edx);
    /* 004997aa: mov dword ptr [ecx + 0x430], eax */ W32((u32)(r_ecx+0x430u), r_eax);
    /* 004997b0: mov eax, 0x5a */ r_eax = 0x5au;
    /* 004997b5: mov dword ptr [ecx + 0x414], eax */ W32((u32)(r_ecx+0x414u), r_eax);
    /* 004997bb: mov dword ptr [ecx + 0x418], eax */ W32((u32)(r_ecx+0x418u), r_eax);
    /* 004997c1: call 0x4970a0 */ r_esp -= 4; W32(r_esp, 0x4997c6u); f_004970a0();
    /* 004997c6: ret  */ FN_RET(0x0049978c); r_esp += 4; return;
}

void f_004997c8(void) /* sub_4997C8 */
{
    FN_ENTER(0x004997c8);
    /* 004997c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004997c9: mov ebp, esp */ r_ebp = r_esp;
    /* 004997cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004997cd: push 0x8d0308 */ { u32 v = 0x8d0308u; r_esp -= 4; W32(r_esp, v); }
    /* 004997d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004997d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004997d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004997e0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004997e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004997e6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004997e9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004997ec: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004997ef: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004997f2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004997f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004997fc: mov eax, ecx */ r_eax = r_ecx;
    /* 004997fe: mov dword ptr [eax], 0xaf9a00 */ W32((u32)(r_eax), 0xaf9a00u);
    /* 00499804: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00499806:; BB(0x00499806);
    /* 00499806: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00499809: mov eax, dword ptr [eax + esi*4 + 0x794] */ r_eax = R32((u32)(r_eax+r_esi*4+0x794u));
    /* 00499810: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00499813: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00499815: je 0x49982c */ if (fZ) goto L_0049982c;
L_00499817:; BB(0x00499817);
    /* 00499817: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00499818: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x49981du); f_005cdcc0();
    /* 0049981d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049981e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00499821: mov dword ptr [eax + ebx*2 + 0x794], 0 */ W32((u32)(r_eax+r_ebx*2+0x794u), 0x0u);
L_0049982c:; BB(0x0049982c);
    /* 0049982c: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0049982f: cmp esi, 0xe */ {  u32 a = r_esi; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00499832: jl 0x499806 */ if ((fS!=fO)) goto L_00499806;
L_00499834:; BB(0x00499834);
    /* 00499834: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00499837: call 0x4998cc */ r_esp -= 4; W32(r_esp, 0x49983cu); f_004998cc();
    /* 0049983c: call 0x49004c */ r_esp -= 4; W32(r_esp, 0x499841u); f_0049004c();
    /* 00499841: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00499844: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00499846: mov dword ptr [edx + 0x408], eax */ W32((u32)(r_edx+0x408u), r_eax);
    /* 0049984c: mov dword ptr [edx + 0x40c], eax */ W32((u32)(r_edx+0x40cu), r_eax);
    /* 00499852: mov dword ptr [edx + 0x418], eax */ W32((u32)(r_edx+0x418u), r_eax);
    /* 00499858: mov dword ptr [edx + 0x41c], eax */ W32((u32)(r_edx+0x41cu), r_eax);
    /* 0049985e: lea ecx, [edx + 0x780] */ r_ecx = (u32)(r_edx+0x780u);
    /* 00499864: call 0x48ead0 */ r_esp -= 4; W32(r_esp, 0x499869u); f_0048ead0();
    /* 00499869: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0049986c: mov ecx, dword ptr [eax + 0x77c] */ r_ecx = R32((u32)(r_eax+0x77cu));
    /* 00499872: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00499874: je 0x499888 */ if (fZ) goto L_00499888;
L_00499876:; BB(0x00499876);
    /* 00499876: call 0x5883f0 */ r_esp -= 4; W32(r_esp, 0x49987bu); f_005883f0();
    /* 0049987b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0049987e: mov dword ptr [eax + 0x77c], 0 */ W32((u32)(r_eax+0x77cu), 0x0u);
L_00499888:; BB(0x00499888);
    /* 00499888: mov ecx, eax */ r_ecx = r_eax;
    /* 0049988a: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x49988fu); f_007b9c8c();
    /* 0049988f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00499896: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00499899: call 0x78638c */ r_esp -= 4; W32(r_esp, 0x49989eu); f_0078638c();
    /* 0049989e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004998a1: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004998a3: jne 0x4998be */ if (!fZ) goto L_004998be;
L_004998a5:; BB(0x004998a5);
    /* 004998a5: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004998a8: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004998ab: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004998ae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004998b1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004998b8: mov esp, ebp */ r_esp = r_ebp;
    /* 004998ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004998bb: ret 4 */ FN_RET(0x004997c8); r_esp += 8; return;
L_004998be:; BB(0x004998be);
    /* 004998be: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004998c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004998c2: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4998c7u); f_005c2f74();
    /* 004998c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004998c8: jmp 0x4998a5 */ goto L_004998a5;
}

void f_004998cc(void) /* sub_4998CC */
{
    FN_ENTER(0x004998cc);
    /* 004998cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004998cd: mov edi, ecx */ r_edi = r_ecx;
    /* 004998cf: movzx eax, word ptr [edi + 0x574] */ r_eax = (u32)R16((u32)(r_edi+0x574u));
    /* 004998d6: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004998db: je 0x4998e4 */ if (fZ) goto L_004998e4;
L_004998dd:; BB(0x004998dd);
    /* 004998dd: mov ecx, edi */ r_ecx = r_edi;
    /* 004998df: call 0x49a37c */ r_esp -= 4; W32(r_esp, 0x4998e4u); f_0049a37c();
L_004998e4:; BB(0x004998e4);
    /* 004998e4: mov ecx, edi */ r_ecx = r_edi;
    /* 004998e6: call 0x49a408 */ r_esp -= 4; W32(r_esp, 0x4998ebu); f_0049a408();
    /* 004998eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004998ed: mov dword ptr [edi + 0x578], eax */ W32((u32)(r_edi+0x578u), r_eax);
    /* 004998f3: mov dword ptr [edi + 0x57c], eax */ W32((u32)(r_edi+0x57cu), r_eax);
    /* 004998f9: mov dword ptr [edi + 0x580], eax */ W32((u32)(r_edi+0x580u), r_eax);
    /* 004998ff: mov dword ptr [edi + 0x584], eax */ W32((u32)(r_edi+0x584u), r_eax);
    /* 00499905: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00499906: ret  */ FN_RET(0x004998cc); r_esp += 4; return;
}

void f_00499908(void) /* sub_499908 */
{
    FN_ENTER(0x00499908);
    /* 00499908: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00499909: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049990a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049990b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049990c: sub esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00499912: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00499914: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00499916: call 0x49a538 */ r_esp -= 4; W32(r_esp, 0x49991bu); f_0049a538();
    /* 0049991b: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 00499921: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00499924: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00499926: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00499928: mov eax, dword ptr [edx*8 + 0x9a7694] */ r_eax = R32((u32)(r_edx*8+0x9a7694u));
    /* 0049992f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00499931: je 0x499937 */ if (fZ) goto L_00499937;
L_00499933:; BB(0x00499933);
    /* 00499933: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00499935: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x499937u); call_ind(t); }
L_00499937:; BB(0x00499937);
    /* 00499937: mov eax, dword ptr [ebx + 0x400] */ r_eax = R32((u32)(r_ebx+0x400u));
    /* 0049993d: mov edx, dword ptr [eax + 0x37c] */ r_edx = R32((u32)(r_eax+0x37cu));
    /* 00499943: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00499945: jne 0x499963 */ if (!fZ) goto L_00499963;
L_00499947:; BB(0x00499947);
    /* 00499947: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 0049994d: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00499950: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00499952: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00499954: mov eax, dword ptr [edx*8 + 0x9a7690] */ r_eax = R32((u32)(r_edx*8+0x9a7690u));
    /* 0049995b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049995d: je 0x499963 */ if (fZ) goto L_00499963;
L_0049995f:; BB(0x0049995f);
    /* 0049995f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00499961: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x499963u); call_ind(t); }
L_00499963:; BB(0x00499963);
    /* 00499963: mov eax, dword ptr [ebx + 0x4b0] */ r_eax = R32((u32)(r_ebx+0x4b0u));
    /* 00499969: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 0049996c: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0049996f: fld dword ptr [ebx + 0x4b4] */ FPUSH(R_F32((u32)(r_ebx+0x4b4u)));
    /* 00499975: fadd dword ptr [ebx + 0x4b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x4b8u));
    /* 0049997b: mov eax, dword ptr [ebx + 0x4ac] */ r_eax = R32((u32)(r_ebx+0x4acu));
    /* 00499981: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00499984: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00499986: fadd dword ptr [edx*4 + 0x903308] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x903308u));
    /* 0049998d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049998f: jne 0x4999be */ if (!fZ) goto L_004999be;
L_00499991:; BB(0x00499991);
    /* 00499991: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00499993: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00499995: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00499996: ja 0x4999ab */ if ((!fC&&!fZ)) goto L_004999ab;
L_00499998:; BB(0x00499998);
    /* 00499998: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0049999a: fstp dword ptr [ebx + 0x4b4] */ W_F32((u32)(r_ebx+0x4b4u), ST(0)); FPOP();
    /* 004999a0: fld dword ptr [0x9035f4] */ FPUSH(R_F32((u32)(0x9035f4u)));
    /* 004999a6: jmp 0x499a99 */ goto L_00499a99;
L_004999ab:; BB(0x004999ab);
    /* 004999ab: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004999ad: fstp dword ptr [ebx + 0x4b4] */ W_F32((u32)(r_ebx+0x4b4u), ST(0)); FPOP();
    /* 004999b3: fld dword ptr [0x9035f4] */ FPUSH(R_F32((u32)(0x9035f4u)));
    /* 004999b9: jmp 0x499a99 */ goto L_00499a99;
L_004999be:; BB(0x004999be);
    /* 004999be: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004999c1: jne 0x499a8b */ if (!fZ) goto L_00499a8b;
L_004999c7:; BB(0x004999c7);
    /* 004999c7: fld dword ptr [0x9035f8] */ FPUSH(R_F32((u32)(0x9035f8u)));
    /* 004999cd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004999cf: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004999d1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004999d3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004999d4: jbe 0x4999e9 */ if ((fC||fZ)) goto L_004999e9;
L_004999d6:; BB(0x004999d6);
    /* 004999d6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004999d8: fstp dword ptr [ebx + 0x4b4] */ W_F32((u32)(r_ebx+0x4b4u), ST(0)); FPOP();
    /* 004999de: fld dword ptr [0x9035f4] */ FPUSH(R_F32((u32)(0x9035f4u)));
    /* 004999e4: jmp 0x499a99 */ goto L_00499a99;
L_004999e9:; BB(0x004999e9);
    /* 004999e9: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004999eb: mov edx, dword ptr [ebx + 0x4a8] */ r_edx = R32((u32)(r_ebx+0x4a8u));
    /* 004999f1: fstp dword ptr [ebx + 0x4b4] */ W_F32((u32)(r_ebx+0x4b4u), ST(0)); FPOP();
    /* 004999f7: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004999fa: mov esi, dword ptr [eax*8 + 0x9a7484] */ r_esi = R32((u32)(r_eax*8+0x9a7484u));
    /* 00499a01: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00499a04: je 0x49a240 */ if (fZ) goto L_0049a240;
L_00499a0a:; BB(0x00499a0a);
    /* 00499a0a: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00499a0c: je 0x499a83 */ if (fZ) goto L_00499a83;
L_00499a0e:; BB(0x00499a0e);
    /* 00499a0e: mov ecx, dword ptr [ebx + 0x404] */ r_ecx = R32((u32)(r_ebx+0x404u));
    /* 00499a14: mov dword ptr [ebx + 0x4a8], esi */ W32((u32)(r_ebx+0x4a8u), r_esi);
    /* 00499a1a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00499a1c: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00499a1f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00499a21: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00499a23: push dword ptr [edx + 0x9a7488] */ { u32 v = R32((u32)(r_edx+0x9a7488u)); r_esp -= 4; W32(r_esp, v); }
    /* 00499a29: mov eax, dword ptr [edx + 0x9a7480] */ r_eax = R32((u32)(r_edx+0x9a7480u));
    /* 00499a2f: mov dword ptr [ebx + 0x4ac], eax */ W32((u32)(r_ebx+0x4acu), r_eax);
    /* 00499a35: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x499a3au); f_005b8638();
    /* 00499a3a: fld dword ptr [0x9035f4] */ FPUSH(R_F32((u32)(0x9035f4u)));
    /* 00499a40: mov edx, dword ptr [ebx + 0x4c0] */ r_edx = R32((u32)(r_ebx+0x4c0u));
    /* 00499a46: mov dword ptr [ebx + 0x4bc], edx */ W32((u32)(r_ebx+0x4bcu), r_edx);
    /* 00499a4c: mov edx, dword ptr [ebx + 0x4b0] */ r_edx = R32((u32)(r_ebx+0x4b0u));
    /* 00499a52: mov dword ptr [ebx + 0x4c4], edx */ W32((u32)(r_ebx+0x4c4u), r_edx);
    /* 00499a58: mov edx, dword ptr [ebx + 0x4b4] */ r_edx = R32((u32)(r_ebx+0x4b4u));
    /* 00499a5e: mov dword ptr [ebx + 0x4c8], edx */ W32((u32)(r_ebx+0x4c8u), r_edx);
    /* 00499a64: mov esi, dword ptr [esi*8 + 0x9a748c] */ r_esi = R32((u32)(r_esi*8+0x9a748cu));
    /* 00499a6b: mov dword ptr [ebx + 0x4b4], 0 */ W32((u32)(r_ebx+0x4b4u), 0x0u);
    /* 00499a75: mov dword ptr [ebx + 0x4b8], esi */ W32((u32)(r_ebx+0x4b8u), r_esi);
    /* 00499a7b: mov dword ptr [ebx + 0x4b0], eax */ W32((u32)(r_ebx+0x4b0u), r_eax);
    /* 00499a81: jmp 0x499a99 */ goto L_00499a99;
L_00499a83:; BB(0x00499a83);
    /* 00499a83: fld dword ptr [0x9035f4] */ FPUSH(R_F32((u32)(0x9035f4u)));
    /* 00499a89: jmp 0x499a99 */ goto L_00499a99;
L_00499a8b:; BB(0x00499a8b);
    /* 00499a8b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00499a8d: fstp dword ptr [ebx + 0x4b4] */ W_F32((u32)(r_ebx+0x4b4u), ST(0)); FPOP();
    /* 00499a93: fld dword ptr [0x9035f4] */ FPUSH(R_F32((u32)(0x9035f4u)));
L_00499a99:; BB(0x00499a99);
    /* 00499a99: fld dword ptr [ebx + 0x4bc] */ FPUSH(R_F32((u32)(r_ebx+0x4bcu)));
    /* 00499a9f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00499aa1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00499aa3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00499aa4: je 0x49a373 */ if (fZ) goto L_0049a373;
L_00499aaa:; BB(0x00499aaa);
    /* 00499aaa: fld dword ptr [ebx + 0x4c0] */ FPUSH(R_F32((u32)(r_ebx+0x4c0u)));
    /* 00499ab0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00499ab2: fcom dword ptr [0x9035f0] */ fx_compare(ST(0), R_F32((u32)(0x9035f0u))); 
    /* 00499ab8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00499aba: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00499abb: jb 0x499ac7 */ if (fC) goto L_00499ac7;
L_00499abd:; BB(0x00499abd);
    /* 00499abd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00499abf: fstp dword ptr [ebx + 0x4bc] */ W_F32((u32)(r_ebx+0x4bcu), ST(0)); FPOP();
    /* 00499ac5: jmp 0x499acf */ goto L_00499acf;
L_00499ac7:; BB(0x00499ac7);
    /* 00499ac7: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00499ac9: fstp dword ptr [ebx + 0x4bc] */ W_F32((u32)(r_ebx+0x4bcu), ST(0)); FPOP();
L_00499acf:; BB(0x00499acf);
    /* 00499acf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00499ad1: call 0x49a668 */ r_esp -= 4; W32(r_esp, 0x499ad6u); f_0049a668();
    /* 00499ad6: mov ecx, dword ptr [ebx + 0xa4] */ r_ecx = R32((u32)(r_ebx+0xa4u));
    /* 00499adc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00499ade: je 0x49a361 */ if (fZ) goto L_0049a361;
L_00499ae4:; BB(0x00499ae4);
    /* 00499ae4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00499ae6: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 00499ae9: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00499aed: lea esi, [ebx + 0x5b4] */ r_esi = (u32)(r_ebx+0x5b4u);
    /* 00499af3: mov edi, eax */ r_edi = r_eax;
    /* 00499af5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00499af7: jmp 0x499aff */ goto L_00499aff;
L_00499af9:; BB(0x00499af9);
    /* 00499af9: mov ebp, dword ptr [ebx + 0xa4] */ r_ebp = R32((u32)(r_ebx+0xa4u));
L_00499aff:; BB(0x00499aff);
    /* 00499aff: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 00499b02: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00499b04: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00499b06: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00499b08: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00499b0a: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00499b0c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00499b0e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00499b10: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00499b12: mov edx, dword ptr [edi*8 + 0x902ee4] */ r_edx = R32((u32)(r_edi*8+0x902ee4u));
    /* 00499b19: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00499b1b: jne 0x499bb2 */ if (!fZ) goto L_00499bb2;
L_00499b21:; BB(0x00499b21);
    /* 00499b21: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00499b23: je 0x499bb2 */ if (fZ) goto L_00499bb2;
L_00499b29:; BB(0x00499b29);
    /* 00499b29: mov edx, dword ptr [edi*8 + 0x902ee8] */ r_edx = R32((u32)(r_edi*8+0x902ee8u));
    /* 00499b30: lea ecx, [esp + 0x44] */ r_ecx = (u32)(r_esp+0x44u);
    /* 00499b34: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00499b36: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00499b38: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00499b3b: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00499b3d: mov edx, dword ptr [esi + eax] */ r_edx = R32((u32)(r_esi+r_eax));
    /* 00499b40: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 00499b44: mov edx, dword ptr [esi + eax + 4] */ r_edx = R32((u32)(r_esi+r_eax+0x4u));
    /* 00499b48: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00499b4c: mov edx, dword ptr [esi + eax + 8] */ r_edx = R32((u32)(r_esi+r_eax+0x8u));
    /* 00499b50: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 00499b54: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00499b58: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x499b5du); f_0082f9c4();
    /* 00499b5d: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x499b62u); f_0082d7b0();
    /* 00499b62: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00499b64: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x499b69u); f_00830cd8();
    /* 00499b69: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00499b6c: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00499b6e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00499b70: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x499b75u); f_0082d8bc();
    /* 00499b75: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00499b76: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 00499b7a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00499b7c: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x499b81u); f_00830aa0();
    /* 00499b81: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x499b86u); f_0082da80();
    /* 00499b86: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00499b89: mov dword ptr [ebp + 0x1c], edx */ W32((u32)(r_ebp+0x1cu), r_edx);
    /* 00499b8c: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 00499b8f: mov dword ptr [ebp + 0x20], edx */ W32((u32)(r_ebp+0x20u), r_edx);
    /* 00499b92: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00499b95: mov dword ptr [ebp + 0x24], edx */ W32((u32)(r_ebp+0x24u), r_edx);
    /* 00499b98: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00499b9c: add ebp, 0x1c */ {  u32 a = r_ebp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00499b9f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00499ba1: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x499ba6u); f_0082ebac();
    /* 00499ba6: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00499ba9: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00499bac: jl 0x499af9 */ if ((fS!=fO)) goto L_00499af9;
L_00499bb2:; BB(0x00499bb2);
    /* 00499bb2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00499bb4: call 0x49a68c */ r_esp -= 4; W32(r_esp, 0x499bb9u); f_0049a68c();
    /* 00499bb9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00499bbb: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x499bc0u); f_007b6880();
    /* 00499bc0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00499bc2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00499bc3: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x499bc8u); f_006946a8();
    /* 00499bc8: mov eax, 1 */ r_eax = 0x1u;
    /* 00499bcd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00499bce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00499bcf: push 0x40800000 */ { u32 v = 0x40800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00499bd4: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00499bd9: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00499bdd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00499bde: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x499be3u); f_0080575c();
    /* 00499be3: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00499be6: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 00499bea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00499bec: mov ebp, eax */ r_ebp = r_eax;
L_00499bee:; BB(0x00499bee);
    /* 00499bee: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00499bf3: mov edx, dword ptr [ebp + 0x902ecc] */ r_edx = R32((u32)(r_ebp+0x902eccu));
    /* 00499bf9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00499bfb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00499bfd: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 00499c00: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00499c02: lea edi, [ebx + esi + 0x5b4] */ r_edi = (u32)(r_ebx+r_esi+0x5b4u);
    /* 00499c09: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00499c0a: call 0x490228 */ r_esp -= 4; W32(r_esp, 0x499c0fu); f_00490228();
    /* 00499c0f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00499c12: fld dword ptr [esi + ebx + 0x5b8] */ FPUSH(R_F32((u32)(r_esi+r_ebx+0x5b8u)));
    /* 00499c19: fsub dword ptr [ebx + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x3cu));
    /* 00499c1c: fcomp dword ptr [0x902ec8] */ fx_compare(ST(0), R_F32((u32)(0x902ec8u))); FPOP();
    /* 00499c22: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00499c24: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00499c25: ja 0x499e64 */ if ((!fC&&!fZ)) goto L_00499e64;
L_00499c2b:; BB(0x00499c2b);
    /* 00499c2b: mov edx, dword ptr [ebp + 0x902ecc] */ r_edx = R32((u32)(r_ebp+0x902eccu));
    /* 00499c31: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00499c33: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00499c35: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00499c38: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00499c3a: lea eax, [ebx + eax + 0x698] */ r_eax = (u32)(r_ebx+r_eax+0x698u);
    /* 00499c41: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00499c43: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 00499c47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00499c48: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00499c49: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x499c4eu); f_00836208();
    /* 00499c4e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00499c51: fcomp dword ptr [0x902ec4] */ fx_compare(ST(0), R_F32((u32)(0x902ec4u))); FPOP();
    /* 00499c57: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00499c59: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00499c5a: jb 0x499c65 */ if (fC) goto L_00499c65;
L_00499c5c:; BB(0x00499c5c);
    /* 00499c5c: mov edx, 1 */ r_edx = 0x1u;
    /* 00499c61: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
L_00499c65:; BB(0x00499c65);
    /* 00499c65: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 00499c6b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00499c6d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00499c6f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00499c71: jle 0x499d94 */ if ((fZ||fS!=fO)) goto L_00499d94;
L_00499c77:; BB(0x00499c77);
    /* 00499c77: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 00499c7b: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00499c7f: mov dword ptr [esp + 0x3c], edi */ W32((u32)(r_esp+0x3cu), r_edi);
    /* 00499c83: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 00499c87: mov ebp, edx */ r_ebp = r_edx;
L_00499c89:; BB(0x00499c89);
    /* 00499c89: mov edi, dword ptr [ebp*4 + 0xaad720] */ r_edi = R32((u32)(r_ebp*4+0xaad720u));
    /* 00499c90: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00499c91: call 0x48df48 */ r_esp -= 4; W32(r_esp, 0x499c96u); f_0048df48();
    /* 00499c96: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00499c97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00499c99: je 0x499d7d */ if (fZ) goto L_00499d7d;
L_00499c9f:; BB(0x00499c9f);
    /* 00499c9f: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 00499ca3: lea ecx, [esp + 0x50] */ r_ecx = (u32)(r_esp+0x50u);
    /* 00499ca7: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 00499caa: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00499cae: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 00499cb1: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 00499cb5: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 00499cb8: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 00499cbc: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x499cc1u); f_0082f9c4();
    /* 00499cc1: mov dword ptr [esp + 0x54], 0 */ W32((u32)(r_esp+0x54u), 0x0u);
    /* 00499cc9: lea ecx, [esp + 0x50] */ r_ecx = (u32)(r_esp+0x50u);
    /* 00499ccd: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x499cd2u); f_0083173c();
    /* 00499cd2: fcom dword ptr [0x9035e8] */ fx_compare(ST(0), R_F32((u32)(0x9035e8u))); 
    /* 00499cd8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00499cda: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00499cdb: jb 0x499ce4 */ if (fC) goto L_00499ce4;
L_00499cdd:; BB(0x00499cdd);
    /* 00499cdd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00499cdf: jmp 0x499d7d */ goto L_00499d7d;
L_00499ce4:; BB(0x00499ce4);
    /* 00499ce4: fcomp dword ptr [0x9035e4] */ fx_compare(ST(0), R_F32((u32)(0x9035e4u))); FPOP();
    /* 00499cea: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00499cec: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00499ced: ja 0x499cf7 */ if ((!fC&&!fZ)) goto L_00499cf7;
L_00499cef:; BB(0x00499cef);
    /* 00499cef: mov dword ptr [esp + 0x50], 0x3f800000 */ W32((u32)(r_esp+0x50u), 0x3f800000u);
L_00499cf7:; BB(0x00499cf7);
    /* 00499cf7: lea ecx, [esp + 0x50] */ r_ecx = (u32)(r_esp+0x50u);
    /* 00499cfb: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x499d00u); f_0082df08();
    /* 00499d00: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00499d02: fld dword ptr [0x9035e8] */ FPUSH(R_F32((u32)(0x9035e8u)));
    /* 00499d08: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 00499d0c: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00499d10: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00499d12: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00499d14: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00499d16: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00499d18: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00499d1a: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 00499d1e: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 00499d22: mov dword ptr [esp + 0x60], 0x41200000 */ W32((u32)(r_esp+0x60u), 0x41200000u);
    /* 00499d2a: mov eax, dword ptr [esi + ebx + 0x5b4] */ r_eax = R32((u32)(r_esi+r_ebx+0x5b4u));
    /* 00499d31: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00499d35: lea ecx, [esp + 0x68] */ r_ecx = (u32)(r_esp+0x68u);
    /* 00499d39: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 00499d3d: mov eax, dword ptr [esi + ebx + 0x5b8] */ r_eax = R32((u32)(r_esi+r_ebx+0x5b8u));
    /* 00499d44: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00499d48: mov eax, dword ptr [esi + ebx + 0x5bc] */ r_eax = R32((u32)(r_esi+r_ebx+0x5bcu));
    /* 00499d4f: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00499d53: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x499d58u); f_0082ebac();
    /* 00499d58: lea eax, [esp + 0x68] */ r_eax = (u32)(r_esp+0x68u);
    /* 00499d5c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00499d5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00499d5f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00499d61: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x499d66u); f_007b4c58();
    /* 00499d66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00499d68: jne 0x49a34e */ if (!fZ) goto L_0049a34e;
L_00499d6e:; BB(0x00499d6e);
    /* 00499d6e: movzx ecx, word ptr [edi + 0x1c] */ r_ecx = (u32)R16((u32)(r_edi+0x1cu));
    /* 00499d72: mov eax, 1 */ r_eax = 0x1u;
    /* 00499d77: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00499d79: or dword ptr [esp + 0x34], eax */ { u32 ad = (u32)(r_esp+0x34u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00499d7d:; BB(0x00499d7d);
    /* 00499d7d: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00499d81: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00499d84: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00499d86: jl 0x499c89 */ if ((fS!=fO)) goto L_00499c89;
L_00499d8c:; BB(0x00499d8c);
    /* 00499d8c: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00499d90: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
L_00499d94:; BB(0x00499d94);
    /* 00499d94: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00499d98: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00499d9a: je 0x499e64 */ if (fZ) goto L_00499e64;
L_00499da0:; BB(0x00499da0);
    /* 00499da0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00499da2: je 0x499e64 */ if (fZ) goto L_00499e64;
L_00499da8:; BB(0x00499da8);
    /* 00499da8: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00499dac: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 00499db0: mov edi, 1 */ r_edi = 0x1u;
    /* 00499db5: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00499db7:; BB(0x00499db7);
    /* 00499db7: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00499dbb: test eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00499dbd: je 0x499e52 */ if (fZ) goto L_00499e52;
L_00499dc3:; BB(0x00499dc3);
    /* 00499dc3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00499dc4: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x499dc9u); f_0068d5a8();
    /* 00499dc9: mov ebp, eax */ r_ebp = r_eax;
    /* 00499dcb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00499dcc: call 0x48e100 */ r_esp -= 4; W32(r_esp, 0x499dd1u); f_0048e100();
    /* 00499dd1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00499dd4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00499dd6: je 0x499e52 */ if (fZ) goto L_00499e52;
L_00499dd8:; BB(0x00499dd8);
    /* 00499dd8: mov eax, dword ptr [ebx + 0x4cc] */ r_eax = R32((u32)(r_ebx+0x4ccu));
    /* 00499dde: mov edx, dword ptr [ebx + 0x430] */ r_edx = R32((u32)(r_ebx+0x430u));
    /* 00499de4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00499de6: je 0x499e16 */ if (fZ) goto L_00499e16;
L_00499de8:; BB(0x00499de8);
    /* 00499de8: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00499deb: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00499dee: fmul dword ptr [ebx + 0x500] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x500u));
    /* 00499df4: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00499df8: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00499dfd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00499e02: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00499e06: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00499e0a: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00499e0e: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00499e12: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
L_00499e16:; BB(0x00499e16);
    /* 00499e16: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00499e1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00499e1c: call 0x48e9d4 */ r_esp -= 4; W32(r_esp, 0x499e21u); f_0048e9d4();
    /* 00499e21: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00499e24: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00499e28: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00499e2c: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00499e2f: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 00499e33: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00499e35: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 00499e3a: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 00499e3e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00499e3f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00499e40: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00499e42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00499e43: push dword ptr [esp + 0x84] */ { u32 v = R32((u32)(r_esp+0x84u)); r_esp -= 4; W32(r_esp, v); }
    /* 00499e4a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00499e4c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00499e4d: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x499e50u); call_ind(t); }
    /* 00499e50: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00499e52:; BB(0x00499e52);
    /* 00499e52: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00499e55: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00499e57: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00499e5a: jl 0x499db7 */ if ((fS!=fO)) goto L_00499db7;
L_00499e60:; BB(0x00499e60);
    /* 00499e60: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
L_00499e64:; BB(0x00499e64);
    /* 00499e64: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00499e67: cmp ebp, 0x18 */ {  u32 a = r_ebp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00499e6a: jl 0x499bee */ if ((fS!=fO)) goto L_00499bee;
L_00499e70:; BB(0x00499e70);
    /* 00499e70: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 00499e74: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00499e76: call 0x49a774 */ r_esp -= 4; W32(r_esp, 0x499e7bu); f_0049a774();
    /* 00499e7b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00499e7d: call 0x49ab24 */ r_esp -= 4; W32(r_esp, 0x499e82u); f_0049ab24();
    /* 00499e82: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00499e84: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00499e86: lea ecx, [ebx + 0x780] */ r_ecx = (u32)(r_ebx+0x780u);
    /* 00499e8c: call 0x48eb24 */ r_esp -= 4; W32(r_esp, 0x499e91u); f_0048eb24();
    /* 00499e91: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00499e93: mov ecx, dword ptr [ebx + 0x404] */ r_ecx = R32((u32)(r_ebx+0x404u));
    /* 00499e99: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x499e9eu); f_005b8610();
    /* 00499e9e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00499ea0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00499ea1: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x499ea6u); f_0078e934();
    /* 00499ea6: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00499ea9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00499eab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00499eac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00499ead: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00499eaf: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00499eb2: call 0x81a2b0 */ r_esp -= 4; W32(r_esp, 0x499eb7u); f_0081a2b0();
    /* 00499eb7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00499eba: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00499ebc: call 0x49ab78 */ r_esp -= 4; W32(r_esp, 0x499ec1u); f_0049ab78();
    /* 00499ec1: lea ecx, [esi + 0xe4] */ r_ecx = (u32)(r_esi+0xe4u);
    /* 00499ec7: lea edx, [ebx + 0x698] */ r_edx = (u32)(r_ebx+0x698u);
    /* 00499ecd: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00499ecf: jae 0x499f47 */ if (!fC) goto L_00499f47;
L_00499ed1:; BB(0x00499ed1);
    /* 00499ed1: mov eax, ecx */ r_eax = r_ecx;
    /* 00499ed3: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00499ed5: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00499ed8: jb 0x499f2d */ if (fC) goto L_00499f2d;
L_00499eda:; BB(0x00499eda);
    /* 00499eda: lea eax, [ecx - 0x3c] */ r_eax = (u32)(r_ecx+0xffffffc4u);
L_00499edd:; BB(0x00499edd);
    /* 00499edd: mov ebp, dword ptr [esi] */ r_ebp = R32((u32)(r_esi));
    /* 00499edf: mov dword ptr [edx], ebp */ W32((u32)(r_edx), r_ebp);
    /* 00499ee1: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 00499ee4: mov dword ptr [edx + 4], edi */ W32((u32)(r_edx+0x4u), r_edi);
    /* 00499ee7: mov ebp, dword ptr [esi + 8] */ r_ebp = R32((u32)(r_esi+0x8u));
    /* 00499eea: mov dword ptr [edx + 8], ebp */ W32((u32)(r_edx+0x8u), r_ebp);
    /* 00499eed: mov ebp, dword ptr [esi + 0xc] */ r_ebp = R32((u32)(r_esi+0xcu));
    /* 00499ef0: mov dword ptr [edx + 0xc], ebp */ W32((u32)(r_edx+0xcu), r_ebp);
    /* 00499ef3: mov ebp, dword ptr [esi + 0x10] */ r_ebp = R32((u32)(r_esi+0x10u));
    /* 00499ef6: mov dword ptr [edx + 0x10], ebp */ W32((u32)(r_edx+0x10u), r_ebp);
    /* 00499ef9: mov ebp, dword ptr [esi + 0x14] */ r_ebp = R32((u32)(r_esi+0x14u));
    /* 00499efc: mov dword ptr [edx + 0x14], ebp */ W32((u32)(r_edx+0x14u), r_ebp);
    /* 00499eff: mov ebp, dword ptr [esi + 0x18] */ r_ebp = R32((u32)(r_esi+0x18u));
    /* 00499f02: mov dword ptr [edx + 0x18], ebp */ W32((u32)(r_edx+0x18u), r_ebp);
    /* 00499f05: mov ebp, dword ptr [esi + 0x1c] */ r_ebp = R32((u32)(r_esi+0x1cu));
    /* 00499f08: mov dword ptr [edx + 0x1c], ebp */ W32((u32)(r_edx+0x1cu), r_ebp);
    /* 00499f0b: mov ebp, dword ptr [esi + 0x20] */ r_ebp = R32((u32)(r_esi+0x20u));
    /* 00499f0e: mov dword ptr [edx + 0x20], ebp */ W32((u32)(r_edx+0x20u), r_ebp);
    /* 00499f11: mov ebp, dword ptr [esi + 0x24] */ r_ebp = R32((u32)(r_esi+0x24u));
    /* 00499f14: mov dword ptr [edx + 0x24], ebp */ W32((u32)(r_edx+0x24u), r_ebp);
    /* 00499f17: mov ebp, dword ptr [esi + 0x28] */ r_ebp = R32((u32)(r_esi+0x28u));
    /* 00499f1a: mov dword ptr [edx + 0x28], ebp */ W32((u32)(r_edx+0x28u), r_ebp);
    /* 00499f1d: mov ebp, dword ptr [esi + 0x2c] */ r_ebp = R32((u32)(r_esi+0x2cu));
    /* 00499f20: mov dword ptr [edx + 0x2c], ebp */ W32((u32)(r_edx+0x2cu), r_ebp);
    /* 00499f23: add edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00499f26: add esi, 0x30 */ {  u32 a = r_esi; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00499f29: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00499f2b: jbe 0x499edd */ if ((fC||fZ)) goto L_00499edd;
L_00499f2d:; BB(0x00499f2d);
    /* 00499f2d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00499f2f: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00499f31: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 00499f34: mov dword ptr [edx + 4], edi */ W32((u32)(r_edx+0x4u), r_edi);
    /* 00499f37: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00499f3a: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00499f3d: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00499f40: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00499f43: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00499f45: jb 0x499f2d */ if (fC) goto L_00499f2d;
L_00499f47:; BB(0x00499f47);
    /* 00499f47: mov eax, dword ptr [ebx + 0x430] */ r_eax = R32((u32)(r_ebx+0x430u));
    /* 00499f4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00499f4f: je 0x499f68 */ if (fZ) goto L_00499f68;
L_00499f51:; BB(0x00499f51);
    /* 00499f51: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00499f53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00499f54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00499f55: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00499f59: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00499f5a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00499f5b: push 0x59c */ { u32 v = 0x59cu; r_esp -= 4; W32(r_esp, v); }
    /* 00499f60: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x499f65u); f_008144b0();
    /* 00499f65: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00499f68:; BB(0x00499f68);
    /* 00499f68: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00499f6a: call 0x49acc4 */ r_esp -= 4; W32(r_esp, 0x499f6fu); f_0049acc4();
    /* 00499f6f: movzx eax, word ptr [ebx + 0x574] */ r_eax = (u32)R16((u32)(r_ebx+0x574u));
    /* 00499f76: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00499f7b: je 0x499fbd */ if (fZ) goto L_00499fbd;
L_00499f7d:; BB(0x00499f7d);
    /* 00499f7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00499f7e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x499f83u); f_0068d5a8();
    /* 00499f83: mov esi, eax */ r_esi = r_eax;
    /* 00499f85: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00499f88: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00499f8a: je 0x49a31c */ if (fZ) goto L_0049a31c;
L_00499f90:; BB(0x00499f90);
    /* 00499f90: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00499f91: call 0x48e100 */ r_esp -= 4; W32(r_esp, 0x499f96u); f_0048e100();
    /* 00499f96: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00499f97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00499f99: je 0x49a29d */ if (fZ) goto L_0049a29d;
L_00499f9f:; BB(0x00499f9f);
    /* 00499f9f: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 00499fa5: cmp eax, 0x1a */ {  u32 a = r_eax; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00499fa8: jne 0x499fbd */ if (!fZ) goto L_00499fbd;
L_00499faa:; BB(0x00499faa);
    /* 00499faa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00499fac: call 0x49a37c */ r_esp -= 4; W32(r_esp, 0x499fb1u); f_0049a37c();
    /* 00499fb1: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00499fb6: mov word ptr [ebx + 0x47c], ax */ W16((u32)(r_ebx+0x47cu), (u16)r_eax);
L_00499fbd:; BB(0x00499fbd);
    /* 00499fbd: lea eax, [ebx + 0x62c] */ r_eax = (u32)(r_ebx+0x62cu);
    /* 00499fc3: mov dword ptr [esp + 0x88], eax */ W32((u32)(r_esp+0x88u), r_eax);
    /* 00499fca: lea edx, [ebx + 0x5f0] */ r_edx = (u32)(r_ebx+0x5f0u);
    /* 00499fd0: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00499fd2: mov dword ptr [esp + 0x8c], edx */ W32((u32)(r_esp+0x8cu), r_edx);
L_00499fd9:; BB(0x00499fd9);
    /* 00499fd9: mov eax, dword ptr [ebx + esi*4 + 0x56c] */ r_eax = R32((u32)(r_ebx+r_esi*4+0x56cu));
    /* 00499fe0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00499fe3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00499fe5: je 0x49a010 */ if (fZ) goto L_0049a010;
L_00499fe7:; BB(0x00499fe7);
    /* 00499fe7: mov edx, dword ptr [esp + esi*4 + 0x84] */ r_edx = R32((u32)(r_esp+r_esi*4+0x84u));
    /* 00499fee: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00499ff1: fcomp dword ptr [0x9a766c] */ fx_compare(ST(0), R_F32((u32)(0x9a766cu))); FPOP();
    /* 00499ff7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00499ff9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00499ffa: jbe 0x49a0aa */ if ((fC||fZ)) goto L_0049a0aa;
L_0049a000:; BB(0x0049a000);
    /* 0049a000: mov dword ptr [ebx + esi*4 + 0x568], 0 */ W32((u32)(r_ebx+r_esi*4+0x568u), 0x0u);
    /* 0049a00b: jmp 0x49a0aa */ goto L_0049a0aa;
L_0049a010:; BB(0x0049a010);
    /* 0049a010: mov edx, dword ptr [esp + esi*4 + 0x84] */ r_edx = R32((u32)(r_esp+r_esi*4+0x84u));
    /* 0049a017: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0049a01a: fcomp dword ptr [0x9a7670] */ fx_compare(ST(0), R_F32((u32)(0x9a7670u))); FPOP();
    /* 0049a020: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049a022: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049a023: jae 0x49a0aa */ if (!fC) goto L_0049a0aa;
L_0049a029:; BB(0x0049a029);
    /* 0049a029: mov dword ptr [ebx + esi*4 + 0x568], 1 */ W32((u32)(r_ebx+r_esi*4+0x568u), 0x1u);
    /* 0049a034: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049a036: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049a037: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049a038: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049a039: push 0x590 */ { u32 v = 0x590u; r_esp -= 4; W32(r_esp, v); }
    /* 0049a03e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49a043u); f_00814298();
    /* 0049a043: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0049a045: push 0x220 */ { u32 v = 0x220u; r_esp -= 4; W32(r_esp, v); }
    /* 0049a04a: push dword ptr [esp + esi*4 + 0x9c] */ { u32 v = R32((u32)(r_esp+r_esi*4+0x9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0049a051: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x49a056u); f_0050b7a4();
    /* 0049a056: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049a059: mov eax, dword ptr [ebx + 0x430] */ r_eax = R32((u32)(r_ebx+0x430u));
    /* 0049a05f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049a061: jne 0x49a079 */ if (!fZ) goto L_0049a079;
L_0049a063:; BB(0x0049a063);
    /* 0049a063: push 0x222 */ { u32 v = 0x222u; r_esp -= 4; W32(r_esp, v); }
    /* 0049a068: push dword ptr [esp + esi*4 + 0x88] */ { u32 v = R32((u32)(r_esp+r_esi*4+0x88u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049a06f: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x49a074u); f_0050b510();
    /* 0049a074: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049a077: jmp 0x49a08f */ goto L_0049a08f;
L_0049a079:; BB(0x0049a079);
    /* 0049a079: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049a07b: push 0x229 */ { u32 v = 0x229u; r_esp -= 4; W32(r_esp, v); }
    /* 0049a080: push dword ptr [esp + esi*4 + 0x8c] */ { u32 v = R32((u32)(r_esp+r_esi*4+0x8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0049a087: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x49a08cu); f_0050b7a4();
    /* 0049a08c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0049a08f:; BB(0x0049a08f);
    /* 0049a08f: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0049a091: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049a096: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0049a09b: push dword ptr [esp + esi*4 + 0x90] */ { u32 v = R32((u32)(r_esp+r_esi*4+0x90u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049a0a2: call 0x48e41c */ r_esp -= 4; W32(r_esp, 0x49a0a7u); f_0048e41c();
    /* 0049a0a7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0049a0aa:; BB(0x0049a0aa);
    /* 0049a0aa: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049a0ad: jl 0x499fd9 */ if ((fS!=fO)) goto L_00499fd9;
L_0049a0b3:; BB(0x0049a0b3);
    /* 0049a0b3: movzx eax, byte ptr [0xa473d8] */ r_eax = (u32)R8((u32)(0xa473d8u));
    /* 0049a0ba: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0049a0bc: jne 0x49a104 */ if (!fZ) goto L_0049a104;
L_0049a0be:; BB(0x0049a0be);
    /* 0049a0be: mov dword ptr [0x9a7628], 0x41300000 */ W32((u32)(0x9a7628u), 0x41300000u);
    /* 0049a0c8: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0049a0cd: mov byte ptr [0xa473d8], al */ W8((u32)(0xa473d8u), (u8)r_eax);
    /* 0049a0d2: mov dword ptr [0x9a7634], 0x41100000 */ W32((u32)(0x9a7634u), 0x41100000u);
    /* 0049a0dc: mov dword ptr [0x9a7640], 0x40a00000 */ W32((u32)(0x9a7640u), 0x40a00000u);
    /* 0049a0e6: mov dword ptr [0x9a764c], 0x41300000 */ W32((u32)(0x9a764cu), 0x41300000u);
    /* 0049a0f0: mov dword ptr [0x9a7658], 0x41100000 */ W32((u32)(0x9a7658u), 0x41100000u);
    /* 0049a0fa: mov dword ptr [0x9a7664], 0x40a00000 */ W32((u32)(0x9a7664u), 0x40a00000u);
L_0049a104:; BB(0x0049a104);
    /* 0049a104: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0049a106:; BB(0x0049a106);
    /* 0049a106: mov edx, dword ptr [esi + 0x9a7620] */ r_edx = R32((u32)(r_esi+0x9a7620u));
    /* 0049a10c: fld dword ptr [esi + 0x9a7628] */ FPUSH(R_F32((u32)(r_esi+0x9a7628u)));
    /* 0049a112: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049a114: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049a116: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 0049a119: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0049a11b: fld dword ptr [edi + ebx + 0x5b8] */ FPUSH(R_F32((u32)(r_edi+r_ebx+0x5b8u)));
    /* 0049a122: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0049a124: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049a126: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0049a129: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049a12a: jb 0x49a13b */ if (fC) goto L_0049a13b;
L_0049a12c:; BB(0x0049a12c);
    /* 0049a12c: fld dword ptr [0x9035cc] */ FPUSH(R_F32((u32)(0x9035ccu)));
    /* 0049a132: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0049a134: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0049a136: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049a138: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049a139: jbe 0x49a164 */ if ((fC||fZ)) goto L_0049a164;
L_0049a13b:; BB(0x0049a13b);
    /* 0049a13b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0049a13d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049a13f: mov edi, dword ptr [esi + 0x9a7618] */ r_edi = R32((u32)(r_esi+0x9a7618u));
    /* 0049a145: mov eax, dword ptr [ebx + edi*4 + 0x794] */ r_eax = R32((u32)(r_ebx+r_edi*4+0x794u));
    /* 0049a14c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049a14e: je 0x49a17d */ if (fZ) goto L_0049a17d;
L_0049a150:; BB(0x0049a150);
    /* 0049a150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049a151: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x49a156u); f_005cdcc0();
    /* 0049a156: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049a157: mov dword ptr [ebx + edi*4 + 0x794], 0 */ W32((u32)(r_ebx+r_edi*4+0x794u), 0x0u);
    /* 0049a162: jmp 0x49a17d */ goto L_0049a17d;
L_0049a164:; BB(0x0049a164);
    /* 0049a164: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049a166: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049a168: mov edi, dword ptr [esi + 0x9a7618] */ r_edi = R32((u32)(r_esi+0x9a7618u));
    /* 0049a16e: mov eax, dword ptr [ebx + edi*4 + 0x794] */ r_eax = R32((u32)(r_ebx+r_edi*4+0x794u));
    /* 0049a175: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049a177: je 0x49a24b */ if (fZ) goto L_0049a24b;
L_0049a17d:; BB(0x0049a17d);
    /* 0049a17d: cmp esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049a180: jl 0x49a106 */ if ((fS!=fO)) goto L_0049a106;
L_0049a182:; BB(0x0049a182);
    /* 0049a182: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049a184: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0049a186: mov ebp, eax */ r_ebp = r_eax;
L_0049a188:; BB(0x0049a188);
    /* 0049a188: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0049a18b: mov edi, dword ptr [ebx + 0x3c] */ r_edi = R32((u32)(r_ebx+0x3cu));
    /* 0049a18e: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 0049a191: mov ecx, dword ptr [ebx + ebp*4 + 0x794] */ r_ecx = R32((u32)(r_ebx+r_ebp*4+0x794u));
    /* 0049a198: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049a19a: je 0x49a219 */ if (fZ) goto L_0049a219;
L_0049a19c:; BB(0x0049a19c);
    /* 0049a19c: mov dword ptr [esp + 0xa4], edx */ W32((u32)(r_esp+0xa4u), r_edx);
    /* 0049a1a3: mov dword ptr [esp + 0xa0], edi */ W32((u32)(r_esp+0xa0u), r_edi);
    /* 0049a1aa: mov dword ptr [esp + 0x9c], eax */ W32((u32)(r_esp+0x9cu), r_eax);
    /* 0049a1b1: mov edx, dword ptr [esi + 0x903104] */ r_edx = R32((u32)(r_esi+0x903104u));
    /* 0049a1b7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0049a1b9: jl 0x49a20c */ if ((fS!=fO)) goto L_0049a20c;
L_0049a1bb:; BB(0x0049a1bb);
    /* 0049a1bb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049a1bd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049a1bf: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 0049a1c2: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0049a1c4: mov edx, dword ptr [edi + ebx + 0x5b4] */ r_edx = R32((u32)(r_edi+r_ebx+0x5b4u));
    /* 0049a1cb: mov dword ptr [esp + 0x9c], edx */ W32((u32)(r_esp+0x9cu), r_edx);
    /* 0049a1d2: mov edx, dword ptr [esi + 0x903104] */ r_edx = R32((u32)(r_esi+0x903104u));
    /* 0049a1d8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049a1da: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049a1dc: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 0049a1df: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0049a1e1: mov edx, dword ptr [edi + ebx + 0x5b8] */ r_edx = R32((u32)(r_edi+r_ebx+0x5b8u));
    /* 0049a1e8: mov dword ptr [esp + 0xa0], edx */ W32((u32)(r_esp+0xa0u), r_edx);
    /* 0049a1ef: mov edx, dword ptr [esi + 0x903104] */ r_edx = R32((u32)(r_esi+0x903104u));
    /* 0049a1f5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049a1f7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049a1f9: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 0049a1fc: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0049a1fe: mov edx, dword ptr [edi + ebx + 0x5bc] */ r_edx = R32((u32)(r_edi+r_ebx+0x5bcu));
    /* 0049a205: mov dword ptr [esp + 0xa4], edx */ W32((u32)(r_esp+0xa4u), r_edx);
L_0049a20c:; BB(0x0049a20c);
    /* 0049a20c: lea edx, [esp + 0x9c] */ r_edx = (u32)(r_esp+0x9cu);
    /* 0049a213: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049a214: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x49a219u); f_00508db8();
L_0049a219:; BB(0x0049a219);
    /* 0049a219: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0049a21c: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0049a21f: cmp ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049a222: jl 0x49a188 */ if ((fS!=fO)) goto L_0049a188;
L_0049a228:; BB(0x0049a228);
    /* 0049a228: movsx eax, word ptr [ebx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 0049a22f: mov dword ptr [ebx + 0x510], eax */ W32((u32)(r_ebx+0x510u), r_eax);
    /* 0049a235: add esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049a23b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049a23c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049a23d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049a23e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049a23f: ret  */ FN_RET(0x00499908); r_esp += 4; return;
L_0049a240:; BB(0x0049a240);
    /* 0049a240: fld dword ptr [0x9035f4] */ FPUSH(R_F32((u32)(0x9035f4u)));
    /* 0049a246: jmp 0x499a99 */ goto L_00499a99;
L_0049a24b:; BB(0x0049a24b);
    /* 0049a24b: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0049a24e: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0049a251: mov dword ptr [esp + 0x90], eax */ W32((u32)(r_esp+0x90u), r_eax);
    /* 0049a258: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0049a25b: mov dword ptr [esp + 0x94], edx */ W32((u32)(r_esp+0x94u), r_edx);
    /* 0049a262: mov dword ptr [esp + 0x98], eax */ W32((u32)(r_esp+0x98u), r_eax);
    /* 0049a269: lea eax, [esp + 0x90] */ r_eax = (u32)(r_esp+0x90u);
    /* 0049a270: push dword ptr [edi*8 + 0x903100] */ { u32 v = R32((u32)(r_edi*8+0x903100u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049a277: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049a278: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x49a27du); f_00509590();
    /* 0049a27d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049a280: mov dword ptr [ebx + edi*4 + 0x794], eax */ W32((u32)(r_ebx+r_edi*4+0x794u), r_eax);
    /* 0049a287: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049a289: je 0x49a17d */ if (fZ) goto L_0049a17d;
L_0049a28f:; BB(0x0049a28f);
    /* 0049a28f: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0049a291: mov ecx, eax */ r_ecx = r_eax;
    /* 0049a293: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x49a298u); f_00508efc();
    /* 0049a298: jmp 0x49a17d */ goto L_0049a17d;
L_0049a29d:; BB(0x0049a29d);
    /* 0049a29d: fld dword ptr [0x9035e8] */ FPUSH(R_F32((u32)(0x9035e8u)));
    /* 0049a2a3: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 0049a2a6: mov dword ptr [esp + 0x7c], edx */ W32((u32)(r_esp+0x7cu), r_edx);
    /* 0049a2aa: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0049a2ad: mov dword ptr [esp + 0x80], edx */ W32((u32)(r_esp+0x80u), r_edx);
    /* 0049a2b4: fadd dword ptr [esp + 0x80] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x80u));
    /* 0049a2bb: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 0049a2be: fstp dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0)); FPOP();
    /* 0049a2c5: mov dword ptr [esp + 0x84], edx */ W32((u32)(r_esp+0x84u), r_edx);
    /* 0049a2cc: lea edx, [esp + 0x7c] */ r_edx = (u32)(r_esp+0x7cu);
    /* 0049a2d0: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0049a2d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049a2d3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049a2d4: call 0x486e24 */ r_esp -= 4; W32(r_esp, 0x49a2d9u); f_00486e24();
    /* 0049a2d9: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0049a2db: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049a2dd: movzx edx, word ptr [ebx + 0x574] */ r_edx = (u32)R16((u32)(r_ebx+0x574u));
    /* 0049a2e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049a2e5: call 0x48701c */ r_esp -= 4; W32(r_esp, 0x49a2eau); f_0048701c();
    /* 0049a2ea: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049a2ed: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0049a2ef: call 0x49a438 */ r_esp -= 4; W32(r_esp, 0x49a2f4u); f_0049a438();
    /* 0049a2f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049a2f6: jne 0x49a30e */ if (!fZ) goto L_0049a30e;
L_0049a2f8:; BB(0x0049a2f8);
    /* 0049a2f8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049a2fa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049a2fc: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0049a300: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049a301: push 0x5a3 */ { u32 v = 0x5a3u; r_esp -= 4; W32(r_esp, v); }
    /* 0049a306: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49a30bu); f_00814298();
    /* 0049a30b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0049a30e:; BB(0x0049a30e);
    /* 0049a30e: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0049a310: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0049a313: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049a314: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x49a319u); f_0050b510();
    /* 0049a319: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0049a31c:; BB(0x0049a31c);
    /* 0049a31c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0049a31e: call 0x49a37c */ r_esp -= 4; W32(r_esp, 0x49a323u); f_0049a37c();
    /* 0049a323: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0049a328: mov word ptr [ebx + 0x47c], ax */ W16((u32)(r_ebx+0x47cu), (u16)r_eax);
    /* 0049a32f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0049a331: call 0x49a464 */ r_esp -= 4; W32(r_esp, 0x49a336u); f_0049a464();
    /* 0049a336: mov dword ptr [ebx + 0x440], eax */ W32((u32)(r_ebx+0x440u), r_eax);
    /* 0049a33c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0049a33e: call 0x49a4e0 */ r_esp -= 4; W32(r_esp, 0x49a343u); f_0049a4e0();
    /* 0049a343: mov dword ptr [ebx + 0x448], eax */ W32((u32)(r_ebx+0x448u), r_eax);
    /* 0049a349: jmp 0x499f9f */ goto L_00499f9f;
L_0049a34e:; BB(0x0049a34e);
    /* 0049a34e: lea eax, [esp + 0x68] */ r_eax = (u32)(r_esp+0x68u);
    /* 0049a352: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049a353: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049a354: call 0x48dbf4 */ r_esp -= 4; W32(r_esp, 0x49a359u); f_0048dbf4();
    /* 0049a359: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049a35c: jmp 0x499d6e */ goto L_00499d6e;
L_0049a361:; BB(0x0049a361);
    /* 0049a361: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 0049a364: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0049a368: lea esi, [ebx + 0x5b4] */ r_esi = (u32)(r_ebx+0x5b4u);
    /* 0049a36e: jmp 0x499bb2 */ goto L_00499bb2;
L_0049a373:; BB(0x0049a373);
    /* 0049a373: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049a375: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0049a377: jmp 0x499acf */ goto L_00499acf;
}

