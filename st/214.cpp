#include <stdc++.h>
using namespace std;
// Brute force
// bool isPalindrome(int l,int r,string s){
//     while(l<=r){
//         if(s[r] != s[l]){
//             return false;
//         }
//         l++;
//         r--;
//     }
//     return true;
// }

// string shortestPalindrome(string s){
//     int n = s.size();
//     for (int r = n - 1; r >= 0;r--){
//         if(isPalindrome(0,r,s)){
//             string suffix = s.substr(r + 1);
//             reverse(suffix.begin(),suffix.end());
//             return suffix+s;
//         }
//     }
//     return "";
// }

// Robin Karp Optimal
string shortestPalindrome(string s)
{
    int base = 29, lastInd = 0, power = 1, prefix = 0, suffix = 0;
    long long mod = 10e7 + 7;
    for (int i = 0; i < s.size(); i++)
    {
        long long c = (s[i] - 'a') + 1; // get the value for that char
        prefix = (prefix * base + c) % mod;

        suffix = (suffix + c * power) % mod;
        power = (power * base) % mod;

        if (prefix == suffix)
            lastInd = i;
    }

    string suf = s.substr(lastInd + 1);
    return suf + s;
}
int main()
{
    string s = "abcd";
    cout << shortestPalindrome(s);
    return 0;
}