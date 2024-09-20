#include "headers/stdc++.h";
using namespace std;
int helper(int n, vector<int>& nums){
  if(n<0)
    return 0;
  if(n==0)
    return nums[n];
  int np = INT_MIN, p = INT_MAX;
  np = helper(n - 1, nums);
  p = nums[n] + helper(n - 2,nums);

  return max(np, p);
}

int rob(vector<int> &nums){
  
  return helper(nums.size()-1, nums);
}

int main(){
  vector<int> arr = {2, 1};
  cout << rob(arr);
  return 0;
}