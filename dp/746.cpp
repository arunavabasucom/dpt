#include "../headers/stdc++.h";
using namespace std;

/*
                        f(3) ->15

f(2) -> 20+10 = 30                         (1)->0+15

f(1)->0+15   f(0)->10                      f(0)->10

f(0)->10


*/

int helper(int n, vector<int> &cost, vector<int> &dp) {
  // 0 1 ..

  if (n <= 1) {
    return cost[n];
  }

  if (dp[n] != -1) {
    return dp[n];
  }
  int os = helper(n - 1, cost, dp);
  int ts = helper(n - 2, cost, dp);

  return dp[n] = cost[n] + min(os, ts);
}

int minCostClimbingStairs(vector<int> &cost) {
  int n = cost.size();
  vector<int> dp(n + 1, -1);
  return min(helper(n - 1, cost, dp), helper(n - 2, cost, dp));
}
int main() {
  vector<int> arr = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
  cout << minCostClimbingStairs(arr);
  return 0;
}