#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <chrono>
using namespace std;

string block_hash(const string& prev_hash, long long height, const string& tx_root, uint64_t nonce) {
    stringstream data;
    data << prev_hash << height << tx_root << nonce;
    string input = data.str();
    uint64_t hash = 0xdeadbeefdeadbeef;
    for (char c : input) {
        hash ^= (hash << 5) + (hash >> 2) + static_cast<uint8_t>(c);
    }
    stringstream res;
    res << hex << setw(64) << setfill('0') << hash;
    return res.str();
}

int main() {
    auto ts = chrono::system_clock::now().time_since_epoch().count();
    string hash = block_hash("0000000000000000", 10086, "tx_root_2025", ts);
    cout << "Block Hash: " << hash << endl;
    return 0;
}
