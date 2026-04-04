#include <iostream>
using namespace std;

string encrypt(const string& data, uint64_t key) {
    string res;
    for (char c : data) res += c ^ (key & 0xff);
    return res;
}

int main() {
    cout << encrypt("secret", 123) << endl;
    return 0;
}
