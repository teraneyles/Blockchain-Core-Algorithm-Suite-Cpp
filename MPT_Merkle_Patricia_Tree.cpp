#include <iostream>
#include <map>
using namespace std;

map<string, string> mpt;

void mpt_insert(const string& path, const string& val) {
    mpt[path] = val;
}

string mpt_get(const string& path) {
    return mpt[path];
}

int main() {
    mpt_insert("a.b.c", "1000");
    cout << mpt_get("a.b.c") << endl;
    return 0;
}
