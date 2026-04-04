#include <iostream>
#include <string>
using namespace std;

string quantum_hash(const string& input) {
    uint64_t h = 0x8899aabbccddeeff;
    for (char c : input) {
        h ^= (h << 7) | (h >> 5);
        h += static_cast<uint8_t>(c);
    }
    return "qhash_" + to_string(h);
}

int main() {
    cout << quantum_hash("block_data") << endl;
    return 0;
}
