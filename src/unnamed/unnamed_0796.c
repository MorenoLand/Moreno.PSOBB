#include "protos.h"

void f_0079614d(void)
{
    FN_ENTER(0x0079614d);
    /* 0079614d: shr byte ptr [ecx - 0x7636cd00], cl */ { u32 ad = (u32)(r_ecx+0x89c93300u); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); W8(ad, r);  } }
    /* 00796153: or eax, 0xa9d244 */ {  u32 a = r_eax; u32 b = 0xa9d244u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00796158: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079615a: mov dword ptr [0xa9d240], ecx */ W32((u32)(0xa9d240u), r_ecx);
    /* 00796160: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796162: mov dword ptr [0xa9d250], ecx */ W32((u32)(0xa9d250u), r_ecx);
    /* 00796168: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079616a: mov dword ptr [0xa9d254], ecx */ W32((u32)(0xa9d254u), r_ecx);
    /* 00796170: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796172: mov dword ptr [0xa9d258], ecx */ W32((u32)(0xa9d258u), r_ecx);
    /* 00796178: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079617a: mov dword ptr [0xa9d25c], ecx */ W32((u32)(0xa9d25cu), r_ecx);
    /* 00796180: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796182: mov dword ptr [0xa9d260], ecx */ W32((u32)(0xa9d260u), r_ecx);
    /* 00796188: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079618a: mov dword ptr [0xa9d264], ecx */ W32((u32)(0xa9d264u), r_ecx);
    /* 00796190: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796192: mov dword ptr [0xa9d268], ecx */ W32((u32)(0xa9d268u), r_ecx);
    /* 00796198: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079619a: mov dword ptr [0xa9d270], ecx */ W32((u32)(0xa9d270u), r_ecx);
    /* 007961a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961a2: mov dword ptr [0xa9d26c], ecx */ W32((u32)(0xa9d26cu), r_ecx);
    /* 007961a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961aa: mov dword ptr [0xa9d27c], ecx */ W32((u32)(0xa9d27cu), r_ecx);
    /* 007961b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961b2: mov dword ptr [0xa9d280], ecx */ W32((u32)(0xa9d280u), r_ecx);
    /* 007961b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961ba: mov dword ptr [0xa9d284], ecx */ W32((u32)(0xa9d284u), r_ecx);
    /* 007961c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961c2: mov dword ptr [0xa9d288], ecx */ W32((u32)(0xa9d288u), r_ecx);
    /* 007961c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961ca: mov dword ptr [0xa9d28c], ecx */ W32((u32)(0xa9d28cu), r_ecx);
    /* 007961d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961d2: mov dword ptr [0xa9d290], ecx */ W32((u32)(0xa9d290u), r_ecx);
    /* 007961d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961da: mov dword ptr [0xa9d294], ecx */ W32((u32)(0xa9d294u), r_ecx);
    /* 007961e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961e2: mov dword ptr [0xa9d29c], ecx */ W32((u32)(0xa9d29cu), r_ecx);
    /* 007961e8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961ea: mov dword ptr [0xa9d298], ecx */ W32((u32)(0xa9d298u), r_ecx);
    /* 007961f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961f2: mov dword ptr [0xa9d2a8], ecx */ W32((u32)(0xa9d2a8u), r_ecx);
    /* 007961f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961fa: mov dword ptr [0xa9d2ac], ecx */ W32((u32)(0xa9d2acu), r_ecx);
    /* 00796200: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796202: mov dword ptr [0xa9d2b0], ecx */ W32((u32)(0xa9d2b0u), r_ecx);
    /* 00796208: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079620a: mov dword ptr [0xa9d2b4], ecx */ W32((u32)(0xa9d2b4u), r_ecx);
    /* 00796210: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796212: mov dword ptr [0xa9d2b8], ecx */ W32((u32)(0xa9d2b8u), r_ecx);
    /* 00796218: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079621a: mov dword ptr [0xa9d2bc], ecx */ W32((u32)(0xa9d2bcu), r_ecx);
    /* 00796220: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796222: mov dword ptr [0xa9d2c0], ecx */ W32((u32)(0xa9d2c0u), r_ecx);
    /* 00796228: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079622a: mov dword ptr [0xa9d2c8], ecx */ W32((u32)(0xa9d2c8u), r_ecx);
    /* 00796230: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796232: mov dword ptr [0xa9d2c4], ecx */ W32((u32)(0xa9d2c4u), r_ecx);
    /* 00796238: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079623a: mov dword ptr [0xa9d2d4], ecx */ W32((u32)(0xa9d2d4u), r_ecx);
    /* 00796240: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796242: mov dword ptr [0xa9d2d8], ecx */ W32((u32)(0xa9d2d8u), r_ecx);
    /* 00796248: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079624a: mov dword ptr [0xa9d2dc], ecx */ W32((u32)(0xa9d2dcu), r_ecx);
    /* 00796250: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796252: mov dword ptr [0xa9d2e0], ecx */ W32((u32)(0xa9d2e0u), r_ecx);
    /* 00796258: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079625a: mov dword ptr [0xa9d2e4], ecx */ W32((u32)(0xa9d2e4u), r_ecx);
    /* 00796260: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796262: mov dword ptr [0xa9d2e8], ecx */ W32((u32)(0xa9d2e8u), r_ecx);
    /* 00796268: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079626a: mov dword ptr [0xa9d2ec], ecx */ W32((u32)(0xa9d2ecu), r_ecx);
    /* 00796270: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796272: mov dword ptr [0xa9d2f4], ecx */ W32((u32)(0xa9d2f4u), r_ecx);
    /* 00796278: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079627a: mov dword ptr [0xa9d2f0], ecx */ W32((u32)(0xa9d2f0u), r_ecx);
    /* 00796280: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796282: mov dword ptr [0xa9d300], ecx */ W32((u32)(0xa9d300u), r_ecx);
    /* 00796288: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079628a: mov dword ptr [0xa9d304], ecx */ W32((u32)(0xa9d304u), r_ecx);
    /* 00796290: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796292: mov dword ptr [0xa9d308], ecx */ W32((u32)(0xa9d308u), r_ecx);
    /* 00796298: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079629a: mov dword ptr [0xa9d30c], ecx */ W32((u32)(0xa9d30cu), r_ecx);
    /* 007962a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962a2: mov dword ptr [0xa9d310], ecx */ W32((u32)(0xa9d310u), r_ecx);
    /* 007962a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962aa: mov dword ptr [0xa9d314], ecx */ W32((u32)(0xa9d314u), r_ecx);
    /* 007962b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962b2: mov dword ptr [0xa9d318], ecx */ W32((u32)(0xa9d318u), r_ecx);
    /* 007962b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962ba: mov dword ptr [0xa9d320], ecx */ W32((u32)(0xa9d320u), r_ecx);
    /* 007962c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962c2: mov dword ptr [0xa9d31c], ecx */ W32((u32)(0xa9d31cu), r_ecx);
    /* 007962c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962ca: mov dword ptr [0xa9d32c], ecx */ W32((u32)(0xa9d32cu), r_ecx);
    /* 007962d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962d2: mov dword ptr [0xa9d330], ecx */ W32((u32)(0xa9d330u), r_ecx);
    /* 007962d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962da: mov dword ptr [0xa9d334], ecx */ W32((u32)(0xa9d334u), r_ecx);
    /* 007962e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962e2: mov dword ptr [0xa9d338], ecx */ W32((u32)(0xa9d338u), r_ecx);
    /* 007962e8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962ea: mov dword ptr [0xa9d33c], ecx */ W32((u32)(0xa9d33cu), r_ecx);
    /* 007962f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962f2: mov dword ptr [0xa9d340], ecx */ W32((u32)(0xa9d340u), r_ecx);
    /* 007962f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962fa: mov dword ptr [0xa9d344], ecx */ W32((u32)(0xa9d344u), r_ecx);
    /* 00796300: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796302: mov dword ptr [0xa9d34c], ecx */ W32((u32)(0xa9d34cu), r_ecx);
    /* 00796308: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079630a: mov dword ptr [0xa9d348], ecx */ W32((u32)(0xa9d348u), r_ecx);
    /* 00796310: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796312: mov dword ptr [0xa9d358], ecx */ W32((u32)(0xa9d358u), r_ecx);
    /* 00796318: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079631a: mov dword ptr [0xa9d35c], ecx */ W32((u32)(0xa9d35cu), r_ecx);
    /* 00796320: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796322: mov dword ptr [0xa9d360], ecx */ W32((u32)(0xa9d360u), r_ecx);
    /* 00796328: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079632a: mov dword ptr [0xa9d364], ecx */ W32((u32)(0xa9d364u), r_ecx);
    /* 00796330: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796332: mov dword ptr [0xa9d368], ecx */ W32((u32)(0xa9d368u), r_ecx);
    /* 00796338: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079633a: mov dword ptr [0xa9d36c], ecx */ W32((u32)(0xa9d36cu), r_ecx);
    /* 00796340: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796342: mov dword ptr [0xa9d370], ecx */ W32((u32)(0xa9d370u), r_ecx);
    /* 00796348: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079634a: mov dword ptr [0xa9d378], ecx */ W32((u32)(0xa9d378u), r_ecx);
    /* 00796350: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796352: mov dword ptr [0xa9d374], ecx */ W32((u32)(0xa9d374u), r_ecx);
    /* 00796358: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079635a: mov dword ptr [0xa9d384], ecx */ W32((u32)(0xa9d384u), r_ecx);
    /* 00796360: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796362: mov dword ptr [0xa9d388], ecx */ W32((u32)(0xa9d388u), r_ecx);
    /* 00796368: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079636a: mov dword ptr [0xa9d38c], ecx */ W32((u32)(0xa9d38cu), r_ecx);
    /* 00796370: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796372: mov dword ptr [0xa9d390], ecx */ W32((u32)(0xa9d390u), r_ecx);
    /* 00796378: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079637a: mov dword ptr [0xa9d394], ecx */ W32((u32)(0xa9d394u), r_ecx);
    /* 00796380: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796382: mov dword ptr [0xa9d398], ecx */ W32((u32)(0xa9d398u), r_ecx);
    /* 00796388: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079638a: mov dword ptr [0xa9d39c], ecx */ W32((u32)(0xa9d39cu), r_ecx);
    /* 00796390: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796392: mov dword ptr [0xa9d3a4], ecx */ W32((u32)(0xa9d3a4u), r_ecx);
    /* 00796398: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079639a: mov dword ptr [0xa9d3a0], ecx */ W32((u32)(0xa9d3a0u), r_ecx);
    /* 007963a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963a2: mov dword ptr [0xa9d3b0], ecx */ W32((u32)(0xa9d3b0u), r_ecx);
    /* 007963a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963aa: mov dword ptr [0xa9d3b4], ecx */ W32((u32)(0xa9d3b4u), r_ecx);
    /* 007963b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963b2: mov dword ptr [0xa9d3b8], ecx */ W32((u32)(0xa9d3b8u), r_ecx);
    /* 007963b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963ba: mov dword ptr [0xa9d3bc], ecx */ W32((u32)(0xa9d3bcu), r_ecx);
    /* 007963c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963c2: mov dword ptr [0xa9d3c0], ecx */ W32((u32)(0xa9d3c0u), r_ecx);
    /* 007963c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963ca: mov dword ptr [0xa9d3c4], ecx */ W32((u32)(0xa9d3c4u), r_ecx);
    /* 007963d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963d2: mov dword ptr [0xa9d3c8], ecx */ W32((u32)(0xa9d3c8u), r_ecx);
    /* 007963d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963da: mov dword ptr [0xa9d3d0], ecx */ W32((u32)(0xa9d3d0u), r_ecx);
    /* 007963e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963e2: mov dword ptr [0xa9d3cc], ecx */ W32((u32)(0xa9d3ccu), r_ecx);
    /* 007963e8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963ea: mov dword ptr [0xa9d3dc], ecx */ W32((u32)(0xa9d3dcu), r_ecx);
    /* 007963f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963f2: mov dword ptr [0xa9d3e0], ecx */ W32((u32)(0xa9d3e0u), r_ecx);
    /* 007963f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963fa: mov dword ptr [0xa9d3e4], ecx */ W32((u32)(0xa9d3e4u), r_ecx);
    /* 00796400: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796402: mov dword ptr [0xa9d3e8], ecx */ W32((u32)(0xa9d3e8u), r_ecx);
    /* 00796408: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079640a: mov dword ptr [0xa9d3ec], ecx */ W32((u32)(0xa9d3ecu), r_ecx);
    /* 00796410: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796412: mov dword ptr [0xa9d3f0], ecx */ W32((u32)(0xa9d3f0u), r_ecx);
    /* 00796418: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079641a: mov dword ptr [0xa9d3f4], ecx */ W32((u32)(0xa9d3f4u), r_ecx);
    /* 00796420: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796422: mov dword ptr [0xa9d3fc], ecx */ W32((u32)(0xa9d3fcu), r_ecx);
    /* 00796428: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079642a: mov dword ptr [0xa9d3f8], ecx */ W32((u32)(0xa9d3f8u), r_ecx);
    /* 00796430: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796432: mov dword ptr [0xa9d408], ecx */ W32((u32)(0xa9d408u), r_ecx);
    /* 00796438: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079643a: mov dword ptr [0xa9d40c], ecx */ W32((u32)(0xa9d40cu), r_ecx);
    /* 00796440: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796442: mov dword ptr [0xa9d410], ecx */ W32((u32)(0xa9d410u), r_ecx);
    /* 00796448: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079644a: mov dword ptr [0xa9d414], ecx */ W32((u32)(0xa9d414u), r_ecx);
    /* 00796450: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796452: mov dword ptr [0xa9d418], ecx */ W32((u32)(0xa9d418u), r_ecx);
    /* 00796458: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079645a: mov dword ptr [0xa9d41c], ecx */ W32((u32)(0xa9d41cu), r_ecx);
    /* 00796460: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796462: mov dword ptr [0xa9d420], ecx */ W32((u32)(0xa9d420u), r_ecx);
    /* 00796468: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079646a: mov dword ptr [0xa9d428], ecx */ W32((u32)(0xa9d428u), r_ecx);
    /* 00796470: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796472: mov dword ptr [0xa9d424], ecx */ W32((u32)(0xa9d424u), r_ecx);
    /* 00796478: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079647a: mov dword ptr [0xa9d434], ecx */ W32((u32)(0xa9d434u), r_ecx);
    /* 00796480: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796482: mov dword ptr [0xa9d438], ecx */ W32((u32)(0xa9d438u), r_ecx);
    /* 00796488: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079648a: mov dword ptr [0xa9d43c], ecx */ W32((u32)(0xa9d43cu), r_ecx);
    /* 00796490: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796492: mov dword ptr [0xa9d440], ecx */ W32((u32)(0xa9d440u), r_ecx);
    /* 00796498: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079649a: mov dword ptr [0xa9d444], ecx */ W32((u32)(0xa9d444u), r_ecx);
    /* 007964a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964a2: mov dword ptr [0xa9d448], ecx */ W32((u32)(0xa9d448u), r_ecx);
    /* 007964a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964aa: mov dword ptr [0xa9d44c], ecx */ W32((u32)(0xa9d44cu), r_ecx);
    /* 007964b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964b2: mov dword ptr [0xa9d454], ecx */ W32((u32)(0xa9d454u), r_ecx);
    /* 007964b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964ba: mov dword ptr [0xa9d450], ecx */ W32((u32)(0xa9d450u), r_ecx);
    /* 007964c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964c2: mov dword ptr [0xa9cd80], ecx */ W32((u32)(0xa9cd80u), r_ecx);
    /* 007964c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964ca: mov dword ptr [0xa9cd84], ecx */ W32((u32)(0xa9cd84u), r_ecx);
    /* 007964d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964d2: mov dword ptr [0xa9cd88], ecx */ W32((u32)(0xa9cd88u), r_ecx);
    /* 007964d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964da: mov dword ptr [0xa9cd8c], ecx */ W32((u32)(0xa9cd8cu), r_ecx);
    /* 007964e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964e2: mov dword ptr [0xa9cd90], ecx */ W32((u32)(0xa9cd90u), r_ecx);
    /* 007964e8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964ea: mov dword ptr [0xa9cd94], ecx */ W32((u32)(0xa9cd94u), r_ecx);
    /* 007964f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964f2: mov dword ptr [0xa9cd98], ecx */ W32((u32)(0xa9cd98u), r_ecx);
    /* 007964f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964fa: mov dword ptr [0xa9cda0], ecx */ W32((u32)(0xa9cda0u), r_ecx);
    /* 00796500: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796502: mov dword ptr [0xa9cd9c], ecx */ W32((u32)(0xa9cd9cu), r_ecx);
    /* 00796508: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079650a: mov dword ptr [0xa9cdac], ecx */ W32((u32)(0xa9cdacu), r_ecx);
    /* 00796510: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796512: mov dword ptr [0xa9cdb0], ecx */ W32((u32)(0xa9cdb0u), r_ecx);
    /* 00796518: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079651a: mov dword ptr [0xa9cdb4], ecx */ W32((u32)(0xa9cdb4u), r_ecx);
    /* 00796520: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796522: mov dword ptr [0xa9cdb8], ecx */ W32((u32)(0xa9cdb8u), r_ecx);
    /* 00796528: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079652a: mov dword ptr [0xa9cdbc], ecx */ W32((u32)(0xa9cdbcu), r_ecx);
    /* 00796530: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796532: mov dword ptr [0xa9cdc0], ecx */ W32((u32)(0xa9cdc0u), r_ecx);
    /* 00796538: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079653a: mov dword ptr [0xa9cdc4], ecx */ W32((u32)(0xa9cdc4u), r_ecx);
    /* 00796540: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796542: mov dword ptr [0xa9cdcc], ecx */ W32((u32)(0xa9cdccu), r_ecx);
    /* 00796548: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079654a: mov dword ptr [0xa9cdc8], ecx */ W32((u32)(0xa9cdc8u), r_ecx);
    /* 00796550: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796552: mov dword ptr [0xa9cdd8], ecx */ W32((u32)(0xa9cdd8u), r_ecx);
    /* 00796558: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079655a: mov dword ptr [0xa9cddc], ecx */ W32((u32)(0xa9cddcu), r_ecx);
    /* 00796560: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796562: mov dword ptr [0xa9cde0], ecx */ W32((u32)(0xa9cde0u), r_ecx);
    /* 00796568: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079656a: mov dword ptr [0xa9cde4], ecx */ W32((u32)(0xa9cde4u), r_ecx);
    /* 00796570: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796572: mov dword ptr [0xa9cde8], ecx */ W32((u32)(0xa9cde8u), r_ecx);
    /* 00796578: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079657a: mov dword ptr [0xa9cdec], ecx */ W32((u32)(0xa9cdecu), r_ecx);
    /* 00796580: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796582: mov dword ptr [0xa9cdf0], ecx */ W32((u32)(0xa9cdf0u), r_ecx);
    /* 00796588: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079658a: mov dword ptr [0xa9cdf8], ecx */ W32((u32)(0xa9cdf8u), r_ecx);
    /* 00796590: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796592: mov dword ptr [0xa9cdf4], ecx */ W32((u32)(0xa9cdf4u), r_ecx);
    /* 00796598: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079659a: mov dword ptr [0xa9ce04], ecx */ W32((u32)(0xa9ce04u), r_ecx);
    /* 007965a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965a2: mov dword ptr [0xa9ce08], ecx */ W32((u32)(0xa9ce08u), r_ecx);
    /* 007965a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965aa: mov dword ptr [0xa9ce0c], ecx */ W32((u32)(0xa9ce0cu), r_ecx);
    /* 007965b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965b2: mov dword ptr [0xa9ce10], ecx */ W32((u32)(0xa9ce10u), r_ecx);
    /* 007965b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965ba: mov dword ptr [0xa9ce14], ecx */ W32((u32)(0xa9ce14u), r_ecx);
    /* 007965c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965c2: mov dword ptr [0xa9ce18], ecx */ W32((u32)(0xa9ce18u), r_ecx);
    /* 007965c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965ca: mov dword ptr [0xa9ce1c], ecx */ W32((u32)(0xa9ce1cu), r_ecx);
    /* 007965d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965d2: mov dword ptr [0xa9ce24], ecx */ W32((u32)(0xa9ce24u), r_ecx);
    /* 007965d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965da: mov dword ptr [0xa9ce20], ecx */ W32((u32)(0xa9ce20u), r_ecx);
    /* 007965e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965e2: mov dword ptr [0xa9ce30], ecx */ W32((u32)(0xa9ce30u), r_ecx);
    /* 007965e8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965ea: mov dword ptr [0xa9ce34], ecx */ W32((u32)(0xa9ce34u), r_ecx);
    /* 007965f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965f2: mov dword ptr [0xa9ce38], ecx */ W32((u32)(0xa9ce38u), r_ecx);
    /* 007965f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965fa: mov dword ptr [0xa9ce3c], ecx */ W32((u32)(0xa9ce3cu), r_ecx);
    /* 00796600: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796602: mov dword ptr [0xa9ce40], ecx */ W32((u32)(0xa9ce40u), r_ecx);
    /* 00796608: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079660a: mov dword ptr [0xa9ce44], ecx */ W32((u32)(0xa9ce44u), r_ecx);
    /* 00796610: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796612: mov dword ptr [0xa9ce48], ecx */ W32((u32)(0xa9ce48u), r_ecx);
    /* 00796618: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079661a: mov dword ptr [0xa9ce50], ecx */ W32((u32)(0xa9ce50u), r_ecx);
    /* 00796620: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796622: mov dword ptr [0xa9ce4c], ecx */ W32((u32)(0xa9ce4cu), r_ecx);
    /* 00796628: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079662a: mov dword ptr [0xa9ce5c], ecx */ W32((u32)(0xa9ce5cu), r_ecx);
    /* 00796630: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796632: mov dword ptr [0xa9ce60], ecx */ W32((u32)(0xa9ce60u), r_ecx);
    /* 00796638: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079663a: mov dword ptr [0xa9ce64], ecx */ W32((u32)(0xa9ce64u), r_ecx);
    /* 00796640: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796642: mov dword ptr [0xa9ce68], ecx */ W32((u32)(0xa9ce68u), r_ecx);
    /* 00796648: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079664a: mov dword ptr [0xa9ce6c], ecx */ W32((u32)(0xa9ce6cu), r_ecx);
    /* 00796650: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796652: mov dword ptr [0xa9ce70], ecx */ W32((u32)(0xa9ce70u), r_ecx);
    /* 00796658: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079665a: mov dword ptr [0xa9ce74], ecx */ W32((u32)(0xa9ce74u), r_ecx);
    /* 00796660: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796662: mov dword ptr [0xa9ce7c], ecx */ W32((u32)(0xa9ce7cu), r_ecx);
    /* 00796668: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079666a: mov dword ptr [0xa9ce78], ecx */ W32((u32)(0xa9ce78u), r_ecx);
    /* 00796670: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796672: mov dword ptr [0xa9ce88], ecx */ W32((u32)(0xa9ce88u), r_ecx);
    /* 00796678: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079667a: mov dword ptr [0xa9ce8c], ecx */ W32((u32)(0xa9ce8cu), r_ecx);
    /* 00796680: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796682: mov dword ptr [0xa9ce90], ecx */ W32((u32)(0xa9ce90u), r_ecx);
    /* 00796688: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079668a: mov dword ptr [0xa9ce94], ecx */ W32((u32)(0xa9ce94u), r_ecx);
    /* 00796690: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796692: mov dword ptr [0xa9ce98], ecx */ W32((u32)(0xa9ce98u), r_ecx);
    /* 00796698: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079669a: mov dword ptr [0xa9ce9c], ecx */ W32((u32)(0xa9ce9cu), r_ecx);
    /* 007966a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007966a2: mov dword ptr [0xa9cea0], ecx */ W32((u32)(0xa9cea0u), r_ecx);
    /* 007966a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007966aa: mov dword ptr [0xa9cea8], ecx */ W32((u32)(0xa9cea8u), r_ecx);
    /* 007966b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007966b2: mov dword ptr [0xa9cea4], ecx */ W32((u32)(0xa9cea4u), r_ecx);
    /* 007966b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966ba: mov dword ptr [0xa9ceb4], eax */ W32((u32)(0xa9ceb4u), r_eax);
    /* 007966bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966c1: mov dword ptr [0xa9ceb8], eax */ W32((u32)(0xa9ceb8u), r_eax);
    /* 007966c6: mov dword ptr [0xa9ced8], edx */ W32((u32)(0xa9ced8u), r_edx);
    /* 007966cc: mov dword ptr [0xa9d4dc], edx */ W32((u32)(0xa9d4dcu), r_edx);
    /* 007966d2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966d4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007966d6: mov dword ptr [0xa9cebc], eax */ W32((u32)(0xa9cebcu), r_eax);
    /* 007966db: mov dword ptr [0xa9cec0], ecx */ W32((u32)(0xa9cec0u), r_ecx);
    /* 007966e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966e3: mov dword ptr [0xa9cec4], eax */ W32((u32)(0xa9cec4u), r_eax);
    /* 007966e8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966ea: mov dword ptr [0xa9cec8], eax */ W32((u32)(0xa9cec8u), r_eax);
    /* 007966ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966f1: mov dword ptr [0xa9cecc], eax */ W32((u32)(0xa9ceccu), r_eax);
    /* 007966f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966f8: mov dword ptr [0xa9ced4], eax */ W32((u32)(0xa9ced4u), r_eax);
    /* 007966fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007966ff: mov dword ptr [0xa9ced0], eax */ W32((u32)(0xa9ced0u), r_eax);
    /* 00796704: mov esp, ebp */ r_esp = r_ebp;
    /* 00796706: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00796707: ret  */ FN_RET(0x0079614d); r_esp += 4; return;
}

