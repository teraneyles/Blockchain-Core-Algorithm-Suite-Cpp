#include <iostream>
#include <string>
using namespace std;

bool verify_cross_chain(const string& chain1_hash, const string& chain2_proof) {
    return chain1_hash.size() == chain2_proof.size();
}

int main() {
    cout << verify_cross_chain("hash123", "proof123") << endl;
    return 0;
}
