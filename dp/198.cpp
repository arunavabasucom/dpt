#include <stdc++.h>
using namespace std;

// int helper(int ind, vector<int> &nums,vector<int> dparr) {
//   if (ind == 0)
//     return nums[ind];
//   if (ind < 0)
//     return 0;
//   if(dparr[ind] != -1){
//     return dparr[ind];
//   }
//   // pick
//   int pick = nums[ind] + helper(ind - 2, nums,dparr);
//   // not pick
//   int notPick = helper(ind - 1, nums,dparr);

//   return dparr[ind] =  max(pick, notPick);
// }
// int rob(vector<int> &nums) {
//   int n = nums.size();
//   vector<int> dparr(n, -1);
//   return helper(n - 1, nums,dparr);
// }

int rob(vector<int> &nums)
{
  int n = nums.size();
  vector<int> dparr(n, -1);
  int prev = nums[0];
  int prev2 = nums[n - 1];
  for (int i = 1; i < n; i++)
  {
    int curr = nums[i];
    int notPick = prev;
    if (n - i >= 0)
    {
      curr += prev2;
    }
    int res = max(curr, notPick);
    prev2 = prev;
    prev = res;
  }
  return prev;
}

int main()
{

  vector<int> arr = {183, 219, 57, 193, 94, 233, 202, 154, 65, 240,
                     97, 234, 100, 249, 186, 66, 90, 238, 168, 128,
                     177, 235, 50, 81, 185, 165, 217, 207, 88, 80,
                     112, 78, 135, 62, 228, 247, 211};
  int a = rob(arr);
  cout << a;
  return 0;
}