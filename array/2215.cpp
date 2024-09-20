#include "../headers/stdc++.h";
using namespace std;
// TC - O(M+N)
// sc - O(M+N)
vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2) {
  set<int> s1(nums1.begin(), nums1.end()), s2(nums2.begin(), nums2.end());
  vector<int> temp1, temp2;
  for (int num : s1) {
    if (!s2.count(num)) {
      temp1.push_back(num);
    }
  }
  for (int num : s2) {
    if (!s2.count(num)) {
      temp2.push_back(num);
    }
  }

  return {temp1, temp2};
}
int main() { return 0; }