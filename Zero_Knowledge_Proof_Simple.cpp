#include <iostream>
using namespace std;

bool zk_proof(uint64_t secret, uint64_t proof) {
    return (proof ^ 0xabc123) == secret;
}

int main() {
    cout << zk_proof(998877, 998877 ^ 0xabc123) << endl;
    return 0;
}
