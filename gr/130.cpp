#include <arr.h>
#include <bits/stdc++.h>
using namespace std;
// TC - O(n*m)
// SC - O(n*m)
void dfs(int row, int col, int drow[], int dcol[], vector<vector<int>>& vis, vector<vector<char>>& mat) {
    int n = mat.size();
    int m = mat[0].size();
    vis[row][col] = 1;
    for (int i = 0;i < 4;i++) {
        int nrow = row + drow[i];
        int ncol = col + dcol[i];    
        if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && !vis[nrow][ncol] && mat[nrow][ncol] == 'O') {
            dfs(nrow, ncol, drow, dcol, vis, mat);

        }

    }
}
void solve(vector<vector<char>>& board) {
    int n = board.size();
    int m = board[0].size();
    int drow[] = { -1,0,1,0 };
    int dcol[] = { 0,1,0,-1 };

    vector<vector<int>> vis(n, vector<int>(m, 0));
    // row
    for (int i = 0;i < m; i++) {
        // for the 1st row
        if (!vis[0][i] && board[0][i] == 'O') {
            dfs(0, i, drow, dcol, vis, board);
        }
        // for the last row
        if (!vis[n-1][i] && board[n-1][i] == 'O') {
            dfs(n-1, i, drow, dcol, vis, board);
        }
    }
    // column
    for (int i = 0;i < n; i++) {
        // for the 1st col
        if (!vis[i][0] && board[i][0] == 'O') {
            dfs(i, 0, drow, dcol, vis, board);
        }
        // for the last col
        if (!vis[i][m - 1] && board[i][m - 1] == 'O') {
            dfs(i, m-1, drow, dcol, vis, board);
        }
    }
    for (int i = 0;i < n; i++) {
        for (int j = 0;j < m; j++) {
            if (!vis[i][j] && board[i][j] == 'O') {
                board[i][j] = 'X';
            }
        }
    }
}

int main() {
    vector<vector<char>> matrix = {
    {'X', 'O', 'X', 'O', 'X', 'O'},
    {'O', 'X', 'O', 'X', 'O', 'X'},
    {'X', 'O', 'X', 'O', 'X', 'O'},
    {'O', 'X', 'O', 'X', 'O', 'X'}
    };
    cout << "input";
    __veprint2D(matrix);
    solve(matrix);
    cout << "output";
    __veprint2D(matrix);
    return 0;
}