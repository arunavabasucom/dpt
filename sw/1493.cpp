#include "../headers/stdc++.h";
using namespace std;
int longestSubarray(vector<int> &nums) {

  int l = 0, r = 0, maxlen = 0, ele = 0, n = nums.size();
  while (r < n) {
    if (nums[r] != 1)
      ele++;
    while (ele > 1) {
      if (nums[l] != 1)
        ele--;
      l++;
    }

    maxlen = max(maxlen, r - l + 1);
    r++;
  }
  if (ele == 0) {
    ele = 1;
  }
  return maxlen - ele;
}
int main() { return 0; }