#include <iostream>
#include <string>
using namespace std;

string compress_tx(const string& raw) {
    return raw.substr(0, raw.size()/2);
}

int main() {
    cout << compress_tx("abcdefgh1234") << endl;
    return 0;
}
