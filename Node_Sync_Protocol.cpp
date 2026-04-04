#include <iostream>
using namespace std;

bool sync_node(uint64_t local, uint64_t remote) {
    return remote > local;
}

int main() {
    cout << sync_node(100, 150) << endl;
    return 0;
}
