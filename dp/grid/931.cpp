#include "../../headers/stdc++.h";
using namespace std;
int helper(int i, int j, vector<vector<int>> &memo, vector<vector<int>> &matrix){
    if (j < 0 || j >= matrix[0].size())
        return 1e9;
    if (i == 0)
        return matrix[i][j];
    if(memo[i][j] != INT_MAX)
        return memo[i][j];

        // movement
    int up = matrix[i][j] + helper(i - 1, j, memo,matrix);
    int ld = matrix[i][j] + helper(i - 1, j - 1,memo, matrix);
    int rd = matrix[i][j] + helper(i - 1, j + 1,memo, matrix);
    return memo[i][j] = min(up, min(ld, rd));
}
int minFallingPathSum(vector<vector<int>> &matrix){
    // row                column
    int m = matrix.size(),n = matrix[0].size(),res = INT_MAX;    vector<vector<int>> memo(m, vector<int>(n,INT_MAX));
    for (int i = 0; i < n; i++){
        res = min(res, helper(m - 1, i, memo,matrix));
    }

    return res;
}
int main(){
    vector<vector<int>> matrix = {{2, 1, 3}, {6, 5, 4}, {7, 8, 9}};
    cout << minFallingPathSum(matrix);
    return 0;
}