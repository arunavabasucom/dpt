#include <stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
  int m = matrix.size(), n = matrix[0].size(), top = 0, bottom = m - 1,
      left = 0, right = n - 1, id = 0;
  vector<int> res;
  while (top <= bottom && left <= right)
  {
    // left to right
    if (id == 0)
    {
      for (int i = left; i <= right; i++)
      {
        res.push_back(matrix[top][i]);
      }
      top++;
    }
    // top to bottom
    if (id == 1)
    {
      for (int i = top; i <= bottom; i++)
      {
        res.push_back(matrix[i][right]);
      }
      right--;
    }
    // right to left
    if (id == 2)
    {
      for (int i = right; i >= left; i--)
      {
        res.push_back(matrix[bottom][i]);
      }
      bottom--;
    }
    // bottom to top
    if (id == 3)
    {
      for (int i = bottom; i >= top; i--)
      {
        res.push_back(matrix[i][left]);
      }
      left++;
    }
    id = (id + 1) % 4;
  }
  return res;
}
int main()
{
  vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  return 0;
}