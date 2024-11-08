#include <stdc++.h>
using namespace std;
// m - row
// n - column

//=================================================================//
//                        RECURSIVE
//                    TC - (2^M*N)
//                    SC - (M-1)+(N-1)
//=================================================================//

//=================================================================//
//                        MEMOSIED
//                TC - O(N*M)
//                SC - O(N+M) + O(N*M)[2D VECTOR ARRAY]
//=================================================================//

// int helper(int m, int n, vector<vector<int>> &dp) {
//   if (m < 0 || n < 0) {
//     return 0;
//   }
//   if (dp[m][n] != -1) {
//     return dp[m][n];
//   }

//   if (m == 0 && n == 0) {
//     return dp[m][n] = 1;
//   }

//   int up = helper(m - 1, n, dp);
//   int left = helper(m, n - 1, dp);
//   int sum = left + up;
//   return dp[m][n] = sum;
// }

// int uniquePaths(int m, int n) {
//   vector<vector<int>> dp(m, vector<int>(n, -1));
//   return helper(m - 1, n - 1, dp);
// }

//=================================================================//
//                        TABULIZED
//                      TC - O(M*N)
//                      SC - O(M*N)
//=================================================================//

// int uniquePaths(int m, int n) {
//   vector<vector<int>> dp(m, vector<int>(n, -1));
//   dp[0][0] = 1;
//   for (int i = 0; i < m; i++) {
//     for (int j = 0; j < n; j++) {
//       if (i == 0 && j == 0) {
//         dp[i][j] = 1;
//       } else {
//         int up = 0, left = 0;
//         if (i > 0) {
//           up = dp[i - 1][j];
//         }
//         if (j > 0) {
//           left = dp[i][j - 1];
//         }
//         dp[i][j] = up + left;
//       }
//     }
//   }
//   return dp[m - 1][n - 1];
// }
int uniquePaths(int m, int n)
{

  vector<int> prev(n, 0);

  for (int i = 0; i < m; i++)
  {
    vector<int> curr(n, 0);
    for (int j = 0; j < n; j++)
    {
      if (i == 0 && j == 0)
      {
        curr[j] = 1;
      }
      else
      {
        int up = 0, left = 0;
        if (i > 0)
        {
          up = prev[j];
        }
        if (j > 0)
        {
          left = curr[j - 1];
        }
        curr[j] = up + left;
      }
    }
    prev = curr;
  }
  return prev[n - 1];
}
int main()
{
  cout << uniquePaths(3, 7);
  return 0;
}
