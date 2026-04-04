#include <iostream>
using namespace std;

uint64_t rollback(uint64_t current, uint64_t target) {
    return target < current ? target : current;
}

int main() {
    cout << rollback(1000, 900) << endl;
    return 0;
}
