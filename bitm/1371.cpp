#include <stdc++.h>
using namespace std;

int findTheLongestSubstring(string s)
{
    int n = s.size(), maxlen = INT_MIN, mask = 0;
    unordered_map<int, int> umap(n, -2);
    for (int i = 0; i < n; i++)
    {
        switch (s[i])
        {
        case 'a':
            mask ^= 1;
            break;
        case 'e':
            mask ^= 2;
            break;
        case 'i':
            mask ^= 4;
            break;
        case 'o':
            mask ^= 8;
            break;
        case 'u':
            mask ^= 16;
            break;
        }

        int prev = umap[mask];
        // if we seen this mask previously
        if (prev == -2)
        {
            umap[mask] = i;
        }
        else
        {
            maxlen = max(maxlen, i - prev);
        }
    }
    return maxlen;
}

int main()
{

    return 0;
}