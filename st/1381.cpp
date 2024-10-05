#include <stdc++.h>
using namespace std;

class CustomStack {
public:
  vector<int> st;
  int limit;
  CustomStack(int maxSize) { limit = maxSize; }

  void push(int x) {
    if (st.size() == limit)
      return;
    st.push_back(x);
  }

  int pop() {
    if (st.size() == 0)
      return -1;
    int pe = st.back();
    st.pop_back();
    return pe;
  }

  void increment(int k, int val) {
    for (int i = 0; i < k && i < st.size(); i++) {
      st[i] += val;
    }
  }
};
int main() { return 0; }