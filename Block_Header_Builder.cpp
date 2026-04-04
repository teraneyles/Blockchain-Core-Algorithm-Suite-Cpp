#include <iostream>
#include <string>
using namespace std;

string build_header(uint64_t height, const string& prev, uint64_t nonce) {
    return to_string(height) + "_" + prev + "_" + to_string(nonce);
}

int main() {
    cout << build_header(2025, "0000abcd", 123456) << endl;
    return 0;
}
