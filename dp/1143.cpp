#include <stdc++.h>
using namespace std;
// subsequence of 3 length array is 2^3
// TC - O(N*M)
// SC - O(N*M) + O(N+M)
/*
int helper(int i, int j, string &s1, string &s2, vector<vector<int>> &dp) {
  if (i < 0 || j < 0) {
    return 0;
  }
  if (dp[i][j] != -1) {
    return dp[i][j];
  }
  if (s1[i] == s2[j]) {
    return dp[i][j] = 1 + helper(i - 1, j - 1, s1, s2, dp);
  }

  return dp[i][j] =
             max(helper(i - 1, j, s1, s2, dp), helper(i, j - 1, s1, s2, dp));
}

int longestCommonSubsequence(string text1, string text2) {
  int t1len = text1.size();
  int t2len = text2.size();
  vector<vector<int>> dp(t1len + 1, vector<int>(t2len + 1, -1));
  return helper(t1len - 1, t2len - 1, text1, text2, dp);
}
*/
int longestCommonSubsequence(string text1, string text2)
{
}
int main()
{
  cout << longestCommonSubsequence("abcde", "ace");
  return 0;
}