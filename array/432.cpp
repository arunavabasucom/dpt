#include <stdc++.h>
using namespace std;
class AllOne {
public:
    // key -> string
    unordered_map<string, int> umap; // key count
    set<pair<int, string>> st; // count key 
    AllOne() {
        umap.clear();
    }
    void inc(string key) {
        int n = umap[key];
        umap[key]++;
        st.erase({n, key}); // earse the old one
        st.insert({n + 1, key});
    }

    void dec(string key) {
        int n = umap[key];
        umap[key]--;
        st.erase({n, key}); // earse the old one
        if(umap[key]> 0)
            st.insert({n -1, key});
        else
            umap.erase(key);
    }

    string getMaxKey() {
        if(!st.empty())
            return st.rbegin()->second;
        return "";
    }

    string getMinKey() {
        if (!st.empty())
            return st.begin()->second;
        return "";
    }
};
int main() { return 0; }
