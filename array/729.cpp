#include <stdc++.h>
using namespace std;
// a<e && s<b  - overlapping
set<pair<int, int>> st; // start end
bool book(int start, int end)
{
    // get the lower bound from the set
    auto it = st.lower_bound({start, end});

    // check with next element
    if (it != st.end() && end > it->first)
    {
        return false;
    }

    // check with the prev element
    if (it != st.begin())
    {
        auto prevIt = prev(it);
        if (start < prevIt->second)
            return false;
    }
    st.insert({start, end});
    return true;
}
int main()
{
    return 0;
}