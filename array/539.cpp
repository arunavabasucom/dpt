#include <stdc++.h>
using namespace std;

int findMinDifference(vector<string> &timePoints)
{
  vector<int> timediffs;
  int res = INT_MAX, n = timePoints.size();
  for (string time : timePoints)
  {
    int hour = stoi(time.substr(0, 2));
    int minutes = stoi(time.substr(3, 2));
    int timediff = (hour * 60) + minutes;
    timediffs.push_back(timediff);
  }
  sort(timediffs.begin(), timediffs.end());
  for (int i = 1; i < n; i++)
  {
    int timediffPoints = timediffs[i] - timediffs[i - 1];
    res = min(res, timediffPoints);
  }
  return min(res, (24 * 60 - timediffs[n - 1]) + timediffs[0]);
}
int main()
{
  vector<string> arr = {"23:59", "00:00"};
  cout << findMinDifference(arr);
  return 0;
}