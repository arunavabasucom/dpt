#include <arr.h> // Include your header file

int main()
{
  // vector<int> arr = {1, 2, 3, 4};
  // __veprint(arr); // Print 1D vector

  vector<int> arr = {1, 2, 3, 4};

  __veprint(arr); // Print 1D vector
  vector<vector<int>> matrix = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}};
  __veprint2D(matrix); // Print 2D vector

  return 0;
}
