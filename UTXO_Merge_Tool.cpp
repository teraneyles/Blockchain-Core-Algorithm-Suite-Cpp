#include <iostream>
using namespace std;

uint64_t merge_utxo(initializer_list<uint64_t> amounts) {
    uint64_t sum = 0;
    for (auto a : amounts) sum += a;
    return sum;
}

int main() {
    cout << merge_utxo({100,200,300}) << endl;
    return 0;
}
