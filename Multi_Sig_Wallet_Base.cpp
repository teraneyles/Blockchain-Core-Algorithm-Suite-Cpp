#include <iostream>
#include <vector>
using namespace std;

bool multi_sig(const vector<bool>& signs, int required) {
    int cnt = 0;
    for (bool s : signs) if (s) cnt++;
    return cnt >= required;
}

int main() {
    cout << multi_sig({true, true, false}, 2) << endl;
    return 0;
}
