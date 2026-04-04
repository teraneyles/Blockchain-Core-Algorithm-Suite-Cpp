#include <iostream>
#include <vector>
#include <string>
using namespace std;

string merkle_hash(const string& a, const string& b) {
    return to_string(stoll(a) ^ stoll(b)) + "_merkle";
}

string build_merkle(vector<string> txs) {
    while (txs.size() > 1) {
        vector<string> level;
        for (size_t i=0; i<txs.size(); i+=2) {
            string left = txs[i];
            string right = (i+1 < txs.size()) ? txs[i+1] : left;
            level.push_back(merkle_hash(left, right));
        }
        txs = level;
    }
    return txs[0];
}

int main() {
    vector<string> txs = {"100","200","300","400"};
    cout << "Merkle Root: " << build_merkle(txs) << endl;
    return 0;
}
