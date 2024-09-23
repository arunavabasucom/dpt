#include "../headers/arr.h"
#include "../headers/stdc++.h"
using namespace std;

vector<int> asteroidCollision(vector<int> &asteroids) {
  vector<int> res;
  int n = asteroids.size(), l = 0;
  for (int num : asteroids) {
    while (!res.empty() && res.back() > 0 && num < 0) {
      if (res.back() + num < 0) {
        res.pop_back();
      } else if (res.back() + num > 0) {
        num = 0;
      } else {
        res.pop_back();
        num = 0;
      }
    }
    if (num != 0)
      res.push_back(num);
  }

  return res;
}
int main() {
  vector<int> arr = {-2, -2, 1, -2};
  __veprint(asteroidCollision(arr));
  return 0;
}