#include <stdc++.h>
using namespace std;
int longestOnes(vector<int> &nums, int k)
{
    int l = 0, r = 0, maxlen = 0, zero = 0, n = nums.size();
    while (r < n)
    {
        if (nums[r] == 0)
            zero++;
        while (zero > k)
        {
            if (nums[l] == 0)
                zero--;
            l++;
        }
        maxlen = max(maxlen, r - l + 1);
        r++;
    }
    return maxlen;
}

int main()
{

    return 0;
}