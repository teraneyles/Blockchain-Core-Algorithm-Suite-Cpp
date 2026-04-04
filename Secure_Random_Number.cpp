#include <iostream>
#include <chrono>
using namespace std;

uint64_t secure_rand() {
    auto seed = chrono::system_clock::now().time_since_epoch().count();
    return seed ^ 0x1122334455667788;
}

int main() {
    cout << secure_rand() << endl;
    return 0;
}