void f_00796152(void)
{
    FN_ENTER(0x00796152);
    /* 00796152: mov dword ptr [0xa9d244], ecx */ W32((u32)(0xa9d244u), r_ecx);
    /* 00796158: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079615a: mov dword ptr [0xa9d240], ecx */ W32((u32)(0xa9d240u), r_ecx);
    /* 00796160: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796162: mov dword ptr [0xa9d250], ecx */ W32((u32)(0xa9d250u), r_ecx);
    /* 00796168: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079616a: mov dword ptr [0xa9d254], ecx */ W32((u32)(0xa9d254u), r_ecx);
    /* 00796170: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796172: mov dword ptr [0xa9d258], ecx */ W32((u32)(0xa9d258u), r_ecx);
    /* 00796178: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079617a: mov dword ptr [0xa9d25c], ecx */ W32((u32)(0xa9d25cu), r_ecx);
    /* 00796180: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796182: mov dword ptr [0xa9d260], ecx */ W32((u32)(0xa9d260u), r_ecx);
    /* 00796188: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079618a: mov dword ptr [0xa9d264], ecx */ W32((u32)(0xa9d264u), r_ecx);
    /* 00796190: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796192: mov dword ptr [0xa9d268], ecx */ W32((u32)(0xa9d268u), r_ecx);
    /* 00796198: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079619a: mov dword ptr [0xa9d270], ecx */ W32((u32)(0xa9d270u), r_ecx);
    /* 007961a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961a2: mov dword ptr [0xa9d26c], ecx */ W32((u32)(0xa9d26cu), r_ecx);
    /* 007961a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961aa: mov dword ptr [0xa9d27c], ecx */ W32((u32)(0xa9d27cu), r_ecx);
    /* 007961b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961b2: mov dword ptr [0xa9d280], ecx */ W32((u32)(0xa9d280u), r_ecx);
    /* 007961b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961ba: mov dword ptr [0xa9d284], ecx */ W32((u32)(0xa9d284u), r_ecx);
    /* 007961c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961c2: mov dword ptr [0xa9d288], ecx */ W32((u32)(0xa9d288u), r_ecx);
    /* 007961c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961ca: mov dword ptr [0xa9d28c], ecx */ W32((u32)(0xa9d28cu), r_ecx);
    /* 007961d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961d2: mov dword ptr [0xa9d290], ecx */ W32((u32)(0xa9d290u), r_ecx);
    /* 007961d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961da: mov dword ptr [0xa9d294], ecx */ W32((u32)(0xa9d294u), r_ecx);
    /* 007961e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961e2: mov dword ptr [0xa9d29c], ecx */ W32((u32)(0xa9d29cu), r_ecx);
    /* 007961e8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961ea: mov dword ptr [0xa9d298], ecx */ W32((u32)(0xa9d298u), r_ecx);
    /* 007961f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961f2: mov dword ptr [0xa9d2a8], ecx */ W32((u32)(0xa9d2a8u), r_ecx);
    /* 007961f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961fa: mov dword ptr [0xa9d2ac], ecx */ W32((u32)(0xa9d2acu), r_ecx);
    /* 00796200: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796202: mov dword ptr [0xa9d2b0], ecx */ W32((u32)(0xa9d2b0u), r_ecx);
    /* 00796208: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079620a: mov dword ptr [0xa9d2b4], ecx */ W32((u32)(0xa9d2b4u), r_ecx);
    /* 00796210: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796212: mov dword ptr [0xa9d2b8], ecx */ W32((u32)(0xa9d2b8u), r_ecx);
    /* 00796218: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079621a: mov dword ptr [0xa9d2bc], ecx */ W32((u32)(0xa9d2bcu), r_ecx);
    /* 00796220: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796222: mov dword ptr [0xa9d2c0], ecx */ W32((u32)(0xa9d2c0u), r_ecx);
    /* 00796228: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079622a: mov dword ptr [0xa9d2c8], ecx */ W32((u32)(0xa9d2c8u), r_ecx);
    /* 00796230: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796232: mov dword ptr [0xa9d2c4], ecx */ W32((u32)(0xa9d2c4u), r_ecx);
    /* 00796238: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079623a: mov dword ptr [0xa9d2d4], ecx */ W32((u32)(0xa9d2d4u), r_ecx);
    /* 00796240: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796242: mov dword ptr [0xa9d2d8], ecx */ W32((u32)(0xa9d2d8u), r_ecx);
    /* 00796248: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079624a: mov dword ptr [0xa9d2dc], ecx */ W32((u32)(0xa9d2dcu), r_ecx);
    /* 00796250: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796252: mov dword ptr [0xa9d2e0], ecx */ W32((u32)(0xa9d2e0u), r_ecx);
    /* 00796258: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079625a: mov dword ptr [0xa9d2e4], ecx */ W32((u32)(0xa9d2e4u), r_ecx);
    /* 00796260: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796262: mov dword ptr [0xa9d2e8], ecx */ W32((u32)(0xa9d2e8u), r_ecx);
    /* 00796268: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079626a: mov dword ptr [0xa9d2ec], ecx */ W32((u32)(0xa9d2ecu), r_ecx);
    /* 00796270: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796272: mov dword ptr [0xa9d2f4], ecx */ W32((u32)(0xa9d2f4u), r_ecx);
    /* 00796278: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079627a: mov dword ptr [0xa9d2f0], ecx */ W32((u32)(0xa9d2f0u), r_ecx);
    /* 00796280: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796282: mov dword ptr [0xa9d300], ecx */ W32((u32)(0xa9d300u), r_ecx);
    /* 00796288: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079628a: mov dword ptr [0xa9d304], ecx */ W32((u32)(0xa9d304u), r_ecx);
    /* 00796290: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796292: mov dword ptr [0xa9d308], ecx */ W32((u32)(0xa9d308u), r_ecx);
    /* 00796298: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079629a: mov dword ptr [0xa9d30c], ecx */ W32((u32)(0xa9d30cu), r_ecx);
    /* 007962a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962a2: mov dword ptr [0xa9d310], ecx */ W32((u32)(0xa9d310u), r_ecx);
    /* 007962a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962aa: mov dword ptr [0xa9d314], ecx */ W32((u32)(0xa9d314u), r_ecx);
    /* 007962b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962b2: mov dword ptr [0xa9d318], ecx */ W32((u32)(0xa9d318u), r_ecx);
    /* 007962b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962ba: mov dword ptr [0xa9d320], ecx */ W32((u32)(0xa9d320u), r_ecx);
    /* 007962c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962c2: mov dword ptr [0xa9d31c], ecx */ W32((u32)(0xa9d31cu), r_ecx);
    /* 007962c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962ca: mov dword ptr [0xa9d32c], ecx */ W32((u32)(0xa9d32cu), r_ecx);
    /* 007962d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962d2: mov dword ptr [0xa9d330], ecx */ W32((u32)(0xa9d330u), r_ecx);
    /* 007962d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962da: mov dword ptr [0xa9d334], ecx */ W32((u32)(0xa9d334u), r_ecx);
    /* 007962e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962e2: mov dword ptr [0xa9d338], ecx */ W32((u32)(0xa9d338u), r_ecx);
    /* 007962e8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962ea: mov dword ptr [0xa9d33c], ecx */ W32((u32)(0xa9d33cu), r_ecx);
    /* 007962f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962f2: mov dword ptr [0xa9d340], ecx */ W32((u32)(0xa9d340u), r_ecx);
    /* 007962f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962fa: mov dword ptr [0xa9d344], ecx */ W32((u32)(0xa9d344u), r_ecx);
    /* 00796300: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796302: mov dword ptr [0xa9d34c], ecx */ W32((u32)(0xa9d34cu), r_ecx);
    /* 00796308: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079630a: mov dword ptr [0xa9d348], ecx */ W32((u32)(0xa9d348u), r_ecx);
    /* 00796310: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796312: mov dword ptr [0xa9d358], ecx */ W32((u32)(0xa9d358u), r_ecx);
    /* 00796318: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079631a: mov dword ptr [0xa9d35c], ecx */ W32((u32)(0xa9d35cu), r_ecx);
    /* 00796320: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796322: mov dword ptr [0xa9d360], ecx */ W32((u32)(0xa9d360u), r_ecx);
    /* 00796328: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079632a: mov dword ptr [0xa9d364], ecx */ W32((u32)(0xa9d364u), r_ecx);
    /* 00796330: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796332: mov dword ptr [0xa9d368], ecx */ W32((u32)(0xa9d368u), r_ecx);
    /* 00796338: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079633a: mov dword ptr [0xa9d36c], ecx */ W32((u32)(0xa9d36cu), r_ecx);
    /* 00796340: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796342: mov dword ptr [0xa9d370], ecx */ W32((u32)(0xa9d370u), r_ecx);
    /* 00796348: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079634a: mov dword ptr [0xa9d378], ecx */ W32((u32)(0xa9d378u), r_ecx);
    /* 00796350: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796352: mov dword ptr [0xa9d374], ecx */ W32((u32)(0xa9d374u), r_ecx);
    /* 00796358: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079635a: mov dword ptr [0xa9d384], ecx */ W32((u32)(0xa9d384u), r_ecx);
    /* 00796360: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796362: mov dword ptr [0xa9d388], ecx */ W32((u32)(0xa9d388u), r_ecx);
    /* 00796368: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079636a: mov dword ptr [0xa9d38c], ecx */ W32((u32)(0xa9d38cu), r_ecx);
    /* 00796370: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796372: mov dword ptr [0xa9d390], ecx */ W32((u32)(0xa9d390u), r_ecx);
    /* 00796378: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079637a: mov dword ptr [0xa9d394], ecx */ W32((u32)(0xa9d394u), r_ecx);
    /* 00796380: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796382: mov dword ptr [0xa9d398], ecx */ W32((u32)(0xa9d398u), r_ecx);
    /* 00796388: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079638a: mov dword ptr [0xa9d39c], ecx */ W32((u32)(0xa9d39cu), r_ecx);
    /* 00796390: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796392: mov dword ptr [0xa9d3a4], ecx */ W32((u32)(0xa9d3a4u), r_ecx);
    /* 00796398: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079639a: mov dword ptr [0xa9d3a0], ecx */ W32((u32)(0xa9d3a0u), r_ecx);
    /* 007963a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963a2: mov dword ptr [0xa9d3b0], ecx */ W32((u32)(0xa9d3b0u), r_ecx);
    /* 007963a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963aa: mov dword ptr [0xa9d3b4], ecx */ W32((u32)(0xa9d3b4u), r_ecx);
    /* 007963b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963b2: mov dword ptr [0xa9d3b8], ecx */ W32((u32)(0xa9d3b8u), r_ecx);
    /* 007963b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963ba: mov dword ptr [0xa9d3bc], ecx */ W32((u32)(0xa9d3bcu), r_ecx);
    /* 007963c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963c2: mov dword ptr [0xa9d3c0], ecx */ W32((u32)(0xa9d3c0u), r_ecx);
    /* 007963c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963ca: mov dword ptr [0xa9d3c4], ecx */ W32((u32)(0xa9d3c4u), r_ecx);
    /* 007963d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963d2: mov dword ptr [0xa9d3c8], ecx */ W32((u32)(0xa9d3c8u), r_ecx);
    /* 007963d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963da: mov dword ptr [0xa9d3d0], ecx */ W32((u32)(0xa9d3d0u), r_ecx);
    /* 007963e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963e2: mov dword ptr [0xa9d3cc], ecx */ W32((u32)(0xa9d3ccu), r_ecx);
    /* 007963e8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963ea: mov dword ptr [0xa9d3dc], ecx */ W32((u32)(0xa9d3dcu), r_ecx);
    /* 007963f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963f2: mov dword ptr [0xa9d3e0], ecx */ W32((u32)(0xa9d3e0u), r_ecx);
    /* 007963f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963fa: mov dword ptr [0xa9d3e4], ecx */ W32((u32)(0xa9d3e4u), r_ecx);
    /* 00796400: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796402: mov dword ptr [0xa9d3e8], ecx */ W32((u32)(0xa9d3e8u), r_ecx);
    /* 00796408: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079640a: mov dword ptr [0xa9d3ec], ecx */ W32((u32)(0xa9d3ecu), r_ecx);
    /* 00796410: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796412: mov dword ptr [0xa9d3f0], ecx */ W32((u32)(0xa9d3f0u), r_ecx);
    /* 00796418: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079641a: mov dword ptr [0xa9d3f4], ecx */ W32((u32)(0xa9d3f4u), r_ecx);
    /* 00796420: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796422: mov dword ptr [0xa9d3fc], ecx */ W32((u32)(0xa9d3fcu), r_ecx);
    /* 00796428: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079642a: mov dword ptr [0xa9d3f8], ecx */ W32((u32)(0xa9d3f8u), r_ecx);
    /* 00796430: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796432: mov dword ptr [0xa9d408], ecx */ W32((u32)(0xa9d408u), r_ecx);
    /* 00796438: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079643a: mov dword ptr [0xa9d40c], ecx */ W32((u32)(0xa9d40cu), r_ecx);
    /* 00796440: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796442: mov dword ptr [0xa9d410], ecx */ W32((u32)(0xa9d410u), r_ecx);
    /* 00796448: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079644a: mov dword ptr [0xa9d414], ecx */ W32((u32)(0xa9d414u), r_ecx);
    /* 00796450: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796452: mov dword ptr [0xa9d418], ecx */ W32((u32)(0xa9d418u), r_ecx);
    /* 00796458: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079645a: mov dword ptr [0xa9d41c], ecx */ W32((u32)(0xa9d41cu), r_ecx);
    /* 00796460: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796462: mov dword ptr [0xa9d420], ecx */ W32((u32)(0xa9d420u), r_ecx);
    /* 00796468: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079646a: mov dword ptr [0xa9d428], ecx */ W32((u32)(0xa9d428u), r_ecx);
    /* 00796470: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796472: mov dword ptr [0xa9d424], ecx */ W32((u32)(0xa9d424u), r_ecx);
    /* 00796478: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079647a: mov dword ptr [0xa9d434], ecx */ W32((u32)(0xa9d434u), r_ecx);
    /* 00796480: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796482: mov dword ptr [0xa9d438], ecx */ W32((u32)(0xa9d438u), r_ecx);
    /* 00796488: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079648a: mov dword ptr [0xa9d43c], ecx */ W32((u32)(0xa9d43cu), r_ecx);
    /* 00796490: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796492: mov dword ptr [0xa9d440], ecx */ W32((u32)(0xa9d440u), r_ecx);
    /* 00796498: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079649a: mov dword ptr [0xa9d444], ecx */ W32((u32)(0xa9d444u), r_ecx);
    /* 007964a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964a2: mov dword ptr [0xa9d448], ecx */ W32((u32)(0xa9d448u), r_ecx);
    /* 007964a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964aa: mov dword ptr [0xa9d44c], ecx */ W32((u32)(0xa9d44cu), r_ecx);
    /* 007964b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964b2: mov dword ptr [0xa9d454], ecx */ W32((u32)(0xa9d454u), r_ecx);
    /* 007964b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964ba: mov dword ptr [0xa9d450], ecx */ W32((u32)(0xa9d450u), r_ecx);
    /* 007964c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964c2: mov dword ptr [0xa9cd80], ecx */ W32((u32)(0xa9cd80u), r_ecx);
    /* 007964c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964ca: mov dword ptr [0xa9cd84], ecx */ W32((u32)(0xa9cd84u), r_ecx);
    /* 007964d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964d2: mov dword ptr [0xa9cd88], ecx */ W32((u32)(0xa9cd88u), r_ecx);
    /* 007964d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964da: mov dword ptr [0xa9cd8c], ecx */ W32((u32)(0xa9cd8cu), r_ecx);
    /* 007964e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964e2: mov dword ptr [0xa9cd90], ecx */ W32((u32)(0xa9cd90u), r_ecx);
    /* 007964e8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964ea: mov dword ptr [0xa9cd94], ecx */ W32((u32)(0xa9cd94u), r_ecx);
    /* 007964f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964f2: mov dword ptr [0xa9cd98], ecx */ W32((u32)(0xa9cd98u), r_ecx);
    /* 007964f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964fa: mov dword ptr [0xa9cda0], ecx */ W32((u32)(0xa9cda0u), r_ecx);
    /* 00796500: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796502: mov dword ptr [0xa9cd9c], ecx */ W32((u32)(0xa9cd9cu), r_ecx);
    /* 00796508: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079650a: mov dword ptr [0xa9cdac], ecx */ W32((u32)(0xa9cdacu), r_ecx);
    /* 00796510: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796512: mov dword ptr [0xa9cdb0], ecx */ W32((u32)(0xa9cdb0u), r_ecx);
    /* 00796518: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079651a: mov dword ptr [0xa9cdb4], ecx */ W32((u32)(0xa9cdb4u), r_ecx);
    /* 00796520: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796522: mov dword ptr [0xa9cdb8], ecx */ W32((u32)(0xa9cdb8u), r_ecx);
    /* 00796528: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079652a: mov dword ptr [0xa9cdbc], ecx */ W32((u32)(0xa9cdbcu), r_ecx);
    /* 00796530: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796532: mov dword ptr [0xa9cdc0], ecx */ W32((u32)(0xa9cdc0u), r_ecx);
    /* 00796538: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079653a: mov dword ptr [0xa9cdc4], ecx */ W32((u32)(0xa9cdc4u), r_ecx);
    /* 00796540: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796542: mov dword ptr [0xa9cdcc], ecx */ W32((u32)(0xa9cdccu), r_ecx);
    /* 00796548: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079654a: mov dword ptr [0xa9cdc8], ecx */ W32((u32)(0xa9cdc8u), r_ecx);
    /* 00796550: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796552: mov dword ptr [0xa9cdd8], ecx */ W32((u32)(0xa9cdd8u), r_ecx);
    /* 00796558: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079655a: mov dword ptr [0xa9cddc], ecx */ W32((u32)(0xa9cddcu), r_ecx);
    /* 00796560: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796562: mov dword ptr [0xa9cde0], ecx */ W32((u32)(0xa9cde0u), r_ecx);
    /* 00796568: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079656a: mov dword ptr [0xa9cde4], ecx */ W32((u32)(0xa9cde4u), r_ecx);
    /* 00796570: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796572: mov dword ptr [0xa9cde8], ecx */ W32((u32)(0xa9cde8u), r_ecx);
    /* 00796578: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079657a: mov dword ptr [0xa9cdec], ecx */ W32((u32)(0xa9cdecu), r_ecx);
    /* 00796580: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796582: mov dword ptr [0xa9cdf0], ecx */ W32((u32)(0xa9cdf0u), r_ecx);
    /* 00796588: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079658a: mov dword ptr [0xa9cdf8], ecx */ W32((u32)(0xa9cdf8u), r_ecx);
    /* 00796590: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796592: mov dword ptr [0xa9cdf4], ecx */ W32((u32)(0xa9cdf4u), r_ecx);
    /* 00796598: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079659a: mov dword ptr [0xa9ce04], ecx */ W32((u32)(0xa9ce04u), r_ecx);
    /* 007965a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965a2: mov dword ptr [0xa9ce08], ecx */ W32((u32)(0xa9ce08u), r_ecx);
    /* 007965a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965aa: mov dword ptr [0xa9ce0c], ecx */ W32((u32)(0xa9ce0cu), r_ecx);
    /* 007965b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965b2: mov dword ptr [0xa9ce10], ecx */ W32((u32)(0xa9ce10u), r_ecx);
    /* 007965b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965ba: mov dword ptr [0xa9ce14], ecx */ W32((u32)(0xa9ce14u), r_ecx);
    /* 007965c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965c2: mov dword ptr [0xa9ce18], ecx */ W32((u32)(0xa9ce18u), r_ecx);
    /* 007965c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965ca: mov dword ptr [0xa9ce1c], ecx */ W32((u32)(0xa9ce1cu), r_ecx);
    /* 007965d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965d2: mov dword ptr [0xa9ce24], ecx */ W32((u32)(0xa9ce24u), r_ecx);
    /* 007965d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965da: mov dword ptr [0xa9ce20], ecx */ W32((u32)(0xa9ce20u), r_ecx);
    /* 007965e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965e2: mov dword ptr [0xa9ce30], ecx */ W32((u32)(0xa9ce30u), r_ecx);
    /* 007965e8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965ea: mov dword ptr [0xa9ce34], ecx */ W32((u32)(0xa9ce34u), r_ecx);
    /* 007965f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965f2: mov dword ptr [0xa9ce38], ecx */ W32((u32)(0xa9ce38u), r_ecx);
    /* 007965f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965fa: mov dword ptr [0xa9ce3c], ecx */ W32((u32)(0xa9ce3cu), r_ecx);
    /* 00796600: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796602: mov dword ptr [0xa9ce40], ecx */ W32((u32)(0xa9ce40u), r_ecx);
    /* 00796608: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079660a: mov dword ptr [0xa9ce44], ecx */ W32((u32)(0xa9ce44u), r_ecx);
    /* 00796610: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796612: mov dword ptr [0xa9ce48], ecx */ W32((u32)(0xa9ce48u), r_ecx);
    /* 00796618: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079661a: mov dword ptr [0xa9ce50], ecx */ W32((u32)(0xa9ce50u), r_ecx);
    /* 00796620: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796622: mov dword ptr [0xa9ce4c], ecx */ W32((u32)(0xa9ce4cu), r_ecx);
    /* 00796628: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079662a: mov dword ptr [0xa9ce5c], ecx */ W32((u32)(0xa9ce5cu), r_ecx);
    /* 00796630: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796632: mov dword ptr [0xa9ce60], ecx */ W32((u32)(0xa9ce60u), r_ecx);
    /* 00796638: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079663a: mov dword ptr [0xa9ce64], ecx */ W32((u32)(0xa9ce64u), r_ecx);
    /* 00796640: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796642: mov dword ptr [0xa9ce68], ecx */ W32((u32)(0xa9ce68u), r_ecx);
    /* 00796648: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079664a: mov dword ptr [0xa9ce6c], ecx */ W32((u32)(0xa9ce6cu), r_ecx);
    /* 00796650: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796652: mov dword ptr [0xa9ce70], ecx */ W32((u32)(0xa9ce70u), r_ecx);
    /* 00796658: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079665a: mov dword ptr [0xa9ce74], ecx */ W32((u32)(0xa9ce74u), r_ecx);
    /* 00796660: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796662: mov dword ptr [0xa9ce7c], ecx */ W32((u32)(0xa9ce7cu), r_ecx);
    /* 00796668: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079666a: mov dword ptr [0xa9ce78], ecx */ W32((u32)(0xa9ce78u), r_ecx);
    /* 00796670: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796672: mov dword ptr [0xa9ce88], ecx */ W32((u32)(0xa9ce88u), r_ecx);
    /* 00796678: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079667a: mov dword ptr [0xa9ce8c], ecx */ W32((u32)(0xa9ce8cu), r_ecx);
    /* 00796680: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796682: mov dword ptr [0xa9ce90], ecx */ W32((u32)(0xa9ce90u), r_ecx);
    /* 00796688: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079668a: mov dword ptr [0xa9ce94], ecx */ W32((u32)(0xa9ce94u), r_ecx);
    /* 00796690: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796692: mov dword ptr [0xa9ce98], ecx */ W32((u32)(0xa9ce98u), r_ecx);
    /* 00796698: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079669a: mov dword ptr [0xa9ce9c], ecx */ W32((u32)(0xa9ce9cu), r_ecx);
    /* 007966a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007966a2: mov dword ptr [0xa9cea0], ecx */ W32((u32)(0xa9cea0u), r_ecx);
    /* 007966a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007966aa: mov dword ptr [0xa9cea8], ecx */ W32((u32)(0xa9cea8u), r_ecx);
    /* 007966b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007966b2: mov dword ptr [0xa9cea4], ecx */ W32((u32)(0xa9cea4u), r_ecx);
    /* 007966b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966ba: mov dword ptr [0xa9ceb4], eax */ W32((u32)(0xa9ceb4u), r_eax);
    /* 007966bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966c1: mov dword ptr [0xa9ceb8], eax */ W32((u32)(0xa9ceb8u), r_eax);
    /* 007966c6: mov dword ptr [0xa9ced8], edx */ W32((u32)(0xa9ced8u), r_edx);
    /* 007966cc: mov dword ptr [0xa9d4dc], edx */ W32((u32)(0xa9d4dcu), r_edx);
    /* 007966d2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966d4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007966d6: mov dword ptr [0xa9cebc], eax */ W32((u32)(0xa9cebcu), r_eax);
    /* 007966db: mov dword ptr [0xa9cec0], ecx */ W32((u32)(0xa9cec0u), r_ecx);
    /* 007966e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966e3: mov dword ptr [0xa9cec4], eax */ W32((u32)(0xa9cec4u), r_eax);
    /* 007966e8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966ea: mov dword ptr [0xa9cec8], eax */ W32((u32)(0xa9cec8u), r_eax);
    /* 007966ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966f1: mov dword ptr [0xa9cecc], eax */ W32((u32)(0xa9ceccu), r_eax);
    /* 007966f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966f8: mov dword ptr [0xa9ced4], eax */ W32((u32)(0xa9ced4u), r_eax);
    /* 007966fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007966ff: mov dword ptr [0xa9ced0], eax */ W32((u32)(0xa9ced0u), r_eax);
    /* 00796704: mov esp, ebp */ r_esp = r_ebp;
    /* 00796706: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00796707: ret  */ FN_RET(0x00796152); r_esp += 4; return;
}

