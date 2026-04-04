#include <iostream>
#include <chrono>
using namespace std;

uint64_t get_block_ts() {
    return chrono::system_clock::now().time_since_epoch().count() / 1000000;
}

int main() {
    cout << "Timestamp: " << get_block_ts() << endl;
    return 0;
}
