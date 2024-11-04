//https://www.geeksforgeeks.org/problems/find-the-number-of-islands/1
#include <bits/stdc++.h>
using namespace std;


void dfs(int row, int col, vector<vector<int>>& vis, vector<vector<char>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    vis[row][col] = 1;
    queue<pair<int, int>> qu;
    qu.push({ row,col });
    while (!qu.empty()) {
        int row = qu.front().first;
        int col = qu.front().second;
        qu.pop();
        for (int drow = -1; drow <= 1;drow++) {
            for (int dcol = -1; dcol <= 1;dcol++) {
                int nrow = row + drow;
                int ncol = col + dcol;
                if (nrow >= 0 && nrow < n  && ncol >= 0 && ncol < m
                    && grid[nrow][ncol] == '1' && !vis[nrow][ncol]) {
                    vis[nrow][ncol] = 1;
                    qu.push({ nrow,ncol });
                }
            }
        }
    }
}
int numIslands(vector<vector<char>>& grid) {
    int count = 0;
    int n = grid.size();
    int m = grid[0].size();
    // visited islands
    vector<vector<int>> vis(n, vector<int>(m, 0));
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < m; col++) {
            if (!vis[row][col] && grid[row][col] == '1') {
                count++;
                dfs(row, col, vis, grid);
            }
        }
    }
    return count;
}
int main(){
    
    return 0;
}