void f_00796164(void)
{
    FN_ENTER(0x00796164);
    /* 00796164: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00796165: shr byte ptr [ecx - 0x7636cd00], cl */ { u32 ad = (u32)(r_ecx+0x89c93300u); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); W8(ad, r);  } }
    /* 0079616b: or eax, 0xa9d254 */ {  u32 a = r_eax; u32 b = 0xa9d254u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00796170: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796172: mov dword ptr [0xa9d258], ecx */ W32((u32)(0xa9d258u), r_ecx);
    /* 00796178: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079617a: mov dword ptr [0xa9d25c], ecx */ W32((u32)(0xa9d25cu), r_ecx);
    /* 00796180: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796182: mov dword ptr [0xa9d260], ecx */ W32((u32)(0xa9d260u), r_ecx);
    /* 00796188: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079618a: mov dword ptr [0xa9d264], ecx */ W32((u32)(0xa9d264u), r_ecx);
    /* 00796190: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796192: mov dword ptr [0xa9d268], ecx */ W32((u32)(0xa9d268u), r_ecx);
    /* 00796198: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079619a: mov dword ptr [0xa9d270], ecx */ W32((u32)(0xa9d270u), r_ecx);
    /* 007961a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961a2: mov dword ptr [0xa9d26c], ecx */ W32((u32)(0xa9d26cu), r_ecx);
    /* 007961a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961aa: mov dword ptr [0xa9d27c], ecx */ W32((u32)(0xa9d27cu), r_ecx);
    /* 007961b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961b2: mov dword ptr [0xa9d280], ecx */ W32((u32)(0xa9d280u), r_ecx);
    /* 007961b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961ba: mov dword ptr [0xa9d284], ecx */ W32((u32)(0xa9d284u), r_ecx);
    /* 007961c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961c2: mov dword ptr [0xa9d288], ecx */ W32((u32)(0xa9d288u), r_ecx);
    /* 007961c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961ca: mov dword ptr [0xa9d28c], ecx */ W32((u32)(0xa9d28cu), r_ecx);
    /* 007961d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961d2: mov dword ptr [0xa9d290], ecx */ W32((u32)(0xa9d290u), r_ecx);
    /* 007961d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961da: mov dword ptr [0xa9d294], ecx */ W32((u32)(0xa9d294u), r_ecx);
    /* 007961e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961e2: mov dword ptr [0xa9d29c], ecx */ W32((u32)(0xa9d29cu), r_ecx);
    /* 007961e8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961ea: mov dword ptr [0xa9d298], ecx */ W32((u32)(0xa9d298u), r_ecx);
    /* 007961f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961f2: mov dword ptr [0xa9d2a8], ecx */ W32((u32)(0xa9d2a8u), r_ecx);
    /* 007961f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961fa: mov dword ptr [0xa9d2ac], ecx */ W32((u32)(0xa9d2acu), r_ecx);
    /* 00796200: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796202: mov dword ptr [0xa9d2b0], ecx */ W32((u32)(0xa9d2b0u), r_ecx);
    /* 00796208: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079620a: mov dword ptr [0xa9d2b4], ecx */ W32((u32)(0xa9d2b4u), r_ecx);
    /* 00796210: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796212: mov dword ptr [0xa9d2b8], ecx */ W32((u32)(0xa9d2b8u), r_ecx);
    /* 00796218: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079621a: mov dword ptr [0xa9d2bc], ecx */ W32((u32)(0xa9d2bcu), r_ecx);
    /* 00796220: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796222: mov dword ptr [0xa9d2c0], ecx */ W32((u32)(0xa9d2c0u), r_ecx);
    /* 00796228: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079622a: mov dword ptr [0xa9d2c8], ecx */ W32((u32)(0xa9d2c8u), r_ecx);
    /* 00796230: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796232: mov dword ptr [0xa9d2c4], ecx */ W32((u32)(0xa9d2c4u), r_ecx);
    /* 00796238: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079623a: mov dword ptr [0xa9d2d4], ecx */ W32((u32)(0xa9d2d4u), r_ecx);
    /* 00796240: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796242: mov dword ptr [0xa9d2d8], ecx */ W32((u32)(0xa9d2d8u), r_ecx);
    /* 00796248: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079624a: mov dword ptr [0xa9d2dc], ecx */ W32((u32)(0xa9d2dcu), r_ecx);
    /* 00796250: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796252: mov dword ptr [0xa9d2e0], ecx */ W32((u32)(0xa9d2e0u), r_ecx);
    /* 00796258: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079625a: mov dword ptr [0xa9d2e4], ecx */ W32((u32)(0xa9d2e4u), r_ecx);
    /* 00796260: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796262: mov dword ptr [0xa9d2e8], ecx */ W32((u32)(0xa9d2e8u), r_ecx);
    /* 00796268: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079626a: mov dword ptr [0xa9d2ec], ecx */ W32((u32)(0xa9d2ecu), r_ecx);
    /* 00796270: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796272: mov dword ptr [0xa9d2f4], ecx */ W32((u32)(0xa9d2f4u), r_ecx);
    /* 00796278: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079627a: mov dword ptr [0xa9d2f0], ecx */ W32((u32)(0xa9d2f0u), r_ecx);
    /* 00796280: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796282: mov dword ptr [0xa9d300], ecx */ W32((u32)(0xa9d300u), r_ecx);
    /* 00796288: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079628a: mov dword ptr [0xa9d304], ecx */ W32((u32)(0xa9d304u), r_ecx);
    /* 00796290: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796292: mov dword ptr [0xa9d308], ecx */ W32((u32)(0xa9d308u), r_ecx);
    /* 00796298: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079629a: mov dword ptr [0xa9d30c], ecx */ W32((u32)(0xa9d30cu), r_ecx);
    /* 007962a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962a2: mov dword ptr [0xa9d310], ecx */ W32((u32)(0xa9d310u), r_ecx);
    /* 007962a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962aa: mov dword ptr [0xa9d314], ecx */ W32((u32)(0xa9d314u), r_ecx);
    /* 007962b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962b2: mov dword ptr [0xa9d318], ecx */ W32((u32)(0xa9d318u), r_ecx);
    /* 007962b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962ba: mov dword ptr [0xa9d320], ecx */ W32((u32)(0xa9d320u), r_ecx);
    /* 007962c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962c2: mov dword ptr [0xa9d31c], ecx */ W32((u32)(0xa9d31cu), r_ecx);
    /* 007962c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962ca: mov dword ptr [0xa9d32c], ecx */ W32((u32)(0xa9d32cu), r_ecx);
    /* 007962d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962d2: mov dword ptr [0xa9d330], ecx */ W32((u32)(0xa9d330u), r_ecx);
    /* 007962d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962da: mov dword ptr [0xa9d334], ecx */ W32((u32)(0xa9d334u), r_ecx);
    /* 007962e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962e2: mov dword ptr [0xa9d338], ecx */ W32((u32)(0xa9d338u), r_ecx);
    /* 007962e8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962ea: mov dword ptr [0xa9d33c], ecx */ W32((u32)(0xa9d33cu), r_ecx);
    /* 007962f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962f2: mov dword ptr [0xa9d340], ecx */ W32((u32)(0xa9d340u), r_ecx);
    /* 007962f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962fa: mov dword ptr [0xa9d344], ecx */ W32((u32)(0xa9d344u), r_ecx);
    /* 00796300: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796302: mov dword ptr [0xa9d34c], ecx */ W32((u32)(0xa9d34cu), r_ecx);
    /* 00796308: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079630a: mov dword ptr [0xa9d348], ecx */ W32((u32)(0xa9d348u), r_ecx);
    /* 00796310: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796312: mov dword ptr [0xa9d358], ecx */ W32((u32)(0xa9d358u), r_ecx);
    /* 00796318: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079631a: mov dword ptr [0xa9d35c], ecx */ W32((u32)(0xa9d35cu), r_ecx);
    /* 00796320: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796322: mov dword ptr [0xa9d360], ecx */ W32((u32)(0xa9d360u), r_ecx);
    /* 00796328: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079632a: mov dword ptr [0xa9d364], ecx */ W32((u32)(0xa9d364u), r_ecx);
    /* 00796330: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796332: mov dword ptr [0xa9d368], ecx */ W32((u32)(0xa9d368u), r_ecx);
    /* 00796338: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079633a: mov dword ptr [0xa9d36c], ecx */ W32((u32)(0xa9d36cu), r_ecx);
    /* 00796340: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796342: mov dword ptr [0xa9d370], ecx */ W32((u32)(0xa9d370u), r_ecx);
    /* 00796348: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079634a: mov dword ptr [0xa9d378], ecx */ W32((u32)(0xa9d378u), r_ecx);
    /* 00796350: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796352: mov dword ptr [0xa9d374], ecx */ W32((u32)(0xa9d374u), r_ecx);
    /* 00796358: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079635a: mov dword ptr [0xa9d384], ecx */ W32((u32)(0xa9d384u), r_ecx);
    /* 00796360: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796362: mov dword ptr [0xa9d388], ecx */ W32((u32)(0xa9d388u), r_ecx);
    /* 00796368: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079636a: mov dword ptr [0xa9d38c], ecx */ W32((u32)(0xa9d38cu), r_ecx);
    /* 00796370: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796372: mov dword ptr [0xa9d390], ecx */ W32((u32)(0xa9d390u), r_ecx);
    /* 00796378: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079637a: mov dword ptr [0xa9d394], ecx */ W32((u32)(0xa9d394u), r_ecx);
    /* 00796380: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796382: mov dword ptr [0xa9d398], ecx */ W32((u32)(0xa9d398u), r_ecx);
    /* 00796388: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079638a: mov dword ptr [0xa9d39c], ecx */ W32((u32)(0xa9d39cu), r_ecx);
    /* 00796390: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796392: mov dword ptr [0xa9d3a4], ecx */ W32((u32)(0xa9d3a4u), r_ecx);
    /* 00796398: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079639a: mov dword ptr [0xa9d3a0], ecx */ W32((u32)(0xa9d3a0u), r_ecx);
    /* 007963a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963a2: mov dword ptr [0xa9d3b0], ecx */ W32((u32)(0xa9d3b0u), r_ecx);
    /* 007963a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963aa: mov dword ptr [0xa9d3b4], ecx */ W32((u32)(0xa9d3b4u), r_ecx);
    /* 007963b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963b2: mov dword ptr [0xa9d3b8], ecx */ W32((u32)(0xa9d3b8u), r_ecx);
    /* 007963b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963ba: mov dword ptr [0xa9d3bc], ecx */ W32((u32)(0xa9d3bcu), r_ecx);
    /* 007963c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963c2: mov dword ptr [0xa9d3c0], ecx */ W32((u32)(0xa9d3c0u), r_ecx);
    /* 007963c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963ca: mov dword ptr [0xa9d3c4], ecx */ W32((u32)(0xa9d3c4u), r_ecx);
    /* 007963d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963d2: mov dword ptr [0xa9d3c8], ecx */ W32((u32)(0xa9d3c8u), r_ecx);
    /* 007963d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963da: mov dword ptr [0xa9d3d0], ecx */ W32((u32)(0xa9d3d0u), r_ecx);
    /* 007963e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963e2: mov dword ptr [0xa9d3cc], ecx */ W32((u32)(0xa9d3ccu), r_ecx);
    /* 007963e8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963ea: mov dword ptr [0xa9d3dc], ecx */ W32((u32)(0xa9d3dcu), r_ecx);
    /* 007963f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963f2: mov dword ptr [0xa9d3e0], ecx */ W32((u32)(0xa9d3e0u), r_ecx);
    /* 007963f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963fa: mov dword ptr [0xa9d3e4], ecx */ W32((u32)(0xa9d3e4u), r_ecx);
    /* 00796400: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796402: mov dword ptr [0xa9d3e8], ecx */ W32((u32)(0xa9d3e8u), r_ecx);
    /* 00796408: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079640a: mov dword ptr [0xa9d3ec], ecx */ W32((u32)(0xa9d3ecu), r_ecx);
    /* 00796410: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796412: mov dword ptr [0xa9d3f0], ecx */ W32((u32)(0xa9d3f0u), r_ecx);
    /* 00796418: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079641a: mov dword ptr [0xa9d3f4], ecx */ W32((u32)(0xa9d3f4u), r_ecx);
    /* 00796420: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796422: mov dword ptr [0xa9d3fc], ecx */ W32((u32)(0xa9d3fcu), r_ecx);
    /* 00796428: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079642a: mov dword ptr [0xa9d3f8], ecx */ W32((u32)(0xa9d3f8u), r_ecx);
    /* 00796430: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796432: mov dword ptr [0xa9d408], ecx */ W32((u32)(0xa9d408u), r_ecx);
    /* 00796438: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079643a: mov dword ptr [0xa9d40c], ecx */ W32((u32)(0xa9d40cu), r_ecx);
    /* 00796440: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796442: mov dword ptr [0xa9d410], ecx */ W32((u32)(0xa9d410u), r_ecx);
    /* 00796448: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079644a: mov dword ptr [0xa9d414], ecx */ W32((u32)(0xa9d414u), r_ecx);
    /* 00796450: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796452: mov dword ptr [0xa9d418], ecx */ W32((u32)(0xa9d418u), r_ecx);
    /* 00796458: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079645a: mov dword ptr [0xa9d41c], ecx */ W32((u32)(0xa9d41cu), r_ecx);
    /* 00796460: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796462: mov dword ptr [0xa9d420], ecx */ W32((u32)(0xa9d420u), r_ecx);
    /* 00796468: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079646a: mov dword ptr [0xa9d428], ecx */ W32((u32)(0xa9d428u), r_ecx);
    /* 00796470: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796472: mov dword ptr [0xa9d424], ecx */ W32((u32)(0xa9d424u), r_ecx);
    /* 00796478: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079647a: mov dword ptr [0xa9d434], ecx */ W32((u32)(0xa9d434u), r_ecx);
    /* 00796480: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796482: mov dword ptr [0xa9d438], ecx */ W32((u32)(0xa9d438u), r_ecx);
    /* 00796488: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079648a: mov dword ptr [0xa9d43c], ecx */ W32((u32)(0xa9d43cu), r_ecx);
    /* 00796490: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796492: mov dword ptr [0xa9d440], ecx */ W32((u32)(0xa9d440u), r_ecx);
    /* 00796498: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079649a: mov dword ptr [0xa9d444], ecx */ W32((u32)(0xa9d444u), r_ecx);
    /* 007964a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964a2: mov dword ptr [0xa9d448], ecx */ W32((u32)(0xa9d448u), r_ecx);
    /* 007964a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964aa: mov dword ptr [0xa9d44c], ecx */ W32((u32)(0xa9d44cu), r_ecx);
    /* 007964b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964b2: mov dword ptr [0xa9d454], ecx */ W32((u32)(0xa9d454u), r_ecx);
    /* 007964b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964ba: mov dword ptr [0xa9d450], ecx */ W32((u32)(0xa9d450u), r_ecx);
    /* 007964c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964c2: mov dword ptr [0xa9cd80], ecx */ W32((u32)(0xa9cd80u), r_ecx);
    /* 007964c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964ca: mov dword ptr [0xa9cd84], ecx */ W32((u32)(0xa9cd84u), r_ecx);
    /* 007964d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964d2: mov dword ptr [0xa9cd88], ecx */ W32((u32)(0xa9cd88u), r_ecx);
    /* 007964d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964da: mov dword ptr [0xa9cd8c], ecx */ W32((u32)(0xa9cd8cu), r_ecx);
    /* 007964e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964e2: mov dword ptr [0xa9cd90], ecx */ W32((u32)(0xa9cd90u), r_ecx);
    /* 007964e8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964ea: mov dword ptr [0xa9cd94], ecx */ W32((u32)(0xa9cd94u), r_ecx);
    /* 007964f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964f2: mov dword ptr [0xa9cd98], ecx */ W32((u32)(0xa9cd98u), r_ecx);
    /* 007964f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964fa: mov dword ptr [0xa9cda0], ecx */ W32((u32)(0xa9cda0u), r_ecx);
    /* 00796500: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796502: mov dword ptr [0xa9cd9c], ecx */ W32((u32)(0xa9cd9cu), r_ecx);
    /* 00796508: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079650a: mov dword ptr [0xa9cdac], ecx */ W32((u32)(0xa9cdacu), r_ecx);
    /* 00796510: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796512: mov dword ptr [0xa9cdb0], ecx */ W32((u32)(0xa9cdb0u), r_ecx);
    /* 00796518: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079651a: mov dword ptr [0xa9cdb4], ecx */ W32((u32)(0xa9cdb4u), r_ecx);
    /* 00796520: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796522: mov dword ptr [0xa9cdb8], ecx */ W32((u32)(0xa9cdb8u), r_ecx);
    /* 00796528: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079652a: mov dword ptr [0xa9cdbc], ecx */ W32((u32)(0xa9cdbcu), r_ecx);
    /* 00796530: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796532: mov dword ptr [0xa9cdc0], ecx */ W32((u32)(0xa9cdc0u), r_ecx);
    /* 00796538: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079653a: mov dword ptr [0xa9cdc4], ecx */ W32((u32)(0xa9cdc4u), r_ecx);
    /* 00796540: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796542: mov dword ptr [0xa9cdcc], ecx */ W32((u32)(0xa9cdccu), r_ecx);
    /* 00796548: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079654a: mov dword ptr [0xa9cdc8], ecx */ W32((u32)(0xa9cdc8u), r_ecx);
    /* 00796550: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796552: mov dword ptr [0xa9cdd8], ecx */ W32((u32)(0xa9cdd8u), r_ecx);
    /* 00796558: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079655a: mov dword ptr [0xa9cddc], ecx */ W32((u32)(0xa9cddcu), r_ecx);
    /* 00796560: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796562: mov dword ptr [0xa9cde0], ecx */ W32((u32)(0xa9cde0u), r_ecx);
    /* 00796568: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079656a: mov dword ptr [0xa9cde4], ecx */ W32((u32)(0xa9cde4u), r_ecx);
    /* 00796570: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796572: mov dword ptr [0xa9cde8], ecx */ W32((u32)(0xa9cde8u), r_ecx);
    /* 00796578: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079657a: mov dword ptr [0xa9cdec], ecx */ W32((u32)(0xa9cdecu), r_ecx);
    /* 00796580: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796582: mov dword ptr [0xa9cdf0], ecx */ W32((u32)(0xa9cdf0u), r_ecx);
    /* 00796588: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079658a: mov dword ptr [0xa9cdf8], ecx */ W32((u32)(0xa9cdf8u), r_ecx);
    /* 00796590: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796592: mov dword ptr [0xa9cdf4], ecx */ W32((u32)(0xa9cdf4u), r_ecx);
    /* 00796598: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079659a: mov dword ptr [0xa9ce04], ecx */ W32((u32)(0xa9ce04u), r_ecx);
    /* 007965a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965a2: mov dword ptr [0xa9ce08], ecx */ W32((u32)(0xa9ce08u), r_ecx);
    /* 007965a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965aa: mov dword ptr [0xa9ce0c], ecx */ W32((u32)(0xa9ce0cu), r_ecx);
    /* 007965b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965b2: mov dword ptr [0xa9ce10], ecx */ W32((u32)(0xa9ce10u), r_ecx);
    /* 007965b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965ba: mov dword ptr [0xa9ce14], ecx */ W32((u32)(0xa9ce14u), r_ecx);
    /* 007965c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965c2: mov dword ptr [0xa9ce18], ecx */ W32((u32)(0xa9ce18u), r_ecx);
    /* 007965c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965ca: mov dword ptr [0xa9ce1c], ecx */ W32((u32)(0xa9ce1cu), r_ecx);
    /* 007965d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965d2: mov dword ptr [0xa9ce24], ecx */ W32((u32)(0xa9ce24u), r_ecx);
    /* 007965d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965da: mov dword ptr [0xa9ce20], ecx */ W32((u32)(0xa9ce20u), r_ecx);
    /* 007965e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965e2: mov dword ptr [0xa9ce30], ecx */ W32((u32)(0xa9ce30u), r_ecx);
    /* 007965e8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965ea: mov dword ptr [0xa9ce34], ecx */ W32((u32)(0xa9ce34u), r_ecx);
    /* 007965f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965f2: mov dword ptr [0xa9ce38], ecx */ W32((u32)(0xa9ce38u), r_ecx);
    /* 007965f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965fa: mov dword ptr [0xa9ce3c], ecx */ W32((u32)(0xa9ce3cu), r_ecx);
    /* 00796600: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796602: mov dword ptr [0xa9ce40], ecx */ W32((u32)(0xa9ce40u), r_ecx);
    /* 00796608: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079660a: mov dword ptr [0xa9ce44], ecx */ W32((u32)(0xa9ce44u), r_ecx);
    /* 00796610: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796612: mov dword ptr [0xa9ce48], ecx */ W32((u32)(0xa9ce48u), r_ecx);
    /* 00796618: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079661a: mov dword ptr [0xa9ce50], ecx */ W32((u32)(0xa9ce50u), r_ecx);
    /* 00796620: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796622: mov dword ptr [0xa9ce4c], ecx */ W32((u32)(0xa9ce4cu), r_ecx);
    /* 00796628: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079662a: mov dword ptr [0xa9ce5c], ecx */ W32((u32)(0xa9ce5cu), r_ecx);
    /* 00796630: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796632: mov dword ptr [0xa9ce60], ecx */ W32((u32)(0xa9ce60u), r_ecx);
    /* 00796638: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079663a: mov dword ptr [0xa9ce64], ecx */ W32((u32)(0xa9ce64u), r_ecx);
    /* 00796640: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796642: mov dword ptr [0xa9ce68], ecx */ W32((u32)(0xa9ce68u), r_ecx);
    /* 00796648: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079664a: mov dword ptr [0xa9ce6c], ecx */ W32((u32)(0xa9ce6cu), r_ecx);
    /* 00796650: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796652: mov dword ptr [0xa9ce70], ecx */ W32((u32)(0xa9ce70u), r_ecx);
    /* 00796658: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079665a: mov dword ptr [0xa9ce74], ecx */ W32((u32)(0xa9ce74u), r_ecx);
    /* 00796660: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796662: mov dword ptr [0xa9ce7c], ecx */ W32((u32)(0xa9ce7cu), r_ecx);
    /* 00796668: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079666a: mov dword ptr [0xa9ce78], ecx */ W32((u32)(0xa9ce78u), r_ecx);
    /* 00796670: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796672: mov dword ptr [0xa9ce88], ecx */ W32((u32)(0xa9ce88u), r_ecx);
    /* 00796678: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079667a: mov dword ptr [0xa9ce8c], ecx */ W32((u32)(0xa9ce8cu), r_ecx);
    /* 00796680: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796682: mov dword ptr [0xa9ce90], ecx */ W32((u32)(0xa9ce90u), r_ecx);
    /* 00796688: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079668a: mov dword ptr [0xa9ce94], ecx */ W32((u32)(0xa9ce94u), r_ecx);
    /* 00796690: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796692: mov dword ptr [0xa9ce98], ecx */ W32((u32)(0xa9ce98u), r_ecx);
    /* 00796698: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079669a: mov dword ptr [0xa9ce9c], ecx */ W32((u32)(0xa9ce9cu), r_ecx);
    /* 007966a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007966a2: mov dword ptr [0xa9cea0], ecx */ W32((u32)(0xa9cea0u), r_ecx);
    /* 007966a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007966aa: mov dword ptr [0xa9cea8], ecx */ W32((u32)(0xa9cea8u), r_ecx);
    /* 007966b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007966b2: mov dword ptr [0xa9cea4], ecx */ W32((u32)(0xa9cea4u), r_ecx);
    /* 007966b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966ba: mov dword ptr [0xa9ceb4], eax */ W32((u32)(0xa9ceb4u), r_eax);
    /* 007966bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966c1: mov dword ptr [0xa9ceb8], eax */ W32((u32)(0xa9ceb8u), r_eax);
    /* 007966c6: mov dword ptr [0xa9ced8], edx */ W32((u32)(0xa9ced8u), r_edx);
    /* 007966cc: mov dword ptr [0xa9d4dc], edx */ W32((u32)(0xa9d4dcu), r_edx);
    /* 007966d2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966d4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007966d6: mov dword ptr [0xa9cebc], eax */ W32((u32)(0xa9cebcu), r_eax);
    /* 007966db: mov dword ptr [0xa9cec0], ecx */ W32((u32)(0xa9cec0u), r_ecx);
    /* 007966e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966e3: mov dword ptr [0xa9cec4], eax */ W32((u32)(0xa9cec4u), r_eax);
    /* 007966e8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966ea: mov dword ptr [0xa9cec8], eax */ W32((u32)(0xa9cec8u), r_eax);
    /* 007966ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966f1: mov dword ptr [0xa9cecc], eax */ W32((u32)(0xa9ceccu), r_eax);
    /* 007966f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966f8: mov dword ptr [0xa9ced4], eax */ W32((u32)(0xa9ced4u), r_eax);
    /* 007966fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007966ff: mov dword ptr [0xa9ced0], eax */ W32((u32)(0xa9ced0u), r_eax);
    /* 00796704: mov esp, ebp */ r_esp = r_ebp;
    /* 00796706: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00796707: ret  */ FN_RET(0x00796164); r_esp += 4; return;
}

