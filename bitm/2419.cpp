#include "../headers/stdc++.h";
using namespace std;
// AND for the two numbers is always going to be equal or less
// a1 & a2 <= a1 , a2
int longestSubarray(vector<int> &nums){
    int n = nums.size(), maxValue=INT_MIN, maxLen=INT_MIN,result=0;
    for(int num:nums){
        if(num > maxValue){
            maxValue = num;
            maxLen = 0;
            result = 0;
        }
        if(num == maxValue){
            result++;

        }else{
            result = 0;
        }
        maxLen = max(result, maxLen);
    }
    return maxLen;
}
int main(){
     int a = 1 & 2;
     cout << a;
     return 0;
}