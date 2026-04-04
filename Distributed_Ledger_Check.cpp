#include <iostream>
#include <vector>
using namespace std;

bool ledger_valid(const vector<string>& hashes) {
    for (int i=1; i<hashes.size(); i++) {
        if (hashes[i] == hashes[i-1]) return false;
    }
    return true;
}

int main() {
    cout << ledger_valid({"h1","h2","h3"}) << endl;
    return 0;
}