void f_00796175(void)
{
    FN_ENTER(0x00796175);
    /* 00796175: shr byte ptr [ecx - 0x7636cd00], cl */ { u32 ad = (u32)(r_ecx+0x89c93300u); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); W8(ad, r);  } }
    /* 0079617b: or eax, 0xa9d25c */ {  u32 a = r_eax; u32 b = 0xa9d25cu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00796180: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796182: mov dword ptr [0xa9d260], ecx */ W32((u32)(0xa9d260u), r_ecx);
    /* 00796188: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079618a: mov dword ptr [0xa9d264], ecx */ W32((u32)(0xa9d264u), r_ecx);
    /* 00796190: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796192: mov dword ptr [0xa9d268], ecx */ W32((u32)(0xa9d268u), r_ecx);
    /* 00796198: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079619a: mov dword ptr [0xa9d270], ecx */ W32((u32)(0xa9d270u), r_ecx);
    /* 007961a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961a2: mov dword ptr [0xa9d26c], ecx */ W32((u32)(0xa9d26cu), r_ecx);
    /* 007961a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961aa: mov dword ptr [0xa9d27c], ecx */ W32((u32)(0xa9d27cu), r_ecx);
    /* 007961b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961b2: mov dword ptr [0xa9d280], ecx */ W32((u32)(0xa9d280u), r_ecx);
    /* 007961b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961ba: mov dword ptr [0xa9d284], ecx */ W32((u32)(0xa9d284u), r_ecx);
    /* 007961c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961c2: mov dword ptr [0xa9d288], ecx */ W32((u32)(0xa9d288u), r_ecx);
    /* 007961c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961ca: mov dword ptr [0xa9d28c], ecx */ W32((u32)(0xa9d28cu), r_ecx);
    /* 007961d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961d2: mov dword ptr [0xa9d290], ecx */ W32((u32)(0xa9d290u), r_ecx);
    /* 007961d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961da: mov dword ptr [0xa9d294], ecx */ W32((u32)(0xa9d294u), r_ecx);
    /* 007961e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961e2: mov dword ptr [0xa9d29c], ecx */ W32((u32)(0xa9d29cu), r_ecx);
    /* 007961e8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961ea: mov dword ptr [0xa9d298], ecx */ W32((u32)(0xa9d298u), r_ecx);
    /* 007961f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961f2: mov dword ptr [0xa9d2a8], ecx */ W32((u32)(0xa9d2a8u), r_ecx);
    /* 007961f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007961fa: mov dword ptr [0xa9d2ac], ecx */ W32((u32)(0xa9d2acu), r_ecx);
    /* 00796200: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796202: mov dword ptr [0xa9d2b0], ecx */ W32((u32)(0xa9d2b0u), r_ecx);
    /* 00796208: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079620a: mov dword ptr [0xa9d2b4], ecx */ W32((u32)(0xa9d2b4u), r_ecx);
    /* 00796210: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796212: mov dword ptr [0xa9d2b8], ecx */ W32((u32)(0xa9d2b8u), r_ecx);
    /* 00796218: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079621a: mov dword ptr [0xa9d2bc], ecx */ W32((u32)(0xa9d2bcu), r_ecx);
    /* 00796220: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796222: mov dword ptr [0xa9d2c0], ecx */ W32((u32)(0xa9d2c0u), r_ecx);
    /* 00796228: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079622a: mov dword ptr [0xa9d2c8], ecx */ W32((u32)(0xa9d2c8u), r_ecx);
    /* 00796230: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796232: mov dword ptr [0xa9d2c4], ecx */ W32((u32)(0xa9d2c4u), r_ecx);
    /* 00796238: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079623a: mov dword ptr [0xa9d2d4], ecx */ W32((u32)(0xa9d2d4u), r_ecx);
    /* 00796240: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796242: mov dword ptr [0xa9d2d8], ecx */ W32((u32)(0xa9d2d8u), r_ecx);
    /* 00796248: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079624a: mov dword ptr [0xa9d2dc], ecx */ W32((u32)(0xa9d2dcu), r_ecx);
    /* 00796250: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796252: mov dword ptr [0xa9d2e0], ecx */ W32((u32)(0xa9d2e0u), r_ecx);
    /* 00796258: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079625a: mov dword ptr [0xa9d2e4], ecx */ W32((u32)(0xa9d2e4u), r_ecx);
    /* 00796260: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796262: mov dword ptr [0xa9d2e8], ecx */ W32((u32)(0xa9d2e8u), r_ecx);
    /* 00796268: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079626a: mov dword ptr [0xa9d2ec], ecx */ W32((u32)(0xa9d2ecu), r_ecx);
    /* 00796270: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796272: mov dword ptr [0xa9d2f4], ecx */ W32((u32)(0xa9d2f4u), r_ecx);
    /* 00796278: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079627a: mov dword ptr [0xa9d2f0], ecx */ W32((u32)(0xa9d2f0u), r_ecx);
    /* 00796280: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796282: mov dword ptr [0xa9d300], ecx */ W32((u32)(0xa9d300u), r_ecx);
    /* 00796288: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079628a: mov dword ptr [0xa9d304], ecx */ W32((u32)(0xa9d304u), r_ecx);
    /* 00796290: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796292: mov dword ptr [0xa9d308], ecx */ W32((u32)(0xa9d308u), r_ecx);
    /* 00796298: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079629a: mov dword ptr [0xa9d30c], ecx */ W32((u32)(0xa9d30cu), r_ecx);
    /* 007962a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962a2: mov dword ptr [0xa9d310], ecx */ W32((u32)(0xa9d310u), r_ecx);
    /* 007962a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962aa: mov dword ptr [0xa9d314], ecx */ W32((u32)(0xa9d314u), r_ecx);
    /* 007962b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962b2: mov dword ptr [0xa9d318], ecx */ W32((u32)(0xa9d318u), r_ecx);
    /* 007962b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962ba: mov dword ptr [0xa9d320], ecx */ W32((u32)(0xa9d320u), r_ecx);
    /* 007962c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962c2: mov dword ptr [0xa9d31c], ecx */ W32((u32)(0xa9d31cu), r_ecx);
    /* 007962c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962ca: mov dword ptr [0xa9d32c], ecx */ W32((u32)(0xa9d32cu), r_ecx);
    /* 007962d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962d2: mov dword ptr [0xa9d330], ecx */ W32((u32)(0xa9d330u), r_ecx);
    /* 007962d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962da: mov dword ptr [0xa9d334], ecx */ W32((u32)(0xa9d334u), r_ecx);
    /* 007962e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962e2: mov dword ptr [0xa9d338], ecx */ W32((u32)(0xa9d338u), r_ecx);
    /* 007962e8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962ea: mov dword ptr [0xa9d33c], ecx */ W32((u32)(0xa9d33cu), r_ecx);
    /* 007962f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962f2: mov dword ptr [0xa9d340], ecx */ W32((u32)(0xa9d340u), r_ecx);
    /* 007962f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007962fa: mov dword ptr [0xa9d344], ecx */ W32((u32)(0xa9d344u), r_ecx);
    /* 00796300: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796302: mov dword ptr [0xa9d34c], ecx */ W32((u32)(0xa9d34cu), r_ecx);
    /* 00796308: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079630a: mov dword ptr [0xa9d348], ecx */ W32((u32)(0xa9d348u), r_ecx);
    /* 00796310: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796312: mov dword ptr [0xa9d358], ecx */ W32((u32)(0xa9d358u), r_ecx);
    /* 00796318: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079631a: mov dword ptr [0xa9d35c], ecx */ W32((u32)(0xa9d35cu), r_ecx);
    /* 00796320: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796322: mov dword ptr [0xa9d360], ecx */ W32((u32)(0xa9d360u), r_ecx);
    /* 00796328: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079632a: mov dword ptr [0xa9d364], ecx */ W32((u32)(0xa9d364u), r_ecx);
    /* 00796330: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796332: mov dword ptr [0xa9d368], ecx */ W32((u32)(0xa9d368u), r_ecx);
    /* 00796338: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079633a: mov dword ptr [0xa9d36c], ecx */ W32((u32)(0xa9d36cu), r_ecx);
    /* 00796340: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796342: mov dword ptr [0xa9d370], ecx */ W32((u32)(0xa9d370u), r_ecx);
    /* 00796348: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079634a: mov dword ptr [0xa9d378], ecx */ W32((u32)(0xa9d378u), r_ecx);
    /* 00796350: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796352: mov dword ptr [0xa9d374], ecx */ W32((u32)(0xa9d374u), r_ecx);
    /* 00796358: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079635a: mov dword ptr [0xa9d384], ecx */ W32((u32)(0xa9d384u), r_ecx);
    /* 00796360: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796362: mov dword ptr [0xa9d388], ecx */ W32((u32)(0xa9d388u), r_ecx);
    /* 00796368: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079636a: mov dword ptr [0xa9d38c], ecx */ W32((u32)(0xa9d38cu), r_ecx);
    /* 00796370: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796372: mov dword ptr [0xa9d390], ecx */ W32((u32)(0xa9d390u), r_ecx);
    /* 00796378: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079637a: mov dword ptr [0xa9d394], ecx */ W32((u32)(0xa9d394u), r_ecx);
    /* 00796380: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796382: mov dword ptr [0xa9d398], ecx */ W32((u32)(0xa9d398u), r_ecx);
    /* 00796388: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079638a: mov dword ptr [0xa9d39c], ecx */ W32((u32)(0xa9d39cu), r_ecx);
    /* 00796390: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796392: mov dword ptr [0xa9d3a4], ecx */ W32((u32)(0xa9d3a4u), r_ecx);
    /* 00796398: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079639a: mov dword ptr [0xa9d3a0], ecx */ W32((u32)(0xa9d3a0u), r_ecx);
    /* 007963a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963a2: mov dword ptr [0xa9d3b0], ecx */ W32((u32)(0xa9d3b0u), r_ecx);
    /* 007963a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963aa: mov dword ptr [0xa9d3b4], ecx */ W32((u32)(0xa9d3b4u), r_ecx);
    /* 007963b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963b2: mov dword ptr [0xa9d3b8], ecx */ W32((u32)(0xa9d3b8u), r_ecx);
    /* 007963b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963ba: mov dword ptr [0xa9d3bc], ecx */ W32((u32)(0xa9d3bcu), r_ecx);
    /* 007963c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963c2: mov dword ptr [0xa9d3c0], ecx */ W32((u32)(0xa9d3c0u), r_ecx);
    /* 007963c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963ca: mov dword ptr [0xa9d3c4], ecx */ W32((u32)(0xa9d3c4u), r_ecx);
    /* 007963d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963d2: mov dword ptr [0xa9d3c8], ecx */ W32((u32)(0xa9d3c8u), r_ecx);
    /* 007963d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963da: mov dword ptr [0xa9d3d0], ecx */ W32((u32)(0xa9d3d0u), r_ecx);
    /* 007963e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963e2: mov dword ptr [0xa9d3cc], ecx */ W32((u32)(0xa9d3ccu), r_ecx);
    /* 007963e8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963ea: mov dword ptr [0xa9d3dc], ecx */ W32((u32)(0xa9d3dcu), r_ecx);
    /* 007963f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963f2: mov dword ptr [0xa9d3e0], ecx */ W32((u32)(0xa9d3e0u), r_ecx);
    /* 007963f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963fa: mov dword ptr [0xa9d3e4], ecx */ W32((u32)(0xa9d3e4u), r_ecx);
    /* 00796400: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796402: mov dword ptr [0xa9d3e8], ecx */ W32((u32)(0xa9d3e8u), r_ecx);
    /* 00796408: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079640a: mov dword ptr [0xa9d3ec], ecx */ W32((u32)(0xa9d3ecu), r_ecx);
    /* 00796410: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796412: mov dword ptr [0xa9d3f0], ecx */ W32((u32)(0xa9d3f0u), r_ecx);
    /* 00796418: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079641a: mov dword ptr [0xa9d3f4], ecx */ W32((u32)(0xa9d3f4u), r_ecx);
    /* 00796420: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796422: mov dword ptr [0xa9d3fc], ecx */ W32((u32)(0xa9d3fcu), r_ecx);
    /* 00796428: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079642a: mov dword ptr [0xa9d3f8], ecx */ W32((u32)(0xa9d3f8u), r_ecx);
    /* 00796430: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796432: mov dword ptr [0xa9d408], ecx */ W32((u32)(0xa9d408u), r_ecx);
    /* 00796438: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079643a: mov dword ptr [0xa9d40c], ecx */ W32((u32)(0xa9d40cu), r_ecx);
    /* 00796440: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796442: mov dword ptr [0xa9d410], ecx */ W32((u32)(0xa9d410u), r_ecx);
    /* 00796448: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079644a: mov dword ptr [0xa9d414], ecx */ W32((u32)(0xa9d414u), r_ecx);
    /* 00796450: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796452: mov dword ptr [0xa9d418], ecx */ W32((u32)(0xa9d418u), r_ecx);
    /* 00796458: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079645a: mov dword ptr [0xa9d41c], ecx */ W32((u32)(0xa9d41cu), r_ecx);
    /* 00796460: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796462: mov dword ptr [0xa9d420], ecx */ W32((u32)(0xa9d420u), r_ecx);
    /* 00796468: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079646a: mov dword ptr [0xa9d428], ecx */ W32((u32)(0xa9d428u), r_ecx);
    /* 00796470: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796472: mov dword ptr [0xa9d424], ecx */ W32((u32)(0xa9d424u), r_ecx);
    /* 00796478: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079647a: mov dword ptr [0xa9d434], ecx */ W32((u32)(0xa9d434u), r_ecx);
    /* 00796480: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796482: mov dword ptr [0xa9d438], ecx */ W32((u32)(0xa9d438u), r_ecx);
    /* 00796488: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079648a: mov dword ptr [0xa9d43c], ecx */ W32((u32)(0xa9d43cu), r_ecx);
    /* 00796490: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796492: mov dword ptr [0xa9d440], ecx */ W32((u32)(0xa9d440u), r_ecx);
    /* 00796498: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079649a: mov dword ptr [0xa9d444], ecx */ W32((u32)(0xa9d444u), r_ecx);
    /* 007964a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964a2: mov dword ptr [0xa9d448], ecx */ W32((u32)(0xa9d448u), r_ecx);
    /* 007964a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964aa: mov dword ptr [0xa9d44c], ecx */ W32((u32)(0xa9d44cu), r_ecx);
    /* 007964b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964b2: mov dword ptr [0xa9d454], ecx */ W32((u32)(0xa9d454u), r_ecx);
    /* 007964b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964ba: mov dword ptr [0xa9d450], ecx */ W32((u32)(0xa9d450u), r_ecx);
    /* 007964c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964c2: mov dword ptr [0xa9cd80], ecx */ W32((u32)(0xa9cd80u), r_ecx);
    /* 007964c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964ca: mov dword ptr [0xa9cd84], ecx */ W32((u32)(0xa9cd84u), r_ecx);
    /* 007964d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964d2: mov dword ptr [0xa9cd88], ecx */ W32((u32)(0xa9cd88u), r_ecx);
    /* 007964d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964da: mov dword ptr [0xa9cd8c], ecx */ W32((u32)(0xa9cd8cu), r_ecx);
    /* 007964e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964e2: mov dword ptr [0xa9cd90], ecx */ W32((u32)(0xa9cd90u), r_ecx);
    /* 007964e8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964ea: mov dword ptr [0xa9cd94], ecx */ W32((u32)(0xa9cd94u), r_ecx);
    /* 007964f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964f2: mov dword ptr [0xa9cd98], ecx */ W32((u32)(0xa9cd98u), r_ecx);
    /* 007964f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964fa: mov dword ptr [0xa9cda0], ecx */ W32((u32)(0xa9cda0u), r_ecx);
    /* 00796500: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796502: mov dword ptr [0xa9cd9c], ecx */ W32((u32)(0xa9cd9cu), r_ecx);
    /* 00796508: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079650a: mov dword ptr [0xa9cdac], ecx */ W32((u32)(0xa9cdacu), r_ecx);
    /* 00796510: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796512: mov dword ptr [0xa9cdb0], ecx */ W32((u32)(0xa9cdb0u), r_ecx);
    /* 00796518: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079651a: mov dword ptr [0xa9cdb4], ecx */ W32((u32)(0xa9cdb4u), r_ecx);
    /* 00796520: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796522: mov dword ptr [0xa9cdb8], ecx */ W32((u32)(0xa9cdb8u), r_ecx);
    /* 00796528: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079652a: mov dword ptr [0xa9cdbc], ecx */ W32((u32)(0xa9cdbcu), r_ecx);
    /* 00796530: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796532: mov dword ptr [0xa9cdc0], ecx */ W32((u32)(0xa9cdc0u), r_ecx);
    /* 00796538: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079653a: mov dword ptr [0xa9cdc4], ecx */ W32((u32)(0xa9cdc4u), r_ecx);
    /* 00796540: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796542: mov dword ptr [0xa9cdcc], ecx */ W32((u32)(0xa9cdccu), r_ecx);
    /* 00796548: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079654a: mov dword ptr [0xa9cdc8], ecx */ W32((u32)(0xa9cdc8u), r_ecx);
    /* 00796550: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796552: mov dword ptr [0xa9cdd8], ecx */ W32((u32)(0xa9cdd8u), r_ecx);
    /* 00796558: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079655a: mov dword ptr [0xa9cddc], ecx */ W32((u32)(0xa9cddcu), r_ecx);
    /* 00796560: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796562: mov dword ptr [0xa9cde0], ecx */ W32((u32)(0xa9cde0u), r_ecx);
    /* 00796568: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079656a: mov dword ptr [0xa9cde4], ecx */ W32((u32)(0xa9cde4u), r_ecx);
    /* 00796570: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796572: mov dword ptr [0xa9cde8], ecx */ W32((u32)(0xa9cde8u), r_ecx);
    /* 00796578: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079657a: mov dword ptr [0xa9cdec], ecx */ W32((u32)(0xa9cdecu), r_ecx);
    /* 00796580: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796582: mov dword ptr [0xa9cdf0], ecx */ W32((u32)(0xa9cdf0u), r_ecx);
    /* 00796588: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079658a: mov dword ptr [0xa9cdf8], ecx */ W32((u32)(0xa9cdf8u), r_ecx);
    /* 00796590: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796592: mov dword ptr [0xa9cdf4], ecx */ W32((u32)(0xa9cdf4u), r_ecx);
    /* 00796598: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079659a: mov dword ptr [0xa9ce04], ecx */ W32((u32)(0xa9ce04u), r_ecx);
    /* 007965a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965a2: mov dword ptr [0xa9ce08], ecx */ W32((u32)(0xa9ce08u), r_ecx);
    /* 007965a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965aa: mov dword ptr [0xa9ce0c], ecx */ W32((u32)(0xa9ce0cu), r_ecx);
    /* 007965b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965b2: mov dword ptr [0xa9ce10], ecx */ W32((u32)(0xa9ce10u), r_ecx);
    /* 007965b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965ba: mov dword ptr [0xa9ce14], ecx */ W32((u32)(0xa9ce14u), r_ecx);
    /* 007965c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965c2: mov dword ptr [0xa9ce18], ecx */ W32((u32)(0xa9ce18u), r_ecx);
    /* 007965c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965ca: mov dword ptr [0xa9ce1c], ecx */ W32((u32)(0xa9ce1cu), r_ecx);
    /* 007965d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965d2: mov dword ptr [0xa9ce24], ecx */ W32((u32)(0xa9ce24u), r_ecx);
    /* 007965d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965da: mov dword ptr [0xa9ce20], ecx */ W32((u32)(0xa9ce20u), r_ecx);
    /* 007965e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965e2: mov dword ptr [0xa9ce30], ecx */ W32((u32)(0xa9ce30u), r_ecx);
    /* 007965e8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965ea: mov dword ptr [0xa9ce34], ecx */ W32((u32)(0xa9ce34u), r_ecx);
    /* 007965f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965f2: mov dword ptr [0xa9ce38], ecx */ W32((u32)(0xa9ce38u), r_ecx);
    /* 007965f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965fa: mov dword ptr [0xa9ce3c], ecx */ W32((u32)(0xa9ce3cu), r_ecx);
    /* 00796600: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796602: mov dword ptr [0xa9ce40], ecx */ W32((u32)(0xa9ce40u), r_ecx);
    /* 00796608: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079660a: mov dword ptr [0xa9ce44], ecx */ W32((u32)(0xa9ce44u), r_ecx);
    /* 00796610: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796612: mov dword ptr [0xa9ce48], ecx */ W32((u32)(0xa9ce48u), r_ecx);
    /* 00796618: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079661a: mov dword ptr [0xa9ce50], ecx */ W32((u32)(0xa9ce50u), r_ecx);
    /* 00796620: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796622: mov dword ptr [0xa9ce4c], ecx */ W32((u32)(0xa9ce4cu), r_ecx);
    /* 00796628: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079662a: mov dword ptr [0xa9ce5c], ecx */ W32((u32)(0xa9ce5cu), r_ecx);
    /* 00796630: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796632: mov dword ptr [0xa9ce60], ecx */ W32((u32)(0xa9ce60u), r_ecx);
    /* 00796638: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079663a: mov dword ptr [0xa9ce64], ecx */ W32((u32)(0xa9ce64u), r_ecx);
    /* 00796640: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796642: mov dword ptr [0xa9ce68], ecx */ W32((u32)(0xa9ce68u), r_ecx);
    /* 00796648: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079664a: mov dword ptr [0xa9ce6c], ecx */ W32((u32)(0xa9ce6cu), r_ecx);
    /* 00796650: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796652: mov dword ptr [0xa9ce70], ecx */ W32((u32)(0xa9ce70u), r_ecx);
    /* 00796658: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079665a: mov dword ptr [0xa9ce74], ecx */ W32((u32)(0xa9ce74u), r_ecx);
    /* 00796660: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796662: mov dword ptr [0xa9ce7c], ecx */ W32((u32)(0xa9ce7cu), r_ecx);
    /* 00796668: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079666a: mov dword ptr [0xa9ce78], ecx */ W32((u32)(0xa9ce78u), r_ecx);
    /* 00796670: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796672: mov dword ptr [0xa9ce88], ecx */ W32((u32)(0xa9ce88u), r_ecx);
    /* 00796678: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079667a: mov dword ptr [0xa9ce8c], ecx */ W32((u32)(0xa9ce8cu), r_ecx);
    /* 00796680: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796682: mov dword ptr [0xa9ce90], ecx */ W32((u32)(0xa9ce90u), r_ecx);
    /* 00796688: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079668a: mov dword ptr [0xa9ce94], ecx */ W32((u32)(0xa9ce94u), r_ecx);
    /* 00796690: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796692: mov dword ptr [0xa9ce98], ecx */ W32((u32)(0xa9ce98u), r_ecx);
    /* 00796698: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079669a: mov dword ptr [0xa9ce9c], ecx */ W32((u32)(0xa9ce9cu), r_ecx);
    /* 007966a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007966a2: mov dword ptr [0xa9cea0], ecx */ W32((u32)(0xa9cea0u), r_ecx);
    /* 007966a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007966aa: mov dword ptr [0xa9cea8], ecx */ W32((u32)(0xa9cea8u), r_ecx);
    /* 007966b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007966b2: mov dword ptr [0xa9cea4], ecx */ W32((u32)(0xa9cea4u), r_ecx);
    /* 007966b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966ba: mov dword ptr [0xa9ceb4], eax */ W32((u32)(0xa9ceb4u), r_eax);
    /* 007966bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966c1: mov dword ptr [0xa9ceb8], eax */ W32((u32)(0xa9ceb8u), r_eax);
    /* 007966c6: mov dword ptr [0xa9ced8], edx */ W32((u32)(0xa9ced8u), r_edx);
    /* 007966cc: mov dword ptr [0xa9d4dc], edx */ W32((u32)(0xa9d4dcu), r_edx);
    /* 007966d2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966d4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007966d6: mov dword ptr [0xa9cebc], eax */ W32((u32)(0xa9cebcu), r_eax);
    /* 007966db: mov dword ptr [0xa9cec0], ecx */ W32((u32)(0xa9cec0u), r_ecx);
    /* 007966e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966e3: mov dword ptr [0xa9cec4], eax */ W32((u32)(0xa9cec4u), r_eax);
    /* 007966e8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966ea: mov dword ptr [0xa9cec8], eax */ W32((u32)(0xa9cec8u), r_eax);
    /* 007966ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966f1: mov dword ptr [0xa9cecc], eax */ W32((u32)(0xa9ceccu), r_eax);
    /* 007966f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966f8: mov dword ptr [0xa9ced4], eax */ W32((u32)(0xa9ced4u), r_eax);
    /* 007966fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007966ff: mov dword ptr [0xa9ced0], eax */ W32((u32)(0xa9ced0u), r_eax);
    /* 00796704: mov esp, ebp */ r_esp = r_ebp;
    /* 00796706: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00796707: ret  */ FN_RET(0x00796175); r_esp += 4; return;
}

