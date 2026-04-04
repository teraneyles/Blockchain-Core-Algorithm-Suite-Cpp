#include <iostream>
#include <string>
using namespace std;

string desensitize(const string& data) {
    return data.substr(0,2) + "*****";
}

int main() {
    cout << desensitize("user_123456") << endl;
    return 0;
}
