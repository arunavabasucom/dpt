#include "../headers/stdc++.h";
using namespace std;
int check(vector<int> nums) {
  int n = nums.size();
  vector<int> dparr(n, -1);
  int prev = nums[0];
  int prev2 = 0;
  cout << prev2;
  for (int i = 1; i < n; i++) {
    int curr = nums[i];
    int notPick = prev;
    if (n - i >= 0) {
      curr += prev2;
    }
    int res = max(curr, notPick);
    prev2 = prev;
    prev = res;
  }
  return prev;
}

int rob(vector<int> &nums) {
  if (nums.size() <= 1) {
    return check(nums);
  }
  vector<int> nums1 = nums;
  vector<int> nums2 = nums;

  // Remove the last element from nums1
  nums1.pop_back();
  int fh = check(nums1);

  // Remove the first element from nums2
  nums2.erase(nums2.begin());
  int lh = check(nums2);

  return max(fh, lh);
}
int main() { return 0; }