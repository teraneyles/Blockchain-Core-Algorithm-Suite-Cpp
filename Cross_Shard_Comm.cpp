#include <iostream>
#include <string>
using namespace std;

string cross_shard_msg(int from, int to, const string& data) {
    return "SHARD_" + to_string(from) + "->" + to_string(to) + ":" + data;
}

int main() {
    cout << cross_shard_msg(1,2,"tx_data") << endl;
    return 0;
}
