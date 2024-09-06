#include "../headers/stdc++.h";
using namespace std;

int maxOperations(vector<int> &nums, int k){
    int n = nums.size();
    int l = 0, h = n - 1,count=0;
    sort(nums.begin(), nums.end());
    while (l < h){
        int total = nums[l] + nums[h];
        if (total == k){
            count++;
            l++;
            h--;
        }
        else if (total<k){
            l++;
        }
        else{
            h--;
        }
    }
    return count;
}
int main(){
    
    return 0;
}