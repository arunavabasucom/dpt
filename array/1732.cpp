#include "../headers/stdc++.h";
using namespace std;
int largestAltitude(vector<int> &gain) {
  int maxi = 0, n = gain.size(), last = 0;
  for (int num : gain) {
    last += num;
    maxi = max(maxi, last);
  }

  return maxi;
}
int main() { return 0; }