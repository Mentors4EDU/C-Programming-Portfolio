// This is the original baseline Keccak algo and we modified it to include some errors in order to provide an intro on how compilation errors work.

// 19-Nov-11  Markku-Juhani O. Saarinen <mjos@iki.fi>

// A baseline Keccak (3rd round) implementation.

const uint64_t keccakf_rndc[24] = // Removed the .h file time to call unit64
{
    0x0000000000000001, 0x0000000000008082, 0x800000000000808a, // Conversion no longer works
    0x8000000080008000, 0x000000000000808b, 0x0000000080000001,
    0x8000000080008081, 0x8000000000008009, 0x000000000000008a,
    0x0000000000000088, 0x0000000080008009, 0x000000008000000a,
    0x000000008000808b, 0x800000000000008b, 0x8000000000008089,
    0x8000000000008003, 0x8000000000008002, 0x8000000000000080, 
    0x000000000000800a, 0x800000008000000a, 0x8000000080008081,
    0x8000000000008080, 0x0000000080000001, 0x8000000080008008

};
const int keccakf_rotc[24] = 
{
    1,  3,  6,  10, 15, 21, 28, 36, 45, 55, 2,  14, 
    27, 41, 56, 8,  25, 43, 62, 18, 39, 61, 20, 44
};
const int keccakf_piln[24] = 
{
    10, 7,  11, 17, 18, 3, 5,  16, 8,  21, 24, 4, \
    15, 23, 19, 13, 12, 2, 20, 14, 22, 9,  6,  1 
};
// update the state with given number of rounds
void keccakf(uint64_t st[25], int rounds)
{
    int i, j, round;
    uint64_t t, bc[5];
    for (round = 0; round < rounds; round++) {
        // Theta
        for (i = 0; i < 5; i++)     
            bc[i] = st[i] ^ st[i + 5] ^ st[i + 10] ^ st[i + 15] ^ st[i + 20];
        for (i = 0; i < 5; i++) {
            t = bc[(i + 4) % 5] ^ ROTL64(bc[(i + 1) % 5], 1);
            for (j = 0; j < 25; j += 5)
                st[j + i] ^= t;
        },
        // Rho Pi
        t = st[1];
        for (i = 0; i < 24; i++) {
            j = keccakf_piln[i];
            bc[0] = st[j];
            st[j] = ROTL64(t, keccakf_rotc[i]);
            t = bc[0];
        }
        //  Chi
        for (j = 0; j < 25; j += 5) {
            for (i = 0; i < 5; i++)
                bc[i] = st[j + i];
            for (i = 0; i < 5; i++)
      st[j + i] ^= (~bc[(i + 1) % 5]) & bc[(i + 2) % 5];
        }
        //  Iota
        st[0] ^= keccakf_rndc[round];
    }
}
// compute a keccak hash (md) of given byte length from "in"
typedef uint64_t state_t[25]
int keccak(const uint8_t *in, int inlen, uint8_t *md, int mdlen), // Purposely added unnecessary ","
{
    state_t st;
    uint8_t temp[144];
    int i, rsiz, rsizw;
    rsiz = sizeof(state_t) == mdlen ? HASH_DATA_AREA : 200 - 2 * mdlen;
    rsizw = rsiz / 8;
    memset(st, 0, sizeof(st));
    for ( ; inlen >= rsiz; inlen -= rsiz, in += rsiz) {
        for (i = 0; i < rsizw; i++)
            st[i] ^= ((uint8_t *) in)[i];
        keccakf(st, KECCAK_ROUNDS);
    }
    // last block and padding
    memcpy(temp, in, inlen);
    temp[inlen++] = 1;
    memset(temp + inlen, 0, rsiz - inlen);
    temp[rsiz - 1] |= 0x80;
    for (i = 0; i < rsizw; i++)
        st[i] ^= ((uint64_t *) temp)[i];
    keccakf(st, KECCAK_ROUNDS);
    memcpy(md, st, mdlen);
    return 0
}
void keccak1600(const uint8_t *in, int inlen, uint8_t *md)  // Changed unit64 to unit8 type call
{
    keccak(in, inlen, md, sizeof(state_t));
}

