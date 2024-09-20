#include "../headers/stdc++.h";
using namespace std;
int equalPairs(vector<vector<int>> &grid) {
  int ans = 0, m = grid.size(), n = grid[0].size();
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      bool isEqual = false;
      for (int k = 0; k < n; k++) {
        if (grid[i][j] == grid[j][i]) {
          isEqual = true;
        }
      }
    }
    if (isEqual)
      ans++;
  }
  return ans;
}
int main() {
  vector<vector<int>> arr = {{3, 2, 1}, {1, 7, 6}, {2, 7, 7}};
  cout << equalPairs(arr);
  return 0;
}