#include "protos.h"

void f_00508dac(void) /* ?SetTemporalCompression@CMediaType@@QAEXH@Z */
{
    FN_ENTER(0x00508dac);
    /* 00508dac: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00508db0: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00508db3: ret 4 */ FN_RET(0x00508dac); r_esp += 8; return;
}

