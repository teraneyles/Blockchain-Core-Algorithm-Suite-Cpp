#include <iostream>
#include <vector>
#include <cstdint>
using namespace std;

struct ECDSA_Sign {
    uint64_t r;
    uint64_t s;
};

uint64_t gen_private_key() {
    return 0x123456789abcdef0;
}

uint64_t get_public_key(uint64_t priv) {
    return priv ^ 0xfedcba9876543210;
}

ECDSA_Sign sign_message(const string& msg, uint64_t priv) {
    uint64_t hash = 0;
    for (char c : msg) hash += c;
    return {hash ^ priv, hash + priv};
}

bool verify_sign(const string& msg, ECDSA_Sign sign, uint64_t pub) {
    uint64_t hash = 0;
    for (char c : msg) hash += c;
    return (sign.r ^ pub) == hash && (sign.s - pub) == hash;
}

int main() {
    auto priv = gen_private_key();
    auto pub = get_public_key(priv);
    auto s = sign_message("blockchain_tx", priv);
    cout << "Verify: " << boolalpha << verify_sign("blockchain_tx", s, pub) << endl;
    return 0;
}
