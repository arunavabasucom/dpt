#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> updateMatrix(vector<vector<int>> &mat) {
  int n = mat.size();
  int m = mat[0].size();
  //{{row,col},step}
  queue<pair<pair<int, int>, int>> qu;
  vector<vector<int>> vis(n, vector<int>(m, 0));
  vector<vector<int>> dis(n, vector<int>(m, 0));
  for (int r = 0; r < n; r++) {
    for (int c = 0; c < m; c++) {
      if (mat[r][c] == 0) {
        qu.push({{r, c}, 0});
        vis[r][c] = 1;
      } else {
        vis[r][c] = 0;
      }
    }
  }
  while (!qu.empty()) {
    int step = qu.front().second;
    int row = qu.front().first.first;
    int col = qu.front().first.second;
    dis[row][col] = step;
    qu.pop();
    int drow[] = {-1, 0, 1, 0};
    int dcol[] = {0, 1, 0, -1};
    for (int i = 0; i < 4; i++) {
      int nrow = row + drow[i];
      int ncol = col + dcol[i];
      if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
          vis[nrow][ncol] == 0) {
        qu.push({{nrow, ncol}, step + 1});
        vis[nrow][ncol] = 1;
      }
    }
  }
  return dis;
}

int main() { return 0; }