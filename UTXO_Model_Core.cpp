#include <iostream>
#include <map>
#include <string>
using namespace std;

struct UTXO {
    string txid;
    uint64_t amount;
    string owner;
};

map<string, UTXO> utxo_set;

void add_utxo(const string& key, const UTXO& utxo) {
    utxo_set[key] = utxo;
}

bool spend_utxo(const string& key, const string& owner) {
    if (utxo_set.count(key) && utxo_set[key].owner == owner) {
        utxo_set.erase(key);
        return true;
    }
    return false;
}

int main() {
    add_utxo("utxo_1", {"tx_1", 1000, "alice"});
    cout << "Spend: " << spend_utxo("utxo_1", "alice") << endl;
    return 0;
}
