#include <stdc++.h>
using namespace std;
bool closeStrings(string word1, string word2)
{
    unordered_map<int, int> freq1(26, 0);
    unordered_map<int, int> freq2(26, 0);
    // get the freq of each words
    for (char c : word1)
    {
        freq1[c - 'a']++;
    }
    for (char c : word2)
    {
        freq2[c - 'a']++;
    }
    // iterate and check the freq
    for (int i = 0; i < 26; i++)
    {
        if (freq1[i] != freq2[i])
        {
            return false;
        }
    }
    sort(freq1.begin(), freq1.end());
    sort(freq2.begin(), freq2.end());
    // check freq in sorted order
    for (int i = 0; i < 26; i++)
    {
        if (freq1[i] != freq2[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{

    return 0;
}
