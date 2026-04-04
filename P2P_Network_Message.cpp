#include <iostream>
#include <string>
using namespace std;

struct P2P_Msg {
    string type;
    string data;
    uint64_t id;
};

string pack_msg(const P2P_Msg& msg) {
    return msg.type + ":" + msg.data + ":" + to_string(msg.id);
}

int main() {
    cout << pack_msg({"BLOCK", "hash123", 1}) << endl;
    return 0;
}
