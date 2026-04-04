#include <iostream>
#include <bitset>
#include <string>
using namespace std;

const int SIZE = 1024;
bitset<SIZE> filter;

uint64_t hash1(const string& s) {
    uint64_t res = 0;
    for (char c : s) res = res * 31 + c;
    return res % SIZE;
}

uint64_t hash2(const string& s) {
    uint64_t res = 1;
    for (char c : s) res = res * 17 + c + 7;
    return res % SIZE;
}

void add_tx(const string& txid) {
    filter.set(hash1(txid));
    filter.set(hash2(txid));
}

bool exist_tx(const string& txid) {
    return filter.test(hash1(txid)) && filter.test(hash2(txid));
}

int main() {
    add_tx("tx_001");
    cout << "Exist: " << boolalpha << exist_tx("tx_001") << endl;
    return 0;
}
