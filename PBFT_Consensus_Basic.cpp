#include <iostream>
using namespace std;

bool pbft_vote(int total_nodes, int agree) {
    return agree * 3 > total_nodes * 2;
}

int main() {
    cout << pbft_vote(7, 5) << endl;
    return 0;
}
