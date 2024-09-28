#include <stdc++.h>
using namespace std;
double findMaxAverage(vector<int> &nums, int k)
{
    double total = 0;
    double ans = INT_MIN;
    int n = nums.size();
    for (int i = 0; i < k; i++)
    {
        total += nums[i];
    }
    double avg = total / k;
    ans = max(ans, avg);
    for (int i = k; i < n; i++)
    {
        total += nums[i] - nums[i - k];
        avg = total / k;
        ans = max(ans, avg);
    }
    return ans;
}
int main()
{

    return 0;
}