#include "../headers/stdc++.h";
using namespace std;
// need to optimize

vector<int> xorQueries(vector<int> &arr, vector<vector<int>> &queries) {

  vector<int> res;
  for (int i = 0; i <= queries.size() - 1; i++) {
    int temp = queries[i][0];
    for (int j = queries[i][0] + 1; j <= queries[i][1]; j++) {
      temp ^= arr[j];
    }
    res.push_back(temp);
  }

  return res;
}
int main() {
  vector<int> arr = {1, 3, 4, 8};
  vector<vector<int>> queries = {{0, 1}, {1, 2}, {0, 3}, {3, 3}};
  xorQueries(arr, queries);
  return 0;
}