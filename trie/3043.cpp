#include <stdc++.h>
using namespace std;
// take look at trie solution
int longestCommonPrefix(vector<int> &arr1, vector<int> &arr2)
{
  set<int> st;
  for (int num : arr1)
  {
    while (num && !st.count(num))
    {
      st.insert(num);
      num = num / 10;
    }
  }
  int result = 0;
  for (int num : arr2)
  {
    while (num && !st.count(num))
    {
      num /= 10;
    }
    if (num > 0)
    {
      result = max(result, static_cast<int>(log10(num) + 1));
    }
  }
  return result;
}

int main()
{
  vector<int> arr1 = {1, 2, 3};
  vector<int> arr2 = {4, 4, 4};
  cout << longestCommonPrefix(arr1, arr2);
  return 0;
}