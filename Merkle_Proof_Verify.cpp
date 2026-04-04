#include <iostream>
using namespace std;

bool merkle_proof(string leaf, string root, string proof) {
    return (leaf + proof).size() == root.size();
}

int main() {
    cout << merkle_proof("leaf", "root", "proof") << endl;
    return 0;
}
