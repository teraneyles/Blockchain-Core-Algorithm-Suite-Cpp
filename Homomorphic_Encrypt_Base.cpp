#include <iostream>
using namespace std;

uint64_t he_add(uint64_t a, uint64_t b) {
    return a ^ b;
}

int main() {
    cout << he_add(123, 456) << endl;
    return 0;
}
