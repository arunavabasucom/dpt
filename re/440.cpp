#include "../headers/stdc++.h";
#include "../headers/arr.h";

using namespace std;
int helper(long a, long b, long &n) {
    int gap = 0;
    while( a <= n){
        gap += min(n + 1, b) - a;
        a *= 10;
        b *= 10;
    }
    return gap;
}
int findKthNumber(long n, int k) {
    long num = 1;
    for (int i = 1; i < k;){
        int req = helper(num, num + 1, n);
        if (i + req <= k){
            i += req;
            num++;
        }else{
            i++;
            num *= 10;
        }
    }
    return num;
}
int main() {
  cout << findKthNumber(100, 90);
  return 0;
}