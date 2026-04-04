#include <iostream>
using namespace std;

uint64_t blind_msg(uint64_t msg, uint64_t blind) {
    return msg + blind;
}

uint64_t unblind_sig(uint64_t sig, uint64_t blind) {
    return sig - blind;
}

int main() {
    cout << unblind_sig(blind_msg(100, 50), 50) << endl;
    return 0;
}
