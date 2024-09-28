#pragma once
#include <iostream>
#include <vector>

using namespace std;

template <typename T> void __veprint(const vector<T> &vec);

template <typename T> void __veprint2D(const vector<vector<T>> &matrix);

// Function to print a 1D vector
template <typename T> void __veprint(const vector<T> &vec) {
  cout << "[";
  for (size_t i = 0; i < vec.size(); ++i) {
    cout << vec[i];
    if (i < vec.size() - 1) {
      cout << ",";
    }
  }
  cout << "]" << endl;
}

// Function to print a 2D vector (matrix)
template <typename T> void __veprint2D(const vector<vector<T>> &matrix) {
  cout << "[\n";
  for (const auto &row : matrix) {
    __veprint(row); // Call __veprint for each row
  }
  cout << "]"<<endl;
}
