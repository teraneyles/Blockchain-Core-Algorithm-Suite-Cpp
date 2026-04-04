#include <iostream>
using namespace std;

int adjust_difficulty(uint64_t time_used, int target_time, int old_diff) {
    if (time_used < target_time) return old_diff + 1;
    return old_diff - 1;
}

int main() {
    cout << adjust_difficulty(5, 10, 4) << endl;
    return 0;
}