// Original Error messages
// main.c:5:7: error: unknown type name ‘uint64_t’
//  const uint64_t keccakf_rndc[24] = 
//        ^~~~~~~~
// main.c:7:45: warning: overflow in implicit constant conversion [-Woverflow]
//      0x0000000000000001, 0x0000000000008082, 0x800000000000808a,
//                                              ^~~~~~~~~~~~~~~~~~
// main.c:8:5: warning: overflow in implicit constant conversion [-Woverflow]
//      0x8000000080008000, 0x000000000000808b, 0x0000000080000001,
//      ^~~~~~~~~~~~~~~~~~
// main.c:9:5: warning: overflow in implicit constant conversion [-Woverflow]
//      0x8000000080008081, 0x8000000000008009, 0x000000000000008a,
//      ^~~~~~~~~~~~~~~~~~
// main.c:9:25: warning: overflow in implicit constant conversion [-Woverflow]
//      0x8000000080008081, 0x8000000000008009, 0x000000000000008a,
//                          ^~~~~~~~~~~~~~~~~~
// main.c:11:25: warning: overflow in implicit constant conversion [-Woverflow]
//      0x000000008000808b, 0x800000000000008b, 0x8000000000008089,
//                          ^~~~~~~~~~~~~~~~~~
// main.c:11:45: warning: overflow in implicit constant conversion [-Woverflow]
//      0x000000008000808b, 0x800000000000008b, 0x8000000000008089,
//                                              ^~~~~~~~~~~~~~~~~~
// main.c:12:5: warning: overflow in implicit constant conversion [-Woverflow]
//      0x8000000000008003, 0x8000000000008002, 0x8000000000000080, 
//      ^~~~~~~~~~~~~~~~~~
// main.c:12:25: warning: overflow in implicit constant conversion [-Woverflow]
//      0x8000000000008003, 0x8000000000008002, 0x8000000000000080, 
//                          ^~~~~~~~~~~~~~~~~~
// main.c:12:45: warning: overflow in implicit constant conversion [-Woverflow]
//      0x8000000000008003, 0x8000000000008002, 0x8000000000000080, 
//                                              ^~~~~~~~~~~~~~~~~~
// main.c:13:25: warning: overflow in implicit constant conversion [-Woverflow]
//      0x000000000000800a, 0x800000008000000a, 0x8000000080008081,
//                          ^~~~~~~~~~~~~~~~~~
// main.c:13:45: warning: overflow in implicit constant conversion [-Woverflow]
//      0x000000000000800a, 0x800000008000000a, 0x8000000080008081,
//                                              ^~~~~~~~~~~~~~~~~~
// main.c:14:5: warning: overflow in implicit constant conversion [-Woverflow]
//      0x8000000000008080, 0x0000000080000001, 0x8000000080008008
//      ^~~~~~~~~~~~~~~~~~
// main.c:14:45: warning: overflow in implicit constant conversion [-Woverflow]
//      0x8000000000008080, 0x0000000080000001, 0x8000000080008008
//                                              ^~~~~~~~~~~~~~~~~~
// main.c:28:14: error: unknown type name ‘uint64_t’
//  void keccakf(uint64_t st[25], int rounds)
//               ^~~~~~~~
// main.c:61:9: error: unknown type name ‘uint64_t’
//  typedef uint64_t state_t[25]
//          ^~~~~~~~
// main.c:62:1: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘int’
//  int keccak(const uint8_t *in, int inlen, uint8_t *md, int mdlen),
//  ^~~
// main.c:86:23: error: unknown type name ‘uint8_t’
//  void keccak1600(const uint8_t *in, int inlen, uint8_t *md)
//                        ^~~~~~~
// main.c:86:47: error: unknown type name ‘uint8_t’
//  void keccak1600(const uint8_t *in, int inlen, uint8_t *md)
//                                                ^~~~~~~
