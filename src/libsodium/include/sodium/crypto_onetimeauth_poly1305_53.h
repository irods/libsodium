#ifndef crypto_onetimeauth_poly1305_53_H
#define crypto_onetimeauth_poly1305_53_H

#include "crypto_onetimeauth_poly1305.h"

#ifdef __cplusplus
extern "C" {
#endif

extern struct crypto_onetimeauth_poly1305_implementation
        crypto_onetimeauth_poly1305_53_implementation;

const char *crypto_onetimeauth_poly1305_53_implementation_name(void);
    
int crypto_onetimeauth_poly1305_53(unsigned char *out,
                                   const unsigned char *in,
                                   unsigned long long inlen,
                                   const unsigned char *k);
    
int crypto_onetimeauth_poly1305_53_verify(const unsigned char *h,
                                          const unsigned char *in,
                                          unsigned long long inlen,
                                          const unsigned char *k);

#ifdef __cplusplus
}
#endif

#endif