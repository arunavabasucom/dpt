#include <stdc++.h>
using namespace std;
// ith row - i+1 element
// 0-1, 1-2
// TC - O(n*n)
// SC - O(N)
/*
int helper(int i, int j, vector<vector<int>> &memo,
           vector<vector<int>> &triangle) {

  if (i == triangle.size() - 1)
    return triangle[i][j];
  if (memo[i][j] != -1)
    return memo[i][j];
  // down way
  int d = triangle[i][j] + helper(i + 1, j, memo, triangle);
  // diagonal way
  int dg = triangle[i][j] + helper(i + 1, j + 1, memo, triangle);

  return memo[i][j] = min(d, dg);
}

int minimumTotal(vector<vector<int>> &triangle) {
  int n = triangle.size();
  vector<vector<int>> memo(n, vector<int>(n,-1));
  return helper(0, 0, memo, triangle);
}
*/
//=================================================================//
//                        TABULATION
// TC - O(N*N)
// SC - O(N*N)
//=================================================================//
/*
int minimumTotal(vector<vector<int>> &triangle){
    int n = triangle.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));
    // BASE CASE
    for (int j = 0; j < n; j++){
        dp[n - 1][j] = triangle[n - 1][j];
    }
    for (int i = n - 2;i >= 0; i--){
        for (int j = i; j >=  0; j--){
            int d = triangle[i][j] + dp[i + 1][j];
            int dg = triangle[i][j] + dp[i+ 1][j + 1];
            dp[i][j] = min(d, dg);
        }
    }
    return dp[0][0];
}
*/

//=================================================================//
//                        TABULATION SPACE OPTIMISED
// TC - O(N*N)
// SC - O(N)
//=================================================================//

int minimumTotal(vector<vector<int>> &triangle)
{
  int n = triangle.size();
  vector<int> front(n);
  // BASE CASE
  for (int j = 0; j < n; j++)
  {
    front[j] = triangle[n - 1][j];
  }
  for (int i = n - 2; i >= 0; i--)
  {
    vector<int> curr(n);
    for (int j = i; j >= 0; j--)
    {
      int d = triangle[i][j] + front[j];
      int dg = triangle[i][j] + front[j + 1];
      curr[j] = min(d, dg);
    }
    front = curr;
  }
  return front[0];
}
int main()
{
  vector<vector<int>> arr = {{2}, {3, 4}, {6, 5, 7}, {4, 1, 8, 3}};
  cout << minimumTotal(arr);
  return 0;
}