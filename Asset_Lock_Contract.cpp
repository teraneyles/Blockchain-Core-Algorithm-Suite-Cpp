#include <iostream>
using namespace std;

bool lock_asset(uint64_t unlock_ts, uint64_t now) {
    return now < unlock_ts;
}

int main() {
    cout << lock_asset(2000000000, 1700000000) << endl;
    return 0;
}
