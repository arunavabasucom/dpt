#include "../headers/stdc++.h";
using namespace std;

int countConsistentStrings(string allowed, vector<string> &words) {
  int res = words.size();
  bool alpha[123];

  // itreate the allowed words
  for (char c : allowed) {
    alpha[c] = true;
  }
  // itreate the words list
  for (string word : words) {
    // iterate single word
    for (char c : word) {
      if (!alpha[c]) {
        res--;
        break;
      }
    }
  }
  return res;
}

int main() { return 0; }