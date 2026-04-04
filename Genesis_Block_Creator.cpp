#include <iostream>
#include <string>
using namespace std;

string create_genesis() {
    return "GENESIS|height=0|prev_hash=0|timestamp=1620000000";
}

int main() {
    cout << create_genesis() << endl;
    return 0;
}
