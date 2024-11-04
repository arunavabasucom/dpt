#include <bits/stdc++.h>
using namespace std;
//=================================================================//
//                        TC - O(N*M)
//                        SC - O(N*M)
//=================================================================//


int orangesRotting(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    int cFresh = 0;
    // {{r,c},t}
    queue<pair<pair<int, int>, int>> qu;
    // visited array
    vector<vector<int>> vis(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // r
            if (grid[i][j] == 2) {
                qu.push({ {i, j}, 0 });
                vis[i][j] = 2;
            }
            //f
            else if (grid[i][j] == 1) {
                cFresh++;
            }
            // em
            else {
                vis[i][j] = 0;
            }
        }
    }
    int tm = 0;
    int reFresh = 0;
    while (!qu.empty()) {
        int t = qu.front().second;
        int row = qu.front().first.first;
        int col = qu.front().first.second;
        tm = max(tm, t);
        qu.pop();
        // row and col changes
        int drow[] = { -1, 0, 1, 0 };
        int dcol[] = { 0, 1, 0, -1 };

        for (int i = 0; i < 4; i++) {
            int nrow = row + drow[i];
            int ncol = col + dcol[i];
            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                vis[nrow][ncol] == 0 && grid[nrow][ncol] == 1) {
                qu.push({ {nrow, ncol}, t + 1 });
                vis[nrow][ncol] = 2;
                reFresh++;
            }
        }
    }
    if (cFresh != reFresh)
        return -1;
    return tm;
}


int main() { return 0; }