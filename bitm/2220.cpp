#include <stdc++.h>
using namespace std;
int minBitFlips(int start, int goal)
{
  int differ = start ^ goal;
  int count = 0;
  while (differ)
  {
    if (differ & 1)
    {
      count++;
    }
    differ = differ >> 1;
  }
  return count;
}
int main()
{
  cout << minBitFlips(3, 4);
  return 0;
}