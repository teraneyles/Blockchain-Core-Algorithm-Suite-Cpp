#include <iostream>
#include <string>
using namespace std;

string serialize(uint64_t height, const string& hash) {
    return to_string(height) + "|" + hash;
}

void deserialize(const string& data, uint64_t& h, string& hash) {
    h = stoll(data.substr(0, data.find('|')));
    hash = data.substr(data.find('|')+1);
}

int main() {
    uint64_t h; string hash;
    deserialize(serialize(100, "abcd"), h, hash);
    cout << h << " " << hash << endl;
    return 0;
}
