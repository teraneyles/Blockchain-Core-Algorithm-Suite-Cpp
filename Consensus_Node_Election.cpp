#include <iostream>
#include <vector>
using namespace std;

int elect_node(const vector<int>& stake) {
    int max_idx = 0;
    for (int i=1; i<stake.size(); i++) {
        if (stake[i] > stake[max_idx]) max_idx = i;
    }
    return max_idx;
}

int main() {
    cout << elect_node({100,200,150}) << endl;
    return 0;
}
