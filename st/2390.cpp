#include "../headers/stdc++.h";
using namespace std;
string removeStars(string s){
    stack<char> st;
    string ans;
    // iterate
    for(char c:s){
        if(st.empty()){
            st.push(c);
        }
        else if(st.top() != st.empty() && c == '*'){
            st.pop();
        }else{

        st.push(c);
        }
    }
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main(){
    string s = "leet**cod*e"; //lecoe
    cout<<removeStars(s);
    return 0;
}