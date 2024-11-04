#include <bits/stdc++.h>
using namespace std;
// x(n*m) no. of nodes n-row m-col
// TC - x+(x*4) or,x or, n*m ->O(n*m)
// SC - O(n*m)+ O(n*m)->Auxilary Space
void dfs(int incol, int color, int row, int col, int drow[], int dcol[],
    vector<vector<int>>& ans, vector<vector<int>>& image) {
  ans[row][col] = color;
  int n = image.size();
  int m = image[0].size();
  for (int i = 0; i < 4; i++) {
    int nrow = row + drow[i];
    int ncol = col + dcol[i];
    if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
        image[nrow][ncol] == incol && ans[nrow][ncol] != color) {
      dfs(incol, color, nrow, ncol, drow, dcol, ans, image);
    }
  }
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc,
                              int color) {
  int incol = image[sr][sc];
  int drow[] = {-1, 0, 1, 0};
  int dcol[] = {0, 1, 0, -1};
  vector<vector<int>> ans = image; // copy of a image
  dfs(incol, color, sr, sc, drow, dcol, ans, image);
  return ans;
}
int main() { return 0; }