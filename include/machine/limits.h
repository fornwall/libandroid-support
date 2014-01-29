#ifndef NDK_ANDROID_SUPPORT_MACHINE_LIMITS_H
#define NDK_ANDROID_SUPPORT_MACHINE_LIMITS_H

#include_next <machine/limits.h>

#undef MB_LEN_MAX
#define MB_LEN_MAX 4

#endif
