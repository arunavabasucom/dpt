#include "../headers/stdc++.h";
using namespace std;
// f(n) -> f(n-1) + f(n-2)
// 2451637
// int fibo(int n){
//     if (n <= 1)
//         return n;
//     return fibo(n - 1) + fibo(n - 2);
// }
// memoziation - we need to store the sub problen
// for not more computation
// DP 
// TC - O(N)
// SC - O(N)->stack space + O(N) -> array
int fiboDP(int n,vector<int> &dparr){ 
    if(n<=1)
        return n;
    // if the already computed then just get that
    if(dparr[n] != -1){
        return dparr[n];
    }
    return dparr[n]= fiboDP(n - 1, dparr) + fiboDP(n - 2, dparr);
}

// Tabulation
// bottom up
// TC - O(N) SC - O(N)[more optimised because of not taking extra
// stack space]
// dp[0] = 0
// dp[1] = 1
// for (int i = 2; i< len; i++){
//  dp[i] = dp[i-1] + dp[i-2];
//}
// Removing also the space 
// i


int main(){

    int n = 4;
    
    vector<int> dparr(n + 1, -1);
    cout << fiboDP(n, dparr);
    // TC - O(N) NOT TAKING EXTRA SPACE
    // int prev = 0;
    // int prev2 = 1;
    // for (int i = 2; i < n;i++){
    //     int curr = prev + prev2;
    //     prev2 = prev;
    //     prev = curr;
    // }
        return 0;
}