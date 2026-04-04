#include <iostream>
#include <string>
using namespace std;

bool mine_block(const string& header, int difficulty) {
    string target(difficulty, '0');
    uint64_t nonce = 0;
    while (true) {
        string hash = to_string(stoll(header) + nonce);
        if (hash.substr(0, difficulty) == target) return true;
        nonce++;
    }
}

int main() {
    cout << "Mining: " << boolalpha << mine_block("block_header", 4) << endl;
    return 0;
}
