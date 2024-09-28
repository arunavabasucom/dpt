#include <stdc++.h>
#include "../headers/arr.h";

using namespace std;

vector<int> countBits(int n)
{
  if (n == 0)
  {
    return {0};
  }
  vector<int> res(n + 1);
  res[0] = 0;

  for (int i = 1; i < n + 1; i++)
  {
    if (i % 2 != 0)
    {
      res[i] = res[i / 2] + 1;
    }
    else
    {
      res[i] = res[i / 2];
    }
  }
  return res;
}

int main()
{
  __veprint(countBits(5));
  return 0;
}