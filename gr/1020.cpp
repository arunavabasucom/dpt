#include <arr.h>
#include <bits/stdc++.h>
using namespace std;
// TC - O(n*m)
// SC - O(n*m)
int numEnclaves(vector<vector<int>> &grid) {
  int n = grid.size();
  int m = grid[0].size();
  //{row,col}
  queue<pair<int, int>> qu;
  vector<vector<int>> vis(n, vector<int>(m, 0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      // borders
      if (i == 0 || j == 0 || i == n - 1 || j == m - 1) {
        if (grid[i][j] == 1) {
          qu.push({i, j});
          vis[i][j] = 1;
        }
      }
    }
  }
  int count = 0;
  int drow[] = {-1, 0, 1, 0};
  int dcol[] = {0, 1, 0, -1};
  while (!qu.empty()) {
    int row = qu.front().first;
    int col = qu.front().second;
    qu.pop();

    for (int i = 0; i < 4; i++) {
      int nrow = row + drow[i];
      int ncol = col + dcol[i];
      if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && !vis[nrow][ncol] &&
          grid[nrow][ncol]) {
        qu.push({nrow, ncol});
        vis[nrow][ncol] = 1;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (!vis[i][j] && grid[i][j])
        count++;
    }
  }

  return count;
}

int main() { return 0; }