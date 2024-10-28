#include <stdc++.h>
using namespace std;
//  TC - O(N)
//  SC - O(10)
// TO OPTIMISED THIS WE CAN DO LIKE THIS
//  if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u')
int maxVowels(string s, int k)
{
    int count = 0;
    int total = 0;
    set<char> st = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
    // count the first k chars
    for (int i = 0; i < k; i++)
    {
        if (st.count(s[i]))
            total++;
    }
    count = max(count, total);
    for (int i = k; i < s.size(); i++)
    {
        if (st.count(s[i]))
            total++;
        if (st.count(s[i - k]))
            total--;
        count = max(count, total);
    }

    return count;
}
int main()
{

    return 0;
}