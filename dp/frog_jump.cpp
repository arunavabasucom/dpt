// https://www.geeksforgeeks.org/problems/geek-jump/1
#include <stdc++.h>
using namespace std;

// MEMOSIZD
// TC - O(N)
// int check(vector<int> &height, int n, vector<int> &dparr) {
//   if (n == 0) {
//     return 0;
//   }
//   if (dparr[n] != -1) {
//     return dparr[n];
//   }
//   int left = check(height, n - 1, dparr) + abs(height[n - 1] - height[n]);
//   int right = INT_MAX;
//   if (n > 1) {
//     right = check(height, n - 2, dparr) + abs(height[n - 2] - height[n]);
//   }
//   return dparr[n] = min(left, right);
// }

// int minimumEnergy(vector<int> &height, int n) {
//   vector<int> dparr(n, -1);
//   return check(height, n - 1, dparr);
// }

// int minimumEnergy(vector<int> &height, int n) {
//   vector<int> dp(n, -1);
//   dp[0] = 0;
//   for (int i = 1; i < n; i++) {
//     int left = dp[i - 1] + abs(height[i] - height[i - 1]);
//     int right = INT_MAX;
//     if (i > 1) {
//       right = dp[i - 2] + abs(height[i] - height[i - 2]);
//     }
//     dp[i] = min(left, right);
//   }
//   return dp[n - 1];
// }

// SPACE OPTIMISED
int minimumEnergy(vector<int> &height, int n)
{
  vector<int> dp(n, -1);
  int prev2 = 0;
  int prev = 0;
  int curr = INT_MAX;
  // left
  for (int i = 1; i < n; i++)
  {
    int left = prev + abs(height[i] - height[i - 1]);
    int right = INT_MAX;
    if (i > 1)
    {
      right = prev2 + abs(height[i] - height[i - 2]);
    }
    curr = min(left, right);
    prev2 = prev;
    prev = curr;
  }
  return prev;
}

int main()
{
  vector<int> height = {10, 20, 30, 10};
  int n = 4;
  cout << minimumEnergy(height, n);
  return 0;
}
