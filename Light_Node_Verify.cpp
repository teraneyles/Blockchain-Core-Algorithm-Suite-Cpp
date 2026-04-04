#include <iostream>
using namespace std;

bool light_verify(const string& block_hash, const string& merkle_root) {
    return block_hash.substr(0,4) == merkle_root.substr(0,4);
}

int main() {
    cout << light_verify("0000abcd", "00001234") << endl;
    return 0;
}
