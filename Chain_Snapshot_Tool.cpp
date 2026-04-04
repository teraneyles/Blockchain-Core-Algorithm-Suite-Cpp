#include <iostream>
#include <string>
using namespace std;

string snapshot(uint64_t height, const string& state) {
    return "SNAP|height=" + to_string(height) + "|state=" + state;
}

int main() {
    cout << snapshot(5000, "active") << endl;
    return 0;
}
