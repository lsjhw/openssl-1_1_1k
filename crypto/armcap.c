/*
 * Copyright 2011-2021 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <setjmp.h>
#include <signal.h>
#include <openssl/crypto.h>
#include "internal/cryptlib.h"

#include "arm_arch.h"

#if defined(__arm__) || defined(__arm)
unsigned int OPENSSL_armcap_P = ARMV7_NEON;
#else
unsigned int OPENSSL_armcap_P = ARMV8_AES | ARMV8_PMULL | ARMV8_SHA1 | ARMV8_SHA256;
#endif

void OPENSSL_cpuid_setup(void)
{
}

uint32_t OPENSSL_rdtsc(void)
{
    return 0;
}
