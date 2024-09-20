#include "../headers/stdc++.h";
using namespace std;
int findPeakElement(vector<int> &nums) {
  int n = nums.size(), l = 0, r = n - 1;
  while (l <= r) {
    int mid = (l + r) / 2;
    if (nums[mid] > nums[mid + 1])
      return mid;
    else if (nums[mid < nums[mid + 1]])
      l = mid + 1;
    else
      r = mid - 1;
  }
  return -1;
}
int main() {
    vector<int> arr = {1, 2, 1, 3, 5, 6, 4};
    cout << findPeakElement(arr);
    return 0;
}