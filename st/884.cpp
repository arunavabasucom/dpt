#include "../headers/arr.h";
#include <stdc++.h>

using namespace std;

vector<string> uncommonFromSentences(string s1, string s2)
{
  vector<string> ans;
  int s1len = s1.size(), s2len = s2.size();
  unordered_map<string, int> umap;
  stringstream ss1(s1);
  stringstream ss2(s2);
  string word;
  // first string
  while (ss1 >> word)
  {
    umap[word]++;
  }
  while (ss2 >> word)
  {
    umap[word]++;
  }
  for (auto pair : umap)
  {
    if (pair.second <= 1)
    {
      ans.push_back(pair.first);
    }
  }
  return ans;
}

int main()
{
  string s1 = "this apple is sweet";
  string s2 = "this apple is sour";
  __veprint(uncommonFromSentences(s1, s2));
  return 0;
}