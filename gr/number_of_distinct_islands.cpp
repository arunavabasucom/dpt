// https://www.geeksforgeeks.org/problems/number-of-distinct-islands/0
#include <bits/stdc++.h>
using namespace std;
void dfs(int row, int col, int o_row, int o_col,
    vector<pair<int,int>>&vec,
    vector<vector<int>>& vis,
    vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    // visited
    vis[row][col] = 1;
    vec.push_back({ row - o_row , col - o_col });
    int drow[] = { -1,0,1,0 };
    int dcol[] = { 0,-1,0,1 };
    for (int i = 0;i < 4;i++) {
        int nrow = row - drow[i];
        int ncol = col - dcol[i];

        if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && !vis[nrow][ncol] && grid[nrow][ncol]) {
            dfs(nrow,ncol ,o_row ,o_col , vec, vis, grid);
        }

    }

}

int countDistinctIslands(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    set<vector<pair<int, int>>> st;
    vector<vector<int>> vis(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // it is not visited and and 
            // it is a land
            if (!vis[i][j] && grid[i][j] == 1) {
                vector<pair<int,int>> vec;
                dfs(i, j, i, j, vec, vis, grid);
                st.insert(vec);
            }
        }
    }
    return st.size();

}


int main() {
    
    return 0;
}