#include "../headers/stdc++.h";
using namespace std;
// https://leetcode.com/problems/climbing-stairs/
// 1. count the total no of ways
// 2. try all possible ways
// 3. best ways

//(shortcut)
// 1. try to represent in terms of index
// 2. try to do all the possible stuff on that index
// 3. sum of all the stuff -> count ways 
// 4. minimum for minimum

// BR. FO.
// TC - O(2^n);

// int climbStairs(int n){
//     if(n<0)
//         return 0;
//     if(n==0)
//         return 1;
//     int one_step = climbStairs(n - 1);
//     int two_step = climbStairs(n - 2);
//     return one_step + two_step;
// }

// OPTIMISED MEMOISED
//  TC -  SC -
// int t[46];
// int solve(int n){
//     if (n < 0)
//         return 0;
//     if (n == 0)
//         return 1;    
//     if(t[n] != -1)
//         return t[n];
//     int one_step = solve(n - 1);
//     int two_step = solve(n - 2);
//     return t[n] =one_step + two_step;
// }
//  int climbStairs(int n) {
//      memset(t, -1, sizeof(t));
//      return solve(n);
//  }
int climbStairs(int n){
    if(n==1 || n==2 || n==3)
        return n;
    vector<int> arr(n + 1);
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;
    for (int i = 3; i <= n; i++){
        arr[i] = arr[i - 2] + arr[i - 1];
    }
    return arr[n];
}

 int main(){
     vector<int> marr(46);

     return 0;
 }