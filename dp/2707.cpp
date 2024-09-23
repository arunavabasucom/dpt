#include "../headers/stdc++.h";
using namespace std;

int helper(int i, int n, string &s, vector<int> &memo,
           unordered_set<string> &st) {
  // out of bound
  if (i >= n)
    return 0;
  if (memo[i] != -1)
    return memo[i];
  int result = 1 + helper(i + 1, n, s, memo, st);
  for (int j = i; j < n; j++) {
    string sst = s.substr(i, j - i + 1);
    if (st.count(sst)) {
      result = min(result, helper(j + 1, n, s, memo, st));
    }
  }

  return memo[i] = result;
}
int minExtraChar(string s, vector<string> &dictionary) {
  int n = s.size();
  unordered_set<string> st(dictionary.begin(),
                           dictionary.end()); // to check the dictonary
  vector<int> memo(n, -1);

  return helper(0, n, s, memo, st);
}
int main() {
  string st = "leetscode";
  vector<string> dict = {"leet", "code", "leetcode"};
  cout << minExtraChar(st, dict);
  return 0;
}