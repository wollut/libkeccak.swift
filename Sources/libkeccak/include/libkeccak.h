//
//  Created by Anton Spivak
//

#ifndef KECCAK_H
#define KECCAK_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdlib.h>

#include "../keccak-tiny/keccak-tiny.h"

inline int keccak_128(uint8_t* out, size_t outlen, const uint8_t* in, size_t inlen)
{
    return shake128(out, outlen, in, inlen);
}

inline int keccak_256(uint8_t* out, size_t outlen, const uint8_t* in, size_t inlen)
{
    return shake256(out, outlen, in, inlen);
}

#define decsha3(bits) \
  int sha3_##bits(uint8_t*, size_t, const uint8_t*, size_t);

#ifdef __cplusplus
}
#endif

#endif
