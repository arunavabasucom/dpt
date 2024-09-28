#include "../headers/arr.h";
#include <stdc++.h>

using namespace std;
// bc - bc1  b2
// N -> length of the word
// L -> each charcter
// TC -(N*L)
// SC - (N*L)
struct trieNode
{
  int count = 0;
  trieNode *child[26];
};
// getNode
trieNode *getNode()
{
  trieNode *newNode = new trieNode();
  for (int i = 0; i < 26; i++)
  {
    newNode->child[i] = nullptr;
  }
  newNode->count = 0;
  return newNode;
}
// insert
void insert(string word, trieNode *root)
{
  trieNode *crwal = root;
  for (char &c : word)
  {
    int idx = c - 'a';
    if (!crwal->child[idx])
    {
      crwal->child[idx] = getNode();
    }
    crwal->child[idx]->count++;
    crwal = crwal->child[idx];
  }
}
int getScore(string word, trieNode *root)
{
  trieNode *crwal = root;
  int score = 0;
  for (char c : word)
  {
    int idx = c - 'a';
    score += crwal->child[idx]->count;
    crwal = crwal->child[idx];
  }
  return score;
}

vector<int> sumPrefixScores(vector<string> &words)
{

  int n = words.size();
  vector<int> result(n);
  trieNode *root = new trieNode();
  for (string &word : words)
  {
    insert(word, root);
  }
  for (int i = 0; i < n; i++)
  {
    result[i] = getScore(words[i], root);
  }

  return result;
}
int main()
{
  vector<string> words = {"abcd"};
  __veprint(sumPrefixScores(words));
  return 0;
}