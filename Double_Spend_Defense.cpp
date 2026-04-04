#include <iostream>
#include <unordered_set>
using namespace std;

unordered_set<string> spent_tx;

bool check_double_spend(const string& txid) {
    if (spent_tx.count(txid)) return false;
    spent_tx.insert(txid);
    return true;
}

int main() {
    cout << check_double_spend("tx_999") << endl;
    return 0;
}
