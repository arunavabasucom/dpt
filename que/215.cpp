#include <stdc++.h>
using namespace std;
int findKthLargest(vector<int> &nums, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int num : nums)
    {
        pq.push(num);
        if (!pq.empty() && pq.size() > k)
        {
            pq.pop();
        }
    }
    return pq.top();
}
int main()
{
    vector<int> arr = {3, 2, 1, 5, 6, 4};
    cout << findKthLargest(arr, 2);
    return 0;
}