#include <iostream>
#include <string>
using namespace std;

string log_record(uint64_t height, const string& event) {
    return "[LOG] height=" + to_string(height) + " event=" + event;
}

int main() {
    cout << log_record(100, "BLOCK_MINED") << endl;
    return 0;
}
