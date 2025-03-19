//https://prepinsta.com/tcs-codevita/c-code-for-zero-count-tcs-codevita-prepinsta/ 
#include <bits/stdc++.h>
using namespace std;
// 3 -l 3-k
// 111 ->0

// 3 1 
// 010 100 001 -> 1(010)

// 3 0
// 000 -> l(3)

int zeroCount(int length, int ones) {
    if (ones == 0) {
        return length;
    }
    if (length == ones) {
        return 0;
    }
    if (length > 0) {
        return 1;
    }
}


int main() {
    int l, k;
    cin >> l >> k;
    int ans = zeroCount(l, k);
    cout << ans;
    return 0;
}