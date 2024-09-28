#include <stdc++.h>
using namespace std;
string decodeString(string s)
{
  // stack
  stack<char> st;
  int n = s.size();
  // iterate over the string
  for (int i = 0; i < n; i++)
  {
    // if the element is not ] then just push the elements
    if (s[i] != ']')
    {
      st.push(s[i]);
    }
    else
    {
      string strn = "";
      while (st.top() != '[')
      {

        strn = st.top() + strn;
        st.pop();
      }
      st.pop(); // for [
      string number = "";
      while (!st.empty() && isdigit(st.top()))
      {
        number = st.top() + number;
        st.pop();
      }
      int times = stoi(number);
      // push into the stack that  number
      while (times--)
      {
        for (int i = 0; i < strn.size(); i++)
        {
          st.push(strn[i]);
        }
      }
    }
  }
  string ans = "";
  while (!st.empty())
  {
    ans = st.top() + ans;
    st.pop();
  }
  return ans;
}
int main()
{
  string st = "3[a]2[bc]";
  cout << decodeString(st);
  return 0;
}