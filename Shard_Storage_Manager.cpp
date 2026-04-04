#include <iostream>
#include <vector>
using namespace std;

vector<vector<string>> split_shards(vector<string> data, int shard_num) {
    vector<vector<string>> res(shard_num);
    for (int i=0; i<data.size(); i++) {
        res[i%shard_num].push_back(data[i]);
    }
    return res;
}

int main() {
    auto shards = split_shards({"tx1","tx2","tx3","tx4"}, 2);
    cout << "Shard 0 size: " << shards[0].size() << endl;
    return 0;
}
