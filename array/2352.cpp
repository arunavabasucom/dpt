#include <stdc++.h>
using namespace std;
// TC - O(N3)
/*
int equalPairs(vector<vector<int>> &grid) {
  int m = grid.size(), n = grid[0].size(), count = 0;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      bool isEqual = true;
      for (int z = 0; z < n; z++) {
        if (grid[i][z] != grid[z][j]) {
          isEqual = false;
        }
      }
      if (isEqual)
        count++;
    }
  }
  return count;
}
*/
// TC - O(N2)
int equalPairs(vector<vector<int>> &grid)
{
  int m = grid.size(), n = grid[0].size(), count = 0;
  map<vector<int>, int> mp;
  for (int i = 0; i < m; i++)
  {
    mp[grid[i]]++;
  }
  for (int i = 0; i < n; i++)
  {
    vector<int> arr;
    // i = column;
    for (int j = 0; j < m; j++)
    {

      arr.push_back(grid[j][i]);
    }
    count += mp[arr];
  }
  return count;
}

int main()
{
  vector<vector<int>> arr = {
      {3, 1, 2, 2}, {1, 4, 4, 5}, {2, 4, 2, 2}, {2, 4, 2, 2}};
  ;
  cout << equalPairs(arr);
  return 0;
}