void f_0079636e(void)
{
    FN_ENTER(0x0079636e);
    /* 0079636e: test eax, 0x89c93300 */ {  u32 a = r_eax; u32 b = 0x89c93300u; u32 r = (a & b) & 0xffffffffu;   }
    /* 00796373: or eax, 0xa9d390 */ {  u32 a = r_eax; u32 b = 0xa9d390u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00796378: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079637a: mov dword ptr [0xa9d394], ecx */ W32((u32)(0xa9d394u), r_ecx);
    /* 00796380: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796382: mov dword ptr [0xa9d398], ecx */ W32((u32)(0xa9d398u), r_ecx);
    /* 00796388: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079638a: mov dword ptr [0xa9d39c], ecx */ W32((u32)(0xa9d39cu), r_ecx);
    /* 00796390: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796392: mov dword ptr [0xa9d3a4], ecx */ W32((u32)(0xa9d3a4u), r_ecx);
    /* 00796398: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079639a: mov dword ptr [0xa9d3a0], ecx */ W32((u32)(0xa9d3a0u), r_ecx);
    /* 007963a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963a2: mov dword ptr [0xa9d3b0], ecx */ W32((u32)(0xa9d3b0u), r_ecx);
    /* 007963a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963aa: mov dword ptr [0xa9d3b4], ecx */ W32((u32)(0xa9d3b4u), r_ecx);
    /* 007963b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963b2: mov dword ptr [0xa9d3b8], ecx */ W32((u32)(0xa9d3b8u), r_ecx);
    /* 007963b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963ba: mov dword ptr [0xa9d3bc], ecx */ W32((u32)(0xa9d3bcu), r_ecx);
    /* 007963c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963c2: mov dword ptr [0xa9d3c0], ecx */ W32((u32)(0xa9d3c0u), r_ecx);
    /* 007963c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963ca: mov dword ptr [0xa9d3c4], ecx */ W32((u32)(0xa9d3c4u), r_ecx);
    /* 007963d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963d2: mov dword ptr [0xa9d3c8], ecx */ W32((u32)(0xa9d3c8u), r_ecx);
    /* 007963d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963da: mov dword ptr [0xa9d3d0], ecx */ W32((u32)(0xa9d3d0u), r_ecx);
    /* 007963e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963e2: mov dword ptr [0xa9d3cc], ecx */ W32((u32)(0xa9d3ccu), r_ecx);
    /* 007963e8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963ea: mov dword ptr [0xa9d3dc], ecx */ W32((u32)(0xa9d3dcu), r_ecx);
    /* 007963f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963f2: mov dword ptr [0xa9d3e0], ecx */ W32((u32)(0xa9d3e0u), r_ecx);
    /* 007963f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007963fa: mov dword ptr [0xa9d3e4], ecx */ W32((u32)(0xa9d3e4u), r_ecx);
    /* 00796400: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796402: mov dword ptr [0xa9d3e8], ecx */ W32((u32)(0xa9d3e8u), r_ecx);
    /* 00796408: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079640a: mov dword ptr [0xa9d3ec], ecx */ W32((u32)(0xa9d3ecu), r_ecx);
    /* 00796410: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796412: mov dword ptr [0xa9d3f0], ecx */ W32((u32)(0xa9d3f0u), r_ecx);
    /* 00796418: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079641a: mov dword ptr [0xa9d3f4], ecx */ W32((u32)(0xa9d3f4u), r_ecx);
    /* 00796420: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796422: mov dword ptr [0xa9d3fc], ecx */ W32((u32)(0xa9d3fcu), r_ecx);
    /* 00796428: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079642a: mov dword ptr [0xa9d3f8], ecx */ W32((u32)(0xa9d3f8u), r_ecx);
    /* 00796430: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796432: mov dword ptr [0xa9d408], ecx */ W32((u32)(0xa9d408u), r_ecx);
    /* 00796438: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079643a: mov dword ptr [0xa9d40c], ecx */ W32((u32)(0xa9d40cu), r_ecx);
    /* 00796440: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796442: mov dword ptr [0xa9d410], ecx */ W32((u32)(0xa9d410u), r_ecx);
    /* 00796448: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079644a: mov dword ptr [0xa9d414], ecx */ W32((u32)(0xa9d414u), r_ecx);
    /* 00796450: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796452: mov dword ptr [0xa9d418], ecx */ W32((u32)(0xa9d418u), r_ecx);
    /* 00796458: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079645a: mov dword ptr [0xa9d41c], ecx */ W32((u32)(0xa9d41cu), r_ecx);
    /* 00796460: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796462: mov dword ptr [0xa9d420], ecx */ W32((u32)(0xa9d420u), r_ecx);
    /* 00796468: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079646a: mov dword ptr [0xa9d428], ecx */ W32((u32)(0xa9d428u), r_ecx);
    /* 00796470: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796472: mov dword ptr [0xa9d424], ecx */ W32((u32)(0xa9d424u), r_ecx);
    /* 00796478: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079647a: mov dword ptr [0xa9d434], ecx */ W32((u32)(0xa9d434u), r_ecx);
    /* 00796480: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796482: mov dword ptr [0xa9d438], ecx */ W32((u32)(0xa9d438u), r_ecx);
    /* 00796488: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079648a: mov dword ptr [0xa9d43c], ecx */ W32((u32)(0xa9d43cu), r_ecx);
    /* 00796490: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796492: mov dword ptr [0xa9d440], ecx */ W32((u32)(0xa9d440u), r_ecx);
    /* 00796498: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079649a: mov dword ptr [0xa9d444], ecx */ W32((u32)(0xa9d444u), r_ecx);
    /* 007964a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964a2: mov dword ptr [0xa9d448], ecx */ W32((u32)(0xa9d448u), r_ecx);
    /* 007964a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964aa: mov dword ptr [0xa9d44c], ecx */ W32((u32)(0xa9d44cu), r_ecx);
    /* 007964b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964b2: mov dword ptr [0xa9d454], ecx */ W32((u32)(0xa9d454u), r_ecx);
    /* 007964b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964ba: mov dword ptr [0xa9d450], ecx */ W32((u32)(0xa9d450u), r_ecx);
    /* 007964c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964c2: mov dword ptr [0xa9cd80], ecx */ W32((u32)(0xa9cd80u), r_ecx);
    /* 007964c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964ca: mov dword ptr [0xa9cd84], ecx */ W32((u32)(0xa9cd84u), r_ecx);
    /* 007964d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964d2: mov dword ptr [0xa9cd88], ecx */ W32((u32)(0xa9cd88u), r_ecx);
    /* 007964d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964da: mov dword ptr [0xa9cd8c], ecx */ W32((u32)(0xa9cd8cu), r_ecx);
    /* 007964e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964e2: mov dword ptr [0xa9cd90], ecx */ W32((u32)(0xa9cd90u), r_ecx);
    /* 007964e8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964ea: mov dword ptr [0xa9cd94], ecx */ W32((u32)(0xa9cd94u), r_ecx);
    /* 007964f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964f2: mov dword ptr [0xa9cd98], ecx */ W32((u32)(0xa9cd98u), r_ecx);
    /* 007964f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964fa: mov dword ptr [0xa9cda0], ecx */ W32((u32)(0xa9cda0u), r_ecx);
    /* 00796500: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796502: mov dword ptr [0xa9cd9c], ecx */ W32((u32)(0xa9cd9cu), r_ecx);
    /* 00796508: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079650a: mov dword ptr [0xa9cdac], ecx */ W32((u32)(0xa9cdacu), r_ecx);
    /* 00796510: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796512: mov dword ptr [0xa9cdb0], ecx */ W32((u32)(0xa9cdb0u), r_ecx);
    /* 00796518: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079651a: mov dword ptr [0xa9cdb4], ecx */ W32((u32)(0xa9cdb4u), r_ecx);
    /* 00796520: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796522: mov dword ptr [0xa9cdb8], ecx */ W32((u32)(0xa9cdb8u), r_ecx);
    /* 00796528: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079652a: mov dword ptr [0xa9cdbc], ecx */ W32((u32)(0xa9cdbcu), r_ecx);
    /* 00796530: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796532: mov dword ptr [0xa9cdc0], ecx */ W32((u32)(0xa9cdc0u), r_ecx);
    /* 00796538: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079653a: mov dword ptr [0xa9cdc4], ecx */ W32((u32)(0xa9cdc4u), r_ecx);
    /* 00796540: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796542: mov dword ptr [0xa9cdcc], ecx */ W32((u32)(0xa9cdccu), r_ecx);
    /* 00796548: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079654a: mov dword ptr [0xa9cdc8], ecx */ W32((u32)(0xa9cdc8u), r_ecx);
    /* 00796550: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796552: mov dword ptr [0xa9cdd8], ecx */ W32((u32)(0xa9cdd8u), r_ecx);
    /* 00796558: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079655a: mov dword ptr [0xa9cddc], ecx */ W32((u32)(0xa9cddcu), r_ecx);
    /* 00796560: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796562: mov dword ptr [0xa9cde0], ecx */ W32((u32)(0xa9cde0u), r_ecx);
    /* 00796568: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079656a: mov dword ptr [0xa9cde4], ecx */ W32((u32)(0xa9cde4u), r_ecx);
    /* 00796570: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796572: mov dword ptr [0xa9cde8], ecx */ W32((u32)(0xa9cde8u), r_ecx);
    /* 00796578: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079657a: mov dword ptr [0xa9cdec], ecx */ W32((u32)(0xa9cdecu), r_ecx);
    /* 00796580: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796582: mov dword ptr [0xa9cdf0], ecx */ W32((u32)(0xa9cdf0u), r_ecx);
    /* 00796588: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079658a: mov dword ptr [0xa9cdf8], ecx */ W32((u32)(0xa9cdf8u), r_ecx);
    /* 00796590: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796592: mov dword ptr [0xa9cdf4], ecx */ W32((u32)(0xa9cdf4u), r_ecx);
    /* 00796598: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079659a: mov dword ptr [0xa9ce04], ecx */ W32((u32)(0xa9ce04u), r_ecx);
    /* 007965a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965a2: mov dword ptr [0xa9ce08], ecx */ W32((u32)(0xa9ce08u), r_ecx);
    /* 007965a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965aa: mov dword ptr [0xa9ce0c], ecx */ W32((u32)(0xa9ce0cu), r_ecx);
    /* 007965b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965b2: mov dword ptr [0xa9ce10], ecx */ W32((u32)(0xa9ce10u), r_ecx);
    /* 007965b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965ba: mov dword ptr [0xa9ce14], ecx */ W32((u32)(0xa9ce14u), r_ecx);
    /* 007965c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965c2: mov dword ptr [0xa9ce18], ecx */ W32((u32)(0xa9ce18u), r_ecx);
    /* 007965c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965ca: mov dword ptr [0xa9ce1c], ecx */ W32((u32)(0xa9ce1cu), r_ecx);
    /* 007965d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965d2: mov dword ptr [0xa9ce24], ecx */ W32((u32)(0xa9ce24u), r_ecx);
    /* 007965d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965da: mov dword ptr [0xa9ce20], ecx */ W32((u32)(0xa9ce20u), r_ecx);
    /* 007965e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965e2: mov dword ptr [0xa9ce30], ecx */ W32((u32)(0xa9ce30u), r_ecx);
    /* 007965e8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965ea: mov dword ptr [0xa9ce34], ecx */ W32((u32)(0xa9ce34u), r_ecx);
    /* 007965f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965f2: mov dword ptr [0xa9ce38], ecx */ W32((u32)(0xa9ce38u), r_ecx);
    /* 007965f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965fa: mov dword ptr [0xa9ce3c], ecx */ W32((u32)(0xa9ce3cu), r_ecx);
    /* 00796600: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796602: mov dword ptr [0xa9ce40], ecx */ W32((u32)(0xa9ce40u), r_ecx);
    /* 00796608: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079660a: mov dword ptr [0xa9ce44], ecx */ W32((u32)(0xa9ce44u), r_ecx);
    /* 00796610: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796612: mov dword ptr [0xa9ce48], ecx */ W32((u32)(0xa9ce48u), r_ecx);
    /* 00796618: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079661a: mov dword ptr [0xa9ce50], ecx */ W32((u32)(0xa9ce50u), r_ecx);
    /* 00796620: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796622: mov dword ptr [0xa9ce4c], ecx */ W32((u32)(0xa9ce4cu), r_ecx);
    /* 00796628: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079662a: mov dword ptr [0xa9ce5c], ecx */ W32((u32)(0xa9ce5cu), r_ecx);
    /* 00796630: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796632: mov dword ptr [0xa9ce60], ecx */ W32((u32)(0xa9ce60u), r_ecx);
    /* 00796638: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079663a: mov dword ptr [0xa9ce64], ecx */ W32((u32)(0xa9ce64u), r_ecx);
    /* 00796640: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796642: mov dword ptr [0xa9ce68], ecx */ W32((u32)(0xa9ce68u), r_ecx);
    /* 00796648: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079664a: mov dword ptr [0xa9ce6c], ecx */ W32((u32)(0xa9ce6cu), r_ecx);
    /* 00796650: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796652: mov dword ptr [0xa9ce70], ecx */ W32((u32)(0xa9ce70u), r_ecx);
    /* 00796658: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079665a: mov dword ptr [0xa9ce74], ecx */ W32((u32)(0xa9ce74u), r_ecx);
    /* 00796660: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796662: mov dword ptr [0xa9ce7c], ecx */ W32((u32)(0xa9ce7cu), r_ecx);
    /* 00796668: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079666a: mov dword ptr [0xa9ce78], ecx */ W32((u32)(0xa9ce78u), r_ecx);
    /* 00796670: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796672: mov dword ptr [0xa9ce88], ecx */ W32((u32)(0xa9ce88u), r_ecx);
    /* 00796678: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079667a: mov dword ptr [0xa9ce8c], ecx */ W32((u32)(0xa9ce8cu), r_ecx);
    /* 00796680: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796682: mov dword ptr [0xa9ce90], ecx */ W32((u32)(0xa9ce90u), r_ecx);
    /* 00796688: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079668a: mov dword ptr [0xa9ce94], ecx */ W32((u32)(0xa9ce94u), r_ecx);
    /* 00796690: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796692: mov dword ptr [0xa9ce98], ecx */ W32((u32)(0xa9ce98u), r_ecx);
    /* 00796698: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079669a: mov dword ptr [0xa9ce9c], ecx */ W32((u32)(0xa9ce9cu), r_ecx);
    /* 007966a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007966a2: mov dword ptr [0xa9cea0], ecx */ W32((u32)(0xa9cea0u), r_ecx);
    /* 007966a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007966aa: mov dword ptr [0xa9cea8], ecx */ W32((u32)(0xa9cea8u), r_ecx);
    /* 007966b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007966b2: mov dword ptr [0xa9cea4], ecx */ W32((u32)(0xa9cea4u), r_ecx);
    /* 007966b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966ba: mov dword ptr [0xa9ceb4], eax */ W32((u32)(0xa9ceb4u), r_eax);
    /* 007966bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966c1: mov dword ptr [0xa9ceb8], eax */ W32((u32)(0xa9ceb8u), r_eax);
    /* 007966c6: mov dword ptr [0xa9ced8], edx */ W32((u32)(0xa9ced8u), r_edx);
    /* 007966cc: mov dword ptr [0xa9d4dc], edx */ W32((u32)(0xa9d4dcu), r_edx);
    /* 007966d2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966d4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007966d6: mov dword ptr [0xa9cebc], eax */ W32((u32)(0xa9cebcu), r_eax);
    /* 007966db: mov dword ptr [0xa9cec0], ecx */ W32((u32)(0xa9cec0u), r_ecx);
    /* 007966e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966e3: mov dword ptr [0xa9cec4], eax */ W32((u32)(0xa9cec4u), r_eax);
    /* 007966e8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966ea: mov dword ptr [0xa9cec8], eax */ W32((u32)(0xa9cec8u), r_eax);
    /* 007966ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966f1: mov dword ptr [0xa9cecc], eax */ W32((u32)(0xa9ceccu), r_eax);
    /* 007966f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966f8: mov dword ptr [0xa9ced4], eax */ W32((u32)(0xa9ced4u), r_eax);
    /* 007966fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007966ff: mov dword ptr [0xa9ced0], eax */ W32((u32)(0xa9ced0u), r_eax);
    /* 00796704: mov esp, ebp */ r_esp = r_ebp;
    /* 00796706: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00796707: ret  */ FN_RET(0x0079636e); r_esp += 4; return;
}

void f_00796461(void)
{
    FN_ENTER(0x00796461);
    /* 00796461: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00796462: mov dword ptr [0xa9d420], ecx */ W32((u32)(0xa9d420u), r_ecx);
    /* 00796468: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079646a: mov dword ptr [0xa9d428], ecx */ W32((u32)(0xa9d428u), r_ecx);
    /* 00796470: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796472: mov dword ptr [0xa9d424], ecx */ W32((u32)(0xa9d424u), r_ecx);
    /* 00796478: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079647a: mov dword ptr [0xa9d434], ecx */ W32((u32)(0xa9d434u), r_ecx);
    /* 00796480: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796482: mov dword ptr [0xa9d438], ecx */ W32((u32)(0xa9d438u), r_ecx);
    /* 00796488: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079648a: mov dword ptr [0xa9d43c], ecx */ W32((u32)(0xa9d43cu), r_ecx);
    /* 00796490: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796492: mov dword ptr [0xa9d440], ecx */ W32((u32)(0xa9d440u), r_ecx);
    /* 00796498: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079649a: mov dword ptr [0xa9d444], ecx */ W32((u32)(0xa9d444u), r_ecx);
    /* 007964a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964a2: mov dword ptr [0xa9d448], ecx */ W32((u32)(0xa9d448u), r_ecx);
    /* 007964a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964aa: mov dword ptr [0xa9d44c], ecx */ W32((u32)(0xa9d44cu), r_ecx);
    /* 007964b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964b2: mov dword ptr [0xa9d454], ecx */ W32((u32)(0xa9d454u), r_ecx);
    /* 007964b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964ba: mov dword ptr [0xa9d450], ecx */ W32((u32)(0xa9d450u), r_ecx);
    /* 007964c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964c2: mov dword ptr [0xa9cd80], ecx */ W32((u32)(0xa9cd80u), r_ecx);
    /* 007964c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964ca: mov dword ptr [0xa9cd84], ecx */ W32((u32)(0xa9cd84u), r_ecx);
    /* 007964d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964d2: mov dword ptr [0xa9cd88], ecx */ W32((u32)(0xa9cd88u), r_ecx);
    /* 007964d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964da: mov dword ptr [0xa9cd8c], ecx */ W32((u32)(0xa9cd8cu), r_ecx);
    /* 007964e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964e2: mov dword ptr [0xa9cd90], ecx */ W32((u32)(0xa9cd90u), r_ecx);
    /* 007964e8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964ea: mov dword ptr [0xa9cd94], ecx */ W32((u32)(0xa9cd94u), r_ecx);
    /* 007964f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964f2: mov dword ptr [0xa9cd98], ecx */ W32((u32)(0xa9cd98u), r_ecx);
    /* 007964f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007964fa: mov dword ptr [0xa9cda0], ecx */ W32((u32)(0xa9cda0u), r_ecx);
    /* 00796500: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796502: mov dword ptr [0xa9cd9c], ecx */ W32((u32)(0xa9cd9cu), r_ecx);
    /* 00796508: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079650a: mov dword ptr [0xa9cdac], ecx */ W32((u32)(0xa9cdacu), r_ecx);
    /* 00796510: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796512: mov dword ptr [0xa9cdb0], ecx */ W32((u32)(0xa9cdb0u), r_ecx);
    /* 00796518: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079651a: mov dword ptr [0xa9cdb4], ecx */ W32((u32)(0xa9cdb4u), r_ecx);
    /* 00796520: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796522: mov dword ptr [0xa9cdb8], ecx */ W32((u32)(0xa9cdb8u), r_ecx);
    /* 00796528: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079652a: mov dword ptr [0xa9cdbc], ecx */ W32((u32)(0xa9cdbcu), r_ecx);
    /* 00796530: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796532: mov dword ptr [0xa9cdc0], ecx */ W32((u32)(0xa9cdc0u), r_ecx);
    /* 00796538: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079653a: mov dword ptr [0xa9cdc4], ecx */ W32((u32)(0xa9cdc4u), r_ecx);
    /* 00796540: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796542: mov dword ptr [0xa9cdcc], ecx */ W32((u32)(0xa9cdccu), r_ecx);
    /* 00796548: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079654a: mov dword ptr [0xa9cdc8], ecx */ W32((u32)(0xa9cdc8u), r_ecx);
    /* 00796550: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796552: mov dword ptr [0xa9cdd8], ecx */ W32((u32)(0xa9cdd8u), r_ecx);
    /* 00796558: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079655a: mov dword ptr [0xa9cddc], ecx */ W32((u32)(0xa9cddcu), r_ecx);
    /* 00796560: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796562: mov dword ptr [0xa9cde0], ecx */ W32((u32)(0xa9cde0u), r_ecx);
    /* 00796568: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079656a: mov dword ptr [0xa9cde4], ecx */ W32((u32)(0xa9cde4u), r_ecx);
    /* 00796570: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796572: mov dword ptr [0xa9cde8], ecx */ W32((u32)(0xa9cde8u), r_ecx);
    /* 00796578: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079657a: mov dword ptr [0xa9cdec], ecx */ W32((u32)(0xa9cdecu), r_ecx);
    /* 00796580: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796582: mov dword ptr [0xa9cdf0], ecx */ W32((u32)(0xa9cdf0u), r_ecx);
    /* 00796588: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079658a: mov dword ptr [0xa9cdf8], ecx */ W32((u32)(0xa9cdf8u), r_ecx);
    /* 00796590: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796592: mov dword ptr [0xa9cdf4], ecx */ W32((u32)(0xa9cdf4u), r_ecx);
    /* 00796598: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079659a: mov dword ptr [0xa9ce04], ecx */ W32((u32)(0xa9ce04u), r_ecx);
    /* 007965a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965a2: mov dword ptr [0xa9ce08], ecx */ W32((u32)(0xa9ce08u), r_ecx);
    /* 007965a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965aa: mov dword ptr [0xa9ce0c], ecx */ W32((u32)(0xa9ce0cu), r_ecx);
    /* 007965b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965b2: mov dword ptr [0xa9ce10], ecx */ W32((u32)(0xa9ce10u), r_ecx);
    /* 007965b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965ba: mov dword ptr [0xa9ce14], ecx */ W32((u32)(0xa9ce14u), r_ecx);
    /* 007965c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965c2: mov dword ptr [0xa9ce18], ecx */ W32((u32)(0xa9ce18u), r_ecx);
    /* 007965c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965ca: mov dword ptr [0xa9ce1c], ecx */ W32((u32)(0xa9ce1cu), r_ecx);
    /* 007965d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965d2: mov dword ptr [0xa9ce24], ecx */ W32((u32)(0xa9ce24u), r_ecx);
    /* 007965d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965da: mov dword ptr [0xa9ce20], ecx */ W32((u32)(0xa9ce20u), r_ecx);
    /* 007965e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965e2: mov dword ptr [0xa9ce30], ecx */ W32((u32)(0xa9ce30u), r_ecx);
    /* 007965e8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965ea: mov dword ptr [0xa9ce34], ecx */ W32((u32)(0xa9ce34u), r_ecx);
    /* 007965f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965f2: mov dword ptr [0xa9ce38], ecx */ W32((u32)(0xa9ce38u), r_ecx);
    /* 007965f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965fa: mov dword ptr [0xa9ce3c], ecx */ W32((u32)(0xa9ce3cu), r_ecx);
    /* 00796600: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796602: mov dword ptr [0xa9ce40], ecx */ W32((u32)(0xa9ce40u), r_ecx);
    /* 00796608: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079660a: mov dword ptr [0xa9ce44], ecx */ W32((u32)(0xa9ce44u), r_ecx);
    /* 00796610: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796612: mov dword ptr [0xa9ce48], ecx */ W32((u32)(0xa9ce48u), r_ecx);
    /* 00796618: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079661a: mov dword ptr [0xa9ce50], ecx */ W32((u32)(0xa9ce50u), r_ecx);
    /* 00796620: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796622: mov dword ptr [0xa9ce4c], ecx */ W32((u32)(0xa9ce4cu), r_ecx);
    /* 00796628: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079662a: mov dword ptr [0xa9ce5c], ecx */ W32((u32)(0xa9ce5cu), r_ecx);
    /* 00796630: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796632: mov dword ptr [0xa9ce60], ecx */ W32((u32)(0xa9ce60u), r_ecx);
    /* 00796638: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079663a: mov dword ptr [0xa9ce64], ecx */ W32((u32)(0xa9ce64u), r_ecx);
    /* 00796640: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796642: mov dword ptr [0xa9ce68], ecx */ W32((u32)(0xa9ce68u), r_ecx);
    /* 00796648: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079664a: mov dword ptr [0xa9ce6c], ecx */ W32((u32)(0xa9ce6cu), r_ecx);
    /* 00796650: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796652: mov dword ptr [0xa9ce70], ecx */ W32((u32)(0xa9ce70u), r_ecx);
    /* 00796658: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079665a: mov dword ptr [0xa9ce74], ecx */ W32((u32)(0xa9ce74u), r_ecx);
    /* 00796660: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796662: mov dword ptr [0xa9ce7c], ecx */ W32((u32)(0xa9ce7cu), r_ecx);
    /* 00796668: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079666a: mov dword ptr [0xa9ce78], ecx */ W32((u32)(0xa9ce78u), r_ecx);
    /* 00796670: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796672: mov dword ptr [0xa9ce88], ecx */ W32((u32)(0xa9ce88u), r_ecx);
    /* 00796678: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079667a: mov dword ptr [0xa9ce8c], ecx */ W32((u32)(0xa9ce8cu), r_ecx);
    /* 00796680: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796682: mov dword ptr [0xa9ce90], ecx */ W32((u32)(0xa9ce90u), r_ecx);
    /* 00796688: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079668a: mov dword ptr [0xa9ce94], ecx */ W32((u32)(0xa9ce94u), r_ecx);
    /* 00796690: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796692: mov dword ptr [0xa9ce98], ecx */ W32((u32)(0xa9ce98u), r_ecx);
    /* 00796698: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079669a: mov dword ptr [0xa9ce9c], ecx */ W32((u32)(0xa9ce9cu), r_ecx);
    /* 007966a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007966a2: mov dword ptr [0xa9cea0], ecx */ W32((u32)(0xa9cea0u), r_ecx);
    /* 007966a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007966aa: mov dword ptr [0xa9cea8], ecx */ W32((u32)(0xa9cea8u), r_ecx);
    /* 007966b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007966b2: mov dword ptr [0xa9cea4], ecx */ W32((u32)(0xa9cea4u), r_ecx);
    /* 007966b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966ba: mov dword ptr [0xa9ceb4], eax */ W32((u32)(0xa9ceb4u), r_eax);
    /* 007966bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966c1: mov dword ptr [0xa9ceb8], eax */ W32((u32)(0xa9ceb8u), r_eax);
    /* 007966c6: mov dword ptr [0xa9ced8], edx */ W32((u32)(0xa9ced8u), r_edx);
    /* 007966cc: mov dword ptr [0xa9d4dc], edx */ W32((u32)(0xa9d4dcu), r_edx);
    /* 007966d2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966d4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007966d6: mov dword ptr [0xa9cebc], eax */ W32((u32)(0xa9cebcu), r_eax);
    /* 007966db: mov dword ptr [0xa9cec0], ecx */ W32((u32)(0xa9cec0u), r_ecx);
    /* 007966e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966e3: mov dword ptr [0xa9cec4], eax */ W32((u32)(0xa9cec4u), r_eax);
    /* 007966e8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966ea: mov dword ptr [0xa9cec8], eax */ W32((u32)(0xa9cec8u), r_eax);
    /* 007966ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966f1: mov dword ptr [0xa9cecc], eax */ W32((u32)(0xa9ceccu), r_eax);
    /* 007966f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966f8: mov dword ptr [0xa9ced4], eax */ W32((u32)(0xa9ced4u), r_eax);
    /* 007966fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007966ff: mov dword ptr [0xa9ced0], eax */ W32((u32)(0xa9ced0u), r_eax);
    /* 00796704: mov esp, ebp */ r_esp = r_ebp;
    /* 00796706: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00796707: ret  */ FN_RET(0x00796461); r_esp += 4; return;
}

void f_0079654b(void)
{
    FN_ENTER(0x0079654b);
    /* 0079654b: or eax, 0xa9cdc8 */ {  u32 a = r_eax; u32 b = 0xa9cdc8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00796550: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796552: mov dword ptr [0xa9cdd8], ecx */ W32((u32)(0xa9cdd8u), r_ecx);
    /* 00796558: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079655a: mov dword ptr [0xa9cddc], ecx */ W32((u32)(0xa9cddcu), r_ecx);
    /* 00796560: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796562: mov dword ptr [0xa9cde0], ecx */ W32((u32)(0xa9cde0u), r_ecx);
    /* 00796568: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079656a: mov dword ptr [0xa9cde4], ecx */ W32((u32)(0xa9cde4u), r_ecx);
    /* 00796570: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796572: mov dword ptr [0xa9cde8], ecx */ W32((u32)(0xa9cde8u), r_ecx);
    /* 00796578: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079657a: mov dword ptr [0xa9cdec], ecx */ W32((u32)(0xa9cdecu), r_ecx);
    /* 00796580: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796582: mov dword ptr [0xa9cdf0], ecx */ W32((u32)(0xa9cdf0u), r_ecx);
    /* 00796588: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079658a: mov dword ptr [0xa9cdf8], ecx */ W32((u32)(0xa9cdf8u), r_ecx);
    /* 00796590: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796592: mov dword ptr [0xa9cdf4], ecx */ W32((u32)(0xa9cdf4u), r_ecx);
    /* 00796598: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079659a: mov dword ptr [0xa9ce04], ecx */ W32((u32)(0xa9ce04u), r_ecx);
    /* 007965a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965a2: mov dword ptr [0xa9ce08], ecx */ W32((u32)(0xa9ce08u), r_ecx);
    /* 007965a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965aa: mov dword ptr [0xa9ce0c], ecx */ W32((u32)(0xa9ce0cu), r_ecx);
    /* 007965b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965b2: mov dword ptr [0xa9ce10], ecx */ W32((u32)(0xa9ce10u), r_ecx);
    /* 007965b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965ba: mov dword ptr [0xa9ce14], ecx */ W32((u32)(0xa9ce14u), r_ecx);
    /* 007965c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965c2: mov dword ptr [0xa9ce18], ecx */ W32((u32)(0xa9ce18u), r_ecx);
    /* 007965c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965ca: mov dword ptr [0xa9ce1c], ecx */ W32((u32)(0xa9ce1cu), r_ecx);
    /* 007965d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965d2: mov dword ptr [0xa9ce24], ecx */ W32((u32)(0xa9ce24u), r_ecx);
    /* 007965d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965da: mov dword ptr [0xa9ce20], ecx */ W32((u32)(0xa9ce20u), r_ecx);
    /* 007965e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965e2: mov dword ptr [0xa9ce30], ecx */ W32((u32)(0xa9ce30u), r_ecx);
    /* 007965e8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965ea: mov dword ptr [0xa9ce34], ecx */ W32((u32)(0xa9ce34u), r_ecx);
    /* 007965f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965f2: mov dword ptr [0xa9ce38], ecx */ W32((u32)(0xa9ce38u), r_ecx);
    /* 007965f8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007965fa: mov dword ptr [0xa9ce3c], ecx */ W32((u32)(0xa9ce3cu), r_ecx);
    /* 00796600: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796602: mov dword ptr [0xa9ce40], ecx */ W32((u32)(0xa9ce40u), r_ecx);
    /* 00796608: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079660a: mov dword ptr [0xa9ce44], ecx */ W32((u32)(0xa9ce44u), r_ecx);
    /* 00796610: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796612: mov dword ptr [0xa9ce48], ecx */ W32((u32)(0xa9ce48u), r_ecx);
    /* 00796618: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079661a: mov dword ptr [0xa9ce50], ecx */ W32((u32)(0xa9ce50u), r_ecx);
    /* 00796620: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796622: mov dword ptr [0xa9ce4c], ecx */ W32((u32)(0xa9ce4cu), r_ecx);
    /* 00796628: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079662a: mov dword ptr [0xa9ce5c], ecx */ W32((u32)(0xa9ce5cu), r_ecx);
    /* 00796630: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796632: mov dword ptr [0xa9ce60], ecx */ W32((u32)(0xa9ce60u), r_ecx);
    /* 00796638: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079663a: mov dword ptr [0xa9ce64], ecx */ W32((u32)(0xa9ce64u), r_ecx);
    /* 00796640: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796642: mov dword ptr [0xa9ce68], ecx */ W32((u32)(0xa9ce68u), r_ecx);
    /* 00796648: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079664a: mov dword ptr [0xa9ce6c], ecx */ W32((u32)(0xa9ce6cu), r_ecx);
    /* 00796650: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796652: mov dword ptr [0xa9ce70], ecx */ W32((u32)(0xa9ce70u), r_ecx);
    /* 00796658: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079665a: mov dword ptr [0xa9ce74], ecx */ W32((u32)(0xa9ce74u), r_ecx);
    /* 00796660: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796662: mov dword ptr [0xa9ce7c], ecx */ W32((u32)(0xa9ce7cu), r_ecx);
    /* 00796668: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079666a: mov dword ptr [0xa9ce78], ecx */ W32((u32)(0xa9ce78u), r_ecx);
    /* 00796670: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796672: mov dword ptr [0xa9ce88], ecx */ W32((u32)(0xa9ce88u), r_ecx);
    /* 00796678: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079667a: mov dword ptr [0xa9ce8c], ecx */ W32((u32)(0xa9ce8cu), r_ecx);
    /* 00796680: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796682: mov dword ptr [0xa9ce90], ecx */ W32((u32)(0xa9ce90u), r_ecx);
    /* 00796688: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079668a: mov dword ptr [0xa9ce94], ecx */ W32((u32)(0xa9ce94u), r_ecx);
    /* 00796690: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796692: mov dword ptr [0xa9ce98], ecx */ W32((u32)(0xa9ce98u), r_ecx);
    /* 00796698: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079669a: mov dword ptr [0xa9ce9c], ecx */ W32((u32)(0xa9ce9cu), r_ecx);
    /* 007966a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007966a2: mov dword ptr [0xa9cea0], ecx */ W32((u32)(0xa9cea0u), r_ecx);
    /* 007966a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007966aa: mov dword ptr [0xa9cea8], ecx */ W32((u32)(0xa9cea8u), r_ecx);
    /* 007966b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007966b2: mov dword ptr [0xa9cea4], ecx */ W32((u32)(0xa9cea4u), r_ecx);
    /* 007966b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966ba: mov dword ptr [0xa9ceb4], eax */ W32((u32)(0xa9ceb4u), r_eax);
    /* 007966bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966c1: mov dword ptr [0xa9ceb8], eax */ W32((u32)(0xa9ceb8u), r_eax);
    /* 007966c6: mov dword ptr [0xa9ced8], edx */ W32((u32)(0xa9ced8u), r_edx);
    /* 007966cc: mov dword ptr [0xa9d4dc], edx */ W32((u32)(0xa9d4dcu), r_edx);
    /* 007966d2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966d4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007966d6: mov dword ptr [0xa9cebc], eax */ W32((u32)(0xa9cebcu), r_eax);
    /* 007966db: mov dword ptr [0xa9cec0], ecx */ W32((u32)(0xa9cec0u), r_ecx);
    /* 007966e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966e3: mov dword ptr [0xa9cec4], eax */ W32((u32)(0xa9cec4u), r_eax);
    /* 007966e8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966ea: mov dword ptr [0xa9cec8], eax */ W32((u32)(0xa9cec8u), r_eax);
    /* 007966ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966f1: mov dword ptr [0xa9cecc], eax */ W32((u32)(0xa9ceccu), r_eax);
    /* 007966f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007966f8: mov dword ptr [0xa9ced4], eax */ W32((u32)(0xa9ced4u), r_eax);
    /* 007966fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007966ff: mov dword ptr [0xa9ced0], eax */ W32((u32)(0xa9ced0u), r_eax);
    /* 00796704: mov esp, ebp */ r_esp = r_ebp;
    /* 00796706: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00796707: ret  */ FN_RET(0x0079654b); r_esp += 4; return;
}

void f_00796708(void) /* sub_796708 */
{
    FN_ENTER(0x00796708);
    /* 00796708: mov dword ptr [0xa9d4e4], 0 */ W32((u32)(0xa9d4e4u), 0x0u);
    /* 00796712: push 0x97c908 */ { u32 v = 0x97c908u; r_esp -= 4; W32(r_esp, v); }
    /* 00796717: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x79671cu); f_005b9328();
    /* 0079671c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079671d: mov dword ptr [0xa9d4e8], eax */ W32((u32)(0xa9d4e8u), r_eax);
    /* 00796722: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00796724: jle 0x796744 */ if ((fZ||fS!=fO)) goto L_00796744;
L_00796726:; BB(0x00796726);
    /* 00796726: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00796727: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x79672cu); f_0082e940();
    /* 0079672c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079672d: mov dword ptr [0xa9d4e4], eax */ W32((u32)(0xa9d4e4u), r_eax);
    /* 00796732: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00796734: je 0x796744 */ if (fZ) goto L_00796744;
L_00796736:; BB(0x00796736);
    /* 00796736: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00796737: push 0x97c908 */ { u32 v = 0x97c908u; r_esp -= 4; W32(r_esp, v); }
    /* 0079673c: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x796741u); f_005b9910();
    /* 00796741: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00796744:; BB(0x00796744);
    /* 00796744: ret  */ FN_RET(0x00796708); r_esp += 4; return;
}

void f_00796748(void) /* sub_796748 */
{
    FN_ENTER(0x00796748);
    /* 00796748: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00796749: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0079674b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0079674d: call 0x79676c */ r_esp -= 4; W32(r_esp, 0x796752u); f_0079676c();
    /* 00796752: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00796756: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00796758: jne 0x79675e */ if (!fZ) goto L_0079675e;
L_0079675a:; BB(0x0079675a);
    /* 0079675a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0079675b: ret 4 */ FN_RET(0x00796748); r_esp += 8; return;
L_0079675e:; BB(0x0079675e);
    /* 0079675e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079675f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x796764u); f_005c2f74();
    /* 00796764: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00796765: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00796766: ret 4 */ FN_RET(0x00796748); r_esp += 8; return;
}

void f_0079676c(void) /* sub_79676C */
{
    FN_ENTER(0x0079676c);
    /* 0079676c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079676d: mov ebp, esp */ r_ebp = r_esp;
    /* 0079676f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00796771: push 0x8f52d0 */ { u32 v = 0x8f52d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00796776: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0079677c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079677d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00796784: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00796787: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0079678a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0079678d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00796790: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00796793: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00796796: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00796799: mov dword ptr [ecx], 0xb45890 */ W32((u32)(r_ecx), 0xb45890u);
    /* 0079679f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007967a6: call 0x4f7078 */ r_esp -= 4; W32(r_esp, 0x7967abu); f_004f7078();
    /* 007967ab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007967ae: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007967b5: mov esp, ebp */ r_esp = r_ebp;
    /* 007967b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007967b8: ret  */ FN_RET(0x0079676c); r_esp += 4; return;
}

void f_007967bc(void) /* sub_7967BC */
{
    FN_ENTER(0x007967bc);
    /* 007967bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007967bd: mov edi, ecx */ r_edi = r_ecx;
    /* 007967bf: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007967c5: mov ecx, edi */ r_ecx = r_edi;
    /* 007967c7: call 0x4f7330 */ r_esp -= 4; W32(r_esp, 0x7967ccu); f_004f7330();
    /* 007967cc: mov dword ptr [edi], 0xb45890 */ W32((u32)(r_edi), 0xb45890u);
    /* 007967d2: mov eax, dword ptr [0x9ff4e0] */ r_eax = R32((u32)(0x9ff4e0u));
    /* 007967d7: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 007967da: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 007967dd: mov dword ptr [edi + 0x7c], 0 */ W32((u32)(r_edi+0x7cu), 0x0u);
    /* 007967e4: mov eax, 0xa9d460 */ r_eax = 0xa9d460u;
    /* 007967e9: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 007967eb: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 007967ed: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 007967f0: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 007967f3: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 007967f6: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 007967f9: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 007967fc: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 007967ff: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00796802: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 00796805: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00796808: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 0079680b: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0079680e: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 00796811: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00796814: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 00796817: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0079681a: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 0079681d: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00796820: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 00796823: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00796826: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 00796829: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0079682c: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 0079682f: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00796832: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 00796835: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00796838: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 0079683b: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0079683e: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 00796841: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00796844: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 00796847: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 0079684a: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 0079684d: mov eax, edi */ r_eax = r_edi;
    /* 0079684f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00796850: ret  */ FN_RET(0x007967bc); r_esp += 4; return;
}

void f_00796854(void) /* sub_796854 */
{
    FN_ENTER(0x00796854);
    /* 00796854: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00796855: mov edi, ecx */ r_edi = r_ecx;
    /* 00796857: mov ecx, edi */ r_ecx = r_edi;
    /* 00796859: call 0x4f70d0 */ r_esp -= 4; W32(r_esp, 0x79685eu); f_004f70d0();
    /* 0079685e: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00796864: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x796869u); f_0068d5a8();
    /* 00796869: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079686a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079686c: je 0x796880 */ if (fZ) goto L_00796880;
L_0079686e:; BB(0x0079686e);
    /* 0079686e: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00796871: mov dword ptr [edi + 0x1c], edx */ W32((u32)(r_edi+0x1cu), r_edx);
    /* 00796874: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00796877: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 0079687a: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 0079687d: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
L_00796880:; BB(0x00796880);
    /* 00796880: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00796883: mov eax, 0xa9d460 */ r_eax = 0xa9d460u;
    /* 00796888: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0079688a: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 0079688c: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0079688f: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 00796892: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00796895: mov dword ptr [edi + 8], edx */ W32((u32)(r_edi+0x8u), r_edx);
    /* 00796898: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0079689b: mov dword ptr [edi + 0xc], edx */ W32((u32)(r_edi+0xcu), r_edx);
    /* 0079689e: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 007968a1: mov dword ptr [edi + 0x10], edx */ W32((u32)(r_edi+0x10u), r_edx);
    /* 007968a4: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 007968a7: mov dword ptr [edi + 0x14], edx */ W32((u32)(r_edi+0x14u), r_edx);
    /* 007968aa: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 007968ad: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
    /* 007968b0: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 007968b3: mov dword ptr [edi + 0x1c], edx */ W32((u32)(r_edi+0x1cu), r_edx);
    /* 007968b6: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 007968b9: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 007968bc: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 007968bf: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 007968c2: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 007968c5: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 007968c8: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 007968cb: mov dword ptr [edi + 0x2c], edx */ W32((u32)(r_edi+0x2cu), r_edx);
    /* 007968ce: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 007968d1: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 007968d4: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 007968d7: mov dword ptr [edi + 0x34], edx */ W32((u32)(r_edi+0x34u), r_edx);
    /* 007968da: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 007968dd: mov dword ptr [edi + 0x38], edx */ W32((u32)(r_edi+0x38u), r_edx);
    /* 007968e0: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 007968e3: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 007968e6: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 007968e9: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 007968ec: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007968ed: ret  */ FN_RET(0x00796854); r_esp += 4; return;
}

void f_007968f0(void) /* sub_7968F0 */
{
    FN_ENTER(0x007968f0);
    /* 007968f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007968f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007968f2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007968f3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007968f4: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007968f7: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007968f9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007968fb: call 0x797034 */ r_esp -= 4; W32(r_esp, 0x796900u); f_00797034();
    /* 00796900: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00796902: call 0x796b64 */ r_esp -= 4; W32(r_esp, 0x796907u); f_00796b64();
    /* 00796907: mov eax, dword ptr [ebx + 0x7c] */ r_eax = R32((u32)(r_ebx+0x7cu));
    /* 0079690a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079690c: je 0x796b55 */ if (fZ) goto L_00796b55;
L_00796912:; BB(0x00796912);
    /* 00796912: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00796915: je 0x796933 */ if (fZ) goto L_00796933;
L_00796917:; BB(0x00796917);
    /* 00796917: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079691a: jne 0x796925 */ if (!fZ) goto L_00796925;
L_0079691c:; BB(0x0079691c);
    /* 0079691c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0079691e: call 0x796cc4 */ r_esp -= 4; W32(r_esp, 0x796923u); f_00796cc4();
    /* 00796923: jmp 0x79693a */ goto L_0079693a;
L_00796925:; BB(0x00796925);
    /* 00796925: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00796928: jne 0x79693a */ if (!fZ) goto L_0079693a;
L_0079692a:; BB(0x0079692a);
    /* 0079692a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0079692c: call 0x796bd4 */ r_esp -= 4; W32(r_esp, 0x796931u); f_00796bd4();
    /* 00796931: jmp 0x79693a */ goto L_0079693a;
L_00796933:; BB(0x00796933);
    /* 00796933: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00796935: call 0x796db4 */ r_esp -= 4; W32(r_esp, 0x79693au); f_00796db4();
L_0079693a:; BB(0x0079693a);
    /* 0079693a: push dword ptr [0xa0f684] */ { u32 v = R32((u32)(0xa0f684u)); r_esp -= 4; W32(r_esp, v); }
    /* 00796940: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00796943: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00796946: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00796948: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079694a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079694c: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 00796953: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x796958u); f_007c1100();
    /* 00796958: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079695a: je 0x796a19 */ if (fZ) goto L_00796a19;
L_00796960:; BB(0x00796960);
    /* 00796960: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 00796966: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00796969: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0079696c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079696e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00796970: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00796972: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 00796979: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x79697eu); f_007c1100();
    /* 0079697e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00796980: je 0x796a19 */ if (fZ) goto L_00796a19;
L_00796986:; BB(0x00796986);
    /* 00796986: push dword ptr [0xa0f698] */ { u32 v = R32((u32)(0xa0f698u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079698c: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0079698f: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00796992: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00796994: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00796996: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00796998: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 0079699f: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x7969a4u); f_007c1160();
    /* 007969a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007969a6: je 0x796a19 */ if (fZ) goto L_00796a19;
L_007969a8:; BB(0x007969a8);
    /* 007969a8: mov edx, 0xa9d460 */ r_edx = 0xa9d460u;
    /* 007969ad: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 007969b0: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 007969b2: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 007969b5: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 007969b8: mov dword ptr [edx], ebp */ W32((u32)(r_edx), r_ebp);
    /* 007969ba: mov ebp, dword ptr [eax + 0xc] */ r_ebp = R32((u32)(r_eax+0xcu));
    /* 007969bd: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 007969c0: mov dword ptr [edx + 8], edi */ W32((u32)(r_edx+0x8u), r_edi);
    /* 007969c3: mov dword ptr [edx + 0xc], ebp */ W32((u32)(r_edx+0xcu), r_ebp);
    /* 007969c6: mov ebp, dword ptr [eax + 0x10] */ r_ebp = R32((u32)(r_eax+0x10u));
    /* 007969c9: mov dword ptr [edx + 0x10], ebp */ W32((u32)(r_edx+0x10u), r_ebp);
    /* 007969cc: mov ebp, dword ptr [eax + 0x14] */ r_ebp = R32((u32)(r_eax+0x14u));
    /* 007969cf: mov dword ptr [edx + 0x14], ebp */ W32((u32)(r_edx+0x14u), r_ebp);
    /* 007969d2: mov ebp, dword ptr [eax + 0x18] */ r_ebp = R32((u32)(r_eax+0x18u));
    /* 007969d5: mov dword ptr [edx + 0x18], ebp */ W32((u32)(r_edx+0x18u), r_ebp);
    /* 007969d8: mov ebp, dword ptr [eax + 0x1c] */ r_ebp = R32((u32)(r_eax+0x1cu));
    /* 007969db: mov dword ptr [edx + 0x1c], ebp */ W32((u32)(r_edx+0x1cu), r_ebp);
    /* 007969de: mov ebp, dword ptr [eax + 0x20] */ r_ebp = R32((u32)(r_eax+0x20u));
    /* 007969e1: mov dword ptr [edx + 0x20], ebp */ W32((u32)(r_edx+0x20u), r_ebp);
    /* 007969e4: mov ebp, dword ptr [eax + 0x24] */ r_ebp = R32((u32)(r_eax+0x24u));
    /* 007969e7: mov dword ptr [edx + 0x24], ebp */ W32((u32)(r_edx+0x24u), r_ebp);
    /* 007969ea: mov ebp, dword ptr [eax + 0x28] */ r_ebp = R32((u32)(r_eax+0x28u));
    /* 007969ed: mov dword ptr [edx + 0x28], ebp */ W32((u32)(r_edx+0x28u), r_ebp);
    /* 007969f0: mov ebp, dword ptr [eax + 0x2c] */ r_ebp = R32((u32)(r_eax+0x2cu));
    /* 007969f3: mov dword ptr [edx + 0x2c], ebp */ W32((u32)(r_edx+0x2cu), r_ebp);
    /* 007969f6: mov ebp, dword ptr [eax + 0x30] */ r_ebp = R32((u32)(r_eax+0x30u));
    /* 007969f9: mov dword ptr [edx + 0x30], ebp */ W32((u32)(r_edx+0x30u), r_ebp);
    /* 007969fc: mov ebp, dword ptr [eax + 0x34] */ r_ebp = R32((u32)(r_eax+0x34u));
    /* 007969ff: mov dword ptr [edx + 0x34], ebp */ W32((u32)(r_edx+0x34u), r_ebp);
    /* 00796a02: mov ebp, dword ptr [eax + 0x38] */ r_ebp = R32((u32)(r_eax+0x38u));
    /* 00796a05: mov dword ptr [edx + 0x38], ebp */ W32((u32)(r_edx+0x38u), r_ebp);
    /* 00796a08: mov ebp, dword ptr [eax + 0x3c] */ r_ebp = R32((u32)(r_eax+0x3cu));
    /* 00796a0b: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 00796a0e: mov dword ptr [edx + 0x3c], ebp */ W32((u32)(r_edx+0x3cu), r_ebp);
    /* 00796a11: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 00796a14: call 0x794218 */ r_esp -= 4; W32(r_esp, 0x796a19u); f_00794218();
L_00796a19:; BB(0x00796a19);
    /* 00796a19: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00796a1b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00796a1d: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00796a20: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00796a23: push dword ptr [0xa0f684] */ { u32 v = R32((u32)(0xa0f684u)); r_esp -= 4; W32(r_esp, v); }
    /* 00796a29: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00796a2b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00796a2d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00796a2f: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 00796a36: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x796a3bu); f_007c09fc();
    /* 00796a3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00796a3d: je 0x796a43 */ if (fZ) goto L_00796a43;
L_00796a3f:; BB(0x00796a3f);
    /* 00796a3f: add dword ptr [ebx + 0x7c], 1 */ { u32 ad = (u32)(r_ebx+0x7cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00796a43:; BB(0x00796a43);
    /* 00796a43: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00796a45: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00796a47: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00796a4a: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00796a4d: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 00796a53: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00796a55: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00796a57: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00796a59: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 00796a60: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x796a65u); f_007c09fc();
    /* 00796a65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00796a67: je 0x796a74 */ if (fZ) goto L_00796a74;
L_00796a69:; BB(0x00796a69);
    /* 00796a69: mov eax, dword ptr [ebx + 0x7c] */ r_eax = R32((u32)(r_ebx+0x7cu));
    /* 00796a6c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00796a6f: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 00796a72: jmp 0x796a77 */ goto L_00796a77;
L_00796a74:; BB(0x00796a74);
    /* 00796a74: mov eax, dword ptr [ebx + 0x7c] */ r_eax = R32((u32)(r_ebx+0x7cu));
L_00796a77:; BB(0x00796a77);
    /* 00796a77: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00796a79: jge 0x796a87 */ if ((fS==fO)) goto L_00796a87;
L_00796a7b:; BB(0x00796a7b);
    /* 00796a7b: mov dword ptr [ebx + 0x7c], 3 */ W32((u32)(r_ebx+0x7cu), 0x3u);
    /* 00796a82: mov eax, 3 */ r_eax = 0x3u;
L_00796a87:; BB(0x00796a87);
    /* 00796a87: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00796a8a: jle 0x796a93 */ if ((fZ||fS!=fO)) goto L_00796a93;
L_00796a8c:; BB(0x00796a8c);
    /* 00796a8c: mov dword ptr [ebx + 0x7c], 0 */ W32((u32)(r_ebx+0x7cu), 0x0u);
L_00796a93:; BB(0x00796a93);
    /* 00796a93: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 00796a96: lea eax, [ebx + 0x44] */ r_eax = (u32)(r_ebx+0x44u);
    /* 00796a99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00796a9a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00796a9c: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x796aa1u); f_0082eab8();
    /* 00796aa1: mov eax, dword ptr [ebx + 0x44] */ r_eax = R32((u32)(r_ebx+0x44u));
    /* 00796aa4: mov edx, dword ptr [ebx + 0x48] */ r_edx = R32((u32)(r_ebx+0x48u));
    /* 00796aa7: mov ecx, dword ptr [ebx + 0x4c] */ r_ecx = R32((u32)(r_ebx+0x4cu));
    /* 00796aaa: mov ebp, dword ptr [ebx + 0x5c] */ r_ebp = R32((u32)(r_ebx+0x5cu));
    /* 00796aad: mov esi, dword ptr [ebx + 0x60] */ r_esi = R32((u32)(r_ebx+0x60u));
    /* 00796ab0: mov edi, dword ptr [ebx + 0x64] */ r_edi = R32((u32)(r_ebx+0x64u));
    /* 00796ab3: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00796ab6: mov edi, dword ptr [ebx + 0x68] */ r_edi = R32((u32)(r_ebx+0x68u));
    /* 00796ab9: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00796abd: mov edi, dword ptr [ebx + 0x6c] */ r_edi = R32((u32)(r_ebx+0x6cu));
    /* 00796ac0: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00796ac4: mov edi, dword ptr [ebx + 0x70] */ r_edi = R32((u32)(r_ebx+0x70u));
    /* 00796ac7: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00796acb: mov edi, dword ptr [ebx + 0x74] */ r_edi = R32((u32)(r_ebx+0x74u));
    /* 00796ace: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 00796ad2: mov edi, dword ptr [ebx + 0x78] */ r_edi = R32((u32)(r_ebx+0x78u));
    /* 00796ad5: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 00796ad9: mov edi, dword ptr [ebx + 0x50] */ r_edi = R32((u32)(r_ebx+0x50u));
    /* 00796adc: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 00796ae0: mov edi, dword ptr [ebx + 0x54] */ r_edi = R32((u32)(r_ebx+0x54u));
    /* 00796ae3: mov ebx, dword ptr [ebx + 0x58] */ r_ebx = R32((u32)(r_ebx+0x58u));
    /* 00796ae6: mov dword ptr [0xa9d46c], eax */ W32((u32)(0xa9d46cu), r_eax);
    /* 00796aeb: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00796aee: mov dword ptr [0xa9d470], edx */ W32((u32)(0xa9d470u), r_edx);
    /* 00796af4: mov dword ptr [0xa9d474], ecx */ W32((u32)(0xa9d474u), r_ecx);
    /* 00796afa: mov dword ptr [0xa9d484], ebp */ W32((u32)(0xa9d484u), r_ebp);
    /* 00796b00: mov dword ptr [0xa9d488], esi */ W32((u32)(0xa9d488u), r_esi);
    /* 00796b06: mov dword ptr [0xa9d48c], eax */ W32((u32)(0xa9d48cu), r_eax);
    /* 00796b0b: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00796b0f: mov dword ptr [0xa9d490], eax */ W32((u32)(0xa9d490u), r_eax);
    /* 00796b14: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00796b18: mov dword ptr [0xa9d494], eax */ W32((u32)(0xa9d494u), r_eax);
    /* 00796b1d: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00796b21: mov dword ptr [0xa9d498], eax */ W32((u32)(0xa9d498u), r_eax);
    /* 00796b26: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00796b2a: mov dword ptr [0xa9d49c], eax */ W32((u32)(0xa9d49cu), r_eax);
    /* 00796b2f: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00796b33: mov dword ptr [0xa9d4a0], eax */ W32((u32)(0xa9d4a0u), r_eax);
    /* 00796b38: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00796b3c: mov dword ptr [0xa9d478], eax */ W32((u32)(0xa9d478u), r_eax);
    /* 00796b41: mov dword ptr [0xa9d47c], edi */ W32((u32)(0xa9d47cu), r_edi);
    /* 00796b47: mov dword ptr [0xa9d480], ebx */ W32((u32)(0xa9d480u), r_ebx);
    /* 00796b4d: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00796b50: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00796b51: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00796b52: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00796b53: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00796b54: ret  */ FN_RET(0x007968f0); r_esp += 4; return;
L_00796b55:; BB(0x00796b55);
    /* 00796b55: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00796b57: call 0x796ea8 */ r_esp -= 4; W32(r_esp, 0x796b5cu); f_00796ea8();
    /* 00796b5c: jmp 0x79693a */ goto L_0079693a;
}

void f_00796b64(void) /* sub_796B64 */
{
    FN_ENTER(0x00796b64);
    /* 00796b64: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00796b65: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00796b68: mov esi, ecx */ r_esi = r_ecx;
    /* 00796b6a: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 00796b6d: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 00796b70: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00796b73: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00796b77: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00796b7a: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 00796b7d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00796b81: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x796b86u); f_0082df08();
    /* 00796b86: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00796b88: fld dword ptr [0x97c944] */ FPUSH(R_F32((u32)(0x97c944u)));
    /* 00796b8e: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00796b91: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00796b93: fadd dword ptr [esi + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x1cu));
    /* 00796b96: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00796b9a: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00796b9e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00796ba0: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00796ba2: fadd dword ptr [esi + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x20u));
    /* 00796ba5: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00796ba7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00796ba9: fadd dword ptr [esi + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x24u));
    /* 00796bac: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00796bae: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00796bb1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00796bb3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00796bb7: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00796bbb: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00796bbe: add esi, 0x1c */ {  u32 a = r_esi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00796bc1: mov eax, 0xffff0000 */ r_eax = 0xffff0000u;
    /* 00796bc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00796bc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00796bc8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00796bc9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00796bca: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x796bcfu); f_0061cdb0();
    /* 00796bcf: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00796bd2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00796bd3: ret  */ FN_RET(0x00796b64); r_esp += 4; return;
}

void f_00796bd4(void) /* sub_796BD4 */
{
    FN_ENTER(0x00796bd4);
    /* 00796bd4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00796bd5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00796bd6: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00796bd8: mov eax, dword ptr [0xa9d500] */ r_eax = R32((u32)(0xa9d500u));
    /* 00796bdd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00796bdf: jne 0x796be6 */ if (!fZ) goto L_00796be6;
L_00796be1:; BB(0x00796be1);
    /* 00796be1: lea ebx, [ebp + 0x50] */ r_ebx = (u32)(r_ebp+0x50u);
    /* 00796be4: jmp 0x796bf2 */ goto L_00796bf2;
L_00796be6:; BB(0x00796be6);
    /* 00796be6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00796be9: je 0x796cbc */ if (fZ) goto L_00796cbc;
L_00796bef:; BB(0x00796bef);
    /* 00796bef: lea ebx, [ebp + 0x58] */ r_ebx = (u32)(r_ebp+0x58u);
L_00796bf2:; BB(0x00796bf2);
    /* 00796bf2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00796bf4: add eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00796bf7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00796bf8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00796bfa: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00796bfc: push 0xa9d510 */ { u32 v = 0xa9d510u; r_esp -= 4; W32(r_esp, v); }
    /* 00796c01: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00796c02: call 0x4f745c */ r_esp -= 4; W32(r_esp, 0x796c07u); f_004f745c();
    /* 00796c07: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 00796c09: fcom dword ptr [0x97c940] */ fx_compare(ST(0), R_F32((u32)(0x97c940u))); 
    /* 00796c0f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00796c11: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00796c12: jae 0x796c1c */ if (!fC) goto L_00796c1c;
L_00796c14:; BB(0x00796c14);
    /* 00796c14: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00796c16: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00796c18: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 00796c1a: jmp 0x796c2e */ goto L_00796c2e;
L_00796c1c:; BB(0x00796c1c);
    /* 00796c1c: fcomp dword ptr [0x97c93c] */ fx_compare(ST(0), R_F32((u32)(0x97c93cu))); FPOP();
    /* 00796c22: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00796c24: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00796c25: jbe 0x796c2e */ if ((fC||fZ)) goto L_00796c2e;
L_00796c27:; BB(0x00796c27);
    /* 00796c27: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00796c2c: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
L_00796c2e:; BB(0x00796c2e);
    /* 00796c2e: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00796c34: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00796c37: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00796c3a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00796c3c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00796c3e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00796c40: lea ebx, [edx + edx + 0xaae75c] */ r_ebx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 00796c47: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00796c49: call 0x7c1180 */ r_esp -= 4; W32(r_esp, 0x796c4eu); f_007c1180();
    /* 00796c4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00796c50: je 0x796cb9 */ if (fZ) goto L_00796cb9;
L_00796c52:; BB(0x00796c52);
    /* 00796c52: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00796c54: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00796c56: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00796c58: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 00796c5e: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x796c63u); f_007c09fc();
    /* 00796c63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00796c65: je 0x796c6e */ if (fZ) goto L_00796c6e;
L_00796c67:; BB(0x00796c67);
    /* 00796c67: add dword ptr [0xa9d500], 1 */ { u32 ad = (u32)(0xa9d500u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00796c6e:; BB(0x00796c6e);
    /* 00796c6e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00796c70: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00796c72: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00796c74: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 00796c7a: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x796c7fu); f_007c09fc();
    /* 00796c7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00796c81: je 0x796c92 */ if (fZ) goto L_00796c92;
L_00796c83:; BB(0x00796c83);
    /* 00796c83: mov eax, dword ptr [0xa9d500] */ r_eax = R32((u32)(0xa9d500u));
    /* 00796c88: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00796c8b: mov dword ptr [0xa9d500], eax */ W32((u32)(0xa9d500u), r_eax);
    /* 00796c90: jmp 0x796c97 */ goto L_00796c97;
L_00796c92:; BB(0x00796c92);
    /* 00796c92: mov eax, dword ptr [0xa9d500] */ r_eax = R32((u32)(0xa9d500u));
L_00796c97:; BB(0x00796c97);
    /* 00796c97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00796c99: jge 0x796caa */ if ((fS==fO)) goto L_00796caa;
L_00796c9b:; BB(0x00796c9b);
    /* 00796c9b: mov dword ptr [0xa9d500], 2 */ W32((u32)(0xa9d500u), 0x2u);
    /* 00796ca5: mov eax, 2 */ r_eax = 0x2u;
L_00796caa:; BB(0x00796caa);
    /* 00796caa: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00796cad: jl 0x796cb9 */ if ((fS!=fO)) goto L_00796cb9;
L_00796caf:; BB(0x00796caf);
    /* 00796caf: mov dword ptr [0xa9d500], 0 */ W32((u32)(0xa9d500u), 0x0u);
L_00796cb9:; BB(0x00796cb9);
    /* 00796cb9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00796cba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00796cbb: ret  */ FN_RET(0x00796bd4); r_esp += 4; return;
L_00796cbc:; BB(0x00796cbc);
    /* 00796cbc: lea ebx, [ebp + 0x54] */ r_ebx = (u32)(r_ebp+0x54u);
    /* 00796cbf: jmp 0x796bf2 */ goto L_00796bf2;
}

void f_00796c69(void)
{
    FN_ENTER(0x00796c69);
    /* 00796c69: add ch, dl */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00796c6b: test eax, 0x56a0100 */ {  u32 a = r_eax; u32 b = 0x56a0100u; u32 r = (a & b) & 0xffffffffu;   }
    /* 00796c70: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00796c72: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00796c74: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 00796c7a: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x796c7fu); f_007c09fc();
    /* 00796c7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00796c81: je 0x796c92 */ if (fZ) goto L_00796c92;
L_00796c83:; BB(0x00796c83);
    /* 00796c83: mov eax, dword ptr [0xa9d500] */ r_eax = R32((u32)(0xa9d500u));
    /* 00796c88: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00796c8b: mov dword ptr [0xa9d500], eax */ W32((u32)(0xa9d500u), r_eax);
    /* 00796c90: jmp 0x796c97 */ goto L_00796c97;
L_00796c92:; BB(0x00796c92);
    /* 00796c92: mov eax, dword ptr [0xa9d500] */ r_eax = R32((u32)(0xa9d500u));
L_00796c97:; BB(0x00796c97);
    /* 00796c97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00796c99: jge 0x796caa */ if ((fS==fO)) goto L_00796caa;
L_00796c9b:; BB(0x00796c9b);
    /* 00796c9b: mov dword ptr [0xa9d500], 2 */ W32((u32)(0xa9d500u), 0x2u);
    /* 00796ca5: mov eax, 2 */ r_eax = 0x2u;
L_00796caa:; BB(0x00796caa);
    /* 00796caa: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00796cad: jl 0x796cb9 */ if ((fS!=fO)) goto L_00796cb9;
L_00796caf:; BB(0x00796caf);
    /* 00796caf: mov dword ptr [0xa9d500], 0 */ W32((u32)(0xa9d500u), 0x0u);
L_00796cb9:; BB(0x00796cb9);
    /* 00796cb9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00796cba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00796cbb: ret  */ FN_RET(0x00796c69); r_esp += 4; return;
}

void f_00796cc4(void) /* sub_796CC4 */
{
    FN_ENTER(0x00796cc4);
    /* 00796cc4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00796cc5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00796cc6: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00796cc8: mov eax, dword ptr [0xa9d504] */ r_eax = R32((u32)(0xa9d504u));
    /* 00796ccd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00796ccf: jne 0x796cd6 */ if (!fZ) goto L_00796cd6;
L_00796cd1:; BB(0x00796cd1);
    /* 00796cd1: lea ebx, [ebp + 0x70] */ r_ebx = (u32)(r_ebp+0x70u);
    /* 00796cd4: jmp 0x796ce2 */ goto L_00796ce2;
L_00796cd6:; BB(0x00796cd6);
    /* 00796cd6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00796cd9: je 0x796dac */ if (fZ) goto L_00796dac;
L_00796cdf:; BB(0x00796cdf);
    /* 00796cdf: lea ebx, [ebp + 0x78] */ r_ebx = (u32)(r_ebp+0x78u);
L_00796ce2:; BB(0x00796ce2);
    /* 00796ce2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00796ce4: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00796ce7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00796ce8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00796cea: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 00796cec: push 0xa9d510 */ { u32 v = 0xa9d510u; r_esp -= 4; W32(r_esp, v); }
    /* 00796cf1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00796cf2: call 0x4f745c */ r_esp -= 4; W32(r_esp, 0x796cf7u); f_004f745c();
    /* 00796cf7: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 00796cf9: fcom dword ptr [0x97c938] */ fx_compare(ST(0), R_F32((u32)(0x97c938u))); 
    /* 00796cff: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00796d01: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00796d02: jae 0x796d0c */ if (!fC) goto L_00796d0c;
L_00796d04:; BB(0x00796d04);
    /* 00796d04: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00796d06: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00796d08: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 00796d0a: jmp 0x796d1e */ goto L_00796d1e;
L_00796d0c:; BB(0x00796d0c);
    /* 00796d0c: fcomp dword ptr [0x97c934] */ fx_compare(ST(0), R_F32((u32)(0x97c934u))); FPOP();
    /* 00796d12: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00796d14: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00796d15: jbe 0x796d1e */ if ((fC||fZ)) goto L_00796d1e;
L_00796d17:; BB(0x00796d17);
    /* 00796d17: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00796d1c: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
L_00796d1e:; BB(0x00796d1e);
    /* 00796d1e: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00796d24: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00796d27: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00796d2a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00796d2c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00796d2e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00796d30: lea ebx, [edx + edx + 0xaae75c] */ r_ebx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 00796d37: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00796d39: call 0x7c1180 */ r_esp -= 4; W32(r_esp, 0x796d3eu); f_007c1180();
    /* 00796d3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00796d40: je 0x796da9 */ if (fZ) goto L_00796da9;
L_00796d42:; BB(0x00796d42);
    /* 00796d42: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00796d44: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00796d46: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00796d48: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 00796d4e: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x796d53u); f_007c09fc();
    /* 00796d53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00796d55: je 0x796d5e */ if (fZ) goto L_00796d5e;
L_00796d57:; BB(0x00796d57);
    /* 00796d57: add dword ptr [0xa9d504], 1 */ { u32 ad = (u32)(0xa9d504u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00796d5e:; BB(0x00796d5e);
    /* 00796d5e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00796d60: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00796d62: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00796d64: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 00796d6a: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x796d6fu); f_007c09fc();
    /* 00796d6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00796d71: je 0x796d82 */ if (fZ) goto L_00796d82;
L_00796d73:; BB(0x00796d73);
    /* 00796d73: mov eax, dword ptr [0xa9d504] */ r_eax = R32((u32)(0xa9d504u));
    /* 00796d78: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00796d7b: mov dword ptr [0xa9d504], eax */ W32((u32)(0xa9d504u), r_eax);
    /* 00796d80: jmp 0x796d87 */ goto L_00796d87;
L_00796d82:; BB(0x00796d82);
    /* 00796d82: mov eax, dword ptr [0xa9d504] */ r_eax = R32((u32)(0xa9d504u));
L_00796d87:; BB(0x00796d87);
    /* 00796d87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00796d89: jge 0x796d9a */ if ((fS==fO)) goto L_00796d9a;
L_00796d8b:; BB(0x00796d8b);
    /* 00796d8b: mov dword ptr [0xa9d504], 2 */ W32((u32)(0xa9d504u), 0x2u);
    /* 00796d95: mov eax, 2 */ r_eax = 0x2u;
L_00796d9a:; BB(0x00796d9a);
    /* 00796d9a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00796d9d: jl 0x796da9 */ if ((fS!=fO)) goto L_00796da9;
L_00796d9f:; BB(0x00796d9f);
    /* 00796d9f: mov dword ptr [0xa9d504], 0 */ W32((u32)(0xa9d504u), 0x0u);
L_00796da9:; BB(0x00796da9);
    /* 00796da9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00796daa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00796dab: ret  */ FN_RET(0x00796cc4); r_esp += 4; return;
L_00796dac:; BB(0x00796dac);
    /* 00796dac: lea ebx, [ebp + 0x74] */ r_ebx = (u32)(r_ebp+0x74u);
    /* 00796daf: jmp 0x796ce2 */ goto L_00796ce2;
}

void f_00796db4(void) /* sub_796DB4 */
{
    FN_ENTER(0x00796db4);
    /* 00796db4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00796db5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00796db6: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00796db8: mov eax, dword ptr [0xa9d508] */ r_eax = R32((u32)(0xa9d508u));
    /* 00796dbd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00796dbf: jne 0x796dc6 */ if (!fZ) goto L_00796dc6;
L_00796dc1:; BB(0x00796dc1);
    /* 00796dc1: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 00796dc4: jmp 0x796dd2 */ goto L_00796dd2;
L_00796dc6:; BB(0x00796dc6);
    /* 00796dc6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00796dc9: je 0x796e9f */ if (fZ) goto L_00796e9f;
L_00796dcf:; BB(0x00796dcf);
    /* 00796dcf: lea ebx, [ebp + 0x40] */ r_ebx = (u32)(r_ebp+0x40u);
L_00796dd2:; BB(0x00796dd2);
    /* 00796dd2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00796dd4: add eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00796dd7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00796dd8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00796dda: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00796ddc: push 0xa9d510 */ { u32 v = 0xa9d510u; r_esp -= 4; W32(r_esp, v); }
    /* 00796de1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00796de2: call 0x4f745c */ r_esp -= 4; W32(r_esp, 0x796de7u); f_004f745c();
    /* 00796de7: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 00796de9: fcom dword ptr [0x97c930] */ fx_compare(ST(0), R_F32((u32)(0x97c930u))); 
    /* 00796def: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00796df1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00796df2: jae 0x796dff */ if (!fC) goto L_00796dff;
L_00796df4:; BB(0x00796df4);
    /* 00796df4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00796df6: mov eax, 0xbf800000 */ r_eax = 0xbf800000u;
    /* 00796dfb: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 00796dfd: jmp 0x796e11 */ goto L_00796e11;
L_00796dff:; BB(0x00796dff);
    /* 00796dff: fcomp dword ptr [0x97c92c] */ fx_compare(ST(0), R_F32((u32)(0x97c92cu))); FPOP();
    /* 00796e05: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00796e07: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00796e08: jbe 0x796e11 */ if ((fC||fZ)) goto L_00796e11;
L_00796e0a:; BB(0x00796e0a);
    /* 00796e0a: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00796e0f: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
L_00796e11:; BB(0x00796e11);
    /* 00796e11: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00796e17: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00796e1a: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00796e1d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00796e1f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00796e21: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00796e23: lea ebx, [edx + edx + 0xaae75c] */ r_ebx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 00796e2a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00796e2c: call 0x7c1180 */ r_esp -= 4; W32(r_esp, 0x796e31u); f_007c1180();
    /* 00796e31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00796e33: je 0x796e9c */ if (fZ) goto L_00796e9c;
L_00796e35:; BB(0x00796e35);
    /* 00796e35: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00796e37: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00796e39: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00796e3b: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 00796e41: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x796e46u); f_007c09fc();
    /* 00796e46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00796e48: je 0x796e51 */ if (fZ) goto L_00796e51;
L_00796e4a:; BB(0x00796e4a);
    /* 00796e4a: add dword ptr [0xa9d508], 1 */ { u32 ad = (u32)(0xa9d508u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00796e51:; BB(0x00796e51);
    /* 00796e51: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00796e53: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00796e55: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00796e57: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 00796e5d: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x796e62u); f_007c09fc();
    /* 00796e62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00796e64: je 0x796e75 */ if (fZ) goto L_00796e75;
L_00796e66:; BB(0x00796e66);
    /* 00796e66: mov eax, dword ptr [0xa9d508] */ r_eax = R32((u32)(0xa9d508u));
    /* 00796e6b: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00796e6e: mov dword ptr [0xa9d508], eax */ W32((u32)(0xa9d508u), r_eax);
    /* 00796e73: jmp 0x796e7a */ goto L_00796e7a;
L_00796e75:; BB(0x00796e75);
    /* 00796e75: mov eax, dword ptr [0xa9d508] */ r_eax = R32((u32)(0xa9d508u));
L_00796e7a:; BB(0x00796e7a);
    /* 00796e7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00796e7c: jge 0x796e8d */ if ((fS==fO)) goto L_00796e8d;
L_00796e7e:; BB(0x00796e7e);
    /* 00796e7e: mov dword ptr [0xa9d508], 2 */ W32((u32)(0xa9d508u), 0x2u);
    /* 00796e88: mov eax, 2 */ r_eax = 0x2u;
L_00796e8d:; BB(0x00796e8d);
    /* 00796e8d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00796e90: jl 0x796e9c */ if ((fS!=fO)) goto L_00796e9c;
L_00796e92:; BB(0x00796e92);
    /* 00796e92: mov dword ptr [0xa9d508], 0 */ W32((u32)(0xa9d508u), 0x0u);
L_00796e9c:; BB(0x00796e9c);
    /* 00796e9c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00796e9d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00796e9e: ret  */ FN_RET(0x00796db4); r_esp += 4; return;
L_00796e9f:; BB(0x00796e9f);
    /* 00796e9f: lea ebx, [ebp + 0x3c] */ r_ebx = (u32)(r_ebp+0x3cu);
    /* 00796ea2: jmp 0x796dd2 */ goto L_00796dd2;
}

void f_00796ea8(void) /* sub_796EA8 */
{
    FN_ENTER(0x00796ea8);
    /* 00796ea8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00796ea9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00796eaa: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00796eac: mov eax, dword ptr [0xa9d50c] */ r_eax = R32((u32)(0xa9d50cu));
    /* 00796eb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00796eb3: jne 0x796eba */ if (!fZ) goto L_00796eba;
L_00796eb5:; BB(0x00796eb5);
    /* 00796eb5: lea ebx, [ebp + 0x60] */ r_ebx = (u32)(r_ebp+0x60u);
    /* 00796eb8: jmp 0x796ec6 */ goto L_00796ec6;
L_00796eba:; BB(0x00796eba);
    /* 00796eba: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00796ebd: je 0x796f90 */ if (fZ) goto L_00796f90;
L_00796ec3:; BB(0x00796ec3);
    /* 00796ec3: lea ebx, [ebp + 0x68] */ r_ebx = (u32)(r_ebp+0x68u);
L_00796ec6:; BB(0x00796ec6);
    /* 00796ec6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00796ec8: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00796ecb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00796ecc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00796ece: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00796ed0: push 0xa9d510 */ { u32 v = 0xa9d510u; r_esp -= 4; W32(r_esp, v); }
    /* 00796ed5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00796ed6: call 0x4f745c */ r_esp -= 4; W32(r_esp, 0x796edbu); f_004f745c();
    /* 00796edb: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 00796edd: fcom dword ptr [0x97c928] */ fx_compare(ST(0), R_F32((u32)(0x97c928u))); 
    /* 00796ee3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00796ee5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00796ee6: jae 0x796ef0 */ if (!fC) goto L_00796ef0;
L_00796ee8:; BB(0x00796ee8);
    /* 00796ee8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00796eea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00796eec: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 00796eee: jmp 0x796f02 */ goto L_00796f02;
L_00796ef0:; BB(0x00796ef0);
    /* 00796ef0: fcomp dword ptr [0x97c924] */ fx_compare(ST(0), R_F32((u32)(0x97c924u))); FPOP();
    /* 00796ef6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00796ef8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00796ef9: jbe 0x796f02 */ if ((fC||fZ)) goto L_00796f02;
L_00796efb:; BB(0x00796efb);
    /* 00796efb: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00796f00: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
L_00796f02:; BB(0x00796f02);
    /* 00796f02: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00796f08: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00796f0b: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00796f0e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00796f10: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00796f12: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00796f14: lea ebx, [edx + edx + 0xaae75c] */ r_ebx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 00796f1b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00796f1d: call 0x7c1180 */ r_esp -= 4; W32(r_esp, 0x796f22u); f_007c1180();
    /* 00796f22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00796f24: je 0x796f8d */ if (fZ) goto L_00796f8d;
L_00796f26:; BB(0x00796f26);
    /* 00796f26: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00796f28: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00796f2a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00796f2c: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 00796f32: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x796f37u); f_007c09fc();
    /* 00796f37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00796f39: je 0x796f42 */ if (fZ) goto L_00796f42;
L_00796f3b:; BB(0x00796f3b);
    /* 00796f3b: add dword ptr [0xa9d50c], 1 */ { u32 ad = (u32)(0xa9d50cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00796f42:; BB(0x00796f42);
    /* 00796f42: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00796f44: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00796f46: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00796f48: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 00796f4e: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x796f53u); f_007c09fc();
    /* 00796f53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00796f55: je 0x796f66 */ if (fZ) goto L_00796f66;
L_00796f57:; BB(0x00796f57);
    /* 00796f57: mov eax, dword ptr [0xa9d50c] */ r_eax = R32((u32)(0xa9d50cu));
    /* 00796f5c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00796f5f: mov dword ptr [0xa9d50c], eax */ W32((u32)(0xa9d50cu), r_eax);
    /* 00796f64: jmp 0x796f6b */ goto L_00796f6b;
L_00796f66:; BB(0x00796f66);
    /* 00796f66: mov eax, dword ptr [0xa9d50c] */ r_eax = R32((u32)(0xa9d50cu));
L_00796f6b:; BB(0x00796f6b);
    /* 00796f6b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00796f6d: jge 0x796f7e */ if ((fS==fO)) goto L_00796f7e;
L_00796f6f:; BB(0x00796f6f);
    /* 00796f6f: mov dword ptr [0xa9d50c], 2 */ W32((u32)(0xa9d50cu), 0x2u);
    /* 00796f79: mov eax, 2 */ r_eax = 0x2u;
L_00796f7e:; BB(0x00796f7e);
    /* 00796f7e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00796f81: jl 0x796f8d */ if ((fS!=fO)) goto L_00796f8d;
L_00796f83:; BB(0x00796f83);
    /* 00796f83: mov dword ptr [0xa9d50c], 0 */ W32((u32)(0xa9d50cu), 0x0u);
L_00796f8d:; BB(0x00796f8d);
    /* 00796f8d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00796f8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00796f8f: ret  */ FN_RET(0x00796ea8); r_esp += 4; return;
L_00796f90:; BB(0x00796f90);
    /* 00796f90: lea ebx, [ebp + 0x64] */ r_ebx = (u32)(r_ebp+0x64u);
    /* 00796f93: jmp 0x796ec6 */ goto L_00796ec6;
}

void f_00796f72(void)
{
    FN_ENTER(0x00796f72);
    /* 00796f72: aad 0xa9 */ UNSUP(0x00796f72, "aad 0xa9");
    /* 00796f74: add byte ptr [edx], al */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00796f76: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00796f78: add byte ptr [eax + 2], bh */ { u32 ad = (u32)(r_eax+0x2u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00796f7e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00796f81: jl 0x796f8d */ if ((fS!=fO)) goto L_00796f8d;
L_00796f83:; BB(0x00796f83);
    /* 00796f83: mov dword ptr [0xa9d50c], 0 */ W32((u32)(0xa9d50cu), 0x0u);
L_00796f8d:; BB(0x00796f8d);
    /* 00796f8d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00796f8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00796f8f: ret  */ FN_RET(0x00796f72); r_esp += 4; return;
}

void f_00796f98(void) /* sub_796F98 */
{
    FN_ENTER(0x00796f98);
    /* 00796f98: mov dword ptr [0xa9d514], 0x3f800000 */ W32((u32)(0xa9d514u), 0x3f800000u);
    /* 00796fa2: mov dword ptr [0xa9d518], 0x41000000 */ W32((u32)(0xa9d518u), 0x41000000u);
    /* 00796fac: mov dword ptr [0xa9d51c], 0x3fc00000 */ W32((u32)(0xa9d51cu), 0x3fc00000u);
    /* 00796fb6: ret  */ FN_RET(0x00796f98); r_esp += 4; return;
}

void f_00796fb8(void) /* sub_796FB8 */
{
    FN_ENTER(0x00796fb8);
    /* 00796fb8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00796fb9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00796fbb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00796fbd: call 0x4f7454 */ r_esp -= 4; W32(r_esp, 0x796fc2u); f_004f7454();
    /* 00796fc2: mov eax, 0xa9d460 */ r_eax = 0xa9d460u;
    /* 00796fc7: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00796fca: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00796fcd: mov ecx, dword ptr [ebp + 0x40] */ r_ecx = R32((u32)(r_ebp+0x40u));
    /* 00796fd0: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00796fd2: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 00796fd5: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00796fd8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00796fdb: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00796fde: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00796fe1: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 00796fe4: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00796fe7: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 00796fea: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00796fed: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 00796ff0: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 00796ff3: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00796ff6: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 00796ff9: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 00796ffc: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 00796fff: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 00797002: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 00797005: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 00797008: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 0079700b: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 0079700e: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 00797011: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 00797014: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00797017: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 0079701a: mov edx, dword ptr [ebp + 0x34] */ r_edx = R32((u32)(r_ebp+0x34u));
    /* 0079701d: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 00797020: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 00797023: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 00797026: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 00797029: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 0079702c: mov dword ptr [eax + 0x40], ecx */ W32((u32)(r_eax+0x40u), r_ecx);
    /* 0079702f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00797030: ret  */ FN_RET(0x00796fb8); r_esp += 4; return;
}

