#include "protos.h"

void f_008aeb41(void) /* sub_8AEB41 */
{
    FN_ENTER(0x008aeb41);
    /* 008aeb41: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008aeb42: mov ebp, esp */ r_ebp = r_esp;
    /* 008aeb44: sub esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008aeb4a: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008aeb4d: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 008aeb50: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 008aeb53: movq mm0, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008aeb56: movq mm1, qword ptr [edx + 8] */ { MM64 r; r.q = R64((u32)(r_edx+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008aeb5a: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008aeb5d: movq mm3, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008aeb60: movq qword ptr [esp], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp), r.q); }
    /* 008aeb64: movq qword ptr [esp + 8], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_esp+0x8u), r.q); }
    /* 008aeb69: movq mm4, qword ptr [ecx] */ { MM64 r; r.q = R64((u32)(r_ecx)); fpr[4] = (long double)(i64)(r.q); }
    /* 008aeb6c: movq mm5, qword ptr [ecx + 8] */ { MM64 r; r.q = R64((u32)(r_ecx+0x8u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008aeb70: movq qword ptr [esp + 0x10], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_esp+0x10u), r.q); }
    /* 008aeb75: pfadd mm0, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008aeb79: movq qword ptr [esp + 0x18], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_esp+0x18u), r.q); }
    /* 008aeb7e: pfadd mm1, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[5]); fpr[1] = (long double)(i64)(r); }
    /* 008aeb82: pfsub mm2, mm4 */ { u64 r = rt_pf_sub((u64)(i64)fpr[2], (u64)(i64)fpr[4]); fpr[2] = (long double)(i64)(r); }
    /* 008aeb86: pfmul mm0, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008aeb8a: pfsub mm3, mm5 */ { u64 r = rt_pf_sub((u64)(i64)fpr[3], (u64)(i64)fpr[5]); fpr[3] = (long double)(i64)(r); }
    /* 008aeb8e: pfmul mm1, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008aeb92: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 008aeb95: pfmul mm2, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[2]); fpr[2] = (long double)(i64)(r); }
    /* 008aeb99: pfmul mm3, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[3]); fpr[3] = (long double)(i64)(r); }
    /* 008aeb9d: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008aeba1: pfadd mm2, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
    /* 008aeba5: movq mm6, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[6] = (long double)(i64)(r.q); }
    /* 008aeba8: movq mm7, qword ptr [edx + 8] */ { MM64 r; r.q = R64((u32)(r_edx+0x8u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008aebac: movq qword ptr [esp + 0x20], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_esp+0x20u), r.q); }
    /* 008aebb1: movq qword ptr [esp + 0x28], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_esp+0x28u), r.q); }
    /* 008aebb6: movq mm1, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[1] = (long double)(i64)(r.q); }
    /* 008aebb9: movq mm3, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[3] = (long double)(i64)(r.q); }
    /* 008aebbc: pfadd mm4, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[6]); fpr[4] = (long double)(i64)(r); }
    /* 008aebc0: pfadd mm5, mm7 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[7]); fpr[5] = (long double)(i64)(r); }
    /* 008aebc4: pfsub mm1, mm6 */ { u64 r = rt_pf_sub((u64)(i64)fpr[1], (u64)(i64)fpr[6]); fpr[1] = (long double)(i64)(r); }
    /* 008aebc8: pfsub mm3, mm7 */ { u64 r = rt_pf_sub((u64)(i64)fpr[3], (u64)(i64)fpr[7]); fpr[3] = (long double)(i64)(r); }
    /* 008aebcc: pfmul mm4, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008aebd0: pfmul mm5, mm5 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[5]); fpr[5] = (long double)(i64)(r); }
    /* 008aebd4: pfmul mm1, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008aebd8: pfmul mm3, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[3]); fpr[3] = (long double)(i64)(r); }
    /* 008aebdc: pfadd mm4, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008aebe0: pfadd mm1, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008aebe4: pfacc mm0, mm4 */ { u64 r = rt_pf_acc((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008aebe8: pfacc mm2, mm1 */ { u64 r = rt_pf_acc((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008aebec: pfcmpgt mm2, mm0 */ { u64 r = rt_pf_cmpgt((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008aebf0: packsswb mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.b[0] = (u8)rt_sat8((i32)(i16)a.w[0]); r.b[4] = (u8)rt_sat8((i32)(i16)b.w[0]); r.b[1] = (u8)rt_sat8((i32)(i16)a.w[1]); r.b[5] = (u8)rt_sat8((i32)(i16)b.w[1]); r.b[2] = (u8)rt_sat8((i32)(i16)a.w[2]); r.b[6] = (u8)rt_sat8((i32)(i16)b.w[2]); r.b[3] = (u8)rt_sat8((i32)(i16)a.w[3]); r.b[7] = (u8)rt_sat8((i32)(i16)b.w[3]); fpr[2] = (long double)(i64)(r.q); }
    /* 008aebf3: movd eax, mm2 */ r_eax = (u32)(u64)(i64)fpr[2];
    /* 008aebf6: test eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aebfb: movq mm0, qword ptr [0x99dc48] */ { MM64 r; r.q = R64((u32)(0x99dc48u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008aec02: je 0x8aec1d */ if (fZ) goto L_008aec1d;
L_008aec04:; BB(0x008aec04);
    /* 008aec04: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 008aec07: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008aec0a: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008aec0d: pxor mm1, qword ptr [edx] */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(r_edx)); MM64 r; r.q = a.q ^ b.q; fpr[1] = (long double)(i64)(r.q); }
    /* 008aec10: pxor mm2, qword ptr [edx + 8] */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(r_edx+0x8u)); MM64 r; r.q = a.q ^ b.q; fpr[2] = (long double)(i64)(r.q); }
    /* 008aec14: movq qword ptr [esp], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_esp), r.q); }
    /* 008aec18: movq qword ptr [esp + 8], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_esp+0x8u), r.q); }
L_008aec1d:; BB(0x008aec1d);
    /* 008aec1d: test eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aec22: je 0x8aec3e */ if (fZ) goto L_008aec3e;
L_008aec24:; BB(0x008aec24);
    /* 008aec24: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 008aec27: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008aec2a: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008aec2d: pxor mm1, qword ptr [ecx] */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(r_ecx)); MM64 r; r.q = a.q ^ b.q; fpr[1] = (long double)(i64)(r.q); }
    /* 008aec30: pxor mm2, qword ptr [ecx + 8] */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(r_ecx+0x8u)); MM64 r; r.q = a.q ^ b.q; fpr[2] = (long double)(i64)(r.q); }
    /* 008aec34: movq qword ptr [esp + 0x20], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_esp+0x20u), r.q); }
    /* 008aec39: movq qword ptr [esp + 0x28], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_esp+0x28u), r.q); }
L_008aec3e:; BB(0x008aec3e);
    /* 008aec3e: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 008aec41: movq mm6, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008aec46: movq mm7, qword ptr [esp + 0x28] */ { MM64 r; r.q = R64((u32)(r_esp+0x28u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008aec4b: movq mm1, qword ptr [ecx] */ { MM64 r; r.q = R64((u32)(r_ecx)); fpr[1] = (long double)(i64)(r.q); }
    /* 008aec4e: movq mm4, qword ptr [ecx + 8] */ { MM64 r; r.q = R64((u32)(r_ecx+0x8u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008aec52: movq mm3, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[3] = (long double)(i64)(r.q); }
    /* 008aec55: movq mm5, mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; fpr[5] = (long double)(i64)(r.q); }
    /* 008aec58: pfadd mm6, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008aec5c: movq qword ptr [esp + 0x30], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_esp+0x30u), r.q); }
    /* 008aec61: pfadd mm7, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[4]); fpr[7] = (long double)(i64)(r); }
    /* 008aec65: movq qword ptr [esp + 0x38], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_esp+0x38u), r.q); }
    /* 008aec6a: pfsub mm3, mm1 */ { u64 r = rt_pf_sub((u64)(i64)fpr[3], (u64)(i64)fpr[1]); fpr[3] = (long double)(i64)(r); }
    /* 008aec6e: pfsub mm5, mm4 */ { u64 r = rt_pf_sub((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008aec72: pfmul mm6, mm6 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[6]); fpr[6] = (long double)(i64)(r); }
    /* 008aec76: pfmul mm7, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[7]); fpr[7] = (long double)(i64)(r); }
    /* 008aec7a: pfmul mm3, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[3]); fpr[3] = (long double)(i64)(r); }
    /* 008aec7e: pfmul mm5, mm5 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[5]); fpr[5] = (long double)(i64)(r); }
    /* 008aec82: pfadd mm6, mm7 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[7]); fpr[6] = (long double)(i64)(r); }
    /* 008aec86: pfadd mm3, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[5]); fpr[3] = (long double)(i64)(r); }
    /* 008aec8a: pfacc mm6, mm6 */ { u64 r = rt_pf_acc((u64)(i64)fpr[6], (u64)(i64)fpr[6]); fpr[6] = (long double)(i64)(r); }
    /* 008aec8e: pfacc mm3, mm3 */ { u64 r = rt_pf_acc((u64)(i64)fpr[3], (u64)(i64)fpr[3]); fpr[3] = (long double)(i64)(r); }
    /* 008aec92: pfcmpgt mm3, mm6 */ { u64 r = rt_pf_cmpgt((u64)(i64)fpr[3], (u64)(i64)fpr[6]); fpr[3] = (long double)(i64)(r); }
    /* 008aec96: movd eax, mm3 */ r_eax = (u32)(u64)(i64)fpr[3];
    /* 008aec99: test eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aec9e: je 0x8aecb7 */ if (fZ) goto L_008aecb7;
L_008aeca0:; BB(0x008aeca0);
    /* 008aeca0: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 008aeca3: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008aeca6: pxor mm0, qword ptr [edx] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(r_edx)); MM64 r; r.q = a.q ^ b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008aeca9: pxor mm2, qword ptr [edx + 8] */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(r_edx+0x8u)); MM64 r; r.q = a.q ^ b.q; fpr[2] = (long double)(i64)(r.q); }
    /* 008aecad: movq qword ptr [esp + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+0x30u), r.q); }
    /* 008aecb2: movq qword ptr [esp + 0x38], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_esp+0x38u), r.q); }
L_008aecb7:; BB(0x008aecb7);
    /* 008aecb7: movq mm0, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008aecbc: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008aecbf: movq mm2, qword ptr [esp + 0x18] */ { MM64 r; r.q = R64((u32)(r_esp+0x18u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008aecc4: movq mm3, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[3] = (long double)(i64)(r.q); }
    /* 008aecc7: pfmul mm0, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008aeccb: pfmul mm2, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[2]); fpr[2] = (long double)(i64)(r); }
    /* 008aeccf: pfadd mm0, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008aecd3: pfacc mm0, mm0 */ { u64 r = rt_pf_acc((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008aecd7: movq mm5, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008aecda: pfrcp mm4, mm0 */ { u64 r = rt_pf_rcp((u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008aecde: pfcmpgt mm5, qword ptr [0x99dc90] */ { u64 r = rt_pf_cmpgt((u64)(i64)fpr[5], R64((u32)(0x99dc90u))); fpr[5] = (long double)(i64)(r); }
    /* 008aece6: pxor mm1, qword ptr [0x99dcf0] */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x99dcf0u)); MM64 r; r.q = a.q ^ b.q; fpr[1] = (long double)(i64)(r.q); }
    /* 008aeced: pxor mm3, qword ptr [0x99dc38] */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0x99dc38u)); MM64 r; r.q = a.q ^ b.q; fpr[3] = (long double)(i64)(r.q); }
    /* 008aecf4: pfrcpit1 mm0, mm4 */ { u64 r = rt_pf_rcpit1((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008aecf8: pand mm1, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.q = a.q & b.q; fpr[1] = (long double)(i64)(r.q); }
    /* 008aecfb: pand mm3, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.q = a.q & b.q; fpr[3] = (long double)(i64)(r.q); }
    /* 008aecfe: pfrcpit2 mm0, mm4 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008aed02: pfmul mm1, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[0]); fpr[1] = (long double)(i64)(r); }
    /* 008aed06: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008aed0a: movq qword ptr [esp + 0x40], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_esp+0x40u), r.q); }
    /* 008aed0f: movq qword ptr [esp + 0x48], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_esp+0x48u), r.q); }
    /* 008aed14: movq mm2, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[2] = (long double)(i64)(r.q); }
    /* 008aed18: movq mm3, qword ptr [esp + 8] */ { MM64 r; r.q = R64((u32)(r_esp+0x8u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008aed1d: movq mm4, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[4] = (long double)(i64)(r.q); }
    /* 008aed20: movq mm5, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008aed23: movq mm0, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008aed28: punpckhdq mm4, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008aed2b: punpckhdq mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008aed2e: movq mm1, qword ptr [esp + 0x48] */ { MM64 r; r.q = R64((u32)(r_esp+0x48u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008aed33: punpckldq mm4, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008aed36: punpckldq mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008aed39: movq mm6, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[6] = (long double)(i64)(r.q); }
    /* 008aed3c: movq mm7, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[7] = (long double)(i64)(r.q); }
    /* 008aed3f: pfmul mm2, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008aed43: pxor mm5, qword ptr [0x99dc38] */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0x99dc38u)); MM64 r; r.q = a.q ^ b.q; fpr[5] = (long double)(i64)(r.q); }
    /* 008aed4a: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008aed4e: pxor mm2, qword ptr [0x99dc38] */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x99dc38u)); MM64 r; r.q = a.q ^ b.q; fpr[2] = (long double)(i64)(r.q); }
    /* 008aed55: pfmul mm5, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[0]); fpr[5] = (long double)(i64)(r); }
    /* 008aed59: pfmul mm4, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[1]); fpr[4] = (long double)(i64)(r); }
    /* 008aed5d: pfadd mm2, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
    /* 008aed61: movq mm3, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[3] = (long double)(i64)(r.q); }
    /* 008aed65: pfsub mm4, mm5 */ { u64 r = rt_pf_sub((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008aed69: movq mm5, qword ptr [esp + 8] */ { MM64 r; r.q = R64((u32)(r_esp+0x8u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008aed6e: pfmul mm7, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[1]); fpr[7] = (long double)(i64)(r); }
    /* 008aed72: pxor mm6, qword ptr [0x99dc38] */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(0x99dc38u)); MM64 r; r.q = a.q ^ b.q; fpr[6] = (long double)(i64)(r.q); }
    /* 008aed79: pfacc mm4, mm2 */ { u64 r = rt_pf_acc((u64)(i64)fpr[4], (u64)(i64)fpr[2]); fpr[4] = (long double)(i64)(r); }
    /* 008aed7d: pfmul mm6, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[0]); fpr[6] = (long double)(i64)(r); }
    /* 008aed81: pxor mm5, qword ptr [0x99dc38] */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0x99dc38u)); MM64 r; r.q = a.q ^ b.q; fpr[5] = (long double)(i64)(r.q); }
    /* 008aed88: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008aed8c: movq qword ptr [esp + 0x80], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_esp+0x80u), r.q); }
    /* 008aed94: pfmul mm5, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[1]); fpr[5] = (long double)(i64)(r); }
    /* 008aed98: pfadd mm6, mm7 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[7]); fpr[6] = (long double)(i64)(r); }
    /* 008aed9c: pfsub mm5, mm3 */ { u64 r = rt_pf_sub((u64)(i64)fpr[5], (u64)(i64)fpr[3]); fpr[5] = (long double)(i64)(r); }
    /* 008aeda0: pfacc mm6, mm5 */ { u64 r = rt_pf_acc((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008aeda4: movq qword ptr [esp + 0x88], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_esp+0x88u), r.q); }
    /* 008aedac: movq mm2, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008aedb1: movq mm3, qword ptr [esp + 0x28] */ { MM64 r; r.q = R64((u32)(r_esp+0x28u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008aedb6: movq mm4, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[4] = (long double)(i64)(r.q); }
    /* 008aedb9: movq mm5, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008aedbc: movq mm0, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008aedc1: punpckhdq mm4, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008aedc4: punpckhdq mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008aedc7: movq mm1, qword ptr [esp + 0x48] */ { MM64 r; r.q = R64((u32)(r_esp+0x48u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008aedcc: punpckldq mm4, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008aedcf: punpckldq mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008aedd2: movq mm6, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[6] = (long double)(i64)(r.q); }
    /* 008aedd5: movq mm7, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[7] = (long double)(i64)(r.q); }
    /* 008aedd8: pfmul mm2, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008aeddc: pxor mm5, qword ptr [0x99dc38] */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0x99dc38u)); MM64 r; r.q = a.q ^ b.q; fpr[5] = (long double)(i64)(r.q); }
    /* 008aede3: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008aede7: pxor mm2, qword ptr [0x99dc38] */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x99dc38u)); MM64 r; r.q = a.q ^ b.q; fpr[2] = (long double)(i64)(r.q); }
    /* 008aedee: pfmul mm5, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[0]); fpr[5] = (long double)(i64)(r); }
    /* 008aedf2: pfmul mm4, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[1]); fpr[4] = (long double)(i64)(r); }
    /* 008aedf6: pfadd mm2, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
    /* 008aedfa: movq mm3, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008aedff: pfsub mm4, mm5 */ { u64 r = rt_pf_sub((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008aee03: movq mm5, qword ptr [esp + 0x28] */ { MM64 r; r.q = R64((u32)(r_esp+0x28u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008aee08: pfmul mm7, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[1]); fpr[7] = (long double)(i64)(r); }
    /* 008aee0c: pxor mm6, qword ptr [0x99dc38] */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(0x99dc38u)); MM64 r; r.q = a.q ^ b.q; fpr[6] = (long double)(i64)(r.q); }
    /* 008aee13: pfacc mm4, mm2 */ { u64 r = rt_pf_acc((u64)(i64)fpr[4], (u64)(i64)fpr[2]); fpr[4] = (long double)(i64)(r); }
    /* 008aee17: pfmul mm6, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[0]); fpr[6] = (long double)(i64)(r); }
    /* 008aee1b: pxor mm5, qword ptr [0x99dc38] */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0x99dc38u)); MM64 r; r.q = a.q ^ b.q; fpr[5] = (long double)(i64)(r.q); }
    /* 008aee22: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008aee26: movq qword ptr [esp + 0x90], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_esp+0x90u), r.q); }
    /* 008aee2e: pfmul mm5, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[1]); fpr[5] = (long double)(i64)(r); }
    /* 008aee32: pfadd mm6, mm7 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[7]); fpr[6] = (long double)(i64)(r); }
    /* 008aee36: pfsub mm5, mm3 */ { u64 r = rt_pf_sub((u64)(i64)fpr[5], (u64)(i64)fpr[3]); fpr[5] = (long double)(i64)(r); }
    /* 008aee3a: pfacc mm6, mm5 */ { u64 r = rt_pf_acc((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008aee3e: movq qword ptr [esp + 0x98], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_esp+0x98u), r.q); }
    /* 008aee46: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008aee49: movq mm1, qword ptr [esp + 0x8c] */ { MM64 r; r.q = R64((u32)(r_esp+0x8cu)); fpr[1] = (long double)(i64)(r.q); }
    /* 008aee51: movq mm2, qword ptr [esp + 0x94] */ { MM64 r; r.q = R64((u32)(r_esp+0x94u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008aee59: movq mm3, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[3] = (long double)(i64)(r.q); }
    /* 008aee5c: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008aee5f: movq mm0, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008aee62: pfcmpge mm3, qword ptr [0x99dca8] */ { u64 r = rt_pf_cmpge((u64)(i64)fpr[3], R64((u32)(0x99dca8u))); fpr[3] = (long double)(i64)(r); }
    /* 008aee6a: movd ecx, mm3 */ r_ecx = (u32)(u64)(i64)fpr[3];
    /* 008aee6d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aee6f: jne 0x8aeedf */ if (!fZ) goto L_008aeedf;
L_008aee71:; BB(0x008aee71);
    /* 008aee71: call 0x8bb080 */ r_esp -= 4; W32(r_esp, 0x8aee76u); f_008bb080();
    /* 008aee76: movd dword ptr [esp], mm0 */ W32((u32)(r_esp), (u32)(u64)(i64)fpr[0]);
    /* 008aee7a: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 008aee7e: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 008aee82: call 0x8bb780 */ r_esp -= 4; W32(r_esp, 0x8aee87u); f_008bb780();
    /* 008aee87: movq mm3, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008aee8a: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 008aee8e: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 008aee92: pand mm3, qword ptr [0x99dc60] */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0x99dc60u)); MM64 r; r.q = a.q & b.q; fpr[3] = (long double)(i64)(r.q); }
    /* 008aee99: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008aee9d: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 008aeea1: pfcmpge mm3, qword ptr [0x99dc68] */ { u64 r = rt_pf_cmpge((u64)(i64)fpr[3], R64((u32)(0x99dc68u))); fpr[3] = (long double)(i64)(r); }
    /* 008aeea9: movd ecx, mm3 */ r_ecx = (u32)(u64)(i64)fpr[3];
    /* 008aeeac: movq mm1, qword ptr [esp + 0x8c] */ { MM64 r; r.q = R64((u32)(r_esp+0x8cu)); fpr[1] = (long double)(i64)(r.q); }
    /* 008aeeb4: movq mm2, qword ptr [esp + 0x94] */ { MM64 r; r.q = R64((u32)(r_esp+0x94u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008aeebc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aeebe: je 0x8aeedf */ if (fZ) goto L_008aeedf;
L_008aeec0:; BB(0x008aeec0);
    /* 008aeec0: movd mm3, dword ptr [esp] */ { u64 v = R32((u32)(r_esp)); fpr[3] = (long double)(i64)v; }
    /* 008aeec4: pfrcp mm4, mm0 */ { u64 r = rt_pf_rcp((u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008aeec8: punpckldq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008aeecb: pfrcpit1 mm0, mm4 */ { u64 r = rt_pf_rcpit1((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008aeecf: pfrcpit2 mm0, mm4 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008aeed3: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008aeed7: pfmul mm1, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008aeedb: pfmul mm2, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
L_008aeedf:; BB(0x008aeedf);
    /* 008aeedf: pand mm2, qword ptr [0x99dc70] */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x99dc70u)); MM64 r; r.q = a.q & b.q; fpr[2] = (long double)(i64)(r.q); }
    /* 008aeee6: movq qword ptr [esp + 0x5c], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_esp+0x5cu), r.q); }
    /* 008aeeeb: movq qword ptr [esp + 0x64], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_esp+0x64u), r.q); }
    /* 008aeef0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008aeef3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008aeef6: movq mm1, qword ptr [esp + 0x9c] */ { MM64 r; r.q = R64((u32)(r_esp+0x9cu)); fpr[1] = (long double)(i64)(r.q); }
    /* 008aeefe: movq mm2, qword ptr [esp + 0xa4] */ { MM64 r; r.q = R64((u32)(r_esp+0xa4u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008aef06: movq mm3, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[3] = (long double)(i64)(r.q); }
    /* 008aef09: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008aef0c: movq mm0, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008aef0f: pfcmpge mm3, qword ptr [0x99dca8] */ { u64 r = rt_pf_cmpge((u64)(i64)fpr[3], R64((u32)(0x99dca8u))); fpr[3] = (long double)(i64)(r); }
    /* 008aef17: movd ecx, mm3 */ r_ecx = (u32)(u64)(i64)fpr[3];
    /* 008aef1a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aef1c: jne 0x8aef8c */ if (!fZ) goto L_008aef8c;
L_008aef1e:; BB(0x008aef1e);
    /* 008aef1e: call 0x8bb080 */ r_esp -= 4; W32(r_esp, 0x8aef23u); f_008bb080();
    /* 008aef23: movd dword ptr [esp], mm0 */ W32((u32)(r_esp), (u32)(u64)(i64)fpr[0]);
    /* 008aef27: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 008aef2b: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 008aef2f: call 0x8bb780 */ r_esp -= 4; W32(r_esp, 0x8aef34u); f_008bb780();
    /* 008aef34: movq mm3, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008aef37: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 008aef3b: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 008aef3f: pand mm3, qword ptr [0x99dc60] */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0x99dc60u)); MM64 r; r.q = a.q & b.q; fpr[3] = (long double)(i64)(r.q); }
    /* 008aef46: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008aef4a: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 008aef4e: pfcmpge mm3, qword ptr [0x99dc68] */ { u64 r = rt_pf_cmpge((u64)(i64)fpr[3], R64((u32)(0x99dc68u))); fpr[3] = (long double)(i64)(r); }
    /* 008aef56: movd ecx, mm3 */ r_ecx = (u32)(u64)(i64)fpr[3];
    /* 008aef59: movq mm1, qword ptr [esp + 0x9c] */ { MM64 r; r.q = R64((u32)(r_esp+0x9cu)); fpr[1] = (long double)(i64)(r.q); }
    /* 008aef61: movq mm2, qword ptr [esp + 0xa4] */ { MM64 r; r.q = R64((u32)(r_esp+0xa4u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008aef69: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aef6b: je 0x8aef8c */ if (fZ) goto L_008aef8c;
L_008aef6d:; BB(0x008aef6d);
    /* 008aef6d: movd mm3, dword ptr [esp] */ { u64 v = R32((u32)(r_esp)); fpr[3] = (long double)(i64)v; }
    /* 008aef71: pfrcp mm4, mm0 */ { u64 r = rt_pf_rcp((u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008aef75: punpckldq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008aef78: pfrcpit1 mm0, mm4 */ { u64 r = rt_pf_rcpit1((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008aef7c: pfrcpit2 mm0, mm4 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008aef80: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008aef84: pfmul mm1, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008aef88: pfmul mm2, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
L_008aef8c:; BB(0x008aef8c);
    /* 008aef8c: pand mm2, qword ptr [0x99dc70] */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x99dc70u)); MM64 r; r.q = a.q & b.q; fpr[2] = (long double)(i64)(r.q); }
    /* 008aef93: movq qword ptr [esp + 0x6c], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_esp+0x6cu), r.q); }
    /* 008aef98: movq qword ptr [esp + 0x74], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_esp+0x74u), r.q); }
    /* 008aef9d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008aefa0: movq mm0, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008aefa5: movq mm1, qword ptr [esp + 0x58] */ { MM64 r; r.q = R64((u32)(r_esp+0x58u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008aefaa: pfadd mm0, qword ptr [esp + 0x60] */ { u64 r = rt_pf_add((u64)(i64)fpr[0], R64((u32)(r_esp+0x60u))); fpr[0] = (long double)(i64)(r); }
    /* 008aefb0: pfadd mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_add((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008aefb6: pfmul mm0, qword ptr [0x99e940] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(0x99e940u))); fpr[0] = (long double)(i64)(r); }
    /* 008aefbe: pfmul mm1, qword ptr [0x99e940] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(0x99e940u))); fpr[1] = (long double)(i64)(r); }
    /* 008aefc6: movq qword ptr [esp + 0x80], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+0x80u), r.q); }
    /* 008aefce: movq qword ptr [esp + 0x88], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_esp+0x88u), r.q); }
    /* 008aefd6: movq mm7, qword ptr [0x99dc68] */ { MM64 r; r.q = R64((u32)(0x99dc68u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008aefdd: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008aefe0: movq mm0, qword ptr [esp + 0x8c] */ { MM64 r; r.q = R64((u32)(r_esp+0x8cu)); fpr[0] = (long double)(i64)(r.q); }
    /* 008aefe8: movd mm1, dword ptr [esp + 0x94] */ { u64 v = R32((u32)(r_esp+0x94u)); fpr[1] = (long double)(i64)v; }
    /* 008aeff0: pfmul mm0, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008aeff4: pfmul mm1, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008aeff8: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008aeffc: pfacc mm0, mm0 */ { u64 r = rt_pf_acc((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008af000: pfrsqrt mm1, mm0 */ { u64 r = rt_pf_rsqrt((u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008af004: movq mm2, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008af007: pfmul mm1, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008af00b: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 008af00f: pfrsqit1 mm1, mm0 */ { u64 r = rt_pf_rsqit1((u64)(i64)fpr[1], (u64)(i64)fpr[0]); fpr[1] = (long double)(i64)(r); }
    /* 008af013: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 008af017: pfrcpit2 mm1, mm2 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[1], (u64)(i64)fpr[2]); fpr[1] = (long double)(i64)(r); }
    /* 008af01b: movd dword ptr [esp], mm1 */ W32((u32)(r_esp), (u32)(u64)(i64)fpr[1]);
    /* 008af01f: pfmul mm0, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008af023: call 0x8bb660 */ r_esp -= 4; W32(r_esp, 0x8af028u); f_008bb660();
    /* 008af028: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008af02b: pand mm0, qword ptr [0x99dc58] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x99dc58u)); MM64 r; r.q = a.q & b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008af032: pfcmpge mm0, qword ptr [0x99dc68] */ { u64 r = rt_pf_cmpge((u64)(i64)fpr[0], R64((u32)(0x99dc68u))); fpr[0] = (long double)(i64)(r); }
    /* 008af03a: punpckhdq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008af03d: movd ecx, mm0 */ r_ecx = (u32)(u64)(i64)fpr[0];
    /* 008af040: movq mm2, qword ptr [esp + 0x8c] */ { MM64 r; r.q = R64((u32)(r_esp+0x8cu)); fpr[2] = (long double)(i64)(r.q); }
    /* 008af048: movq mm0, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008af04b: punpckhdq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008af04e: test ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008af054: pfmul mm1, qword ptr [esp] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp))); fpr[1] = (long double)(i64)(r); }
    /* 008af059: movd mm3, dword ptr [esp + 0x94] */ { u64 v = R32((u32)(r_esp+0x94u)); fpr[3] = (long double)(i64)v; }
    /* 008af061: je 0x8af06e */ if (fZ) goto L_008af06e;
L_008af063:; BB(0x008af063);
    /* 008af063: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008af066: pfmul mm3, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[1]); fpr[3] = (long double)(i64)(r); }
    /* 008af06a: pfmul mm2, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
L_008af06e:; BB(0x008af06e);
    /* 008af06e: punpckldq mm3, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008af071: movq qword ptr [esp + 0x7c], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_esp+0x7cu), r.q); }
    /* 008af076: movq qword ptr [esp + 0x84], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_esp+0x84u), r.q); }
    /* 008af07e: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 008af082: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 008af086: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008af089: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008af08c: movq mm2, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008af091: movq mm3, qword ptr [esp + 0x78] */ { MM64 r; r.q = R64((u32)(r_esp+0x78u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008af096: movq mm4, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[4] = (long double)(i64)(r.q); }
    /* 008af099: movq mm5, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008af09c: movq mm0, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008af0a1: punpckhdq mm4, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008af0a4: punpckhdq mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008af0a7: movq mm1, qword ptr [esp + 0x18] */ { MM64 r; r.q = R64((u32)(r_esp+0x18u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008af0ac: punpckldq mm4, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008af0af: punpckldq mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008af0b2: movq mm6, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[6] = (long double)(i64)(r.q); }
    /* 008af0b5: movq mm7, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[7] = (long double)(i64)(r.q); }
    /* 008af0b8: pfmul mm2, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008af0bc: pxor mm5, qword ptr [0x99dc38] */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0x99dc38u)); MM64 r; r.q = a.q ^ b.q; fpr[5] = (long double)(i64)(r.q); }
    /* 008af0c3: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008af0c7: pxor mm2, qword ptr [0x99dc38] */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x99dc38u)); MM64 r; r.q = a.q ^ b.q; fpr[2] = (long double)(i64)(r.q); }
    /* 008af0ce: pfmul mm5, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[0]); fpr[5] = (long double)(i64)(r); }
    /* 008af0d2: pfmul mm4, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[1]); fpr[4] = (long double)(i64)(r); }
    /* 008af0d6: pfadd mm2, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
    /* 008af0da: movq mm3, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008af0df: pfsub mm4, mm5 */ { u64 r = rt_pf_sub((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008af0e3: movq mm5, qword ptr [esp + 0x78] */ { MM64 r; r.q = R64((u32)(r_esp+0x78u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008af0e8: pfmul mm7, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[1]); fpr[7] = (long double)(i64)(r); }
    /* 008af0ec: pxor mm6, qword ptr [0x99dc38] */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(0x99dc38u)); MM64 r; r.q = a.q ^ b.q; fpr[6] = (long double)(i64)(r.q); }
    /* 008af0f3: pfacc mm4, mm2 */ { u64 r = rt_pf_acc((u64)(i64)fpr[4], (u64)(i64)fpr[2]); fpr[4] = (long double)(i64)(r); }
    /* 008af0f7: pfmul mm6, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[0]); fpr[6] = (long double)(i64)(r); }
    /* 008af0fb: pxor mm5, qword ptr [0x99dc38] */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0x99dc38u)); MM64 r; r.q = a.q ^ b.q; fpr[5] = (long double)(i64)(r.q); }
    /* 008af102: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008af106: movq qword ptr [eax], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax), r.q); }
    /* 008af109: pfmul mm5, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[1]); fpr[5] = (long double)(i64)(r); }
    /* 008af10d: pfadd mm6, mm7 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[7]); fpr[6] = (long double)(i64)(r); }
    /* 008af111: pfsub mm5, mm3 */ { u64 r = rt_pf_sub((u64)(i64)fpr[5], (u64)(i64)fpr[3]); fpr[5] = (long double)(i64)(r); }
    /* 008af115: pfacc mm6, mm5 */ { u64 r = rt_pf_acc((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008af119: movq qword ptr [eax + 8], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008af11d: movq mm0, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008af122: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008af125: movq mm2, qword ptr [esp + 0x28] */ { MM64 r; r.q = R64((u32)(r_esp+0x28u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008af12a: movq mm3, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[3] = (long double)(i64)(r.q); }
    /* 008af12d: pfmul mm0, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008af131: pfmul mm2, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[2]); fpr[2] = (long double)(i64)(r); }
    /* 008af135: pfadd mm0, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008af139: pfacc mm0, mm0 */ { u64 r = rt_pf_acc((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008af13d: movq mm5, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008af140: pfrcp mm4, mm0 */ { u64 r = rt_pf_rcp((u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008af144: pfcmpgt mm5, qword ptr [0x99dc90] */ { u64 r = rt_pf_cmpgt((u64)(i64)fpr[5], R64((u32)(0x99dc90u))); fpr[5] = (long double)(i64)(r); }
    /* 008af14c: pxor mm1, qword ptr [0x99dcf0] */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x99dcf0u)); MM64 r; r.q = a.q ^ b.q; fpr[1] = (long double)(i64)(r.q); }
    /* 008af153: pxor mm3, qword ptr [0x99dc38] */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0x99dc38u)); MM64 r; r.q = a.q ^ b.q; fpr[3] = (long double)(i64)(r.q); }
    /* 008af15a: pfrcpit1 mm0, mm4 */ { u64 r = rt_pf_rcpit1((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008af15e: pand mm1, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.q = a.q & b.q; fpr[1] = (long double)(i64)(r.q); }
    /* 008af161: pand mm3, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.q = a.q & b.q; fpr[3] = (long double)(i64)(r.q); }
    /* 008af164: pfrcpit2 mm0, mm4 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008af168: pfmul mm1, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[0]); fpr[1] = (long double)(i64)(r); }
    /* 008af16c: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008af170: movq qword ptr [esp + 0x40], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_esp+0x40u), r.q); }
    /* 008af175: movq qword ptr [esp + 0x48], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_esp+0x48u), r.q); }
    /* 008af17a: movq mm2, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008af17f: movq mm3, qword ptr [esp + 0x18] */ { MM64 r; r.q = R64((u32)(r_esp+0x18u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008af184: movq mm4, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[4] = (long double)(i64)(r.q); }
    /* 008af187: movq mm5, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008af18a: movq mm0, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008af18f: punpckhdq mm4, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008af192: punpckhdq mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008af195: movq mm1, qword ptr [esp + 0x48] */ { MM64 r; r.q = R64((u32)(r_esp+0x48u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008af19a: punpckldq mm4, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008af19d: punpckldq mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008af1a0: movq mm6, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[6] = (long double)(i64)(r.q); }
    /* 008af1a3: movq mm7, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[7] = (long double)(i64)(r.q); }
    /* 008af1a6: pfmul mm2, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008af1aa: pxor mm5, qword ptr [0x99dc38] */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0x99dc38u)); MM64 r; r.q = a.q ^ b.q; fpr[5] = (long double)(i64)(r.q); }
    /* 008af1b1: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008af1b5: pxor mm2, qword ptr [0x99dc38] */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x99dc38u)); MM64 r; r.q = a.q ^ b.q; fpr[2] = (long double)(i64)(r.q); }
    /* 008af1bc: pfmul mm5, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[0]); fpr[5] = (long double)(i64)(r); }
    /* 008af1c0: pfmul mm4, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[1]); fpr[4] = (long double)(i64)(r); }
    /* 008af1c4: pfadd mm2, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
    /* 008af1c8: movq mm3, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008af1cd: pfsub mm4, mm5 */ { u64 r = rt_pf_sub((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008af1d1: movq mm5, qword ptr [esp + 0x18] */ { MM64 r; r.q = R64((u32)(r_esp+0x18u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008af1d6: pfmul mm7, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[1]); fpr[7] = (long double)(i64)(r); }
    /* 008af1da: pxor mm6, qword ptr [0x99dc38] */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(0x99dc38u)); MM64 r; r.q = a.q ^ b.q; fpr[6] = (long double)(i64)(r.q); }
    /* 008af1e1: pfacc mm4, mm2 */ { u64 r = rt_pf_acc((u64)(i64)fpr[4], (u64)(i64)fpr[2]); fpr[4] = (long double)(i64)(r); }
    /* 008af1e5: pfmul mm6, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[0]); fpr[6] = (long double)(i64)(r); }
    /* 008af1e9: pxor mm5, qword ptr [0x99dc38] */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0x99dc38u)); MM64 r; r.q = a.q ^ b.q; fpr[5] = (long double)(i64)(r.q); }
    /* 008af1f0: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008af1f4: movq qword ptr [esp + 0x80], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_esp+0x80u), r.q); }
    /* 008af1fc: pfmul mm5, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[1]); fpr[5] = (long double)(i64)(r); }
    /* 008af200: pfadd mm6, mm7 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[7]); fpr[6] = (long double)(i64)(r); }
    /* 008af204: pfsub mm5, mm3 */ { u64 r = rt_pf_sub((u64)(i64)fpr[5], (u64)(i64)fpr[3]); fpr[5] = (long double)(i64)(r); }
    /* 008af208: pfacc mm6, mm5 */ { u64 r = rt_pf_acc((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008af20c: movq qword ptr [esp + 0x88], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_esp+0x88u), r.q); }
    /* 008af214: movq mm2, qword ptr [esp + 0x30] */ { MM64 r; r.q = R64((u32)(r_esp+0x30u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008af219: movq mm3, qword ptr [esp + 0x38] */ { MM64 r; r.q = R64((u32)(r_esp+0x38u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008af21e: movq mm4, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[4] = (long double)(i64)(r.q); }
    /* 008af221: movq mm5, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008af224: movq mm0, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008af229: punpckhdq mm4, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008af22c: punpckhdq mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008af22f: movq mm1, qword ptr [esp + 0x48] */ { MM64 r; r.q = R64((u32)(r_esp+0x48u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008af234: punpckldq mm4, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008af237: punpckldq mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008af23a: movq mm6, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[6] = (long double)(i64)(r.q); }
    /* 008af23d: movq mm7, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[7] = (long double)(i64)(r.q); }
    /* 008af240: pfmul mm2, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008af244: pxor mm5, qword ptr [0x99dc38] */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0x99dc38u)); MM64 r; r.q = a.q ^ b.q; fpr[5] = (long double)(i64)(r.q); }
    /* 008af24b: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008af24f: pxor mm2, qword ptr [0x99dc38] */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x99dc38u)); MM64 r; r.q = a.q ^ b.q; fpr[2] = (long double)(i64)(r.q); }
    /* 008af256: pfmul mm5, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[0]); fpr[5] = (long double)(i64)(r); }
    /* 008af25a: pfmul mm4, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[1]); fpr[4] = (long double)(i64)(r); }
    /* 008af25e: pfadd mm2, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
    /* 008af262: movq mm3, qword ptr [esp + 0x30] */ { MM64 r; r.q = R64((u32)(r_esp+0x30u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008af267: pfsub mm4, mm5 */ { u64 r = rt_pf_sub((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008af26b: movq mm5, qword ptr [esp + 0x38] */ { MM64 r; r.q = R64((u32)(r_esp+0x38u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008af270: pfmul mm7, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[1]); fpr[7] = (long double)(i64)(r); }
    /* 008af274: pxor mm6, qword ptr [0x99dc38] */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(0x99dc38u)); MM64 r; r.q = a.q ^ b.q; fpr[6] = (long double)(i64)(r.q); }
    /* 008af27b: pfacc mm4, mm2 */ { u64 r = rt_pf_acc((u64)(i64)fpr[4], (u64)(i64)fpr[2]); fpr[4] = (long double)(i64)(r); }
    /* 008af27f: pfmul mm6, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[0]); fpr[6] = (long double)(i64)(r); }
    /* 008af283: pxor mm5, qword ptr [0x99dc38] */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0x99dc38u)); MM64 r; r.q = a.q ^ b.q; fpr[5] = (long double)(i64)(r.q); }
    /* 008af28a: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008af28e: movq qword ptr [esp + 0x90], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_esp+0x90u), r.q); }
    /* 008af296: pfmul mm5, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[1]); fpr[5] = (long double)(i64)(r); }
    /* 008af29a: pfadd mm6, mm7 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[7]); fpr[6] = (long double)(i64)(r); }
    /* 008af29e: pfsub mm5, mm3 */ { u64 r = rt_pf_sub((u64)(i64)fpr[5], (u64)(i64)fpr[3]); fpr[5] = (long double)(i64)(r); }
    /* 008af2a2: pfacc mm6, mm5 */ { u64 r = rt_pf_acc((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008af2a6: movq qword ptr [esp + 0x98], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_esp+0x98u), r.q); }
    /* 008af2ae: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008af2b1: movq mm1, qword ptr [esp + 0x8c] */ { MM64 r; r.q = R64((u32)(r_esp+0x8cu)); fpr[1] = (long double)(i64)(r.q); }
    /* 008af2b9: movq mm2, qword ptr [esp + 0x94] */ { MM64 r; r.q = R64((u32)(r_esp+0x94u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008af2c1: movq mm3, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[3] = (long double)(i64)(r.q); }
    /* 008af2c4: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008af2c7: movq mm0, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008af2ca: pfcmpge mm3, qword ptr [0x99dca8] */ { u64 r = rt_pf_cmpge((u64)(i64)fpr[3], R64((u32)(0x99dca8u))); fpr[3] = (long double)(i64)(r); }
    /* 008af2d2: movd ecx, mm3 */ r_ecx = (u32)(u64)(i64)fpr[3];
    /* 008af2d5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008af2d7: jne 0x8af347 */ if (!fZ) goto L_008af347;
L_008af2d9:; BB(0x008af2d9);
    /* 008af2d9: call 0x8bb080 */ r_esp -= 4; W32(r_esp, 0x8af2deu); f_008bb080();
    /* 008af2de: movd dword ptr [esp], mm0 */ W32((u32)(r_esp), (u32)(u64)(i64)fpr[0]);
    /* 008af2e2: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 008af2e6: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 008af2ea: call 0x8bb780 */ r_esp -= 4; W32(r_esp, 0x8af2efu); f_008bb780();
    /* 008af2ef: movq mm3, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008af2f2: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 008af2f6: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 008af2fa: pand mm3, qword ptr [0x99dc60] */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0x99dc60u)); MM64 r; r.q = a.q & b.q; fpr[3] = (long double)(i64)(r.q); }
    /* 008af301: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008af305: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 008af309: pfcmpge mm3, qword ptr [0x99dc68] */ { u64 r = rt_pf_cmpge((u64)(i64)fpr[3], R64((u32)(0x99dc68u))); fpr[3] = (long double)(i64)(r); }
    /* 008af311: movd ecx, mm3 */ r_ecx = (u32)(u64)(i64)fpr[3];
    /* 008af314: movq mm1, qword ptr [esp + 0x8c] */ { MM64 r; r.q = R64((u32)(r_esp+0x8cu)); fpr[1] = (long double)(i64)(r.q); }
    /* 008af31c: movq mm2, qword ptr [esp + 0x94] */ { MM64 r; r.q = R64((u32)(r_esp+0x94u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008af324: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008af326: je 0x8af347 */ if (fZ) goto L_008af347;
L_008af328:; BB(0x008af328);
    /* 008af328: movd mm3, dword ptr [esp] */ { u64 v = R32((u32)(r_esp)); fpr[3] = (long double)(i64)v; }
    /* 008af32c: pfrcp mm4, mm0 */ { u64 r = rt_pf_rcp((u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008af330: punpckldq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008af333: pfrcpit1 mm0, mm4 */ { u64 r = rt_pf_rcpit1((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008af337: pfrcpit2 mm0, mm4 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008af33b: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008af33f: pfmul mm1, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008af343: pfmul mm2, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
L_008af347:; BB(0x008af347);
    /* 008af347: pand mm2, qword ptr [0x99dc70] */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x99dc70u)); MM64 r; r.q = a.q & b.q; fpr[2] = (long double)(i64)(r.q); }
    /* 008af34e: movq qword ptr [esp + 0x5c], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_esp+0x5cu), r.q); }
    /* 008af353: movq qword ptr [esp + 0x64], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_esp+0x64u), r.q); }
    /* 008af358: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008af35b: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008af35e: movq mm1, qword ptr [esp + 0x9c] */ { MM64 r; r.q = R64((u32)(r_esp+0x9cu)); fpr[1] = (long double)(i64)(r.q); }
    /* 008af366: movq mm2, qword ptr [esp + 0xa4] */ { MM64 r; r.q = R64((u32)(r_esp+0xa4u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008af36e: movq mm3, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[3] = (long double)(i64)(r.q); }
    /* 008af371: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008af374: movq mm0, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008af377: pfcmpge mm3, qword ptr [0x99dca8] */ { u64 r = rt_pf_cmpge((u64)(i64)fpr[3], R64((u32)(0x99dca8u))); fpr[3] = (long double)(i64)(r); }
    /* 008af37f: movd ecx, mm3 */ r_ecx = (u32)(u64)(i64)fpr[3];
    /* 008af382: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008af384: jne 0x8af3f4 */ if (!fZ) goto L_008af3f4;
L_008af386:; BB(0x008af386);
    /* 008af386: call 0x8bb080 */ r_esp -= 4; W32(r_esp, 0x8af38bu); f_008bb080();
    /* 008af38b: movd dword ptr [esp], mm0 */ W32((u32)(r_esp), (u32)(u64)(i64)fpr[0]);
    /* 008af38f: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 008af393: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 008af397: call 0x8bb780 */ r_esp -= 4; W32(r_esp, 0x8af39cu); f_008bb780();
    /* 008af39c: movq mm3, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008af39f: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 008af3a3: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 008af3a7: pand mm3, qword ptr [0x99dc60] */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0x99dc60u)); MM64 r; r.q = a.q & b.q; fpr[3] = (long double)(i64)(r.q); }
    /* 008af3ae: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008af3b2: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 008af3b6: pfcmpge mm3, qword ptr [0x99dc68] */ { u64 r = rt_pf_cmpge((u64)(i64)fpr[3], R64((u32)(0x99dc68u))); fpr[3] = (long double)(i64)(r); }
    /* 008af3be: movd ecx, mm3 */ r_ecx = (u32)(u64)(i64)fpr[3];
    /* 008af3c1: movq mm1, qword ptr [esp + 0x9c] */ { MM64 r; r.q = R64((u32)(r_esp+0x9cu)); fpr[1] = (long double)(i64)(r.q); }
    /* 008af3c9: movq mm2, qword ptr [esp + 0xa4] */ { MM64 r; r.q = R64((u32)(r_esp+0xa4u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008af3d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008af3d3: je 0x8af3f4 */ if (fZ) goto L_008af3f4;
L_008af3d5:; BB(0x008af3d5);
    /* 008af3d5: movd mm3, dword ptr [esp] */ { u64 v = R32((u32)(r_esp)); fpr[3] = (long double)(i64)v; }
    /* 008af3d9: pfrcp mm4, mm0 */ { u64 r = rt_pf_rcp((u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008af3dd: punpckldq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008af3e0: pfrcpit1 mm0, mm4 */ { u64 r = rt_pf_rcpit1((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008af3e4: pfrcpit2 mm0, mm4 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008af3e8: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008af3ec: pfmul mm1, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008af3f0: pfmul mm2, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
L_008af3f4:; BB(0x008af3f4);
    /* 008af3f4: pand mm2, qword ptr [0x99dc70] */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x99dc70u)); MM64 r; r.q = a.q & b.q; fpr[2] = (long double)(i64)(r.q); }
    /* 008af3fb: movq qword ptr [esp + 0x6c], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_esp+0x6cu), r.q); }
    /* 008af400: movq qword ptr [esp + 0x74], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_esp+0x74u), r.q); }
    /* 008af405: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008af408: movq mm0, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008af40d: movq mm1, qword ptr [esp + 0x58] */ { MM64 r; r.q = R64((u32)(r_esp+0x58u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008af412: pfadd mm0, qword ptr [esp + 0x60] */ { u64 r = rt_pf_add((u64)(i64)fpr[0], R64((u32)(r_esp+0x60u))); fpr[0] = (long double)(i64)(r); }
    /* 008af418: pfadd mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_add((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008af41e: pfmul mm0, qword ptr [0x99e940] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(0x99e940u))); fpr[0] = (long double)(i64)(r); }
    /* 008af426: pfmul mm1, qword ptr [0x99e940] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(0x99e940u))); fpr[1] = (long double)(i64)(r); }
    /* 008af42e: movq qword ptr [esp + 0x80], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+0x80u), r.q); }
    /* 008af436: movq qword ptr [esp + 0x88], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_esp+0x88u), r.q); }
    /* 008af43e: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008af441: movq mm0, qword ptr [esp + 0x8c] */ { MM64 r; r.q = R64((u32)(r_esp+0x8cu)); fpr[0] = (long double)(i64)(r.q); }
    /* 008af449: movd mm1, dword ptr [esp + 0x94] */ { u64 v = R32((u32)(r_esp+0x94u)); fpr[1] = (long double)(i64)v; }
    /* 008af451: pfmul mm0, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008af455: pfmul mm1, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008af459: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008af45d: pfacc mm0, mm0 */ { u64 r = rt_pf_acc((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008af461: pfrsqrt mm1, mm0 */ { u64 r = rt_pf_rsqrt((u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008af465: movq mm2, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008af468: pfmul mm1, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008af46c: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 008af470: pfrsqit1 mm1, mm0 */ { u64 r = rt_pf_rsqit1((u64)(i64)fpr[1], (u64)(i64)fpr[0]); fpr[1] = (long double)(i64)(r); }
    /* 008af474: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 008af478: pfrcpit2 mm1, mm2 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[1], (u64)(i64)fpr[2]); fpr[1] = (long double)(i64)(r); }
    /* 008af47c: movd dword ptr [esp], mm1 */ W32((u32)(r_esp), (u32)(u64)(i64)fpr[1]);
    /* 008af480: pfmul mm0, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008af484: call 0x8bb660 */ r_esp -= 4; W32(r_esp, 0x8af489u); f_008bb660();
    /* 008af489: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008af48c: pand mm0, qword ptr [0x99dc58] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x99dc58u)); MM64 r; r.q = a.q & b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008af493: pfcmpge mm0, qword ptr [0x99dc68] */ { u64 r = rt_pf_cmpge((u64)(i64)fpr[0], R64((u32)(0x99dc68u))); fpr[0] = (long double)(i64)(r); }
    /* 008af49b: punpckhdq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008af49e: movd ecx, mm0 */ r_ecx = (u32)(u64)(i64)fpr[0];
    /* 008af4a1: movq mm2, qword ptr [esp + 0x8c] */ { MM64 r; r.q = R64((u32)(r_esp+0x8cu)); fpr[2] = (long double)(i64)(r.q); }
    /* 008af4a9: movq mm0, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008af4ac: punpckhdq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008af4af: test ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008af4b5: pfmul mm1, qword ptr [esp] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp))); fpr[1] = (long double)(i64)(r); }
    /* 008af4ba: movd mm3, dword ptr [esp + 0x94] */ { u64 v = R32((u32)(r_esp+0x94u)); fpr[3] = (long double)(i64)v; }
    /* 008af4c2: je 0x8af4cf */ if (fZ) goto L_008af4cf;
L_008af4c4:; BB(0x008af4c4);
    /* 008af4c4: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008af4c7: pfmul mm3, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[1]); fpr[3] = (long double)(i64)(r); }
    /* 008af4cb: pfmul mm2, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
L_008af4cf:; BB(0x008af4cf);
    /* 008af4cf: punpckldq mm3, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008af4d2: movq qword ptr [esp + 0x7c], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_esp+0x7cu), r.q); }
    /* 008af4d7: movq qword ptr [esp + 0x84], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_esp+0x84u), r.q); }
    /* 008af4df: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 008af4e3: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 008af4e7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008af4ea: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008af4ed: movq mm2, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008af4f2: movq mm3, qword ptr [esp + 0x78] */ { MM64 r; r.q = R64((u32)(r_esp+0x78u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008af4f7: movq mm4, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[4] = (long double)(i64)(r.q); }
    /* 008af4fa: movq mm5, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008af4fd: movq mm0, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008af502: punpckhdq mm4, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008af505: punpckhdq mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008af508: movq mm1, qword ptr [esp + 0x28] */ { MM64 r; r.q = R64((u32)(r_esp+0x28u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008af50d: punpckldq mm4, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008af510: punpckldq mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008af513: movq mm6, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[6] = (long double)(i64)(r.q); }
    /* 008af516: movq mm7, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[7] = (long double)(i64)(r.q); }
    /* 008af519: pfmul mm2, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008af51d: pxor mm5, qword ptr [0x99dc38] */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0x99dc38u)); MM64 r; r.q = a.q ^ b.q; fpr[5] = (long double)(i64)(r.q); }
    /* 008af524: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008af528: pxor mm2, qword ptr [0x99dc38] */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x99dc38u)); MM64 r; r.q = a.q ^ b.q; fpr[2] = (long double)(i64)(r.q); }
    /* 008af52f: pfmul mm5, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[0]); fpr[5] = (long double)(i64)(r); }
    /* 008af533: pfmul mm4, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[1]); fpr[4] = (long double)(i64)(r); }
    /* 008af537: pfadd mm2, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
    /* 008af53b: movq mm3, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008af540: pfsub mm4, mm5 */ { u64 r = rt_pf_sub((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008af544: movq mm5, qword ptr [esp + 0x78] */ { MM64 r; r.q = R64((u32)(r_esp+0x78u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008af549: pfmul mm7, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[1]); fpr[7] = (long double)(i64)(r); }
    /* 008af54d: pxor mm6, qword ptr [0x99dc38] */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(0x99dc38u)); MM64 r; r.q = a.q ^ b.q; fpr[6] = (long double)(i64)(r.q); }
    /* 008af554: pfacc mm4, mm2 */ { u64 r = rt_pf_acc((u64)(i64)fpr[4], (u64)(i64)fpr[2]); fpr[4] = (long double)(i64)(r); }
    /* 008af558: pfmul mm6, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[0]); fpr[6] = (long double)(i64)(r); }
    /* 008af55c: pxor mm5, qword ptr [0x99dc38] */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0x99dc38u)); MM64 r; r.q = a.q ^ b.q; fpr[5] = (long double)(i64)(r.q); }
    /* 008af563: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008af567: movq qword ptr [eax], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax), r.q); }
    /* 008af56a: pfmul mm5, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[1]); fpr[5] = (long double)(i64)(r); }
    /* 008af56e: pfadd mm6, mm7 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[7]); fpr[6] = (long double)(i64)(r); }
    /* 008af572: pfsub mm5, mm3 */ { u64 r = rt_pf_sub((u64)(i64)fpr[5], (u64)(i64)fpr[3]); fpr[5] = (long double)(i64)(r); }
    /* 008af576: pfacc mm6, mm5 */ { u64 r = rt_pf_acc((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008af57a: movq qword ptr [eax + 8], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008af57e: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008af581: movq mm0, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008af586: movq mm1, qword ptr [esp + 0x28] */ { MM64 r; r.q = R64((u32)(r_esp+0x28u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008af58b: movq qword ptr [eax], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax), r.q); }
    /* 008af58e: movq qword ptr [eax + 8], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008af592: mov esp, ebp */ r_esp = r_ebp;
    /* 008af594: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008af595: femms  */ ; /* the MMX tag state is not modelled */
    /* 008af597: ret 0x1c */ FN_RET(0x008aeb41); r_esp += 32; return;
}

