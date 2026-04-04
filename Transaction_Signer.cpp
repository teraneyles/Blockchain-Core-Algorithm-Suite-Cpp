#include <iostream>
#include <string>
using namespace std;

string sign_tx(const string& from, const string& to, uint64_t amount, uint64_t key) {
    string data = from + to + to_string(amount);
    uint64_t sig = 0;
    for (char c : data) sig ^= c + key;
    return "sig_" + to_string(sig);
}

int main() {
    cout << sign_tx("A", "B", 500, 123456) << endl;
    return 0;
}
