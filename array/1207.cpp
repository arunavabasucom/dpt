#include <stdc++.h>
using namespace std;
bool uniqueOccurrences(vector<int> &arr)
{
    set<int> st;
    unordered_map<int, int> umap;
    for (int num : arr)
    {
        umap[num]++;
    }
    for (auto pair : umap)
    {
        st.insert(pair.second);
    }
    return st.size() == umap.size() ? true : false;
}
int main()
{

    return 0;
}