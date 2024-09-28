// need to check

#include <stdc++.h>
using namespace std;
int divide(int dividend, int divisor)
{
  if (dividend == divisor)
    return 1;
  bool sign = true; // +ve
  if (dividend >= 0 && divisor < 0)
    sign = false; // -ve
  else if (dividend <= 0 && divisor > 0)
    sign = false;
  long n = abs(dividend);
  long d = abs(divisor);
  long res = 0; // ans
  while (n >= d)
  {
    int power = 0;
    while (n >= (d << (power + 1)))
    {
      power += 1;
    }
    res += (1 << power);
    n -= d << power;
  }
  if (res == (1 << 31) && sign)
    return INT_MAX;
  if (res >= (1 << 31) && !sign)
    return INT_MIN;
  return sign ? res : -res;
}
int main()
{
  cout << divide(10, 3);
  return 0;
}