#include "../headers/stdc++.h";
using namespace std;
// TC - O(N*N)
// SC - O(N*N) + O(N)

int helper(int n, int prev, vector<vector<int>> &dp,vector<int> &arr){
    // if we run out of elements return 0
    if (n == arr.size())
        return 0;
    // because prev is start from -1
    int prevInd = prev + 1;
    if (dp[n][prevInd] != -1)
        return dp[n][prevInd];

    int p = INT_MIN, np = INT_MIN;
    // not pick
    np = helper(n + 1, prev, dp,arr);
    // pick
    if (prev == -1 || arr[n] > arr[prev]){
        p = 1 + helper(n + 1, n,dp, arr);
    }
    int len = max(p, np);
    return dp[n][prevInd] = len ;
}

int lengthOfLIS(vector<int> &nums){
    int n = nums.size();
    vector<vector<int>> dp(n+1,vector<int>(n,-1));
    return helper(0, -1, dp,nums);
}
int main(){
    vector<int> arr = {10, 9, 2, 5, 3, 7, 101, 18};
    cout << lengthOfLIS(arr);
    return 0;
}