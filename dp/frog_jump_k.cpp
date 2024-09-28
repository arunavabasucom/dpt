#include <stdc++.h>
using namespace std;
int check(vector<int> &arr, int n, vector<int> &dparr, int k)
{
  if (n == 0)
  {
    return 0;
  }
  if (dparr[n] != -1)
  {
    return dparr[n];
  }
  int minsteps = INT_MAX;
  int kss;
  for (int i = 1; i <= k; i++)
  {
    if (n - i >= 0)
    {
      kss = check(arr, n - i, dparr, k) + abs(arr[n - i] - arr[n]);
    }
    minsteps = min(minsteps, kss);
  }

  return dparr[n] = minsteps;
}
int minimizeCost(vector<int> &arr, int &k)
{
  vector<int> dparr(arr.size(), -1);
  return check(arr, arr.size() - 1, dparr, k);
}

int main()
{
  minimizeCost({10, 30, 40, 50, 20}, 3);
  return 0;
}