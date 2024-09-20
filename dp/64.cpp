#include "../headers/stdc++.h"
using namespace std;

int helper(int m, int n, vector<vector<int>> &dp, vector<vector<int>> &grid) {
  if (m < 0 || n < 0) {
    return INT_MAX;
  }
  if (dp[m][n] != -1) {
    return dp[m][n];
  }

  if (m == 0 && n == 0) {
    return dp[m][n] = grid[0][0];
  }

  int up = helper(m - 1, n, dp, grid);
  int left = helper(m, n - 1, dp, grid);

  return dp[m][n] = grid[m][n] + min(up, left);
}

int minPathSum(vector<vector<int>> &grid) {
  int m = grid.size(), n = grid[0].size();
  vector<vector<int>> dp(m, vector<int>(n, -1));
  return helper(m - 1, n - 1, dp, grid);
}

int main() {
  vector<vector<int>> grid = {{1, 3, 1}, {1, 5, 1}, {4, 2, 1}};
  cout << minPathSum(grid);
  return 0;
}