#include <iostream>
using namespace std;

bool bft_send(int total, int received) {
    return received >= total - (total/3);
}

int main() {
    cout << bft_send(10,7) << endl;
    return 0;
}
