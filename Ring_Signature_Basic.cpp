#include <iostream>
#include <vector>
using namespace std;

uint64_t ring_sign(const vector<uint64_t>& keys, uint64_t msg) {
    uint64_t sig = msg;
    for (auto k : keys) sig ^= k;
    return sig;
}

int main() {
    cout << ring_sign({111,222,333}, 444) << endl;
    return 0;
}
