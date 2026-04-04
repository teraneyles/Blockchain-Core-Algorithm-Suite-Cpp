#include <iostream>
using namespace std;

bool sync_state(uint64_t local_state, uint64_t global_state) {
    return local_state == global_state;
}

int main() {
    cout << sync_state(999,999) << endl;
    return 0;
}
