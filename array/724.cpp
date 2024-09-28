#include <stdc++.h>
using namespace std;

// https://leetcode.com/problems/find-pivot-index/solutions/512992/python-go-java-js-c-o-n-sol-by-balance-scale-w-animation

// balance scale algorithm
int pivotIndex(vector<int> &nums)
{
  int leftSum = 0;                                        // leftsum
  int rightSum = accumulate(nums.begin(), nums.end(), 0); // rightsum
  for (int i = 0; i < nums.size(); i++)
  {
    rightSum -= nums[i];
    if (rightSum == leftSum)
      return i;
    leftSum += nums[i];
  }
  return -1;
}

int main() { return 0; }