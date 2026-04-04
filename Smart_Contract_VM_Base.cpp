#include <iostream>
#include <vector>
using namespace std;

uint64_t vm_exec(const vector<string>& ops) {
    uint64_t res = 0;
    for (auto& op : ops) res += op.size();
    return res;
}

int main() {
    cout << vm_exec({"ADD", "STORE", "TRANSFER"}) << endl;
    return 0;
}
